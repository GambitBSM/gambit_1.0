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

#include <vector>

#include "gambit/Elements/functors.hpp"
#include "gambit/Utils/util_types.hpp"
#include "gambit/Backends/backend_singleton.hpp"

/// Define the separator to use instead of "::" when macros get gnarly.
#define NS_SEP ___no_apologies_for_rocking_macros___

namespace Gambit
{
    
  /// Catch initialisation exceptions
  void ini_catch(std::exception&);
    
  /// Get back the "::" from things that use NS_SEP instead
  str fixns(str);

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

  /// Call push back on a vector of strings 
  int vectorstr_push_back(std::vector<str>&, str);

  /// Notify a backend functor of which models it can be used with
  int set_allowed_models(functor&, std::vector<str>&, str);

  /// Load a backend library
  int loadLibrary(str, str, str, void*&, bool&, bool);
  
  /// Register a backend with the logging system
  int register_backend_with_log(str);

  /// Register a bossed type with the rollcall system
  int register_type(str bever, str classname);
  
  /// Disable a backend functor if its library is missing or the symbol cannot be found. 
  int set_backend_functor_status(bool, functor&, str);

  /// Get the status of a factory pointer to a BOSSed type's wrapper constructor.        
  int get_ctor_status(str, str, str, str, str, str, bool);

  /// Set a backend rule for one or more models.
  int iniBackendRuleForModel(module_functor_common&, str, str);
  
  /// Set the classloading requirements of a given functor.
  int set_classload_requirements(module_functor_common&, str, str, str);

}

#endif // #defined __ini_functions_hpp__
