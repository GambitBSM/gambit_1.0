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

#include "gambit/Core/yaml_description_database.hpp"
#include "gambit/Models/models.hpp"
#include "gambit/Backends/backend_info.hpp"
#include "gambit/Utils/util_types.hpp"
#include "gambit/Elements/functors.hpp"

#include "yaml-cpp/yaml.h"

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
      
      /// Map from backend names to a list of all registered versions of the backend
      std::map<str, std::set<str> > backend_versions;

      /// List of all declared capabilities
      std::set<str> capabilities;

      /// List of all declared models
      std::set<str> models;

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

      /// Filename of the centralized capability description database
      const str capability_dbase_file;
      /// Filename of the centralized model description database
      const str model_dbase_file;
      /// Filename of the file from which to harvest capability descriptions
      const str input_capability_descriptions;
      /// Filename of the file from which to harvest model descriptions
      const str input_model_descriptions;
      /// File stream for 'preliminary report', for telling user about missing descriptions (and perhaps other things)
      const str report_file;
      std::ofstream report;

      /// Flag specifying whether command line options have been processed yet.
      bool processed_options;

      /// Compute the status of a given backend
      str backend_status(str, str, bool&);

      /// Basic diagnostic functions
      /// @{
      void module_diagnostic();
      void backend_diagnostic();
      void capability_diagnostic();
      void model_diagnostic();
      void scanner_diagnostic();
      void test_function_diagnostic();
      void prior_diagnostic();

      /// Free-form diagnostic functions
      /// @{
      void ff_module_diagnostic(str&);
      void ff_backend_diagnostic(str&);
      void ff_capability_diagnostic(str&);
      void ff_model_diagnostic(str&);
      void ff_scanner_diagnostic(str&);
      void ff_test_function_diagnostic(str&);
      /// @}
 
      /// Launch MPI and return the rank, for limiting diagnostic output to master node.
      int launch_diagnostic_MPI();
  
      /// Quit MPI used for diagnostic mode.
      void quit_diagnostic_MPI();

 
    public:

      /// Constructor
      gambit_core(const Models::ModelFunctorClaw&, const Backends::backend_info&);

      /// Destructor
      ~gambit_core(){}

      /// Flags set by command line options
      /// Flag to trigger dependency resolver to report functor run order
      int show_runorder;

      /// Flag to trigger "resume" mode
      bool resume;

      /// Verbosity mode
      // Set 'true' by '--verbose'
      bool verbose_flag;

      /// Flag recording whether an inifile has been supplied
      bool found_inifile;

      /// Command-line info function
      void bail(int mpirank=-1);

      /// Process default command line options
      str process_primary_options(int,char**);

      /// Diagnostics function
      str run_diagnostic(int,char**);

      /// Add a new module to modules list
      void registerModule(str);

      /// Register a new backend
      void registerBackend(str, str);

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

      /// Get a reference to the map of all registered backends
      const std::map<str, std::set<str> > getBackends() const ;

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
    
      /// Tell the module functors which backends are actually present
      void accountForMissingClasses() const ;

      /// Get the description (and other info) of the named item from the capability database
      const capability_info get_capability_info(const str&) const;

      /// Get the description (and other info) of the named item from the model database
      const model_info get_model_info(const str&) const;
 
      /// Check the named database for conflicts and missing descriptions
      /// Emits a report to log in the case of missing descriptions, and causes an error in the case of conflicts.
      void check_databases();
 
      /// Vector of all capability_info objects
      std::vector<capability_info> capability_dbase;

      /// Vector of all model_info objects
      std::vector<model_info> model_dbase;

  };

}

#endif // defined __gambit_core_hpp__
