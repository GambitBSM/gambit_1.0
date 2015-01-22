//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  GAMBIT particle database.  Add to this if you
///  need to define a new particle.  
///
///  Single particles can be added with:
///   add_particle("particle_id", (pdg_code, context_int))
///  where context_int is some context-dependent integer
///  that helps identify uni
///
///  Multiple particles with an index can be added with:
///   add_particle_set("X", 
///    (pdg_code_1, context_int_1),
///    (pdg_code_2, context_int_2),
///    (pdg_code_3, context_int_3),
///    ...
///    (pdg_code_n, context_int_n) )
///  This will produce particles with string IDs
///  "X_1", "X_2", "X_3", ..., "X_n".
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


#include "partmap.hpp"
#include "particle_macros.hpp"

namespace Gambit
{

  namespace Models
  {

    void define_particles(partmap* particles)
    {

      // (Replace with real particles and pdg codes)
      add_particle("sqd_1", (25, 0))
      add_particle_set("squ", ((26, 0), (27, 0), (28, 0)))

    }

  }

}

