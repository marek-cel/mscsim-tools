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
 *
 ******************************************************************************/

#include <fdm/models/fdm_TailRotor.h>
#include <fdm/main/fdm_Aerodynamics.h>

#include <fdm/xml/fdm_XmlUtils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

TailRotor::TailRotor() :
    _nb ( 0 ),

    _r ( 0.0 ),
    _c ( 0.0 ),
    _a ( 0.0 ),
    _b ( 0.0 ),

    _delta_0 ( 0.0 ),
    _delta_2 ( 0.0 ),

    _ct_max ( 0.0 ),
    _cq_max ( 0.0 ),

    _thrust_factor ( 1.0 ),
    _torque_factor ( 1.0 ),
    _vel_i_factor  ( 1.0 ),

    _r2  ( 0.0 ),
    _r3  ( 0.0 ),
    _ad  ( 0.0 ),
    _s   ( 0.0 ),
    _i_b ( 0.0 ),

    _omega ( 0.0 ),

    _theta ( 0.0 ),

    _thrust ( 0.0 ),
    _torque ( 0.0 )
{
    _bas2ras = Matrix3x3::createIdentityMatrix();
    _ras2bas = Matrix3x3::createIdentityMatrix();
}

////////////////////////////////////////////////////////////////////////////////

TailRotor::~TailRotor() {}

////////////////////////////////////////////////////////////////////////////////

void TailRotor::readData( XmlNode &dataNode )
{
    if ( dataNode.isValid() )
    {
        int result = FDM_SUCCESS;

        double cant_angle = 0.0;
        double blade_mass = 0.0;

        _thrust_factor = 1.0;
        _torque_factor = 1.0;
        _vel_i_factor  = 1.0;

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _r_hub_bas, "hub_center" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, cant_angle, "cant_angle" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _nb, "number_of_blades" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, blade_mass, "blade_mass" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _r, "rotor_radius" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _c, "blade_chord"  );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _a, "lift_slope" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _b, "tip_losses" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_0, "delta_0" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_2, "delta_2" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _ct_max, "ct_max" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cq_max, "cq_max" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _thrust_factor , "thrust_factor" , true );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _torque_factor , "torque_factor" , true );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _vel_i_factor  , "vel_i_factor"  , true );

        if ( result == FDM_SUCCESS )
        {
            _r2 = _r * _r;
            _r3 = _r * _r2;

            _ad = M_PI * _r2;
            _s = ( (double)_nb ) * _c * _r / _ad;

            _i_b = blade_mass * _r * _r / 3.0;

            // TODO
            _bas2ras = Matrix3x3( Angles( cant_angle, 0.0, 0.0 ) );
            _ras2bas = _bas2ras.getTransposed();
        }
        else
        {
            XmlUtils::throwError( __FILE__, __LINE__, dataNode );
        }
    }
    else
    {
        XmlUtils::throwError( __FILE__, __LINE__, dataNode );
    }
}

////////////////////////////////////////////////////////////////////////////////

void TailRotor::computeForceAndMoment( const Vector3 &vel_air_bas,
                                       const Vector3 &omg_air_bas,
                                       double airDensity )
{
    double omega2 = _omega * _omega;
    double omegaR = _omega * _r;

    // velocity transformations
    Vector3 vel_air_ras = _bas2ras * ( vel_air_bas + ( omg_air_bas % _r_hub_bas ) );

    // angle of attack
    double alpha = Aerodynamics::getAngleOfAttack( vel_air_ras );

    // induced velocity
    double lambda = 0.0;

    const double airspeed = vel_air_ras.getLength();

    // rotor advance ratio
    const double mu   = airspeed * cos( alpha ) / omegaR;
    const double mu2  = mu * mu;
    const double mu_z = airspeed * sin( alpha ) / omegaR;

    // thrust coefficient
    double ct = 0.0;

    // rotor inflow
    double lambda_i = _vel_i_bas.getLength() / omegaR;

    if ( fabs( lambda_i ) < 10e-14 ) lambda_i = 10e-14;

    // iteration loopp
    for ( int i = 0; i < 100; i++ )
    {
        lambda = mu_z - lambda_i;

        // thrust coefficient
        ct = 0.5 * _a * _s  * _b * ( lambda * _b / 2.0 + _theta * ( _b + 1.5 * mu2 ) / 3.0 );
        if ( ct > _ct_max ) ct = _ct_max;

        // zero function (Padfield p.124)
        double lambda_d = mu2 + lambda * lambda;
        double g_0 = lambda_i - ct / ( 2.0 * sqrt( lambda_d ) );

        // break condition
        if ( fabs( g_0 ) < 1.0e-6 ) break;

        // (Padfield p.124)
        double h_j = -( 2.0 * lambda_i * sqrt( lambda_d ) - ct ) * lambda_d
                / ( 2*pow( lambda_d, 2.0/3.0 ) + _a * _s * lambda_d / 4.0 - ct * lambda );

        // (Padfield p.124)
        double f_j = 1.0;
        if ( fabs( mu_z ) < 0.05 ) f_j = 0.6;

        // (Padfield p.124)
        double lambda_i_new = lambda_i + f_j * h_j;

        if ( Misc::isValid( lambda_i_new ) ) lambda_i = lambda_i_new;
    }

    // drag coefficient
    double cd = _delta_0 + _delta_2 * ct*ct;

    // moment of resistance coefficient (Bramwell p.102)
    double cq = cd * _s * ( 1.0 + 3.0 * mu2 ) / 8.0 - lambda * ct;
    if ( cq > _cq_max ) cq = _cq_max;

    // induced velocity
    _vel_i_bas = _ras2bas * Vector3( 0.0, 0.0, _vel_i_factor * lambda_i * omegaR );

    _thrust = _thrust_factor * airDensity * _ad * _r2 * omega2 * ct;
    _torque = _torque_factor * airDensity * _ad * _r3 * omega2 * cq;

    _for_bas = _ras2bas * Vector3( 0.0, 0.0, -_thrust );
    _mom_bas = _r_hub_bas % _for_bas;

    if ( !_for_bas.isValid() || !_mom_bas.isValid() )
    {
        Exception e;

        e.setType( Exception::UnexpectedNaN );
        e.setInfo( "NaN detected in the tail rotor model." );

        FDM_THROW( e );
    }
}

////////////////////////////////////////////////////////////////////////////////

void TailRotor::update( double omega, double theta )
{
    _omega = omega;
    _theta = theta;
}
