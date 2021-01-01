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
#include <osgDB/ReadFile>

#include <asm/Rotor.h>

#include <Data.h>

////////////////////////////////////////////////////////////////////////////////

const char Rotor::tagName[] = "rotor";

////////////////////////////////////////////////////////////////////////////////

Rotor::Rotor() :
    _bladesCount ( 2 ),
    _bladesOffset ( 0.0 ),
    _direction ( CW )
{
    _fileBlade = "";
    _fileShaft = "";
}

////////////////////////////////////////////////////////////////////////////////

Rotor::Rotor( QDomElement *xmlNode ) :
    PAT( xmlNode ),

    _bladesCount ( 0 ),
    _bladesOffset ( 0.0 ),
    _direction ( CW )
{
    setFileBlade( xmlNode->attributeNode( "file_blade" ).value().toLatin1().data() );
    setFileShaft( xmlNode->attributeNode( "file_shaft" ).value().toLatin1().data() );

    setBladesCount( xmlNode->attributeNode( "blades_count" ).value().toInt() );
    setBladesOffset( xmlNode->attributeNode( "blades_offset" ).value().toDouble() );

    setDirection( (Direction)(xmlNode->attributeNode( "direction" ).value().toInt()) );
}

////////////////////////////////////////////////////////////////////////////////

Rotor::~Rotor()
{
    removeAllChildren();
}

////////////////////////////////////////////////////////////////////////////////

void Rotor::save( QDomDocument *doc, QDomElement *parentNode )
{
    QDomElement node = doc->createElement( Rotor::tagName );
    parentNode->appendChild( node );

    saveParameters( doc, &node );
}

////////////////////////////////////////////////////////////////////////////////

void Rotor::update()
{
    //////////////
    PAT::update();
    //////////////

    double coef = 1.0;

    if ( _direction ==  CCW )
    {
        coef = -1.0;
    }

    // main rotor
    if ( _mainRotor.valid() )
    {
        double psi = coef * Data::get()->rotor.azimuth;
        _mainRotor->setAttitude( osg::Quat( psi, osg::Z_AXIS ) );
    }

    // main rotor blades
    for ( unsigned int i = 0; i < _blades.size() && i < MAX_BLADES; i++ )
    {
        double pitching = Data::get()->blade[ i ].theta * ( -coef );
        double flapping = Data::get()->blade[ i ].beta;

        _blades[ i ]->setAttitude( osg::Quat( pitching, osg::X_AXIS,
                                              flapping, osg::Y_AXIS,
                                                   0.0, osg::Z_AXIS ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Rotor::setBladesCount( unsigned int bladesCount )
{
    removeAllChildren();

    _bladesCount = bladesCount;
    if ( _bladesCount < 2 ) _bladesCount = 2;

    create();
}

////////////////////////////////////////////////////////////////////////////////

void Rotor::setBladesOffset( double bladesOffset )
{
    removeAllChildren();
    _bladesOffset = fabs( bladesOffset );
    create();
}

////////////////////////////////////////////////////////////////////////////////

void Rotor::setDirection( Direction direction )
{
    removeAllChildren();
    _direction = direction;
    create();
}

////////////////////////////////////////////////////////////////////////////////

void Rotor::setFileBlade( std::string fileBlade )
{
    removeAllChildren();
    _fileBlade = fileBlade;
    create();
}

////////////////////////////////////////////////////////////////////////////////

void Rotor::setFileShaft( std::string fileShaft )
{
    removeAllChildren();
    _fileShaft = fileShaft;
    create();
}

////////////////////////////////////////////////////////////////////////////////

void Rotor::create()
{
    _mainRotor = new osg::PositionAttitudeTransform();
    _mainRotor->setName( "MainRotor" );
    _pat->addChild( _mainRotor.get() );

    if ( _fileBlade.length() > 0 ) createBlades();
    if ( _fileShaft.length() > 0 ) createShaft();
}

////////////////////////////////////////////////////////////////////////////////

void Rotor::createBlades()
{
    osg::ref_ptr<osg::Group> blades = new osg::Group();
    blades->setName( "Blades" );
    _mainRotor->addChild( blades.get() );

    osg::ref_ptr<osg::Node> bladeNode = osgDB::readNodeFile( _fileBlade );

    if ( bladeNode.valid() )
    {
        const double angleStep = (_direction == CCW ? -1.0 : 1.0)*2.0*M_PI/((double)_bladesCount);

        for ( unsigned int i = 0; i < _bladesCount; i++ )
        {
            double azimuth = i*angleStep + M_PI;

            while ( azimuth < 0.0        ) azimuth += 2.0 * M_PI;
            while ( azimuth > 2.0 * M_PI ) azimuth -= 2.0 * M_PI;

            double offset_x = cos( azimuth ) * _bladesOffset;
            double offset_y = sin( azimuth ) * _bladesOffset;

            osg::ref_ptr<osg::PositionAttitudeTransform> patHinge = new osg::PositionAttitudeTransform();
            patHinge->setName( "BladeHinge" );
            patHinge->addChild( bladeNode.get() );

            osg::ref_ptr<osg::PositionAttitudeTransform> patBlade = new osg::PositionAttitudeTransform();
            patBlade->setName( "BladePAT" );
            patBlade->setAttitude( osg::Quat( azimuth, osg::Vec3( 0,0,1 ) ) );
            patBlade->setPosition( osg::Vec3( offset_x, offset_y, 0.0 ) );
            patBlade->addChild( patHinge.get() );

            blades->addChild( patBlade.get() );

            _blades.push_back( patHinge.get() );
        }
    }
    else
    {
        std::cout << "MainRotorBlade ERROR!" << std::endl;
    }
}

////////////////////////////////////////////////////////////////////////////////

void Rotor::createShaft()
{
    osg::ref_ptr<osg::Node> shaftNode = osgDB::readNodeFile( _fileShaft );

    if ( shaftNode.valid() )
    {
        _mainRotor->addChild( shaftNode.get() );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Rotor::removeAllChildren()
{
    if ( _mainRotor.valid() )
    {
        _mainRotor->removeChild( 0, _mainRotor->getNumChildren() );
    }

    ///////////////////////////
    Group::removeAllChildren();
    ///////////////////////////

    _blades.clear();

    _mainRotor = 0;
}

////////////////////////////////////////////////////////////////////////////////

void Rotor::saveParameters( QDomDocument *doc, QDomElement *xmlNode )
{
    PAT::saveParameters( doc, xmlNode );

    QDomAttr nodeFileBlade = doc->createAttribute( "file_blade" );
    QDomAttr nodeFileShaft = doc->createAttribute( "file_shaft" );

    nodeFileBlade.setValue( getFileBlade().c_str() );
    nodeFileShaft.setValue( getFileShaft().c_str() );

    xmlNode->setAttributeNode( nodeFileBlade );
    xmlNode->setAttributeNode( nodeFileShaft );

    QDomAttr nodeBladesCount = doc->createAttribute( "blades_count" );
    QDomAttr nodeBladesOffset = doc->createAttribute( "blades_offset" );

    nodeBladesCount.setValue( QString::number( getBladesCount() ) );
    nodeBladesOffset.setValue( QString::number( getBladesOffset() ) );

    xmlNode->setAttributeNode( nodeBladesCount );
    xmlNode->setAttributeNode( nodeBladesOffset );

    QDomAttr nodeDirection = doc->createAttribute( "direction" );
    nodeDirection.setValue( QString::number( getDirection() ) );
    xmlNode->setAttributeNode( nodeDirection );
}
