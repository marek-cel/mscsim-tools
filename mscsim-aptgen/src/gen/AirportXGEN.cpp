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
#include <gen/AirportXGEN.h>

#include <math.h>

#include <osg/LOD>

#include <gen/Colors.h>
#include <gen/Directions.h>
#include <gen/Lights.h>

////////////////////////////////////////////////////////////////////////////////

const short AirportXGEN::_approachTiles = 12;
const short AirportXGEN::_runwayTiles   = 52; // 52 * 60 = 3120 m

const short AirportXGEN::_crossingTile = 10; // 10

const float AirportXGEN::_tileSize = 60.0f;

const float AirportXGEN::_runwayLength = AirportXGEN::_runwayTiles * AirportXGEN::_tileSize;
const float AirportXGEN::_runwayWidth  = AirportXGEN::_tileSize;

const float AirportXGEN::_taxiwaysWidth = 30.0f;

const float AirportXGEN::_gatesOffsetStep = 1852.0f;
const float AirportXGEN::_gatesOffset1st  =  600.0f;
const float AirportXGEN::_gatesOffsetMax  = AirportXGEN::_gatesOffset1st + 5.0f * 1852.0f;

////////////////////////////////////////////////////////////////////////////////

void AirportXGEN::createTile( osg::Group *group,
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

AirportXGEN::AirportXGEN()
{
    _root->setName( "XGEN" );

    osg::ref_ptr<osg::LOD> lod = new osg::LOD();
    _root->addChild( lod.get() );

    osg::ref_ptr<osg::Group> group = new osg::Group();
    lod->addChild( group.get() );

    lod->setCenterMode( osg::LOD::USER_DEFINED_CENTER );
    lod->setCenter( osg::Vec3( 0.0f, 0.0f, 0.0f ) );
    lod->setRangeMode( osg::LOD::DISTANCE_FROM_EYE_POINT );
    lod->setRange( 0, 0.0f, 50000.0f );

    //createGates  ( group.get() );
    createLights ( group.get() );
    createSigns  ( group.get() );

#   ifdef MAKE_GROUND
    createGround   ( group.get() );
    createHelipad  ( group.get() );
    createRunway   ( group.get() );
    createTaxiways ( group.get() );
#   endif
}

////////////////////////////////////////////////////////////////////////////////

AirportXGEN::~AirportXGEN() {}

////////////////////////////////////////////////////////////////////////////////

void AirportXGEN::update() {}

////////////////////////////////////////////////////////////////////////////////

void AirportXGEN::createGates( osg::Group *group )
{
    _switchGatesL = new osg::Switch();
    _switchGatesH = new osg::Switch();

    _switchGatesL->setName( "ApproachGatesL" );
    _switchGatesH->setName( "ApproachGatesH" );

    _switchGatesL->setAllChildrenOff();
    _switchGatesH->setAllChildrenOff();

    group->addChild( _switchGatesL.get() );
    group->addChild( _switchGatesH.get() );

    float offset = _gatesOffset1st;

    while ( offset < _gatesOffsetMax )
    {
        createGate( _switchGatesL, _runwayLength, -offset, Colors::Fuchsia );
        createGate( _switchGatesH, _runwayLength,  offset, Colors::Fuchsia );

        //offset += m_gatesOffsetStep;
        offset += 0.5f * offset;
    }
}

////////////////////////////////////////////////////////////////////////////////

void AirportXGEN::createGround( osg::Group *group )
{
    // apron
    createTile( group, -1,  4, "data/xgen/apron.png" );
    createTile( group,  1,  4, "data/xgen/apron.png" );

    createTile( group, -1,  5, "data/xgen/apron_long.png" );
    createTile( group,  1,  5, "data/xgen/apron_long.png" );

    createTile( group, -1,  6, "data/xgen/apron.png" );
    createTile( group,  1,  6, "data/xgen/apron.png" );

    for ( int i = 1; i < _crossingTile - 3; i++ )
    {
        int i_long = i + 1;

        createTile( group, -i_long,  4, "data/xgen/apron_latt.png" );
        createTile( group,  i_long,  4, "data/xgen/apron_latt.png" );

        createTile( group, -i_long,  5, "data/xgen/apron_crossing_L.png" );
        createTile( group,  i_long,  5, "data/xgen/apron_crossing_R.png" );

        createTile( group, -i_long,  6, "data/xgen/apron.png" );
        createTile( group,  i_long,  6, "data/xgen/apron.png" );
    }

    createTile( group, -_crossingTile + 2,  4, "data/xgen/apron.png" );
    createTile( group,  _crossingTile - 2,  4, "data/xgen/apron.png" );

    createTile( group, -_crossingTile + 2,  5, "data/xgen/apron_long.png" );
    createTile( group,  _crossingTile - 2,  5, "data/xgen/apron_long.png" );

    createTile( group, -_crossingTile + 2,  6, "data/xgen/apron.png" );
    createTile( group,  _crossingTile - 2,  6, "data/xgen/apron.png" );

    createTile( group, -_crossingTile + 1,  4, "data/xgen/apron_latt.png" );
    createTile( group,  _crossingTile - 1,  4, "data/xgen/apron_latt.png" );

    createTile( group, -_crossingTile + 1,  5, "data/xgen/apron_turn_L.png" );
    createTile( group,  _crossingTile - 1,  5, "data/xgen/apron_turn_R.png" );

    createTile( group, -_crossingTile + 1,  6, "data/xgen/apron.png" );
    createTile( group,  _crossingTile - 1,  6, "data/xgen/apron.png" );

    // grass between runway and taxiway
    int runwayTiles_2 = _runwayTiles / 2;

    for ( int i = 0; i < runwayTiles_2 - 1; i++ )
    {
        if ( i != _crossingTile - 1 )
        {
            int i_long = i + 1;

            createTile( group, -i_long,  2, "data/xgen/grass_low.png" );
            createTile( group,  i_long,  2, "data/xgen/grass_low.png" );
        }
    }

    // grass under approach lights

    for ( int i = 0; i < _approachTiles; i++ )
    {
        int i_long = runwayTiles_2 + i + 1;

        if ( i == 0 )
        {
            createTile( group, -i_long, -1, "data/xgen/grass_low_L.png" );
            createTile( group,  i_long, -1, "data/xgen/grass_low_R.png" );
        }

        createTile( group, -i_long, 0, "data/xgen/grass_low.png" );
        createTile( group,  i_long, 0, "data/xgen/grass_low.png" );

        if ( i == 0 )
        {
            createTile( group, -i_long,  1, "data/xgen/grass_low_R.png" );
            createTile( group,  i_long,  1, "data/xgen/grass_low_L.png" );
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void AirportXGEN::createHelipad( osg::Group *group )
{
    createTile( group, -( _crossingTile + 4 ),  0, "data/xgen/helipad.png" );
    createTile( group,  ( _crossingTile + 4 ),  0, "data/xgen/helipad.png" );
}

////////////////////////////////////////////////////////////////////////////////

void AirportXGEN::createLights( osg::Group *group )
{
    Lights::_crossings = true;
    Lights::_crossingTile  = _crossingTile;
    Lights::_tileSize      = _tileSize;
    Lights::_runwayLength  = _runwayLength;
    Lights::_runwayWidth   = _runwayWidth;
    Lights::_taxiwaysWidth = _taxiwaysWidth;

    _switchRALS_L = new osg::Switch();
    _switchTDZL_L = new osg::Switch();
    _switchVGSI_L = new osg::Switch();

    _switchRALS_H = new osg::Switch();
    _switchTDZL_H = new osg::Switch();
    _switchVGSI_H = new osg::Switch();

    _switchRCLS = new osg::Switch();
    _switchRELS = new osg::Switch();

    _switchTELS = new osg::Switch();
    _switchTWRL = new osg::Switch();

    _switchHELI = new osg::Switch();
    _switchFATO = new osg::Switch();
    _switchTLOF = new osg::Switch();

    _switchRALS_L->setName( "RALS_L" );
    _switchTDZL_L->setName( "TDZL_L" );
    _switchVGSI_L->setName( "VGSI_L" );

    _switchRALS_H->setName( "RALS_H" );
    _switchTDZL_H->setName( "TDZL_H" );
    _switchVGSI_H->setName( "VGSI_H" );

    _switchRCLS->setName( "RCLS" );
    _switchRELS->setName( "RELS" );

    _switchTELS->setName( "TELS" );
    _switchTWRL->setName( "TWRL" );

    _switchHELI->setName( "HELI" );
    _switchFATO->setName( "FATO" );
    _switchTLOF->setName( "TLOF" );

    Lights::RALS::createALSF2 ( _switchRALS_L.get(), _switchRALS_H.get() );
    Lights::TDZL::createTDZL  ( _switchTDZL_L.get(), _switchTDZL_H.get() );
    Lights::VGSI::createPAPI  ( _switchVGSI_L.get(), _switchVGSI_H.get() );

    Lights::RCLS::createRCLS  ( _switchRCLS.get() );
    Lights::RELS::createRELS  ( _switchRELS.get() );

    Lights::TELS::createTELS  ( _switchTELS.get() );
    Lights::TWRL::createTWRL  ( _switchTWRL.get() );

    Lights::HELI::createHELI  ( _switchHELI.get() );
    Lights::FATO::createFATO  ( _switchFATO.get() );
    Lights::TLOF::createTLOF  ( _switchTLOF.get() );

    group->addChild( _switchRALS_L.get() );
    group->addChild( _switchTDZL_L.get() );
    group->addChild( _switchVGSI_L.get() );

    group->addChild( _switchRALS_H.get() );
    group->addChild( _switchTDZL_H.get() );
    group->addChild( _switchVGSI_H.get() );

    group->addChild( _switchRCLS.get() );
    group->addChild( _switchRELS.get() );

    group->addChild( _switchTELS.get() );
    group->addChild( _switchTWRL.get() );

//    group->addChild( _switchHELI.get() );
//    group->addChild( _switchFATO.get() );
    group->addChild( _switchTLOF.get() );
}

////////////////////////////////////////////////////////////////////////////////

void AirportXGEN::createRunway( osg::Group *group )
{
    int runwayTiles_2 = _runwayTiles / 2;

    for ( int i = 0; i < runwayTiles_2; i++ )
    {
        int i_long = i + 1;
        int delta = _tileSize * ( runwayTiles_2 - i_long );

        if ( delta == 0 )
        {
            createTile( group, -i_long, 0, "data/xgen/rwy_threshold_36.png" );
            createTile( group,  i_long, 0, "data/xgen/rwy_threshold_18.png" );
        }
        else if ( delta == 120 )
        {
            createTile( group, -i_long, 0, "data/xgen/rwy_touchdown_3a.png" );
            createTile( group,  i_long, 0, "data/xgen/rwy_touchdown_3a.png" );
        }
        else if ( delta == 300 )
        {
            createTile( group, -i_long, 0, "data/xgen/rwy_aiming.png" );
            createTile( group,  i_long, 0, "data/xgen/rwy_aiming.png" );
        }
        else if ( delta == 420 )
        {
            createTile( group, -i_long, 0, "data/xgen/rwy_touchdown_2a.png" );
            createTile( group,  i_long, 0, "data/xgen/rwy_touchdown_2a.png" );
        }
        else if ( delta == 600 )
        {
            createTile( group, -i_long, 0, "data/xgen/rwy_touchdown_2b.png" );
            createTile( group,  i_long, 0, "data/xgen/rwy_touchdown_2b.png" );
        }
        else if ( delta == 720 )
        {
            createTile( group, -i_long, 0, "data/xgen/rwy_touchdown_1a.png" );
            createTile( group,  i_long, 0, "data/xgen/rwy_touchdown_1a.png" );
        }
        else if ( delta == 900 )
        {
            createTile( group, -i_long, 0, "data/xgen/rwy_touchdown_1b.png" );
            createTile( group,  i_long, 0, "data/xgen/rwy_touchdown_1b.png" );
        }
        else if ( i_long == _crossingTile )
        {
            createTile( group, -i_long, 0, "data/xgen/rwy_taxiway_R.png" );
            createTile( group,  i_long, 0, "data/xgen/rwy_taxiway_L.png" );
        }
        else
        {
            createTile( group, -i_long, 0, "data/xgen/rwy_centerline.png" );
            createTile( group,  i_long, 0, "data/xgen/rwy_centerline.png" );
        }

        if ( i_long != runwayTiles_2 && i_long != _crossingTile )
        {
            createTile( group, -i_long,  1, "data/xgen/rwy_sholder_R.png" );
            createTile( group,  i_long,  1, "data/xgen/rwy_sholder_L.png" );
        }

        createTile( group, -i_long, -1, "data/xgen/rwy_sholder_L.png" );
        createTile( group,  i_long, -1, "data/xgen/rwy_sholder_R.png" );
    }
}

////////////////////////////////////////////////////////////////////////////////

void AirportXGEN::createSigns( osg::Group *group )
{
    float offset = 11.0f;

    float runwayLength_2  = _runwayLength  / 2.0f;
    float runwayWidth_2   = _runwayWidth   / 2.0f;
    float taxiwaysWidth_2 = _taxiwaysWidth / 2.0f;

    float x = 0.0f;
    float y = 0.0f;

    // runway

    x = runwayLength_2 - 2.0f * _tileSize;
    y = runwayWidth_2  + offset;

    createSign( group,  x,  y, 1, Directions::North, "data/xgen/sign_rwy_18.png" );
    createSign( group,  x, -y, 1, Directions::North, "data/xgen/sign_rwy_18.png" );
    createSign( group, -x,  y, 1, Directions::South, "data/xgen/sign_rwy_36.png" );
    createSign( group, -x, -y, 1, Directions::South, "data/xgen/sign_rwy_36.png" );

    x = runwayLength_2 - _tileSize / 2.0f - _tileSize;

    createSign( group,  x,  y, 2, Directions::South, "data/xgen/sign_rwy_F_R.png" );
    createSign( group, -x,  y, 2, Directions::North, "data/xgen/sign_rwy_A_L.png" );

    x = _crossingTile * _tileSize - _tileSize / 2.0f;

    createSign( group,  x - _tileSize,  y, 2, Directions::South, "data/xgen/sign_rwy_D_R.png" );
    createSign( group,  x + _tileSize,  y, 2, Directions::North, "data/xgen/sign_rwy_D_L.png" );

    createSign( group, -x + _tileSize,  y, 2, Directions::North, "data/xgen/sign_rwy_C_L.png" );
    createSign( group, -x - _tileSize,  y, 2, Directions::South, "data/xgen/sign_rwy_C_R.png" );

    // taxiways latteral (A, C, D, F)

    x = runwayLength_2 - _tileSize / 2.0f;
    y = runwayWidth_2  + _tileSize / 2.0f;

    createSign( group,  x - taxiwaysWidth_2 - offset,  y, 2, Directions::East, "data/xgen/sign_twy_F_18_L.png" );
    createSign( group,  x + taxiwaysWidth_2 + offset,  y, 2, Directions::East, "data/xgen/sign_twy_F_18_R.png" );

    createSign( group, -x + taxiwaysWidth_2 + offset,  y, 2, Directions::East, "data/xgen/sign_twy_A_36_R.png" );
    createSign( group, -x - taxiwaysWidth_2 - offset,  y, 2, Directions::East, "data/xgen/sign_twy_A_36_L.png" );

    x = runwayLength_2 - _tileSize / 2.0f;
    y = runwayWidth_2 + 2.0f * _tileSize;

    createSign( group,  x - taxiwaysWidth_2 - offset,  y, 3, Directions::West, "data/xgen/sign_twy_F_G4_R.png" );
    createSign( group, -x + taxiwaysWidth_2 + offset,  y, 3, Directions::West, "data/xgen/sign_twy_A_G0_L.png" );

    x = _crossingTile * _tileSize - _tileSize / 2.0f;
    y = runwayWidth_2  + _tileSize / 2.0f;

    createSign( group,  x - taxiwaysWidth_2 - offset,  y, 3, Directions::East, "data/xgen/sign_twy_D_36-18_L.png" );
    createSign( group,  x + taxiwaysWidth_2 + offset,  y, 3, Directions::East, "data/xgen/sign_twy_D_36-18_R.png" );

    createSign( group, -x + taxiwaysWidth_2 + offset,  y, 3, Directions::East, "data/xgen/sign_twy_C_36-18_R.png" );
    createSign( group, -x - taxiwaysWidth_2 - offset,  y, 3, Directions::East, "data/xgen/sign_twy_C_36-18_L.png" );

    x = _crossingTile * _tileSize - _tileSize / 2.0f;
    y = runwayWidth_2 + 2.0f * _tileSize;

    createSign( group,  x - taxiwaysWidth_2 - offset,  y, 3, Directions::West, "data/xgen/sign_twy_D_G2_R.png" );
    createSign( group,  x + taxiwaysWidth_2 + offset,  y, 3, Directions::West, "data/xgen/sign_twy_D_G3_L.png" );
    createSign( group, -x + taxiwaysWidth_2 + offset,  y, 3, Directions::West, "data/xgen/sign_twy_C_G2_L.png" );
    createSign( group, -x - taxiwaysWidth_2 - offset,  y, 3, Directions::West, "data/xgen/sign_twy_C_G1_R.png" );

    // taxiways latteral (B, E)

    x = ( _crossingTile + 4 ) * _tileSize - _tileSize / 2.0f;
    y = runwayWidth_2 + 3.0f * _tileSize;

    createSign( group,  x + taxiwaysWidth_2 + offset,  y, 3, Directions::East, "data/xgen/sign_twy_E_G4_R.png" );
    createSign( group,  x - taxiwaysWidth_2 - offset,  y, 3, Directions::East, "data/xgen/sign_twy_E_G3_L.png" );
    createSign( group, -x - taxiwaysWidth_2 - offset,  y, 3, Directions::East, "data/xgen/sign_twy_B_G0_L.png" );
    createSign( group, -x + taxiwaysWidth_2 + offset,  y, 3, Directions::East, "data/xgen/sign_twy_B_G1_R.png" );

    // taxiways longitudal (G)

    x = _crossingTile * _tileSize - _tileSize;
    y = runwayWidth_2 + 2.5f * _tileSize;

    createSign( group,  x,  y - taxiwaysWidth_2 - offset, 3, Directions::South, "data/xgen/sign_twy_G2_D_L.png" );
    createSign( group, -x,  y - taxiwaysWidth_2 - offset, 3, Directions::North, "data/xgen/sign_twy_G2_C_R.png" );

    createSign( group,  x,  y + taxiwaysWidth_2 + offset, 5, Directions::North, "data/xgen/sign_twy_G2_apron_L.png" );
    createSign( group, -x,  y + taxiwaysWidth_2 + offset, 5, Directions::South, "data/xgen/sign_twy_G2_apron_R.png" );

    x = ( _crossingTile + 1 ) * _tileSize - _tileSize;
    y = runwayWidth_2 + 2.5f * _tileSize;

    createSign( group,  x,  y - taxiwaysWidth_2 - offset, 3, Directions::North, "data/xgen/sign_twy_G3_D_R.png" );
    createSign( group, -x,  y - taxiwaysWidth_2 - offset, 3, Directions::South, "data/xgen/sign_twy_G1_C_L.png" );

    createSign( group,  x,  y + taxiwaysWidth_2 + offset, 3, Directions::North, "data/xgen/sign_twy_G3_G2.png" );
    createSign( group, -x,  y + taxiwaysWidth_2 + offset, 3, Directions::South, "data/xgen/sign_twy_G1_G2.png" );

    x = ( _crossingTile + 3 ) * _tileSize;
    y = runwayWidth_2 + 2.5f * _tileSize;

    createSign( group, -x,  y + taxiwaysWidth_2 + offset, 3, Directions::North, "data/xgen/sign_twy_G1_B_L.png" );
    createSign( group,  x,  y + taxiwaysWidth_2 + offset, 3, Directions::South, "data/xgen/sign_twy_G3_E_R.png" );

    x = ( _crossingTile + 4 ) * _tileSize;
    y = runwayWidth_2 + 2.5f * _tileSize;

    createSign( group, -x,  y + taxiwaysWidth_2 + offset, 3, Directions::South, "data/xgen/sign_twy_G0_B_R.png" );
    createSign( group,  x,  y + taxiwaysWidth_2 + offset, 3, Directions::North, "data/xgen/sign_twy_G4_E_L.png" );

    x = runwayLength_2 - _tileSize;
    y = runwayWidth_2 + 2.5f * _tileSize;

    createSign( group, -x,  y - taxiwaysWidth_2 - offset, 3, Directions::North, "data/xgen/sign_twy_G0_A_R.png" );
    createSign( group,  x,  y - taxiwaysWidth_2 - offset, 3, Directions::South, "data/xgen/sign_twy_G4_F_L.png" );
}

////////////////////////////////////////////////////////////////////////////////

void AirportXGEN::createTaxiways( osg::Group *group )
{
    int tiles_2 = ( _runwayLength / _tileSize ) / 2;

    createTile( group, -tiles_2, 1, "data/xgen/twy_holding_R.png" );
    createTile( group,  tiles_2, 1, "data/xgen/twy_holding_L.png" );

    createTile( group, -tiles_2, 2, "data/xgen/twy_latt.png" );
    createTile( group,  tiles_2, 2, "data/xgen/twy_latt.png" );

    createTile( group, -tiles_2, 3, "data/xgen/twy_turn_L.png" );
    createTile( group,  tiles_2, 3, "data/xgen/twy_turn_R.png" );

    createTile( group, -_crossingTile, 1, "data/xgen/twy_holding_R.png" );
    createTile( group,  _crossingTile, 1, "data/xgen/twy_holding_L.png" );

    createTile( group, -_crossingTile, 2, "data/xgen/twy_latt.png" );
    createTile( group,  _crossingTile, 2, "data/xgen/twy_latt.png" );

    createTile( group, -_crossingTile, 3, "data/xgen/twy_crossing_L.png" );
    createTile( group,  _crossingTile, 3, "data/xgen/twy_crossing_R.png" );

    for ( int i = 0; i < _crossingTile - 1; i++ )
    {
        int i_long = i + 1;

        if ( i == 0 || i == _crossingTile - 3 )
        {
            createTile( group, -i_long,  3, "data/xgen/twy_apron_1R.png" );
            createTile( group,  i_long,  3, "data/xgen/twy_apron_1L.png" );
        }
        else
        {
            createTile( group, -i_long,  3, "data/xgen/twy_apron_2R.png" );
            createTile( group,  i_long,  3, "data/xgen/twy_apron_2L.png" );
        }
    }

    for ( int i = _crossingTile; i < tiles_2 - 1; i++ )
    {
        int i_long = i + 1;

        createTile( group, -i_long,  2, "data/xgen/grass_low.png" );
        createTile( group,  i_long,  2, "data/xgen/grass_low.png" );

        if ( i_long == _crossingTile + 4 )
        {
            createTile( group, -i_long,  3, "data/xgen/twy_crossing_R.png" );
            createTile( group, -i_long,  4, "data/xgen/twy_latt.png" );
            createTile( group, -i_long,  5, "data/xgen/twy_latt.png" );

            createTile( group,  i_long,  3, "data/xgen/twy_crossing_L.png" );
            createTile( group,  i_long,  4, "data/xgen/twy_latt.png" );
            createTile( group,  i_long,  5, "data/xgen/twy_latt.png" );
        }
        else
        {
            createTile( group, -i_long,  3, "data/xgen/twy_long.png" );
            createTile( group,  i_long,  3, "data/xgen/twy_long.png" );
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void AirportXGEN::createTile( osg::Group *group,
                       int i_long, int i_latt,
                       const std::string &textureFile )
{

    if ( ( std::abs( i_long ) <= 100 && std::abs( i_latt ) <= 100 ) && ( i_long != 0 ) )
    {
        float x_l = 0.0;
        float x_u = 0.0;

        float y_l = 0.0;
        float y_r = 0.0;

        float tile_2 = _tileSize / 2.0;

        if ( i_long < 0 )
        {
            x_l = _tileSize * i_long;
            x_u = _tileSize * ( i_long + 1 );

            y_l = -tile_2 + _tileSize * i_latt;
            y_r =  tile_2 + _tileSize * i_latt;
        }
        else
        {
            x_l = _tileSize * i_long;
            x_u = _tileSize * ( i_long - 1 );

            y_l =  tile_2 + _tileSize * i_latt;
            y_r = -tile_2 + _tileSize * i_latt;
        }

        createTile( group, x_l, x_u, y_l, y_r, textureFile );
    }
}
