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
#ifndef FDM_DATAINP_H
#define FDM_DATAINP_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/fdm_Defines.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief Simulation input data.
 */
struct DataInp
{
    /** Aircraft type. */
    enum AircraftType
    {
        C130 = 0,                           ///< C-130
        C172 = 1,                           ///< Cessna 172
        F16  = 2,                           ///< F-16
        P51  = 3,                           ///< P-51
        UH60 = 4                            ///< UH-60

#       ifdef FDM_TEST
        ,
        TEST = 999                          ///< TEST
#       endif

    };

    /** State input. */
    enum StateInp
    {
        Idle = 0,                           ///< idle
        Init,                               ///< initialize
        Work,                               ///< work
        Freeze,                             ///< freeze
        Pause,                              ///< pause
        Stop                                ///< stop
    };

    /** Initial conditions. */
    struct Initial
    {
        double latitude;                    ///< [rad] geodetic latitude (positive north)
        double longitude;                   ///< [rad] geodetic longitude (positive east)
        double altitude_agl;                ///< [m] altitude above ground level
        double offset_x;                    ///< [m] initial position longitudinal offset
        double offset_y;                    ///< [m] initial position lateral offset
        double heading;                     ///< [rad] true heading
        double airspeed;                    ///< [m/s] airspeed

        bool engineOn;                      ///< specifies if engine is working at start
    };

    /** Environment data. */
    struct Environment
    {
        /** Turbulence intensity. */
        enum Turbulence
        {
            TurbulenceNone = 0,             ///< none
            TurbulenceMild,                 ///< mild
            TurbulenceModerate,             ///< moderate
            TurbulenceSevere,               ///< severe
            TurbulenceExtreme               ///< extreme
        };

        /** Wind shear types. */
        enum WindShear
        {
            WindShearNone = 0,              ///< none
            WindShearModel1,                ///< FAA Windshear Training Aid Vol. 2, Reference Wind Model #1, p. 4.3-146
            WindShearModel2,                ///< FAA Windshear Training Aid Vol. 2, Reference Wind Model #2, p. 4.3-148
            WindShearModel3,                ///< FAA Windshear Training Aid Vol. 2, Reference Wind Model #3, p. 4.3-150
            WindShearModel4                 ///< FAA Windshear Training Aid Vol. 2, Reference Wind Model #4, p. 4.3-152
        };

        double temperature_0;               ///< [K] sea level air temperature
        double pressure_0;                  ///< [Pa] sea level air pressure
        double wind_direction;              ///< [rad] wind direction
        double wind_speed;                  ///< [m/s] wind speed

        Turbulence turbulence;              ///< turbulence intensity
        WindShear  windShear;               ///< active wind shear model
    };

    /** Ground data. */
    struct Ground
    {
        double elevation;                   ///< [m] ground elevation above mean sea level

        double r_x_wgs;                     ///< [m] ground x coordinate expressed in WGS
        double r_y_wgs;                     ///< [m] ground y coordinate expressed in WGS
        double r_z_wgs;                     ///< [m] ground z coordinate expressed in WGS

        double n_x_wgs;                     ///< [-] vector normal to ground x coordinate expressed in WGS
        double n_y_wgs;                     ///< [-] vector normal to ground y coordinate expressed in WGS
        double n_z_wgs;                     ///< [-] vector normal to ground z coordinate expressed in WGS
    };

    /**
     * Controls data.
     * @see ISO 1151-4:1994
     * @see ISO 1151-6:1982
     */
    struct Controls
    {
        double roll;                        ///< [-1.0,1.0] roll control (positive in the port direction)
        double pitch;                       ///< [-1.0,1.0] pitch control (positive in the forward direction)
        double yaw;                         ///< [-1.0,1.0] yaw control (positive when the left foot moves in the forward direction)

        double trim_roll;                   ///< [-1.0,1.0] roll trim
        double trim_pitch;                  ///< [-1.0,1.0] pitch trim
        double trim_yaw;                    ///< [-1.0,1.0] yaw trim

        double brake_l;                     ///< [0.0,1.0] left brake
        double brake_r;                     ///< [0.0,1.0] right brake

        double landing_gear;                ///< [0.0,1.0] landing gear
        double nose_wheel;                  ///< [-1.0,1.0] nose wheel steering (positive when the left foot moves in the forward direction)

        double flaps;                       ///< [0.0,1.0] flaps
        double airbrake;                    ///< [0.0,1.0] airbrake
        double spoilers;                    ///< [0.0,1.0] spoilers

        double collective;                  ///< [0.0,1.0] collective control (positive in the upward direction)

        bool lgh;                           ///< landing gear handle
        bool nws;                           ///< nose wheel steering
        bool abs;                           ///< anti-skid braking system
    };

    /** Engine data. */
    struct Engine
    {
        double throttle;                    ///< [0.0,1.0] throttle
        double mixture;                     ///< [0.0,1.0] mixture lever
        double propeller;                   ///< [0.0,1.0] propeller lever

        bool fuel;                          ///< specifies if fuel is provided
        bool ignition;                      ///< specifies if ignition is enabled
        bool starter;                       ///< specifies if starter is enabled
    };

    /** Masses data. */
    struct Masses
    {
        double pilot[ FDM_MAX_PILOTS ];     ///< [kg] pilots
        double tank[ FDM_MAX_TANKS ];       ///< [kg] fuel tanks
        double cabin;                       ///< [kg] cabin
        double trunk;                       ///< [kg] cargo trunk
        double slung;                       ///< [kg] slung load
    };

    /** Recording data. */
    struct Recording
    {
        /** Recording modes. */
        enum Mode
        {
            Disabled = 0,                   ///< disabled
            Record,                         ///< record
            Replay                          ///< replay
        };

        Mode mode;                          ///< recording mode
        char file[ 4096 ];                  ///< recording file
    };

    Initial     initial;                    ///< initial conditions
    Environment environment;                ///< environment data
    Ground      ground;                     ///< ground data
    Controls    controls;                   ///< controls data
    Engine      engine[ FDM_MAX_ENGINES ];  ///< engines data
    Masses      masses;                     ///< masses data
    Recording   recording;                  ///< recording data

    AircraftType aircraftType;              ///< input aircraft type
    StateInp stateInp;                      ///< input state
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // FDM_DATAINP_H
