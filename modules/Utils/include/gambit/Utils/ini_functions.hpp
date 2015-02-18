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
#include "gambit/Utils/functors.hpp"

namespace Gambit
{
    
  /// Catch initialisation exceptions
  void ini_catch(std::exception&);
    
  /// Helper function for passing default backend information at initialisation
  int pass_default_to_backendinfo(str, str);

  /// Helper function for adding a type equivalency at initialisation
  int add_equivrelation(str, str);

  /// Runtime addition of model to GAMBIT model database
  int add_model(str, str);

  /// Add a new parameter to a primary model functor
  int add_parameter(model_functor&, str);

  /// Tell a model functor to take its parameter definition from another model functor.
  int copy_parameters(model_functor&, model_functor&, bool, str="", str="");

  /// Register a model functor.
  int register_model_functor(std::map<str, bool(*)()>, std::map<str, str>, bool(*)(), str, str);

}

#endif // #defined __ini_functions_hpp__
