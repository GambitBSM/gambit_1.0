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
#include "gambit/Elements/functors.hpp"

namespace Gambit
{
    
  /// Register a module with the Core.
  int register_module(str);

  /// Register a module functor with the Core.
  int register_module_functor_core(module_functor_common&);

  /// Register a model functor with the Core.
  int register_model_functor_core(primary_model_functor&);  

  /// Register a backend with the Core
  int register_backend(str, str);

  /// Register a backend functor with the Core
  int register_backend_functor(functor&);

  /// Register a loop management requirement with the Core
  int register_management_req(module_functor_common&);

}

#endif // #defined __ini_functions_core_hpp__
