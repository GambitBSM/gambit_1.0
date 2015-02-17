//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions for triggering initialisation code.
///
///  *********************************************
///
///  Authors
///  =======
///
///  (add name and date if you modify)
///
///  \author Pat Scott 
///          (p.scott@imperial.ac.uk)
///  \date 2015 Feb
///
///  *********************************************

#ifndef __ini_functions_hpp__
#define __ini_functions_hpp__

#include "gambit/Utils/util_types.hpp"

namespace Gambit
{
    
  /// Catch initialisation exceptions
  void ini_catch(std::exception&);
    
  /// Helper function for passing default backend information at initialisation
  int pass_default_to_backendinfo(str, str);

  /// Helper function for adding a type equivalency at initialisation
  int add_equivrelation(str, str);

}

#endif // #defined __ini_functions_hpp__
