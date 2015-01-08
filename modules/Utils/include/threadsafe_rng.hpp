//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  A threadsafe interface to the STL random
///  number generators.  The generator to use can
///  be chosen in the ini/yaml file with option
///    rng: <name>
///  where name is one of the following:
///    default_random_engine
///      Default random engine
///    minstd_rand
///      Minimal Standard minstd_rand generator
///    minstd_rand0
///      Minimal Standard minstd_rand0 generator
///    mt19937
///      Mersenne Twister 19937 generator
///    mt19937_64
///      Mersene Twister 19937 generator (64 bit)
///    ranlux24_base
///      Ranlux 24 base generator
///    ranlux48_base
///      Ranlux 48 base generator
///    ranlux24
///      Ranlux 24 generator
///    ranlux48
///      Ranlux 48 generator
///    knuth_b
///      Knuth-B generator
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (p.scott@imperial.ac.uk)
///  \date 2014 Dec
///
///  *********************************************


#ifndef __threadsafe_rng_hpp__
#define __threadsafe_rng_hpp__

#include <chrono>

#include "util_types.hpp"

#include <boost/random.hpp>

namespace Gambit
{

  namespace Utils
  {

    /// Base class for thread-safe random number generators.
    class threadsafe_rng
    {

      public:

        /// Pick uniform distribution
        threadsafe_rng() : distribution(0.0, 1.0) {}

        /// Pure virtual destructor to force overriding in derived class
        virtual ~threadsafe_rng() = 0; 

        /// Operator used for getting random deviates
        virtual double operator()() = 0;

      protected:

        /// The underlying uniform distribution
        std::uniform_real_distribution<double> distribution;

    };

    /// Give an inline implementation of the destructor, to prevent link errors but keep base class pure virtual.
    inline threadsafe_rng::~threadsafe_rng() {}

    /// Derived thread-safe random number generator class, templated on the RNG engine type.
    template<typename Engine>
    class specialised_threadsafe_rng : public threadsafe_rng
    {

      public:
      
        /// Create RNG engines, one for each thread.
        specialised_threadsafe_rng()
        {
          const int max_threads = omp_get_max_threads(); 
          rngs = new Engine[max_threads];
          for(int index = 0; index < max_threads; ++index)
          {
            rngs[index] = Engine(index+std::chrono::system_clock::now().time_since_epoch().count());
          }
        }

        /// Destroy RNG engines
        virtual ~specialised_threadsafe_rng() { delete [] rngs; }

        /// Draw a random number from the uniform distribution, using the chosen engine. 
        virtual double operator()() { return distribution(rngs[omp_get_thread_num()]); }

      private:

        /// Pointer to array of RNGs, one each for each thread
        Engine* rngs;

    };

  }

  class Random
  {

    public:

      /// Choose the engine to use for random number generation, based on the contents of the ini file.
      static void create_rng_engine(str);

      /// Destroy the dynamically-declared RNG engine
      static void delete_rng_engine();

      /// Draw a single uniform random deviate using the chosen RNG engine
      static double draw();

    private:

      /// Private constructor makes this a purely managerial class, i.e. unable to be instantiated
      Random() {};

      /// Pointer to the actual RNG
      static Utils::threadsafe_rng* local_rng;

  };

}

#endif // #defined __threadsafe_rng_hpp__







