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
#ifndef AIRCRAFT_H
#define AIRCRAFT_H

////////////////////////////////////////////////////////////////////////////////

#include <vector>

#include <QDomDocument>
#include <QDomElement>

#include <defs.h>
#include <Types.h>

#include <mass/Matrix3x3.h>
#include <mass/Vector3.h>

////////////////////////////////////////////////////////////////////////////////

class Component;

/**
 * @brief The Aircraft class.
 */
class Aircraft
{
public:

    typedef std::vector< Component* > Components;

    Aircraft();

    virtual ~Aircraft();

    /**
     * @brief read
     * @param parentNode
     * @return returns true on success and false on failure
     */
    bool read( QDomElement *parentNode );

    void save( QDomDocument *doc, QDomElement *parentNode );

    void reset();

    void update();

    inline const Components& getComponents() const { return _components; }

    Component* getComponent( int index );
    void addComponent( Component *component );
    void delComponent( int index );

    inline Vector3   getCenterOfMass  () const { return _centerOfMass;  }
    inline Matrix3x3 getInertiaMatrix () const { return _inertiaMatrix; }
    inline double    getMassTotal     () const { return _massTotal;     }

    inline Type getType() const { return _type; }

    // general

    inline double getM_empty () const { return _m_empty  ; }
    inline double getM_maxto () const { return _m_maxto  ; }
    inline double getNzMax   () const { return _nz_max   ; }
    inline double getCruiseH () const { return _h_cruise ; }
    inline double getCruiseV () const { return _v_cruise ; }

    // fuselage

    inline CargoDoor getCargoDoor() const { return _cargo_door; }

    inline double getWettedArea () const { return _wetted_area ; }
    inline double getPressVol   () const { return _press_vol   ; }
    inline bool getFuselageLG() const { return _fuselage_lg; }

    // wing

    inline double getWingArea  () const  { return _wing_area  ; }
    inline double getWingExp   () const  { return _wing_exp   ; }
    inline double getWingSpan  () const  { return _wing_span  ; }
    inline double getWingSweep () const  { return _wing_sweep ; }
    inline double getWingCT    () const  { return _wing_c_t   ; }
    inline double getWingCR    () const  { return _wing_c_r   ; }
    inline double getWingAR    () const  { return _wing_ar    ; }
    inline double getWingTR    () const  { return _wing_tr    ; }
    inline double getWingTC    () const  { return _wing_tc    ; }
    inline double getWingFuel  () const  { return _wing_fuel  ; }
    inline double getCtrlArea  () const  { return _ctrl_area  ; }
    inline bool getWingDelta () const { return _wing_delta ; }
    inline bool getWingVar   () const { return _wing_var   ; }

    // horizontal tail

    inline double getHorTailArea  () const { return _h_tail_area  ; }
    inline double getHorTailSpan  () const { return _h_tail_span  ; }
    inline double getHorTailSweep () const { return _h_tail_sweep ; }
    inline double getHorTailCT    () const { return _h_tail_c_t   ; }
    inline double getHorTailCR    () const { return _h_tail_c_r   ; }
    inline double getHorTailTC    () const { return _h_tail_tc    ; }
    inline double getElevArea     () const { return _elev_area    ; }
    inline double getHorTailFW    () const { return _h_tail_fw    ; }
    inline double getHorTailArm   () const { return _h_tail_arm   ; }
    inline double getHorTailAR    () const { return _h_tail_ar    ; }
    inline double getHorTailTR    () const { return _h_tail_tr    ; }

    inline bool getHorTailMoving() const { return _h_tail_moving; }

    // vertical tail

    inline double getVerTailArea  () const { return _v_tail_area  ; }



    inline void setType( Type type ) { _type = type; }

    // general

    inline void setM_empty ( double m_empty  ) { _m_empty  = m_empty  ; }
    inline void setM_maxto ( double m_maxto  ) { _m_maxto  = m_maxto  ; }
    inline void setNzMax   ( double nz_max   ) { _nz_max   = nz_max   ; }
    inline void setCruiseH ( double h_cruise ) { _h_cruise = h_cruise ; }
    inline void setCruiseV ( double v_cruise ) { _v_cruise = v_cruise ; }

    // fuselage

    inline void setCargoDoor( CargoDoor cargo_door ) { _cargo_door = cargo_door; }

    inline void setWettedArea ( double wetted_area ) { _wetted_area = wetted_area ; }
    inline void setPressVol   ( double press_vol   ) { _press_vol   = press_vol   ; }
    inline void setFuselageLG ( bool fuselage_lg ) { _fuselage_lg = fuselage_lg; }

    // wing

    inline void setWingArea  ( double wing_area  ) { _wing_area  = wing_area  ; }
    inline void setWingExp   ( double wing_exp   ) { _wing_exp   = wing_exp   ; }
    inline void setWingSpan  ( double wing_span  ) { _wing_span  = wing_span  ; }
    inline void setWingSweep ( double wing_sweep ) { _wing_sweep = wing_sweep ; }
    inline void setWingCT    ( double wing_c_t   ) { _wing_c_t   = wing_c_t   ; }
    inline void setWingCR    ( double wing_c_r   ) { _wing_c_r   = wing_c_r   ; }
    inline void setWingAR    ( double wing_ar    ) { _wing_ar    = wing_ar    ; }
    inline void setWingTR    ( double wing_tr    ) { _wing_tr    = wing_tr    ; }
    inline void setWingTC    ( double wing_tc    ) { _wing_tc    = wing_tc    ; }
    inline void setWingFuel  ( double wing_fuel  ) { _wing_fuel  = wing_fuel  ; }
    inline void setCtrlArea  ( double ctrl_area  ) { _ctrl_area  = ctrl_area  ; }
    inline void setWingDelta ( bool wing_delta ) { _wing_delta = wing_delta ; }
    inline void setWingVar   ( bool wing_var   ) { _wing_var   = wing_var   ; }

    // horizontal tail

    inline void setHorTailArea  ( double h_tail_area  ) { _h_tail_area  = h_tail_area  ; }
    inline void setHorTailSpan  ( double h_tail_span  ) { _h_tail_span  = h_tail_span  ; }
    inline void setHorTailSweep ( double h_tail_sweep ) { _h_tail_sweep = h_tail_sweep ; }
    inline void setHorTailCT    ( double h_tail_c_t   ) { _h_tail_c_t   = h_tail_c_t   ; }
    inline void setHorTailCR    ( double h_tail_c_r   ) { _h_tail_c_r   = h_tail_c_r   ; }
    inline void setHorTailTC    ( double h_tail_tc    ) { _h_tail_tc    = h_tail_tc    ; }
    inline void setElevArea     ( double elev_area    ) { _elev_area    = elev_area    ; }
    inline void setHorTailFW    ( double h_tail_fw    ) { _h_tail_fw    = h_tail_fw    ; }
    inline void setHorTailArm   ( double h_tail_arm   ) { _h_tail_arm   = h_tail_arm   ; }
    inline void setHorTailAR    ( double h_tail_ar    ) { _h_tail_ar    = h_tail_ar    ; }
    inline void setHorTailTR    ( double h_tail_tr    ) { _h_tail_tr    = h_tail_tr    ; }

    inline void setHorTailMoving( bool h_tail_moving ) { _h_tail_moving = h_tail_moving; }

    // vertical tail

    inline void setVerTailArea  ( double v_tail_area  ) { _v_tail_area  = v_tail_area  ; }

private:

    Components _components;     ///< mass components

    Type _type;                 ///< [-] aircraft type

    // DATA

    // General
    double _m_empty;            ///< [kg] empty mass
    double _m_maxto;            ///< [kg] maximum take-off mass
    double _nz_max;             ///< [-] Nz max
    double _h_cruise;           ///< [ft]  cruise altitude
    double _v_cruise;           ///< [kts] cruise speed

    // Fuselage
    CargoDoor _cargo_door;      ///<

    double _wetted_area;        ///< [m^2] fuselage wetted area
    double _press_vol;          ///< [m^3] volume of pressurized section
    bool _fuselage_lg;          ///< specifies if main landing gear is fuselage mounted

    // Wing
    double _wing_area;          ///< [m^2] wing area
    double _wing_exp;           ///< [m^2] wing exposed area
    double _wing_span;          ///< [m] wing span
    double _wing_sweep;         ///< [deg] wing sweep at 25% chord
    double _wing_c_t;           ///< [m] wing tip chord
    double _wing_c_r;           ///< [m] wing root chord
    double _wing_ar;            ///< [-] wing aspect ratio
    double _wing_tr;            ///< [-] wing taper ratio
    double _wing_tc;            ///< [-] wing thickness ratio
    double _wing_fuel;          ///< [kg] wing fuel capacity
    double _ctrl_area;          ///< [m^2] wing mounted control surface area
    bool _wing_delta;           ///< specifies if delta wing
    bool _wing_var;             ///< specifies if wing has variable sweep

    // Horizontal Tail
    double _h_tail_area  ;      ///< [m^2] horizontal tail area
    double _h_tail_span  ;      ///< [m] horizontal tail span
    double _h_tail_sweep ;      ///< [deg] horizontal tail sweep
    double _h_tail_c_t;         ///< [m] horizontal tail tip chord
    double _h_tail_c_r;         ///< [m] horizontal tail root chord
    double _h_tail_tc;          ///< [-] horizontal tail thickness ratio
    double _elev_area    ;      ///< [m^2] elevator area
    double _h_tail_fw    ;      ///< [m] fuselage width at horizontal tail intersection
    double _h_tail_arm   ;      ///< [m] horizontal tail arm
    double _h_tail_ar    ;      ///< [-] horizontal tail aspect ratio
    double _h_tail_tr    ;      ///< [-] horizontal tail taper ratio

    bool _h_tail_moving;        ///< specifies if horizontal tail is all moving

    // Vertical Tail
    double _v_tail_area  ;      ///< [m^2] vertical tail area

    // RESULTS

    Vector3   _centerOfMass;    ///< [m] center of mass position
    Matrix3x3 _inertiaMatrix;   ///< [kg*m^2] inertia
    double _massTotal;          ///< [kg]


    void deleteAllComponents();
};

////////////////////////////////////////////////////////////////////////////////

#endif // AIRCRAFT_H
