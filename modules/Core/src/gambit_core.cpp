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
#include "yaml_description_database.hpp"

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
      cout << "\nusage: gambit [options] [<command>]                                        "
              "\n                                                                           "
              "\nAvailable commands:                                                        "
              "\n   <inifile>             Start a scan using instructions from inifile      "
              "\n                           options: See below                              "
              "\n                           e.g.: gambit gambit.yaml                        "        
              "\n   modules               List registered modules                           "
              "\n   backends              List registered backends and their status         "
              "\n   models                List registered models and output model graph     "
              "\n   capabilities          List all registered function capabilities         "
              "\n                           options:                                        "
              "\n                            -f/--full         Display all full descriptions (long!)"
              "\n                            -n/--name <name>  Display named capability only"
              "\n   scanners              List registered scanners                          "
              "\n   <name>                Give info on a specific module, backend, model,   "
              "\n                           capability or scanner                           "
              "\n                           e.g.: gambit DarkBit                            "       
              "\n                                 gambit Pythia                             "        
              "\n                                 gambit MSSM                               "          
              "\n                                 gambit IC79WL_loglike                     "
              "\n                                 gambit MultiNest                          "     
              "\n                                                                           "
              "\nBasic options:                                                             "
              "\n   --version             Display GAMBIT version information                "
              "\n   -h/--help             Display this usage information                    "
              "\nOptions for <inifile> command:                                             "
              "\n   -v/--verbose          Turn on verbose mode                              "
              "\n   -r/--runorder         List the function evaluation order computed based " 
              "\n                           on inifile                                      "
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
            // display usage message and quit (also happens on unrecognised options)
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

    

    /// Check the named database for conflicts and missing descriptions
    // Emits a report
    void gambit_core::check_database(const str& database)
    {
      if(database == "capabilities")
      {
        // Loop through registered capabilities and try to find their descriptions (potentially from many files, but for now just checking one)
        str orig_descriptions("capabilities.dat"); // Write descriptions in here
        DescriptionDatabase description_file(orig_descriptions); // Load descriptions file
        str centralised_descriptions("central_capabilities.dat"); // GAMBIT pools descriptions into this file (including empty descriptions: everything should be found exactly once in here)
        std::set<str> parsed_descriptions; // Set of capabilities whose description we have parsed
        bool missing_flag = false; // Lets us know if any missing descriptions identified
 
        // Check for duplicate description keys
        std::map<str,int> duplicates = description_file.check_for_duplicates();

        // Search through GAMBIT for information about registered capabilities to match to the descriptions
        for (std::set<str>::const_iterator it = capabilities.begin(); it != capabilities.end(); ++it)
        {
          capability_info capinfo;
          capinfo.name = *it;

          // Make sets of matching modules and backends
          for (fVec::const_iterator jt = functorList.begin(); jt != functorList.end(); ++jt)
          {
            if ((*jt)->capability() == *it) capinfo.modset.insert((*jt)->origin());
          } 
          for (fVec::const_iterator jt = backendFunctorList.begin(); jt != backendFunctorList.end(); ++jt)
          {
            if ((*jt)->capability() == *it) capinfo.beset.insert((*jt)->origin());
          } 
 
          // Check original description files for descriptions matching this capability
          if( description_file.hasKey(*it) )
          {
            // Check whether there are duplicates of this key
            if (duplicates[*it] > 0)
            {
              std::vector<str> dups = description_file.get_all_values(*it);
              std::ostringstream errmsg;
              errmsg << "Error! Duplicate capability descriptions found for capability \""<<*it<< "\"! Only one description is permitted, since all capabilities going by the same name must provide the same information. Please rename a capability or delete one of the descriptions."<<endl;
              errmsg << "This capability is provided by the following modules and backends:" <<endl;
              errmsg << "Modules :"<<capinfo.modset<<endl;
              errmsg << "Backends:"<<capinfo.beset<<endl<<endl;
              errmsg << "The duplicate descriptions are:" <<endl;
              errmsg << "---------------------" <<endl;
              int dup_num = 0;
              for(std::vector<str>::iterator kt = dups.begin(); kt != dups.end(); ++kt)
              { 
                errmsg << dup_num << ":" <<endl;
                errmsg << *kt;
                errmsg << "----------------------" <<endl;
                dup_num++;
              }
              core_error().raise(LOCAL_INFO,errmsg.str());
            } 
            else 
            {
              capinfo.description = description_file.getValue<str>(*it);
              capinfo.has_description = true;
            }
          }
          else
          {
            // Record that this description is missing
            capinfo.description = "Missing!"; 
            capinfo.has_description = false;
            missing_flag = true;
          }
       
          capability_dbase.push_back(capinfo);
        }

        if(missing_flag)
        {
          // Warn user of missing descriptions
          std::ostringstream msg;
          msg << "Warning! Descriptions are missing for the following capabilities:" <<endl;
          for (std::vector<capability_info>::const_iterator it = capability_dbase.begin(); it != capability_dbase.end(); ++it)
          {
            if(not it->has_description)
            {
              msg << "   " << it->name << endl;
            }
          }
          msg << "Please add descriptions of these to "<< orig_descriptions <<endl;
          cout << msg.str(); 
          ///TODO not sure which of these is preferable... warning only goes to log...
          //   core_warning().raise(LOCAL_INFO,msg.str());
        }

        // Write out the centralised database file containing all this information
        // (we could also keep this in memory for other functions to use; it's probably not that large)
        // Should probably sort it by module or something.    
    
        // Could have built this directly in the other loop, but for now it is separate.
        YAML::Emitter out;

        for (std::vector<capability_info>::const_iterator it = capability_dbase.begin(); it != capability_dbase.end(); ++it)
        {
          // There is probably some fancier, more description formatting we could use (comments etc?)
          out << YAML::BeginMap;
          out << YAML::Key << "name";
          out << YAML::Value << it->name;
          out << YAML::Key << "modules";
          out << YAML::Value << YAML::BeginSeq;
          for (std::set<str>::const_iterator jt = it->modset.begin(); jt != it->modset.end(); ++jt)
          {
            out << *jt;
          }
          out << YAML::EndSeq;
          out << YAML::Key << "backends";
          out << YAML::Value << YAML::BeginSeq;
          for (std::set<str>::const_iterator jt = it->beset.begin(); jt != it->beset.end(); ++jt)
          {
            out << *jt;
          }
          out << YAML::EndSeq;
          // This doesn't emit in the proper long string format... need to figure out how to do that.
          out << YAML::Key << "description";
          out << YAML::Literal << it->description; // Long string format
          out << YAML::EndMap;  
        }
        // Create file and write YAML output there
        ofstream outfile;
        outfile.open(centralised_descriptions);
        outfile << "# Auto-generated capability description library. Edits will be erased." << endl;;
        outfile << "# Edit \"" << orig_descriptions << "\" instead." << endl << endl << out.c_str();
      }
      else
      {
        // Sorry, no other databases implented yet
        std::ostringstream errmsg;
        errmsg << "No description database with the name \""<<database<< "\" currently exists. Please check for typos and try again.";
        core_error().raise(LOCAL_INFO,errmsg.str());
      }
    }

    /// Get the description of the named capability from the description database
    // e.g. second argument might be "capability", with the first argument being
    // the name of a capability
    const str gambit_core::get_description(const str& name, const str& type) const
    {
      // There are lots of ways we could set this up...
      // For now I am just going to read these from a central yaml file.
      // We may want a seperate description file within each module though, to make them easier to maintain seperately.
      // We could then check them for consistency here, i.e. warning if there are duplicate descriptions and forcing
      // users to delete one of them or else rename their capabilities to avoid collisions with other modules.
      // For now I am just doing capabilities, but we'll probably want something similar for models, modules, etc., just
      // for documentation purposes. Maybe we can even pull the descriptions into the full documentation somehow.
      //
      // Update: I am now running check_database first, which could do the pooling of descriptions from various sources
      // into the central file which we check here. That helps modularise this task a bit.


      return "";
    }

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

        // Check for options
        int index;
        int iarg(0);
        str named_cap("");
        bool full_format(false);

        const struct option capabilities_options[] =
        {
          {"full", no_argument, 0, 'f'},
          {"name", required_argument, 0, 'n'},
          {0,0,0,0},
        };

        while(iarg != -1)
        {
          iarg = getopt_long(argc, argv, "fn:", capabilities_options, &index);
  
          switch (iarg)
          {
            case 'n':
              // Display full description of the named capability only
              named_cap = optarg;
            case 'f':
              // Display full description of each capability (grabbed from database entries)
              // Also displays warning if some capabilities not found in the database
              full_format = true; // Sorted out in dependency resolver
              break;
            case '?':
              // Display usage message and quit (also happens on unrecognised options)
              bail();
              break;
            case -1:
              if (optind >= argc) bail();
          }
        }
        // Set flag telling core object that command line option processing is complete
        processed_options = true;

        // Check if named capability is registered
        if( (named_cap!="") and (std::find(capabilities.begin(),capabilities.end(), named_cap)==capabilities.end()) )
        {
          // Nope no capability with that name
          std::ostringstream errmsg;
          errmsg << "No capability with the name \""<<named_cap<< "\" could be found. Please check for typos and try again.";

          ///TODO this is possibly a little severe for this kind of error...
          core_error().raise(LOCAL_INFO,errmsg.str());
        }

        // Display capability information
        cout << "\nThis is GAMBIT." << endl << endl; 

        if(not full_format)
        {
          // Default, list-format output header
          cout << "Capabilities                           Available in (modules/models)  Available in (backends)" << endl;
          cout << "---------------------------------------------------------------------------------------------" << endl;
        }
        for (std::set<str>::const_iterator it = capabilities.begin(); it != capabilities.end(); ++it)
        {
          if(full_format and (named_cap != "") and (*it != named_cap)) {continue;}

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

          // Choose display format (list or full)
          if(full_format)
          {
            cout << "-----------------------------------------------------" << endl;
            cout << "Capability name: " << *it << endl;
            cout << "Available in (modules/models) : " << mods << endl;
            cout << "Available in (backends)       : " << bes << endl;
            cout << "Description:" << endl;
            cout << "  " << get_description(*it,"capability") << endl;
          }
          else
          {
            // Print the entry in the table (list format)
            cout << *it << spacing(it->length(),maxlen1) << mods << spacing(mods.length(),maxlen2) << bes << endl;
          }
        }

        // Check capabilities database for missing/conflicting descriptions and emit a report
        // Could put this elsewhere so that it always runs when gambit runs, possibly...
        check_database("capabilities");
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
