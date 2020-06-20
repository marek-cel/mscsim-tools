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
#ifndef FDM_BLADE_H
#define FDM_BLADE_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/fdm_Defines.h>

#include <fdm/models/fdm_MainRotor.h>

#include <fdm/utils/fdm_Matrix3x3.h>
#include <fdm/utils/fdm_Table.h>
#include <fdm/utils/fdm_Vector3.h>

#include <fdm/xml/fdm_XmlNode.h>

#ifdef SIM_ROTOR_TEST
#   include <Data.h>
#endif

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief Rotor blade model class.
 *
 * This is helicopter articulated rotor blade model class based on the blade
 * element theory. Blade is assumed to be rigid and uniform along its span.
 * Blade lead/lag motion is neglected.
 *
 * Flapping angle is positive upwards.
 *
 * Shaft-Rotating Axis (SRA)
 * Origin of the Shaft-Rotating Axis system is coincident with the rotor hub
 * center and rotates together with the rotor shaft. The z-axis is coincident
 * with the rotor shaft axis and points upwards, the x-axis points towards blade
 * trailing edge and the y-axis completes a right handed coordinate system.
 * Please notice that y-axis is positive toward blade tip for counter-clockwise
 * rotors while it is negative toward blade tip for clockwise rotors.
 *
 * Blade-Span Axis (BSA)
 * Origin of the Blade Axis System is coincident with the point of intersection
 * of flapping and feathering hinge axes. The x-axis lies on XY plane of the
 * Rotor Axis System and it is positive toward blade's trailing edge, z-axis is
 * positive in upward direction and the y-axis completes a right-handed
 * coordinate system.
 * Please notice that y-axis is positive toward blade tip for counter-clockwise
 * rotors while it is negative toward blade tip for clockwise rotors.
 *
 * XML configuration file format:
 * @code
 * <blade>
 *   <blade_mass> { [kg] blade mass } </blade_mass>
 *   <blade_length> { [m] blade length from flapping hinge to the tip } </blade_length>
 *   <blade_chord> { [m] blade chord } </blade_chord>
 *   <hinge_offset> { [m] flapping hinge offset from shaft axis } </hinge_offset>
 *   <beta_min> { [rad] minimum flapping angle } </beta_min>
 *   <beta_max> { [rad] maximum flapping angle } </beta_max>
 *   <twist>
*     { [m] spanwise coordinate } { [rad] twist angle }
 *     ... { more entries }
 *   </twist>
 *   <cd>
*     { [rad] angle of attack } { [-] drag coefficient }
 *     ... { more entries }
 *   </cd>
 *   <cl>
*     { [rad] angle of attack } { [-] lift coefficient }
 *     ... { more entries }
 *   </cl>
 * </blade>
 * @endcode
 */
class FDMEXPORT Blade
{
public:

    typedef Vector< 2 > StateVector;

#   ifdef SIM_ROTOR_TEST
    struct Vect
    {
        bool visible;

        Vector3 b_sra;
        Vector3 v_sra;
    };

    Vect span[ VECT_SPAN ];
#   endif

    typedef MainRotor::Direction Direction;

    static Matrix3x3 getRAS2SRA( double psi, Direction direction = MainRotor::CW );

    static Matrix3x3 getSRA2BSA( double beta, Direction direction = MainRotor::CW );

    /** Constructor. */
    Blade( Direction direction = MainRotor::CW );

    /** Destructor. */
    virtual ~Blade();

    /**
     * Reads data.
     * @param dataNode XML node
     */
    virtual void readData( XmlNode &dataNode );

#   ifdef SIM_ROTOR_TEST
    void TEST_INIT();
#   endif

    /**
     * @brief Compute forces and moments.
     * @param vel_air_ras [m/s]     rotor hub linear velocity relative to airflow expressed in RAS
     * @param omg_air_ras [rad/s]   rotor hub angular velocity relative to airflow expressed in RAS
     * @param omg_ras     [rad/s]   angular velocity expressed in RAS
     * @param acc_ras     [m/s^2]   rotor hub linear acceleration expressed in RAS
     * @param eps_ras     [rad/s^2] angular acceleration expressed in RAS
     * @param grav_ras    [m/s^2]   gravity acceleration vector expressed in RAS
     * @param omega       [rad/s]   rotor speed
     * @param azimuth     [rad]     blade azimuth
     * @param airDensity  [kg/m^3]  air density
     * @param theta_0     [rad]     collective feathering angle
     * @param theta_1c    [rad]     logitudinal feathering angle
     * @param theta_1s    [rad]     lateral feathering angle
     */
    virtual void computeForceAndMoment( const Vector3 &vel_air_ras,
                                        const Vector3 &omg_air_ras,
                                        const Vector3 &omg_ras,
                                        const Vector3 &acc_ras,
                                        const Vector3 &eps_ras,
                                        const Vector3 &grav_ras,
                                        double omega,
                                        double azimuth,
                                        double airDensity,
                                        double theta_0,
                                        double theta_1c,
                                        double theta_1s );

    /**
     * @brief Integrates blade model.
     * @param timeStep    [s]       time step
     * @param vel_air_ras [m/s]     rotor hub linear velocity relative to airflow expressed in RAS
     * @param omg_air_ras [rad/s]   rotor hub angular velocity relative to airflow expressed in RAS
     * @param omg_ras     [rad/s]   angular velocity expressed in RAS
     * @param acc_ras     [m/s^2]   rotor hub linear acceleration expressed in RAS
     * @param eps_ras     [rad/s^2] angular acceleration expressed in RAS
     * @param grav_ras    [m/s^2]   gravity acceleration vector expressed in RAS
     * @param omega       [rad/s]   rotor speed
     * @param azimuth     [rad]     blade azimuth
     * @param airDensity  [kg/m^3]  air density
     * @param theta_0     [rad]     collective feathering angle
     * @param theta_1c    [rad]     logitudinal feathering angle
     * @param theta_1s    [rad]     lateral feathering angle
     */
    virtual void integrate( double timeStep,
                            const Vector3 &vel_air_ras,
                            const Vector3 &omg_air_ras,
                            const Vector3 &omg_ras,
                            const Vector3 &acc_ras,
                            const Vector3 &eps_ras,
                            const Vector3 &grav_ras,
                            double omega,
                            double azimuth,
                            double airDensity,
                            double theta_0,
                            double theta_1c,
                            double theta_1s );

    inline const Vector3& getFor_RAS() const { return _for_ras; }
    inline const Vector3& getMom_RAS() const { return _mom_ras; }

    inline double getInertia() const { return _ib; }

    inline double getTorque() const { return _torque; }

    inline double getBeta()  const { return _beta; }
    inline double getTheta() const { return _theta; }

protected:

    const Direction _direction; ///< rotor direction

    const double _dirFactor;    ///< factor due to direction

    StateVector _stateVect;     ///< blade state vector
    StateVector _derivVect;     ///< blade state vector derivative

    Vector3 _for_ras;           ///< [N] total force vector expressed in RAS
    Vector3 _mom_ras;           ///< [N*m] total moment vector expressed in RAS

    Matrix3x3 _ras2sra;         ///< matrix of rotation from RAS to SRA
    Matrix3x3 _sra2ras;         ///< matrix of rotation from SRA to RAS

    //Matrix3x3 _sra2bsa;         ///< matrix of rotation from SRA to BSA
    //Matrix3x3 _bsa2sra;         ///< matrix of rotation from BSA to SRA

    Vector3 _pos_fh_sra;        ///< [m] flapping hinge coordinates expressed SRA

    Table _twist;               ///< [rad] spanwise blade twist vs spanwise coordinate

    Table _cd;                  ///< [-] blade section drag coefficient vs angle of attack
    Table _cl;                  ///< [-] blade section lift coefficient vs angle of attack

    double _m;                  ///< [kg] blage mass
    double _b;                  ///< [m] blade length
    double _c;                  ///< [m] blade chord
    double _e;                  ///< [m] flapping hinge offset

    double _beta_min;           ///< [rad] minimum flapping angle
    double _beta_max;           ///< [rad] maximum flapping angle

    double _sb;                 ///< [kg*m] blade first moment of mass about flapping hinge
    double _ib;                 ///< [kg*m^2] blade inertia moment about flapping hinge

    double _xforce;             ///< [N] force x component expressed in SRA
    double _yforce;             ///< [N] force y component expressed in SRA
    double _zforce;             ///< [N] force z component expressed in SRA
    double _torque;             ///< [N*m] torque
    double _moment;             ///< [N*m] total moment about flapping hinge (including aerodynamic, gravity and inertia moments)

    double &_beta;              ///< [rad] flapping angle
    double &_beta_dot;          ///< [rad/s] flapping angle derivative

    double _theta;              ///< [rad] feathering angle

    virtual void computeStateDeriv( const StateVector &stateVect,
                                    StateVector *derivVect );

    virtual double getTheta( double azimuth,
                             double theta_0,
                             double theta_1c,
                             double theta_1s );

    virtual void integrateEulerRect( double timeStep,
                                     const Vector3 &vel_air_ras,
                                     const Vector3 &omg_air_ras,
                                     const Vector3 &omg_ras,
                                     const Vector3 &acc_ras,
                                     const Vector3 &eps_ras,
                                     const Vector3 &grav_ras,
                                     double omega,
                                     double airDensity );

    virtual void integrateRungeKutta4( double timeStep,
                                       const Vector3 &vel_air_ras,
                                       const Vector3 &omg_air_ras,
                                       const Vector3 &omg_ras,
                                       const Vector3 &acc_ras,
                                       const Vector3 &eps_ras,
                                       const Vector3 &grav_ras,
                                       double omega,
                                       double airDensity );

    /**
     * @brief Integrates blade spanwise.
     * @param vel_air_ras [m/s]     rotor hub linear velocity relative to airflow expressed in RAS
     * @param omg_air_ras [rad/s]   rotor hub angular velocity relative to airflow expressed in RAS
     * @param omg_ras     [rad/s]   angular velocity expressed in RAS
     * @param acc_ras     [m/s^2]   rotor hub linear acceleration expressed in RAS
     * @param eps_ras     [rad/s^2] angular acceleration expressed in RAS
     * @param grav_ras    [m/s^2]   gravity acceleration vector expressed in RAS
     * @param omega       [rad/s]   rotor speed
     * @param airDensity  [kg/m^3]  air density
     */
    virtual void integrateSpanwise( const Vector3 &vel_air_ras,
                                    const Vector3 &omg_air_ras,
                                    const Vector3 &omg_ras,
                                    const Vector3 &acc_ras,
                                    const Vector3 &eps_ras,
                                    const Vector3 &grav_ras,
                                    double omega,
                                    double airDensity,
                                    double beta,
                                    double beta_dot );
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // FDM_BLADE_H
