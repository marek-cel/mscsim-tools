#include "MainWindow.h"
#include <QApplication>

////////////////////////////////////////////////////////////////////////////////

int main( int argc, char *argv[] )
{
    QHostAddress address( "127.0.0.1" );
    quint16 port = 5505;

    QApplication app(argc, argv);
    MainWindow win( address, port );
    win.show();

    return app.exec();
}
