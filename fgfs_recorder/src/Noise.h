#ifndef NOISE_H
#define NOISE_H

////////////////////////////////////////////////////////////////////////////////

#include <QDomElement>
#include <QVector>

#include <Random.h>

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Noise class.
 */
class Noise
{
public:

    /** */
    static inline Noise* instance()
    {
        if ( !_instance )
        {
            _instance = new Noise();
        }

        return _instance;
    }

    /** Destructor. */
    virtual ~Noise();

    inline double get_longitude () const { return Random::get( -1.0f, 1.0f ) * _longitude; }
    inline double get_latitude  () const { return Random::get( -1.0f, 1.0f ) * _latitude;  }

    inline double get_altitude_asl () const { return Random::get( -1.0f, 1.0f ) * _altitude_asl; }
    inline double get_altitude_agl () const { return Random::get( -1.0f, 1.0f ) * _altitude_agl; }

    inline double get_phi () const { return Random::get( -1.0f, 1.0f ) * _phi; }
    inline double get_tht () const { return Random::get( -1.0f, 1.0f ) * _tht; }
    inline double get_psi () const { return Random::get( -1.0f, 1.0f ) * _psi; }

    inline double get_alpha () const { return Random::get( -1.0f, 1.0f ) * _alpha; }
    inline double get_beta  () const { return Random::get( -1.0f, 1.0f ) * _beta;  }

private:

    static Noise *_instance;            ///< instance of Noise singleton class

    double _longitude;
    double _latitude;

    double _altitude_asl;
    double _altitude_agl;

    double _phi;
    double _tht;
    double _psi;

    double _alpha;
    double _beta;

    /**
     * You should use static function instance() due to get refernce
     * to Noise class instance.
     */
    Noise();

    /** Using this constructor is forbidden. */
    Noise( const Noise & ) {}

    void print();
};

////////////////////////////////////////////////////////////////////////////////

#endif // NOISE_H
