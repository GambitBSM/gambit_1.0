//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  GAMBIT Core driver class.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///  \date 2013 Aug
///  \date 2014 Feb, Aug
///
///  *********************************************

#ifndef __gambit_core_hpp__
#define __gambit_core_hpp__

#include <map>
#include <vector>

#include <yaml-cpp/yaml.h>

#include "util_types.hpp"
#include "models.hpp"
#include "functors.hpp"
#include "backend_info.hpp"

// Probably should find somewhere else to stick these couple of things
namespace Gambit {
  /// Helper struct to carry around capability information
  struct capability_info
  {
     str name; // capability name
     std::set<str> modset; // Set of modules in which capability is used
     std::set<str> beset;  // Set of backends in which capability is used
     str description; // Full description of capability
     bool has_description; // Flag to check if description is missing
  };
}

// Decoder for YAML node into capability struct
namespace YAML {
  template<> struct convert<Gambit::capability_info>
  {
    static bool decode(const Node& node, Gambit::capability_info& rhs)
    {

      #define READ(NAME) \
      if (node[#NAME].IsDefined()) \
      {\
        rhs.NAME = node[#NAME].as<std::string>();\
      }\
      else\
      {\
        std::ostringstream errmsg; \
        errmsg << "Error decoding capability_info struct from YAML file. Could not find key '" STRINGIFY(#NAME) "'"; \
        Gambit::core_error().raise(LOCAL_INFO,errmsg.str()); \
      }\

      READ(name)
      READ(description)

      #undef READ

      if(rhs.description=="Missing!") rhs.has_description=false;
      else rhs.has_description=true;

      if (node["modules"].IsDefined())
      {
         for(YAML::const_iterator it=node["modules"].begin();
          it!=node["modules"].end(); ++it)
         {
           rhs.modset.insert((*it).as<std::string>());
         }
      }
      else
      {
        std::ostringstream errmsg;
        errmsg << "Error decoding capability_info struct from YAML file. Could not find key 'modules'";
        Gambit::core_error().raise(LOCAL_INFO,errmsg.str());
      }

      if (node["backends"].IsDefined())
      {
         for(YAML::const_iterator it=node["backends"].begin();
          it!=node["backends"].end(); ++it)
         {
           rhs.modset.insert((*it).as<std::string>());
         }
      }
      else
      {
        std::ostringstream errmsg;
        errmsg << "Error decoding capability_info struct from YAML file. Could not find key 'backends'";
        Gambit::core_error().raise(LOCAL_INFO,errmsg.str());
      }
     
      return true;
    }
  };
}



namespace Gambit
{

  /// Master driver class for a GAMBIT scan.
  class gambit_core
  {

    private:

      /// Internal typedefs to keep things readable
      /// @{
      typedef std::vector<functor*> fVec;
      typedef std::vector<primary_model_functor*> pmfVec;
      typedef std::map<str, primary_model_functor*> pmfMap;
      /// @}     

      /// Internal model claw pointer
      const Models::ModelFunctorClaw* modelInfo;

      /// Internal backend info pointer
      const Backends::backend_info* backendData;

      /// Set of all declared modules
      std::set<str> modules;
      
      /// List of all declared backends
      std::set<str> backends;

      /// List of all declared capabilities
      std::set<str> capabilities;

      /// List of all declared module functors
      fVec functorList;

      /// List of all module functors that are declared as nested (i.e. require loop managers)
      fVec nestedFunctorList;
 
      /// List of all declared backend functors
      fVec backendFunctorList;

      /// List of all declared primary model functors
      pmfVec primaryModelFunctorList;

      /// A map of all user-activated primary model functors
      pmfMap activeModelFunctorList;

    public:

      /// Constructor
      gambit_core(const Models::ModelFunctorClaw&, const Backends::backend_info&);

      /// Destructor
      ~gambit_core(){}

      /// Flag specifying whether command line options have been processed yet.
      bool processed_options;
 
      /// Flag recording whether an inifile has been supplied
      bool found_inifile;

      /// Flags set by command line options
      /// Flag to trigger dependency resolver to report functor run order
      int show_runorder;
      /// Verbosity mode
      // Set 'true' by '--verbose'
      bool verbose_flag;

      /// Command-line info function
      void bail();

      /// Process default command line options
      str process_primary_options(int,char**);

      /// Diagnostics function
      str run_diagnostic(int,char**);

      /// Add a new module functor to functorList
      void registerModuleFunctor(functor&);

      /// Add a new module functor to nestFunctorList
      void registerNestedModuleFunctor(functor&);

      /// Add a new backend functor to backendFunctorList
      void registerBackendFunctor(functor&);

      /// Add a new primary model functor to primaryModelFunctorList
      void registerPrimaryModelFunctor(primary_model_functor&); 

      /// Add entries to the map of activated primary model functors
      void registerActiveModelFunctors(const pmfVec&); 

      /// Get a reference to the list of module functors
      const fVec& getModuleFunctors() const ; 

      /// Get a reference to the list of nested module functors
      const fVec& getNestedModuleFunctors() const ; 

      /// Get a reference to the list of backend model functors
      const fVec& getBackendFunctors() const ;

      /// Get a reference to the list of primary model functors
      const pmfVec& getPrimaryModelFunctors() const ;

      /// Get a reference to the map of all user-activated primary model functors
      const pmfMap& getActiveModelFunctors() const ;
    
      /// Get the description of the named item from the named database
      // e.g. second argument might be "capability", with the first argument being
      // the name of a capability
      const capability_info get_capability_info(const str&) const;

      /// Check the named database for conflicts and missing descriptions
      // Emits a report
      void check_database(const str&);
 
      /// Vector of all capability_info objects
      std::vector<capability_info> capability_dbase;
  };

}

#endif // defined __gambit_core_hpp__
