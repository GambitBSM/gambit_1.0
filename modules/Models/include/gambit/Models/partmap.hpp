//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Class definitions for GAMBIT particle
///  database.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (p.scott@imperial.ac.uk)
///  \date 2015 Jan
///
///  *********************************************


#ifndef __partmaps_hpp__
#define __partmaps_hpp__

#include <map>

#include "gambit/Utils/util_types.hpp"


namespace Gambit
{

  namespace Models
  {

    class partmap
    {

      public:

        /// Constructor
        partmap();

        /// Add a new particle to the database
        void add(str, std::pair<int, int>); 

        /// Add a new particle to the database with a short name and an index
        void add_with_short_pair(str, std::pair<int, int>, std::pair<str, int>);

        /// Retrieve the PDG code and context integer, from the long name
        std::pair<int, int> pdg_pair(str);

        /// Retrieve the PDG code and context integer, from the short name and index
        std::pair<int, int> pdg_pair(str,int);

        /// Retrieve the PDG code and context integer, from the short name and index pair
        std::pair<int, int> pdg_pair(std::pair<str,int>);

        /// Retrieve the long name, from the short name and index
        str long_name(str,int);

        /// Retrieve the long name, from the PDG code and context integer 
        str long_name(std::pair<int, int>);

        /// Retrieve the long name, from the PDG code and context integer
        str long_name(int,int);

        /// Retrieve the short name and index, from the long name 
        std::pair<str, int> short_name_pair(str);

        /// Retrieve the short name and index, from the PDG code and context integer 
        std::pair<str, int> short_name_pair(std::pair<int, int>);

        /// Retrieve the short name and index, from the PDG code and context integer
        std::pair<str, int> short_name_pair(int,int);

        /// Check if a particle is in the database, using the long name 
        bool has_particle(str);

        /// Check if a particle is in the database, using the short name and index 
        bool has_particle(std::pair<str, int>);

        /// Check if a particle is in the database, using the PDG code and context integer 
        bool has_particle(std::pair<int, int>);

        /// Get the matching anti-particle long name for a particle in the database, using the long name 
        str get_antiparticle(str);

        /// Get the matching anti-particle short name and index for a particle in the database, using the short name and index 
        /// @{
        std::pair<str, int> get_antiparticle(std::pair<str, int>);
        std::pair<str, int> get_antiparticle(str, int);
        /// @}

        /// Get the matching anti-particle PDG code and index for a particle in the database, using the PDG code and index 
        /// @{
        std::pair<int, int> get_antiparticle(std::pair<int, int>);
        std::pair<int, int> get_antiparticle(int, int);
        /// @}

        /// Check if a particle has a matching anti-particle in the database, using the long name 
        bool has_antiparticle(str);

        /// Check if a particle has a matching anti-particle in the database, using the short name and index 
        /// @{
        bool has_antiparticle(std::pair<str, int>);
        bool has_antiparticle(str, int);
        /// @}

        /// Check if a particle has a matching anti-particle in the database, using the PDG code and context integer 
        /// @{
        bool has_antiparticle(std::pair<int, int>);
        bool has_antiparticle(int, int);
        /// @}

        /// Check if a particle has a short name, using the long name 
        bool has_short_name(str);

        /// Check if a particle has a short name, using the PDG code and context integer 
        bool has_short_name(std::pair<int, int>);

        /// For debugging: use to check the contents of the particle database
        void check_contents();

      private:
          
        /// Map from long name to PDG code and context integer
        std::map<str, std::pair<int, int> > long_name_to_pdg_pair;
        /// Map from PDG code and context integer to long name
        std::map<std::pair<int, int>, str> pdg_pair_to_long_name;
        /// Map from short name and index to PDG code and context integer
        std::map<std::pair<str, int>, std::pair<int, int> > short_name_pair_to_pdg_pair;
        /// Map from PDG code and context integer to short name and index
        std::map<std::pair<int, int>, std::pair<str, int> > pdg_pair_to_short_name_pair;
        /// Map from long name to short name and index
        std::map<str, std::pair<str, int> > long_name_to_short_name_pair;
        /// Map from short name and index to long name
        std::map<std::pair<str, int>, str> short_name_pair_to_long_name;

    };

    /// Database accessor function
    partmap& ParticleDB();

  }

}


#endif //__partmaps_hpp__
