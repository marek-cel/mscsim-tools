#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <iomanip>
#include <iostream>

#include <arpa/inet.h>

#include <Noise.h>
#include <Units.h>

////////////////////////////////////////////////////////////////////////////////

void htond( double &x )
{
    int *x_ptr = (int*)( &x );
    int temp = x_ptr [0];

    x_ptr[0] = htonl( x_ptr[1] );
    x_ptr[1] = htonl( temp );
}

////////////////////////////////////////////////////////////////////////////////

void htonf( float &x )
{
    int *x_ptr = (int*)( &x );
    int temp = x_ptr[0];

    x_ptr[0] = htonl( temp );
}

////////////////////////////////////////////////////////////////////////////////

MainWindow::MainWindow( QHostAddress address, quint16 port, QWidget *parent ) :
    QMainWindow( parent ),
    _ui( new Ui::MainWindow ),

    _address ( address ),
    _port ( port ),

    _timer  ( nullptr ),
    _socket ( nullptr ),

    _timeStep ( 0.0 ),
    _realTime ( 0.0 ),

    _timerId ( 0 ),

    _inited ( false )
{
    _ui->setupUi( this );

    _timer = new QElapsedTimer();

    _socket = new QUdpSocket();
    _socket->bind( _address, _port, QUdpSocket::ShareAddress );

    memset( &_net_fdm , 0, sizeof(FGNetFDM) );

    memset( &_dataInp       , 0, sizeof(DataInp) );
    memset( &_dataInp_noise , 0, sizeof(DataInp) );

    _timer->start();
    //_timerId = startTimer( 17 );  //  17 us ~ 60 Hz
    _timerId = startTimer( 100 );   // 100 us = 10 Hz
}

////////////////////////////////////////////////////////////////////////////////

MainWindow::~MainWindow()
{
    if ( _fstream.is_open() )
    {
        _fstream.flush();
        _fstream.close();
    }

    killTimer( _timerId );

    if ( _timer ) delete _timer;
    _timer = nullptr;

    if ( _ui ) delete _ui;
    _ui = nullptr;

    if ( _socket ) delete _socket;
    _socket = nullptr;
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::timerEvent( QTimerEvent *event )
{
    /////////////////////////////////
    QMainWindow::timerEvent( event );
    /////////////////////////////////

    _timeStep = (double)_timer->restart() / 1000.0;

    //std::cout << _realTime << std::endl;

    if ( _socket->state() == QAbstractSocket::UnconnectedState )
    {
        _socket->bind( _address, _port, QUdpSocket::ShareAddress );
    }
    else
    {
        if ( _socket->state() == QAbstractSocket::BoundState )
        {
            bool new_data = false;

            while ( _socket->hasPendingDatagrams() )
            {
                qint64 size = _socket->readDatagram( (char*)(&_net_fdm), (qint64)sizeof(FGNetFDM) );

                if ( size == (qint64)sizeof(FGNetFDM) )
                {
                    new_data = true;

                    convertByteOrder( _net_fdm );

                    if ( _net_fdm.version != FG_NET_FDM_VERSION )
                    {
                        std::cout << "Wrong FG_NET_FDM_VERSION" << std::endl;
                    }
                }
            }

            if ( new_data )
            {
                convertData( _net_fdm, &_dataInp );
                _dataInp_noise = applyNoise( _dataInp );
                writeRecord( _dataInp_noise );
                updateData();
            }
        }
    }

    if ( _inited )
    {
        _realTime += _timeStep;
    }
}

////////////////////////////////////////////////////////////////////////////////

DataInp MainWindow::applyNoise( const DataInp &dataInp )
{
    DataInp result = dataInp;

    result.longitude += Noise::instance()->get_longitude();
    result.latitude  += Noise::instance()->get_latitude();

    result.altitude_asl += Noise::instance()->get_altitude_asl();
    result.altitude_agl += Noise::instance()->get_altitude_agl();

    result.phi += Noise::instance()->get_phi();
    result.tht += Noise::instance()->get_tht();
    result.phi += Noise::instance()->get_phi();

    result.alpha += Noise::instance()->get_alpha();
    result.beta  += Noise::instance()->get_beta();

    return result;
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::convertByteOrder( FGNetFDM &net_fdm )
{
    net_fdm.version = htonl( net_fdm.version );
    net_fdm.padding = htonl( net_fdm.padding );

    htond( net_fdm.longitude );
    htond( net_fdm.latitude  );
    htond( net_fdm.altitude  );

    htonf( net_fdm.agl   );
    htonf( net_fdm.phi   );
    htonf( net_fdm.theta );
    htonf( net_fdm.psi   );
    htonf( net_fdm.alpha );
    htonf( net_fdm.beta  );

    htonf( net_fdm.phidot     );
    htonf( net_fdm.thetadot   );
    htonf( net_fdm.psidot     );
    htonf( net_fdm.vcas       );
    htonf( net_fdm.climb_rate );
    htonf( net_fdm.v_north    );
    htonf( net_fdm.v_east     );
    htonf( net_fdm.v_down     );
    htonf( net_fdm.v_body_u   );
    htonf( net_fdm.v_body_v   );
    htonf( net_fdm.v_body_w   );

    htonf( net_fdm.A_X_pilot );
    htonf( net_fdm.A_Y_pilot );
    htonf( net_fdm.A_Z_pilot );

    htonf( net_fdm.stall_warning );
    htonf( net_fdm.slip_deg      );

    net_fdm.num_engines = htonl( net_fdm.num_engines );
    for ( int i = 0; i < FGNetFDM::FG_MAX_ENGINES; i++ )
    {
        net_fdm.eng_state[ i ] = htonl( net_fdm.eng_state[ i ] );

        htonf( net_fdm.rpm       [ i ] );
        htonf( net_fdm.fuel_flow [ i ] );
        htonf( net_fdm.fuel_px   [ i ] );
        htonf( net_fdm.egt       [ i ] );
        htonf( net_fdm.cht       [ i ] );
        htonf( net_fdm.mp_osi    [ i ] );
        htonf( net_fdm.tit       [ i ] );
        htonf( net_fdm.oil_temp  [ i ] );
        htonf( net_fdm.oil_px    [ i ] );
    }

    net_fdm.num_tanks = htonl( net_fdm.num_tanks );
    for ( int i = 0; i < FGNetFDM::FG_MAX_TANKS; i++ )
    {
        htonf( net_fdm.fuel_quantity[ i ] );
    }

    net_fdm.num_wheels = htonl( net_fdm.num_wheels );
    for ( int i = 0; i < FGNetFDM::FG_MAX_WHEELS; i++ )
    {
        net_fdm.wow[ i ] = htonl( net_fdm.wow[ i ] );

        htonf( net_fdm.gear_pos         [ i ] );
        htonf( net_fdm.gear_steer       [ i ] );
        htonf( net_fdm.gear_compression [ i ] );
    }

    net_fdm.cur_time = htonl( net_fdm.cur_time );
    net_fdm.warp     = htonl( net_fdm.warp     );

    htonf( net_fdm.visibility );

    htonf( net_fdm.elevator          );
    htonf( net_fdm.elevator_trim_tab );
    htonf( net_fdm.left_flap         );
    htonf( net_fdm.right_flap        );
    htonf( net_fdm.left_aileron      );
    htonf( net_fdm.right_aileron     );
    htonf( net_fdm.rudder            );
    htonf( net_fdm.nose_wheel        );
    htonf( net_fdm.speedbrake        );
    htonf( net_fdm.spoilers          );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::convertData( const FGNetFDM &net_fdm, DataInp *dataInp )
{
    dataInp->longitude = Units::rad2deg( net_fdm.longitude );
    dataInp->latitude  = Units::rad2deg( net_fdm.latitude  );

    dataInp->altitude_asl = net_fdm.altitude;
    dataInp->altitude_agl = net_fdm.agl;

    dataInp->phi = Units::rad2deg( net_fdm.phi   );
    dataInp->tht = Units::rad2deg( net_fdm.theta );
    dataInp->psi = Units::rad2deg( net_fdm.psi   );

    dataInp->alpha = Units::rad2deg( net_fdm.alpha );
    dataInp->beta  = Units::rad2deg( net_fdm.beta  );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateData()
{
    _ui->spinBoxLon->setValue( _dataInp.longitude );
    _ui->spinBoxLat->setValue( _dataInp.latitude  );

    _ui->spinBoxAltASL->setValue( _dataInp.altitude_asl );
    _ui->spinBoxAltAGL->setValue( _dataInp.altitude_agl  );

    _ui->spinBoxPhi ->setValue( _dataInp.phi );
    _ui->spinBoxTht ->setValue( _dataInp.tht );
    _ui->spinBoxPsi ->setValue( _dataInp.psi );

    _ui->spinBoxAlpha ->setValue( _dataInp.alpha );
    _ui->spinBoxBeta  ->setValue( _dataInp.beta  );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::writeHeader()
{
    _fstream << "\"time\"";

    _fstream << ";" << "\"lon\"";
    _fstream << ";" << "\"lat\"";

    _fstream << ";" << "\"alt_asl\"";
    _fstream << ";" << "\"alt_agl\"";

    _fstream << ";" << "\"phi\"";
    _fstream << ";" << "\"tht\"";
    _fstream << ";" << "\"psi\"";

    _fstream << ";" << "\"alpha\"";
    _fstream << ";" << "\"beta\"";

    _fstream << "\n";
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::writeRecord( const DataInp &dataInp )
{
    if ( _inited )
    {
        _fstream << std::setprecision( 4 ) << _realTime;

        _fstream << ";" << std::setprecision( 8 ) << dataInp.longitude;
        _fstream << ";" << std::setprecision( 8 ) << dataInp.latitude;

        _fstream << ";" << std::setprecision( 3 ) << dataInp.altitude_asl;
        _fstream << ";" << std::setprecision( 3 ) << dataInp.altitude_agl;

        _fstream << ";" << std::setprecision( 3 ) << dataInp.phi;
        _fstream << ";" << std::setprecision( 3 ) << dataInp.tht;
        _fstream << ";" << std::setprecision( 3 ) << dataInp.psi;

        _fstream << ";" << std::setprecision( 3 ) << dataInp.alpha;
        _fstream << ";" << std::setprecision( 3 ) << dataInp.beta;

        _fstream << "\n";
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_pushButtonInit_clicked()
{
    if ( !_inited )
    {
        _inited = true;
        _ui->pushButtonInited->setChecked( true );

        _fstream.open( "../record.csv", std::ios_base::out );

        _fstream.setf( std::ios_base::showpoint );
        _fstream.setf( std::ios_base::fixed );

        writeHeader();
    }
}
