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

#include "gambit/Utils/ini_functions.hpp"
#include "gambit/Utils/equivalency_singleton.hpp"
#include "gambit/Backends/backend_singleton.hpp"
#include "gambit/Models/claw_singleton.hpp"

namespace Gambit
{
    
  /// Catch initialisation exceptions
  void ini_catch(std::exception& e)
  {
    std::cout << "GAMBIT has failed to initialise due to fatal exception: " << e.what() << std::endl;
    //std::cout << "raised from ini_code_struct declared at: " << location << std::endl;
    throw(e);
  }
    
  /// Helper function for passing default backend information at initialisation
  int pass_default_to_backendinfo(str be, str def)
  {
    try
    {
      Backends::backendInfo().defaults[be] = def;
    }
    catch (std::exception& e) { ini_catch(e); }    
    return 0;
  }

  /// Helper function for adding a type equivalency at initialisation
  int add_equivrelation(str s1, str s2)
  {
    try
    {
      Utils::typeEquivalencies().add(s1,s2);
    }
    catch (std::exception& e) { ini_catch(e); }
    return 0;
  }

  /// Runtime addition of model to GAMBIT model database
  int add_model(str model, str parent)   
  {
    try
    {
      Models::ModelDB().declare_model(model, parent);
    }
    catch (std::exception& e) { ini_catch(e); }
    return 0;
  }

  /// Add a new parameter to a primary model functor
  int add_parameter(model_functor& primary_parameters, str param)
  {
    try
    {
      primary_parameters.addParameter(param);
    }
    catch (std::exception& e) { ini_catch(e); }
    return 0;
  }

  /// Tell a model functor to take its parameter definition from another model functor.
  int copy_parameters(model_functor& donor, model_functor& donee, bool add_friend, str model, str model_x)
  {
    try
    {
      donor.donateParameters(donee);
      if (add_friend) Models::ModelDB().add_friend(model, model_x);
    }
    catch (std::exception& e) { ini_catch(e); }
    return 0;
  }

  /// Register a model functor.
  int register_model_functor(std::map<str, bool(*)()> map_bools, std::map<str, str> iCanDo, 
   bool(*provides_function)(), str function, str capability)
  {
    try
    {
      map_bools[capability] = provides_function;
      iCanDo[function] = "ModelParameters";
    }
    catch (std::exception& e) { ini_catch(e); }
    return 0;
  }

  
}
