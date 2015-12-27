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
///  \author Peter Athron  
///          (peter.athron@coepp.org.au)
///  \date 2015 
///
///  *********************************************

#ifndef __ini_functions_hpp__
#define __ini_functions_hpp__

#include <vector>

#include "gambit/Elements/functors.hpp"
#include "gambit/Utils/exceptions.hpp"
#include "gambit/Utils/util_types.hpp"
#include "gambit/Backends/backend_singleton.hpp"
#include "gambit/Logs/log.hpp"

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
  
  /// Try to resolve a pointer to a partial path to a shared library and use it to override the stored backend path.  
  void attempt_backend_path_override(str&, str&, const char*);

  /// Register a backend with the logging system
  int register_backend_with_log(str);

  /// Register a bossed type with the rollcall system
  int register_type(str bever, str classname);
  
  /// Disable a backend functor if its library is missing or the symbol cannot be found. 
  int set_backend_functor_status(bool, functor&, str);

  /// Get the status of a factory pointer to a BOSSed type's wrapper constructor.        
  int get_ctor_status(str, str, str, str, str, str, bool);

  /// Create a log tag for a new module.
  int register_module_with_log(str);

  /// Register a function with a module.
  int register_function(module_functor_common&, bool, safe_ptr<bool>*, std::map<str,str>&, std::map<str, bool(*)()>&, bool(&)(), safe_ptr<Options>&);

  /// Set a backend rule for one or more models.
  int set_backend_rule_for_model(module_functor_common&, str, str);
  
  /// Set the classloading requirements of a given functor.
  int set_classload_requirements(module_functor_common&, str, str, str);

  namespace slhahelp
  {

    /// Typedefs for pairs that we will use in maps
    typedef std::pair<int,str> p_int_string;
    typedef std::pair<int,int> pair_ints;
    typedef std::pair<str,pair_ints> pair_string_ints;
    typedef std::pair<str,str> pair_strings;

    /// map from gauge eigenstate strings to string, index pairs  
    std::map<str, p_int_string> init_gauge_label_to_index_type();
  
    /// map from mass eigenstate strings to string, index pairs
    std::map<str, p_int_string> init_mass_label_to_index_type();
  
    /// map to extract info from family state   
    std::map<str, pair_string_ints> init_familystate_label();
    
    ///map to obtain left_right gauge_pairs from state info
    /// helps us reuse other routiones with string arguments 
    std::map<p_int_string, std::vector<str> > init_type_family_to_gauge_states();
  
    /// maps directly from family string to left_right gauge_pairs
    /// helps us reuse other routines that take string arguments 
    std::map<str,std::vector<str> > init_family_state_to_gauge_state();
    
    ///maps directly from gauge_es string to familystates
    /// helps us reuse other routines that take string arguments 
    std::map<str,std::vector<str> > init_gauge_es_to_family_states();
  
    /// map from string representing type (ie up-squarks, down-squarks or 
    /// charged sleptons) to appropriate set of mass eigenstates 
    std::map<str,std::vector<str> > init_type_to_vec_of_mass_es();
    
    /// map from string representing type (ie up-squarks, down-squarks or 
    /// charged sleptons) to appropriate set of gauge eigenstates 
    std::map<str,std::vector<str> > init_type_to_vec_of_gauge_es();

  }

}

#endif // #defined __ini_functions_hpp__
