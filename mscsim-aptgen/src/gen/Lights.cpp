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
#include <gen/Lights.h>

#include <osg/Group>
#include <osg/Texture2D>

#include <gen/Colors.h>
#include <gen/Textures.h>

////////////////////////////////////////////////////////////////////////////////

bool Lights::_crossings = false;

short Lights::_crossingTile  = 0;
float Lights::_tileSize      = 0.0f;
float Lights::_runwayLength  = 0.0f;
float Lights::_runwayWidth   = 0.0f;
float Lights::_taxiwaysWidth = 0.0f;

const float Lights::_sectorDegFromFN = osg::DegreesToRadians( 225.0f );
const float Lights::_sectorDegUntoFN = osg::DegreesToRadians( 315.0f );
const float Lights::_sectorDegFromBN = osg::DegreesToRadians(  45.0f );
const float Lights::_sectorDegUntoBN = osg::DegreesToRadians( 135.0f );
const float Lights::_sectorDegFromFW = osg::DegreesToRadians( 180.0f );
const float Lights::_sectorDegUntoFW = osg::DegreesToRadians( 360.0f );
const float Lights::_sectorDegFromBW = osg::DegreesToRadians(   0.0f );
const float Lights::_sectorDegUntoBW = osg::DegreesToRadians( 180.0f );

////////////////////////////////////////////////////////////////////////////////

const float Lights::RALS::_height    = 3.0f;
const float Lights::RALS::_radius    = 4.0f * 0.2f;
const float Lights::RALS::_intensity = 2.0f;

const float Lights::RCLS::_height    = 0.0f;
const float Lights::RCLS::_radius    = 4.0f * 0.1f;
const float Lights::RCLS::_intensity = 1.5f;

const float Lights::RELS::_height    = 0.8f;
const float Lights::RELS::_radius    = 4.0f * 0.2f;
const float Lights::RELS::_intensity = 2.0f;
const float Lights::RELS::_offset    = 1.0f;

const float Lights::RTEL::_height    = Lights::RELS::_height;
const float Lights::RTEL::_radius    = Lights::RELS::_radius;
const float Lights::RTEL::_intensity = Lights::RELS::_intensity;
const float Lights::RTEL::_offset    = Lights::RELS::_offset;

const float Lights::TDZL::_height    = 0.0f;
const float Lights::TDZL::_radius    = 4.0f * 0.1f;
const float Lights::TDZL::_intensity = 1.5f;

const float Lights::TELS::_height    = 0.1f;
const float Lights::TELS::_radius    = 4.0f * 0.2f;
const float Lights::TELS::_intensity = 2.0f;
const float Lights::TELS::_offset    = 3.0f;

const float Lights::TWRL::_radius    = 4.0f * 0.1f;
const float Lights::TWRL::_intensity = 1.5f;

const float Lights::VGSI::_height    = 1.0f;
const float Lights::VGSI::_radius    = 4.0f * 0.3f;
const float Lights::VGSI::_intensity = 4.5f;

const float Lights::TLOF::_height    = 0.3f;
const float Lights::TLOF::_radius    = 4.0f * 0.2f;
const float Lights::TLOF::_intensity = 2.0f;

////////////////////////////////////////////////////////////////////////////////

void Lights::setTexture( osgSim::LightPointNode *lightPointNode,
                         const std::string &textureFile )
{
    osg::ref_ptr<osg::Texture2D> texture = Textures::get( textureFile );

    if ( texture.valid() )
    {
        osg::ref_ptr<osg::StateSet> stateSet = lightPointNode->getOrCreateStateSet();

        lightPointNode->setPointSprite();

        stateSet->setTextureAttributeAndModes( 0, texture.get(), osg::StateAttribute::ON );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Lights::RALS::createALSF2( osg::Group *groupL, osg::Group *groupH )
{
    osg::ref_ptr<osgSim::LightPointNode> lightPointNodeL = new osgSim::LightPointNode();
    osg::ref_ptr<osgSim::LightPointNode> lightPointNodeH = new osgSim::LightPointNode();

    float xdel = _runwayLength / 2.0f;

    createALSF2( lightPointNodeL, -xdel );
    createALSF2( lightPointNodeH,  xdel );

    RTEL::createRTEL_Cat2( lightPointNodeL, -xdel );
    RTEL::createRTEL_Cat2( lightPointNodeH,  xdel );

    setTexture( lightPointNodeL.get(), "data/textures/lightpoint.png" );
    setTexture( lightPointNodeH.get(), "data/textures/lightpoint.png" );

    groupL->addChild( lightPointNodeL.get() );
    groupL->addChild( lightPointNodeH.get() );
}

////////////////////////////////////////////////////////////////////////////////

void Lights::RCLS::createRCLS( osg::Group *group )
{
    osg::ref_ptr<osgSim::LightPointNode> lightPointNode = new osgSim::LightPointNode();

    float xdel = _runwayLength / 2.0f;

    createRCLS( lightPointNode, -xdel );
    createRCLS( lightPointNode,  xdel );

    setTexture( lightPointNode.get(), "data/textures/lightpoint.png" );

    group->addChild( lightPointNode.get() );
}

////////////////////////////////////////////////////////////////////////////////

void Lights::RELS::createRELS( osg::Group *group )
{
    osg::ref_ptr<osgSim::LightPointNode> lightPointNode = new osgSim::LightPointNode();

    float xdel = _runwayLength / 2.0f;

    createRELS( lightPointNode, -xdel );
    createRELS( lightPointNode,  xdel );

    RTEL::createRTEL_Base( lightPointNode, -xdel );
    RTEL::createRTEL_Base( lightPointNode,  xdel );

    setTexture( lightPointNode.get(), "data/textures/lightpoint.png" );

    group->addChild( lightPointNode.get() );
}

////////////////////////////////////////////////////////////////////////////////

void Lights::TDZL::createTDZL( osg::Group *groupL, osg::Group *groupH )
{
    osg::ref_ptr<osgSim::LightPointNode> lightPointNodeL = new osgSim::LightPointNode();
    osg::ref_ptr<osgSim::LightPointNode> lightPointNodeH = new osgSim::LightPointNode();

    float xdel = _runwayLength / 2.0f;

    createTDZL( lightPointNodeL, -xdel, 18.0f );
    createTDZL( lightPointNodeH,  xdel, 18.0f );

    setTexture( lightPointNodeL.get(), "data/textures/lightpoint.png" );
    setTexture( lightPointNodeH.get(), "data/textures/lightpoint.png" );

    groupL->addChild( lightPointNodeL.get() );
    groupL->addChild( lightPointNodeH.get() );
}

////////////////////////////////////////////////////////////////////////////////

void Lights::TELS::createTELS( osg::Group *group )
{
    osg::ref_ptr<osgSim::LightPointNode> lightPointNode = new osgSim::LightPointNode();

    createTELS( lightPointNode.get() );

    setTexture( lightPointNode.get(), "data/textures/lightpoint.png" );

    group->addChild( lightPointNode.get() );
}

////////////////////////////////////////////////////////////////////////////////

void Lights::TWRL::createTWRL( osg::Group *group )
{
    osg::ref_ptr<osgSim::LightPointNode> lightPointNode = new osgSim::LightPointNode();

    createTWRL( lightPointNode.get() );

    setTexture( lightPointNode.get(), "data/textures/lightpoint.png" );

    group->addChild( lightPointNode.get() );
}

////////////////////////////////////////////////////////////////////////////////

void Lights::VGSI::createPAPI( osg::Group *groupL, osg::Group *groupH )
{
    osg::ref_ptr<osgSim::LightPointNode> lightPointNodeL = new osgSim::LightPointNode();
    osg::ref_ptr<osgSim::LightPointNode> lightPointNodeH = new osgSim::LightPointNode();

    float xdel = _runwayLength / 2.0f - 300.0f;
    float ydel = _runwayWidth  / 2.0f + 15.0f;

    createPAPI( lightPointNodeL, -xdel, ydel );
    createPAPI( lightPointNodeH,  xdel, ydel );

    setTexture( lightPointNodeL.get(), "data/textures/lightpoint.png" );
    setTexture( lightPointNodeH.get(), "data/textures/lightpoint.png" );

    groupL->addChild( lightPointNodeL.get() );
    groupH->addChild( lightPointNodeH.get() );
}

////////////////////////////////////////////////////////////////////////////////

void Lights::SSP1::createSSP1( osg::Group *group )
{
    osg::ref_ptr<osgSim::LightPointNode> lightPointNode = new osgSim::LightPointNode();

    RALS::createSSP1( lightPointNode.get() );
    RELS::createSSP1( lightPointNode.get() );
    RTEL::createSSP1( lightPointNode.get() );

    setTexture( lightPointNode.get(), "data/textures/lightpoint.png" );

    group->addChild( lightPointNode.get() );
}

////////////////////////////////////////////////////////////////////////////////

void Lights::HELI::createHELI( osg::Group *group )
{
    osg::ref_ptr<osgSim::LightPointNode> lightPointNode = new osgSim::LightPointNode();

    //float xdel = ( m_crossingTile + 3 ) * m_tileSize + m_tileSize / 2.0f;
    //float xdel = ( m_crossingTile - 2 ) * m_tileSize + m_tileSize / 2.0f;

//    createFATO( lightPointNode, -xdel );

    setTexture( lightPointNode.get(), "data/textures/lightpoint.png" );

    group->addChild( lightPointNode.get() );
}

////////////////////////////////////////////////////////////////////////////////

void Lights::FATO::createFATO( osg::Group *group )
{
    osg::ref_ptr<osgSim::LightPointNode> lightPointNode = new osgSim::LightPointNode();

    //float xdel = ( m_crossingTile + 3 ) * m_tileSize + m_tileSize / 2.0f;
    //float xdel = ( m_crossingTile - 2 ) * m_tileSize + m_tileSize / 2.0f;

//    createFATO( lightPointNode, -xdel );

    setTexture( lightPointNode.get(), "data/textures/lightpoint.png" );

    group->addChild( lightPointNode.get() );
}

////////////////////////////////////////////////////////////////////////////////

void Lights::TLOF::createTLOF( osg::Group *group )
{
    osg::ref_ptr<osgSim::LightPointNode> lightPointNode = new osgSim::LightPointNode();

    float xdel = ( _crossingTile + 3 ) * _tileSize + _tileSize / 2.0f;
    //float xdel = ( _crossingTile - 2 ) * _tileSize + _tileSize / 2.0f;

    createTLOF( lightPointNode, -xdel );
    createTLOF( lightPointNode,  xdel );

    setTexture( lightPointNode.get(), "data/textures/lightpoint.png" );

    group->addChild( lightPointNode.get() );
}

////////////////////////////////////////////////////////////////////////////////

void Lights::RALS::createALSF2( osgSim::LightPointNode *lightPointNode,
                                float xdel )
{
    float ycur = 0.0f;

    float xcur = 0.0f;
    float ydel = 0.0f;

    float step = 0.0f;

    int iFlash = 0;

    double sectorDegFrom = _sectorDegFromFW;
    double sectorDegUnto = _sectorDegUntoFW;

    if ( xdel > 0.0f )
    {
        sectorDegFrom = _sectorDegFromBW;
        sectorDegUnto = _sectorDegUntoBW;
    }

    osg::ref_ptr<osgSim::Sector> sector = new osgSim::AzimSector( sectorDegFrom, sectorDegUnto );

    step = -30.0f;
    xcur = -30.0f;

    while ( xcur + 720.0f >= -1.0e-4 )
    {
        double x_real = xdel + xcur;

        if ( xdel > 0.0f )
        {
            x_real = xdel - xcur;
        }

        ydel = -2.0f;

        for ( int iLat = 0; iLat < 5; iLat++ )
        {
            osgSim::LightPoint lighPntW( osg::Vec3( x_real, ydel, -_height ), Colors::White );

            lighPntW._intensity = _intensity;
            lighPntW._radius    = _radius;
            lighPntW._sector    = sector;

            lightPointNode->addLightPoint( lighPntW );

            ydel += 1.0;
        }

        if( fabs( xcur + 150.0f ) < 1.0e-4 )
        {
            ycur = -7.5f;

            for ( int iSide = 0; iSide < 2; iSide++ )
            {
                ydel = -2.25f;

                for ( int iLat = 0; iLat < 4; iLat++ )
                {
                    osgSim::LightPoint lighPntW( osg::Vec3( x_real, ycur + ydel, -_height ), Colors::White );

                    lighPntW._intensity = _intensity;
                    lighPntW._radius    = _radius;
                    lighPntW._sector    = sector;

                    lightPointNode->addLightPoint( lighPntW );

                    ydel += 1.5;
                }

                ycur = 7.5;
            }
        }

        // decision bar
        if( fabs( xcur + 300.0f ) < 1.0e-4 )
        {
            ycur = -12.5f;

            for ( int iSide = 0; iSide < 2; iSide++ )
            {
                ydel = -6.0;

                for ( int iLat = 0; iLat < 9; iLat++ )
                {
                    osgSim::LightPoint lighPntW( osg::Vec3( x_real, ycur + ydel, -_height ), Colors::White );

                    lighPntW._intensity = _intensity;
                    lighPntW._radius    = _radius;
                    lighPntW._sector    = sector;

                    lightPointNode->addLightPoint( lighPntW );

                    ydel += 1.5f;
                }

                ycur = 12.5f;
            }
        }

        if ( xcur > -300.0f )
        {
            ycur = -15.0f;

            for ( int iSide = 0; iSide < 2; iSide++ )
            {
                ydel = -2.0f;

                for ( int iLat = 0; iLat < 3; iLat++ )
                {
                    osgSim::LightPoint lighPntR( osg::Vec3( x_real, ycur + ydel, -_height ), Colors::Red );

                    lighPntR._intensity = _intensity;
                    lighPntR._radius    = _radius;
                    lighPntR._sector    = sector;

                    lightPointNode->addLightPoint( lighPntR );

                    ydel += 2.0;
                }

                ycur = 15.0;
            }

        }
        else
        {
            osg::ref_ptr<osgSim::BlinkSequence> blinkSequence = new osgSim::BlinkSequence;

            for ( int iBlink = 16; iBlink >= 0; iBlink-- )
            {
                float alpha = ( iFlash == iBlink ) ? 1.0f : 0.0f;
                blinkSequence->addPulse( 0.05f, osg::Vec4( 1.0f, 1.0f, 1.0f, alpha ) );
            }

            osgSim::LightPoint lighPntW( osg::Vec3( x_real, 0.0f, -_height ), Colors::White );

            lighPntW._intensity = 2.0f * _intensity;
            lighPntW._radius    = 2.0f * _radius;
            lighPntW._sector    = sector;
            lighPntW._blinkSequence = blinkSequence;

            lightPointNode->addLightPoint( lighPntW );

            iFlash++;
        }

        xcur += step;
    }
}

////////////////////////////////////////////////////////////////////////////////

void Lights::RALS::createSSP1( osgSim::LightPointNode *lightPointNode )
{
    float x = -_runwayLength / 2.0f - 100.0f;
    float z = -5.0f;

    float intensity = 3.0f;
    float radius    = 4.0f * 0.2f;

    osg::ref_ptr<osgSim::Sector> sector = new osgSim::AzimSector( _sectorDegFromFW, _sectorDegUntoFW );

    for ( int i = 0; i < 9; i++ )
    {
        float y_tmp = 3.0f;

        for ( int j = 0; j < 3; j++ )
        {
            osgSim::LightPoint lighPnt( osg::Vec3( x, y_tmp, z ), Colors::Yellowish );

            lighPnt._intensity = intensity;
            lighPnt._radius    = radius;
            lighPnt._sector    = sector;

            lightPointNode->addLightPoint( lighPnt );

            y_tmp -= 3.0f;
        }

        if ( i == 2 )
        {
            y_tmp = 15.5f;

            for ( int j = 0; j < 5; j++ )
            {
                osgSim::LightPoint lighPntL( osg::Vec3( x, -y_tmp, z ), Colors::Yellowish );
                osgSim::LightPoint lighPntR( osg::Vec3( x,  y_tmp, z ), Colors::Yellowish );

                lighPntL._intensity = intensity;
                lighPntR._intensity = intensity;

                lighPntL._radius = radius;
                lighPntR._radius = radius;

                lighPntL._sector = sector;
                lighPntR._sector = sector;

                lightPointNode->addLightPoint( lighPntL );
                lightPointNode->addLightPoint( lighPntR );

                y_tmp -= 2.5f;
            }
        }

        x -= 100.0f;
    }

    osgSim::LightPoint lighPnt( osg::Vec3( -_runwayLength / 2.0f - 1050.0f, 0.0f, z ), Colors::Red );

    lighPnt._intensity = intensity;
    lighPnt._radius    = radius;
    lighPnt._sector    = sector;

    lightPointNode->addLightPoint( lighPnt );
}

////////////////////////////////////////////////////////////////////////////////

void Lights::RCLS::createRCLS( osgSim::LightPointNode *lightPointNode,
                                float xdel )
{
    float xcur = 0.0f;
    float step = 0.0f;

    float sectorDegFromB = 0.0f;
    float sectorDegUntoB = 0.0f;
    float sectorDegFromF = 0.0f;
    float sectorDegUntoF = 0.0f;

    osg::ref_ptr<osgSim::Sector> sectorF;
    osg::ref_ptr<osgSim::Sector> sectorB;

    step = 15.0f;

    if ( xdel < 0.0 )
    {
        xcur = xdel + step;

        sectorDegFromB = _sectorDegFromBW;
        sectorDegUntoB = _sectorDegUntoBW;
        sectorDegFromF = _sectorDegFromFW;
        sectorDegUntoF = _sectorDegUntoFW;
    }
    else
    {
        xcur = xdel - step;

        sectorDegFromB = _sectorDegFromFW;
        sectorDegUntoB = _sectorDegUntoFW;
        sectorDegFromF = _sectorDegFromBW;
        sectorDegUntoF = _sectorDegUntoBW;
    }

    sectorB = new osgSim::AzimSector( sectorDegFromB, sectorDegUntoB );
    sectorF = new osgSim::AzimSector( sectorDegFromF, sectorDegUntoF );

    int iter = 0;

    while ( fabs( xcur ) > 0.0f )
    {
        osg::Vec4 colorB = Colors::White;
        osg::Vec4 colorF = Colors::White;

        if ( fabs( xcur ) > fabs( xdel ) - 900.0f ) colorB = ( iter % 2 == 0 ) ? Colors::Red : Colors::White;
        if ( fabs( xcur ) > fabs( xdel ) - 300.0f ) colorB = Colors::Red;

        osgSim::LightPoint lighPntF( osg::Vec3( xcur, 0.0f, -_height ), colorF );
        osgSim::LightPoint lighPntB( osg::Vec3( xcur, 0.0f, -_height ), colorB );

        lighPntF._intensity = _intensity;
        lighPntB._intensity = _intensity;

        lighPntF._radius = _radius;
        lighPntB._radius = _radius;

        lighPntF._sector = sectorF;
        lighPntB._sector = sectorB;

        lightPointNode->addLightPoint( lighPntF );
        lightPointNode->addLightPoint( lighPntB );

        if ( xdel < 0.0 )
        {
            xcur += step;
        }
        else
        {
            xcur -= step;
        }

        iter++;
    }
}

////////////////////////////////////////////////////////////////////////////////

void Lights::RELS::createRELS( osgSim::LightPointNode *lightPointNode,
                             float xdel )
{
    float xcur = 0.0f;
    float ydel = _runwayWidth / 2.0f;
    float step = 0.0f;

    float length_2 = fabs( xdel );

    double sectorDegFromB = 0.0f;
    double sectorDegUntoB = 0.0f;
    double sectorDegFromF = 0.0f;
    double sectorDegUntoF = 0.0f;

    if ( xdel < 0.0f )
    {
        sectorDegFromB = _sectorDegFromBW;
        sectorDegUntoB = _sectorDegUntoBW;
        sectorDegFromF = _sectorDegFromFW;
        sectorDegUntoF = _sectorDegUntoFW;
    }
    else
    {
        sectorDegFromB = _sectorDegFromFW;
        sectorDegUntoB = _sectorDegUntoFW;
        sectorDegFromF = _sectorDegFromBW;
        sectorDegUntoF = _sectorDegUntoBW;
    }

    osg::ref_ptr<osgSim::Sector> sectorB = new osgSim::AzimSector( sectorDegFromB, sectorDegUntoB );
    osg::ref_ptr<osgSim::Sector> sectorF = new osgSim::AzimSector( sectorDegFromF, sectorDegUntoF );

    step = _tileSize;
    xcur = 30.0f;

    while ( xcur < fabs( xdel ) )
    {
        osg::Vec4 colorB = Colors::White;    // color backward
        osg::Vec4 colorF = Colors::White;    // color foreward

        if ( xcur <=  600.0f ) colorB = Colors::Yellow;

        float x_real = 0.0f;

        if ( xdel < 0.0 )
            x_real = xdel + xcur;
        else
            x_real = xdel - xcur;

        osgSim::LightPoint lighPntF1( osg::Vec3( x_real, -ydel - _offset, -_height ), colorF );
        osgSim::LightPoint lighPntF2( osg::Vec3( x_real,  ydel + _offset, -_height ), colorF );
        osgSim::LightPoint lighPntB1( osg::Vec3( x_real, -ydel - _offset, -_height ), colorB );
        osgSim::LightPoint lighPntB2( osg::Vec3( x_real,  ydel + _offset, -_height ), colorB );

        lighPntF1._intensity = _intensity;
        lighPntF2._intensity = _intensity;
        lighPntB1._intensity = _intensity;
        lighPntB2._intensity = _intensity;

        lighPntF1._radius = _radius;
        lighPntF2._radius = _radius;
        lighPntB1._radius = _radius;
        lighPntB2._radius = _radius;

        lighPntF1._sector = sectorF;
        lighPntF2._sector = sectorF;
        lighPntB1._sector = sectorB;
        lighPntB2._sector = sectorB;

        lightPointNode->addLightPoint( lighPntF1 );
        lightPointNode->addLightPoint( lighPntB1 );

        bool is_crossing = ( fabs( xcur - 30.0 ) < 1.0e-16 )
            || ( fabs( xcur - ( length_2 - _crossingTile * _tileSize + 30.0f ) ) < 1.0e-16 );

        if ( !_crossings || !is_crossing )
        {
            lightPointNode->addLightPoint( lighPntF2 );
            lightPointNode->addLightPoint( lighPntB2 );
        }

        xcur += step;
    }
}

////////////////////////////////////////////////////////////////////////////////

void Lights::RELS::createSSP1( osgSim::LightPointNode *lightPointNode )
{
    float x = -_runwayLength / 2.0f + 100.0f;
    float y =  _runwayWidth  / 2.0f + 1.0f;
    float z = -1.0f;

    float intensity = 1.5f;
    float radius    = 4.0f * 0.2f;

    osg::ref_ptr<osgSim::Sector> sector = new osgSim::AzimSector( _sectorDegFromFW, _sectorDegUntoFW );

    int iter = 0;

    while ( x < _runwayLength / 2.0f )
    {
        osgSim::LightPoint lighPnt1( osg::Vec3( x, -y, z ), Colors::Yellowish );
        osgSim::LightPoint lighPnt2( osg::Vec3( x,  y, z ), Colors::Yellowish );

        lighPnt1._intensity = intensity;
        lighPnt2._intensity = intensity;

        lighPnt1._radius = radius;
        lighPnt2._radius = radius;

//        lighPnt1._sector = sector;
//        lighPnt2._sector = sector;

        lightPointNode->addLightPoint( lighPnt1 );
        lightPointNode->addLightPoint( lighPnt2 );

        if ( iter == 5 )
        {
            float y_tmp = y + 2.5;

            for ( int j = 0; j < 2; j++ )
            {
                osgSim::LightPoint lighPntL( osg::Vec3( x, -y_tmp, z ), Colors::Yellowish );
                osgSim::LightPoint lighPntR( osg::Vec3( x,  y_tmp, z ), Colors::Yellowish );

                lighPntL._intensity = intensity;
                lighPntR._intensity = intensity;

                lighPntL._radius = radius;
                lighPntR._radius = radius;

                lighPntL._sector = sector;
                lighPntR._sector = sector;

                lightPointNode->addLightPoint( lighPntL );
                lightPointNode->addLightPoint( lighPntR );

                y_tmp += 2.5f;
            }
        }

        x += 100.0;
        iter++;
    }
}

////////////////////////////////////////////////////////////////////////////////

void Lights::RTEL::createRTEL_Base( osgSim::LightPointNode *lightPointNode,
                                  float xdel )
{
    float ycur = 0.0f;
    float ydel = _runwayWidth / 2.0f;
    float step = 3.0f;

    float sectorDegFromG = 0.0f;
    float sectorDegUntoG = 0.0f;
    float sectorDegFromR = 0.0f;
    float sectorDegUntoR = 0.0f;

    if ( xdel < 0.0f )
    {
        sectorDegFromG = _sectorDegFromFW;
        sectorDegUntoG = _sectorDegUntoFW;
        sectorDegFromR = _sectorDegFromBW;
        sectorDegUntoR = _sectorDegUntoBW;
    }
    else
    {
        sectorDegFromG = _sectorDegFromBW;
        sectorDegUntoG = _sectorDegUntoBW;
        sectorDegFromR = _sectorDegFromFW;
        sectorDegUntoR = _sectorDegUntoFW;
    }

    osg::ref_ptr<osgSim::Sector> sectorG = new osgSim::AzimSector( sectorDegFromG, sectorDegUntoG );
    osg::ref_ptr<osgSim::Sector> sectorR = new osgSim::AzimSector( sectorDegFromR, sectorDegUntoR );

    int iLatMax = 4;

    if ( 2.0*ydel < 45.0f ) iLatMax = 3;

    ycur = -ydel - _offset;

    for ( int iSide = 0; iSide < 2; iSide++ )
    {
        float step_y = 0.0f;

        for ( int iLat = 0; iLat < iLatMax; iLat++ )
        {
            osgSim::LightPoint lighPntG( osg::Vec3( xdel, ycur + step_y, -_height ), Colors::Green );
            osgSim::LightPoint lighPntR( osg::Vec3( xdel, ycur + step_y, -_height ), Colors::Red );

            lighPntG._intensity = _intensity;
            lighPntG._radius    = _radius;
            lighPntG._sector    = sectorG;

            lighPntR._intensity = _intensity;
            lighPntR._radius    = _radius;
            lighPntR._sector    = sectorR;

            lightPointNode->addLightPoint( lighPntG );
            lightPointNode->addLightPoint( lighPntR );

            step_y += step;
        }

        ycur = ydel + _offset - ( iLatMax - 1 ) * step;
    }
}

////////////////////////////////////////////////////////////////////////////////

void Lights::RTEL::createRTEL_Cat2( osgSim::LightPointNode *lightPointNode,
                                  float xdel )
{
    int steps = ceil( ( _runwayWidth + 2.0f * _offset - 3.0f ) / 3.0f );

    if ( steps < 1 ) steps = 1;

    float halfWidth = _runwayWidth  / 2.0f;

    float step = ( _runwayWidth + 2.0f * _offset - 3.0f ) / steps;
    float ycur = -halfWidth - _offset + 1.5f;

    double sectorDegFrom = 0.0f;
    double sectorDegUnto = 0.0f;

    if ( xdel < 0.0f )
    {
        sectorDegFrom = _sectorDegFromFW;
        sectorDegUnto = _sectorDegUntoFW;
    }
    else
    {
        sectorDegFrom = _sectorDegFromBW;
        sectorDegUnto = _sectorDegUntoBW;
    }

    osg::ref_ptr<osgSim::Sector> sector = new osgSim::AzimSector( sectorDegFrom, sectorDegUnto );

    osg::Vec4 color = Colors::Green;

    float ylimit = halfWidth + _offset - 1.5f;

    while ( ycur - ylimit <= 1.0e-4 )
    {
        osgSim::LightPoint lighPnt( osg::Vec3( xdel, ycur, -_height ), color );

        lighPnt._intensity = _intensity;
        lighPnt._radius    = _radius;
        lighPnt._sector    = sector;

        lightPointNode->addLightPoint( lighPnt );

        ycur += step;
    }

    createRTEL_Bars( lightPointNode, xdel );
}

////////////////////////////////////////////////////////////////////////////////

void Lights::RTEL::createRTEL_Bars( osgSim::LightPointNode *lightPointNode,
                                  float xdel )
{
    float halfWidth = _runwayWidth  / 2.0f;

    float ycur = -halfWidth - _offset - 1.5f;
    float step = -1.5f;

    double sectorDegFrom = 0.0f;
    double sectorDegUnto = 0.0f;

    if ( xdel < 0.0f )
    {
        sectorDegFrom = _sectorDegFromFW;
        sectorDegUnto = _sectorDegUntoFW;
    }
    else
    {
        sectorDegFrom = _sectorDegFromBW;
        sectorDegUnto = _sectorDegUntoBW;
    }

    osg::ref_ptr<osgSim::Sector> sector = new osgSim::AzimSector( sectorDegFrom, sectorDegUnto );

    osg::Vec4 color = Colors::Green;

    for ( int iSide = 0; iSide < 2; iSide++ )
    {
        for ( int iLat = 0; iLat < 8; iLat++ )
        {
            osgSim::LightPoint lighPnt( osg::Vec3( xdel, ycur, -_height ), color );

            lighPnt._intensity = _intensity;
            lighPnt._radius    = _radius;
            lighPnt._sector    = sector;

            lightPointNode->addLightPoint( lighPnt );

            ycur += step;
        }

        ycur = halfWidth + _offset + 1.5f;
        step = 1.5f;
    }
}

////////////////////////////////////////////////////////////////////////////////

void Lights::RTEL::createSSP1( osgSim::LightPointNode *lightPointNode )
{
    float x = -_runwayLength / 2.0f - 3.0f;
    float y =  _runwayWidth  / 2.0f - 5.0f;
    float z = -1.0f;

    float intensity = 3.0f;
    float radius    = 4.0f * 0.2f;

    osg::ref_ptr<osgSim::Sector> sector = new osgSim::AzimSector( _sectorDegFromFW, _sectorDegUntoFW );

    for ( int i = 0; i < 8; i++ )
    {
        osgSim::LightPoint lighPntL( osg::Vec3( x, -y, z ), Colors::Green );
        osgSim::LightPoint lighPntR( osg::Vec3( x,  y, z ), Colors::Green );

        lighPntL._intensity = intensity;
        lighPntR._intensity = intensity;

        lighPntL._radius = radius;
        lighPntR._radius = radius;

        lighPntL._sector = sector;
        lighPntR._sector = sector;

        lightPointNode->addLightPoint( lighPntL );
        lightPointNode->addLightPoint( lighPntR );

        y += 2.5f;
    }
}

////////////////////////////////////////////////////////////////////////////////

void Lights::TDZL::createTDZL( osgSim::LightPointNode *lightPointNode,
                             float xdel, float spacing )
{
    float xcur = 0.0f;
    float ycur = 0.0f;

    float step = 0.0f;

    float length = 900.0f;

    if ( fabs( xdel ) < 900.0f ) length = fabs( xdel );

    float sectorFrom = 0.0f;
    float sectorUnto = 0.0f;

    if ( xdel < 0.0 )
    {
        sectorFrom = _sectorDegFromFW;
        sectorUnto = _sectorDegUntoFW;
    }
    else
    {
        sectorFrom = _sectorDegFromBW;
        sectorUnto = _sectorDegUntoBW;
    }

    osg::ref_ptr<osgSim::Sector> sector = new osgSim::AzimSector( sectorFrom, sectorUnto );

    step = 30.0f;
    xcur = 30.0f;

    while ( xcur < length + 1.0e-6 )
    {
        ycur = -spacing / 2.0f - 3.0f - 1.0f;

        for ( int iSide = 0; iSide < 2; iSide++ )
        {
            for ( int iLat = 0; iLat < 3; iLat++ )
            {
                float x_real = 0.0;

                if ( xdel < 0.0 )
                    x_real = xdel + xcur;
                else
                    x_real = xdel - xcur;

                osgSim::LightPoint lighPnt( osg::Vec3( x_real, ycur, -_height ), Colors::White );

                lighPnt._intensity = _intensity;
                lighPnt._radius    = _radius;
                lighPnt._sector    = sector;

                lightPointNode->addLightPoint( lighPnt );

                ycur += 1.5f;
            }

            ycur = spacing / 2.0f + 1.0f;
        }

        xcur += step;
    }
}

////////////////////////////////////////////////////////////////////////////////

void Lights::TELS::createTELS( osgSim::LightPointNode *lightPointNode )
{
    typedef std::pair< float, float > FloatPair;

    std::vector< FloatPair > TELS;

    const float taxiwayWidth   = 30.0f;
    const float taxiwayWidth_2 = taxiwayWidth / 2.0f;

    float xcur = 0.0f;

    float delta_x = taxiwayWidth + 2.0f * _offset;

    float r1 = ( _tileSize - taxiwayWidth ) / 2.0f - _offset;
    float r2 = r1 + _offset + taxiwayWidth + _offset;

    double alpha[ 4 ];
    alpha[ 0 ] = osg::DegreesToRadians(  0.0 );
    alpha[ 1 ] = osg::DegreesToRadians( 30.0 );
    alpha[ 2 ] = osg::DegreesToRadians( 60.0 );
    alpha[ 3 ] = osg::DegreesToRadians( 90.0 );

    ///////////////////////////////////////////////////

    xcur = _runwayLength / 2.0f - _tileSize / 2.0f + taxiwayWidth_2 + _offset;

    TELS.push_back( FloatPair( xcur           , _runwayWidth / 2.0f + _offset        ) );
    TELS.push_back( FloatPair( xcur           , _runwayWidth / 2.0f + _offset + 1.0f ) );
    TELS.push_back( FloatPair( xcur - delta_x , _runwayWidth / 2.0f + _offset        ) );
    TELS.push_back( FloatPair( xcur - delta_x , _runwayWidth / 2.0f + _offset + 1.0f ) );

    TELS.push_back( FloatPair( xcur           , 1.0f * _tileSize ) );
    TELS.push_back( FloatPair( xcur           , 2.0f * _tileSize ) );
    TELS.push_back( FloatPair( xcur - delta_x , 1.0f * _tileSize ) );
    TELS.push_back( FloatPair( xcur - delta_x , 2.0f * _tileSize ) );

    for ( int i = 0; i < 4; i++ )
    {
        float sAlpha = sin( alpha[ i ] );
        float cAlpha = cos( alpha[ i ] );

        float x1 = r1 - r1 * cAlpha;
        float y1 = r1 * sAlpha;

        float x2 = r1 - r2 * cAlpha;
        float y2 = r2 * sAlpha;

        TELS.push_back( FloatPair( xcur - delta_x - x1, 2.5f * _tileSize + y1 ) );
        TELS.push_back( FloatPair( xcur - delta_x - x2, 2.5f * _tileSize + y2 ) );
    }

    ///////////////////////////////////////////////////

    xcur = _runwayLength / 2.0f - 2.0f * _tileSize;

    while ( xcur > _crossingTile * _tileSize )
    {
        TELS.push_back( FloatPair( xcur, 3.0f * _tileSize - taxiwayWidth_2 - _offset ) );
        TELS.push_back( FloatPair( xcur, 3.0f * _tileSize + taxiwayWidth_2 + _offset ) );

        xcur -= _tileSize;
    }

    TELS.push_back( FloatPair( xcur             , 3.0f * _tileSize + taxiwayWidth_2 + _offset ) );
    TELS.push_back( FloatPair( xcur - _tileSize , 3.0f * _tileSize + taxiwayWidth_2 + _offset ) );

    xcur = _crossingTile * _tileSize - _tileSize / 2.0f + taxiwayWidth_2 + _offset;

    for ( int i = 0; i < 4; i++ )
    {
        float sAlpha = sin( alpha[ i ] );
        float cAlpha = cos( alpha[ i ] );

        float x1 = r1 - r1 * cAlpha;
        float y1 = r1 * sAlpha;

        TELS.push_back( FloatPair( xcur           + x1, 2.5f * _tileSize + y1 ) );
        TELS.push_back( FloatPair( xcur - delta_x - x1, 2.5f * _tileSize + y1 ) );
    }

    ///////////////////////////////////////////////////

    xcur = _crossingTile * _tileSize - _tileSize / 2.0f + taxiwayWidth_2 + _offset;

    TELS.push_back( FloatPair( xcur           , _runwayWidth / 2.0f + _offset        ) );
    TELS.push_back( FloatPair( xcur           , _runwayWidth / 2.0f + _offset + 1.0f ) );
    TELS.push_back( FloatPair( xcur - delta_x , _runwayWidth / 2.0f + _offset        ) );
    TELS.push_back( FloatPair( xcur - delta_x , _runwayWidth / 2.0f + _offset + 1.0f ) );

    TELS.push_back( FloatPair( xcur           , 1.0f * _tileSize ) );
    TELS.push_back( FloatPair( xcur           , 2.0f * _tileSize ) );
    TELS.push_back( FloatPair( xcur - delta_x , 1.0f * _tileSize ) );
    TELS.push_back( FloatPair( xcur - delta_x , 2.0f * _tileSize ) );

    ///////////////////////////////////////////////////

    xcur = ( _crossingTile - 2 ) * _tileSize;

    while ( xcur > 0.0f )
    {
        TELS.push_back( FloatPair( xcur, 3.0f * _tileSize - taxiwayWidth_2 - _offset ) );
        TELS.push_back( FloatPair( xcur, 3.0f * _tileSize + taxiwayWidth_2 + _offset ) );

        xcur -= _tileSize;
    }

    // helipad
    xcur = ( _crossingTile + 4 ) * _tileSize - _tileSize / 2.0f + taxiwayWidth_2 + _offset;

    for ( int i = 0; i < 4; i++ )
    {
        float sAlpha = sin( alpha[ i ] );
        float cAlpha = cos( alpha[ i ] );

        float x1 = r1 - r1 * cAlpha;
        float y1 = r1 * sAlpha;

        TELS.push_back( FloatPair( xcur           + x1, 3.5f * _tileSize - y1 ) );
        TELS.push_back( FloatPair( xcur - delta_x - x1, 3.5f * _tileSize - y1 ) );
    }

    TELS.push_back( FloatPair( xcur           , 4.0f * _tileSize ) );
    TELS.push_back( FloatPair( xcur           , 5.0f * _tileSize ) );
    TELS.push_back( FloatPair( xcur - delta_x , 5.0f * _tileSize ) );
    TELS.push_back( FloatPair( xcur - delta_x , 4.0f * _tileSize ) );

    ///////////////////////////////////////////////////

    // creating light points due to coordinates vector
    for ( size_t i = 0; i < TELS.size(); i++ )
    {
        float x = TELS.at( i ).first;
        float y = TELS.at( i ).second;

        osgSim::LightPoint lighPnt1( osg::Vec3( -x, y, -_height ), Colors::Blue );
        osgSim::LightPoint lighPnt2( osg::Vec3(  x, y, -_height ), Colors::Blue );

        lighPnt1._intensity = _intensity;
        lighPnt1._radius    = _radius;

        lighPnt2._intensity = _intensity;
        lighPnt2._radius    = _radius;

        lightPointNode->addLightPoint( lighPnt1 );
        lightPointNode->addLightPoint( lighPnt2 );
    }

    float y1 = 3.0f * _tileSize - taxiwayWidth_2 - _offset;
    float y2 = 3.0f * _tileSize + taxiwayWidth_2 + _offset;

    osgSim::LightPoint lighPnt1( osg::Vec3( 0.0f, y1, -_height ), Colors::Blue );
    osgSim::LightPoint lighPnt2( osg::Vec3( 0.0f, y2, -_height ), Colors::Blue );

    lighPnt1._intensity = _intensity;
    lighPnt1._radius    = _radius;

    lighPnt2._intensity = _intensity;
    lighPnt2._radius    = _radius;

    lightPointNode->addLightPoint( lighPnt1 );
    lightPointNode->addLightPoint( lighPnt2 );
}

////////////////////////////////////////////////////////////////////////////////

void Lights::TWRL::createTWRL( osgSim::LightPointNode *lightPointNode )
{
    float x = _crossingTile * _tileSize + _tileSize / 2.0f;
    float y = 275.0f;

    osg::Vec3 v_twr( x, y, 0.0f );
    osg::Vec3 v_ctr( 0.0f, 0.0f, 0.0f );

    osg::Vec3 v[ 5 ];
    bool      b[ 5 ];

    v[ 0 ] = v_twr + v_ctr + osg::Vec3( -3.92f, -3.92f, -23.7f );
    v[ 1 ] = v_twr + v_ctr + osg::Vec3( -3.92f,  3.92f, -23.7f );
    v[ 2 ] = v_twr + v_ctr + osg::Vec3(  3.92f, -3.92f, -23.7f );
    v[ 3 ] = v_twr + v_ctr + osg::Vec3(  3.92f,  3.92f, -23.7f );
    v[ 4 ] = v_twr + v_ctr + osg::Vec3(  0.00f,  0.00f, -28.4f );

    b[ 0 ] = false;
    b[ 1 ] = false;
    b[ 2 ] = false;
    b[ 3 ] = false;
    b[ 4 ] = true;

    for ( int i = 0; i < 5; i++ )
    {
        osgSim::LightPoint lighPnt( v[ i ], Colors::Red );

        lighPnt._intensity = _intensity;
        lighPnt._radius    = _radius;

        if ( b[ i ] )
        {
            osg::ref_ptr<osgSim::BlinkSequence> blinkSequence = new osgSim::BlinkSequence;

            blinkSequence->addPulse( 1.0f, osg::Vec4( 1.0f, 0.0f, 0.0f, 0.0f ) );
            blinkSequence->addPulse( 1.0f, osg::Vec4( 1.0f, 0.0f, 0.0f, 1.0f ) );

            lighPnt._blinkSequence = blinkSequence;
        }

        lightPointNode->addLightPoint( lighPnt );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Lights::VGSI::createPAPI( osgSim::LightPointNode *lightPointNode,
                               float xdel, float ydel )
{
    float ya = -ydel - 9.0f * 3.0f;
    float yb = -ydel - 9.0f * 2.0f;
    float yc = -ydel - 9.0f;
    float yd = -ydel;

    double sectorDegFrom = _sectorDegFromFN;
    double sectorDegUnto = _sectorDegUntoFN;

    if ( xdel > 0.0f )
    {
        ya = ydel + 9.0f * 3.0f;
        yb = ydel + 9.0f * 2.0f;
        yc = ydel + 9.0f;
        yd = ydel;

        sectorDegFrom = _sectorDegFromBN;
        sectorDegUnto = _sectorDegUntoBN;
    }

    osg::ref_ptr<osgSim::Sector> sectorAR =
            new osgSim::AzimElevationSector( sectorDegFrom, sectorDegUnto,
                                             osg::DegreesToRadians(   0.0f ), osg::DegreesToRadians(  -2.5f ) );
    osg::ref_ptr<osgSim::Sector> sectorAW =
            new osgSim::AzimElevationSector( sectorDegFrom, sectorDegUnto,
                                             osg::DegreesToRadians(  -2.5f ), osg::DegreesToRadians( -30.0f ) );
    osg::ref_ptr<osgSim::Sector> sectorBR =
            new osgSim::AzimElevationSector( sectorDegFrom, sectorDegUnto,
                                             osg::DegreesToRadians(   0.0f ), osg::DegreesToRadians(  -2.8f ) );
    osg::ref_ptr<osgSim::Sector> sectorBW =
            new osgSim::AzimElevationSector( sectorDegFrom, sectorDegUnto,
                                             osg::DegreesToRadians(  -2.8f ), osg::DegreesToRadians( -30.0f ) );
    osg::ref_ptr<osgSim::Sector> sectorCR =
            new osgSim::AzimElevationSector( sectorDegFrom, sectorDegUnto,
                                             osg::DegreesToRadians(   0.0f ), osg::DegreesToRadians(  -3.2f ) );
    osg::ref_ptr<osgSim::Sector> sectorCW =
            new osgSim::AzimElevationSector( sectorDegFrom, sectorDegUnto,
                                             osg::DegreesToRadians(  -3.2f ), osg::DegreesToRadians( -30.0f ) );
    osg::ref_ptr<osgSim::Sector> sectorDR =
            new osgSim::AzimElevationSector( sectorDegFrom, sectorDegUnto,
                                             osg::DegreesToRadians(   0.0f ), osg::DegreesToRadians(  -3.5f ) );
    osg::ref_ptr<osgSim::Sector> sectorDW =
            new osgSim::AzimElevationSector( sectorDegFrom, sectorDegUnto,
                                             osg::DegreesToRadians(  -3.5f ), osg::DegreesToRadians( -30.0f ) );

    osgSim::LightPoint lighPntAR( osg::Vec3( xdel, ya, -_height ), Colors::Red );
    osgSim::LightPoint lighPntAW( osg::Vec3( xdel, ya, -_height ), Colors::White );
    osgSim::LightPoint lighPntBR( osg::Vec3( xdel, yb, -_height ), Colors::Red );
    osgSim::LightPoint lighPntBW( osg::Vec3( xdel, yb, -_height ), Colors::White );
    osgSim::LightPoint lighPntCR( osg::Vec3( xdel, yc, -_height ), Colors::Red );
    osgSim::LightPoint lighPntCW( osg::Vec3( xdel, yc, -_height ), Colors::White );
    osgSim::LightPoint lighPntDR( osg::Vec3( xdel, yd, -_height ), Colors::Red );
    osgSim::LightPoint lighPntDW( osg::Vec3( xdel, yd, -_height ), Colors::White );

    lighPntAR._intensity = _intensity;
    lighPntAW._intensity = _intensity;
    lighPntBR._intensity = _intensity;
    lighPntBW._intensity = _intensity;
    lighPntCR._intensity = _intensity;
    lighPntCW._intensity = _intensity;
    lighPntDR._intensity = _intensity;
    lighPntDW._intensity = _intensity;

    lighPntAR._radius = _radius;
    lighPntAW._radius = _radius;
    lighPntBR._radius = _radius;
    lighPntBW._radius = _radius;
    lighPntCR._radius = _radius;
    lighPntCW._radius = _radius;
    lighPntDR._radius = _radius;
    lighPntDW._radius = _radius;

    lighPntAR._sector = sectorAR;
    lighPntAW._sector = sectorAW;
    lighPntBR._sector = sectorBR;
    lighPntBW._sector = sectorBW;
    lighPntCR._sector = sectorCR;
    lighPntCW._sector = sectorCW;
    lighPntDR._sector = sectorDR;
    lighPntDW._sector = sectorDW;

    lightPointNode->addLightPoint( lighPntAR );
    lightPointNode->addLightPoint( lighPntAW );
    lightPointNode->addLightPoint( lighPntBR );
    lightPointNode->addLightPoint( lighPntBW );
    lightPointNode->addLightPoint( lighPntCR );
    lightPointNode->addLightPoint( lighPntCW );
    lightPointNode->addLightPoint( lighPntDR );
    lightPointNode->addLightPoint( lighPntDW );
}

////////////////////////////////////////////////////////////////////////////////

void Lights::TLOF::createTLOF( osgSim::LightPointNode *lightPointNode,
                                    float xdel )
{
    float ydel = 6.0f * _tileSize;
    //float ydel = 0.0f * _tileSize;

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();

    //v->push_back( osg::Vec3( xdel +  0.0f, ydel - 22.5, -_height ) );
    v->push_back( osg::Vec3( xdel +  0.0f, ydel + 22.5, -_height ) );

    //v->push_back( osg::Vec3( xdel +  7.5f, ydel - 22.5, -_height ) );
    v->push_back( osg::Vec3( xdel +  7.5f, ydel + 22.5, -_height ) );
    //v->push_back( osg::Vec3( xdel -  7.5f, ydel - 22.5, -_height ) );
    v->push_back( osg::Vec3( xdel -  7.5f, ydel + 22.5, -_height ) );

    v->push_back( osg::Vec3( xdel + 15.0f, ydel - 22.5, -_height ) );
    v->push_back( osg::Vec3( xdel + 15.0f, ydel + 22.5, -_height ) );
    v->push_back( osg::Vec3( xdel - 15.0f, ydel - 22.5, -_height ) );
    v->push_back( osg::Vec3( xdel - 15.0f, ydel + 22.5, -_height ) );

    v->push_back( osg::Vec3( xdel + 22.5f, ydel - 22.5, -_height ) );
    v->push_back( osg::Vec3( xdel + 22.5f, ydel + 22.5, -_height ) );
    v->push_back( osg::Vec3( xdel - 22.5f, ydel - 22.5, -_height ) );
    v->push_back( osg::Vec3( xdel - 22.5f, ydel + 22.5, -_height ) );

    v->push_back( osg::Vec3( xdel + 22.5f, ydel +  0.0, -_height ) );
    v->push_back( osg::Vec3( xdel - 22.5f, ydel -  0.0, -_height ) );

    v->push_back( osg::Vec3( xdel + 22.5f, ydel -  7.5, -_height ) );
    v->push_back( osg::Vec3( xdel + 22.5f, ydel +  7.5, -_height ) );
    v->push_back( osg::Vec3( xdel - 22.5f, ydel -  7.5, -_height ) );
    v->push_back( osg::Vec3( xdel - 22.5f, ydel +  7.5, -_height ) );

    v->push_back( osg::Vec3( xdel + 22.5f, ydel - 15.0, -_height ) );
    v->push_back( osg::Vec3( xdel + 22.5f, ydel + 15.0, -_height ) );
    v->push_back( osg::Vec3( xdel - 22.5f, ydel - 15.0, -_height ) );
    v->push_back( osg::Vec3( xdel - 22.5f, ydel + 15.0, -_height ) );

    for ( size_t i = 0; i < v->size(); i++ )
    {
        osgSim::LightPoint lighPnt( v->at( i ), Colors::Green );

        lighPnt._intensity = _intensity;
        lighPnt._radius    = _radius;

        lightPointNode->addLightPoint( lighPnt );
    }
}
