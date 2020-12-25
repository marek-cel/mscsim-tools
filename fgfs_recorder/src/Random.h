#ifndef RANDOM_H
#define RANDOM_H

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Random number generator.
 */
class Random
{
public:

    /** */
    static inline Random* instance()
    {
        if ( !_instance )
        {
            _instance = new Random();
        }

        return _instance;
    }

    /** */
    inline static int get( int min, int max )
    {
        return Random::instance()->getRandom( min, max );
    }

    /** */
    inline static float get( float min, float max )
    {
        return Random::instance()->getRandom( min, max );
    }

    /** Destructor. */
    virtual ~Random();

    /** */
    int getRandom( int min, int max );

    /** */
    float getRandom( float min, float max );

private:

    static Random *_instance;   ///<

    /**
     * You should use static function instance() due to get refernce
     * to Random class instance.
     */
    Random();

    /** Using this constructor is forbidden. */
    Random( const Random & ) {}
};

////////////////////////////////////////////////////////////////////////////////

#endif // RANDOM_H
