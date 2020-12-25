#include"Noise.h"

#include <iostream>

#include <QFile>

////////////////////////////////////////////////////////////////////////////////

Noise* Noise::_instance = nullptr;

////////////////////////////////////////////////////////////////////////////////

Noise::Noise() :
    _longitude ( 0.0 ),
    _latitude  ( 0.0 ),

    _altitude_asl ( 0.0 ),
    _altitude_agl ( 0.0 ),

    _phi ( 0.0 ),
    _tht ( 0.0 ),
    _psi ( 0.0 ),

    _alpha ( 0.0 ),
    _beta  ( 0.0 )
{
    QFile file("../data/noise.xml" );

    if ( file.open(QFile::ReadOnly | QFile::Text) )
    {
        QDomDocument doc;

        doc.setContent( &file, false );

        QDomElement rootNode = doc.documentElement();

        if ( rootNode.tagName() =="noise" )
        {
            QDomElement longitude    = rootNode.firstChildElement( "longitude"    );
            QDomElement latitude     = rootNode.firstChildElement( "latitude"     );
            QDomElement altitude_asl = rootNode.firstChildElement( "altitude_asl" );
            QDomElement altitude_agl = rootNode.firstChildElement( "altitude_agl" );
            QDomElement phi          = rootNode.firstChildElement( "phi"          );
            QDomElement tht          = rootNode.firstChildElement( "tht"          );
            QDomElement psi          = rootNode.firstChildElement( "psi"          );
            QDomElement alpha        = rootNode.firstChildElement( "alpha"        );
            QDomElement beta         = rootNode.firstChildElement( "beta"         );

            if ( !longitude    .isNull() ) _longitude    = longitude    .text().toDouble();
            if ( !latitude     .isNull() ) _latitude     = latitude     .text().toDouble();
            if ( !altitude_asl .isNull() ) _altitude_asl = altitude_asl .text().toDouble();
            if ( !altitude_agl .isNull() ) _altitude_agl = altitude_agl .text().toDouble();
            if ( !phi          .isNull() ) _phi          = phi          .text().toDouble();
            if ( !tht          .isNull() ) _tht          = tht          .text().toDouble();
            if ( !psi          .isNull() ) _psi          = psi          .text().toDouble();
            if ( !alpha        .isNull() ) _alpha        = alpha        .text().toDouble();
            if ( !beta         .isNull() ) _beta         = beta         .text().toDouble();

        }
    }

    print();
}

////////////////////////////////////////////////////////////////////////////////

Noise::~Noise() {}

////////////////////////////////////////////////////////////////////////////////

void Noise::print()
{
    std::cout << "    longitude : " << _longitude    << std::endl;
    std::cout << "     latitude : " << _latitude     << std::endl;
    std::cout << " altitude_asl : " << _altitude_asl << std::endl;
    std::cout << " altitude_agl : " << _altitude_agl << std::endl;
    std::cout << "          phi : " << _phi          << std::endl;
    std::cout << "          tht : " << _tht          << std::endl;
    std::cout << "          psi : " << _psi          << std::endl;
    std::cout << "        alpha : " << _alpha        << std::endl;
    std::cout << "         beta : " << _beta         << std::endl;
}
