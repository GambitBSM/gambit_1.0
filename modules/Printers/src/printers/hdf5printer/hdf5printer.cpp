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

// Gambit
#include "gambit/Printers/printers/hdf5printer.hpp"
#include "gambit/Printers/printers/hdf5printer/hdf5tools.hpp"
#include "gambit/Printers/MPITagManager.hpp"

#include "gambit/Core/error_handlers.hpp"
#include "gambit/Utils/stream_overloads.hpp"
#include "gambit/Utils/util_functions.hpp"

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

// Code!
namespace Gambit
{
  namespace Printers 
  {
   
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
    BuffType& H5P_LocalBufferManager<BuffType>::get_buffer(const int vertexID, const uint aux_i, const std::string& label) 
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
          //#ifdef DEBUG_MODE
          std::cout<<"Preparing to create new print output stream..."<<std::endl;
          std::cout<<"...label = "<<label<<std::endl;
          std::cout<<"...is stream already managed? "<<printer->is_stream_managed(key)<<std::endl;
          std::cout<<"...from printer with name = "<<printer->get_printer_name()<<std::endl;
          std::cout<<"...from printer with name = "<<printer->get_printer_name()<<std::endl;
          //#endif
          if( printer->is_stream_managed(key) )
          {
            silence = true;
          }
          //#ifdef DEBUG_MODE
          std::cout<<"...is silenced? "<<silence<<std::endl;
          //#endif

          // Create the new buffer object
          H5FGPtr loc(NULL);
          if(printer->getRank()==0)
          {
             loc = printer->get_location();
          } // else we give the new buffer the default (null) value, and expect that it will not use it.

          local_buffers[key] = BuffType( loc
                                       , label/*deconstruct?*/
                                       , vertexID
                                       , aux_i
                                       , synchronised
                                       , silence
                                       #ifdef WITH_MPI
                                       /* Retrieve/create MPI tags for this buffer */
                                       , printer->get_bufftags(key)
                                       , printer->get_Comm()
                                       #endif
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
    HDF5Printer::HDF5Printer(const Options& options)
      : printer_name("Primary printer")
      , myRank(0)
      #ifdef WITH_MPI
      , myComm() // initially attaches to MPI_COMM_WORLD
      , mpiSize(1)
      #endif
    {
      #ifdef WITH_MPI
      myRank = myComm.Get_rank();
      #endif

      if(not options.getValueOrDef<bool>(false,"auxilliary"))
      {
        // Set up this printer in primary mode
        DBUG( std::cout << "Constructing Primary HDF5Printer object..." << std::endl; )
        is_primary_printer = true;

        // Set up communicator context for HDF5 printer system
        #ifdef WITH_MPI
        myComm.dup(MPI_COMM_WORLD); // duplicates MPI_COMM_WORLD
           
        // Create object to issue/manage MPI tags for the various buffers
        tag_manager = new MPITagManager(myComm,FIRST_EMPTY_TAG,TAG_REQ,BuffTags::NTAGS);
        #endif

        if(myRank==0) // Only master node will actuall write to file
        {  
           printer_name = "Master primary printer";

           std::string file = options.getValue<std::string>("output_file");
           std::string group = options.getValueOrDef<std::string>("/","group");
           bool overwrite = options.getValueOrDef<bool>(false,"delete_file_if_exists");

           std::cout<<"overwrite? "<<overwrite<<std::endl;

           // Open HDF5 file (create if non-existant)
           Utils::ensure_path_exists(file);
           fileptr = HDF5::openFile(file,overwrite);
 
           // Open requested group (creating it plus parents if needed)
           groupptr = HDF5::openGroup(fileptr,group);

           // Set the target dataset write location to the chosen group
           location = groupptr;
        }
        else
        {
           std::ostringstream ss;
           ss << "Primary printer for rank " << myRank;
           printer_name = ss.str();
        }
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
      } 
      // Now that communicator is set up, get its properties.
      #ifdef WITH_MPI
      myRank = myComm.Get_rank();
      mpiSize = myComm.Get_size();
      #endif
 
      // Initialise "lastPointID" map to -1 (i.e. no last point)
      lastPointID[myRank] = -1; // Only rank 0 process for now; parallel mode not implemented
    }

    #ifdef WITH_MPI
    /// Master waits until all processes send the specified tag, and monitors
    /// for tag requests in the meantime. Used during initialise and finalise to
    /// ensure monitoring for tag requests continues until it is no longer needed
    /// by the workers.
    /// Acts similarly to a Barrier for the master process, but lets it continue
    /// monitoring for tag requests while waiting.
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
             while( std::find(passed.begin(), passed.end(), false) != passed.end() ) // Pass when 'false' cannot be found
             {
                // Check whether other processes have caught up yet
                for(uint source=1;source<mpiSize;source++)
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

                // While waiting, fulfil tag requests from other processes
                tag_manager->check_for_tag_requests();
  
                // sleep? leave for now.
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
    void HDF5Printer::initialise(const std::vector<int>& printmevec)
    {
       // Prior to running this, the dependency resolver triggers a single null
       // print for every functor, which will trigger the creation of all the
       // buffer managers that we will need (but possibly not all the buffers,
       // since multiple buffers can be created within a single print function,
       // for instance if each entry of a variable-length vector is directed
       // into a different buffer. New buffers can thus appear at any time.
       // I am not sure if I have dealt with this case sufficiently well yet,
       // further testing is needed.)
       // Anyway, when new buffers are created, they put in tag requests to
       // the master, which are blocking Sends and Recvs. So if the master 
       // doesn't wait for these to complete, and for example goes into a 
       // Barrier in the scanner, then a deadlock will occur. So here, we
       // the master process to sit and fulfil the tag requests
       // until everyone has passed this function. After that, tag requests can
       // only be fulfilled by the master once per iteration, which may or 
       // may not be enough to avoid future deadlocks with the scanner MPI
       // commands. Will try it out and see what happens.

       #ifdef WITH_MPI
       std::cout << "rank "<<myRank<<": Reached initialise!"<<std::endl;
       master_wait_for_tag(INIT_PASS);
       std::cout << "rank "<<myRank<<": Passed initialise!"<<std::endl;
       #endif

       return;
    }


    /// Initialisation for the auxilliary printer
    void HDF5Printer::auxilliary_init()
    {
      // Get a pointer to the primary printer
      // Need to cast it to the derived type, but this should always be safe 
      // for the auxilliary printers.
      primary_printer = dynamic_cast<HDF5Printer*>(this->get_primary_printer());

      // Fix up mpi communicator (need to copy the one created by the
      // primary printer)
      #ifdef WITH_MPI
      myComm = primary_printer->get_Comm();
      myRank = myComm.Get_rank();
      mpiSize = myComm.Get_size();
      #endif

      // Retrieve the target location for adding new datasets from the primary
      // printer
      if(myRank==0) {
         location = primary_printer->get_location();
      }
    }

    /// Destructor
    // Overload the base class virtual destructor
    HDF5Printer::~HDF5Printer()
    {
      DBUG( std::cout << "Destructing HDF5Printer object (with name=\""<<printer_name<<"\")..." << std::endl; )

      #ifdef WITH_MPI
      // Make sure to delete the MPITagManager that we created with 'new'
      if(is_primary_printer)
      {
        delete tag_manager;
      }
      #endif
    }

    /// Perform final cleanup and write tasks 
    void HDF5Printer::finalise()
    {
       // Only the primary_printer should have to do anything here, since it
       // has access to all the buffers.
       if(is_primary_printer)
       {
        DBUG( std::cout << "Performing final writes for HDF5Printer object (with name=\""<<printer_name<<"\")..." << std::endl; )

          // Make sure all the buffers are caught up to the final point.
          synchronise_buffers();          

          #ifdef WITH_MPI
          // Trigger all worker buffers to send to master, regardless of how full they are
          if(myRank!=0) 
          {
             flush();
             #ifdef MPI_DEBUG
             std::cout << "rank "<<myRank<<": Sent all buffers to master ("<<printer_name<<")"<<std::endl;
             #endif
          }
          #endif     
 
          // If the master process buffers are full, need to empty those as well
          // before (potentially) trying to receive mpi buffer messages.
          if(myRank==0) empty_sync_buffers();

          #ifdef WITH_MPI
          // Wait for all the nodes to do their final sends
          #ifdef MPI_DEBUG
          std::cout << "rank "<<myRank<<": Waiting at barrier in finalise() ("<<printer_name<<")"<<std::endl;
          #endif
          master_wait_for_tag(FINAL_PASS);
          //myComm.Barrier(); // replaced with master_wait_for_tag
          #ifdef MPI_DEBUG
          std::cout << "rank "<<myRank<<": Barrier passed ("<<printer_name<<")"<<std::endl;
          #endif
          #endif

          if(myRank==0)
          { 
             #ifdef WITH_MPI
             // Collect the worker buffers and fix up synchronisation
             
             #ifdef MPI_DEBUG
             std::cout << "rank "<<myRank<<": collect_mpi_buffers() ("<<printer_name<<")"<<std::endl;
             #endif

             #ifdef CHECK_SYNC
             check_sync("FINAL Pre-mpi-buffer-collect check (in finalise)", 1);
             #endif

             if( collect_mpi_buffers() ) 
             {
               #ifdef MPI_DEBUG
               std::cout << "rank "<<myRank<<": Syncing after FINAL collect_mpi_buffers() call (in "<<printer_name<<")"<<std::endl;
               #endif

               #ifdef CHECK_SYNC
               check_sync("FINAL Pre-mpi-buffer-collect check (in finalise)", 1);
               #endif

               synchronise_buffers();
             }

             #ifdef CHECK_SYNC
             check_sync("FINAL Post-mpi-buffer-collect check (in finalise)", 1);
             #endif

             // No more message passing should happen, so make sure that all messages
             // have been received. 
             MPI_Status status;
             if(myComm.Iprobe(MPI_ANY_SOURCE, MPI_ANY_TAG, &status))
             {
                bool bufsent = myComm.Iprobe(MPI_ANY_SOURCE, N_BUFFERS_SENT);
                std::ostringstream errmsg;
                errmsg << "Error! At least one MPI message left unreceived at end of run! Tag is "<<status.MPI_TAG
                       << " (Was there an N_BUFFERS_SENT message amongst them? answer="<<bufsent<<")";
                printer_error().raise(LOCAL_INFO, errmsg.str());
             }

             // Very very last write to disk
             #ifdef MPI_DEBUG
             std::cout << "rank "<<myRank<<": Doing very last buffer flush ("<<printer_name<<")"<<std::endl;
             #endif
                     
             #endif    
             flush();

             //std::cout << "Checking number of RA writes still postponed in buffers: " << std::endl;
             //std::cout << "(also checking that final datasets all have a consistent length)" << std::endl;
             unsigned long dset_length = 0;
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
             
                if(dset_length==0) 
                {
                   dset_length = it->second->get_dataset_length();
                }
                else if(dset_length != it->second->get_dataset_length())
                {
                   std::ostringstream errmsg;
                   errmsg << "Error! Inconsistency detected in output dataset lengths during hdf5printer::finalise(). Datasets from buffer "<<it->second->get_label()<<" have length "<<it->second->get_dataset_length()<<", but previous datasets had length "<<dset_length<<".";
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

       } //end if(is_primary_printer)
    }

    /// Retrieve pointer to HDF5 location to which datasets are added
    H5FGPtr HDF5Printer::get_location()
    {
       if(location==NULL)
       {
         std::ostringstream errmsg;
         errmsg << "Error! Tried to retrieve 'location' pointer from HDF5Printer, but it is NULL! This means the printer has not been set up correctly. This is a bug, please report it.";
         printer_error().raise(LOCAL_INFO, errmsg.str());
       }
       return location;
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
    void HDF5Printer::add_PPID_to_list(const PPIDpair& ppid)
    {
      // TODO: is this going to cause memory issues? may have to rethink...

      // Check if it is in the lookup map already
      std::map<PPIDpair, ulong>& lookup = primary_printer->global_index_lookup;
      std::vector<PPIDpair>& reverse_lookup = primary_printer->reverse_global_index_lookup;
      std::map<PPIDpair, ulong>::const_iterator it = lookup.find(ppid);
      if ( it != lookup.end() ) {
         std::ostringstream errmsg;
         errmsg << "Error! Supplied PPID already exists in global_index_lookup map! It should only be added once, so there is a bug in HDF5Printer. Please report this error.";
         printer_error().raise(LOCAL_INFO, errmsg.str());
      }
      
      // Ok, now safe to add it 
      lookup[ppid] = reverse_lookup.size();
      reverse_lookup.push_back(ppid);
    }

    /// Check if PPIDpair exists in global index list
    bool HDF5Printer::seen_PPID_before(const PPIDpair& ppid)
    {
      bool result = false;
      std::map<PPIDpair, ulong>& lookup = primary_printer->global_index_lookup;
      if ( lookup.find(ppid) != lookup.end() ) result = true;
      return result;
    }


    #ifdef WITH_MPI
    /// Clear index lists (master process should never do this!)
    /// finalsend = false by default. Set to true only for final
    /// sending of index lists; this changes the behaviour to
    /// allow a shorter message to be sent.
    void HDF5Printer::send_PPID_lists(bool finalsend)
    {
      if ( myRank==0 ) {
         std::ostringstream errmsg;
         errmsg << "Error! Master process hdf5printer tried to clear its PPID lists! This is not allowed.";
         printer_error().raise(LOCAL_INFO, errmsg.str());
      }

      std::vector<PPIDpair>& reverse_lookup = primary_printer->reverse_global_index_lookup;
      if (not finalsend and reverse_lookup.size() != BUFFERLENGTH )
      {
         std::ostringstream errmsg;
         errmsg << "Error! hdf5printer tried to clear PPID lists, but list size ("<<reverse_lookup.size()<<") was not equal to buffer size ("<<BUFFERLENGTH<<")! Should only be sending data to master node in chunks equal to BUFFERLENGTH.";
         printer_error().raise(LOCAL_INFO, errmsg.str());
      } 

      /// Check that send buffer is ready for sending (i.e. previous send is finished)
      if(not PPID_send_buffer_ready)
      { 
         // Make sure previous messages are out of the send buffer before sending new ones.
         MPI_Wait(&req_PPIDsend, &stat_PPIDsend);
         PPID_send_buffer_ready = true;
      }

      /// Copy message into send buffer
      std::copy(reverse_lookup.begin(), reverse_lookup.end(), PPID_send_buffer);

      /// Send the list to the master process
      if(finalsend)
      {  // Buffer may not be full, so check actual number of PPIDs we are sending
         myComm.Isend(&PPID_send_buffer, reverse_lookup.size(), 0 /*master*/, PPID_SEND, &req_PPIDsend);
      }
      else
      {  // If not the final send, we know that the message must be of size BUFFERLENGTH
         myComm.Isend(&PPID_send_buffer, BUFFERLENGTH, 0 /*master*/, PPID_SEND, &req_PPIDsend);
      }
      PPID_send_buffer_ready = false;

      /// Reset the lists for this process
      primary_printer->global_index_lookup.clear();
      primary_printer->reverse_global_index_lookup.clear();
    }

    /// Update the master node PPID lists with IDs from a worker node
    void HDF5Printer::receive_PPID_list(uint source)
    {
      if ( myRank!=0 ) {
         std::ostringstream errmsg;
         errmsg << "Error! Non-master process hdf5printer tried to call receive_PPID_list! This is forbidden.";
         printer_error().raise(LOCAL_INFO, errmsg.str());
      }

      /// Receive the list
      PPIDpair recv_buffer[BUFFERLENGTH];

      /// Message might be the finalsend and therefore shorter than
      /// BUFFERLENGTH; to keep the logic simple we'll just check the
      /// message length each time.
      MPI_Status status;
      myComm.Iprobe(source, PPID_SEND, &status);      
      int msgsize = GMPI::Get_count<PPIDpair>(&status);
      myComm.Recv(&recv_buffer, msgsize, source, PPID_SEND);

      //std::cout<<"rank "<<myRank<<": received "<<msgsize<<" PPIDs from rank "<<source<<std::endl;

      /// Update the lists with the new PPIDs
      for(int i=0; i<msgsize; i++)
      {
         add_PPID_to_list(recv_buffer[i]);
      }
    }
    #endif


    /// Retrieve index from global lookup table, with error checking
    ulong HDF5Printer::get_global_index(const ulong pointID, const uint mpirank)
    {
       std::map<PPIDpair, ulong>::iterator it;
       std::map<PPIDpair, ulong>& lookup = primary_printer->global_index_lookup;
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
	 errmsg << "Error! synchronise_buffers() called by auxilliary hdf5 printer (name="<<printer_name<<")! Only the primary hdf5 printer is allowed to do this. This is a bug in the HDF5Printer class, please report it."; 
	 printer_error().raise(LOCAL_INFO, errmsg.str());
      }

      // Determine the desired sync position
      // (i.e. look up how many parameter points have been generated)
      const ulong sync_pos = get_N_pointIDs()-1;  

      // Cycle through all buffers and tell them to ensure they are at the right position
      // The buffers should throw an error if we are accidentally telling them to go backwards
      // or skip too many points or anything they can't do.
      // Here though we should only be moving them forward by one position.
      #ifdef DEBUG_MODE
      std::cout<<"rank "<<myRank<<": Synchronising buffers to position "<<sync_pos<<" (message from printer: "<<printer_name<<", is_auxilliary: "<<is_auxilliary_printer()<<", synchronised: "<<synchronised<<")"<<std::endl;
      #endif 
      for (BaseBufferMap::iterator it = all_buffers.begin(); it != all_buffers.end(); it++)
      {
        // If buffer isn't flagged for synchronisation, it will just take note of the
        // new sync position for the purposes of keeping buffer lengths consistent. 
        it->second->synchronise_output_to_position(sync_pos);
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
      uint N_sync_buffers = 0;
      uint N_were_full = 0;
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

      #ifdef WITH_MPI
      // Trigger send of the PPIDs associated with these sync writes
      if(myRank != 0 and N_were_full != 0) 
      {
        send_PPID_lists(force); // force should only be true for the finalsend.
 
        // Let the master process know how many buffer messages it has been sent
        N_buffers_sent = N_were_full;
        if(not N_buffers_sent_buf_ready)
        { 
           // Make sure previous message is out of the send buffer before sending new one.
           MPI_Wait(&req_N_buffers_sent, &stat_N_buffers_sent);
           N_buffers_sent_buf_ready = true;
        }
        myComm.Isend(&N_buffers_sent, 1, 0, N_BUFFERS_SENT, &req_N_buffers_sent);
        N_buffers_sent_buf_ready = false;
        #ifdef MPI_DEBUG
        std::cout<<"rank "<<myRank<<": Sent N_buffers_sent message to master (number was "<<N_buffers_sent<<")"<<std::endl;
        #endif
      }
      #endif
    }

    #ifdef WITH_MPI
    /// Check for buffers waiting to be delivered from other processes 
    /// Returns true if sync buffers are collected, but not if RA buffers
    /// are collected (since a resync is not required in the latter case).
    bool HDF5Printer::collect_mpi_buffers()
    {
       bool collected_sync_buffers = false;
       if(is_auxilliary_printer())
       {
          std::ostringstream errmsg;
          errmsg << "Error! collect_mpi_buffers() called by auxilliary hdf5 printer (name="<<printer_name<<")! Only the primary hdf5 printer is allowed to do this. This is a bug in the HDF5Printer class, please report it."; 
          printer_error().raise(LOCAL_INFO, errmsg.str());
       }
       if(myRank!=0)
       {
          std::ostringstream errmsg;
          errmsg << "Error! Called collect_mpi_buffers() from non-master node! (myRank="<<myRank<<"). Only the master node may collect buffers from other processes.";
          printer_error().raise(LOCAL_INFO, errmsg.str());
       }
       // It is assumed that we are collecting a FULL set of buffers from some other node.
       // There may be multiple nodes sending buffers at once though, so need to make sure we
       // check for messages from only one process at a time, so that the output datasets
       // stay synchronised point-by-point

       #ifdef MPI_DEBUG
       std::cout<<"rank "<<myRank<<": Collecting mpi buffers..."<<std::endl;
       #endif

       // First we will check if any BUFFER_SENT messages are waiting.
       if(myComm.Iprobe(MPI_ANY_SOURCE, N_BUFFERS_SENT))
       {
          #ifdef MPI_DEBUG
          std::cout<<"rank "<<myRank<<": N_BUFFERS_SENT message detected..."<<std::endl;
          #endif

          collected_sync_buffers = true;
          for(uint source_rank=1; source_rank<mpiSize; source_rank++)
          {
             // If there is a N_BUFFERS_SENT message waiting from a particular process, we
             // will attempt to collect messages from all of the (synchronised) buffers.
             if(myComm.Iprobe(source_rank, N_BUFFERS_SENT))
             {
                #ifdef MPI_DEBUG
                std::cout<<"rank "<<myRank<<": Collecting buffers from process "<<source_rank<<std::endl;
                #endif

                #ifdef CHECK_SYNC
                check_sync("Pre-mpi-buffer-collect check (in collect_mpi_buffers)", 1);
                #endif

                // The N_BUFFERS_SENT message indicates that sync buffers are
                // waiting to be retrieved, to check on these first.
                uint N_buffers = 0;
                uint N_buffers_with_msg = 0;
                int exp_msgsize = 0; // Expected length of mpi buffer message (filled by probe_sync_mpi_message)
                for(BaseBufferMap::iterator it = all_buffers.begin(); it != all_buffers.end(); it++)
                {
                   VertexBufferBase* buf = it->second;
                   if(buf->is_synchronised())
                   {
                      // Check for sync buffer messages from 'source_rank'
                      int msgsize;
                      if(buf->probe_sync_mpi_message(source_rank,&msgsize))
                      {
                         if(exp_msgsize==0)
                         {
                            exp_msgsize = msgsize;
                         }
                         else if(exp_msgsize != msgsize)
                         {
                            std::ostringstream errmsg;
                            errmsg << "Error in printer_name = "<<printer_name<<"! Tried to retrieve sync buffers from rank="<<source_rank<<" process via MPI, but some message sent by buffer "<<buf->get_label()<<" has length ("<<msgsize<<") not matching the previous buffer ("<<exp_msgsize<<")! These buffers should all be from the same rank and should be synchronised!";
                            printer_error().raise(LOCAL_INFO, errmsg.str());
                         }

                         #ifdef MPI_DEBUG
                         std::cout<<"rank "<<myRank<<": Collecting buffers from process "<<source_rank<<"; expected message size is "<<exp_msgsize<<std::endl;
                         #endif
                         // Receive messages from 'source_rank'
                         // Will push all the received print data through the append system
                         // Thus it needs to happen for *every* buffer at once.
                         buf->get_sync_mpi_message(source_rank,exp_msgsize);
                         N_buffers_with_msg += 1;
                      }
                      N_buffers += 1;
                   }
                }
                // Check if any messages are missing...
                // (ask the source how many sync buffers were sent; 
                //  this may be less than the master. If it is
                //  more, then this is currently a problem. TODO: Need to
                //  make this not a problem, but it is a little tricky
                //  since the matching buffers will not exist on the
                //  master to receive the data... need to create them
                //  somehow...)
                myComm.Recv(&N_buffers_sent, 1, source_rank, N_BUFFERS_SENT);
                #ifdef MPI_DEBUG
                std::cout<<"rank "<<myRank<<": Received N_buffers_sent message from process "<<source_rank<<" (number was "<<N_buffers_sent<<")"<<std::endl;
                #endif

                // TODO: Will need to skip ahead any sync buffers that didn't receive data from
                // the worker.

                // Zero messages is not ok, N_BUFFERS_SENT message indicates that at least one must be waiting.
                if(N_buffers_with_msg!=N_buffers_sent)
                {
                   std::ostringstream errmsg;
                   errmsg << "Error in printer_name = "<<printer_name<<"! Tried to retrieve sync buffers from rank="<<source_rank<<" process via MPI, but some messages were missing! (N_buffers_with_msg ("<<N_buffers_with_msg<<") != N_buffers_sent ("<<N_buffers_sent<<") )";
                   printer_error().raise(LOCAL_INFO, errmsg.str());
                }

                #ifdef MPI_DEBUG
                std::cout<<"rank "<<myRank<<": Check for worker sync buffer messages complete; received "<<N_buffers_with_msg<<" of expected "<<N_buffers<<" (synchronised) buffers from process "<<source_rank<<std::endl;
                #endif

                // Update master PPIDs with those from the worker node
                // Will block until these are received; they should come right alongside the buffers themselves
                long npoints_init = get_N_pointIDs();
                #ifdef MPI_DEBUG
                std::cout<<"rank "<<myRank<<": npoints_init = "<<npoints_init<<std::endl;
                #endif

                receive_PPID_list(source_rank);

                long npoints_final = get_N_pointIDs();
                #ifdef MPI_DEBUG
                std::cout<<"rank "<<myRank<<": npoints_final = "<<npoints_final<<std::endl;
                std::cout<<"rank "<<myRank<<": Received "<<npoints_final-npoints_init<<" new PPIDs from process "<<source_rank<<std::endl;
                #endif

                // Make sure number of received PPIDs matches the length of the buffers that were received
                if(npoints_final-npoints_init != exp_msgsize)
                {
                   std::ostringstream errmsg;
                   errmsg << "Error in printer_name = "<<printer_name<<"! Tried to retrieve sync buffers from rank="<<source_rank<<" process via MPI, but the number of PPIDs received ("<<npoints_final-npoints_init<<") did not match the length of the buffers that were received ("<<exp_msgsize<<"); (note: N_buffers_sent = "<<N_buffers_sent<<" )";
                   printer_error().raise(LOCAL_INFO, errmsg.str());
                }

                #ifdef CHECK_SYNC
                check_sync("Post-mpi-buffer-collect (and PPID update) check (in collect_mpi_buffers)", 1);
                #endif

                /// Now check for waiting RA messages from this same source_rank
                /// Don't have to keep track of these so closely, they can come at
                /// any time. 
                /// TODO: but there will be a problem if they arrive before the PPIDs
                /// to which they want to write become known to the master rank primary
                /// printer. Need to figure out how to handle this case.
                /// TODO: there may also be some issues with datasets that get reset; an
                /// old message might come in after the reset occurs. Need to deal with
                /// this too. I guess the reset should drain all the waiting messages 
                /// first, or something.

                // We will need to drain all waiting RA messages for each buffer.
                // Though lets put a cap on the number of loops we do, to avoid getting
                // stuck here if many workers are constantly sending buffers at us
                // (but hopefully this process is much faster than the filling and 
                //  sending of new RA buffers, even by many workers).
                // TODO: The loop cap won't cause any problems during normal 
                // running, however when the final mpi_collect_buffers() command is
                // issued, it means that some messages might technically be left
                // uncollected. Should neaten this up, perhaps with a flag to
                // turn off the cap for this one case.
  
                uint loop_count = 0;
                while( myComm.Iprobe(MPI_ANY_SOURCE, RA_BUFFERS_SENT) and loop_count<100 )
                {
                  loop_count++;

                  uint N_RA_buffers_with_msg = 0;
                  for(BaseBufferMap::iterator it = all_buffers.begin(); it != all_buffers.end(); it++)
                  {
                     VertexBufferBase* buf = it->second;
                     if(not buf->is_synchronised()) // This time check the non-synchronised buffers
                     {
                        // Check for sync buffer messages from 'source_rank'
                        if(buf->probe_RA_mpi_message(source_rank))
                        {
                           // Receive messages from 'source_rank'
                           // Will push all the received print data through the RA_write commands
                           buf->get_RA_mpi_message(source_rank, global_index_lookup);
                           N_RA_buffers_with_msg += 1;
                        }
                     }
                  }
                  #ifdef MPI_DEBUG
                  std::cout<<"rank "<<myRank<<": (loop "<<loop_count<<") Check for worker RA buffer messages complete; received messages for "<<N_RA_buffers_with_msg<<" non-synchronised buffers"<<std::endl;
                  #endif               
                }
                #ifdef MPI_DEBUG
                std::cout<<"rank "<<myRank<<": Exited checks for RA buffer messages after "<<loop_count<<" loop(s)."<<std::endl;
                #endif                
             }
          }
       }
       return collected_sync_buffers;
    }

    /// Request existing tag or register a new MPI tag for a buffer
    BuffTags HDF5Printer::get_bufftags(VBIDpair bufID)
    {
       if(is_auxilliary_printer())
       {
          // Primary printer must handle the tag requests
          return primary_printer->get_bufftags(bufID);
       }

       int first_tag_in_group;

       if(myRank==0)
       {
          // We are the master, just get the tags ourselves.
          first_tag_in_group = tag_manager->get_tags(bufID);
          #ifdef MPI_DEBUG
          std::cout<<"rank "<<myRank<<": Self-retrieved first tag ("<<first_tag_in_group<<") for bufID ("<<bufID.vertexID<<","<<bufID.index<<")"<<std::endl;
          #endif
       }
       else
       {
          // Check if tags for this buffer have been received from the master
          if(tag_manager->tag_exists(bufID))
          {
             // Ok they are available, get them.
             first_tag_in_group = tag_manager->get_tags(bufID);
          }
          else
          {
             // Post non-blocking request for new tag to be issued; we will check 
             // back later to retrieve the reply.
             myComm.Isend(&bufID, 1, 0, TAG_REQ, &req_null);

             // Tell tag_manager that we are waiting for a tag for this buffer
             tag_manager->add_to_waiting_list(bufID);

             // For now, give the buffer a dummy value, so that it knows not to
             // try and send MPI messages yet.
             first_tag_in_group = -1;

             // Receive the new tag
             //myComm.Recv(&first_tag_in_group, 1, 0, TAG_REQ);
          }
       }
       // Reconstruct the whole tag group and return
       return BuffTags(first_tag_in_group);
    }

    // Check for MPI tag messages waiting to be delivered from the master
    void HDF5Printer::check_for_bufftag_deliveries()
    {
       if(not is_primary_printer)
       {
          std::ostringstream errmsg;
          errmsg << "rank "<<myRank<<": Error! Only primary printer may check_for_bufftag_deliveries()";
          printer_error().raise(LOCAL_INFO, errmsg.str());
       }
       if(myRank==0)
       {
          std::ostringstream errmsg;
          errmsg << "rank "<<myRank<<": Error! Master process is not permitted to check_for_bufftag_deliveries()";
          printer_error().raise(LOCAL_INFO, errmsg.str());
       }
       //std::cout<<"rank "<<myRank<<": checking for bufftag_deliveries "<<std::endl; 

       MPI_Status status;
       while(myComm.Iprobe(0, TAG_REQ, &status) )
       {
          // Returns true if there is a message waiting
          //std::cout<<"rank "<<myRank<<": receiving tag (TAG_REQ) "<<std::endl; 

          // Receive the message
          VBIDtrip new_tag; 
          myComm.Recv(&new_tag, 1, 0, TAG_REQ);

          // Check validity of tag
          if(new_tag.first_tag<FIRST_EMPTY_TAG)
          {
             std::ostringstream errmsg;
             errmsg << "Error! (rank "<<myRank<<"): Received invalid tags from master (new_tag.first_tag="<<new_tag.first_tag<<" < FIRST_EMPTY_TAG="<<FIRST_EMPTY_TAG<<") (i.e. is reserved, or invalid, tag value)";
             printer_error().raise(LOCAL_INFO, errmsg.str());
          }

          // buffer ID pair
          VBIDpair buffkey(new_tag.vertexID,new_tag.index);

          //std::cout<<"rank "<<myRank<<": received tag "<<new_tag.first_tag<<" for buffer ("<<new_tag.vertexID<<","<<new_tag.index<<")"<<std::endl; 

          // Register buffer as no longer missing tags
          tag_manager->remove_from_waiting_list(buffkey);

          // Give the tags to the appropriate buffer
          all_buffers.find(buffkey)->second->update_myTags(new_tag.first_tag); 
       }
       //std::cout<<"rank "<<myRank<<": finished checking for bufftag_deliveries "<<std::endl; 
       return;
    }

    #endif

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
        if(it->second->is_synchronised() and not it->second->sync_buffer_is_empty()) 
        { // do nothing, these are the sync buffers
        }
        else {
          it->second->RA_flush(primary_printer->global_index_lookup);
          //std::cout<<"rank "<<myRank<<": flushing RA buffer of "<<it->second->get_label()<<std::endl;
        }
      }
    }

    /// Invalidate all data on disk which has been printed by this printer so far,
    /// and reset all the buffers to write back to the first data slots.
    /// This is only allowed if this is an auxilliary printer with global=true, or
    /// if "force=true" is specified.
    void HDF5Printer::reset(bool force)
    {
      #ifdef DEBUG_MODE
      std::cout<<"is_auxilliary_printer() = "<<is_auxilliary_printer()<<std::endl;
      std::cout<<"synchronised            = "<<synchronised<<std::endl;
      std::cout<<"printer_name            = "<<printer_name<<std::endl;
      #endif
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
           it->second->reset(force);
         }
      }
    }

    /// For debugging: check that buffers are synced correctly
    /// Flag sets whether "perfect" sync is required, or whether
    /// some buffers can be ahead by one slot (due to having
    /// performed prints that other buffers have not yet done)
    void HDF5Printer::check_sync(const std::string& label, const int sync_type)
    {
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

         for (BaseBufferMap::iterator it = all_my_buffers.begin(); it != all_my_buffers.end(); it++)
         {
           long head_pos = it->second->dset_head_pos();
           std::string name       = it->second->get_label();
           long sync_pos_plus1 = get_N_pointIDs();

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


    /// Check whether printing to a new parameter space point is about to occur
    // and perform adjustments needed to prepare the printer.
    void HDF5Printer::check_for_new_point(const ulong candidate_newpoint, const uint mpirank)
    {
       if(myRank==0)
       {
          // Master process primary printer checks for tag requests from worker processes
          // I am hoping this check is cheap since it will happen quite a lot.
          tag_manager->check_for_tag_requests();
       }
       else
       {
          // Everyone else checks for the replies to the tag requests.
          primary_printer->check_for_bufftag_deliveries();
       }

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
         std::cout<<"rank "<<myRank<<": sync_pos="<<get_N_pointIDs()<<std::endl;
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

         #ifdef WITH_MPI
         // Check for buffers waiting to be delivered from other processes
         // (this will insert them into the local buffers BEFORE the first
         // print command at the new point occurs, so the new PPID needs
         // to also be added after the 'foreign' buffers are collected)
         if(myRank==0) 
         {
           #ifdef DEBUG_MODE
           std::cout<<"rank "<<myRank<<": calling collect_mpi_buffers() in check_for_new_point()"<<std::endl;
           #endif
           if( collect_mpi_buffers() )
           {
             #ifdef MPI_DEBUG
             std::cout<<"rank "<<myRank<<": Performing sync after collecting mpi buffers"<<std::endl;
             #endif
               
             #ifdef CHECK_SYNC
             check_sync("Post-mpi-buffer-collect check (in check_for_new_point)", 1);
             #endif

             synchronise_buffers(); 

             #ifdef CHECK_SYNC
             check_sync("Post-mpi-buffer-collect-resync check (in check_for_new_point)", 1);
             #endif
           }
         }
         #endif

         // In principle this should only happen once per pointID/process rank pair.
         // So add the new pair to the lookup table and register that we have moved to
         // a new parameter space point.
         // Note that this increases the sync_pos by 1.
         add_PPID_to_list(PPIDpair(candidate_newpoint,mpirank));
  
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

       }
    }


    // PRINT FUNCTIONS
    //----------------------------
    // Need to define one of these for every type we want to print!
    // Could use macros again to generate identical print functions 
    // for all types that have a << operator already defined.
  
    void HDF5Printer::print(std::vector<double> const& value, const std::string& label, const int vID, const uint mpirank, const ulong pointID)
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
         if(synchronised)
         {
           // Write the data to the selected buffer ("just works" for simple numeric types)
           buffer_manager.get_buffer(vID, i, ss.str()).append(value[i],PPIDpair(pointID,mpirank));
         }
         else
         {
           // Queue up a desynchronised ("random access") dataset write to previous scan iteration
           buffer_manager.get_buffer(vID, i, ss.str()).RA_write(value[i],PPIDpair(pointID,mpirank),primary_printer->global_index_lookup); 
         }
       }
    }
   
    void HDF5Printer::print(ModelParameters const& value, const std::string& label, const int vID, const uint mpirank, const ulong pointID)
    {
       // We will write to several 'double' buffers, since modelparameters are often retrieved separately
       typedef VertexBufferNumeric1D_HDF5<double,BUFFERLENGTH> BuffType;
      
       // Retrieve the buffer manager for buffers with this type
       typedef H5P_LocalBufferManager<BuffType> BuffMan;
       BuffMan& buffer_manager = get_mybuffermanager<BuffType>(pointID,mpirank);

       std::map<std::string, double> parameter_map = value.getValues();
 
       uint i=0; // index for each buffer 
       for (std::map<std::string, double>::iterator 
         it = parameter_map.begin(); it != parameter_map.end(); it++)
       {
         std::stringstream ss;
         ss<<label<<"::"<<it->first;

         // Write to each buffer
         //buffer_manager.get_buffer(vID, i, ss.str()).append(it->second);
         if(synchronised)
         {
           // Write the data to the selected buffer ("just works" for simple numeric types)
           buffer_manager.get_buffer(vID, i, ss.str()).append(it->second,PPIDpair(pointID,mpirank));
         }
         else
         {
           // Queue up a desynchronised ("random access") dataset write to previous scan iteration
           buffer_manager.get_buffer(vID, i, ss.str()).RA_write(it->second,PPIDpair(pointID,mpirank),primary_printer->global_index_lookup); 
         }
         i++;
       }
    }
 
    /// @}  
   
  } // end namespace printers
} // end namespace Gambit

#undef DBUG
#undef DEBUG_MODE
