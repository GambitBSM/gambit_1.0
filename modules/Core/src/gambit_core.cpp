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
#include "modelgraph.hpp"
#include "stream_printers.hpp"

namespace Gambit
{

  /// Definitions of public methods in GAMBIT core class.

    /// Constructor
    gambit_core::gambit_core(const Models::ModelFunctorClaw &claw, const Backends::backend_info &beinfo ) :
     modelInfo(&claw),
     backendData(&beinfo), 
     show_runorder(false)
    {}

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
              "\n   List registered scanners                           gambit scanners       " 
              "\n                                                                            "
              "\n   List initial functor eval. order (and then stop)   gambit <inifile> runorder"
              "\n                                                                            "
              "\n   Give info on a specific module, backend, model,    gambit <name>         "
              "\n   capability or scanner e.g.                         gambit DarkBit        "
              "\n                                                      gambit Pythia         "
              "\n                                                      gambit MSSM           "
              "\n                                                      gambit IC79WL_loglike "
              "\n                                                      gambit MultiNest      "
              "\n                                                                            "
              "\n   Print GAMBIT version information                   gambit -v/--version   " << endl << endl; 
      logger().disable();
      core_error().silent_forced_throw();
    } 

    /// Add a new module functor to functorList
    void gambit_core::registerModuleFunctor(functor &f)
    {
      functorList.push_back(&f);
      const std::set<str> models = modelInfo->get_allmodels();
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
        cout << "\nThis is GAMBIT v" + version << endl;
      }

      else if (command == "modules")
      {
        const int maxlen = 25;
        cout << "\nThis is GAMBIT." << endl << endl; 
        cout << "Modules             Num. functions" << endl;
        cout << "----------------------------------" << endl;
        for (std::set<str>::const_iterator it = modules.begin(); it != modules.end(); ++it)
        {
          int nf = 0;
          for (fVec::const_iterator jt = functorList.begin(); jt != functorList.end(); ++jt)
          {
            if ((*jt)->origin() == *it) nf++;
          } 
          cout << *it << spacing(it->length(),maxlen) << nf << endl;
        }
      }
    
      else if (command == "backends")
      {
        int maxlens[4] = {18, 7, 40, 15};
        cout << "\nThis is GAMBIT." << endl << endl; 
        cout << "Backends               Version     Path to lib (relative to GAMBIT directory)   Status    Num. functions" << endl;
        cout << "--------------------------------------------------------------------------------------------------------" << endl;
        for (std::set<str>::const_iterator it = backends.begin(); it != backends.end(); ++it)
        {
          std::set<str> versions;
          std::map<str,int> nfuncs;
          std::map<str,str> paths;
          std::map<str,str> status;
          for (fVec::const_iterator jt = backendFunctorList.begin(); jt != backendFunctorList.end(); ++jt)
          {
            if ((*jt)->origin() == *it)              // Backend matches
            {
              str version = (*jt)->version();        // Retrieve the version
              auto new_v = versions.insert(version); // Attempt to add this version to the set 
              if (new_v.second)                      // This version was not in the version set yet
              {
                nfuncs[version] = 0;                                  // Initialise the count of functions in this version
                paths[version]  = backendData->paths.at(*it+version); // Save the path of this backend
                status[version] = backendData->works.at(*it+version) ? "present" : "absent/broken";  // Save the status of this backend 
              }
              nfuncs[version]++; // Increment the count of the functions in this version
            }
          }         
          for (std::set<str>::const_iterator jt = versions.begin(); jt != versions.end(); ++jt)
          {
            str firstentry = "";
            if (jt == versions.begin()) firstentry = *it;
            cout << firstentry  << spacing(firstentry.length(),maxlens[0]);
            cout << *jt         << spacing(jt->length(),maxlens[1]);
            cout << paths[*jt]  << spacing(paths[*jt].length(),maxlens[2]);
            cout << status[*jt] << spacing(status[*jt].length(),maxlens[3]);
            cout << nfuncs[*jt] << endl;
          }
        }
      }
    
      else if (command == "models")
      {
        int maxlen1 = 22;
        int maxlen2 = 22;
        cout << "\nThis is GAMBIT." << endl << endl; 
        cout << "Models                     Parent             Parameters" << endl;
        cout << "--------------------------------------------------------" << endl;
        for (pmfVec::const_iterator it = primaryModelFunctorList.begin(); it != primaryModelFunctorList.end(); ++it)
        {
          str model = (*it)->origin();
          str parentof = modelInfo->get_parent(model);
          int nparams = (*it)->valuePtr()->getNumberOfPars();
          cout << model << spacing(model.length(),maxlen1) << parentof << spacing(parentof.length(),maxlen2) << nparams << endl;
        }
        // Create and spit out graph of the model hierarchy.
        str graphfile = "GAMBIT_model_hierarchy.gv";
        ModelHierarchy modelGraph(*modelInfo,primaryModelFunctorList,graphfile,false);
        cout << endl << "Created graphviz model hierarchy graph in "+graphfile+"." << endl; 
        cout << "Please run ./graphviz.sh "+graphfile+" to get postscript plot." << endl; 
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
          // Identify the primary model parameters with their models.
          if (mods.length() == 0 and bes.length() == 0) mods = it->substr(0,it->length()-11);
          // Print the entry in the table.
          cout << *it << spacing(it->length(),maxlen1) << mods << spacing(mods.length(),maxlen2) << bes << endl;
        }
      }

      else if (command == "runorder")
      {
        cout << "\nThis is GAMBIT." << endl << endl; 
        // Rest of the message obtained from dependency resolver. Set a flag to trigger this to occur.
        show_runorder = true;
        return; // Need to continue running gambit for a bit longer to get the requested info.
      }

      else if (command == "scanners")
      {
        cout << "\nThis is GAMBIT." << endl << endl; 
        cout << "Scanners            Accepted options" << endl;
        cout << "------------------------------------" << endl;
        //for (std::set<str>::const_iterator it = scanners.begin(); it != scanners.end(); ++it)
        //{
        //  cout << *it << endl;
        //}
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
    
      cout << endl;
      logger().disable();
      core_error().silent_forced_throw();
    
    }

}
