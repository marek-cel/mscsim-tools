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
#include <gen/Airport.h>

#include <osg/CoordinateSystemNode>
#include <osg/Geode>
#include <osg/LineWidth>
#include <osg/LOD>
#include <osg/Material>
#include <osg/PositionAttitudeTransform>
#include <osg/ShapeDrawable>

#include <gen/Objects.h>
#include <gen/Textures.h>

////////////////////////////////////////////////////////////////////////////////

const float Airport::_signSize =  1.2f; // desired face height: 800 mm

const float Airport::_gatesVisibility = 100.0f * 1852.0f;
const float Airport::_signsVisibility = 1000.0f;

////////////////////////////////////////////////////////////////////////////////

void Airport::createGate( osg::Group *group, float runwayLength, float offset,
                          osg::Vec4 color )
{
    float x = 0.0f;
    float z = 0.0f;

    if ( offset < 0.0 )
    {
        x = -runwayLength / 2.0 + 300.0f + offset;
    }
    else
    {
        x =  runwayLength / 2.0 - 300.0f + offset;
    }

    z = -fabs( offset ) * sin( osg::DegreesToRadians( 3.0 ) );

    osg::ref_ptr<osg::PositionAttitudeTransform> pat = new osg::PositionAttitudeTransform();

    pat->setPosition( osg::Vec3( x, 0, z ) );

    float h_2 = fabs( offset ) * sin( osg::DegreesToRadians( 0.7 ) );
    float w_2 = fabs( offset ) * sin( osg::DegreesToRadians( 2.5 ) );

    osg::ref_ptr<osg::LOD> lod = new osg::LOD();

    osg::ref_ptr<osg::Geode> geode = new osg::Geode();

    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec3Array> n = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();

    v->push_back( osg::Vec3d( 0.0f, 0.0f, -z   ) );
    v->push_back( osg::Vec3d( 0.0f, 0.0f,  h_2 ) );
    v->push_back( osg::Vec3d( 0.0f, -w_2,  h_2 ) );
    v->push_back( osg::Vec3d( 0.0f, -w_2, -h_2 ) );
    v->push_back( osg::Vec3d( 0.0f,  w_2, -h_2 ) );
    v->push_back( osg::Vec3d( 0.0f,  w_2,  h_2 ) );
    v->push_back( osg::Vec3d( 0.0f, 0.0f,  h_2 ) );

    n->push_back( osg::Vec3( 1.0f, 0.0f, 0.0f ) );

    c->push_back( color );

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

    if ( 0 )
    {
        lod->addChild( geode.get(), 0.0, _gatesVisibility );
        pat->addChild( lod.get() );
    }
    else
    {
        pat->addChild( geode.get() );
    }

    group->addChild( pat.get() );
}

////////////////////////////////////////////////////////////////////////////////

void Airport::createSign( osg::Group *group,
                       float x, float y, int size, osg::Quat dir,
                       const std::string &textureFile )
{
    float z = -1.20f;
    float t =  0.3f;

    osg::ref_ptr<osg::LOD> lod = new osg::LOD();
    osg::ref_ptr<osg::PositionAttitudeTransform> pat = new osg::PositionAttitudeTransform();

    pat->setAttitude( dir );
    pat->setPosition( osg::Vec3( x, y, z ) );

    lod->addChild( pat.get(), 0.0f, _signsVisibility );

    group->addChild( lod.get() );

    float length   = size * _signSize;
    float length_2 = length / 2.0f;

    // front
    {
        osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
        osg::ref_ptr<osg::Vec2Array> t = new osg::Vec2Array();

        v->push_back( osg::Vec3d( 0.0f,  length_2,  0.0f ) );
        v->push_back( osg::Vec3d( 0.0f, -length_2,  0.0f ) );
        v->push_back( osg::Vec3d( 0.0f,  length_2, -_signSize ) );
        v->push_back( osg::Vec3d( 0.0f, -length_2, -_signSize ) );

        t->push_back( osg::Vec2( 0, 0 ) );
        t->push_back( osg::Vec2( 1, 0 ) );
        t->push_back( osg::Vec2( 0, 1 ) );
        t->push_back( osg::Vec2( 1, 1 ) );

        createWall( pat.get(), v.get(), t.get(), textureFile );
    }

    // back
    {
        osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();

        v->push_back( osg::Vec3d(   -t, -length_2,  0.0f ) );
        v->push_back( osg::Vec3d(   -t,  length_2,  0.0f ) );
        v->push_back( osg::Vec3d(   -t, -length_2, -_signSize ) );
        v->push_back( osg::Vec3d(   -t,  length_2, -_signSize ) );

        createWall( pat.get(), v.get(), 0, "" );
    }

    // top
    {
        osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();

        v->push_back( osg::Vec3d(   -t, -length_2, -_signSize ) );
        v->push_back( osg::Vec3d(   -t,  length_2, -_signSize ) );
        v->push_back( osg::Vec3d( 0.0f, -length_2, -_signSize ) );
        v->push_back( osg::Vec3d( 0.0f,  length_2, -_signSize ) );

        createWall( pat.get(), v.get(), 0, "" );
    }

    // bottom
    {
        osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();

        v->push_back( osg::Vec3d(   -t,  length_2,  0.0f ) );
        v->push_back( osg::Vec3d(   -t, -length_2,  0.0f ) );
        v->push_back( osg::Vec3d( 0.0f,  length_2,  0.0f ) );
        v->push_back( osg::Vec3d( 0.0f, -length_2,  0.0f ) );

        createWall( pat.get(), v.get(), 0, "" );
    }

    // left
    {
        osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();

        v->push_back( osg::Vec3d(   -t,  length_2,  0.0f ) );
        v->push_back( osg::Vec3d( 0.0f,  length_2,  0.0f ) );
        v->push_back( osg::Vec3d(   -t,  length_2, -_signSize ) );
        v->push_back( osg::Vec3d( 0.0f,  length_2, -_signSize ) );

        createWall( pat.get(), v.get(), 0, "" );
    }

    // right
    {
        osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();

        v->push_back( osg::Vec3d( 0.0f, -length_2,  0.0f ) );
        v->push_back( osg::Vec3d(   -t, -length_2,  0.0f ) );
        v->push_back( osg::Vec3d( 0.0f, -length_2, -_signSize ) );
        v->push_back( osg::Vec3d(   -t, -length_2, -_signSize ) );

        createWall( pat.get(), v.get(), 0, "" );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Airport::createTile( osg::Group *group,
                       float x_l, float x_u, float y_l, float y_r,
                       const std::string &textureFile )
{
    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec2Array> t = new osg::Vec2Array();

    v->push_back( osg::Vec3d( x_l, y_l, 0.0f ) );
    v->push_back( osg::Vec3d( x_l, y_r, 0.0f ) );
    v->push_back( osg::Vec3d( x_u, y_l, 0.0f ) );
    v->push_back( osg::Vec3d( x_u, y_r, 0.0f ) );

    t->push_back( osg::Vec2( 0, 0 ) );
    t->push_back( osg::Vec2( 1, 0 ) );
    t->push_back( osg::Vec2( 0, 1 ) );
    t->push_back( osg::Vec2( 1, 1 ) );

    createWall( group, v.get(), t.get(), textureFile );
}

////////////////////////////////////////////////////////////////////////////////

void Airport::createWall( osg::Group *group,
                       osg::Vec3Array *verticies, osg::Vec2Array *texCoords,
                       const std::string &textureFile )
{
    osg::ref_ptr<osg::Geode> geode = new osg::Geode();

    // geometry
    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();

    osg::ref_ptr<osg::Vec3Array> normals = new osg::Vec3Array();

    osg::Vec3d p1 = verticies->at( 1 ) - verticies->at( 0 );
    osg::Vec3d p2 = verticies->at( 2 ) - verticies->at( 0 );

    osg::Vec3d n_temp = p1^p2;
    n_temp.normalize();

    normals->push_back( n_temp );

    geometry->setVertexArray( verticies );
    geometry->setNormalArray( normals.get() );

    geometry->setNormalBinding( osg::Geometry::BIND_OVERALL );

    geometry->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::TRIANGLE_STRIP, 0, verticies->size() ) );

    if ( !textureFile.empty() && texCoords != 0 )
    {
        setTexture( geode.get(), geometry.get(), texCoords, textureFile );
    }

    geode->addDrawable( geometry.get() );

    // material
    osg::ref_ptr<osg::Material> material = new osg::Material();
    material->setAmbient( osg::Material::FRONT, osg::Vec4( 0.5f, 0.5f, 0.5f, 1.0f ) );
    material->setDiffuse( osg::Material::FRONT, osg::Vec4( 1.0f, 1.0f, 1.0f, 1.0f ) );
    geode->getOrCreateStateSet()->setAttribute( material.get() );

    group->addChild( geode.get() );
}

////////////////////////////////////////////////////////////////////////////////

void Airport::readObject( osg::Group *group,
                       osg::Vec3 vec, osg::Quat dir,
                       const std::string &objectFile )
{
    osg::ref_ptr<osg::PositionAttitudeTransform> pat = new osg::PositionAttitudeTransform();

    pat->setAttitude( dir );
    pat->setPosition( vec );

    //osg::ref_ptr<osg::Node> node = osgDB::readNodeFile( objectFile );
    osg::ref_ptr<osg::Node> node = Objects::getInstance()->getObject( objectFile );

    if ( node.valid() )
    {
        pat->addChild( node.get() );
    }

    group->addChild( pat.get() );
}

////////////////////////////////////////////////////////////////////////////////

void Airport::setTexture( osg::Geode *geode, osg::Geometry *geometry,
                          osg::Vec2Array *texCoords,
                          const std::string &textureFile )
{
    osg::ref_ptr<osg::Texture2D> texture = Textures::get( textureFile );

    if ( texture.valid() )
    {
        texture->setMaxAnisotropy( 8.0f );

        osg::ref_ptr<osg::StateSet> stateSet = geode->getOrCreateStateSet();

        geometry->setTexCoordArray( 0, texCoords );

        stateSet->setTextureAttributeAndModes( 0, texture.get(), osg::StateAttribute::ON );
    }
}

////////////////////////////////////////////////////////////////////////////////

Airport::Airport()
{
    _root = new osg::Group();
}

////////////////////////////////////////////////////////////////////////////////

Airport::~Airport() {}

////////////////////////////////////////////////////////////////////////////////

void Airport::update() {}
