#ifndef DATAINP_H
#define DATAINP_H

////////////////////////////////////////////////////////////////////////////////

struct DataInp
{
    double longitude;       ///< [deg]
    double latitude;        ///< [deg]

    double altitude_asl;    ///< [m]
    double altitude_agl;    ///< [m]

    double phi;             ///< [deg] roll
    double tht;             ///< [deg] pitch
    double psi;             ///< [deg] heading

    double alpha;           ///< [deg] angle of attack
    double beta;            ///< [deg] sideslip angle
};

////////////////////////////////////////////////////////////////////////////////

#endif // DATAINP_H
