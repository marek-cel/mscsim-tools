/****************************************************************************//*
 * Copyright (C) 2020 Marek M. Cel
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
#include <gen/AirportXUBS.h>

#include <osg/CoordinateSystemNode>
#include <osg/LineWidth>
#include <osg/LOD>
#include <osg/Material>
#include <osg/PolygonOffset>
#include <osg/PositionAttitudeTransform>
#include <osg/ShapeDrawable>
#include <osg/Texture2D>
#include <osgDB/ReadFile>

#include <gen/Colors.h>
#include <gen/Lights.h>

////////////////////////////////////////////////////////////////////////////////

using namespace std;

////////////////////////////////////////////////////////////////////////////////

// According to MAK report:
// Airport KTA (SK-42)  (  32.0261111,  54.8247222) ( 32° 1'34.00"E, 54° 49'29.00"N)
// Airport KTA (WGS-84) (  32.0241949,  54.8246235) ( 32° 1'27.10"E, 54° 49'28.64"N)
// Airport KTA elevation: 255 m
// Runway 08/26 mag heading:  259.0°

// According to Google Earth:
// Airport KTA (WGS-84) (  32.0243861,  54.8245417) ( 32° 1'27.79"E, 54° 49'28.35"N)
// Airport KTA elevation: 252 m
// Runway 08/26 true heading: 266.72°

const double AirportXUBS::_ktaLatitude  = osg::DegreesToRadians( 54.8246235 );
const double AirportXUBS::_ktaLongitude = osg::DegreesToRadians( 32.0241949 );
const double AirportXUBS::_ktaElevation = 255.0;

const double AirportXUBS::_runwayLength  = 2500.0;
const double AirportXUBS::_runwayWidth   =   49.0;
const double AirportXUBS::_runwayHeading = osg::DegreesToRadians( 259.0 );

////////////////////////////////////////////////////////////////////////////////

AirportXUBS::AirportXUBS()
{
    _root->setName( "XUBS" );

    osg::ref_ptr<osg::PositionAttitudeTransform> pat = new osg::PositionAttitudeTransform();
    _root->addChild( pat.get() );

    osg::ref_ptr<osg::LOD> lod = new osg::LOD();
    pat->addChild( lod.get() );

    osg::ref_ptr<osg::Group> group = new osg::Group();
    lod->addChild( group.get() );

    lod->setCenterMode( osg::LOD::USER_DEFINED_CENTER );
    lod->setCenter( osg::Vec3( 0.0f, 0.0f, 0.0f ) );
    lod->setRangeMode( osg::LOD::DISTANCE_FROM_EYE_POINT );
    lod->setRange( 0, 0.0f, 50000.0f );

    if ( 0 )
    {
        osg::EllipsoidModel em;

        double x = 0.0;
        double y = 0.0;
        double z = 0.0;

        double lat = 0.0;
        double lon = 0.0;
        double alt = 0.0;
        double var = 0.0;
        double hdg = 0.0;

        lat = _ktaLatitude;
        lon = _ktaLongitude;
        alt = _ktaElevation;
//        var = 7.0; // 7 according to MAK report
        var = 8.0; // 8.31 according to NOAA NCEI
        hdg = _runwayHeading + osg::DegreesToRadians( var );

        em.convertLatLongHeightToXYZ( lat, lon, alt, x, y, z );

        osg::Matrixd T_wgs2enu;
        em.computeLocalToWorldTransformFromXYZ( x, y, z, T_wgs2enu );

        osg::Quat Q_enu2ned;
        Q_enu2ned.makeRotate( M_PI , osg::Vec3d( 1.0, 0.0, 0.0 ),
                               0.0 , osg::Vec3d( 0.0, 1.0, 0.0 ),
                 -hdg + M_PI / 2.0 , osg::Vec3d( 0.0, 0.0, 1.0 ) );

        osg::Vec3d position = osg::Vec3d( x, y, z );
        osg::Quat  attitude = Q_enu2ned * T_wgs2enu.getRotate();

        pat->setPosition( position );
        pat->setAttitude( attitude );
    }

    createFrames( group.get() );
    createLights( group.get() );
//    createRunway( group.get() );
}

////////////////////////////////////////////////////////////////////////////////

AirportXUBS::~AirportXUBS() {}

////////////////////////////////////////////////////////////////////////////////

void AirportXUBS::createFrames( osg::Group *parent )
{
    float offset = 600.0f;

    while(  offset < 600.0f + 7000.0f  )
    {
        float x = -_runwayLength / 2.0 + 300.0f - offset;
        float z = -offset * sin( osg::DegreesToRadians( 2.0 + 40.0 / 60.0 ) );

        osg::ref_ptr<osg::PositionAttitudeTransform> pat = new osg::PositionAttitudeTransform();

        pat->setPosition( osg::Vec3( x, 0, z ) );

        float h_2 = fabs( offset ) * sin( osg::DegreesToRadians( 0.5 ) );
        float w_2 = fabs( offset ) * sin( osg::DegreesToRadians( 1.5 ) );

        osg::ref_ptr<osg::Geode> geode = new osg::Geode();

        osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();

        osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
        osg::ref_ptr<osg::Vec3Array> n = new osg::Vec3Array();
        osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();


        v->push_back( osg::Vec3d( 0.0f, 0.0f, -z + 100.0f ) );
        v->push_back( osg::Vec3d( 0.0f, 0.0f,  h_2 ) );
        v->push_back( osg::Vec3d( 0.0f, -w_2,  h_2 ) );
        v->push_back( osg::Vec3d( 0.0f, -w_2, -h_2 ) );
        v->push_back( osg::Vec3d( 0.0f,  w_2, -h_2 ) );
        v->push_back( osg::Vec3d( 0.0f,  w_2,  h_2 ) );
        v->push_back( osg::Vec3d( 0.0f, 0.0f,  h_2 ) );

        n->push_back( osg::Vec3( 1.0f, 0.0f, 0.0f ) );

        c->push_back( Colors::Fuchsia );

        geometry->setVertexArray( v.get() );
        geometry->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::LINE_STRIP, 0, 7 ) );

        geometry->setNormalArray( n.get() );
        geometry->setNormalBinding( osg::Geometry::BIND_OVERALL );

        geometry->setColorArray( c.get() );
        geometry->setColorBinding( osg::Geometry::BIND_OVERALL );

        geode->addDrawable( geometry.get() );

        osg::ref_ptr<osg::LineWidth> lineWidth = new osg::LineWidth();
        lineWidth->setWidth( 2.0f );
        geode->getOrCreateStateSet()->setAttributeAndModes( lineWidth.get(), osg::StateAttribute::ON );
        geode->getOrCreateStateSet()->setMode( GL_LIGHTING, osg::StateAttribute::OFF );

        pat->addChild( geode.get() );

        parent->addChild( pat.get() );

        offset += 0.5f * offset;
    }
}

////////////////////////////////////////////////////////////////////////////////

void AirportXUBS::createLights( osg::Group *parent )
{
    Lights::_crossingTile  = 0;
    Lights::_tileSize      = 0.0f;
    Lights::_runwayLength  = _runwayLength;
    Lights::_runwayWidth   = _runwayWidth;
    Lights::_taxiwaysWidth = 0.0f;

    Lights::SSP1::createSSP1( parent );
}

////////////////////////////////////////////////////////////////////////////////

void AirportXUBS::createRunway( osg::Group *parent )
{
    float x_l = -_runwayLength / 2.0f;
    float x_u =  _runwayLength / 2.0f;
    float y_l = -_runwayWidth  / 2.0f;
    float y_r =  _runwayWidth  / 2.0f;

    osg::ref_ptr<osg::Vec3Array> n = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec2Array> t = new osg::Vec2Array();

    n->push_back( osg::Vec3d( 0.0f, 0.0f, -1.0f ) );

    v->push_back( osg::Vec3d( x_l, y_l, 0.0f ) );
    v->push_back( osg::Vec3d( x_l, y_r, 0.0f ) );
    v->push_back( osg::Vec3d( x_u, y_l, 0.0f ) );
    v->push_back( osg::Vec3d( x_u, y_r, 0.0f ) );

    t->push_back( osg::Vec2( 0, 0 ) );
    t->push_back( osg::Vec2( 1, 0 ) );
    t->push_back( osg::Vec2( 0, 1 ) );
    t->push_back( osg::Vec2( 1, 1 ) );

    osg::ref_ptr<osg::Geode> geode = new osg::Geode();

    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();

    geometry->setVertexArray( v.get() );
    geometry->setNormalArray( n.get() );

    geometry->setNormalBinding( osg::Geometry::BIND_OVERALL );

    geometry->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::TRIANGLE_STRIP, 0, v->size() ) );

    std::string textureFile = "data/textures/runway.png";

    osg::ref_ptr<osg::Image> image = osgDB::readImageFile( textureFile );

    if ( image.valid() )
    {
        osg::ref_ptr<osg::StateSet> stateSet = geode->getOrCreateStateSet();

        geometry->setTexCoordArray( 0, t.get() );

        osg::ref_ptr<osg::Texture2D> texture = new osg::Texture2D();

        texture->setImage( image.get() );

        texture->setWrap( osg::Texture2D::WRAP_S, osg::Texture2D::MIRROR );
        texture->setWrap( osg::Texture2D::WRAP_T, osg::Texture2D::MIRROR );

        //////////////////////////////////
        texture->setMaxAnisotropy( 8.0f );
        //////////////////////////////////

        stateSet->setTextureAttributeAndModes( 0, texture.get(), osg::StateAttribute::ON );

        if ( 0 )
        {
            osg::ref_ptr<osg::PolygonOffset> polygonOffset = new osg::PolygonOffset();
            //polygonOffset->setFactor( -10.0f );
            stateSet->setAttributeAndModes( polygonOffset.get(), osg::StateAttribute::ON );
        }
    }
    else
    {
        std::cerr << "ERROR! Cannot open texture file: " << textureFile << std::endl;
    }

    geode->addDrawable( geometry.get() );

    osg::ref_ptr<osg::Material> material = new osg::Material();

    material->setAmbient( osg::Material::FRONT, osg::Vec4( 1.0f, 1.0f, 1.0f, 1.0f ) );
    material->setDiffuse( osg::Material::FRONT, osg::Vec4( 1.0f, 1.0f, 1.0f, 1.0f ) );

    geode->getOrCreateStateSet()->setAttribute( material.get() );

    parent->addChild( geode.get() );
}
