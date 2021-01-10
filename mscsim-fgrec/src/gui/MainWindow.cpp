/****************************************************************************//*
 * Copyright (C) 2021 Marek M. Cel
 *
 * Creative Commons Legal Code
 *
 * CC0 1.0 Universal
 *
 *     CREATIVE COMMONS CORPORATION IS NOT A LAW FIRM AND DOES NOT PROVIDE
 *     LEGAL SERVICES. DISTRIBUTION OF THIS DOCUMENT DOES NOT CREATE AN
 *     ATTORNEY-CLIENT RELATIONSHIP. CREATIVE COMMONS PROVIDES THIS
 *     INFORMATION ON AN "AS-IS" BASIS. CREATIVE COMMONS MAKES NO WARRANTIES
 *     REGARDING THE USE OF THIS DOCUMENT OR THE INFORMATION OR WORKS
 *     PROVIDED HEREUNDER, AND DISCLAIMS LIABILITY FOR DAMAGES RESULTING FROM
 *     THE USE OF THIS DOCUMENT OR THE INFORMATION OR WORKS PROVIDED
 *     HEREUNDER.
 *
 * Statement of Purpose
 *
 * The laws of most jurisdictions throughout the world automatically confer
 * exclusive Copyright and Related Rights (defined below) upon the creator
 * and subsequent owner(s) (each and all, an "owner") of an original work of
 * authorship and/or a database (each, a "Work").
 *
 * Certain owners wish to permanently relinquish those rights to a Work for
 * the purpose of contributing to a commons of creative, cultural and
 * scientific works ("Commons") that the public can reliably and without fear
 * of later claims of infringement build upon, modify, incorporate in other
 * works, reuse and redistribute as freely as possible in any form whatsoever
 * and for any purposes, including without limitation commercial purposes.
 * These owners may contribute to the Commons to promote the ideal of a free
 * culture and the further production of creative, cultural and scientific
 * works, or to gain reputation or greater distribution for their Work in
 * part through the use and efforts of others.
 *
 * For these and/or other purposes and motivations, and without any
 * expectation of additional consideration or compensation, the person
 * associating CC0 with a Work (the "Affirmer"), to the extent that he or she
 * is an owner of Copyright and Related Rights in the Work, voluntarily
 * elects to apply CC0 to the Work and publicly distribute the Work under its
 * terms, with knowledge of his or her Copyright and Related Rights in the
 * Work and the meaning and intended legal effect of CC0 on those rights.
 *
 * 1. Copyright and Related Rights. A Work made available under CC0 may be
 * protected by copyright and related or neighboring rights ("Copyright and
 * Related Rights"). Copyright and Related Rights include, but are not
 * limited to, the following:
 *
 *   i. the right to reproduce, adapt, distribute, perform, display,
 *      communicate, and translate a Work;
 *  ii. moral rights retained by the original author(s) and/or performer(s);
 * iii. publicity and privacy rights pertaining to a person's image or
 *      likeness depicted in a Work;
 *  iv. rights protecting against unfair competition in regards to a Work,
 *      subject to the limitations in paragraph 4(a), below;
 *   v. rights protecting the extraction, dissemination, use and reuse of data
 *      in a Work;
 *  vi. database rights (such as those arising under Directive 96/9/EC of the
 *      European Parliament and of the Council of 11 March 1996 on the legal
 *      protection of databases, and under any national implementation
 *      thereof, including any amended or successor version of such
 *      directive); and
 * vii. other similar, equivalent or corresponding rights throughout the
 *      world based on applicable law or treaty, and any national
 *      implementations thereof.
 *
 * 2. Waiver. To the greatest extent permitted by, but not in contravention
 * of, applicable law, Affirmer hereby overtly, fully, permanently,
 * irrevocably and unconditionally waives, abandons, and surrenders all of
 * Affirmer's Copyright and Related Rights and associated claims and causes
 * of action, whether now known or unknown (including existing as well as
 * future claims and causes of action), in the Work (i) in all territories
 * worldwide, (ii) for the maximum duration provided by applicable law or
 * treaty (including future time extensions), (iii) in any current or future
 * medium and for any number of copies, and (iv) for any purpose whatsoever,
 * including without limitation commercial, advertising or promotional
 * purposes (the "Waiver"). Affirmer makes the Waiver for the benefit of each
 * member of the public at large and to the detriment of Affirmer's heirs and
 * successors, fully intending that such Waiver shall not be subject to
 * revocation, rescission, cancellation, termination, or any other legal or
 * equitable action to disrupt the quiet enjoyment of the Work by the public
 * as contemplated by Affirmer's express Statement of Purpose.
 *
 * 3. Public License Fallback. Should any part of the Waiver for any reason
 * be judged legally invalid or ineffective under applicable law, then the
 * Waiver shall be preserved to the maximum extent permitted taking into
 * account Affirmer's express Statement of Purpose. In addition, to the
 * extent the Waiver is so judged Affirmer hereby grants to each affected
 * person a royalty-free, non transferable, non sublicensable, non exclusive,
 * irrevocable and unconditional license to exercise Affirmer's Copyright and
 * Related Rights in the Work (i) in all territories worldwide, (ii) for the
 * maximum duration provided by applicable law or treaty (including future
 * time extensions), (iii) in any current or future medium and for any number
 * of copies, and (iv) for any purpose whatsoever, including without
 * limitation commercial, advertising or promotional purposes (the
 * "License"). The License shall be deemed effective as of the date CC0 was
 * applied by Affirmer to the Work. Should any part of the License for any
 * reason be judged legally invalid or ineffective under applicable law, such
 * partial invalidity or ineffectiveness shall not invalidate the remainder
 * of the License, and in such case Affirmer hereby affirms that he or she
 * will not (i) exercise any of his or her remaining Copyright and Related
 * Rights in the Work or (ii) assert any associated claims and causes of
 * action with respect to the Work, in either case contrary to Affirmer's
 * express Statement of Purpose.
 *
 * 4. Limitations and Disclaimers.
 *
 *  a. No trademark or patent rights held by Affirmer are waived, abandoned,
 *     surrendered, licensed or otherwise affected by this document.
 *  b. Affirmer offers the Work as-is and makes no representations or
 *     warranties of any kind concerning the Work, express, implied,
 *     statutory or otherwise, including without limitation warranties of
 *     title, merchantability, fitness for a particular purpose, non
 *     infringement, or the absence of latent or other defects, accuracy, or
 *     the present or absence of errors, whether or not discoverable, all to
 *     the greatest extent permissible under applicable law.
 *  c. Affirmer disclaims responsibility for clearing rights of other persons
 *     that may apply to the Work or any use thereof, including without
 *     limitation any person's Copyright and Related Rights in the Work.
 *     Further, Affirmer disclaims responsibility for obtaining any necessary
 *     consents, permissions or other rights required for any use of the
 *     Work.
 *  d. Affirmer understands and acknowledges that Creative Commons is not a
 *     party to this document and has no duty or obligation with respect to
 *     this CC0 or use of the Work.
 ******************************************************************************/

#include <gui/MainWindow.h>
#include <ui_MainWindow.h>

#include <iomanip>
#include <iostream>

#ifdef _LINUX_
#   include <arpa/inet.h>
#endif

#ifdef WIN32
#   include <windows.h>
#endif

#include <QDir>
#include <QFile>
#include <QMessageBox>

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

void MainWindow::on_actionAbout_triggered()
{
    QFile aboutHtmlFile( ":/gui/html/about.html" );

    QString aboutWinTitle;
    QString aboutInfoText;

    aboutWinTitle = tr( "About" );

    if ( aboutHtmlFile.open( QIODevice::ReadOnly ) )
    {
        aboutInfoText = aboutHtmlFile.readAll();
        aboutHtmlFile.close();
    }

    QMessageBox::about( this, aboutWinTitle, aboutInfoText );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_pushButtonInit_clicked()
{
    if ( !_inited )
    {
        _inited = true;
        _ui->pushButtonInited->setChecked( true );

        QString homeDir = QDir::homePath();;
        homeDir += "/record.csv";

        _fstream.open( homeDir.toLocal8Bit().data(), std::ios_base::out );

        _fstream.setf( std::ios_base::showpoint );
        _fstream.setf( std::ios_base::fixed );

        writeHeader();
    }
}
