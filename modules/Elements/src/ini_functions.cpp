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

#include <dlfcn.h>

#include "gambit/Elements/ini_functions.hpp"
#include "gambit/Utils/equivalency_singleton.hpp"
#include "gambit/Models/claw_singleton.hpp"

namespace Gambit
{
    
  /// Get back the "::" from things that use NS_SEP instead
  str fixns(str s)
  {
    str ns = STRINGIFY(NS_SEP);
    const str cc = "::";
    #if GAMBIT_CONFIG_FLAG_use_regex     // Using regex :D
      regex rgx1(ns), rgx2("my_ns"+cc), rgx3(cc+"\\("), rgx4(cc+"$");
      s = regex_replace(s, rgx1, cc);
      s = regex_replace(s, rgx2, "");
      s = regex_replace(s, rgx3, "(");
      s = regex_replace(s, rgx4, "");
    #else                                // Using lame-o methods >:(
      boost::replace_all(s, ns, cc);
      boost::replace_all(s, "my_ns"+cc, "");
      boost::replace_all(s, cc+"(", "(");
      const int cclen = cc.length();
      const int slen = s.length();
      if (cclen > slen) return s;
      if (s.substr(slen-cclen,cclen) == cc) s.replace(slen-cclen,cclen,"");
    #endif
    return s;
  }

  /// Catch initialisation exceptions
  void ini_catch(std::exception& e)
  {
    std::cout << "GAMBIT has failed to initialise due to fatal exception: " << e.what() << std::endl;
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
  
  /// Call push back on a vector of strings 
  int vectorstr_push_back(std::vector<str>& vec, str s)
  {
    try
    {
      vec.push_back(s);
    }
    catch (std::exception& e) { ini_catch(e); }
    return 0;
  }
  
  /// Notify a backend functor of which models it can be used with
  int set_allowed_models(functor& be_functor, std::vector<str>& allowed_at_be_level, str models_string)
  {
    try
    {
      // Strip out parentheses
      models_string = models_string.substr(1,models_string.length()-2);
      // Get the models explicitly allowed in this command
      std::vector<str> models = Utils::delimiterSplit(models_string, ",");    
      models.insert(models.end(), allowed_at_be_level.begin(), allowed_at_be_level.end());
      if (not models.empty())
      {
        // Add all the models that have been designated as allowed at the backend level
        for (std::vector<str>::const_iterator it = models.begin(); it != models.end(); ++it)
        {
          // Allow the model
          be_functor.setAllowedModel(*it);
        }
      }
    }                                                                    
    catch (std::exception& e) { ini_catch(e); }
    return 0;
  }
     
  int loadLibrary(str be, str ver, str sv, void*& pHandle, bool& present, bool with_BOSS)
  {
    try
    {
      const str path = Backends::backendInfo().corrected_path(be,ver);
      Backends::backendInfo().link_versions(be, ver, sv);
      pHandle = dlopen(path.c_str(), RTLD_LAZY);
      if(not pHandle)
      {
        std::ostringstream err;
        str error = dlerror();
        Backends::backendInfo().dlerrors[be+ver] = error;
        err << "Failed loading library from " << path
            << " due to error: " << error << std::endl
            << "All functors generated from this library will get "
               "status=-1.";
        backend_warning().raise(LOCAL_INFO,err.str());
        present = false;
      }
      else
      {
        logger() << "Succeeded in loading " << path << std::endl 
                 << LogTags::backends << LogTags::info << EOM;
        present = true;
      }
      Backends::backendInfo().works[be+ver] = present;
      Backends::backendInfo().classloader[be+ver] = with_BOSS;
      if (with_BOSS) Backends::backendInfo().classes_OK[be+ver] = true;
    }                                                                    
    catch (std::exception& e) { ini_catch(e); }
    return 0;
  }
  
  /// Register a backend with the logging system
  int register_backend_with_log(str s) 
  {
    try
    {
      int mytag = Logging::getfreetag();
      Logging::tag2str()[mytag] = s;
      Logging::components().insert(mytag);
    }
    catch (std::exception& e) { ini_catch(e); }
    return 0;
  }

  /// Register a bossed type with the rollcall system
  int register_type(str bever, str classname)
  {
    try
    {  
      Utils::strip_whitespace_except_after_const(classname);
      Backends::backendInfo().classes[bever].insert(classname);
    }
    catch (std::exception& e) { ini_catch(e); }
    return 0;
  }

  /// Disable a backend functor if its library is missing or the symbol cannot be found. 
  int set_backend_functor_status(bool present, functor& be_functor, str symbol_name)
  {
    try
    {  
      if (not present)
      {
        be_functor.setStatus(-1);
      }
      else if(dlerror() != NULL)
      {
        std::ostringstream err;
        err << "Library symbol " << symbol_name << " not found."  << std::endl
            << "The functor generated for this symbol will get status=-2" << std::endl;
        backend_warning().raise(LOCAL_INFO, err.str());
        be_functor.setStatus(-2);
      }
    }
    catch (std::exception& e) { ini_catch(e); }
    return 0;
  }

  /// Get the status of a factory pointer to a BOSSed type's wrapper constructor.        
  int get_ctor_status(str be, str ver, str name, str barename, str args, str symbol_name, bool present)
  {
    try
    {  
      const str path = Backends::backendInfo().corrected_path(be,ver);
      Backends::backendInfo().factory_args[be+ver+fixns(barename)].insert(args); 
      if (not present)
      {
        std::ostringstream err;
        Backends::backendInfo().classes_OK[be+ver] = false;
        Backends::backendInfo().constructor_status[be+ver+fixns(barename+args)] = "lib absent";
        return -1;  
      }
      else if (dlerror() != NULL)
      {
        std::ostringstream err;
        Backends::backendInfo().classes_OK[be+ver] = false;
        Backends::backendInfo().constructor_status[be+ver+fixns(barename+args)] = "broken";
        err << "Library symbol " << symbol_name << " not found in " << path << "."
            << std::endl << "The BOSSed type relying on factory " << name << args
            << " will be unavailable." << std::endl;
        backend_warning().raise(LOCAL_INFO, err.str());
        return -2;  
      }
      else
      {
        logger() << "Succeeded in loading constructor " << fixns(barename+args) << " from "<< std::endl
                 << path << "." << LogTags::backends << LogTags::info << EOM;
        Backends::backendInfo().constructor_status[be+ver+fixns(barename+args)] = "OK";
      }
    }
    catch (std::exception& e) { ini_catch(e); }
    return 0;
  }

  /// Create a log tag for a new module.
  int register_module_with_log(str module)
  {
    int mytag;
    try
    {
      mytag = Logging::getfreetag();
      Logging::tag2str()[mytag] = module;
      Logging::components().insert(mytag);
    }
    catch (std::exception& e) { ini_catch(e); }
    return mytag;
  }
  
  /// Register a function with a module.
  int register_function(module_functor_common& f, bool can_manage, safe_ptr<bool>* done,
   std::map<str,str>& iCanDo, std::map<str, bool(*)()>& map, bool(&provides)(), safe_ptr<Options>& opts)
  {
    try
    {
      if (can_manage)
      {
        f.setCanBeLoopManager(true);
        *done = f.loopIsDone();
      }
      map[f.capability()] = &provides;
      iCanDo[f.name()] = f.type();
      opts = f.getOptions();
    }
    catch (std::exception& e) { ini_catch(e); }
    return 0;
  }

  /// Set a backend rule for one or more models.
  int set_backend_rule_for_model(module_functor_common& f, str models, str tags)
  {
    try
    {
      f.makeBackendRuleForModel(models, tags);
    }
    catch (std::exception& e) { ini_catch(e); }
    return 0;
  }
  
  /// Set the classloading requirements of a given functor.
  int set_classload_requirements(module_functor_common& f, str be, str verstr, str default_ver)
  {                                                                        
    try
    {
      // Split up the passed version string into individual versions
      std::vector<str> versions = Utils::delimiterSplit(verstr, ",");
      // Add each version individually as required for classloading
      for (auto it = versions.begin() ; it != versions.end(); ++it)
      {
        // Retrieve the version corresponding to the default if needed
        if (*it == "default") *it = Backends::backendInfo().version_from_safe_version(be, default_ver);
        // Retrieve the safe version corresponding to this version
        str sv = Backends::backendInfo().safe_version_from_version(be, *it);
        // Set the requirement in the functor
        f.setRequiredClassloader(be,*it,sv);
      }
    }
    catch (std::exception& e) { ini_catch(e); }
    return 0;
  }

}
