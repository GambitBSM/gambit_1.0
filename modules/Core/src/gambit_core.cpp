//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  GAMBIT Core driver class implementation.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///  \date 2013 Aug
///  \date 2014 Mar, Aug
///
///  *********************************************


#include <map>
#include <vector>

#include "gambit_core.hpp"
#include "error_handlers.hpp"
#include "version.hpp"
#include "models.hpp"
#include "modelgraph.hpp"
#include "stream_printers.hpp"

namespace Gambit
{

  /// Core accessor function
  gambit_core& Core()
  {
    static gambit_core local;
    return local;
  }

  /// Definitions of public methods in GAMBIT core class.

    /// Inform the user of the ways to invoke GAMBIT, then die.
    void gambit_core::bail()
    { 
      cout << "\nGAMBIT command-line options                                                 "
              "\n---------------------------                                                 "
              "\n                                                                            "
              "\n   Start a scan                                       gambit <inifile>      " 
              "\n   e.g.                                               gambit gambit.yaml    "
              "\n                                                                            "
              "\n   List registered modules                            gambit modules        " 
              "\n                                                                            "
              "\n   List registered backends and their status          gambit backends       " 
              "\n                                                                            "
              "\n   List registered models and output model graph      gambit models         " 
              "\n                                                                            "
              "\n   List all registered function capabilities          gambit capabilities   " 
              "\n                                                                            "
              "\n   Give info on a specific module, backend, model or  gambit <name>         "
              "\n   capability, e.g.                                   gambit DarkBit        "
              "\n                                                      gambit Pythia         "
              "\n                                                      gambit MSSM           "
              "\n                                                      gambit IC79WL_loglike "
              "\n                                                                            "
              "\n   Print GAMBIT version information                   gambit -v/--version   " << endl << endl; 
      logger().disable();
      core_error().silent_forced_throw();
    } 

    /// Add a new module functor to functorList
    void gambit_core::registerModuleFunctor(functor &f)
    {
      functorList.push_back(&f);
      std::set<str> models = modelClaw().get_allmodels();
      if (models.find(f.origin()) == models.end()) modules.insert(f.origin());
      capabilities.insert(f.capability());
    }

    /// Add a new module functor to nestFunctorList
    void gambit_core::registerNestedModuleFunctor(functor &f) { nestedFunctorList.push_back(&f); }

    /// Add a new backend functor to backendFunctorList
    void gambit_core::registerBackendFunctor(functor &f)
    {
      backendFunctorList.push_back(&f);
      backends.insert(f.origin());
      capabilities.insert(f.capability());
    }

    /// Add a new primary model functor to primaryModelFunctorList
    void gambit_core::registerPrimaryModelFunctor(primary_model_functor &f)
    {
      primaryModelFunctorList.push_back(&f);
      capabilities.insert(f.capability());
    }

    /// Add entries to the map of activated primary model functors
    void gambit_core::registerActiveModelFunctors(const gambit_core::pmfVec& fvec) 
    {
      for (gambit_core::pmfVec::const_iterator it = fvec.begin(); it != fvec.end(); ++it)
      {  
        activeModelFunctorList[(*it)->origin()] = *it;
      }
    }

    /// Get a reference to the list of module functors
    const gambit_core::fVec& gambit_core::getModuleFunctors() const { return functorList; } 

    /// Get a reference to the list of nested module functors
    const gambit_core::fVec& gambit_core::getNestedModuleFunctors() const { return nestedFunctorList; } 

    /// Get a reference to the list of backend model functors
    const gambit_core::fVec& gambit_core::getBackendFunctors() const { return backendFunctorList; }

    /// Get a reference to the list of primary model functors
    const gambit_core::pmfVec& gambit_core::getPrimaryModelFunctors() const { return primaryModelFunctorList; }

    /// Get a reference to the map of all user-activated primary model functors
    const gambit_core::pmfMap& gambit_core::getActiveModelFunctors() const { return activeModelFunctorList; }

    /// Launch non-interactive command-line diagnostic mode, for printing info about current GAMBIT configuration.
    void gambit_core::run_diagnostic(str command)
    {
    
      if (command == "-v" or command == "--version")
      {
        cout << "\nThis is GAMBIT v" + version << endl << endl;
      }

      else if (command == "modules")
      {
        const int maxlen = 20;
        cout << "\nThis is GAMBIT." << endl << endl; 
        cout << "Modules             Num. module functions" << endl;
        cout << "-----------------------------------------" << endl;
        for (std::set<str>::const_iterator it = modules.begin(); it != modules.end(); ++it)
        {
          int nf = 0;
          for (fVec::const_iterator jt = functorList.begin(); jt != functorList.end(); ++jt)
          {
            if ((*jt)->origin() == *it) nf++;
          } 
          cout << *it << spacing(it->length(),maxlen) << nf << endl;
        }
        cout << endl;
      }
    
      else if (command == "backends")
      {
        cout << "\nThis is GAMBIT. Registered backends:" << endl;
        cout <<   "------------------------------------" << endl;
        for (std::set<str>::const_iterator it = backends.begin(); it != backends.end(); ++it)
        {
          cout << *it << endl;
        }
        cout << endl;
        //FIXME include versions, number of backend functions, path to lib, present/loaded successfully
      }
    
      else if (command == "models")
      {
        int maxlen = 22;
        // Create a graph of the available model hierarchy.
        ModelGraph().makeGraph(getPrimaryModelFunctors());
        cout << "\nThis is GAMBIT." << endl << endl; 
        cout << "Models                     Parent          " << endl;
        cout << "-------------------------------------------" << endl;
        std::set<str> models = modelClaw().get_allmodels();
        for (std::set<str>::const_iterator it = models.begin(); it != models.end(); ++it)
        {
          cout << *it << spacing(it->length(),maxlen) << parent(*it) << endl;
        }
        cout << endl;
        //FIXME include number of parameters    
      }
    
      else if (command == "capabilities")
      {
        const int maxlen1 = 35;
        const int maxlen2 = 25;
        cout << "\nThis is GAMBIT." << endl << endl; 
        cout << "Capabilities                           Available in (modules/models)  Available in (backends)" << endl;
        cout << "---------------------------------------------------------------------------------------------" << endl;
        for (std::set<str>::const_iterator it = capabilities.begin(); it != capabilities.end(); ++it)
        {
          std::set<str> modset, beset;
          str mods, bes;
          // Make sets of matching modules and backends
          for (fVec::const_iterator jt = functorList.begin(); jt != functorList.end(); ++jt)
          {
            if ((*jt)->capability() == *it) modset.insert((*jt)->origin());
          } 
          for (fVec::const_iterator jt = backendFunctorList.begin(); jt != backendFunctorList.end(); ++jt)
          {
            if ((*jt)->capability() == *it) beset.insert((*jt)->origin());
          }         
          // Make strings out of the sets
          for (std::set<str>::const_iterator jt = modset.begin(); jt != modset.end(); ++jt)
          {
            if (jt != modset.begin()) mods += ", "; 
            mods += *jt;
          }
          for (std::set<str>::const_iterator jt = beset.begin(); jt != beset.end(); ++jt)
          {
            if (jt != beset.begin()) bes += ", "; 
            bes += *jt;
          }
          // Print them
          cout << *it << spacing(it->length(),maxlen1) << mods << spacing(mods.length(),maxlen2) << bes << endl;
        }
        cout << endl;
      }
    
      else 
      {
        //Iterate over all modules to see if command matches one of them
        // functions + capabilities and types, loop manager or not, nested or not, statuses
        //   -dependencies
        //   -backend requirements + grouped or not
    
        //Iterate over all backends to see if command matches one of them
        // path to
        // load status
        // functions, capabilities, types (inc args), statuses
    
        //Iterate over all models to see if command matches one of them
        // parent, children, parameters
    
        //Iterate over all capabilities to see if command matches one of them
        // available from (type, origin, function name)
        // explanation
    
        return;
      }
    
      logger().disable();
      core_error().silent_forced_throw();
    
    }

}
