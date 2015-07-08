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

#include <dlfcn.h>
#ifdef HAVE_LINK_H
  #include <link.h>
#endif

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
     
  /// Load a backend library
  int loadLibrary(str be, str ver, str sv, void*& pHandle, bool& present, bool with_BOSS)
  {
    try
    {
      const str path = Backends::backendInfo().corrected_path(be,ver);
      Backends::backendInfo().link_versions(be, ver, sv);
      pHandle = dlopen(path.c_str(), RTLD_LAZY);
      if (not pHandle)
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
        // If dlinfo is available, use it to verify the path of the backend that was just loaded.
        #ifdef HAVE_LINK_H
          link_map *map;
          dlinfo(pHandle, RTLD_DI_LINKMAP, &map);
          if (not map)
          {
            std::ostringstream err;
            err << "Problem retrieving library path.  The sought lib is " << path << "." << endl
                << "The path to this library has not been fully verified.";
            backend_warning().raise(LOCAL_INFO,err.str());
          }
          else
          {
            attempt_backend_path_override(be, ver, map->l_name);
          }
        #else
          Backends::backendInfo().override_path(be, ver, "system lacks dlinfo(); path unverifiable");
        #endif
        logger() << "Succeeded in loading " << Backends::backendInfo().corrected_path(be,ver) << std::endl 
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

  /// Try to resolve a pointer to a partial path to a shared library and use it to override the stored backend path.  
  void attempt_backend_path_override(str& be, str& ver, const char* name)
  {
    char *fullname = realpath(name, NULL);
    if (not fullname)
    {
      std::ostringstream err;
      err << "Problem retrieving absolute library path for " << be << " v" << ver << "." << endl
          << "The path to this library has not been fully determined.";
      backend_warning().raise(LOCAL_INFO,err.str());
    }
    else
    {
      Backends::backendInfo().override_path(be, ver, fullname);
    }
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

  namespace slhahelp
  {

    /// map from gauge eigenstate strings to string, index pairs  
    std::map<str, p_int_string> init_gauge_label_to_index_type() 
    {
       std::map<str, p_int_string> gauge_label_to_index_type;
       
       gauge_label_to_index_type["~e_L"] = std::make_pair(1,"~e");
       gauge_label_to_index_type["~mu_L"] = std::make_pair(2,"~e");
       gauge_label_to_index_type["~tau_L"] = std::make_pair(3,"~e");
       gauge_label_to_index_type["~e_R"] = std::make_pair(4,"~e");
       gauge_label_to_index_type["~mu_R"] = std::make_pair(5,"~e");
       gauge_label_to_index_type["~tau_R"] = std::make_pair(6,"~e");
  
       gauge_label_to_index_type["~d_L"] = std::make_pair(1,"~d");
       gauge_label_to_index_type["~s_L"] = std::make_pair(2,"~d");
       gauge_label_to_index_type["~b_L"] = std::make_pair(3,"~d");
       gauge_label_to_index_type["~d_R"] = std::make_pair(4,"~d");
       gauge_label_to_index_type["~s_R"] = std::make_pair(5,"~d");
       gauge_label_to_index_type["~b_R"] = std::make_pair(6,"~d");   
  
       gauge_label_to_index_type["~u_L"] = std::make_pair(1,"~u");
       gauge_label_to_index_type["~c_L"] = std::make_pair(2,"~u");
       gauge_label_to_index_type["~t_L"] = std::make_pair(3,"~u");
       gauge_label_to_index_type["~u_R"] = std::make_pair(4,"~u");
       gauge_label_to_index_type["~c_R"] = std::make_pair(5,"~u");
       gauge_label_to_index_type["~t_R"] = std::make_pair(6,"~u"); 
  
       gauge_label_to_index_type["~nu_e_L"] = std::make_pair(1,"~nu");
       gauge_label_to_index_type["~nu_mu_L"] = std::make_pair(2,"~nu");
       gauge_label_to_index_type["~nu_tau_L"] = std::make_pair(3,"~nu");
       
       return gauge_label_to_index_type;
    }
  
    /// map from mass eigenstate strings to string, index pairs
    std::map<str, p_int_string> init_mass_label_to_index_type()
    {
       std::map<str, p_int_string> mass_label_to_index_type;
       mass_label_to_index_type["~e-_1"] = std::make_pair(1,"~e");
       mass_label_to_index_type["~e-_2"] = std::make_pair(2,"~e");
       mass_label_to_index_type["~e-_3"] = std::make_pair(3,"~e");
       mass_label_to_index_type["~e-_4"] = std::make_pair(4,"~e");
       mass_label_to_index_type["~e-_5"] = std::make_pair(5,"~e");
       mass_label_to_index_type["~e-_6"] = std::make_pair(6,"~e");
  
       mass_label_to_index_type["~d_1"] = std::make_pair(1,"~d");
       mass_label_to_index_type["~d_2"] = std::make_pair(2,"~d");
       mass_label_to_index_type["~d_3"] = std::make_pair(3,"~d");
       mass_label_to_index_type["~d_4"] = std::make_pair(4,"~d");
       mass_label_to_index_type["~d_5"] = std::make_pair(5,"~d");
       mass_label_to_index_type["~d_6"] = std::make_pair(6,"~d");   
  
       mass_label_to_index_type["~u_1"] = std::make_pair(1,"~u");
       mass_label_to_index_type["~u_2"] = std::make_pair(2,"~u");
       mass_label_to_index_type["~u_3"] = std::make_pair(3,"~u");
       mass_label_to_index_type["~u_4"] = std::make_pair(4,"~u");
       mass_label_to_index_type["~u_5"] = std::make_pair(5,"~u");
       mass_label_to_index_type["~u_6"] = std::make_pair(6,"~u"); 
  
       mass_label_to_index_type["~nu_1"] = std::make_pair(1,"~nu");
       mass_label_to_index_type["~nu_2"] = std::make_pair(2,"~nu");
       mass_label_to_index_type["~nu_3"] = std::make_pair(3,"~nu");     
       
       return  mass_label_to_index_type;
    }
  
    /// map to extract info from family state   
    std::map<str, pair_string_ints> init_familystate_label() 
    {
       std::map<str, pair_string_ints> familystate_label;
      
       //pairs labeling family, mass
       pair_ints const three_one(3,1);
       pair_ints const three_two(3,2);
       pair_ints const two_one(3,1);
       pair_ints const two_two(3,2);
       pair_ints const one_one(3,1);
       pair_ints const one_two(3,2);
    
       //triple labelling type, generation and mass order of family states
       pair_string_ints const stop1("~u",three_one);
       pair_string_ints const stop2("~u",three_two);
       pair_string_ints const sbot1("~d",three_one);
       pair_string_ints const sbot2("~d",three_two);
       pair_string_ints const stau1("~e",three_one);
       pair_string_ints const stau2("~e",three_two);
       pair_string_ints const scharm1("~u",two_one);
       pair_string_ints const scharm2("~u",two_two);
       pair_string_ints const sstrange1("~d",two_one);
       pair_string_ints const sstrange2("~d",two_two);
       pair_string_ints const smuon1("~e",two_one);
       pair_string_ints const smuon2("~e",two_two);
       pair_string_ints const sup1("~u",one_one);
       pair_string_ints const sup2("~u",one_two);
       pair_string_ints const sdown1("~d",one_one);
       pair_string_ints const sdown2("~d",one_two);
       pair_string_ints const selectron1("~e",one_one);
       pair_string_ints const selectron2("~e",one_two);
       // only have left handed sneutrinos in MSSM
       pair_string_ints const snue1("~nu",three_one);
       pair_string_ints const snumu1("~nu",two_one);
       pair_string_ints const snutau1("~nu",one_one);
  
       familystate_label["~t_1"] = stop1; 
       familystate_label["~t_2"] = stop2;
       familystate_label["~b_1"] = sbot1; 
       familystate_label["~b_2"] = sbot2; 
       familystate_label["~tau_1"] = stau1; 
       familystate_label["~tau_2"] = stau2;
       
       familystate_label["~c_1"] = scharm1; 
       familystate_label["~c_2"] = scharm2;
       familystate_label["~s_1"] = sstrange1; 
       familystate_label["~s_2"] = sstrange2; 
       familystate_label["~muon_1"] = smuon1; 
       familystate_label["~muon_2"] = smuon2;
       
       //  maybe we shouldn't do first gen it's confusing
       familystate_label["~u_1"] = sup1; 
       familystate_label["~u_2"] = sup2;
       familystate_label["~d_1"] = sdown1; 
       familystate_label["~d_2"] = sdown2; 
       familystate_label["~e-_1"] = selectron1; 
       familystate_label["~e-_2"] = selectron2;
       // these are even less needed since no l-r mixing without r state
       familystate_label["~nu_1"] = snue1;
       familystate_label["~nu_2"] = snumu1;
       familystate_label["~nu_3"] = snutau1;
       
       return familystate_label;
  
    }
    
    ///map to obtain left_right gauge_pairs from state info
    /// helps us reuse other routiones with string arguments 
    std::map<p_int_string, pair_strings>  init_type_family_to_gauge_states()
    {
       std::map<p_int_string, pair_strings> type_family_to_gauge_states;
      
       type_family_to_gauge_states[std::make_pair(3,"~u")] 
          = std::make_pair("~t_L","~t_R");
       type_family_to_gauge_states[std::make_pair(3,"~d")] 
          = std::make_pair("~b_L","~b_R");
       type_family_to_gauge_states[std::make_pair(3,"~e")] 
          = std::make_pair("~tau_L","~tau_R");
       type_family_to_gauge_states[std::make_pair(2,"~u")] 
          = std::make_pair("~c_L","~c_R");
       type_family_to_gauge_states[std::make_pair(2,"~d")] 
          = std::make_pair("~s_L","~s_R");
       type_family_to_gauge_states[std::make_pair(2,"~e")] 
          = std::make_pair("~mu_L","~mu_R");
       type_family_to_gauge_states[std::make_pair(1,"~u")] 
          = std::make_pair("~u_L","~u_R");
       type_family_to_gauge_states[std::make_pair(1,"~d")] 
          = std::make_pair("~d_L","~d_R");
       type_family_to_gauge_states[std::make_pair(1,"~e")] 
          = std::make_pair("~e_L","~e_R"); 
       //no sneutrino gauges pairs as no right sneutrino
       return type_family_to_gauge_states;
  
    }    
  
    /// maps directly from family string to left_right gauge_pairs
    /// helps us reuse other routines that take string arguments 
    std::map<str, pair_strings> init_family_state_to_gauge_state()
    {
       std::map<str, pair_strings> family_state_to_gauge_state;
       family_state_to_gauge_state["~t_1"] = std::make_pair("~t_L","~t_R");
       family_state_to_gauge_state["~t_2"] = std::make_pair("~t_L","~t_R");
       family_state_to_gauge_state["~b_1"] = std::make_pair("~b_L","~b_R");
       family_state_to_gauge_state["~b_2"] = std::make_pair("~b_L","~b_R");
       family_state_to_gauge_state["~tau_1"] = std::make_pair("~tau_L","~tau_R");
       family_state_to_gauge_state["~tau_2"] = std::make_pair("~tau_L","~tau_R");
       
       family_state_to_gauge_state["~c_1"] = std::make_pair("~c_L","~c_R");
       family_state_to_gauge_state["~c_2"] = std::make_pair("~c_L","~c_R");
       family_state_to_gauge_state["~s_1"] = std::make_pair("~s_L","~s_R");
       family_state_to_gauge_state["~s_2"] = std::make_pair("~s_L","~s_R");
       family_state_to_gauge_state["~muon_1"] = std::make_pair("~mu_L","~mu_R");
       family_state_to_gauge_state["~muon_2"] = std::make_pair("~mu_L","~mu_R");
       
       family_state_to_gauge_state["~u_1"] = std::make_pair("~u_L","~u_R");
       family_state_to_gauge_state["~u_2"] = std::make_pair("~u_L","~u_R");
       family_state_to_gauge_state["~d_1"] = std::make_pair("~d_L","~d_R");
       family_state_to_gauge_state["~d_2"] = std::make_pair("~d_L","~d_R");
       family_state_to_gauge_state["~e-_1"] = std::make_pair("~e_L","~e_R");
       family_state_to_gauge_state["~e-_2"] = std::make_pair("~e_L","~e_R");
       
       return family_state_to_gauge_state;
  
    }
    
    ///maps directly from gauge_es string to familystates
    /// helps us reuse other routines that take string arguments 
    std::map<str, pair_strings>  init_gauge_es_to_family_states()
    {
       std::map<str, pair_strings>  gauge_es_to_family_states;
       
       gauge_es_to_family_states["~t_L"] = std::make_pair("~t_1","~t_2");
       gauge_es_to_family_states["~t_R"] = std::make_pair("~t_1","~t_2");
       gauge_es_to_family_states["~b_L"] = std::make_pair("~b_1","~b_2");
       gauge_es_to_family_states["~b_R"] = std::make_pair("~b_1","~b_2");
       gauge_es_to_family_states["~tau_L"] = std::make_pair("~tau_1","~tau_2");
       gauge_es_to_family_states["~tau_R"] = std::make_pair("~tau_1","~tau_2");
       gauge_es_to_family_states["~c_L"] = std::make_pair("~c_1","~c_2");
       gauge_es_to_family_states["~c_R"] = std::make_pair("~c_1","~c_2");
       gauge_es_to_family_states["~s_L"] = std::make_pair("~s_1","~s_2");
       gauge_es_to_family_states["~s_R"] = std::make_pair("~s_1","~s_2");
       gauge_es_to_family_states["~mu_L"] = std::make_pair("~mu_1","~mu_2");
       gauge_es_to_family_states["~mu_R"] = std::make_pair("~mu_1","~mu_2");
  
       gauge_es_to_family_states["~u_L"] = std::make_pair("~u_1","~u_2");
       gauge_es_to_family_states["~u_R"] = std::make_pair("~u_1","~u_2");
       gauge_es_to_family_states["~d_L"] = std::make_pair("~d_1","~d_2");
       gauge_es_to_family_states["~d_R"] = std::make_pair("~d_1","~d_2");
       gauge_es_to_family_states["~e_L"] = std::make_pair("~e-_1","~e-_2");
       gauge_es_to_family_states["~e_R"] = std::make_pair("~e-_1","~e-_2");
  
       return gauge_es_to_family_states; 
       
    }
  
    /// map from string representing type (ie up-squarks, down-squarks or 
    /// charged sleptons) to appropriate set of mass eigenstates 
    std::map<str,std::vector<str> > init_type_to_vec_of_mass_es() 
    {
       std::map<str,std::vector<str> > type_to_vec_of_mass_es;
       str upsqst[]= {"~u_1", "~u_2", "~u_3", "~u_4", "~u_5", "~u_6"};
       std::vector<str> up_squark_strs(upsqst, upsqst 
                                       + sizeof(upsqst) / sizeof(str) ); 
       str dsqst[]= {"~d_1", "~d_2", "~d_3", "~d_4", "~d_5", "~d_6"};
       std::vector<str> down_squark_strs(dsqst, dsqst 
                                         + sizeof(dsqst) / sizeof(str));
       str cslst[] = {"~e-_1", "~e-_2", "~e-_3", "~e-_4", "~e-_5", "~e-_6"};
       std::vector<str> ch_slepton_strs(cslst, cslst 
                                         + sizeof(cslst) / sizeof(str) );
       str snst[] = {"~nu_1", "~nu_2", "~nu_3"};
       std::vector<str> sneutrino_strs(snst, snst 
                                       + sizeof(snst) / sizeof(str) );
  
       type_to_vec_of_mass_es["~u"] = up_squark_strs;
       type_to_vec_of_mass_es["~d"] = down_squark_strs; 
       type_to_vec_of_mass_es["~e"] = ch_slepton_strs;
       type_to_vec_of_mass_es["~nu"] = sneutrino_strs;
       
       return type_to_vec_of_mass_es;
    }
    
    /// map from string representing type (ie up-squarks, down-squarks or 
    /// charged sleptons) to appropriate set of gauge eigenstates 
    std::map<str,std::vector<str> > init_type_to_vec_of_gauge_es()
    {
       std::map<str,std::vector<str> > type_to_vec_of_gauge_es;
       str upsqgst[] = {"~u_L", "~c_L", "~t_L", "~u_R", "~c_R", "~t_R"};
       std::vector<str> up_sq_gauge_strs(upsqgst, upsqgst 
                                       + sizeof(upsqgst) / sizeof(str) );  
       str dsqgst[] = {"~d_L", "~s_L", "~b_L", "~d_R", "~s_R", "~b_R"};
       std::vector<str> down_sq_gauge_strs(dsqgst, dsqgst 
                                         + sizeof(dsqgst) / sizeof(str));
       str cslgst[] ={"~e_L", "~mu_L", "~tau_L", "~e_R", "~mu_R", "~tau_R"};
       std::vector<str> ch_sl_gauge_strs(cslgst, cslgst 
                                         + sizeof(cslgst) / sizeof(str) ); 
       str sngst[] =  {"~nu_e_L", "~nu_mu_L", "~nu_tau_L"};
       std::vector<str> sne_gauge_strs(sngst, sngst 
                                       + sizeof(sngst) / sizeof(str) ); 
       
       type_to_vec_of_gauge_es["~u"] = up_sq_gauge_strs;
       type_to_vec_of_gauge_es["~d"] = down_sq_gauge_strs; 
       type_to_vec_of_gauge_es["~e"] = ch_sl_gauge_strs;
       type_to_vec_of_gauge_es["~nu"] = sne_gauge_strs;
       
       return type_to_vec_of_gauge_es;
  
    }

  }

}
