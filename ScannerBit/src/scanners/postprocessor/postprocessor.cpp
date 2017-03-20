//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  "Postprocessing" scanner plugin. Reads points
///  from old scan output and re-runs a likelihood
///  containing plugin for those same point.
///  Can perform some simple addition/subtraction
///  operations of likelihood components from
///  the new plugin output.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
//
///  \author Ben Farmer
///          (ben.farmer@gmail.com)
///  \date 2016 Mar, 2017 Jan, Feb, Mar
///
///  *********************************************

#ifdef WITH_MPI
#include "mpi.h" // Not using the GAMBIT MPI wrappers since they are overkill for this scanner.
#endif

#include <vector>
#include <string>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <sstream>

// Boost
#include <boost/preprocessor.hpp>
#include "gambit/Utils/boost_fallbacks.hpp"
#include <boost/preprocessor/seq/for_each.hpp>

// GAMBIT
#include "gambit/ScannerBit/scanners/postprocessor/postprocessor.hpp"
#include "gambit/ScannerBit/objective_plugin.hpp"
#include "gambit/ScannerBit/scanner_plugin.hpp"
#include "gambit/Utils/util_functions.hpp"
#include "gambit/Utils/new_mpi_datatypes.hpp"


using namespace Gambit;
using namespace Gambit::PostProcessor;

// Forward declare this template specialisation as extern so that we use the definition compiled into baseprinter.cpp
extern template std::size_t Gambit::Printers::getTypeID<double>();

// The reweigher Scanner plugin
scanner_plugin(postprocessor, version(1, 0, 0))
{
  reqd_inifile_entries("like","reader");

  /// Labels of all output datasets
  std::set<std::string> data_labels;

  /// Labels of output datasets to be copied
  std::set<std::string> data_labels_copy;

  /// List of likelihoods in old output to be added to the newly computed likelihood
  std::vector<std::string> add_to_logl;

  /// List of likelihoods in old output to be subtracted from the newly computed likelihood
  std::vector<std::string> subtract_from_logl;

  /// The likelihood container plugin
  like_ptr LogLike;

  /// The "Purpose" string for the likelihood container plugin (will be its printed output name)
  std::string logl_purpose_name;

  /// The label to assign to the results of add_to_like and subtract_from_like operations.
  std::string reweighted_loglike_name;

  /// Allow old likelihood components to be overwritten by newly calculated values?
  bool discard_old_logl;

  /// Path to save resume files
  std::string root;

  /// MPI data
  unsigned int numtasks;
  unsigned int rank;

  /// Map for renaming old datasets in the new output
  /// Keys are "in_label", values are "out_label"
  std::map<std::string,std::string> renaming_scheme;

  /// Cut maps, for selecting only points in the input
  /// datasets which pass certain criteria.
  /// Keys are "in_label", values are the cut boundaries.
  std::map<std::string,double> cut_less_than;
  std::map<std::string,double> cut_greater_than;

  /// Flag to throw away points that don't pass the cuts (rather than copying them un-processed)
  bool discard_points_outside_cuts;

  /// The reader object in use for the scan
  Gambit::Printers::BaseBaseReader* reader;

  /// The main postprocessing driver object
  PPDriver driver;

  // Retrieve an integer from an environment variable
  int getintenv(const std::string& name)
  {
     int x;
     if(const char* env_p = std::getenv(name.c_str()))
     {
       std::stringstream env_s(env_p); 
       env_s >> x;  
       if (!env_s) 
       {      
          std::ostringstream err;
          err << "Tried to retrieve value of environment variable "<<name<<" as an integer, but conversion failed! String retrieved was '"<<env_s.str()<<"'";
          scan_error().raise(LOCAL_INFO,err.str());
       }
     }
     else
     {
       std::ostringstream err;
       err << "Tried to retrieve value of environment variable "<<name<<" as an integer, but it does not seem to be defined!";
       scan_error().raise(LOCAL_INFO,err.str());
     }
     return x;
  }
 
  /// The constructor to run when the plugin is loaded.
  plugin_constructor
  {
    int s_numtasks;
    int s_rank;
    
    // Get MPI data. No communication is needed, we just need to know how to
    // split up the workload. Just a straight division among all processes is
    // used, nothing fancy.    
#ifdef WITH_MPI
    MPI_Comm_size(MPI_COMM_WORLD, &s_numtasks); // MPI requires unsigned ints here, so we'll just convert afterwards
    MPI_Comm_rank(MPI_COMM_WORLD, &s_rank);
#else
    s_numtasks = 1;
    s_rank = 0;
#endif
    numtasks = s_numtasks;
    rank = s_rank;

    if(rank==0) std::cout << "Initialising 'postprocessor' plugin for ScannerBit..." << std::endl;

    // Get options for setting up the reader (these live in the inifile under:
    // Scanners:
    //  scanners:
    //    scannername:
    //      reader 
    Gambit::Options reader_options = get_inifile_node("reader");

    // Initialise reader object
    get_printer().new_reader("old_points",reader_options);

    // Retrieve the reader object
    reader = get_printer().get_reader("old_points");

    // Get names of all the output data labels
    data_labels = reader->get_all_labels();

    // Set up other options for the plugin
    update_interval = get_inifile_value<std::size_t>("update_interval", 1000);
    add_to_logl = get_inifile_value<std::vector<std::string>>("add_to_like", std::vector<std::string>());
    subtract_from_logl = get_inifile_value<std::vector<std::string>>("subtract_from_like", std::vector<std::string>());
    reweighted_loglike_name = get_inifile_value<std::string>("reweighted_like");

    renaming_scheme = get_inifile_value<std::map<std::string,std::string>>("rename", 
                          std::map<std::string,std::string>());

    cut_less_than = get_inifile_value<std::map<std::string,double>>("cut_less_than", 
                          std::map<std::string,double>());

    cut_greater_than = get_inifile_value<std::map<std::string,double>>("cut_greater_than", 
                          std::map<std::string,double>());
   
    discard_points_outside_cuts = get_inifile_value<bool>("discard_points_outside_cuts", false);

    // Use virtual rank system?
    if(get_inifile_value<bool>("use_virtual_rank",false))
    {
        #ifdef WITH_MPI
        if(numtasks>1)
        {
          std::ostringstream err;
          err << "You have set the 'use_virtual_rank' option for the postprocessor scanner plugin to 'true', which will allow the plugin to act as if it is part of an MPI ensemble when it really isn't, however you are also running this task in an MPI batch with size > 1! You cannot use the virtual rank system at the same time as running a real MPI job! Please choose one configuration or the other and rerun the job.";
          scan_error().raise(LOCAL_INFO,err.str());
        }
        #endif
        rank     = getintenv("RANK");
        numtasks = getintenv("SIZE");
        if(rank>=numtasks)
        {
          std::ostringstream err;
          err << "Environment variable RANK was larger than permitted by SIZE ("<<numtasks<<">="<<rank<<") while running postprocessor scanner plugin with 'use_virtual_rank=true' option. This is not a valid MPI configuration, so it is an illegal choice of virtual configuration.";
          scan_error().raise(LOCAL_INFO,err.str());
        }
    }

    // Finally, there is the 'Purpose' value of the likelihood container. This may well clash
    // with the old name used in the input file, so better check for this and make the user
    // change their choice if so.
    logl_purpose_name = get_inifile_value<std::string>("like");
    discard_old_logl = get_inifile_value<bool>("permit_discard_old_likes",false);
    if(not discard_old_logl)
    {
       if(std::find(data_labels.begin(), data_labels.end(), logl_purpose_name)
            != data_labels.end())
       {
          std::ostringstream err;
          err << "Error starting postprocessing run! The 'purpose' name selected for the likelihood to be computed ('"<<logl_purpose_name<<"') collides with an entry in the chosen input data. Please either change the name given in the scanner option 'like', or set 'permit_discard_old_likes' to 'true' to allow the old data to be replaced in the new output."; 
          scan_error().raise(LOCAL_INFO,err.str());
       }
       if(std::find(data_labels.begin(), data_labels.end(), reweighted_loglike_name)
            != data_labels.end())
       {
          std::ostringstream err;
          err << "Error starting postprocessing run! The label name selected for the result of likelihood weighting ('"<<reweighted_loglike_name<<"') collides with an entry in the chosen input data. Please either change the name given in the scanner option 'reweighted_like', or set 'permit_discard_old_likes' to 'true' to allow the old data to be replaced in the new output."; 
          scan_error().raise(LOCAL_INFO,err.str());
       }
    }


    // Retrieve the external likelihood calculator
    LogLike = get_purpose(logl_purpose_name);

    // Do not allow GAMBIT's own likelihood calculator to directly shut down the scan.
    // This scanner plugin will assume responsibility for this process, triggered externally by
    // the 'plugin_info.early_shutdown_in_progress()' function.
    LogLike->disable_external_shutdown();

    // Path to save resume files
    std::string defpath = get_inifile_value<std::string>("default_output_path");
    root = Utils::ensure_path_exists(defpath+"/postprocessor/resume");
    if(rank==0) std::cout << "root: " << root << std::endl;

    // Construct the main driver object
    driver = PPDriver(reader,LogLike,update_interval);
  }

  /// Main run function
  int plugin_main()
  {
    if(rank==0) std::cout << "Running 'postprocessor' plugin for ScannerBit." << std::endl;

    /// @{ Determine what data needs to be copied from the input file to the new output dataset
    // Get labels of functors listed for printing from the primary printer.
    std::set<std::string> all_params = get_printer().get_stream()->getPrintList();
    // There are some extra items that will also be automatically printed in all scans,
    // so we need to avoid copying those:
    all_params.insert("unitCubeParameters"); // It would be better to keep the originals here, but currently cannot turn off the printing from within like_ptr.
    all_params.insert("MPIrank"); // These should be re-printed the same as they were anyway
    all_params.insert("pointID");
    all_params.insert(logl_purpose_name); // If there is a name clash and the run was not aborted, we are to discard the old data under this name.
    all_params.insert(reweighted_loglike_name); //   "  " 
    std::set<std::string> new_params = all_params; // Parameters not present in the input file

    /// Check if any of the output names selected in the renaming scheme are already claimed by functor output etc.
    /// Also check if the requested input label actually exists in the input dataset
    /// And check if the selected output name clashes with another input name that isn't selected for renaming
    for(std::map<std::string,std::string>::iterator it = renaming_scheme.begin(); it!=renaming_scheme.end(); ++it)
    {
       std::string in_label = it->first;
       std::string out_label = it->second;

       // Make sure input label actually exists
       if(std::find(data_labels.begin(), data_labels.end(), in_label) 
           == data_labels.end())
       {
          //Whoops, could not find this label in the input data
          std::ostringstream err;
          err << "Could not find data labelled '"<<in_label<<"' in the input dataset for postprocessing! In your master YAML file you have requested this data to be relabelled to '"<<out_label<<"', however it could not be found under the specified input label.";
          scan_error().raise(LOCAL_INFO,err.str());
       }

       // Make sure chosen output name is not already claimed by the printer
       if(std::find(all_params.begin(), all_params.end(), out_label) 
           != all_params.end())
       {
          //Whoops, name already in use by something else!
          std::ostringstream err;
          err << "Cannot rename dataset '"<<in_label<<"' to '"<<out_label<<"'! The requested output label has already been claimed by some other component in the scan. Please choose a different output label for this dataset in the master YAML file, or remove it from the 'rename' options for the postprocessor scanner plugin";
          scan_error().raise(LOCAL_INFO,err.str());
       }

       // Make sure chosen output name doesn't clash with an un-renamed item to be copied
       std::set<std::string>::iterator jt = std::find(data_labels.begin(), data_labels.end(), out_label);
       if(jt != data_labels.end())
       { 
          // Potential clash; check if the name is going to be changed
          std::map<std::string,std::string>::iterator kt = renaming_scheme.find(*jt);
          if(kt == renaming_scheme.end())
          {
             // Not getting renamed! Error
             std::ostringstream err;
             err << "Cannot rename dataset '"<<in_label<<"' to '"<<out_label<<"'! The requested output label clashes with an item in the input dataset (which isn't getting renamed). Please choose a different output label for this dataset in the master YAML file, remove it from the 'rename' options for the postprocessor scanner plugin, or request for the conflicting input label to be renamed.";
             scan_error().raise(LOCAL_INFO,err.str());
          }
          // Could still be a problem if the renamed name clashes, but we will check for that separately
       }

       // Make sure chosen output name doesn't clash with another renamed name
       for(std::map<std::string,std::string>::iterator jt = renaming_scheme.begin();
              jt!=renaming_scheme.end(); ++jt)
       {
          if((jt->second==it->second) and (jt->first!=it->first))
          {
             // If the out_labels match (and we aren't just clashing with ourselves)
             // Then this is forbidden
             std::ostringstream err;
             err << "Cannot rename dataset '"<<in_label<<"' to '"<<out_label<<"'! The requested output label has already been claimed by some another item in the renaming scheme (you requested '"<<jt->first<<"' to also be renamed to '"<<jt->second<<"'). Please choose a different output label for one of these datasets in the master YAML file, or remove one of them from the 'rename' options for the postprocessor scanner plugin";
             scan_error().raise(LOCAL_INFO,err.str());
          }
       }

       // Make sure the user isn't trying to rename a protected name (MPIrank, pointID)
       if(in_label=="MPIrank" or in_label=="pointID")
       {
          std::ostringstream err;
             err << "Cannot rename dataset '"<<in_label<<"' to '"<<out_label<<"'! The input dataset has a special purpose so renaming it is forbidden. Please remove it from the 'rename' options for the postprocessor scanner plugin in your master YAML file.";
          scan_error().raise(LOCAL_INFO,err.str());
       }
    }

    // Check that the cut maps refer to input datasets that actually exist
    for(std::map<std::string,double>::iterator it = cut_less_than.begin(); it!=cut_less_than.end(); ++it)
    {
       std::string in_label = it->first;
       double cut_value = it->second;

       // Make sure input label actually exists
       if(std::find(data_labels.begin(), data_labels.end(), in_label) 
           == data_labels.end())
       {
          //Whoops, could not find this label in the input data
          std::ostringstream err;
          err << "Could not find data labelled '"<<in_label<<"' in the input dataset for postprocessing! In your master YAML file you have requested to only postprocess points satisfying the criteria '"<<in_label<<"' <= "<<cut_value<<", however the requested dataset for cutting could not be found under the specified input label. Please fix the label or remove this entry from the 'cut_less_than' list.";
          scan_error().raise(LOCAL_INFO,err.str());
       }
        
       // Make sure it has type 'double'
       if(reader->get_type(in_label) != Printers::getTypeID<double>())
       {
          std::ostringstream err;
          err << "Type of input dataset '"<<in_label<<"' is not 'double'! In your master YAML file you have requested to only postprocess points satisfying the criteria '"<<in_label<<"' <= "<<cut_value<<", however the requested dataset for cutting cannot be retrieved as type 'double'. Currently cuts can only be applied to datasets stored as doubles, sorry! Please remove this entry from the 'cut_less_than' list.";
          scan_error().raise(LOCAL_INFO,err.str());
       }
    }
    for(std::map<std::string,double>::iterator it = cut_greater_than.begin(); it!=cut_greater_than.end(); ++it)
    {
       std::string in_label = it->first;
       double cut_value = it->second;
    
       // Make sure input label actually exists
       if(std::find(data_labels.begin(), data_labels.end(), in_label) 
           == data_labels.end())
       {
          //Whoops, could not find this label in the input data
          std::ostringstream err;
          err << "Could not find data labelled '"<<in_label<<"' in the input dataset for postprocessing! In your master YAML file you have requested to only postprocess points satisfying the criteria '"<<in_label<<"' >= "<<cut_value<<", however the requested dataset for cutting could not be found under the specified input label. Please fix the label or remove this entry from the 'cut_greater_than' list.";
          scan_error().raise(LOCAL_INFO,err.str());
       }
 
       // Make sure it has type 'double'
       if(reader->get_type(in_label) != Printers::getTypeID<double>())
       {
          std::ostringstream err;
          err << "Type of input dataset '"<<in_label<<"' is not 'double'! In your master YAML file you have requested to only postprocess points satisfying the criteria '"<<in_label<<"' <= "<<cut_value<<", however the requested dataset for cutting cannot be retrieved as type 'double'. Currently cuts can only be applied to datasets stored as doubles, sorry! Please remove this entry from the 'cut_greater_than' list.";
          scan_error().raise(LOCAL_INFO,err.str());
       }
   }


    // Check what data is to be copied and what is to be recomputed
    if(rank==0) std::cout << "Determining which data is to be copied from input file to new output file, and which will be recomputed..." <<std::endl;
    if(rank==0) std::cout << " Datasets found in input file: " << std::endl;
    for(auto it = data_labels.begin(); it!=data_labels.end(); ++it)
    {
       // Check if any parameters we plan to copy have already been registered by the
       // printer system.
       // This is actually a little tricky, since names of parameters can be modified
       // in the output depending on what printer was used. So far we have kept a certain
       // consistency that can be exploited, but it isn't enforced. Should note this somewhere
       // in the printer documentation.
       // For example, when printing ModelParameters, they have their actual parameter names
       // appended and they are output as separate datasets/columns. Likewise for vector
       // components. But this appending rule is so far consistent, so I think we can just
       // check that no prefix substring of the proposed copy has already been registered.
       // Not sure if this has a danger of observable names just by accident being prefixes of
       // some other name?
       bool is_new = true;
       for(auto jt = all_params.begin(); jt!=all_params.end(); ++jt)
       {
          if( ( (*it)==(*jt) )
              or Gambit::Utils::startsWith(*it,(*jt)+":")
              or Gambit::Utils::startsWith(*it,(*jt)+"[")
              or Gambit::Utils::startsWith(*it,(*jt)+"{")
              or Gambit::Utils::startsWith(*it,(*jt)+"%")
              or Gambit::Utils::startsWith(*it,(*jt)+"#")
            ) // if not [input data label] starts with [existing parameter] (plus append seperator character, for extra info like parameter name or index)
          {
             // Then it is not new. Not allowed to copy this, the likelihood container is already printing it anew.
             new_params.erase(*jt);
             is_new = false;
             break;
          }
       }

       if(is_new)
       {
          data_labels_copy.insert(*it); // Not otherwise printed; schedule for copying
          if(rank==0) std::cout << "   copy     : "<< (*it) <<std::endl;
          // Check if it is getting relabelled
          std::map<std::string,std::string>::iterator jt = renaming_scheme.find(*it);
          if(jt != renaming_scheme.end())
          {
             // Yep, getting relabelled
             if(rank==0) std::cout << "     to --> : "<< jt->second <<std::endl;
          }
       }
       else
       {
          if(rank==0) std::cout << "   recompute: "<< (*it) <<std::endl;
          // Check if it is getting relabelled
          std::map<std::string,std::string>::iterator jt = renaming_scheme.find(*it);
          if(jt != renaming_scheme.end())
          {
             // Yep, getting relabelled
             data_labels_copy.insert(*it); // Allowed to copy this after all since the name will be changed
             if(rank==0) 
             {
                std::cout << "     with old data copied"<<std::endl;
                std::cout << "     to --> : "<< jt->second <<std::endl;
             }
          }
       }
       // Check if a cut is being applied on this input dataset
       if(rank==0) 
       {
          std::map<std::string,double>::iterator jt = cut_less_than.find(*it);
          if(jt != cut_less_than.end())
          {
                std::cout << "     with cut <= "<< jt->second <<std::endl;
          }
          std::map<std::string,double>::iterator kt = cut_greater_than.find(*it);
          if(kt != cut_greater_than.end())
          {
                std::cout << "     with cut >= "<< kt->second <<std::endl;
          }
       }
    }
    // Might as well also list what new stuff is listed for creation
    if(rank==0)
    {
      std::cout << " New datasets to be added: " << std::endl;
      for(auto it = new_params.begin(); it!=new_params.end(); ++it)
      {
         std::cout << "   " << *it << std::endl;
      }
    }
    if(rank==0) std::cout << "Copy analysis complete." <<std::endl;
    /// @}


    /// Check that we aren't accidentally throwing away any old likelihood components that we might want to keep.
    if(not discard_old_logl)
    {
       // Check if any of the likelihood components being added or subtracted from the likelihood
       // are going to be replaced in the new output. User must set 'permit_discard_old_likes" to explictly allow this.
       for(auto it=add_to_logl.begin(); it!=add_to_logl.end(); ++it)
       {
          if(std::find(all_params.begin(), all_params.end(), *it)
               != all_params.end())
          {
             std::ostringstream err;
             err << "Error starting postprocessing run! One of the data entries listed in the option 'add_to_like' is scheduled to be recalculated during postprocessing ("<<*it<<"). This is permitted; the old value will be added to 'like' and then discarded and replaced by the new value, however you must explicitly permit this to occur by setting 'permit_discard_old_likes' to 'true'.";
             scan_error().raise(LOCAL_INFO,err.str());
          }
       }

       for(auto it=subtract_from_logl.begin(); it!=subtract_from_logl.end(); ++it)
       {
          if(std::find(all_params.begin(), all_params.end(), *it)
               != all_params.end())
          {
             std::ostringstream err;
             err << "Error starting postprocessing run! One of the data entries listed in the option 'subtract_from_like' is scheduled to be recalculated during postprocessing ("<<*it<<"). This is permitted; the old value will be subtracted from 'like' and then discarded and replaced by the new value, however you must explicitly permit this to occur by setting 'permit_discard_old_likes' to 'true'.";
             scan_error().raise(LOCAL_INFO,err.str());
          }
         
       }
    }

    // Points which have already been processed in a previous (aborted) run
    ChunkSet done_chunks; // Empty by default

    // Ask the printer if this is a resumed run or not, and check that the necessary files exist if so.
    bool resume = get_printer().resume_mode();

    // If resuming, get the required resume data
    if (resume)
    {
      done_chunks = get_done_points(root);
    }

    //MAIN LOOP HERE
    driver.run_main_loop(done_chunks);

    std::cout << "Done! (rank "<<rank<<")" << std::endl;
    return 0;
  }
}
