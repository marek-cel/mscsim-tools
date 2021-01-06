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

#include <mass/Fuselage.h>

#include <mass/Atmosphere.h>
#include <mass/Units.h>

////////////////////////////////////////////////////////////////////////////////

const char Fuselage::xml_tag[] = "fuselage";

////////////////////////////////////////////////////////////////////////////////

double Fuselage::computeMass( Type type,
                              double l, double w, double h,
                              double wetted_area,
                              double m_maxto,
                              double nz_max,
                              bool wing_delta,
                              CargoDoor cargo_door,
                              bool fuselage_lg,
                              double wing_span,
                              double wing_sweep,
                              double wing_tr,
                              double h_tail_arm,
                              double press_vol,
                              double v_cruise,
                              double h_cruise )
{
    // Rayner: Aircraft Design, p.398, table 15.2
    double m1 = 0.0;
    {
        double s_f = Units::sqm2sqft( wetted_area );

        if ( type == FighterAttack )
        {
            m1 = Units::lb2kg( 4.8 * s_f );
        }

        if ( type == CargoTransport )
        {
            m1 = Units::lb2kg( 5.0 * s_f );
        }

        if ( type == GeneralAviation )
        {
            m1 = Units::lb2kg( 1.4 * s_f );
        }
    }

    double m2 = 0.0;
    {
        double m2_lb = 0.0;

        double w_dg = Units::kg2lb( m_maxto );
        double n_z  = 1.5 * nz_max;
        double l_ft = Units::m2ft( l );
        double d_ft = Units::m2ft( h );
        double w_ft = Units::m2ft( w );

        double s_f = Units::sqm2sqft( wetted_area );

        // Rayner: Aircraft Design, p.401, eq.15.4
        if ( type == FighterAttack )
        {
            double k_dwf = wing_delta ? 0.774 : 1.0;

            m2_lb = 0.499 * k_dwf * pow( w_dg, 0.35 ) * pow( n_z, 0.25 )
                    * pow( l_ft, 0.5 ) * pow( d_ft, 0.849 ) * pow( w_ft, 0.685 );
        }

        // Rayner: Aircraft Design, p.403, eq.15.28
        if ( type == CargoTransport )
        {
            double k_door = 1.0;

            switch ( cargo_door )
            {
                case NoCargoDoor       : k_door = 1.0;  break;
                case OneSideCargoDoor  : k_door = 1.06; break;
                case TwoSideCargoDoor  : k_door = 1.12; break;
                case AftClamshellDoor  : k_door = 1.12; break;
                case TwoSideAndAftDoor : k_door = 1.25; break;
            }

            double k_lg = fuselage_lg ? 1.12 : 1.0;

            double b_w = Units::m2ft( wing_span );
            double sweep_rad = Units::deg2rad( wing_sweep );

            double k_ws = 0.75
                    * ( (1.0 + 2.0 * wing_tr)/(1.0 + wing_tr) )
                    * ( b_w * tan( sweep_rad ) / l_ft );

            m2_lb = 0.328 * k_door * k_lg * pow( w_dg * n_z, 0.5 )
                            * pow( l_ft, 0.25 ) * pow( s_f, 0.302 ) * pow ( 1 + k_ws, 0.04 )
                            * pow( l_ft / d_ft, 0.1 );
        }

        // Rayner: Aircraft Design, p.404, eq.15.49
        if ( type == GeneralAviation )
        {
            double l_t_ft = Units::m2ft( h_tail_arm );

            double vol_press_cuft = Units::cum2cuft( press_vol );
            double w_press = 11.9 + pow( vol_press_cuft * 8.0, 0.271 );

            double v_mps = Units::kts2mps( v_cruise );
            double h_m   = Units::ft2m( h_cruise );
            double rho = Atmosphere::getDensity( h_m );
            double q = 0.5 * rho * pow( v_mps, 2.0 );
            double q_psf = Units::pa2psf( q );

            m2_lb = 0.052 * pow( s_f, 1.086 ) * pow( n_z * w_dg, 0.177 )
                            * pow( l_t_ft, -0.051 ) * pow ( l_ft / d_ft, -0.072 )
                            * pow( q_psf, 0.241 ) + w_press;
        }

        m2 = Units::lb2kg( m2_lb );
    }

    std::cout << "Fuselage:  " << m1 << "  " << m2 << std::endl;

    return ( m1 + m2 ) / 2.0;
}

////////////////////////////////////////////////////////////////////////////////

Fuselage::Fuselage( const Aircraft *ac ) :
    Component( ac )
{
    setName( "Fuselage" );
}

////////////////////////////////////////////////////////////////////////////////

Fuselage::~Fuselage() {}

////////////////////////////////////////////////////////////////////////////////

void Fuselage::save( QDomDocument *doc, QDomElement *parentNode )
{
    QDomElement node = doc->createElement( Fuselage::xml_tag );
    parentNode->appendChild( node );

    saveParameters( doc, &node );
}

////////////////////////////////////////////////////////////////////////////////

double Fuselage::getComputedMass( double l, double w, double h ) const
{
    return computeMass( _ac->getType(),
                        l, w, h,
                        _ac->getWettedArea(),
                        _ac->getM_maxto(),
                        _ac->getNzMax(),
                        _ac->getWingDelta(),
                        _ac->getCargoDoor(),
                        _ac->getFuselageLG(),
                        _ac->getWingSpan(),
                        _ac->getWingSweep(),
                        _ac->getWingTR(),
                        _ac->getHorTailArm(),
                        _ac->getPressVol(),
                        _ac->getCruiseV(),
                        _ac->getCruiseH() );

    return 0.0;
}
