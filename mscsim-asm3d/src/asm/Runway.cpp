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
#include <asm/Runway.h>

#include <iostream>

#include <asm/Lights.h>

////////////////////////////////////////////////////////////////////////////////

const char Runway::tagName[] = "runway";

////////////////////////////////////////////////////////////////////////////////

Runway::Runway() :
    PAT(),

    _rals_lo ( RALS_NONE ),
    _rals_hi ( RALS_NONE ),
    _vgsi_lo ( VGSI_NONE ),
    _vgsi_hi ( VGSI_NONE ),
    _length ( 1000.0 ),
    _width ( 45.0 ),
    _vgsi_x_lo ( 300.0 ),
    _vgsi_x_hi ( 300.0 ),
    _rcls ( false ),
    _tdzl ( false )
{}

////////////////////////////////////////////////////////////////////////////////

Runway::Runway( QDomElement *xmlNode ) :
    PAT( xmlNode )
{
    setLength( xmlNode->attributeNode( "length" ).value().toFloat() );
    setWidth( xmlNode->attributeNode( "width" ).value().toFloat() );

    setRALS_Lo( (RALS)(xmlNode->attributeNode( "rals_lo" ).value().toInt()) );
    setRALS_Hi( (RALS)(xmlNode->attributeNode( "rals_hi" ).value().toInt()) );

    setVGSI_Lo( (VGSI)(xmlNode->attributeNode( "vgsi_lo" ).value().toInt()) );
    setVGSI_Hi( (VGSI)(xmlNode->attributeNode( "vgsi_hi" ).value().toInt()) );

    setVGSI_X_Lo( xmlNode->attributeNode( "vgsi_x_lo" ).value().toFloat() );
    setVGSI_X_Hi( xmlNode->attributeNode( "vgsi_x_hi" ).value().toFloat() );

    setRCLS( (bool)(xmlNode->attributeNode( "rcls" ).value().toInt()) );
    setTDZL( (bool)(xmlNode->attributeNode( "tdzl" ).value().toInt()) );

    // gaps
    QDomElement gapNode = xmlNode->firstChildElement( "gap" );

    while ( gapNode.tagName() == "gap" )
    {
        Gap gap;

        gap.from = gapNode.attributeNode( "from" ).value().toFloat();
        gap.to = gapNode.attributeNode( "to" ).value().toFloat();

        switch ( gapNode.attributeNode( "side" ).value().toInt() )
        {
            default:
            case Gap::Left:  gap.side = Gap::Left;  break;
            case Gap::Right: gap.side = Gap::Right; break;
            case Gap::Both:  gap.side = Gap::Both;  break;
        }

        _gaps.push_back( gap );

        gapNode = gapNode.nextSiblingElement( "gap" );
    }

    //std::cout << __FILE__ << "(" << __LINE__ << ") " << _node->getName() << " " << _gaps.size() << std::endl;

    removeAllRunwayChildren();
    create();
}

////////////////////////////////////////////////////////////////////////////////

Runway::~Runway() {}

////////////////////////////////////////////////////////////////////////////////

void Runway::save( QDomDocument *doc, QDomElement *parentNode )
{
    QDomElement node = doc->createElement( Runway::tagName );
    parentNode->appendChild( node );

    saveParameters( doc, &node );
}

////////////////////////////////////////////////////////////////////////////////

void Runway::setRALS_Lo( RALS rals_lo )
{
    removeAllRunwayChildren();
    _rals_lo = rals_lo;
    create();
}

////////////////////////////////////////////////////////////////////////////////

void Runway::setRALS_Hi( RALS rals_hi )
{
    removeAllRunwayChildren();
    _rals_hi = rals_hi;
    create();
}

////////////////////////////////////////////////////////////////////////////////

void Runway::setVGSI_Lo( VGSI vgsi_lo )
{
    removeAllRunwayChildren();
    _vgsi_lo = vgsi_lo;
    create();
}

////////////////////////////////////////////////////////////////////////////////

void Runway::setVGSI_Hi( VGSI vgsi_hi )
{
    removeAllRunwayChildren();
    _vgsi_hi = vgsi_hi;
    create();
}

////////////////////////////////////////////////////////////////////////////////

void Runway::setLength( float length )
{
    removeAllRunwayChildren();
    _length = length;
    create();
}

////////////////////////////////////////////////////////////////////////////////

void Runway::setWidth( float width )
{
    removeAllRunwayChildren();
    _width = width;
    create();
}

////////////////////////////////////////////////////////////////////////////////

void Runway::setVGSI_X_Lo( float vgsi_x_lo )
{
    removeAllRunwayChildren();
    _vgsi_x_lo = vgsi_x_lo;
    create();
}

////////////////////////////////////////////////////////////////////////////////

void Runway::setVGSI_X_Hi( float vgsi_x_hi )
{
    removeAllRunwayChildren();
    _vgsi_x_hi = vgsi_x_hi;
    create();
}

////////////////////////////////////////////////////////////////////////////////

void Runway::setGaps( Gaps gaps )
{
    removeAllRunwayChildren();
    //_gaps.clear();
    _gaps = gaps;
    create();
}

////////////////////////////////////////////////////////////////////////////////

void Runway::setRCLS( bool rcls )
{
    removeAllRunwayChildren();
    _rcls = rcls;
    create();
}

////////////////////////////////////////////////////////////////////////////////

void Runway::setTDZL( bool tdzl )
{
    removeAllRunwayChildren();
    _tdzl = tdzl;
    create();
}

////////////////////////////////////////////////////////////////////////////////

void Runway::create()
{
    _runway = new osg::Group();
    _pat->addChild( _runway.get() );

    _switchRALS_H = new osg::Switch();
    _switchTDZL_H = new osg::Switch();
    _switchVGSI_H = new osg::Switch();

    _switchRALS_L = new osg::Switch();
    _switchTDZL_L = new osg::Switch();
    _switchVGSI_L = new osg::Switch();

    _switchRCLS = new osg::Switch();
    _switchRELS = new osg::Switch();

    _switchRALS_H->setName( "RALS_H" );
    _switchTDZL_H->setName( "TDZL_H" );
    _switchVGSI_H->setName( "VGSI_H" );

    _switchRALS_L->setName( "RALS_L" );
    _switchTDZL_L->setName( "TDZL_L" );
    _switchVGSI_L->setName( "VGSI_L" );

    _switchRCLS->setName( "RCLS" );
    _switchRELS->setName( "RELS" );

    _runway->addChild( _switchRALS_H.get() );
    _runway->addChild( _switchTDZL_H.get() );
    _runway->addChild( _switchVGSI_H.get() );

    _runway->addChild( _switchRALS_L.get() );
    _runway->addChild( _switchTDZL_L.get() );
    _runway->addChild( _switchVGSI_L.get() );

    _runway->addChild( _switchRCLS.get() );
    _runway->addChild( _switchRELS.get() );

    float xdel = _length / 2.0f;

    switch ( _rals_lo )
    {
        default: /* do nothing */ break;
        case RALS_ALSF1: Lights::RALS::createALSF1 ( _switchRALS_L.get(), _width, -xdel ); break;
        case RALS_ALSF2: Lights::RALS::createALSF2 ( _switchRALS_L.get(), _width, -xdel ); break;
        case RALS_MALS:  Lights::RALS::createMALS  ( _switchRALS_L.get(), _width, -xdel ); break;
        case RALS_MALSF: Lights::RALS::createMALSF ( _switchRALS_L.get(), _width, -xdel ); break;
        case RALS_MALSR: Lights::RALS::createMALSR ( _switchRALS_L.get(), _width, -xdel ); break;
    }

    switch ( _rals_hi )
    {
        default: /* do nothing */ break;
        case RALS_ALSF1: Lights::RALS::createALSF1 ( _switchRALS_H.get(), _width,  xdel ); break;
        case RALS_ALSF2: Lights::RALS::createALSF2 ( _switchRALS_H.get(), _width,  xdel ); break;
        case RALS_MALS:  Lights::RALS::createMALS  ( _switchRALS_H.get(), _width,  xdel ); break;
        case RALS_MALSF: Lights::RALS::createMALSF ( _switchRALS_H.get(), _width,  xdel ); break;
        case RALS_MALSR: Lights::RALS::createMALSR ( _switchRALS_H.get(), _width,  xdel ); break;
    }

    float xdel_lo = -_length / 2.0f + _vgsi_x_lo;
    float xdel_hi =  _length / 2.0f - _vgsi_x_hi;

    float ydel = _width  / 2.0f + 15.0f;

    switch ( _vgsi_lo )
    {
        default: /* do nothing */ break;
        case VGSI_P4L: Lights::VGSI::createPAPI( _switchVGSI_L.get(), xdel_lo,  ydel ); break;
        case VGSI_P4R: Lights::VGSI::createPAPI( _switchVGSI_L.get(), xdel_lo, -ydel ); break;
        case VGSI_V4L: Lights::VGSI::createVASI( _switchVGSI_L.get(), xdel_lo,  ydel ); break;
        case VGSI_V4R: Lights::VGSI::createVASI( _switchVGSI_L.get(), xdel_lo, -ydel ); break;
        case VGSI_V6L: Lights::VGSI::createVASI3( _switchVGSI_L.get(), xdel_lo,  ydel ); break;
        case VGSI_V6R: Lights::VGSI::createVASI3( _switchVGSI_L.get(), xdel_lo, -ydel ); break;
    }

    switch ( _vgsi_hi )
    {
        default: /* do nothing */ break;
        case VGSI_P4L: Lights::VGSI::createPAPI( _switchVGSI_H.get(), xdel_hi,  ydel ); break;
        case VGSI_P4R: Lights::VGSI::createPAPI( _switchVGSI_H.get(), xdel_hi, -ydel ); break;
        case VGSI_V4L: Lights::VGSI::createVASI( _switchVGSI_H.get(), xdel_hi,  ydel ); break;
        case VGSI_V4R: Lights::VGSI::createVASI( _switchVGSI_H.get(), xdel_hi, -ydel ); break;
        case VGSI_V6L: Lights::VGSI::createVASI3( _switchVGSI_H.get(), xdel_hi,  ydel ); break;
        case VGSI_V6R: Lights::VGSI::createVASI3( _switchVGSI_H.get(), xdel_hi, -ydel ); break;
    }

    if ( _rcls )
    {
        Lights::RCLS::createRCLS( _switchRCLS.get(), _length );
    }

    if ( _tdzl )
    {
        Lights::TDZL::createTDZL( _switchTDZL_L.get(), _switchTDZL_H.get(), _length );
    }

    //std::cout << __FILE__ << "(" << __LINE__ << ") " << _node->getName() << " " << _gaps.size() << std::endl;
    Lights::RELS::createRELS( _switchRELS.get(), _width, _length, _gaps );
}

////////////////////////////////////////////////////////////////////////////////

void Runway::removeAllRunwayChildren()
{
    if ( _runway.valid() )
    {
        if ( _runway->getNumChildren() > 0 )
        {
            _runway->removeChild( 0, _runway->getNumChildren() );
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Runway::saveParameters( QDomDocument *doc, QDomElement *xmlNode )
{
    ////////////////////////////////////
    PAT::saveParameters( doc, xmlNode );
    ////////////////////////////////////

    QDomAttr nodeLength = doc->createAttribute( "length" );
    QDomAttr nodeWidth  = doc->createAttribute( "width"  );

    QDomAttr nodeRALS_Lo = doc->createAttribute( "rals_lo" );
    QDomAttr nodeRALS_Hi = doc->createAttribute( "rals_hi" );

    QDomAttr nodeVGSI_Lo = doc->createAttribute( "vgsi_lo" );
    QDomAttr nodeVGSI_Hi = doc->createAttribute( "vgsi_hi" );

    QDomAttr nodeVGSI_X_Lo = doc->createAttribute( "vgsi_x_lo" );
    QDomAttr nodeVGSI_X_Hi = doc->createAttribute( "vgsi_x_hi" );

    QDomAttr nodeRCLS = doc->createAttribute( "rcls" );
    QDomAttr nodeTDZL = doc->createAttribute( "tdzl" );

    nodeLength.setValue( QString::number( _length ) );
    nodeWidth.setValue( QString::number( _width ) );

    nodeRALS_Lo.setValue( QString::number( _rals_lo ) );
    nodeRALS_Hi.setValue( QString::number( _rals_hi ) );

    nodeVGSI_Lo.setValue( QString::number( _vgsi_lo ) );
    nodeVGSI_Hi.setValue( QString::number( _vgsi_hi ) );

    nodeVGSI_X_Lo.setValue( QString::number( _vgsi_x_lo ) );
    nodeVGSI_X_Hi.setValue( QString::number( _vgsi_x_hi ) );

    nodeRCLS.setValue( QString::number( _rcls ? 1 : 0 ) );
    nodeTDZL.setValue( QString::number( _tdzl ? 1 : 0 ) );

    xmlNode->setAttributeNode( nodeLength );
    xmlNode->setAttributeNode( nodeWidth );

    xmlNode->setAttributeNode( nodeRALS_Lo );
    xmlNode->setAttributeNode( nodeRALS_Hi );

    xmlNode->setAttributeNode( nodeVGSI_Lo );
    xmlNode->setAttributeNode( nodeVGSI_Hi );

    xmlNode->setAttributeNode( nodeVGSI_X_Lo );
    xmlNode->setAttributeNode( nodeVGSI_X_Hi );

    xmlNode->setAttributeNode( nodeRCLS );
    xmlNode->setAttributeNode( nodeTDZL );

    for ( Gaps::iterator it = _gaps.begin(); it != _gaps.end(); ++it )
    {
        QDomElement gapNode = doc->createElement( "gap" );

        QDomAttr nodeFrom = doc->createAttribute( "from" );
        QDomAttr nodeTo   = doc->createAttribute( "to" );
        QDomAttr nodeSide = doc->createAttribute( "side" );

        nodeFrom .setValue( QString::number( (*it).from ) );
        nodeTo   .setValue( QString::number( (*it).to ) );
        nodeSide .setValue( QString::number( (*it).side ) );

        gapNode.setAttributeNode( nodeFrom );
        gapNode.setAttributeNode( nodeTo );
        gapNode.setAttributeNode( nodeSide );

        xmlNode->appendChild( gapNode );
    }
}

