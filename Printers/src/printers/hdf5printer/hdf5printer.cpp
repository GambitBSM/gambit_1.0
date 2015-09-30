//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  HDF5 interface printer class member function definitions
///
/// 
///  Design strategy:
///  
///  Gambit operates in an iterative fashion, collecting likelihood samples in a
///  multidimensional space. Along with the likelihoods, we also want to store
///  other information collected at each parameter space point. Naively the results
///  of this search could be stored in a record array, however Gambit operates at
///  too high a level to determine the type information necessary to define the
///  type of the record we want to store in any given scan.
///  
///  To solve this problem, while maintaining the ability to store a wide variety
///  of types, the Gambit HDF5 interface is implemented with the following strategy:
///  
///   - Every vertex ID becomes associated with its own, independent, HDF5 dataset,
///     whose type is suited to that vertex (i.e. Gambit functor). This also means
///     that vertices are permitted to have variable-length arrays as their record
///     type (useful for perhaps storing event data of some kind). It is better
///     for later analysis to store the data this way anyway, since one almost
///     always wants one or two or several "columns" of data at a time, rather than
///     every column (complete record) for several parameter points. We effectively
///     store each "column" separately, which makes retrieval of just one "column" 
///     very fast.
///  
///   - Each dataset contains a boolean field which indicates whether a record has
///     been filled or not (some points fail to produce results in all functors).
///  
///   - When the scanner moves to a new point, all the datasets have an entry added
///     (via their individual buffers). The boolean flag is set to zero 
///     (indicating no result) if no result was provided before this. This keeps
///     all the datasets synchronised, so that e.g. record 5 in all datasets refers
///     to the same parameter space point. 
///  
///   - The rank 0 process handles all dataset access, which allows it to keep the
///     datasets synchronised even when point information is coming in from several
///     points at once.
///  
///   -- To elaborate on the above two points further:
///      - the MPI handling is a little tricky here. Every type needs to know how to
///        serialise itself for transmission to the rank 0 process. Each process can
///        keep a series of buffers (instead of the actual datasets) synchronised
///        by the above method, and when they are full this can trigger the MPI send.
///      - The MPI receive must happen when the rank 0 process knows that it has 
///        completed one of its own points, so that a clean write to all the datasets
///        can occur. 
///  
///  In order to handle the auxilliary printers, i.e. the case where extra information
///  about points is added after the scan has moved on, the following strategy is used:
///  
///   - The auxilliary printers communicate with the main printer, to let it know what
///     information will appear in the future. The main printer then creates datasets
///     for this future information, and keeps them (and their boolean flags) in
///     lockstep with all the other datasets. 
///  
///   - When the auxilliary printer decides that it wants to print its information, a 
///     lookup is done in the datasets containing the pointID and rank information, to
///     figure out which absolute index the auxilliary data belongs to. The pre-existing
///     dataset created by the main printer is then updated accordingly. It might not
///     be possible to allow variable length arrays for this auxilliary data.
///  
///   - It may occur that the above lookup fails, because the auxilliary data has been
///     computed for a point which hasn't yet been delivered to the rank 0 process (i.e.
///     the main printer data is still in the buffer of another process). In this case
///     the auxilliary data will remain in a buffer (with its associated pointID and rank)
///     and the lookup will be attempted again at a later stage (unless the auxilliary
///     printer signals that the auxilliary data is going to be completely overwritten, in
///     which case the buffer is simply erased). 
///  
/// 
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2015 May
///
///  *********************************************


// Standard libraries
#include <map>
#include <vector>
#include <algorithm>
#include <ios>
#include <sstream>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <time.h> // For short sleeps in master_wait_for_tag function
#include <cstdlib> // For popen in finalise() 

// Gambit
#include "gambit/Printers/printers/hdf5printer.hpp"
#include "gambit/Printers/printers/hdf5printer/hdf5tools.hpp"
#include "gambit/Printers/MPITagManager.hpp"
#include "gambit/Printers/printer_id_tools.hpp"

#include "gambit/Core/error_handlers.hpp"
#include "gambit/Utils/stream_overloads.hpp"
#include "gambit/Utils/util_functions.hpp"
#include "gambit/Logs/log.hpp"

// MPI bindings
#include "gambit/Utils/mpiwrapper.hpp"
#include "gambit/Utils/new_mpi_datatypes.hpp"

// Switch for debugging output (manual at the moment)

#ifdef DEBUG_MODE 
  #define DBUG(x) x
#else 
  #define DBUG(x)
#endif

//#define CHECK_SYNC 

// Debugging for 'finalise' routine
#define FINAL_CHECK_SYNC
#define FINAL_DEBUG_MODE 

// Code!
namespace Gambit
{
  namespace Printers 
  {
   
    // Locally defined helper struct 
    struct DSetData
    {
      // Dataset metadata
      std::vector<std::string> names;
      std::vector<unsigned long> lengths;
      // Contents of pointID and mpirank datasets
      std::vector<unsigned long> pointIDs;
      std::vector<int> pointIDs_isvalid;
      std::vector<unsigned int> mpiranks;
      std::vector<int> mpiranks_isvalid;
      // Report error
      std::string local_info;
      std::string errmsg;
    };
  
    // Helper function for iterating through HDF5 file during verification stage
    herr_t op_func_get_dset_lengths(hid_t loc_id /*root of iteration, i.e. the group */, 
                                    const char *name, const H5L_info_t* /*info, unused*/, void *opdata)
    {
       herr_t     status1, return_val = 0;
       H5O_info_t infobuf;
       DSetData*  data = static_cast<DSetData*>(opdata);

       // Ensure all objects in the group are datasets
       // Also retrieve their names and lengths
       status1 = H5Oget_info_by_name(loc_id, name, &infobuf, H5P_DEFAULT);
       if(status1<0)
       {
          std::ostringstream errmsg;
          errmsg << "Error while verifying existing HDF5 file contents! Failed to retrieve metadata for dataset '"<<name<<"'!";
          data->local_info = LOCAL_INFO;
          data->errmsg = errmsg.str();
          return_val = -1;
          return return_val;
       }
       switch (infobuf.type) {
           case H5O_TYPE_GROUP: {
               // Error! Not a dataset
               std::ostringstream errmsg;
               errmsg << "Error while verifying existing HDF5 file contents! Detected an object in the target group (name="<<name<<") which is another group! Currently only datasets are written to the target group by the HDF5Printer, so this indicates an inconsistency (e.g. perhaps you are trying to resume using a different or altered yaml file from the one used to generate the existing data)";
               data->local_info = LOCAL_INFO;
               data->errmsg = errmsg.str();
               return_val = -1;
               return return_val;
               break; }
           case H5O_TYPE_DATASET: {
               // All good, get the name and length

               // Open the dataset located in the group identified by 'loc_id', with name 'name'.
               hid_t dset_id = H5Dopen2(loc_id,name,H5P_DEFAULT);
               if(dset_id<0)
               {
                  std::ostringstream errmsg;
                  errmsg << "Error while verifying existing HDF5 file contents! Failed to open dataset "<<name<<"!";
                  data->local_info = LOCAL_INFO;
                  data->errmsg = errmsg.str();
                  return_val = -1;
                  return return_val;
               }

               // Get dataspace of the dataset identified by 'dset_id'
               hid_t dspace = H5Dget_space(dset_id);
               if(dspace<0)
               {
                  std::ostringstream errmsg;
                  errmsg << "Error while verifying existing HDF5 file contents! Failed to read dataspace of dataset "<<name<<"!";
                  data->local_info = LOCAL_INFO;
                  data->errmsg = errmsg.str();
                  return_val = -1;
                  return return_val;
               }

               // Get number of dimensions 
               int ndims = H5Sget_simple_extent_ndims(dspace);
               if(ndims<0)
               {
                  std::ostringstream errmsg;
                  errmsg << "Error while verifying existing HDF5 file contents! Failed to read dimension sizes of dataset "<<name<<"!";
                  data->local_info = LOCAL_INFO;
                  data->errmsg = errmsg.str();
                  return_val = -1;
                  return return_val;
               }

               // Get sizes of dimensions
               std::vector<hsize_t> dims(ndims);
               ndims = H5Sget_simple_extent_dims(dspace, &dims[0], NULL);
               if(ndims<0)
               {
                  std::ostringstream errmsg;
                  errmsg << "Error while verifying existing HDF5 file contents! Failed to read dimension sizes of dataset "<<name<<"!";
                  data->local_info = LOCAL_INFO;
                  data->errmsg = errmsg.str();
                  return_val = -1;
                  return return_val;
               }

               // Store the name and dim[0] size (which is what we use as the "length")
               logger()<<LogTags::printers<<"Reading existing dataset '"<<name<<"'; length is "<<dims[0]<<std::endl;
               data->names.push_back(name);
               data->lengths.push_back(dims[0]);              

               // We also need to harvest the old pointID/mpirank pairs
               bool doread=false;
               herr_t status = 0;
               void* buffer=NULL;
               hid_t memtype;
               std::string label;
               if( strcmp(name,"pointID")==0 ) 
               {
                  logger()<<LogTags::printers<<"Setting H5Dread variables for retrieving pointID data"<<std::endl;
                  doread=true; 
                  data->pointIDs.resize(dims[0]);
                  buffer=&(data->pointIDs[0]);
                  //get_hdf5_data_type<unsigned long> h5t; //::type().getId();
                  //memtype=h5t.type().getId();
                  memtype=H5T_NATIVE_ULONG;
                  ///TODO: Why do I have to manually set these datatypes? The .getId() calls don't seem to return the
                  /// correct types. Is something weird happening in the C++ API which changes these before writing
                  /// to file?
                  label="previous pointIDs";
               }
               else if( strcmp(name,"pointID_isvalid")==0 ) 
               {
                  logger()<<LogTags::printers<<"Setting H5Dread variables for retrieving pointID_isvalid data"<<std::endl;
                  doread=true; 
                  data->pointIDs_isvalid.resize(dims[0]);
                  buffer=&(data->pointIDs_isvalid[0]);
                  //get_hdf5_data_type<int> h5t; //::type().getId();
                  //memtype=h5t.type().getId();
                  memtype=H5T_NATIVE_INT;
                  label="previous pointIDs_isvalid";
               }
               else if( strcmp(name,"MPIrank")==0 )
               {
                  logger()<<LogTags::printers<<"Setting H5Dread variables for retrieving MPIrank data"<<std::endl;
                  doread=true;
                  data->mpiranks.resize(dims[0]);
                  buffer=&(data->mpiranks[0]);
                  //get_hdf5_data_type<unsigned int> h5t; //::type().getId();
                  //memtype=h5t.type().getId();
                  memtype=H5T_NATIVE_UINT;
                  label="previous MPI ranks";
               }
               else if( strcmp(name,"MPIrank_isvalid")==0 )
               {
                  logger()<<LogTags::printers<<"Setting H5Dread variables for retrieving MPIrank_isvalid data"<<std::endl;
                  doread=true;
                  data->mpiranks_isvalid.resize(dims[0]);
                  buffer=&(data->mpiranks_isvalid[0]);
                  //get_hdf5_data_type<int> h5t; //::type().getId();
                  //memtype=h5t::type().getId();
                  memtype=H5T_NATIVE_INT;
                  //std::cout << "test: h5t.type().getId() = "<<h5t.type().getId() <<std::endl;
                  //std::cout << "      H5T_NATIVE_INT    = "<<H5T_NATIVE_UINT<<std::endl;
                  label="previous MPIranks_isvalid";
               }

               if(doread)
               {
                  status = H5Dread(dset_id, memtype, H5S_ALL, H5S_ALL, H5P_DEFAULT, buffer);
                  if(status<0)
                  {
                     std::ostringstream errmsg;
                     errmsg << "Error while verifying existing HDF5 file contents! Failed to read "<<label<<" out of dataset "<<name<<"!";
                     data->local_info = LOCAL_INFO;
                     data->errmsg = errmsg.str();
                     return_val = -1;
                     return return_val;
                  }
               }

               // Release the dataset resources
               H5Sclose(dspace);  // release dataspace 
               H5Dclose(dset_id); // release dataset
               break; }
           case H5O_TYPE_NAMED_DATATYPE: {
               // Error! Not a dataset
               std::ostringstream errmsg;
               errmsg << "Error while verifying existing HDF5 file contents! Detected an object in the target group (name="<<name<<") which is a named datatype, not a dataset! Currently only datasets are written to the target group by the HDF5Printer, so this indicates an inconsistency (e.g. perhaps you are trying to resume using a different or altered yaml file from the one used to generate the existing data)";
               data->local_info = LOCAL_INFO;
               data->errmsg = errmsg.str();
               return_val = -1;
               return return_val;
               break; }
           default: {
               // Error! Not a dataset
               std::ostringstream errmsg;
               errmsg << "Error while verifying existing HDF5 file contents! Detected an object in the target group (name="<<name<<") with an unknown type, i.e. not a dataset! Currently only datasets are written to the target group by the HDF5Printer, so this indicates an inconsistency (e.g. perhaps you are trying to resume using a different or altered yaml file from the one used to generate the existing data)";
               data->local_info = LOCAL_INFO;
               data->errmsg = errmsg.str();
               return_val = -1;
               return return_val;
               }
      }

      return return_val;
    }


    // We are going to have to combine this data with information from the 
    // scanners (using the auxilliary printers). In order to do this efficiently,
    // we will store the pointIDs and ranks in a dataset seperate from the
    // bulk of the data (but correlated with it) so that we can quickly search
    // for records by their pointID and rank, and then write new data to them.
    //
    // NOTE: will have to change the auxilliary printers a bit, so that they
    // communicate what they intend to write back to the main printer... or something.


    /// @{ H5P_LocalBufferManager member functions

    template<class BuffType>
    void H5P_LocalBufferManager<BuffType>::init(HDF5Printer* p, bool sync)
    {
       /* Set global behaviour flag */
       synchronised = sync;

       /* Attempt to attach to printer */
       if(p==NULL)
       {
          std::ostringstream errmsg;
          errmsg << "Error! Tried to initialise a H5P_LocalBufferManager with a null pointer! Need an actual HDF5Printer object in order to work. This is a bug in the HDF5Printer class, please report it.";
          printer_error().raise(LOCAL_INFO, errmsg.str());
       }
       if(not ready()) {
          printer = p; 
       } else {
          std::ostringstream errmsg;
          errmsg << "Error! Tried to initialise a H5P_LocalBufferManager twice! This is a bug in the HDF5Printer class, please report it.";
          printer_error().raise(LOCAL_INFO, errmsg.str());
       }
    }    

    template<class BuffType>
    BuffType& H5P_LocalBufferManager<BuffType>::get_buffer(const int vertexID, const unsigned int aux_i, const std::string& label) 
    {
       if(not ready()) {
          std::ostringstream errmsg;
          errmsg << "Error! Tried to retrieve a buffer from a buffer manager without first initialising it! This is a bug in the HDF5Printer class, please report it.";
          printer_error().raise(LOCAL_INFO, errmsg.str());
       }

       VBIDpair key;
       key.vertexID = vertexID;
       key.index    = aux_i;

       typename std::map<VBIDpair, BuffType>::iterator it = local_buffers.find(key);
      
       if( it == local_buffers.end() ) 
       {
          error_if_key_exists(local_buffers, key, "local_buffers");
          // No local buffer exists for this output stream yet, so make one
          // But check first if another printer manager is already handling this
          // output stream. If so, we relinquish control over it and silence the
          // new output stream.
          bool silence = false;
          #ifdef DEBUG_MODE
          std::cout<<"Preparing to create new print output stream..."<<std::endl;
          std::cout<<"...label = "<<label<<std::endl;
          std::cout<<"...is stream already managed? "<<printer->is_stream_managed(key)<<std::endl;
          std::cout<<"...from printer with name = "<<printer->get_printer_name()<<std::endl;
          std::cout<<"...from printer with name = "<<printer->get_printer_name()<<std::endl;
          #endif
          if( printer->is_stream_managed(key) )
          {
            silence = true;
          }
          #ifdef DEBUG_MODE
          std::cout<<"...is silenced? "<<silence<<std::endl;
          #endif

          // Create the new buffer object
          hid_t loc(-1);
          if(synchronised)
          {
             loc = printer->get_location();
          } 
          else // write to the RA group
          {
             loc = printer->get_RA_location();            
          }

          local_buffers[key] = BuffType( loc
                                       , label/*deconstruct?*/
                                       , vertexID
                                       , aux_i
                                       , synchronised
                                       , silence
                                       , false /*printer->get_resume() -- In this new version of the HDF5Printer we write temporary files and then combine them at the end of the scan, so each individual buffer no longer needs to be in 'resume' mode, it can just start anew and be combined with the old data later on */
                                       );

          // Get the new (possibly silenced) buffer back out of the map
          it = local_buffers.find(key);

          // Add a pointer to the new buffer to the full list as well
          // TODO: is this the correct behaviour?
          if(not silence) printer->insert_buffer( key, it->second );
       }

       if( it == local_buffers.end() ) 
       {
          std::ostringstream errmsg;
          errmsg << "Error! Failed to retrieve newly created buffer (label="<<label<<") from local_buffers map! Key was: ("<<vertexID<<","<<aux_i<<")"<<std::endl;
          printer_error().raise(LOCAL_INFO, errmsg.str());
       }

       return it->second; 
    }
  
    /// @}


    /// @{ HDF5Printer member functions
     
    // Constructor
    HDF5Printer::HDF5Printer(const Options& options, BasePrinter* const primary)
      : BasePrinter(primary,options.getValueOrDef<bool>(false,"auxilliary"))
      , printer_name("Primary printer")
      , myRank(0)
      , mpiSize(1)
      #ifdef WITH_MPI
      , myComm() // initially attaches to MPI_COMM_WORLD
      #endif
      , resume(options.getValue<bool>("resume"))
    {
      common_constructor(options);
    }

    void HDF5Printer::common_constructor(const Options& options)
    {
      #ifdef WITH_MPI
      myRank = myComm.Get_rank();
      #endif
      // Initialise "lastPointID" map to -1 (i.e. no last point)
      lastPointID[myRank] = -1;

      if(not this->is_auxilliary_printer())
      {
        // Set up this printer in primary mode
        DBUG( std::cout << "Constructing Primary HDF5Printer object..." << std::endl; )
        is_primary_printer = true;

        // Set up communicator context for HDF5 printer system
        #ifdef WITH_MPI
        myComm.dup(MPI_COMM_WORLD); // duplicates MPI_COMM_WORLD
        mpiSize = myComm.Get_size();
        #endif

        std::ostringstream ss;
        ss << "Primary printer for rank " << myRank;
        printer_name = ss.str();

        file = options.getValue<std::string>("output_file");
        tmpfile = file;
        group = options.getValueOrDef<std::string>("/","group");
        //bool overwrite = false;

        if(not resume) /* No overwrite allowed when resuming */
        {
           //overwrite = options.getValueOrDef<bool>(false,"delete_file_if_exists");
           //TODO currently unused, but should use it as part of the hdf5 data recombination. 
           // i.e. should make sure we aren't going to destroy a valuable existing file in that process.
        }
        else
        {
          //if(myRank==0) // Let only the master node verify previous data
                          // EDIT! Ok seems that every process needs to do it to get the previous_points. Could split these tasks? 
          //{  
            /* Run checks (and potentially repairs) on existing output file */
            previous_points = verify_existing_output(file,group);

            // Use global function get_point_id to fast-forward ScannerBit to the
            // next unused pointID for this rank (actually we give it the highest known, it will iterate itself)
            long highest = 0;
            for(std::vector<PPIDpair>::iterator it = previous_points.begin(); it != previous_points.end(); it++)
            {
               if(it->rank==myRank and it->pointID > highest) highest = it->pointID;
            }
            get_point_id() = highest; 

          //}
        }
  
        // Rename file to a temporary name; we will combine all the data from
        // each file (one from each process) at the end of the run.
        // TODO: Currently we have to do this even if no MPI is being used.
        std::ostringstream rename;
        rename << file << "_temp_" << myRank;
        tmpfile = rename.str();

        // Open requested file 
        bool oldfile; 
        Utils::ensure_path_exists(tmpfile);
        //file_id = HDF5::openFile(tmpfile,overwrite,oldfile);
        file_id = HDF5::openFile(tmpfile,true,oldfile); // Now that this is a temp file, we always want to overwrite it (it should only still exist if some error occurred finalising the last run, so starting a new run should mean that it can be discarded)
        if(oldfile)
        {
           std::ostringstream errmsg;
           errmsg << "Error! HDF5Printer attempted to open a temporary file for storing output data ("<<tmpfile<<"), however it found an existing file of the same name! This is a bug; existing files should be overwritten.";
           printer_error().raise(LOCAL_INFO, errmsg.str()); 
        }

        // Open requested group (creating it plus parents if needed)
        group_id = HDF5::openGroup(file_id,group);

        // Open sub-group for RA datasets
        RA_group_id = HDF5::openGroup(file_id,group+"/RA");

        // Set the target dataset write location to the chosen group
        location_id = group_id;
        RA_location_id = RA_group_id;

      }
      else
      {
        // Set up this printer in auxilliary mode
        std::ostringstream ss;
        ss << options.getValue<std::string>("name");
        #ifdef WITH_MPI
        ss << " for rank " << myRank;
        #endif
        printer_name = ss.str();
        synchronised = options.getValueOrDef<bool>(true,"synchronised");
        DBUG( std::cout << "Constructing Auxilliary HDF5Printer object (with name=\""<<printer_name<<"\" synchronised="<<synchronised<<")..." << std::endl; )

        primary_printer = dynamic_cast<HDF5Printer*>(this->get_primary_printer());

        // Fix up mpi communicator (need to copy the one created by the
        // primary printer)
        #ifdef WITH_MPI
        myComm = primary_printer->get_Comm();
        #endif

        // Retrieve the target location for adding new datasets from the primary
        // printer
        location_id = primary_printer->get_location();
        RA_location_id = primary_printer->get_RA_location();
        startpos = primary_printer->get_startpos();
      } 
      // Now that communicator is set up, get its properties.
      #ifdef WITH_MPI
      myRank = myComm.Get_rank();
      mpiSize = myComm.Get_size();
      #endif
    }

    /// Attempt to read an existing output file, and prepare it for
    /// resumed writing (e.g. fix up dataset lengths if data missing)
    /// Returns all the PPIDs found in the existing datasets
    std::vector<PPIDpair> HDF5Printer::verify_existing_output(const std::string& file, const std::string& group)
    {
       if(resume)
       {
         /// Check if hdf5 file exists and can be opened in read/write mode
         std::string msg;
         if(not HDF5::checkFileReadable(file, msg))
         {
           // Could not read output file, might not exist. If run terminated 
           // early, may not have been able to combine temporary output files,
           // so try this now (after checking that necessary files exist)
                      
           // TODO: assumes mpiSize the same as last run, can we relax this? Try to auto-detect files?
           for(int i=0; i<mpiSize; i++)
           {
              std::ostringstream tmpfile;
              tmpfile << file << "_temp_" << i;
              std::string msg2;
              if(not HDF5::checkFileReadable(tmpfile.str(), msg2))
              {
                 // We are supposed to be resuming, but no readable output file was found, so we can't.
                 std::ostringstream errmsg;
                 errmsg << "Error! GAMBIT is in resume mode, however the chosen output system (HDF5Printer) could not locate any existing (and readable) output file, nor could readable temporary files from previous run be located. Resuming is therefore not possible; aborting run... (see below for IO error messages)";
                 errmsg << std::endl << "IO error message for main output file read attempt: " << msg;
                 errmsg << std::endl << "IO error message for temporary file read attempt: " << msg2;
                 printer_error().raise(LOCAL_INFO, errmsg.str()); 
              }

              // Ok all the temporary files exist: combine them
              // (but do it in non-resume mode, since any potentially existing output file is unreadable anyway)
              combine_output(mpiSize,false);
           }
         }

         // Open HDF5 file
         bool oldfile; 
         bool overwrite=false;
         Utils::ensure_path_exists(file);
         file_id = HDF5::openFile(file,overwrite,oldfile);
    
         // Check that group is readable
         std::string msg2;
         if(not HDF5::checkGroupReadable(file_id, group, msg2))   
         {
           // We are supposed to be resuming, but specified group was not readable in the output file, so we can't.
           std::ostringstream errmsg;
           errmsg << "Error! GAMBIT is in resume mode, however the chosen output system (HDF5Printer) was unable to open the specified group ("<<group<<") within the existing output file ("<<file<<"). Resuming is therefore not possible; aborting run... (see below for IO error message)";
           errmsg << std::endl << "(Strictly speaking we could allow the run to continue (if the scanner can find its necessary output files from the last run), however the printer output from that run is gone, so most likely the scan needs to start again).";
           errmsg << std::endl << "IO error message: " << msg2;
           printer_error().raise(LOCAL_INFO, errmsg.str()); 
         }

         // Open requested group (creating it plus parents if needed)
         group_id = HDF5::openGroup(file_id,group);

         // Now for more serious checks: we will check every dataset in the
         // target group and make sure they are all the same length, so that
         // we can learn where to write new data.
         // TODO: add routine to fix dataset lengths in case some datasets
         // were not properly updated during termination of previous run.
         
         herr_t errcode;

         // Storage for data collected during iteration
         DSetData dsetdata;

         // First learn what all the existing datasets are and find out their lengths
         errcode = H5Literate(group_id, H5_INDEX_NAME, H5_ITER_NATIVE, NULL, op_func_get_dset_lengths, &dsetdata);
         logger()<<EOM;
         if(errcode<0)
         {
            std::ostringstream errmsg;
            errmsg << "Error in HDF5Printer while attempting to resume from existing HDF5 file ("<<file<<")! Iteration through group '"<<group<<"' failed! Message was as follows:" <<std::endl;
            errmsg << dsetdata.errmsg;
            printer_error().raise(dsetdata.local_info, errmsg.str());
         }

         // Verify that all the dataset lengths are equal
         for(size_t i=1; i<dsetdata.lengths.size(); i++)
         {
           if(dsetdata.lengths[i] != dsetdata.lengths[0])
           {
              std::ostringstream errmsg;
              errmsg << "Error in HDF5Printer while attempting to resume from existing HDF5 file! Length of dataset '"<<dsetdata.names[i]<<"' ("<<dsetdata.lengths[i]<<") in group '"<<group<<"' of file '"<<file<<"' is inconsistent with the lengths of other datasets in this group ("<<dsetdata.lengths[0]<<"). It is planned for such inconsistencies to be fixable, but currently it is an error, sorry!";
              printer_error().raise(LOCAL_INFO, errmsg.str());
           }
         }
         if(dsetdata.pointIDs.size()==0 or dsetdata.mpiranks.size()==0 or
            dsetdata.pointIDs_isvalid.size()==0 or dsetdata.mpiranks_isvalid.size()==0)
         {
            std::ostringstream errmsg;
            errmsg << "Error in HDF5Printer while attempting to resume from existing HDF5 file! 'pointID' and/or 'MPIrank' datasets were not correctly retrieved from the output dataset, or their lengths are zero. The latter may simply indicate that the existing HDF5 file contains no data, in which case you will need to start a new run" << std::endl;
            errmsg << "   pointIDs.size()         = "<<dsetdata.pointIDs.size()<<std::endl;
            errmsg << "   pointIDs_isvalid.size() = "<<dsetdata.pointIDs_isvalid.size()<<std::endl;
            errmsg << "   mpiranks.size()         = "<<dsetdata.mpiranks.size()<<std::endl;
            errmsg << "   mpiranks_isvalid.size() = "<<dsetdata.mpiranks_isvalid.size();
            printer_error().raise(LOCAL_INFO, errmsg.str());
         }
         if(dsetdata.pointIDs.size()!=dsetdata.lengths[0] or 
            dsetdata.pointIDs_isvalid.size()!=dsetdata.lengths[0] or
            dsetdata.mpiranks.size()!=dsetdata.lengths[0] or
            dsetdata.mpiranks_isvalid.size()!=dsetdata.lengths[0])
         {
            std::ostringstream errmsg;
            errmsg << "Error in HDF5Printer while attempting to resume from existing HDF5 file! 'pointID' and/or 'MPIrank' datasets were not correctly retrieved from the output dataset. The sizes of the retrieved data vectors are not consistent with the expected dataset length, and since the dataset lengths have already been error-checked, this can only be a bug in the code which reads these datasets. Please report this so it can be fixed." << std::endl;
            errmsg << "   lengths[0]              = "<<dsetdata.lengths[0]<<std::endl;
            errmsg << "   pointIDs.size()         = "<<dsetdata.pointIDs.size()<<std::endl;
            errmsg << "   pointIDs_isvalid.size() = "<<dsetdata.pointIDs_isvalid.size()<<std::endl;
            errmsg << "   mpiranks.size()         = "<<dsetdata.mpiranks.size()<<std::endl;
            errmsg << "   mpiranks_isvalid.size() = "<<dsetdata.mpiranks_isvalid.size();
            printer_error().raise(LOCAL_INFO, errmsg.str());
         }

         // Gather the IDs for previous points
         bool allvalid = true;
         unsigned long lastvalid = 0;
         for(size_t i=0; i<dsetdata.pointIDs.size(); i++)
         {
           //std::cout<<"Examining PPID["<<i<<"] from previous scan data: ("<<dsetdata.pointIDs[i]<<", "<<dsetdata.mpiranks[i]<<"), validity: ("<<dsetdata.pointIDs_isvalid[i]<<", "<<dsetdata.mpiranks_isvalid[i]<<")"<<std::endl;
           if(dsetdata.pointIDs_isvalid[i] and dsetdata.mpiranks_isvalid[i])
           {
              //std::cout<<"  Loading PPID["<<i<<"] from previous scan data: ("<<dsetdata.pointIDs[i]<<", "<<dsetdata.mpiranks[i]<<")"<<std::endl;
              
              //if(allvalid==false) // REMOVED FOR NOW; since several resumes in a row can lead to several datasets stiched together with gaps in between.
              //{
              //   // If invalid pointIDs occur, it is only permitted at the end
              //   // of the dataset. If valid pointIDs are detected after that,
              //   // then there is a problem with the dataset.
              //   std::ostringstream errmsg;
              //   errmsg << "Error in HDF5Printer while attempting to resume from existing HDF5 file! While retrieving previous pointID and MPIrank entries, an entry with _isvalid==true was detected following one with _isvalid==false. The first _isvalid==false should mark the end of previously written data, so an _isvalid==true following that indicates corruption of the file" <<std::endl;
              //   errmsg << "  lastvalid = " << lastvalid << std::endl;
              //   errmsg << "  current slot = " << i;
              //   printer_error().raise(LOCAL_INFO, errmsg.str());
              //}  

              lastvalid = i;  // use to overwrite empty slots at end of last dataset

              //add_PPID_to_list(PPIDpair(dsetdata.pointIDs[i],dsetdata.mpiranks[i]));
              // Postpone actually adding the PPID, because this triggers writing of RA_pointID and RA_mpirank,
              // and we don't want to try and write those to this old file. Return the list, and then add it
              // after the verification is finished.
              previous_points.push_back(PPIDpair(dsetdata.pointIDs[i],dsetdata.mpiranks[i]));
           }
           else if(dsetdata.pointIDs_isvalid[i] or dsetdata.mpiranks_isvalid[i])
           {
              std::ostringstream errmsg;
              errmsg << "Error in HDF5Printer while attempting to resume from existing HDF5 file! While retrieving previous pointID and MPIrank entries, an entry with pointID_isvalid==true but MPIrank_isvalid==false (or vice versa) was detected. This indicates corruption of the file";
              errmsg << "  index of problematic entry = "<<i<<std::endl;
              printer_error().raise(LOCAL_INFO, errmsg.str());
           }
           else
           {
              //allvalid=false;  // don't need if we aren't checking for gaps in dataset
           }
         }

         // Set the starting position for new output
         //startpos = dsetdata.lengths[0]; // don't overwrite final is_valid==false entries
         startpos = lastvalid+1;             // do overwrite final is_valid==false entries

         // Checks finished, close file and group
         HDF5::closeGroup(group_id);
         HDF5::closeFile(file_id);
       }
       return previous_points;
    }

    /// Ask the printer for the highest ID number known for a given rank
    /// process (needed for resuming, so the scanner can resume assigning
    /// point IDs from this value. 
    unsigned long HDF5Printer::getHighestPointID(const int rank)
    {
       long highest = 0;
       std::vector<PPIDpair>& all_ppids = primary_printer->reverse_global_index_lookup;
       for(std::vector<PPIDpair>::iterator it = all_ppids.begin(); it != all_ppids.end(); it++)
       {
          if(it->rank==rank and it->pointID > highest) highest = it->pointID;
       }
       return highest;
    }

    #ifdef WITH_MPI
    /// Master waits until all processes send the specified tag.
    /// Acts similarly to a Barrier for the master process, but lets it continue
    /// doing work (though it doesn't do anything at the moment)
    void HDF5Printer::master_wait_for_tag(Tags tag)
    {
       if(mpiSize>1)
       {
          if(myRank==0)
          {
             MPI_Status status;
             int recv_buffer = 0; // To receive the null message
             std::vector<bool> passed(mpiSize); // should init to "false"
             passed[0] = true; // Set rank zero entry to 'true' so we don't wait for ourselves.

             // sleep setup
             struct timespec sleep_time;
             sleep_time.tv_sec  = 0.1 ; // 1/10th of second 
             sleep_time.tv_nsec = 0; // plus no nanoseconds

             while( std::find(passed.begin(), passed.end(), false) != passed.end() ) // Pass when 'false' cannot be found
             {
                // Check whether other processes have caught up yet
                for(unsigned int source=1;source<mpiSize;source++)
                {
                   //std::cout<<"rank "<<myRank<<": process "<<source<<" passed block? "<<passed[source]<<std::endl;
                   if(not passed[source])
                   {
                      if( myComm.Iprobe(source, tag, &status) )
                      {
                         // Ok the source has now reached this function.
                         passed[source] = true;
                         myComm.Recv(&recv_buffer, 1, source, tag);
                      } 
                   }
                }

                // While waiting, do work here.
  
                // sleep (is a busy sleep, but at least will avoid slamming MPI with constant Iprobes)
                nanosleep(&sleep_time,NULL);
            }
          }
          else
          {
             // Other processes simply signal that they have passed this point.
             myComm.Isend(&waitfortag_send_buffer, 1, 0 /*master*/, tag, &req_null);
          }
       }
    }
    #endif


    /// Initialisation function
    // Run by dependency resolver, which supplies the functors with a vector of VertexIDs whose requiresPrinting flags are set to true.
    void HDF5Printer::initialise(const std::vector<int>& /*printmevec*/)
    {
      // Nothing to be done
    }

    /// Destructor
    // Overload the base class virtual destructor
    HDF5Printer::~HDF5Printer()
    {
      DBUG( std::cout << "Destructing HDF5Printer object (with name=\""<<printer_name<<"\")..." << std::endl; )
    }

    /// Perform final cleanup and write tasks 
    void HDF5Printer::finalise(bool abnormal)
    {
       // Only the primary_printer should have to do anything here, since it
       // has access to all the buffers.
       if(is_primary_printer)
       {
          logger() << LogTags::printers << "rank "<<myRank<<": Running finalise() routine for HDF5Printer (with name=\""<<printer_name<<"\")..." << EOM;

          // Make sure all the buffers are caught up to the final point.
          synchronise_buffers();          

          flush();
          #ifdef FINAL_MPI_DEBUG
          std::cout << "rank "<<myRank<<": Final buffer flush done ("<<printer_name<<")"<<std::endl;
          #endif

          // close HDF5 datasets, groups, and file

          for(BaseBufferMap::iterator it = all_buffers.begin(); it != all_buffers.end(); it++)
          {
            // Tell the buffers that they are done; they should then close the HDF5 datasets that they own.
            it->second->finalise();
          }
          HDF5::closeGroup(group_id);
          HDF5::closeGroup(RA_group_id);
          HDF5::closeFile(file_id);
 
          // Check that sync buffers have a consistent length, and that RA buffers have a consistent length
          // (though each group can have different lengths)
          unsigned long dset_length = 0;
          unsigned long RA_dset_length = 0;

          for(BaseBufferMap::iterator it = all_buffers.begin(); it != all_buffers.end(); it++)
          {
             //std::cout << it->second->get_label() <<": "<< it->second->postponed_RA_queue_length() <<std::endl;
             std::size_t remaining_msgs = it->second->postponed_RA_queue_length();
             if(remaining_msgs!=0)
             {
                std::ostringstream errmsg;
                errmsg << "Error! There are (N="<<remaining_msgs<<") postponed random-access writes still left unwritten to disk in buffer "<<it->second->get_label()<<" at end of run! This may mean that some sync buffer data was not properly delivered from another process.";
                printer_error().raise(LOCAL_INFO, errmsg.str());
             }
          
             // Debug: check final lengths
             #ifdef FINAL_MPI_DEBUG
             std::cout << "dset: " << it->second->get_label() << ", length:" << it->second->get_dataset_length() << std::endl;
             #endif 

             if(it->second->is_synchronised())
             {
               if(dset_length==0) { dset_length = it->second->get_dataset_length(); }
               else if(dset_length != it->second->get_dataset_length())
               {
                  std::ostringstream errmsg;
                  errmsg << "Error! Inconsistency detected in output dataset lengths during hdf5printer::finalise(). Datasets from buffer "<<it->second->get_label()<<" have length "<<it->second->get_dataset_length()<<", but previous sync datasets had length "<<dset_length<<".";
                  printer_error().raise(LOCAL_INFO, errmsg.str());
               }
             } 
             else // not synchronised 
             {
               if(RA_dset_length==0) { RA_dset_length = it->second->get_dataset_length(); }
               else if(RA_dset_length != it->second->get_dataset_length())
               {
                  std::ostringstream errmsg;
                  errmsg << "Error! Inconsistency detected in output dataset lengths during hdf5printer::finalise(). Datasets from buffer "<<it->second->get_label()<<" have length "<<it->second->get_dataset_length()<<", but previous RA datasets had length "<<RA_dset_length<<".";
                  printer_error().raise(LOCAL_INFO, errmsg.str());
               }
             }
          }

          /// Double-check that all the buffers are empty.
          for(BaseBufferMap::iterator it = all_buffers.begin(); it != all_buffers.end(); it++)
          {
             if(it->second->is_synchronised())
             {
                if(it->second->sync_buffer_is_full()==true)
                {
                   std::ostringstream errmsg;
                   errmsg << "rank "<<myRank<<": Error! Buffer "<<it->second->get_label()<<" reports sync_buffer_is_full()=true after finalise operations should be complete!";
                   printer_error().raise(LOCAL_INFO, errmsg.str());
                }
                if(it->second->sync_buffer_is_empty()==false)
                {
                   std::ostringstream errmsg;
                   errmsg << "rank "<<myRank<<": Error! Buffer "<<it->second->get_label()<<" reports sync_buffer_is_empty()=false after finalise operations should be complete!";
                   printer_error().raise(LOCAL_INFO, errmsg.str());
                }
             }
             else
             {
                if(it->second->postponed_RA_queue_length()!=0)
                {
                   std::ostringstream errmsg;
                   errmsg << "rank "<<myRank<<": Error! Buffer "<<it->second->get_label()<<" reports postponed_RA_queue_length!=0 (length is "<<it->second->postponed_RA_queue_length()<<") after finalise operations should be complete!";
                   printer_error().raise(LOCAL_INFO, errmsg.str());
                }
                if(it->second->get_RA_queue_length()!=0)
                {
                   std::ostringstream errmsg;
                   errmsg << "rank "<<myRank<<": Error! Buffer "<<it->second->get_label()<<" reports get_RA_queue_length()!=0 (length is "<<it->second->get_RA_queue_length()<<") after finalise operations should be complete!";
                   printer_error().raise(LOCAL_INFO, errmsg.str());
                }
             }
          }
      
          /// BEGIN DATA COMBINATION
          //  We now need to combine the data from all the different processes
          //  that were creating output during this run. First, make sure all
          //  processess are finished
          //  TODO: This requires that the scanner code did not shut down MPI
          //  already! In principle we could do this another way, e.g. by 
          //  getting all processes to write a dummy file that signals that
          //  they are done, but for now let us just use this:
          //  TODO: In principle we shouldn't have to do this combination if
          //  either MPI is not used at all, or if mpiSize==1, however currently
          //  we still have to do it due to the way the RA writes are just
          //  "queued up" in the temporary HDF5 file, rather than actually
          //  written to the correct place. But should make it do the latter
          //  in these special cases.
          if(not abnormal) // Don't do the combination in case of abnormal termination, since we cannot reliably wait for all the other processes to finish
          {
             #ifdef WITH_MPI
             master_wait_for_tag(FINAL_SYNC);
             #endif

             logger() << LogTags::printers << "rank "<<myRank<<": passed FINAL_SYNC point in HDF5Printer finalise() routine" << EOM;
 
             if(myRank==0)
             {
                // Make sure all datasets etc are closed before doing this or else errors may occur.
                combine_output(mpiSize,resume); 
             }              
          }
          else
          {
             logger() << LogTags::printers << "rank "<<myRank<<": HDF5Printer is terminating abnormally (usually if some signal, e.g. CTRL-C detected); temporary hdf5 files NOT combined! Combination will be attempted upon resuming the run." << EOM;
          }
       logger() << LogTags::printers << "rank "<<myRank<<": HDF5Printer finalise() completed successfully." << EOM;
       } //end if(is_primary_printer)
    }

    /// Combine temporary hdf5 output files from each process into a single coherent hdf5 file.
    void HDF5Printer::combine_output(const int N, const bool resume)
    {
      std::ostringstream command;
      command << "python Printers/scripts/combine_hdf5.py "<<file<<" "<<group<<" "<<N<<" "<<resume<<" 2>&1";
      logger() << LogTags::printers << "rank "<<myRank<<": Running HDF5 data combination script..." << std::endl
               << "> " << command.str() << std::endl
               << "--------------------" << std::endl;
      FILE* fp = popen(command.str().c_str(), "r");
      if(fp==NULL)
      {
         // Error running popen
         std::ostringstream errmsg;
         errmsg << "rank "<<myRank<<": Error running HDF5 data combination script during HDF5Printer finalise()! popen failed to run the specified command (command was '"<<command.str()<<"')";
         printer_error().raise(LOCAL_INFO, errmsg.str());
      }
      // Something ran at least; get the stdout (plus redirected stderr)
      char buffer[512];
      // read output into a c++ stream via buffer
      std::ostringstream output;
      while(fgets(buffer, sizeof(buffer), fp) != NULL) {
          output << buffer;
      }
      logger() << LogTags::printers << output.str() << std::endl
               << "--------------------" << std::endl
               << "end HDF5 combination script output" << EOM;
      int rc = pclose(fp);
      if(rc!=0)
      {
        // Python error occurred
         std::ostringstream errmsg;
         errmsg << "rank "<<myRank<<": Error running HDF5 data combination script during HDF5Printer finalise()! Script ran, but return code != 0 was encountered. Please see printer-tagged log files for the Python traceback.";
         printer_error().raise(LOCAL_INFO, errmsg.str());              
      }
      // Otherwise everything should be ok!
    }

    /// Retrieve pointer to HDF5 location to which datasets are added
    hid_t HDF5Printer::get_location()
    {
       if(location_id==-1)
       {
         std::ostringstream errmsg;
         errmsg << "Error! Tried to retrieve 'location_id' handle from HDF5Printer, but it is -1! This means the printer has not been set up correctly. This is a bug, please report it.";
         printer_error().raise(LOCAL_INFO, errmsg.str());
       }
       return location_id;
    }

    hid_t HDF5Printer::get_RA_location()
    {
       if(RA_location_id==-1)
       {
         std::ostringstream errmsg;
         errmsg << "Error! Tried to retrieve 'RA_location' pointer from HDF5Printer, but it is -1! This means the printer has not been set up correctly. This is a bug, please report it.";
         printer_error().raise(LOCAL_INFO, errmsg.str());
       }
       return RA_location_id;
    }

    /// Retrieve MPI rank
    int HDF5Printer::getRank() {return myRank;}

    /// Add a pointer to a new buffer to the global list for this printer
    /// and also register it with the list global to all printers.
    void HDF5Printer::insert_buffer(VBIDpair& key, VertexBufferBase& newbuffer)
    {
       error_if_key_exists(all_my_buffers, key, "all_my_buffers");
       all_my_buffers[key] = &newbuffer;

       error_if_key_exists(all_buffers, key, "all_buffers");
       primary_printer->all_buffers[key] = &newbuffer;
    }

    /// Check if an output stream is already managed by some buffer in any printer. 
    bool HDF5Printer::is_stream_managed(VBIDpair& key)
    {
      bool answer = true;
      if( primary_printer->all_buffers.find(key) 
           == primary_printer->all_buffers.end() )
      {
        answer = false;
      }
      return answer;
    }

    /// Add PPIDpair to global index list
    /// In this version of the HDF5Printer, this list applies only to RA points.
    /// Synchronised writes are not tracked.
    void HDF5Printer::add_PPID_to_list(const PPIDpair& ppid)
    {
      // Check if it is in the lookup map already
      std::map<PPIDpair, unsigned long>& lookup = primary_printer->global_index_lookup;
      std::vector<PPIDpair>& reverse_lookup = primary_printer->reverse_global_index_lookup;
      std::map<PPIDpair, unsigned long>::const_iterator it = lookup.find(ppid);
      if ( it != lookup.end() ) {
         std::ostringstream errmsg;
         errmsg << "Error! Supplied PPID already exists in global_index_lookup map! It should only be added once, so there is a bug in HDF5Printer. Please report this error.";
         printer_error().raise(LOCAL_INFO, errmsg.str());
      }
      
      // Ok, now safe to add it 
      lookup[ppid] = reverse_lookup.size();
      reverse_lookup.push_back(ppid);

      // Need to make sure the pointID and MPIrank are stashed at this location in the RA output
      // (this should only occur from within a non-synchronised printer, so these should be
      //  interpreted as RA writes)
      unsigned long pointID = ppid.pointID; // unsigned versions were coming out gibberish in python...
      unsigned int mpirank = ppid.rank;
      //std::cout << "rank "<<myRank<<": adding new RA PPID to list: (" << pointID << "," << mpirank << ")" << std::endl;
      print(pointID, "RA_pointID", -2000, mpirank, pointID);
      print(mpirank, "RA_MPIrank", -2001, mpirank, pointID);
    }

    /// Check if PPIDpair exists in global index list
    bool HDF5Printer::seen_PPID_before(const PPIDpair& ppid)
    {
      bool result = false;
      std::map<PPIDpair, unsigned long>& lookup = primary_printer->global_index_lookup;
      if ( lookup.find(ppid) != lookup.end() ) result = true;
      return result;
    }

    /// Retrieve index from global lookup table, with error checking
    unsigned long HDF5Printer::get_global_index(const unsigned long pointID, const unsigned int mpirank)
    {
       std::map<PPIDpair, unsigned long>::iterator it;
       std::map<PPIDpair, unsigned long>& lookup = primary_printer->global_index_lookup;
       it = lookup.find(PPIDpair(pointID,mpirank));
       if ( it == lookup.end() ) 
       {
         #ifdef DEBUG_MODE    
         std::cout<<"Contents of global_index_lookup map:"<<std::endl;
         for(it = lookup.begin(); it != lookup.end(); it++) {
           std::cout<<"[pointID="<<it->first.first<<", mpirank="<<it->first.second<<"] : index="<<it->second<<std::endl;
         } 
         #endif
         std::ostringstream errmsg;
         errmsg << "Error retrieving global index for pointID="<<pointID<<", mpirank="<<mpirank<<"; no corresponding global index found. This means this point has not yet passed through the primary printer. This function is called in preparation for writing to data files via random access, so possibly something has gone wrong there.";
         printer_error().raise(LOCAL_INFO, errmsg.str());
       }
       return it->second;
    }

    /// Function to ensure buffers are all synchronised to the same absolute position
    // Will move the "write heads" of all buffers to "current_dset_position"
    // This should only required one "skip_append" command at most to each buffer; something
    // went wrong if more are required.
    void HDF5Printer::synchronise_buffers()
    {
      if(is_auxilliary_printer())
      {
        std::ostringstream errmsg;
        errmsg << "Error! synchronise_buffer() called by auxilliary hdf5 printer (name="<<printer_name<<")! Only the primary hdf5 printer is allowed to do this. This is a bug in the HDF5Printer class, please report it."; 
        printer_error().raise(LOCAL_INFO, errmsg.str());
      }

      // Determine the desired sync position
      const unsigned long sync_pos = get_sync_pos()-1;  

      // Cycle through all buffers and tell them to ensure they are at the right position
      // The buffers should throw an error if we are accidentally telling them to go backwards
      // or skip too many points or anything they can't do.
      // Here though we should only be moving them forward by one position.
      #ifdef DEBUG_MODE
      std::cout<<"rank "<<myRank<<": Synchronising buffers to position "<<sync_pos<<" (message from printer: "<<printer_name<<", is_auxilliary: "<<is_auxilliary_printer()<<", synchronised: "<<synchronised<<")"<<std::endl;
      #endif 

      // Do the sync buffers first:
      for (BaseBufferMap::iterator it = all_buffers.begin(); it != all_buffers.end(); it++)
      {
        if(it->second->is_synchronised()) it->second->synchronise_output_to_position(sync_pos);
      }

      // Now the RA buffers; they don't have to be the same size as the sync buffers, but it
      // is useful if we keep them all the same length. Need two loops; one to find the current
      // max length of an RA buffer, and the next to tell them all to adjust themselves to
      // that length (which won't actually happen until the next time they need to write their
      // data to disk).
      // TODO: may not need this, can possible just set them to match "get_N_RApointIDs()".
      // These are all the possible RA write position anyway...
      unsigned long maxRAlength = get_N_RApointIDs();
      //for (BaseBufferMap::iterator it = all_buffers.begin(); it != all_buffers.end(); it++)
      //{
      //  if(not it->second->is_synchronised())
      //  {
      //     unsigned long length = it->second->get_dataset_length();
      //     if(length>maxRAlength) maxRAlength = length;
      //  }
      //}
      for (BaseBufferMap::iterator it = all_buffers.begin(); it != all_buffers.end(); it++)
      {
        if(not it->second->is_synchronised()) it->second->synchronise_output_to_position(maxRAlength);
      }
    } 

    // (this will trigger MPI sends if needed)
    // Note that if one sync buffer is full, they should all be full!
    // By default this only empties buffers if they are full. Use
    // flag to force the flush for the finalise buffer dumps.
    void HDF5Printer::empty_sync_buffers(bool force)
    {
      #ifdef DEBUG_MODE
      std::cout<<"rank "<<myRank<<": Emptying sync buffers (if full)..."<<std::endl;
      #endif
      unsigned int N_sync_buffers = 0;
      unsigned int N_were_full = 0;
      for (BaseBufferMap::iterator it = all_buffers.begin(); it != all_buffers.end(); it++)
      {
        if(it->second->is_synchronised())
        {
          N_sync_buffers += 1;
          if(it->second->sync_buffer_is_full() or force)
          {
            #ifdef DEBUG_MODE
            std::cout<<"rank "<<myRank<<": Emptying sync buffer "<<it->second->get_label()<<std::endl;
            #endif
            N_were_full += 1; // Can get flushed if not full only if force=true
            it->second->flush();
          }
        }
      }

      // Make sure that all the buffers were full and have now been cleared! 
      if(N_were_full != 0 and N_were_full != N_sync_buffers)
      {
         std::ostringstream errmsg;
         errmsg << "Error! Tried to empty all synchronised buffers, but some of them were not full! (N_were_full ("<<N_were_full<<") != N_sync_buffers ("<<N_sync_buffers<<"). This indicates that a loss of synchronisation has occurred, which is a bug in the hdf5printer system. Please report it. (Note: rank="<<myRank<<", printer_name="<<printer_name<<")"; 
         printer_error().raise(LOCAL_INFO, errmsg.str());
      }
    }

    /// Empty all the buffers to disk
    /// Note: Empty sync buffers will not get flushed, to avoid writing extra
    /// buffer-lengths at the end of scan.
    void HDF5Printer::flush()
    {
      empty_sync_buffers(true); // NOTE: forces flush even if buffers not full

      // Need to do all the sync buffers before the RA buffers, so that at the end of the
      // run the sync buffers all get written to disk first, and no RA writes get left
      // in the postpone queue due to missing targets.
      for (BaseBufferMap::iterator it = all_buffers.begin(); it != all_buffers.end(); it++)
      {
        if(it->second->is_synchronised())
        { // do nothing, these are the sync buffers
          //if(not it->second->sync_buffer_is_empty()) {}
        }
        else
        {
          it->second->RA_flush(primary_printer->global_index_lookup);
          //std::cout<<"rank "<<myRank<<": flushing RA buffer of "<<it->second->get_label()<<std::endl;
        }
      }

      // Make sure RA datasets are the same length


    }

    /// Invalidate all data on disk which has been printed by this printer so far,
    /// and reset all the buffers to write back to the first data slots.
    /// This is only allowed if this is an auxilliary printer with global=true, or
    /// if "force=true" is specified.
    void HDF5Printer::reset(bool force)
    {
      //#ifdef DEBUG_MODE
      std::cout<<"resetting..."<<std::endl;
      std::cout<<"is_auxilliary_printer() = "<<is_auxilliary_printer()<<std::endl;
      std::cout<<"synchronised            = "<<synchronised<<std::endl;
      std::cout<<"printer_name            = "<<printer_name<<std::endl;
      //#endif
      if(not force and not this->is_auxilliary_printer())
      {
         std::ostringstream errmsg;
         errmsg << "Error! Tried to call reset() on the primary HDF5Printer (printer_name = "<<printer_name<<")! This would delete all the data from the scan and is not currently allowed! Probably this was called accidentally due to a bug.";
         printer_error().raise(LOCAL_INFO, errmsg.str());
      }
      else if(not force and synchronised)
      { 
         std::ostringstream errmsg;
         errmsg << "Error! Tried to call reset() on an auxilliary HDF5Printer (printer_name = "<<printer_name<<") which is synchronised with the primary printer! This would delete all the point-level data written by this printer during the scan and is not currently allowed! Probably this was called accidentally due to a bug.";
         printer_error().raise(LOCAL_INFO, errmsg.str());
      }
      else
      {
         // Ok safe to do the resets.
         for (BaseBufferMap::iterator it = all_my_buffers.begin(); it != all_my_buffers.end(); it++)
         {
           // SPECIAL CASES!
           // We rely on the special RA buffers 'RA_MPIrank' and 'RA_pointID'
           // to keep track of which RA entries correspond to which 
           // sync buffer points. Once written once, we preserve which slots
           // in the RA datasets correspond to a particular sync point, even
           // after resetting them, because multiple RA streams are all 
           // writing data into the same hdf5 group. So if we invalidate the
           // RA_MPIrank and RA_pointID ranks, then we screw up the matching
           // between RA output streams (i.e. non-sync printers). 
           // Could perhaps use a different groups for each aux printer 
           // (i.e. stream). each with its own MPIrank and pointID datasets.
           // For now though, we will simply not invalidate these datasets.
           const std::string& name = it->second->get_label();
           if(name!="RA_MPIrank" and name!="RA_pointID")
           {
             // Reset the rest
             it->second->reset(force);
           }
         }
      }
    }

    /// For debugging: check that buffers are synced correctly
    /// Flag sets whether "perfect" sync is required, or whether
    /// some buffers can be ahead by one slot (due to having
    /// performed prints that other buffers have not yet done)
    /// If checkall=true, then all_buffers is checked, not just
    /// all_my_buffers. Only primary printer can do this.
    void HDF5Printer::check_sync(const std::string& label, const int sync_type, bool checkall=false)
    {
         BaseBufferMap* map_to_check=NULL;
         if(checkall)
         {
            if(not is_primary_printer)
            {
               std::ostringstream errmsg;
               errmsg << "Error running 'check_sync'; flag 'checkall' set to true, but this is not the primary printer (it is "<<this->get_printer_name()<<") This is not allowed and is a bug, please fix it.";
               printer_error().raise(LOCAL_INFO, errmsg.str());
            }
            else
            {
               map_to_check=&all_buffers;
            }
         }
         else
         {
            map_to_check=&all_my_buffers;
         }

         // Explicitly check up on the synchronisation of all the buffers and their
         // associated datasets
         std::string sync_type_name = "non-perfect";
         long int diff; // required difference (dset_head_pos - sync_pos)
         if     (sync_type==0) { 
           sync_type_name = "pre-resync (non-perfect)"; 
         }
         else if(sync_type==1) { 
           diff = 1;
           sync_type_name = "post-resync   (perfect)"; 
         }
         else if(sync_type==2) { 
           diff = 0; 
           sync_type_name = "post-newpoint (perfect)"; 
         }

         std::cout<<"rank "<<myRank<<": Sync check (type: "<<sync_type_name<<"); "<<label<<std::endl;

         #define ERR_MSG \
           std::ostringstream errmsg; \
           errmsg << "rank "<<myRank<<": Error! ("<<label<<"; ("<<sync_type_name<<") sync check) Buffers have gone out of sync in printer '"<<printer_name<<"'!"<<std::endl; \
           errmsg << "   head_pos = " << head_pos << "; name = " << name << std::endl; \
           errmsg << "   sync_pos = " << sync_pos_plus1-1 << std::endl;

         for(BaseBufferMap::iterator it = map_to_check->begin(); it != map_to_check->end(); it++)
         {
           if(it->second->is_synchronised())
           {
              long head_pos = it->second->dset_head_pos();
              std::string name = it->second->get_label();
              long sync_pos_plus1 = get_sync_pos();

              if(sync_type==0) {
                 if(head_pos+1 < sync_pos_plus1)
                 {
                    ERR_MSG
                    errmsg << " (head_pos < syncpos) " << std::endl;
                    printer_error().raise(LOCAL_INFO, errmsg.str());
                 } else if (head_pos > sync_pos_plus1) 
                 {
                    ERR_MSG           
                    errmsg << " (head_pos > syncpos + 1) " << std::endl;
                    printer_error().raise(LOCAL_INFO, errmsg.str());
                 }  // else ok.   
              } 
              else if(sync_type==1 or sync_type==2)
              {
                if(head_pos != sync_pos_plus1-1 + diff)
                {
                   ERR_MSG           
                   errmsg << " (head_pos != syncpos + "<<diff<<") " << std::endl;
                   printer_error().raise(LOCAL_INFO, errmsg.str());
                }
              }

              std::cout << "   head_pos = " << head_pos << "; name = " << name << std::endl;
              std::cout << "   sync_pos = " << sync_pos_plus1-1 << std::endl;
              //it->second->sync_report();
            }
         }
    }


    /// Check whether printing to a new parameter space point is about to occur
    // and perform adjustments needed to prepare the printer.
    void HDF5Printer::check_for_new_point(const unsigned long candidate_newpoint, const unsigned int mpirank)
    {
       if(is_auxilliary_printer())
       {
          // Redirect task to primary printer
          primary_printer->check_for_new_point(candidate_newpoint, mpirank);
       }

       //std::cout<<"rank "<<myRank<<": Checking for new point (lastPointID="<<lastPointID.at(myRank)<<", candidate_newpoint="<<candidate_newpoint<<")"<<std::endl;

       // Check if we have changed target PointIDs since the last print call
       if(candidate_newpoint!=lastPointID.at(myRank))
       {

         #ifdef MPI_DEBUG
         std::cout<<"rank "<<myRank<<": New point detected (lastPointID="<<lastPointID.at(myRank)<<", candidate_newpoint="<<candidate_newpoint<<")"<<std::endl;
         std::cout<<"rank "<<myRank<<": sync_pos="<<get_sync_pos()<<std::endl;
         #endif

         // Explicitly check up on the synchronisation of all the buffers and their
         // associated datasets

         // When a new point is detected, the "sync position" should be the
         // largest index which has a pointID assigned, which will match the
         // head_pos of any buffers which didn't write to that point.
         // The other buffers are allowed to be AT MOST one slot ahead of this,
         // having done a write for the last point and moved ahead one slot.
         //
         // At the end of this routine, all the buffers should once again
         // have their write heads pointing to both the same buffer index, and
         // the same output dataset index, and this index should be equal to
         // the number of pointIDs collected so far, minus 1 for the zero indexing
         // (with the last ID being the point from which the next print statements 
         // will arrive).
         //
         // So, in the end, with sync_pos = reverse_global_index_lookup.size() - 1 = get_N_pointIDs() - 1
         // we require 
         //   dset_head_pos() == sync_pos
         // for every buffer.
         // However, at the beginning, we may have
         //   dset_head_pos() == sync_pos + 1
         // for some buffers, which, after sync_pos is incremented with the new
         // pointID, will match the new sync_pos, and the other buffers will need
         // to be caught up. Any other state is an error.
         // So, in debug mode, we will check this first.
 
         #ifdef CHECK_SYNC
         check_sync("Prelim check (in check_for_new_point)", 0);
         #endif

         // Make sure all the buffers are caught up at the old position.
         synchronise_buffers();          

         #ifdef CHECK_SYNC
         check_sync("Post-resync check (in check_for_new_point)", 1);
         #endif

         // Yep the scanner has moved on, at least as far as the current process sees
         lastPointID[myRank] = candidate_newpoint;

         // Check if the buffers are full and waiting to be emptied
         // (this will trigger MPI sends if needed)
         empty_sync_buffers();
          
         #ifdef CHECK_SYNC
         check_sync("Post-buffer-empty check (in check_for_new_point)", 1);
         #endif

         // Move forward buffer synchronisation counter by one slot
         increment_sync_pos();
  
         // Now the buffers should all be synchronised; check this in debug mode.
         #ifdef CHECK_SYNC
         check_sync("Post-newpoint check (in check_for_new_point)", 2);
         #endif

         // Debugging only! check if buffers are somehow still full...
         #ifdef MPI_DEBUG
         for (BaseBufferMap::iterator it = all_my_buffers.begin(); it != all_my_buffers.end(); it++)
         {
           if(it->second->is_synchronised())
           {
             if(it->second->sync_buffer_is_full())
             {
                std::ostringstream errmsg;
                errmsg << "rank "<<myRank<<": Error! sync buffer with label "<<it->second->get_label()<<" is full! Should not be full at this point (printer="<<printer_name<<")";
                printer_error().raise(LOCAL_INFO, errmsg.str());
             }
           }
         }
         #endif

         // For resuming, we need to be able to retrieve the pointID and 
         // MPIrank for every output point. So we need to make sure this
         // information is always output, and not rely on the scanner to
         // do it. Scanners can output it as well, since not all printers
         // may do it automatically (although it would be good if they
         // did), but in that case they should use the special ID codes
         // below to avoid duplication.
         // EDIT: Ok need to do these in the constructor also, since otherwise
         // the very first point gets missed.
         /// TODO: Ok currently cannot both print them here and in the scanner plugins.
         /// Need to deal with duplicate print attempts better.
         //print(candidate_newpoint, "pointID", -1000, myRank, candidate_newpoint);
         //print(myRank,             "MPIrank", -1001, myRank, candidate_newpoint);
      }
    }


    // PRINT FUNCTIONS
    //----------------------------
    // Need to define one of these for every type we want to print!
    // Could use macros again to generate identical print functions 
    // for all types that have a << operator already defined.
  
    void HDF5Printer::print(std::vector<double> const& value, const std::string& label, const int vID, const unsigned int mpirank, const unsigned long pointID)
    {
       // We will write to several 'double' buffers, rather than a single vector buffer.
       // Change this once a vector buffer is actually available
       typedef VertexBufferNumeric1D_HDF5<double,BUFFERLENGTH> BuffType;
      
       // Retrieve the buffer manager for buffers with this type
       typedef H5P_LocalBufferManager<BuffType> BuffMan;
       BuffMan& buffer_manager = get_mybuffermanager<BuffType>(pointID,mpirank);

       #ifdef HDEBUG_MODE
       std::cout<<"printing vector<double>: "<<label<<std::endl;
       std::cout<<"pointID: "<<pointID<<", mpirank: "<<mpirank<<std::endl;
       #endif
 
       for(unsigned int i=0;i<value.size();i++)
       {
         // Might want to find some way to avoid doing this every single loop, seems kind of wasteful.
         std::stringstream ss;
         ss<<label<<"["<<i<<"]"; 
         //labels.push_back(ss.str());

         // Write to each buffer
         //buffer_manager.get_buffer(vID, i, ss.str()).append(value[i]);
         PPIDpair ppid(pointID,mpirank);
         if(synchronised)
         {
           // Write the data to the selected buffer ("just works" for simple numeric types)
           buffer_manager.get_buffer(vID, i, ss.str()).append(value[i],ppid);
         }
         else
         {
           // Queue up a desynchronised ("random access") dataset write to previous scan iteration
           if(not seen_PPID_before(ppid))
           {
             add_PPID_to_list(ppid);
           }
           buffer_manager.get_buffer(vID, i, ss.str()).RA_write(value[i],ppid,primary_printer->global_index_lookup); 
         }
       }
    }
   
    void HDF5Printer::print(triplet<double> const& value, const std::string& label, const int vID, const uint mpirank, const ulong pointID)
    {
      // Retrieve the buffer manager for buffers with this type
      typedef VertexBufferNumeric1D_HDF5<double,BUFFERLENGTH> BuffType;
      typedef H5P_LocalBufferManager<BuffType> BuffMan;
      BuffMan& buffer_manager = get_mybuffermanager<BuffType>(pointID,mpirank);
      
      #ifdef HDEBUG_MODE
      std::cout<<"printing triplet<double>: "<<label<<std::endl;
      std::cout<<"pointID: "<<pointID<<", mpirank: "<<mpirank<<std::endl;
      #endif
 
      PPIDpair ppid(pointID,mpirank);      
      // Write to each buffer
      if(synchronised)
      {
       // Write the data to the selected buffer ("just works" for simple numeric types)
       buffer_manager.get_buffer(vID, 0, label+"(central)").append(value.central);
       buffer_manager.get_buffer(vID, 1, label+"(lower)").append(value.lower);
       buffer_manager.get_buffer(vID, 2, label+"(upper)").append(value.upper);
      }
      else
      {
         // Queue up a desynchronised ("random access") dataset write to previous scan iteration
         if(not seen_PPID_before(ppid))
         {
           add_PPID_to_list(ppid);
         }
         // Queue up a desynchronised ("random access") dataset write to previous scan iteration
         buffer_manager.get_buffer(vID, 0, label+"(central)").RA_write(value.central,ppid,primary_printer->global_index_lookup); 
         buffer_manager.get_buffer(vID, 1, label+"(lower)").RA_write(value.lower,ppid,primary_printer->global_index_lookup); 
         buffer_manager.get_buffer(vID, 2, label+"(upper)").RA_write(value.upper,ppid,primary_printer->global_index_lookup); 
      }
    }

    void HDF5Printer::print(ModelParameters const& value, const std::string& label, const int vID, const unsigned int mpirank, const unsigned long pointID)
   {
       // We will write to several 'double' buffers, since modelparameters are often retrieved separately
       typedef VertexBufferNumeric1D_HDF5<double,BUFFERLENGTH> BuffType;
      
       // Retrieve the buffer manager for buffers with this type
       typedef H5P_LocalBufferManager<BuffType> BuffMan;
       BuffMan& buffer_manager = get_mybuffermanager<BuffType>(pointID,mpirank);

       std::map<std::string, double> parameter_map = value.getValues();
 
       unsigned int i=0; // index for each buffer 
       for (std::map<std::string, double>::iterator 
         it = parameter_map.begin(); it != parameter_map.end(); it++)
       {
         std::stringstream ss;
         ss<<label<<"::"<<it->first;
         PPIDpair ppid(pointID,mpirank);
         // Write to each buffer
         //buffer_manager.get_buffer(vID, i, ss.str()).append(it->second);
         if(synchronised)
         {
           // Write the data to the selected buffer ("just works" for simple numeric types)
           buffer_manager.get_buffer(vID, i, ss.str()).append(it->second,ppid);
         }
         else
         {
           // Queue up a desynchronised ("random access") dataset write to previous scan iteration
           if(not seen_PPID_before(ppid))
           {
             add_PPID_to_list(ppid);
           }
           buffer_manager.get_buffer(vID, i, ss.str()).RA_write(it->second,ppid,primary_printer->global_index_lookup); 
         }
         i++;
       }
    }
 
    /// @}  
   
  } // end namespace printers
} // end namespace Gambit

#undef DBUG
#undef DEBUG_MODE
