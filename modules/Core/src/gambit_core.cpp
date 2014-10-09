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
#include <fstream>
#include <sstream>

// Headers for GNU getopt command line parsing library
#include <stdlib.h>
#include <getopt.h>

// Gambit headers
#include "gambit_core.hpp"
#include "error_handlers.hpp"
#include "version.hpp"
#include "modelgraph.hpp"
#include "stream_overloads.hpp"
#include "yaml_description_database.hpp"

namespace Gambit
{
    /// Definitions of public methods in GAMBIT core class.

    /// Constructor
    gambit_core::gambit_core(const Models::ModelFunctorClaw &claw, const Backends::backend_info &beinfo ) :
     modelInfo(&claw),
     backendData(&beinfo),
     capability_dbase_file("central_capabilities.dat"),
     model_dbase_file("central_models.dat"),
     input_capability_descriptions("capabilities.dat"),
     input_model_descriptions("models.dat"),
     report_file("report.txt"),
     report(report_file.c_str()),
     /* command line flags */ 
     processed_options(false),
     show_runorder(false),
     verbose_flag(false),
     found_inifile(false)
    {}

    /// Inform the user of the ways to invoke GAMBIT, then die.
    void gambit_core::bail()
    {
      cout << "\nusage: gambit [options] [<command>]                                        "
              "\n                                                                           "
              "\nRun scan:                                                                  "
              "\n   gambit -f <inifile>   Start a scan using instructions from inifile      "
              "\n                           e.g.: gambit -f gambit.yaml                     "        
              "\n                                                                           "
              "\nAvailable commands:                                                        "
              "\n   modules               List registered modules                           "
              "\n   backends              List registered backends and their status         "
              "\n   models                List registered models and output model graph     "
              "\n   capabilities          List all registered function capabilities         "
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
              "\n   -f <inifile>          Start scan using <inifile>                        "
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
        iarg = getopt_long(argc, argv, "vhrf:", primary_options, &index);

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
          case 'f':
            // Argument must contain the ini-filename 
            filename = optarg;
            found_inifile = true;
        }
      }
      // Set flag telling core object that command line option processing is complete
      processed_options = true;
      return filename;
    }

    /// Add a new module to modules list
    void gambit_core::registerModule(str module) { modules.insert(module); }

    /// Add a new module functor to functorList
    void gambit_core::registerModuleFunctor(functor &f)
    {
      functorList.push_back(&f);
      capabilities.insert(f.capability());
    }

    /// Add a new module functor to nestFunctorList
    void gambit_core::registerNestedModuleFunctor(functor &f) { nestedFunctorList.push_back(&f); }

    /// Add a new backend functor to backendFunctorList
    void gambit_core::registerBackendFunctor(functor &f)
    {
      backendFunctorList.push_back(&f);
      capabilities.insert(f.capability());
    }

    /// Register a new backend
    void gambit_core::registerBackend(str be, str version) { backend_versions[be].insert(version); }

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

    /// Get a reference to the list of backend functors
    const gambit_core::fVec& gambit_core::getBackendFunctors() const { return backendFunctorList; }

    /// Get a reference to the list of primary model functors
    const gambit_core::pmfVec& gambit_core::getPrimaryModelFunctors() const { return primaryModelFunctorList; }

    /// Get a reference to the map of all user-activated primary model functors
    const gambit_core::pmfMap& gambit_core::getActiveModelFunctors() const { return activeModelFunctorList; }
    
    /// Tell the module functors which backends are actually present,
    /// so that they can deactivate themselves if they require a class
    /// that is supposed to be provided by a backend that is AWOL.
    void gambit_core::accountForMissingClasses() const
    {
      // Create a map of all the registered backends that are connected and fully functional (including factories for classloading)
      std::map<str, std::set<str> > working_bes;
      // Start by looping over all registered backends
      for (std::map<str, std::set<str> >::const_iterator it = backend_versions.begin(); it != backend_versions.end(); ++it)
      {
        // Then loop over all registered versions of this backend
        for (std::set<str>::const_iterator jt = it->second.begin(); jt != it->second.end(); ++jt)
        {
          const str be_ver = it->first+*jt;
          if (backendData->works.at(be_ver))
          {
            if (backendData->classloader.at(be_ver))
            {
              if (backendData->classes_OK.at(be_ver)) working_bes[it->first].insert(*jt);
            }
            else
            { 
              working_bes[it->first].insert(*jt);
            }
          }
        }
      }
      // Feed the new map to each of the module functors.
      for (fVec::const_iterator it = functorList.begin(); it != functorList.end(); ++it)
      {
        (*it)->notifyOfBackends(working_bes);
      }
    }

    /// Check the capability and model databases for conflicts and missing descriptions
    // Emits a report to file regard missing and conflicting descriptions.
    void gambit_core::check_databases()
    {
      // Loop through registered capabilities and try to find their descriptions (potentially from many files, but for now just checking one)
      DescriptionDatabase description_file(input_capability_descriptions); // Load descriptions file
      //std::set<str> parsed_descriptions; // Set of capabilities whose description we have parsed
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
          if ( duplicates[*it] > 0 )
          {
            std::vector<str> dups = description_file.get_all_values(*it);
            std::ostringstream errmsg;
            errmsg << "Error! Duplicate capability descriptions found for capability \""<<*it<<
             "\"! Only one description is permitted, since all capabilities going by the same name "
             "must provide the same information. Please rename a capability or delete one of the descriptions."<<endl;
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
        msg << "Please add descriptions of these to "<< input_capability_descriptions <<endl; 
        //core_warning().raise(LOCAL_INFO,msg.str()); //Ok can't do this since logger isn't initialised yet, and gets disabled anyway.
        // Send to a hardcoded file for now
        report << msg.str() << endl;
        // Also make user directly aware of this problem
        cout << "Warning! Descriptions missing for some capabilities! See "<<report_file<<" for details." << endl;
      }

      // Write out the centralised database file containing all this information
      // (we could also keep this in memory for other functions to use; it's probably not that large)
      // Should probably sort it by module or something.    
    
      // Could have built this directly in the other loop, but for now it is separate.
      YAML::Emitter out;
      out << YAML::BeginSeq;
      for (std::vector<capability_info>::iterator it = capability_dbase.begin(); it != capability_dbase.end(); ++it)
      {
        //capability_info tmp = *it;
        out << *it; //custom emitter to do this is in yaml_description_database.hpp
      }
      out << YAML::EndSeq;
      // Create file and write YAML output there
      ofstream outfile;
      outfile.open(capability_dbase_file);
      outfile << "# Auto-generated capability description library. Edits will be erased." << endl;;
      outfile << "# Edit \"" << input_capability_descriptions << "\" instead." << endl << endl << out.c_str();
      

      // Now the models
      // This is distressingly similar to the capabilities case, but it doesn't seem so straightforward to modularise any further...
        
      // Loop through registered models and try to find their descriptions (potentially from many files, but for now just checking one)
      DescriptionDatabase model_description_file(input_model_descriptions); // Load descriptions file
      missing_flag = false; // reset this flag
 
      // Check for duplicate description keys
      duplicates = description_file.check_for_duplicates();

      // Search through GAMBIT for information about registered models to match to the descriptions
      for (pmfVec::const_iterator it = primaryModelFunctorList.begin(); it != primaryModelFunctorList.end(); ++it)
      {
        model_info model;
        model.name = (*it)->origin();

        // Check original description files for descriptions matching this capability
        if( model_description_file.hasKey(model.name) )
        {
          // Check whether there are duplicates of this key
          if (duplicates[model.name] > 0)
          {
            std::vector<str> dups = model_description_file.get_all_values(model.name);
            std::ostringstream errmsg;
            errmsg << "Error! Duplicate model descriptions found for model \""<<model.name<< 
             "\"! Only one description is permitted, since model names must be unique. "
             "Please rename a model or delete one of the descriptions."<<endl;
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
            model.description = model_description_file.getValue<str>(model.name);
            model.has_description = true;
          }
        }
        else
        {
          // Record that this description is missing
          model.description = "Missing!"; 
          model.has_description = false;
          missing_flag = true;
        }
  
        // Get the rest of the info
        model.nparams = (*it)->valuePtr()->getNumberOfPars();
        model.parameters = (*it)->valuePtr()->getKeys();
        model.parent = modelInfo->get_parent(model.name);
        model.lineage = modelInfo->get_lineage(model.name);
        model.descendants = modelInfo->get_descendants(model.name);

        model_dbase.push_back(model);
      }

      if(missing_flag)
      {
        // Warn user of missing descriptions
        std::ostringstream msg;
        msg << "Warning! Descriptions are missing for the following models:" <<endl;
        for (std::vector<model_info>::const_iterator it = model_dbase.begin(); it != model_dbase.end(); ++it)
        {
          if(not it->has_description)
          {
            msg << "   " << it->name << endl;
          }
        }
        msg << "Please add descriptions of these to "<< input_model_descriptions <<endl;
        report << msg.str() << endl;
        // Also make user directly aware of this problem
        cout << "Warning! Descriptions missing for some models! See "<<report_file<<" for details." << endl;
      }

      // Write out the centralised database file containing all this information
      // (we could also keep this in memory for other functions to use; it's probably not that large)
      // Should probably sort it by module or something.    
  
      // Could have built this directly in the other loop, but for now it is separate.
      YAML::Emitter out2;
      out2 << YAML::BeginSeq;
      for (std::vector<model_info>::const_iterator it = model_dbase.begin(); it != model_dbase.end(); ++it)
      {
        out2 << *it; //custom emitter to do this is in yaml_description_database.hpp
      }
      out2 << YAML::EndSeq;
      // Create file and write YAML output there
      ofstream outfile2;
      outfile2.open(model_dbase_file);
      outfile2 << "# Auto-generated model description library. Edits will be erased." << endl;;
      outfile2 << "# Edit \"" << input_model_descriptions << "\" instead." << endl << endl << out2.c_str();
  
    }

    /// Get the description of the named capability from the description database
    // e.g. second argument might be "capability", with the first argument being
    // the name of a capability
    const capability_info gambit_core::get_capability_info(const str& name) const
    {
      // I am now keeping a vector of all the descriptions around... so no need to
      // actually read from the database file...

      // YAML::Node parser = YAML::LoadFile(centralised_descriptions);
      // for(YAML::const_iterator it=parser.begin();it!=parser.end();++it)
      // {
      //   capability_info cap = it->as<capability_info>();
      //   if(cap.name==name)
      //   {
      //     return cap; //Should only be one match possible after database check
      //   }
      // }
      // If we didn't find any matching capability this is bad; raise an error.

      for(std::vector<capability_info>::const_iterator it=capability_dbase.begin();
           it!=capability_dbase.end();++it)
      {
         if(it->name==name)
         {
           return *it; //Should only be one match possible after database check
         }
      }
      // if no match...
      std::ostringstream errmsg;
      errmsg << "No capability with the name \""<<name<< "\" could be found in the capability database. "
       "This function should not run when we don't know if the capability exists! Either there is a bug "
       "in the calling code, or something went wrong creating the capability database.";
      core_error().raise(LOCAL_INFO,errmsg.str());
    }

    const model_info gambit_core::get_model_info(const str& name) const
    {
      for(std::vector<model_info>::const_iterator it=model_dbase.begin();
           it!=model_dbase.end();++it)
      {
         if(it->name==name)
         {
           return *it; //Should only be one match possible after database check
         }
      }
      // if no match...
      std::ostringstream errmsg;
      errmsg << "No model with the name \""<<name<< "\" could be found in the model database. This function "
       "should not run when we don't know if the model exists! Either there is a bug in the calling code, or "
       "something went wrong creating the model database.";
      core_error().raise(LOCAL_INFO,errmsg.str());
    }

    /// Compute the status of a given backend
    inline str gambit_core::backend_status(str be, str version, bool& no_failures)
    {
      const str OK = "OK";
      const str bad = "absent/broken";
      const str badclass = "bad types";
      str status;
      if (backendData->works.at(be+version)) 
      {
        if (backendData->classloader.at(be+version)) 
        {
          status = (backendData->classes_OK.at(be+version) ? OK : badclass); 
        }
        else { status = OK; }
      }
      else { status = bad; }
      if (status == bad or status == badclass) no_failures = false;
      return status;
    }

    /// Launch non-interactive command-line diagnostic mode, for printing info about current GAMBIT configuration.
    str gambit_core::run_diagnostic(int argc, char **argv)
    {

      str filename;
      const str command = argc > 1 ? argv[1] : "none";
      bool no_scan = false; // Set to true if something happens that means we should stop cleanly after checking commands
    
      // Check which mode we are running in
      // (each mode may process command line arguments differently)

      if (command == "modules")
      {
        const int maxlen = 25;
        cout << "\nThis is GAMBIT." << endl << endl; 
        cout << "Modules                #functions" << endl;
        cout << "---------------------------------" << endl;
        for (std::set<str>::const_iterator it = modules.begin(); it != modules.end(); ++it)
        {
          int nf = 0;
          for (fVec::const_iterator jt = functorList.begin(); jt != functorList.end(); ++jt)
          {
            if ((*jt)->origin() == *it) nf++;
          } 
          cout << *it << spacing(it->length(),maxlen) << nf << endl;
        }
        no_scan = true;
      }
    
      else if (command == "backends")
      {
        int maxlens[6] = {18, 7, 40, 13, 3, 3};
        bool all_good = true;
        cout << "\nThis is GAMBIT." << endl << endl; 
        cout << "Backends               Version     Path to lib (relative to GAMBIT directory)   Status          #funcs  #types  #ctors" << endl;
        cout << "----------------------------------------------------------------------------------------------------------------------" << endl;

        // Loop over all registered backends
        for (std::map<str, std::set<str> >::const_iterator it = backend_versions.begin(); it != backend_versions.end(); ++it)
        {
          // Loop over all registered versions of this backend
          for (std::set<str>::const_iterator jt = it->second.begin(); jt != it->second.end(); ++jt)
          {
            int nfuncs = 0;
            int ntypes = 0;
            int nctors = 0;
            str path, status;

            // Retrieve the status and path info.
            path = backendData->paths.at(it->first+*jt);                          // Get the path of this backend
            status = backend_status(it->first, *jt, all_good);                    // Save the status of this backend

            // Count up the number of functions in this version of the backend, using the registered functors.
            for (fVec::const_iterator kt = backendFunctorList.begin(); kt != backendFunctorList.end(); ++kt)
            {
              if ((*kt)->origin() == it->first and (*kt)->version() == *jt) nfuncs++; // If backend matches, increment the count of the functions in this version
            }

            // Do things specific to versions that provide classes
            if (backendData->classloader.at(it->first+*jt))
            {
              std::set<str> classes = backendData->classes.at(it->first+*jt);     // Retrieve classes loaded by this version
              ntypes = classes.size();                                      // Get the number of classes loaded by this backend
              for (std::set<str>::const_iterator kt = classes.begin(); kt != classes.end(); ++kt)
              {
                nctors += backendData->factory_args.at(it->first+*jt+*kt).size(); // Add the number of factories for this class to the total
              }
            }

            // Print the info
            ostringstream ss1, ss2;
            str ss1a, ss2a;
            const str firstentry = (jt == it->second.begin() ? it->first : "");
            cout << firstentry << spacing(firstentry.length(),maxlens[0]);
            cout << *jt        << spacing(jt->length(),maxlens[1]);
            cout << path       << spacing(path.length(),maxlens[2]);
            cout << status     << spacing(status.length(),maxlens[3]);
            ss1 << nfuncs; ss1a = spacing(ss1.str().length(),maxlens[4]);
            ss2 << ntypes; ss2a = spacing(ss2.str().length(),maxlens[5]);
            cout << ss1.str() << ss1a << ss2.str() << ss2a << nctors << endl;
          }
        }

        if (all_good) cout << endl << "All your backend are belong to us." << endl;
        no_scan = true;
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

        no_scan = true;
      }
    
      else if (command == "capabilities")
      {
        const int maxlen1 = 35;
        const int maxlen2 = 25;

        // Display capability information
        cout << "\nThis is GAMBIT." << endl << endl; 

        
        // Default, list-format output header
        cout << "Capabilities                           Available in (modules/models)  Available in (backends)" << endl;
        cout << "---------------------------------------------------------------------------------------------" << endl;
        
        for (std::set<str>::const_iterator it = capabilities.begin(); it != capabilities.end(); ++it)
        {
          std::set<str> modset, beset;
          str mods, bes, description;

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

          // Print the entry in the table (list format)
          cout << *it << spacing(it->length(),maxlen1) << mods << spacing(mods.length(),maxlen2) << bes << endl;
        }

        no_scan = true;
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
        no_scan = true;
      }

      else 
      {
        // If we aren't just checking what stuff is registered, we could end up running a scan, or needing the descriptions of things.
        // Therefore we must construct the description databases and make sure there are no naming conflicts etc.
        check_databases();

        //Iterate over all modules to see if command matches one of them
        for (std::set<str>::const_iterator it = modules.begin(); it != modules.end(); ++it)
        {
          if (command == *it)
          {
            no_scan = true;
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
            break;
          }
        }
    
        //Iterate over all backends to see if command matches one of them
        for (std::map<str, std::set<str> >::const_iterator it = backend_versions.begin(); it != backend_versions.end(); ++it)
        {
          if (command == it->first)
          {
            no_scan = true;
            cout << "\nThis is GAMBIT." << endl << endl; 
            cout << "Information for backend " << it->first << "." << endl << endl;

            std::set<str> versions;
            std::map<str,str> paths;
            std::map<str,str> status;
            std::map<str,fVec> befunctors;
    
            for (fVec::const_iterator jt = backendFunctorList.begin(); jt != backendFunctorList.end(); ++jt)
            {
              if ((*jt)->origin() == it->first)         // Backend matches
              {
                str version = (*jt)->version();        // Retrieve the version
                auto new_v = versions.insert(version); // Attempt to add this version to the set 
                if (new_v.second)                      // This version was not in the version set yet
                {
                  paths[version]  = backendData->paths.at(it->first+version); // Save the path of this backend
                  status[version] = backendData->works.at(it->first+version) ? "present" : "absent/broken";  // Save the status of this backend 
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

            break;
          }
        }
    
        //Iterate over all models to see if command matches one of them
        for (pmfVec::const_iterator it = primaryModelFunctorList.begin(); it != primaryModelFunctorList.end(); ++it)
        {
          str model = (*it)->origin();
          if (command == model)
          {
            no_scan = true;
            cout << "\nThis is GAMBIT." << endl << endl; 
            cout << "Information for model " << model << "." << endl << endl;;
          
            // Retrieve info on this capability from the database file
            model_info mod = get_model_info(model); 

            // Need copies of lineage and descendant vectors with self-reference removed
            std::vector<str> lin_X = mod.lineage;
            std::vector<str> des_X = mod.descendants;
          
            // Erase element matching name
            lin_X.erase(std::remove(lin_X.begin(), lin_X.end(), mod.name), lin_X.end());
            des_X.erase(std::remove(des_X.begin(), des_X.end(), mod.name), des_X.end());

            cout << "  Parent Model: " << mod.parent << endl;
            cout << "  Number of parameters: " << mod.nparams << endl;
            cout << "  Parameter names:" << mod.parameters << endl;
            cout << "  'Ancestor' models:" << lin_X << endl;
            cout << "  'Descendant' models:" << des_X << endl;
            cout << "  Description: " << endl << mod.description << endl;

            break;
          }
        }  

        //Iterate over all capabilities to see if command matches one of them
        for (std::set<str>::const_iterator it = capabilities.begin(); it != capabilities.end(); ++it)
        {
          if (command == *it)
          {
            no_scan = true;
            cout << "\nThis is GAMBIT." << endl << endl; 
            cout << "Information for capability " << *it << "." << endl << endl;

            // Retrieve info on this capability from the database file
            capability_info cap = get_capability_info(*it); 

            cout << "  Available in modules: " << cap.modset << endl;
            cout << "  Available in backends:" << cap.beset << endl;
            cout << "  Description: " << endl << cap.description << endl;
            ///TODO Hmm need to get the type information still...
            // available from (type, module/backend, function name)

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
      }
   
      // Check if some command or other was run and we should stop.
      if (no_scan) 
      {
        cout << endl;
        logger().disable();
        core_error().silent_forced_throw();
      }

      // If we haven't yet, process the command line options
      // (this may be done differently in one of the non-standard run modes, though if it
      //  is then gambit should probably stop running before we get to here...)
      if (not processed_options) 
      {
        filename = process_primary_options(argc,argv);
        // Check if we indeed received a valid filename (needs -f option now)
        if( not found_inifile)
        {
          // Ok then, report an unrecognised command and bail
          cout<<"Unrecognised command received!"<<endl;
          bail();
        }
      }
      else 
      {
        cout<<"Command line options have already been processed in a special run mode... GAMBIT should not reach this point. Aborting..."<<endl;
        logger().disable();
        core_error().silent_forced_throw();
      }    
    
      return filename;
    
    }

}
