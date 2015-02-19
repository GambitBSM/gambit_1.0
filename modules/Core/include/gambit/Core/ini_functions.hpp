//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Core-only functions for triggering 
///  initialisation code.
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

#ifndef __ini_functions_core_hpp__
#define __ini_functions_core_hpp__

#include "gambit/Utils/util_types.hpp"
#include "gambit/Utils/functors.hpp"

namespace Gambit
{
    
  /// Register a functor with the Core.
  int register_model_functor_core(primary_model_functor&);  

  /// Register a backend with the Core
  int register_backend(str, str);

  /// Register a backend functor with the Core
  int register_backend_functor(functor&);

}

#endif // #defined __ini_functions_core_hpp__
