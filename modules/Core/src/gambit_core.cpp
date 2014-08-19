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

// Headers for GNU getopt command line parsing library
#include <stdlib.h>
#include <getopt.h>

// Gambit headers
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
     /* command line flags */ 
     processed_options(false),
     show_runorder(false),
     verbose_flag(false)
    {}

    /// Inform the user of the ways to invoke GAMBIT, then die.
    void gambit_core::bail()
    {
      cout << "\nusage: gambit [options] [<command>]                                      "
              "\n                                                                         "
              "\nAvailable commands:                                                      "
              "\n   <inifile>           Start a scan using instructions from inifile      "
              "\n                         e.g.: gambit gambit.yaml                        "        
              "\n   modules             List registered modules                           "
              "\n   backends            List registered backends and their status         "
              "\n   models              List registered models and output model graph     "
              "\n   capabilities        List all registered function capabilities         "
              "\n   scanners            List registered scanners                          "
              "\n   <name>              Give info on a specific module, backend, model,   "
              "\n                         capability or scanner                           "
              "\n                         e.g.: gambit DarkBit                            "       
              "\n                               gambit Pythia                             "        
              "\n                               gambit MSSM                               "          
              "\n                               gambit IC79WL_loglike                     "
              "\n                               gambit MultiNest                          "     
              "\n                                                                         "
              "\nAvailable options                                                        "
              "\n   --version           Display GAMBIT version information                "
              "\n   -h/--help           Display this usage information                    "
              "\n   -v/--verbose        Turn on verbose mode (use with <inifile> command) "
              "\n   -r/--runorder       List the function evaluation order computed based " 
              "\n                         on inifile (use with <inifile> command)         "
              "\n" << endl << endl; 
      logger().disable();
      core_error().silent_forced_throw();
    } 

    /// Process default mode command line options and return filename
    str gambit_core::process_primary_options(int argc, char **argv)
    {
      int index;
      int iarg=0;
      str filename;
      /// Gambit 'standard mode' command line option definitions (needed by getopt)
      // Basically this is a clone of the example in the getopt_long documentation
      // (http://www.gnu.org/savannah-checkouts/gnu/libc/manual/html_node/Getopt-Long-Option-Example.html#Getopt-Long-Option-Example)
      // 
      // Note that specialised versions of this structure exist for some of the special run modes.
      const struct option primary_options[] =
      {
        {"version", no_argument, 0, 10}, /*10 is just a unique integer key to identify this argument*/
        {"verbose", no_argument, 0, 'v'},
        {"help",    no_argument, 0, 'h'},
        {"runorder", no_argument,0, 'r'},
        {0,0,0,0},
      };

      // Must at least have one argument.
      if (argc < 2) bail();

      while(iarg != -1)
      {
        iarg = getopt_long(argc, argv, "vhr", primary_options, &index);

        switch (iarg)
        {
          case 10:
            // Display version number and shutdown.
            cout << "\nThis is GAMBIT v" + version << endl;
            logger().disable();
            core_error().silent_forced_throw();
          case 'v':
            // Turn on verbose mode
            verbose_flag = true; 
            break;
          case 'h':
          case '?':
            // Display usage message and quit (also happens on unrecognised options)
            bail();
            break;
          case 'r':
            // Display proposed functor evaluation order and quit
            show_runorder = true; // Sorted out in dependency resolver
            break;
          case -1:
            if (optind >= argc) bail();
            // Bingo, got the filename
            filename = argv[optind];
        }
      }
      // Set flag telling core object that command line option processing is complete
      processed_options = true;
      return filename;
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
    str gambit_core::run_diagnostic(int argc, char **argv)
    {
      str filename;
      const str command = argc > 1 ? argv[1] : "none";
      bool is_yaml = false;
    
      // Check which mode we are running in
      // (each mode may process command line arguments differently)

      if (command == "modules")
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
        is_yaml = true;

        //Iterate over all modules to see if command matches one of them
        for (std::set<str>::const_iterator it = modules.begin(); it != modules.end(); ++it)
        {
          if (command == *it)
          {
            cout << "\nThis is GAMBIT." << endl << endl; 
            cout << "Information for module " << *it << "." << endl << endl;
            cout << "Function                             Capability                              Result Type               Loop Manager: Is   Needs";
            cout << "                   Dependencies[] & Backend Reqs{}" << endl;
            cout << "-------------------------------------------------------------------------------------------------------------------------------";
            cout << "--------------------------------------------------" << endl;

            for (fVec::const_iterator jt = functorList.begin(); jt != functorList.end(); ++jt)
            {
              if ((*jt)->origin() == *it)              // Module matches
              {
                str f = (*jt)->name();
                str c = (*jt)->capability();
                str t = (*jt)->type();
                str islm = (*jt)->canBeLoopManager() ? "Yes" : "No ";
                str nlm  = (*jt)->loopManagerCapability();
                std::vector<sspair> deps = (*jt)->dependencies();
                std::vector<sspair> reqs = (*jt)->backendreqs();
                cout << f << spacing(f.length()-2,30) << c << spacing(c.length(),35);
                cout << t << spacing(t.length(),35) << islm << "  " << nlm << spacing(nlm.length(),19);
                if (not deps.empty())
                {
                  for (std::vector<sspair>::const_iterator kt = deps.begin(); kt != deps.end(); ++kt)
                  {
                    if (kt != deps.begin()) cout << std::string(146,' ');
                    cout << kt->first << "[" << kt->second << "]" << endl;
                  }
                } 
                if (not reqs.empty())
                {
                  for (std::vector<sspair>::const_iterator kt = reqs.begin(); kt != reqs.end(); ++kt)
                  {
                    if (kt != reqs.begin() or not deps.empty()) cout << std::string(146,' ');
                    cout << kt->first << "{" << kt->second << "}" << endl;
                  }
                }
                if (reqs.empty() and deps.empty()) cout << endl;
              }
            } 

            is_yaml = false;
            break;
          }
        }
    
        //Iterate over all backends to see if command matches one of them
        for (std::set<str>::const_iterator it = backends.begin(); it != backends.end(); ++it)
        {
          if (command == *it)
          {
            cout << "\nThis is GAMBIT." << endl << endl; 
            cout << "Information for backend " << *it << "." << endl << endl;

            std::set<str> versions;
            std::map<str,str> paths;
            std::map<str,str> status;
            std::map<str,fVec> befunctors;
    
            for (fVec::const_iterator jt = backendFunctorList.begin(); jt != backendFunctorList.end(); ++jt)
            {
              if ((*jt)->origin() == *it)              // Backend matches
              {
                str version = (*jt)->version();        // Retrieve the version
                auto new_v = versions.insert(version); // Attempt to add this version to the set 
                if (new_v.second)                      // This version was not in the version set yet
                {
                  paths[version]  = backendData->paths.at(*it+version); // Save the path of this backend
                  status[version] = backendData->works.at(*it+version) ? "present" : "absent/broken";  // Save the status of this backend 
                }
                befunctors[version].push_back(*jt);
              }
            }            

            for (std::set<str>::const_iterator jt = versions.begin(); jt != versions.end(); ++jt)
            {
              cout << "Version: " << *jt << endl;
              cout << "Path to library: " << paths[*jt] << endl;
              cout << "Library status: " << status[*jt] << endl << endl; 
              cout << "  Function                      Capability                              Type                                         Status         " << endl;
              cout << "  ----------------------------------------------------------------------------------------------------------------------------------" << endl;
              for (fVec::const_iterator kt = befunctors[*jt].begin(); kt != befunctors[*jt].end(); ++kt)
              {
                str f = (*kt)->name();
                str c = (*kt)->capability();
                str t = (*kt)->type();
                int s = (*kt)->status();
                str ss;
                if (s == -2) ss = "Function absent";
                if (s == -1) ss = "Backend absent";
                if (s >= 0)  ss = "Available";
                cout << "  " << f << spacing(f.length(),25) << c << spacing(c.length(),35);
                cout << t << spacing(t.length(),40) << ss << endl;
              }
              cout << "  ----------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
            }

            is_yaml = false;
            break;
          }
        }
    
        //Iterate over all models to see if command matches one of them
        for (pmfVec::const_iterator it = primaryModelFunctorList.begin(); it != primaryModelFunctorList.end(); ++it)
        {
          str model = (*it)->origin();
          if (command == model)
          {
            cout << "\nThis is GAMBIT." << endl << endl; 
            cout << "Information for model " << model << "." << endl << endl;;
          
            // parent, children, parameters

            is_yaml = false;
            break;
          }
        }  

        //Iterate over all capabilities to see if command matches one of them
        for (std::set<str>::const_iterator it = capabilities.begin(); it != capabilities.end(); ++it)
        {
          if (command == *it)
          {
            cout << "\nThis is GAMBIT." << endl << endl; 
            cout << "Information for capability " << *it << "." << endl << endl;
          
            // available from (type, module/backend, function name)
            // explanation from capability database

            is_yaml = false;
            break;
          }
        }
    
        //Iterate over all scanners to see if command matches one of them
        //for (std::set<str>::const_iterator it = scanners.begin(); it != scanners.end(); ++it)
        {
          //if (command == *it)
          //{
          //  cout << "\nThis is GAMBIT." << endl << endl; 
          //  cout << "Information for scanner " << model << "." << endl << endl;;
          
            // stuff about the scanner

            //is_yaml = false;
            //break;
          //}
        }  

        // If we haven't yet, process the command line options
        // (this may be done differently in one of the non-standard run modes, though if it
        //  is then gambit should probably stop running before we get to here...)
        if (not processed_options) 
        {
          filename = process_primary_options(argc,argv);
        }
        else 
        {
          cout<<"Command line options have already been processed in a special run mode... GAMBIT should not reach this point. Aborting..."<<endl;
          logger().disable();
          core_error().silent_forced_throw();
        }

      }
    
      //Looks like time to die.
      if (not is_yaml) 
      {
        cout << endl;
        logger().disable();
        core_error().silent_forced_throw();
      }

      return filename;
    
    }

}
