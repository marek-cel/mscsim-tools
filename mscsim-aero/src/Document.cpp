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

#include <Document.h>

#include <QDomDocument>
#include <QDomElement>
#include <QFileInfo>
#include <QTextStream>

////////////////////////////////////////////////////////////////////////////////

Document::Document()
{
    newEmpty();
}

////////////////////////////////////////////////////////////////////////////////

Document::~Document() {}

////////////////////////////////////////////////////////////////////////////////

void Document::newEmpty()
{
    _cd_0 = 0.0;
    _cd_1 = 0.0;
    _cd_2 = 0.0;
    _cd_3 = 0.0;
    _cd_4 = 0.0;
    _cd_5 = 0.0;

    _ad_1 = 0.0;
    _ad_2 = 0.0;
    _ad_3 = 0.0;
    _ad_4 = 0.0;

    _drag_angles_list.clear();
    _lift_angles_list.clear();
}

////////////////////////////////////////////////////////////////////////////////

bool Document::exportAs( const char *fileName )
{
    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Document::readFile( const char *fileName )
{
    bool status = false;

    newEmpty();

    QFile devFile( fileName );

    if ( devFile.open( QFile::ReadOnly | QFile::Text ) )
    {
        QDomDocument doc;

        doc.setContent( &devFile, false );

        QDomElement rootNode = doc.documentElement();

        if ( rootNode.tagName() == "mscsim_aero" )
        {
            QDomElement dragNode = rootNode.firstChildElement( "drag" );
            QDomElement liftNode = rootNode.firstChildElement( "lift" );

            if ( !dragNode.isNull() && !liftNode.isNull() )
            {
                QDomElement nodeCD_0 = dragNode.firstChildElement( "cd_0" );
                QDomElement nodeCD_1 = dragNode.firstChildElement( "cd_1" );
                QDomElement nodeCD_2 = dragNode.firstChildElement( "cd_2" );
                QDomElement nodeCD_3 = dragNode.firstChildElement( "cd_3" );
                QDomElement nodeCD_4 = dragNode.firstChildElement( "cd_4" );
                QDomElement nodeCD_5 = dragNode.firstChildElement( "cd_5" );

                QDomElement nodeAD_1 = dragNode.firstChildElement( "ad_1" );
                QDomElement nodeAD_2 = dragNode.firstChildElement( "ad_2" );
                QDomElement nodeAD_3 = dragNode.firstChildElement( "ad_3" );
                QDomElement nodeAD_4 = dragNode.firstChildElement( "ad_4" );

                QDomElement nodeDragAngleList = dragNode.firstChildElement( "angles_list" );

                if ( !nodeCD_0.isNull()
                  && !nodeCD_1.isNull()
                  && !nodeCD_2.isNull()
                  && !nodeCD_3.isNull()
                  && !nodeCD_4.isNull()
                  && !nodeCD_5.isNull()
                  && !nodeAD_1.isNull()
                  && !nodeAD_2.isNull()
                  && !nodeAD_3.isNull()
                  && !nodeAD_4.isNull()
                  && !nodeDragAngleList.isNull() )
                {
                    _cd_0 = nodeCD_0.text().toDouble();
                    _cd_1 = nodeCD_1.text().toDouble();
                    _cd_2 = nodeCD_2.text().toDouble();
                    _cd_3 = nodeCD_3.text().toDouble();
                    _cd_4 = nodeCD_4.text().toDouble();
                    _cd_5 = nodeCD_5.text().toDouble();

                    _ad_1 = nodeAD_1.text().toDouble();
                    _ad_2 = nodeAD_2.text().toDouble();
                    _ad_3 = nodeAD_3.text().toDouble();
                    _ad_4 = nodeAD_4.text().toDouble();

                    status = true;
                }
            }
        }

        devFile.close();
    }

    return status;
}

////////////////////////////////////////////////////////////////////////////////

bool Document::saveFile( const char *fileName )
{
    QString fileTemp = fileName;

    if ( QFileInfo( fileTemp ).suffix() != QString( "xml" ) )
    {
        fileTemp += ".xml";
    }

    QFile devFile( fileTemp );

    if ( devFile.open( QFile::WriteOnly | QFile::Truncate | QFile::Text ) )
    {
        QTextStream out;
        out.setDevice( &devFile );
        out.setCodec("UTF-8");
        out << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n";

        QDomDocument doc( "mscsim_aero" );

        doc.setContent( &devFile, false );

        QDomElement rootNode = doc.createElement( "mscsim_aero" );
        doc.appendChild( rootNode );

        // drag
        QDomElement dragNode = doc.createElement( "drag" );
        rootNode.appendChild( dragNode );

        out << doc.toString();

        devFile.close();

        return true;
    }

    return false;
}

////////////////////////////////////////////////////////////////////////////////

void Document::setCD_0( double cd_0 )
{
    _cd_0 = cd_0;
}

////////////////////////////////////////////////////////////////////////////////

void Document::setCD_1( double cd_1 )
{
    _cd_1 = cd_1;
}

////////////////////////////////////////////////////////////////////////////////

void Document::setCD_2( double cd_2 )
{
    _cd_2 = cd_2;
}

////////////////////////////////////////////////////////////////////////////////

void Document::setCD_3( double cd_3 )
{
    _cd_3 = cd_3;
}

////////////////////////////////////////////////////////////////////////////////

void Document::setCD_4( double cd_4 )
{
    _cd_4 = cd_4;
}

////////////////////////////////////////////////////////////////////////////////

void Document::setCD_5( double cd_5 )
{
    _cd_5 = cd_5;
}

////////////////////////////////////////////////////////////////////////////////

void Document::setAD_1( double ad_1 )
{
    _ad_1 = ad_1;
}

////////////////////////////////////////////////////////////////////////////////

void Document::setAD_2( double ad_2 )
{
    _ad_2 = ad_2;
}

////////////////////////////////////////////////////////////////////////////////

void Document::setAD_3( double ad_3 )
{
    _ad_3 = ad_3;
}

////////////////////////////////////////////////////////////////////////////////

void Document::setAD_4( double ad_4 )
{
    _ad_4 = ad_4;
}
