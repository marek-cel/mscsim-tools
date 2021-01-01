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
#include <asm/FLOLS.h>

#include <asm/Colors.h>
#include <asm/Lights.h>

////////////////////////////////////////////////////////////////////////////////

const char FLOLS::tagName[] = "flols";

const float FLOLS::_sectorDegFrom = osg::DegreesToRadians( 250.0f );
const float FLOLS::_sectorDegUnto = osg::DegreesToRadians( 290.0f );

////////////////////////////////////////////////////////////////////////////////

FLOLS::FLOLS()
{
    create();
}

////////////////////////////////////////////////////////////////////////////////

FLOLS::FLOLS( QDomElement *xmlNode ) :
    PAT( xmlNode )
{
    create();
}

////////////////////////////////////////////////////////////////////////////////

FLOLS::~FLOLS()
{
    removeAllChildren();
}

////////////////////////////////////////////////////////////////////////////////

void FLOLS::save( QDomDocument *doc, QDomElement *parentNode )
{
    QDomElement node = doc->createElement( FLOLS::tagName );
    parentNode->appendChild( node );

    saveParameters( doc, &node );
}

////////////////////////////////////////////////////////////////////////////////

void FLOLS::create()
{
    osg::ref_ptr<osgSim::LightPointNode> lightPointNode = new osgSim::LightPointNode();

    createIFLOLS( lightPointNode );

    Lights::setTexture( lightPointNode.get(), "data/textures/lightpoint_flols.png" );

    _pat->addChild( lightPointNode.get() );
}

////////////////////////////////////////////////////////////////////////////////

void FLOLS::createIFLOLS( osgSim::LightPointNode *lightPointNode )
{
    createIFLOLS_Datum( lightPointNode );
    createIFLOLS_Ball( lightPointNode );
    createIFLOLS_WaveOff( lightPointNode );
    createIFLOLS_CutOff( lightPointNode );
}

////////////////////////////////////////////////////////////////////////////////

void FLOLS::createIFLOLS_Datum( osgSim::LightPointNode *lightPointNode )
{
    const float radius    = 4.0f * 0.3f;
    const float intensity = 1.0f;
    const float dist      = 0.3;

    osg::ref_ptr<osgSim::Sector> sector =
            new osgSim::AzimElevationSector( _sectorDegFrom, _sectorDegUnto,
                                             osg::DegreesToRadians(   5.0f ),
                                             osg::DegreesToRadians( -10.0f ) );

    for ( int i = 0; i < 10; i++ )
    {
        float y = ( i + 5 ) * dist;

        osgSim::LightPoint lighPntL( osg::Vec3( 0.0, -y, 0.0 ), Colors::Green );
        osgSim::LightPoint lighPntR( osg::Vec3( 0.0,  y, 0.0 ), Colors::Green );

        lighPntL._intensity = intensity;
        lighPntR._intensity = intensity;

        lighPntL._radius = radius;
        lighPntR._radius = radius;

        lighPntL._sector = sector;
        lighPntR._sector = sector;

        lightPointNode->addLightPoint( lighPntL );
        lightPointNode->addLightPoint( lighPntR );
    }
}

////////////////////////////////////////////////////////////////////////////////

void FLOLS::createIFLOLS_Ball( osgSim::LightPointNode *lightPointNode )
{
    const float radius    = 4.0f * 0.3f;
    const float intensity = 5.0f;
    const float dist      = 0.3;

    osg::ref_ptr<osgSim::Sector> sector_0 =
            new osgSim::AzimElevationSector( _sectorDegFrom, _sectorDegUnto,
                                             osg::DegreesToRadians(  5.00f ),
                                             osg::DegreesToRadians( -1.55f ) );

    osg::ref_ptr<osgSim::Sector> sector_1 =
            new osgSim::AzimElevationSector( _sectorDegFrom, _sectorDegUnto,
                                             osg::DegreesToRadians( -1.45f ),
                                             osg::DegreesToRadians( -2.30f ) );
    osg::ref_ptr<osgSim::Sector> sector_2 =
            new osgSim::AzimElevationSector( _sectorDegFrom, _sectorDegUnto,
                                             osg::DegreesToRadians( -2.20f ),
                                             osg::DegreesToRadians( -3.05f ) );
    osg::ref_ptr<osgSim::Sector> sector_3 =
            new osgSim::AzimElevationSector( _sectorDegFrom, _sectorDegUnto,
                                             osg::DegreesToRadians( -2.95f ),
                                             osg::DegreesToRadians( -3.80f ) );
    osg::ref_ptr<osgSim::Sector> sector_4 =
            new osgSim::AzimElevationSector( _sectorDegFrom, _sectorDegUnto,
                                             osg::DegreesToRadians( -3.70f ),
                                             osg::DegreesToRadians( -4.55f ) );
    osg::ref_ptr<osgSim::Sector> sector_5 =
            new osgSim::AzimElevationSector( _sectorDegFrom, _sectorDegUnto,
                                             osg::DegreesToRadians( -4.45f ),
                                             osg::DegreesToRadians( -5.30f ) );
    osg::ref_ptr<osgSim::Sector> sector_6 =
            new osgSim::AzimElevationSector( _sectorDegFrom, _sectorDegUnto,
                                             osg::DegreesToRadians( -5.20f ),
                                             osg::DegreesToRadians( -6.05f ) );
    osg::ref_ptr<osgSim::Sector> sector_7 =
            new osgSim::AzimElevationSector( _sectorDegFrom, _sectorDegUnto,
                                             osg::DegreesToRadians( -5.95f ),
                                             osg::DegreesToRadians( -6.80f ) );
    osg::ref_ptr<osgSim::Sector> sector_8 =
            new osgSim::AzimElevationSector( _sectorDegFrom, _sectorDegUnto,
                                             osg::DegreesToRadians(  -6.70f ),
                                             osg::DegreesToRadians( -10.00f ) );

    osgSim::LightPoint lighPnt0a( osg::Vec3( 0.0, 0.0,  4.5 * dist ), Colors::Red );
    osgSim::LightPoint lighPnt0b( osg::Vec3( 0.0, 0.0,  3.5 * dist ), Colors::Red );
    osgSim::LightPoint lighPnt_1( osg::Vec3( 0.0, 0.0,  2.5 * dist ), Colors::Yellow );
    osgSim::LightPoint lighPnt_2( osg::Vec3( 0.0, 0.0,  1.5 * dist ), Colors::Yellow );
    osgSim::LightPoint lighPnt_3( osg::Vec3( 0.0, 0.0,  0.5 * dist ), Colors::Yellow );
    osgSim::LightPoint lighPnt_4( osg::Vec3( 0.0, 0.0, -0.5 * dist ), Colors::Yellow );
    osgSim::LightPoint lighPnt_5( osg::Vec3( 0.0, 0.0, -1.5 * dist ), Colors::Yellow );
    osgSim::LightPoint lighPnt_6( osg::Vec3( 0.0, 0.0, -2.5 * dist ), Colors::Yellow );
    osgSim::LightPoint lighPnt_7( osg::Vec3( 0.0, 0.0, -3.5 * dist ), Colors::Yellow );
    osgSim::LightPoint lighPnt_8( osg::Vec3( 0.0, 0.0, -4.5 * dist ), Colors::Yellow );

    lighPnt0a._intensity = intensity;
    lighPnt0b._intensity = intensity;
    lighPnt_1._intensity = intensity;
    lighPnt_2._intensity = intensity;
    lighPnt_3._intensity = intensity;
    lighPnt_4._intensity = intensity;
    lighPnt_5._intensity = intensity;
    lighPnt_6._intensity = intensity;
    lighPnt_7._intensity = intensity;
    lighPnt_8._intensity = intensity;

    lighPnt0a._radius = radius;
    lighPnt0b._radius = radius;
    lighPnt_1._radius = radius;
    lighPnt_2._radius = radius;
    lighPnt_3._radius = radius;
    lighPnt_4._radius = radius;
    lighPnt_5._radius = radius;
    lighPnt_6._radius = radius;
    lighPnt_7._radius = radius;
    lighPnt_8._radius = radius;

    lighPnt0a._sector = sector_0;
    lighPnt0b._sector = sector_0;
    lighPnt_1._sector = sector_1;
    lighPnt_2._sector = sector_2;
    lighPnt_3._sector = sector_3;
    lighPnt_4._sector = sector_4;
    lighPnt_5._sector = sector_5;
    lighPnt_6._sector = sector_6;
    lighPnt_7._sector = sector_7;
    lighPnt_8._sector = sector_8;

    osg::ref_ptr<osgSim::BlinkSequence> blinkSequence = new osgSim::BlinkSequence;

    blinkSequence->addPulse( 0.5f, Colors::Red );
    blinkSequence->addPulse( 0.5f, osg::Vec4( 0.0f, 0.0f, 0.0f, 0.0f ) );

    lighPnt0a._blinkSequence = blinkSequence;
    lighPnt0b._blinkSequence = blinkSequence;

    lightPointNode->addLightPoint( lighPnt0a );
    lightPointNode->addLightPoint( lighPnt0b );
    lightPointNode->addLightPoint( lighPnt_1 );
    lightPointNode->addLightPoint( lighPnt_2 );
    lightPointNode->addLightPoint( lighPnt_3 );
    lightPointNode->addLightPoint( lighPnt_4 );
    lightPointNode->addLightPoint( lighPnt_5 );
    lightPointNode->addLightPoint( lighPnt_6 );
    lightPointNode->addLightPoint( lighPnt_7 );
    lightPointNode->addLightPoint( lighPnt_8 );
}

////////////////////////////////////////////////////////////////////////////////

void FLOLS::createIFLOLS_WaveOff( osgSim::LightPointNode *lightPointNode )
{
    const float radius    = 4.0f * 0.3f;
    const float intensity = 5.0f;
    const float dist      = 0.3;

    float y1 = 5.0 * dist;
    float y2 = 7.0 * dist;

    float z[] =
    {
        -1.5f * dist,
         2.0f * dist,
         4.0f * dist
    };

    osg::ref_ptr<osgSim::Sector> sector [] =
    {
        new osgSim::AzimElevationSector( _sectorDegFrom, _sectorDegUnto,
                                         osg::DegreesToRadians(  5.00f ),
                                         osg::DegreesToRadians( -1.30f ) ),
        new osgSim::AzimElevationSector( _sectorDegFrom, _sectorDegUnto,
                                         osg::DegreesToRadians(  5.00f ),
                                         osg::DegreesToRadians( -1.45f ) ),
        new osgSim::AzimElevationSector( _sectorDegFrom, _sectorDegUnto,
                                         osg::DegreesToRadians(  5.00f ),
                                         osg::DegreesToRadians( -1.50f ) )
    };

    osg::ref_ptr<osgSim::BlinkSequence> blinkSequence = new osgSim::BlinkSequence;

    blinkSequence->addPulse( 0.5f, Colors::Red );
    blinkSequence->addPulse( 0.5f, osg::Vec4( 0.0f, 0.0f, 0.0f, 0.0f ) );

    for ( int i = 0; i < 3; i++ )
    {
        osgSim::LightPoint lighPnt_L1( osg::Vec3( 0.0, -y1,  z[ i ] ), Colors::Red );
        osgSim::LightPoint lighPnt_L2( osg::Vec3( 0.0, -y2,  z[ i ] ), Colors::Red );
        osgSim::LightPoint lighPnt_R1( osg::Vec3( 0.0,  y1,  z[ i ] ), Colors::Red );
        osgSim::LightPoint lighPnt_R2( osg::Vec3( 0.0,  y2,  z[ i ] ), Colors::Red );

        lighPnt_L1._intensity = intensity;
        lighPnt_L2._intensity = intensity;
        lighPnt_R1._intensity = intensity;
        lighPnt_R2._intensity = intensity;

        lighPnt_L1._radius = radius;
        lighPnt_L2._radius = radius;
        lighPnt_R1._radius = radius;
        lighPnt_R2._radius = radius;

        lighPnt_L1._sector = sector[ i ];
        lighPnt_L2._sector = sector[ i ];
        lighPnt_R1._sector = sector[ i ];
        lighPnt_R2._sector = sector[ i ];

        lighPnt_L1._blinkSequence = blinkSequence;
        lighPnt_L2._blinkSequence = blinkSequence;
        lighPnt_R1._blinkSequence = blinkSequence;
        lighPnt_R2._blinkSequence = blinkSequence;

        lightPointNode->addLightPoint( lighPnt_L1 );
        lightPointNode->addLightPoint( lighPnt_L2 );
        lightPointNode->addLightPoint( lighPnt_R1 );
        lightPointNode->addLightPoint( lighPnt_R2 );
    }
}

////////////////////////////////////////////////////////////////////////////////

void FLOLS::createIFLOLS_CutOff( osgSim::LightPointNode *lightPointNode )
{
    const float radius    = 4.0f * 0.3f;
    const float intensity = 5.0f;
    const float dist      = 0.3;

    float y1 = 2.0 * dist;
    float y2 = 4.0 * dist;

    float z = -2.5 * dist;

    osg::ref_ptr<osgSim::Sector> sector =
            new osgSim::AzimElevationSector( _sectorDegFrom, _sectorDegUnto,
                                             osg::DegreesToRadians(  -6.70f ),
                                             osg::DegreesToRadians( -10.00f ) );

    osgSim::LightPoint lighPnt_L1( osg::Vec3( 0.0, -y1,  z ), Colors::Green );
    osgSim::LightPoint lighPnt_L2( osg::Vec3( 0.0, -y2,  z ), Colors::Green );
    osgSim::LightPoint lighPnt_R1( osg::Vec3( 0.0,  y1,  z ), Colors::Green );
    osgSim::LightPoint lighPnt_R2( osg::Vec3( 0.0,  y2,  z ), Colors::Green );

    lighPnt_L1._intensity = intensity;
    lighPnt_L2._intensity = intensity;
    lighPnt_R1._intensity = intensity;
    lighPnt_R2._intensity = intensity;

    lighPnt_L1._radius = radius;
    lighPnt_L2._radius = radius;
    lighPnt_R1._radius = radius;
    lighPnt_R2._radius = radius;

    lighPnt_L1._sector = sector;
    lighPnt_L2._sector = sector;
    lighPnt_R1._sector = sector;
    lighPnt_R2._sector = sector;

    lightPointNode->addLightPoint( lighPnt_L1 );
    lightPointNode->addLightPoint( lighPnt_L2 );
    lightPointNode->addLightPoint( lighPnt_R1 );
    lightPointNode->addLightPoint( lighPnt_R2 );
}

////////////////////////////////////////////////////////////////////////////////

void FLOLS::saveParameters( QDomDocument *doc, QDomElement *xmlNode )
{
    ////////////////////////////////////
    PAT::saveParameters( doc, xmlNode );
    ////////////////////////////////////
}
