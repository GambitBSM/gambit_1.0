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
///  \date 2016 Mar, 2017 Jan, Feb
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
#include "gambit/ScannerBit/objective_plugin.hpp"
#include "gambit/ScannerBit/scanner_plugin.hpp"
#include "gambit/Utils/model_parameters.hpp"
#include "gambit/Utils/util_functions.hpp"
#include "gambit/Utils/new_mpi_datatypes.hpp"

using namespace Gambit;
using Gambit::Printers::PPIDpair;

// Forward declare this template specialisation as extern so that we use the definition compiled into baseprinter.cpp
extern template std::size_t Gambit::Printers::getTypeID<double>();

/// Struct to describe start and end indices for a chunk of data
struct Chunk
{
  std::size_t start; // Index of first point in this chunk
  std::size_t end;   // Index of last point in this chunk
  std::size_t eff_length; // Number of points in the chunk that are not marked to be skipped
  Chunk(std::size_t s, std::size_t e)
   : start(s)
   , end(e)
   , eff_length(0)
  {}
  Chunk()
   : start(0)
   , end(0)
   , eff_length(0)
  {}
  // Function to check if a given dataset index was processed in this chunk
  bool iContain(std::size_t index) const
  {
    return (start<=index) and (index<=end);
  }
  // Function to compute length of this chunk
  std::size_t length() const
  {
    return end - start + 1;
  }
};

// To use Chunk in std::unordered_map/set, need to provide hashing and equality functions
struct ChunkHash{ 
  std::size_t operator()(const Chunk &key) const { 
    return std::hash<std::size_t>()(key.start) ^ std::hash<std::size_t>()(key.end);
  }
};

struct ChunkEqual{
  bool operator()(const Chunk &lhs, const Chunk &rhs) const {
    return (lhs.start == rhs.start) and (lhs.end == rhs.end);
  }
};

typedef std::unordered_set<Chunk,ChunkHash,ChunkEqual> ChunkSet;


// The reweigher Scanner plugin
scanner_plugin(postprocessor, version(1, 0, 0))
{
  reqd_inifile_entries("like","reader");

  /// Number of iterations between progress reports. '0' means no updates
  std::size_t update_interval;

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

  /// Models required by the scan
  std::map<std::string,std::vector<std::string>> req_models;

  /// Map to retrieve the "model::parameter" version of the parameter name
  std::map<std::string,std::map<std::string,std::string>> longname;

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
  }

  /// @{ Helper functions for performing resume related tasks

  /// Answer queries as to whether a given dataset index has been postprocessed in a previous run or not
  bool point_done(const ChunkSet done_chunks, size_t index)
  {
    bool answer = false;
    for(ChunkSet::const_iterator it=done_chunks.begin();
         it!=done_chunks.end(); ++it)
    {
       if(it->iContain(index))
       {
          answer = true;
          break;
       }
    }
    return answer;
  }
  
  // Extract model parameters from the reader
  bool get_ModelParameters(std::unordered_map<std::string, double>& outputMap)
  {
     bool valid_modelparams = true;
     for(auto it=req_models.begin(); it!=req_models.end(); ++it)
     {
     
       ModelParameters modelparameters;
       std::string model = it->first;
       bool is_valid = reader->retrieve(modelparameters, model);
       if(not is_valid) 
       {
          valid_modelparams = false;
          //std::cout << "ModelParameters marked 'invalid' for model "<<model<<"; point will be skipped." << std::endl;
       }
       /// @{ Debugging; show what was actually retrieved from the output file
       //std::cout << "Retrieved parameters for model '"<<model<<"' at point:" << std::endl;
       //std::cout << " ("<<MPIrank<<", "<<pointID<<")  (rank,pointID)" << std::endl;
       //const std::vector<std::string> names = modelparameters.getKeys();
       //for(std::vector<std::string>::const_iterator
       //    kt = names.begin();
       //    kt!= names.end(); ++kt)
       //{
       //  std::cout << "    " << *kt << " : " << modelparameters[*kt] << std::endl;
       //}
       /// @}
     
       // Check that all the required parameters were retrieved
       // Could actually do this in the constructor for the scanner plugin, would be better, but a little more complicated. TODO: do this later.
       std::vector<std::string> req_pars = it->second;
       std::vector<std::string> retrieved_pars = modelparameters.getKeys();
       for(auto jt = req_pars.begin(); jt != req_pars.end(); ++jt)
       {
         std::string par = *jt;
         if(std::find(retrieved_pars.begin(), retrieved_pars.end(), par)
             == retrieved_pars.end())
         {
            std::ostringstream err;
            err << "Error! Reader could not retrieve the required paramater '"<<par<<"' for the model '"<<model<<"' from the supplied data file! Please check that this parameter indeed exists in that file." << std::endl;
            scan_error().raise(LOCAL_INFO,err.str());
         }
     
         // If it was found, add it to the return map
         outputMap[ longname[model][par] ] = modelparameters[par];
       }
     }
     return valid_modelparams;
  }

  /// Get 'effective' start and end positions for a processing batch
  /// i.e. simply divides up an integer into the most even parts possible
  /// over a given number of processes
  Chunk get_effective_chunk(const std::size_t total_length, const unsigned int rank, const unsigned int numtasks)
  {
     // Compute which points this process is supposed to process. Divide total
     // by number of MPI tasks.
     unsigned long long my_length = total_length / numtasks;
     unsigned long long r = total_length % numtasks;
     // Offset from beginning for this task assuming equal lengths in each task
     unsigned long long start = my_length * rank;
     // Divide up the remainder amongst the tasks and adjust offsets to account for these
     if(rank<r)
     {
       my_length++;
       start+=rank;
     }
     else
     {
       start+=r;
     }
     unsigned long long end = start + my_length - 1; // Minus 1 for the zero indexing
     return Chunk(start,end);
  }
  
  /// Compute start/end indices for a given rank process, given previous "done_chunk" data.
  Chunk get_my_chunk(const std::size_t dset_length, const ChunkSet done_chunks, const int rank, const int numtasks)
  {
    /// First compute number of points left to process
    std::size_t total_done_length = 0;
    std::size_t left_to_process;
    for(std::size_t i=0; i<dset_length; ++i)
    {
       if(point_done(done_chunks, i)) ++total_done_length;
    }
    left_to_process = dset_length - total_done_length;
  
    // Get 'effective' start/end positions for this rank; i.e. what the start index would be if the 'done' points were removed.
    Chunk eff_chunk = get_effective_chunk(left_to_process, rank, numtasks);
    
    // Convert effective chunk to real dataset indices (i.e. add in the 'skipped' indices)
    std::size_t count = 0;
    Chunk realchunk;
    realchunk.eff_length = eff_chunk.length(); // Record real number of points that will be processed from this chunk
    for(std::size_t i=0; i<dset_length; ++i)
    {
       if(not point_done(done_chunks, i)) 
       {
          if(count==eff_chunk.start){ realchunk.start = i; }
          if(count==eff_chunk.end){ realchunk.end = i; break; } // No more searching needed once chunk end found.
          count++;
       }
    }
    return realchunk;
  }
  
  /// Read through resume data files and reconstruct which chunks of points have already been processed
  ChunkSet get_done_points(const std::string& filebase)
  {
    ChunkSet done_chunks;
   
    // First read collated chunk data from past resumes, and the number of processes used in the last run
    std::string inprev = filebase+"_prev.dat";
    std::ifstream finprev(inprev);
    unsigned int prev_size;
    finprev >> prev_size; 
    Chunk nextchunk;
    while( finprev >> nextchunk.start >> nextchunk.end )
    {
      done_chunks.insert(nextchunk);
    }
  
    // Now read each of the chunk files left by each process during previous run
    for(unsigned int i=0; i<prev_size; ++i)
    {
      std::ostringstream inname;
      inname << filebase << "_" << i << ".dat";
      std::string in = inname.str();
      std::ifstream fin(in);
      fin >> nextchunk.start >> nextchunk.end;
      done_chunks.insert(nextchunk);  
    }
  
    return done_chunks;
  }
  
  /// Write resume data files
  /// These specify which chunks of points have been processed during this run
  void record_done_points(const ChunkSet& done_chunks, const Chunk& mydone, const std::string& filebase, unsigned int rank, unsigned int size)
  {
    if(rank == 0)
    {
      // If we are rank 0, output any old chunks from previous resumes to a special file
      // (deleting it first)
      std::string outprev = filebase+"_prev.dat";
      if( Gambit::Utils::file_exists(outprev) )
      {
        if( remove(outprev.c_str()) != 0 )
        {
          perror( ("Error deleting file "+outprev).c_str() );
          std::ostringstream err;
          err << "Unknown error removing old resume data file '"<<outprev<<"'!"; 
          scan_error().raise(LOCAL_INFO,err.str());
        }
      }
      // else was deleted no problem
      std::ofstream foutprev(outprev); 
      foutprev << size << std::endl;
      for(ChunkSet::const_iterator it=done_chunks.begin();
           it!=done_chunks.end(); ++it)
      {
        foutprev << it->start << " " << it->end << std::endl;
      }
    }
    // Now output what we have done (could overlap with old chunks, but that doesn't really matter)
    std::ostringstream outname;
    outname << filebase << "_" << rank <<".dat";
    std::string out = outname.str();
    if( Gambit::Utils::file_exists(out) )
    {
      if( remove(out.c_str()) != 0 )
      {
        perror( ("Error deleting file "+out).c_str() );
        std::ostringstream err;
        err << "Unknown error removing old resume data file '"<<out<<"'!"; 
        scan_error().raise(LOCAL_INFO,err.str());
      }
    }
    // else was deleted no problem, write new file
    std::ofstream fout(out); 
    fout << mydone.start << " " << mydone.end << std::endl;
  }

  /// @}
   
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

    // Storage for names of models and parameters.
    req_models.clear(); // All the required model+parameter names. Make sure it is empty
    longname.clear(); // Retrieve the "model::parameter" version of the name
  
    // Retrieve parameter and model names
    if(rank==0) std::cout << "Constructing prior plugin for postprocessor" << std::endl;
    std::vector<std::string> keys = LogLike->getPrior().getParameters(); // use to use get_keys() in the objective (prior) plugin;
    //set_dimension(keys.size());
    
    // Pull the keys apart into model-name, parameter-name pairs
    if(rank==0) std::cout << "Number of model parameters to be retrieved from previous output: "<< keys.size() <<std::endl;
    for(auto it=keys.begin(); it!=keys.end(); ++it)
    {
       if(rank==0) std::cout << "   " << *it << std::endl;
       std::vector<std::string> splitkey = Utils::delimiterSplit(*it, "::");
       std::string model = splitkey[0];
       std::string par   = splitkey[1];
       req_models[model].push_back(par);
       longname[model][par] = *it;
    }   


    // Create the unit hypercube
    // We aren't going to use it, but the LogLike calculator
    // requires it anyway.
    int dims = get_dimension();
    std::vector<double> unitcube(dims);

    // Points which have already been processed in a previous (aborted) run
    ChunkSet done_chunks; // Empty by default

    // Ask the printer if this is a resumed run or not, and check that the necessary files exist if so.
    bool resume = get_printer().resume_mode();

    // If resuming, get the required resume data
    if (resume)
    {
      done_chunks = get_done_points(root);
    }

    // Compute which points this process is supposed to process. Divide up
    // by number of MPI tasks.
    unsigned long long total_length = reader->get_dataset_length();
    Chunk mychunk = get_my_chunk(total_length, done_chunks, rank, numtasks);

    // Loop over the old points
    PPIDpair current_point = reader->get_next_point(); // Get first point
    std::size_t loopi = 0; // track true index of input file
    std::size_t ppi = 0; // track number of points actually processed
    if(rank==0) std::cout << "Starting loop over old points ("<<total_length<<" in total)" << std::endl;
    std::cout << "This task (rank "<<rank<<" of "<<numtasks<<"), will process iterations "<<mychunk.start<<" through to "<<mychunk.end<<", excluding any points that may have already been processed as recorded by resume data. This leaves "<<mychunk.eff_length<<" points for this rank to process."<<std::endl;

    std::size_t n_passed = 0; // Number which have passed any user-specified cuts.

    // Disable auto-incrementing of pointID's in the likelihood container. We will set these manually.
    Gambit::Printers::auto_increment() = false;

    bool quit = false; // Flag to abort 'scan' early.
    while(not reader->eoi() and not quit) // while not end of input
    {
      loopi++;

      // Cancel processing of iterations beyoud our assigned range
      if(loopi>mychunk.end)
      {
         std::cout << "Rank "<<rank<<" has reached the end of its batch, stopping iteration." << std::endl;
         break;
      }

      // Skip loop ahead to the batch of points we are assigned to process,
      // and skip any points that are already processed;
      if(loopi<mychunk.start or point_done(done_chunks, loopi))
      {
         current_point = reader->get_next_point();
         continue;
      }

      if((ppi % update_interval) == 0 and ppi!=0)
      {
         // Progress report
         std::cout << "Rank "<<rank<<" has processed "<<ppi<<" of "<<mychunk.eff_length<<" points ("<<100*ppi/mychunk.eff_length<<"\%, with "<<100*n_passed/ppi<<"\% passing all cuts)"<<std::endl;
      }
      ppi++; // Processing is go, update counter. 

      // Data about current point in input file
      unsigned int       MPIrank = current_point.rank;
      unsigned long long pointID = current_point.pointID;

      /// @{ Retrieve the old parameter values from previous output

      // Storage for retrieved parameters
      std::unordered_map<std::string, double> outputMap;

      // Extract the model parameters
      bool valid_modelparams = get_ModelParameters(outputMap);

   
      // Check if valid model parameters were extracted. If not, something may be wrong with the input file, or we could just be at the end of a buffer (e.g. in HDF5 case). Can't tell the difference, so just skip the point and continue.
      if(not valid_modelparams)
      {
         std::cout << "Skipping point "<<loopi<<" as it has no valid ModelParameters" <<std::endl;
         current_point = reader->get_next_point();
         continue;
      }   

      /// @}

      // Determine if model point passes the user-requested cuts
      // This is a little tricky because we don't know the type of the input dataset.
      // For now we will restrict the system so that it only works for datasets with
      // type 'double' (which is most stuff). We check for this earlier, so here we
      // can just assume that the requested datasets have the correct type.
      
      bool cuts_passed = true; // Will be set to false if any cut is failed, or a required entry is invalid
      for(std::map<std::string,double>::iterator it = cut_less_than.begin();
           it!=cut_less_than.end(); ++it)
      {
        if(cuts_passed)
        {
          std::string in_label = it->first;
          double cut_value = it->second;
          double buffer;
          bool valid = reader->retrieve(buffer, in_label);
          if(valid)
          {
             cuts_passed = (buffer <= cut_value);
          }
          else
          {
             cuts_passed = false;
          }
        }
      }

      for(std::map<std::string,double>::iterator it = cut_greater_than.begin();
           it!=cut_greater_than.end(); ++it)
      {
        if(cuts_passed)
        {
          std::string in_label = it->first;
          double cut_value = it->second;
          double buffer;
          bool valid = reader->retrieve(buffer, in_label);
          if(valid)
          {
             cuts_passed = (buffer >= cut_value);
          }
          else
          {
             cuts_passed = false;
          }
        }
      }

      if(cuts_passed) // Else skip new calculations and go straight to copying old results
      {
         n_passed += 1; // Counter for number of points which have passed all the cuts.
         // Before calling the likelihood function, we need to set up the printer to
         // output correctly. The auto-incrementing of pointID's cannot be used,
         // because we need to match the old scan results. So we must set it manually.
         // This is currently a little clunky but it works. Make sure to have turned
         // off auto incrementing (see above).
         // The printer should still print to files split according to the actual rank, this
         // should only change the assigned pointID pair tag. Which should already be
         // properly unambiguous if the original scan was done properly.
         // Note: This might fail for merged datasets from separate runs. Not sure what the solution
         // for that is.
         LogLike->setRank(MPIrank); // For purposes of printing only
         LogLike->setPtID(pointID);

         // Call the likelihood function to compute new component
         // Must use "reweight_prior" as the prior!!
         //double partial_logL = LogLike(unitcube);

         // NEW! We can now feed the unit hypercube and/or transformed parameter map into the likelihood container. ScannerBit should interpret the map values as post-transformation and not apply a prior to those, and ensure that the length of the cube plus number of transformed parameters add up to the total number of parameter.
         double new_logL = LogLike(outputMap); // Here we supply *only* the map; no parameters to transform.

         // Add old likelihood components as requested in the inifile
         double combined_logL = new_logL;
         bool   is_valid;
         for(auto it=add_to_logl.begin(); it!=add_to_logl.end(); ++it)
         {
             std::string old_logl = *it;
             if(std::find(data_labels.begin(), data_labels.end(), old_logl)
                 == data_labels.end())
             {
                std::ostringstream err;
                err << "In the input YAML file, you requested to 'add_to_like' the component '"<<old_logl<<"' from your input data file, however this does not match any of the data labels retrieved from the input data file you specified. Please check the spelling, path, etc. and try again.";
                scan_error().raise(LOCAL_INFO,err.str());
             }
             if(reader->get_type(*it) != Gambit::Printers::getTypeID<double>())
             {
                std::ostringstream err;
                err << "In the input YAML file, you requested 'add_to_like' component '"<<old_logl<<"' from your input data file, however this data cannot be retrieved as type 'double', therefore it cannot be used as a likelihood component. Please enter a different data label and try again.";
                scan_error().raise(LOCAL_INFO,err.str());
             }
             
             double old_logl_value;
             is_valid = reader->retrieve(old_logl_value, old_logl);
             if(is_valid)
             {
                // Combine with the new logL component
                combined_logL += old_logl_value;
             }
             // Else old likelihood value didn't exist for this point; cannot combine with non-existent likelihood, so don't print the reweighted value.
         }

         // Now do the same thing for the components we want to subtract.
         for(auto it=subtract_from_logl.begin(); it!=subtract_from_logl.end(); ++it)
         {
             std::string old_logl = *it;
             if(std::find(data_labels.begin(), data_labels.end(), old_logl)
                 == data_labels.end())
             {
                std::ostringstream err;
                err << "In the input YAML file, you requested to 'subtract_from_like' the component '"<<old_logl<<"' from your input data file, however this does not match any of the data labels retrieved from the input data file you specified. Please check the spelling, path, etc. and try again.";
                scan_error().raise(LOCAL_INFO,err.str());
             }
             if(reader->get_type(*it) != Gambit::Printers::getTypeID<double>())
             {
                std::ostringstream err;
                err << "In the input YAML file, you requested 'subtract_from_like' component '"<<old_logl<<"' from your input data file, however this data cannot be retrieved as type 'double', therefore it cannot be used as a likelihood component. Please enter a different data label and try again.";
                scan_error().raise(LOCAL_INFO,err.str());
             }
             
             double old_logl_value;
             is_valid = reader->retrieve(old_logl_value, old_logl);
             if(is_valid)
             {
                // Combine with the new logL component, subtracting this time
                combined_logL -= old_logl_value;
             }
             // Else old likelihood value didn't exist for this point; cannot combine with non-existent likelihood, so don't print the reweighted value.
         }

         // Output the new reweighted likelihood (if all components were valid)
         if(is_valid) get_printer().get_stream()->print( combined_logL, reweighted_loglike_name, MPIrank, pointID);

         ///  In the future would be nice if observables could be reconstructed from the
         ///  output file, but that is a big job, need to automatically create functors
         ///  for them which provide the capabilities they are supposed to correspond to,
         ///  which is possible since this information is stored in the labels, but
         ///  would take quite a bit of setting up I think...
         ///  Would need the reader to provide virtual functions for retrieving all the
         ///  observable metadata from the output files.
         ///
         ///  UPDATE: TODO: What happens in case of invalid point? Does this copying etc. just get skipped?
         ///  Or do I need to check that the output LogL was valid somehow?
         ///  Answer: Loglike function just returns a default low value in that case, scanner plugins do
         ///  not see the invalid point exceptions, they are caught inside the likelihood container.
      }    
      else if(not discard_points_outside_cuts)
      {
         /// No postprocessing to be done, but we still should copy across the modelparameters 
         /// and point ID data, since the copying routines below assume that these were taken
         /// care of by the likelihood routine, which we never ran.
         get_printer().get_stream()->print(MPIrank, "MPIrank", MPIrank, pointID);
         get_printer().get_stream()->print(pointID, "pointID", MPIrank, pointID);
         // Now the modelparameters
         bool valid_modelparams = true;
         for(auto it=req_models.begin(); it!=req_models.end(); ++it)
         {
           ModelParameters modelparameters;
           std::string model = it->first;
           bool is_valid = reader->retrieve(modelparameters, model);
           if(is_valid) 
           {
              // Use the OutputName set by the reader to preserve the original naming of the modelparameters.
              get_printer().get_stream()->print(modelparameters, modelparameters.getOutputName(), MPIrank, pointID);
           }
         }
      }
 
      /// Copy selected data from input file
      if(not cuts_passed and discard_points_outside_cuts)
      {
         // Don't copy in this case, just discard the old data.
      }
      else
      {
         for(std::set<std::string>::iterator it = data_labels_copy.begin(); it!=data_labels_copy.end(); ++it)
         {
            // Check if this input label has been mapped to a different output label.
            std::string in_label = *it;
            std::map<std::string,std::string>::iterator jt = renaming_scheme.find(in_label);
            if(jt != renaming_scheme.end())
            {
               // Found match! Do the renaming
               std::string out_label = jt->second;
               //std::cout << "Copying data from "<<in_label<<", to output name "<<out_label<<", for point ("<<MPIrank<<", "<<pointID<<")" <<std::endl;
               reader->retrieve_and_print(in_label,out_label,*(get_printer().get_stream()), MPIrank, pointID);
            }
            else
            {
               // No match, keep the old name
               //std::cout << "Copying data from "<<in_label<<" for point ("<<MPIrank<<", "<<pointID<<")" <<std::endl;
               reader->retrieve_and_print(in_label,*(get_printer().get_stream()), MPIrank, pointID);
            }
         }
      }

      // Check whether the calling code wants us to shut down early
      quit = Gambit::Scanner::Plugins::plugin_info.early_shutdown_in_progress();

      if(quit)
      {
         // Need to save data about which points have been processed, so we
         // can resume processing from here.
         std::cout << "Postprocessor (rank "<<rank<<") received quit signal! Aborting run." << std::endl;
      } 
      else
      {
         /// Go to next point
         current_point = reader->get_next_point();
      }
    }
  
    // Check if we finished because of reaching the end of the input    
    if(reader->eoi())
    {
       std::cout << "Postprocessor (rank "<<rank<<") reached the end of the input file! (debug: was this the end of our batch? (loopi="<<loopi<<", mychunk.end="<<mychunk.end<<")"<<std::endl;
    }

    // Write resume data (even if we finished; other processes might not have)
    std::cout<<"Writing resume data (rank "<<rank<<")...."<< std::endl;
    Chunk mydonechunk(mychunk.start,loopi);
    record_done_points(done_chunks, mydonechunk, root, rank, numtasks);
    std::cout << "Done! (rank "<<rank<<")" << std::endl;
    return 0;
  }
}
