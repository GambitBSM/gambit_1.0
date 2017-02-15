//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Toy reweighting sampler to demo functioning
///  of 'reader' classes, which allow data to
///  be read in from previous output.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
//
///  \author Ben Farmer
///          (ben.farmer@gmail.com)
///  \date 2016 Mar
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

#include "gambit/ScannerBit/objective_plugin.hpp"
#include "gambit/ScannerBit/scanner_plugin.hpp"
#include "gambit/Utils/model_parameters.hpp"
#include "gambit/Utils/util_functions.hpp"
#include "gambit/Utils/new_mpi_datatypes.hpp"

using namespace Gambit;
using Gambit::Printers::PPIDpair;

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
scanner_plugin(reweight, version(1, 0, 0))
{
  reqd_inifile_entries("LogLike"); // Purpose name for the likelihood container plugin

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

  /// Path to save resume files
  std::string root;
 
  /// The constructor to run when the plugin is loaded.
  plugin_constructor
  {
     std::cout << "Initialising 'reweight' plugin for ScannerBit..." << std::endl;

    // Get options for setting up the reader (these live in the inifile under:
    // Scanners:
    //  scanners:
    //    scannername:
    //      reader 
    Gambit::Options reader_options = get_inifile_node("reader");
    // Initialise reader object
    get_printer().new_reader("old_points",reader_options);

    // Get names of all the output data labels
    data_labels = get_printer().get_reader("old_points")->get_all_labels();

    // Set up other options for the plugin
    update_interval = get_inifile_value<std::size_t>("update_interval", 1000);
    add_to_logl = get_inifile_value<std::vector<std::string>>("add_to_LogLike", std::vector<std::string>());
    subtract_from_logl = get_inifile_value<std::vector<std::string>>("subtract_from_LogLike", std::vector<std::string>());

    // Finally, there is the 'Purpose' value of the likelihood container. This may well clash
    // with the old name used in the input file, so better check for this and make the user
    // change their choice if so.
    logl_purpose_name = get_inifile_value<std::string>("LogLike");
    bool discard_old_logl = get_inifile_value<bool>("permit_discard_old_LogLike",false);
    if(not discard_old_logl)
    {
       if(std::find(data_labels.begin(), data_labels.end(), logl_purpose_name)
            != data_labels.end())
       {
          std::ostringstream err;
          err << "Error starting postprocessing run! The 'purpose' name selected for the likelihood to be computed ('"<<logl_purpose_name<<"') collides with an entry in the chosen input data. Please either change the name given in the scanner option 'LogLike', or set 'permit_discard_old_LogLike' to 'true' to allow the old data to be replaced in the new output."; 
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
    root = Utils::ensure_path_exists(defpath+"/reweight/resume");
    std::cout << "root: " << root << std::endl;
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
    std::cout << "Running 'reweight' plugin for ScannerBit." << std::endl;

    unsigned int numtasks;
    unsigned int rank;
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

    /// @{ Determine what data needs to be copied from the input file to the new output dataset
    // Get labels of functors listed for printing from the primary printer.
    std::set<std::string> all_params = get_printer().get_stream()->getPrintList();
    // There are some extra items that will also be automatically printed in all scans,
    // so we need to avoid copying those:
    all_params.insert("unitCubeParameters"); // It would be better to keep the originals here, but currently cannot turn off the printing from within like_ptr.
    all_params.insert("MPIrank"); // These should be re-printed the same as they were anyway
    all_params.insert("pointID");
    all_params.insert(logl_purpose_name); // If there is a name clash and the run was not aborted, we are to discard the old data under this name.
    std::set<std::string> new_params = all_params; // Parameters not present in the input file

    std::cout << "Determining which data is to be copied from input file to new output file, and which will be recomputed..." <<std::endl;
    std::cout << " Datasets found in input file: " << std::endl;
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
          std::cout << "   copy     : "<< (*it) <<std::endl;
       }
       else
       {
          std::cout << "   recompute: "<< (*it) <<std::endl;
       }
    }
    // Might as well also list what new stuff is listed for creation
    std::cout << " New datasets to be added: " << std::endl;
    for(auto it = new_params.begin(); it!=new_params.end(); ++it)
    {
       std::cout << "   " << *it << std::endl;
    }

    std::cout << "Copy analysis complete." <<std::endl;
    /// @}


    // Storage for names of models and parameters.
    std::map<std::string,std::vector<std::string>> req_models; // All the required model+parameter names
    std::map<std::string,std::map<std::string,std::string>> longname; // Retrieve the "model::parameter" version of the name
  
    // Retrieve parameter and model names
    std::cout << "Constructing prior plugin for reweight scanner" << std::endl;
    std::vector<std::string> keys = LogLike->getPrior().getParameters(); // use to use get_keys() in the objective (prior) plugin;
    //set_dimension(keys.size());
    
    // Pull the keys apart into model-name, parameter-name pairs
    std::cout << "Number of parameters to be retrieved from previous output: "<< keys.size() <<std::endl;
    for(auto it=keys.begin(); it!=keys.end(); ++it)
    {
       std::cout << "   " << *it << std::endl;
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

    // Retrieve the reader object
    Printers::BaseBaseReader* reader = get_printer().get_reader("old_points");
    unsigned long long total_length = reader->get_dataset_length();

    // Compute which points this process is supposed to process. Divide up
    // by number of MPI tasks.
    Chunk mychunk = get_my_chunk(total_length, done_chunks, rank, numtasks);

    // Loop over the old points
    PPIDpair current_point = reader->get_next_point(); // Get first point
    std::size_t loopi = 0; // track true index of input file
    std::size_t ppi = 0; // track number of points actually processed
    std::cout << "Starting loop over old points ("<<total_length<<" in total)" << std::endl;
    std::cout << "This task (rank "<<rank<<" of "<<numtasks<<"), will process iterations "<<mychunk.start<<" through to "<<mychunk.end<<", excluding any points that may have already been processed as recorded by resume data." <<std::endl;
    std::cout << "This leaves "<<mychunk.eff_length<<" points for this rank to process."<<std::endl;

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

      if((ppi % update_interval) == 0)
      {
         // Progress report
         std::cout << "Rank "<<rank<<" has proccessed "<<ppi<<" of "<<mychunk.eff_length<<" points ("<<100*ppi/mychunk.eff_length<<"%)"<<std::endl;
      }
      ppi++; // Processing is go, update counter. 

      // Data about current point in input file
      unsigned int       MPIrank = current_point.rank;
      unsigned long long pointID = current_point.pointID;

      // Extract the model parameters
      // ModelParameters params;
      // std::string modelname = "NormalDist"; // Get this somehow...
      // reader->retrieve(params, modelname);

      /// TODO: somehow need to feed these parameters back into Gambit.
      /// This is currently pretty tricky, because:
      ///  1. We work in the unit hypercube, so we need to disable that
      ///     and disable the prior system (or use it cleverly somehow)
      ///  2. The Scanner doesn't know anything about individual models
      ///     right now, so we need to let it get the model names and
      ///     and iterate over them, or something.
      ///  3. The above need to be coordinated in some tricky way so
      ///     that the extracted parameter values end up back in
      ///     ModelParameters objects attached to 'primary_parameters'
      ///     functors.
      ///
      ///  Possible sneaky solution:
      ///     Just iterate through points here, and then somehow send
      ///     the 'reader' object to a special 'prior' object which
      ///     extracts the parameters?
      ///     Need to figure out again how the parameters actually
      ///     get into functors... this is kind of the Gambit likelihood
      ///     containers job. Makes it hard for scannerbit to fiddle
      ///     with this independently.
       
      /// For now just output to screen so we can see if the extraction
      /// is working:
      // std::pair<unsigned int,unsigned long> current_point = reader->get_current_point();
      // unsigned int  MPIrank = current_point.first;
      // unsigned long pointID = current_point.second;
      // std::cout << "Retrieved parameters for model '"<<modelname<<"' at point:" << std::endl;
      // std::cout << " ("<<MPIrank<<", "<<pointID<<")  (rank,pointID)" << std::endl;
      // const std::vector<std::string> names = params.getKeys();
      // for(std::vector<std::string>::const_iterator
      //     it = names.begin();
      //     it!= names.end(); ++it)
      // {
      //   std::cout << "    " << *it << ": " << params[*it] << std::endl;
      // }

      /// @{ Retrieve the old parameter values from previous output

      //std::cout << "Retrieving old parameter values for 'reweight' scanner" << std::endl;

      // Get the reader object
      Printers::BaseBaseReader* reader = get_printer().get_reader("old_points");

      // Storage for retrieved parameters
      std::unordered_map<std::string, double> outputMap;

      // Extract the model parameters
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
   
      // Check if valid model parameters were extracted. If not, something may be wrong with the input file, or we could just be at the end of a buffer (e.g. in HDF5 case). Can't tell the difference, so just skip the point and continue.
      if(not valid_modelparams)
      {
         //std::cout << "Skipping point..." <<std::endl;
         current_point = reader->get_next_point();
         continue;
      }   

      /// @{ More debugging: show what we are returning to the likelihood container
      // std::cout << "Final retrieved parameters:" << std::endl;
      // for(auto it=outputMap.begin(); it!=outputMap.end(); ++it)
      // {
      //   std::cout << "    " << it->first << " : " << it->second << std::endl;
      // }
      /// @}
  
      // std::cout << "Finished parameter retrieval 'reweight' scanner" << std::endl;

      /// @}

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
             err << "In the input YAML file, you requested to 'add_to_LogLike' the component '"<<old_logl<<"' from your input data file, however this does not match any of the data labels retrieved from the input data file you specified. Please check the spelling, path, etc. and try again.";
             scan_error().raise(LOCAL_INFO,err.str());
          }
          if(reader->get_type(*it) != Gambit::Printers::getTypeID<double>())
          {
             std::ostringstream err;
             err << "In the input YAML file, you requested 'add_to_LogLike' component '"<<old_logl<<"' from your input data file, however this data cannot be retrieved as type 'double', therefore it cannot be used as a likelihood component. Please enter a different data label and try again.";
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
             err << "In the input YAML file, you requested to 'subtract_from_LogLike' the component '"<<old_logl<<"' from your input data file, however this does not match any of the data labels retrieved from the input data file you specified. Please check the spelling, path, etc. and try again.";
             scan_error().raise(LOCAL_INFO,err.str());
          }
          if(reader->get_type(*it) != Gambit::Printers::getTypeID<double>())
          {
             std::ostringstream err;
             err << "In the input YAML file, you requested 'subtract_from_LogLike' component '"<<old_logl<<"' from your input data file, however this data cannot be retrieved as type 'double', therefore it cannot be used as a likelihood component. Please enter a different data label and try again.";
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
      if(is_valid) get_printer().get_stream()->print( combined_logL, "reweighted_LogL", MPIrank, pointID);

      /// TODO: There are currently some issues to solve regarding the output
      ///  For asciiPrinter it is kind of ok to just re-output everything, it will have
      ///  to go into a new file anyway, and analysis tools will have to worry about
      ///  combining the data for new and old observables
      ///  For HDF5 printer it is harder. Many computed observables will *already exist* 
      ///  in the output file, including e.g. the ModelParameters, so will need to prevent 
      ///  them getting printed a second time. 
      ///  Might have to add a switch that just prevents the HDF5
      ///  printer from writing into existing datasets, so can only add new ones, and
      ///  all other print statements just get ignored.
      ///
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
     
      /// Copy selected data from input file
      for(std::set<std::string>::iterator it = data_labels_copy.begin(); it!=data_labels_copy.end(); ++it)
      {
         //std::cout << "Copying data for "<<*it<<", point ("<<MPIrank<<", "<<pointID<<")" <<std::endl;
         reader->retrieve_and_print(*it, *(get_printer().get_stream()), MPIrank, pointID);
      }

      // Check whether the calling code wants us to shut down early
      quit = Gambit::Scanner::Plugins::plugin_info.early_shutdown_in_progress();
  
      if(quit)
      {
         // Need to save data about which points have been processed, so we
         // can resume processing from here.
         std::cerr << "Reweight scanner received quit signal! Writing resume data and aborting run." << std::endl;
         Chunk mydonechunk(mychunk.start,loopi);
         record_done_points(done_chunks, mydonechunk, root, rank, numtasks);
      }
      else
      {
         /// Go to next point
         current_point = reader->get_next_point();
      }
    } 
    std::cout << "Done! (rank "<<rank<<")" << std::endl;

    return 0;
  }
}
