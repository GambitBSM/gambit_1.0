//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Frontend for SuperIso backend
///
///  Note that if you're going to put backend 
///  convenience and ini functions in a cpp file,
///  you need to have one cpp file for each renamed
///  version of the backend that you want to employ. 
///  You also need to define BACKENDRENAME *before*
///  including the frontend header.

///  *********************************************
///
///  Authors (add name and date if you modify):
///  
/// \author Marcin Chrzaszcz
/// \date 2015 Sep
///
///  *********************************************

#include <sstream>
#include "gambit/Backends/frontend_macros.hpp"
#include "gambit/Backends/frontends/SuperIso.hpp"



// Convenience functions (definitions)
BE_NAMESPACE
{

  void SI_BRBKstarmumu_hack(struct parameters param, double q2_min, double q2_max)
  {
    
      
  }
}
END_BE_NAMESPACE
