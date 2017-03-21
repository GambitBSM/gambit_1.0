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

  /// The likelihood container plugin
  like_ptr LogLike;

  /// MPI data
  unsigned int numtasks;
  unsigned int rank;

  /// The reader object in use for the scan
  Gambit::Printers::BaseBaseReader* reader;

  /// The main postprocessing driver object
  PPDriver driver;
 
  /// Options for PPDriver;
  PPOptions settings;

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
    settings.data_labels = reader->get_all_labels();

    // Set up other options for the plugin
    settings.update_interval = get_inifile_value<std::size_t>("update_interval", 1000);
    settings.add_to_logl = get_inifile_value<std::vector<std::string>>("add_to_like", std::vector<std::string>());
    settings.subtract_from_logl = get_inifile_value<std::vector<std::string>>("subtract_from_like", std::vector<std::string>());
    settings.reweighted_loglike_name = get_inifile_value<std::string>("reweighted_like");

    settings.renaming_scheme = get_inifile_value<std::map<std::string,std::string>>("rename", 
                          std::map<std::string,std::string>());

    settings.cut_less_than = get_inifile_value<std::map<std::string,double>>("cut_less_than", 
                          std::map<std::string,double>());

    settings.cut_greater_than = get_inifile_value<std::map<std::string,double>>("cut_greater_than", 
                          std::map<std::string,double>());
   
    settings.discard_points_outside_cuts = get_inifile_value<bool>("discard_points_outside_cuts", false);

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
    // Transfer MPI variables to PPOptions
    settings.rank = rank;
    settings.numtasks = numtasks;

    // Finally, there is the 'Purpose' value of the likelihood container. This may well clash
    // with the old name used in the input file, so better check for this and make the user
    // change their choice if so.
    settings.logl_purpose_name = get_inifile_value<std::string>("like");
    settings.discard_old_logl = get_inifile_value<bool>("permit_discard_old_likes",false);

    // Retrieve the external likelihood calculator
    LogLike = get_purpose(settings.logl_purpose_name);

    // Do not allow GAMBIT's own likelihood calculator to directly shut down the scan.
    // This scanner plugin will assume responsibility for this process, triggered externally by
    // the 'plugin_info.early_shutdown_in_progress()' function.
    LogLike->disable_external_shutdown();

    // Path to save resume files
    std::string defpath = get_inifile_value<std::string>("default_output_path");
    settings.root = Utils::ensure_path_exists(defpath+"/postprocessor/resume");
    if(rank==0) std::cout << "root: " << settings.root << std::endl;
  }

  /// Main run function
  int plugin_main()
  {
    if(rank==0) std::cout << "Running 'postprocessor' plugin for ScannerBit." << std::endl;

    /// @{ Determine what data needs to be copied from the input file to the new output dataset
    // Get labels of functors listed for printing from the primary printer.
    settings.all_params = get_printer().get_stream()->getPrintList();
    // There are some extra items that will also be automatically printed in all scans,
    // so we need to avoid copying those:
    settings.all_params.insert("unitCubeParameters"); // It would be better to keep the originals here, but currently cannot turn off the printing from within like_ptr.
    settings.all_params.insert("MPIrank"); // These should be re-printed the same as they were anyway
    settings.all_params.insert("pointID");
    settings.all_params.insert(settings.logl_purpose_name); // If there is a name clash and the run was not aborted, we are to discard the old data under this name.
    settings.all_params.insert(settings.reweighted_loglike_name); //   "  " 

    // Construct the main driver object
    driver = PPDriver(reader,get_printer().get_stream(),LogLike,settings);

    // Check that the supplied settings make sense
    driver.check_settings();

    // Points which have already been processed in a previous (aborted) run
    ChunkSet done_chunks; // Empty by default

    // Ask the printer if this is a resumed run or not, and check that the necessary files exist if so.
    bool resume = get_printer().resume_mode();
    if (resume) // If resuming, get the required resume data
    {
      done_chunks = get_done_points(settings.root);
    }

    //MAIN LOOP HERE
    driver.run_main_loop(done_chunks);

    std::cout << "Done! (rank "<<rank<<")" << std::endl;
    return 0;
  }
}
