#ifndef MAINWINDOW_H
#define MAINWINDOW_H

////////////////////////////////////////////////////////////////////////////////

#include <fstream>

#include <QElapsedTimer>
#include <QMainWindow>
#include <QUdpSocket>

#include "net_fdm.hxx"
#include "DataInp.h"

////////////////////////////////////////////////////////////////////////////////

namespace Ui
{
    class MainWindow;
}

////////////////////////////////////////////////////////////////////////////////

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow( QHostAddress address, quint16 port,
                         QWidget *parent = 0 );

    ~MainWindow();

protected:

    void timerEvent( QTimerEvent *event );

private:

    Ui::MainWindow *_ui;

    const QHostAddress _address;
    const quint16 _port;

    QElapsedTimer *_timer;
    QUdpSocket *_socket;

    FGNetFDM _net_fdm;

    DataInp _dataInp;
    DataInp _dataInp_noise;

    std::fstream _fstream;          ///< recording file stream

    double _timeStep;
    double _realTime;

    int _timerId;

    bool _inited;

    DataInp applyNoise( const DataInp &dataInp );

    void convertByteOrder( FGNetFDM &net_fdm );

    void convertData( const FGNetFDM &net_fdm, DataInp *dataInp );

    void updateData();

    void writeHeader();
    void writeRecord( const DataInp &dataInp );

private slots:

    void on_pushButtonInit_clicked();
};

////////////////////////////////////////////////////////////////////////////////

#endif // MAINWINDOW_H
