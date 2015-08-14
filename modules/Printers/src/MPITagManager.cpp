//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Member function definitions for
///  MPITagManager class
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
#include <sstream>
#include <iostream>
//#include <pthread.h> // Using pthreads for MPI listener process
#include <time.h> // For short sleeps in listener process 

// Gambit
#include "gambit/Logs/log.hpp"
#include "gambit/Printers/MPITagManager.hpp"
#include "gambit/Core/error_handlers.hpp"

// MPI bindings
#include "gambit/Utils/mpiwrapper.hpp"
#include "gambit/Utils/new_mpi_datatypes.hpp"

// Code!
namespace Gambit
{
  namespace Printers 
  {

    /// @{ MPITagManager member functions
    #ifdef WITH_MPI    

    /// Constructor   
    MPITagManager::MPITagManager(GMPI::Comm& pComm, int first_tag, int t_req, unsigned int ntags)
           : first_empty_tag(first_tag)
           , next_tag(first_tag)
           , tags_per_buffer(ntags)
           , tag_req(t_req)
           , printerComm(pComm)
           , mpiRank(pComm.Get_rank())
           , mpiSize(pComm.Get_size())
    {
       // This is allowed on other processes now, in a limited capacity.
       // if( mpiRank != 0 )
       // {
       //    std::ostringstream errmsg;
       //    errmsg << "Error! Worker process tried to construct an MPITagManager object (rank is "<<mpiRank<<")! This is forbidden; all tag management must be handled via the master process, and tags dispatched to workers.";
       //    printer_error().raise(LOCAL_INFO, errmsg.str());
       // }

       //// /// Start tag_daemon in new thread, if it is needed (i.e. if there is more than one process)
       //// /// args: thread, thread attributes, function to run, function args
       //// if( mpiSize>1 )
       //// {
       ////    int ret = pthread_create(&tag_daemon_thread, NULL, &MPITagManager::tag_daemon, this);
       ////    if(ret)
       ////    {
       ////       std::ostringstream errmsg;
       ////       errmsg << "Error creating tag_daemon thread! pthread_create() returned code: "<< ret; 
       ////       printer_error().raise(LOCAL_INFO, errmsg.str());
       ////    }
       //// }
    }

    // Destructor, make sure to stop the tag_daemon
    MPITagManager::~MPITagManager()
    {
       //// stop_tag_daemon = true;

       //// /// Wait for it to finish, and re-join tag_daemon thread
       //// if( mpiSize>1 ) pthread_join(tag_daemon_thread, NULL);
    }
    
    /// Notify tag manager that a buffer is waiting for tags to be issued
    void MPITagManager::add_to_waiting_list(const VBIDpair bufID)
    {
       std::vector<VBIDpair>::iterator it = std::find(waiting_list.begin(), waiting_list.end(), bufID);
       if(it!=waiting_list.end())
       {
          std::ostringstream errmsg;
          errmsg << "Error! Buffer with VBIDpair ("<<bufID.vertexID<<", "<<bufID.index<<") is already waiting to receive MPI tags! Should not be added to the waiting list twice.";
          printer_error().raise(LOCAL_INFO, errmsg.str());
       }
       waiting_list.push_back(bufID);
    }

    void MPITagManager::remove_from_waiting_list(const VBIDpair bufID)
    {
       std::vector<VBIDpair>::iterator it = std::find(waiting_list.begin(), waiting_list.end(), bufID);
       if(it==waiting_list.end())
       {
          std::ostringstream errmsg;
          errmsg << "Error! Buffer with VBIDpair ("<<bufID.vertexID<<", "<<bufID.index<<") is not present in the waiting_list! Therefore cannot remove it.";
          printer_error().raise(LOCAL_INFO, errmsg.str());
       }
       waiting_list.erase(it);
    }


    /// Retrieve buffer tags from lookup map, or issue some if none yet reserved.
    /// Returned is the value of the first tag in the group; use the BuffTags
    /// constructor to get the rest (e.g. "BuffTags sometags(first_tag);")
    int MPITagManager::get_tags(const VBIDpair bufID)
    {
       std::map<VBIDpair, int>::iterator it = tags_from_VBID.find(bufID);
       if(it==tags_from_VBID.end())
       {
          return register_new_tags(bufID);
       }
       else
       {
          return it->second;
       }
    }

    int MPITagManager::register_new_tags(const VBIDpair bufID)
    {
       std::map<VBIDpair, int>::iterator it = tags_from_VBID.find(bufID);
       if(it!=tags_from_VBID.end())
       {
          std::ostringstream errmsg;
          errmsg<<"Error! Tags are already registered for buffer ("<<bufID.vertexID<<", "<<bufID.index<<")";
          printer_error().raise(LOCAL_INFO, errmsg.str());
       }
       if(mpiRank!=0)
       {
          std::ostringstream errmsg;
          errmsg << "rank "<<mpiRank<<": Error! Only master process is permitted to register_new_tags using this particular overload";
          printer_error().raise(LOCAL_INFO, errmsg.str());
       }

       int firstnewtag = next_tag; // first tag of the newly registered group.
       tags_from_VBID[bufID] = firstnewtag;
       // Increment reverse lookup and next_tag
       VBID_from_tag.push_back(bufID);
       next_tag += tags_per_buffer;
       return firstnewtag;
    }
   
    void MPITagManager::register_new_tags(const VBIDtrip in)
    {
       VBIDpair bufID(in.vertexID,in.index);
       uint tag = in.first_tag;

       std::map<VBIDpair, int>::iterator it = tags_from_VBID.find(bufID);
       if(it!=tags_from_VBID.end())
       {
          std::ostringstream errmsg;
          errmsg<<"Error! Tags are already registered for buffer ("<<bufID.vertexID<<", "<<bufID.index<<")";
          printer_error().raise(LOCAL_INFO, errmsg.str());
       }
       if(mpiRank==0)
       {
          std::ostringstream errmsg;
          errmsg << "rank "<<mpiRank<<": Error! Master process is not permitted to register_new_tags using this particular overload";
          printer_error().raise(LOCAL_INFO, errmsg.str());
       }
   
       tags_from_VBID[bufID] = tag;
       // VBID_from_tag.push_back(bufID); // THIS WAY AROUND DOESN'T WORK EXCEPT ON MASTER PROCESS!
       return;
    }
   
    /// Check if tag exists for a given buffer ID
    bool MPITagManager::tag_exists(const VBIDpair bufID)
    {
       bool result = true;
       std::map<VBIDpair, int>::iterator it = tags_from_VBID.find(bufID);
       if(it==tags_from_VBID.end()) result = false;
       return result;
    }

    /// Retrieve VBIDpair match a specific tag from a BuffTags collection
    VBIDpair MPITagManager::get_VBID_from_tag(const int tag)   
    {
       if(mpiRank!=0)
       {
          std::ostringstream errmsg;
          errmsg << "rank "<<mpiRank<<": Error! Entries in VBID_from_tag vector only correspond to valid tags on the master process. Their use is forbidden in other processes.";
          printer_error().raise(LOCAL_INFO, errmsg.str());
       }

       // correct for non-zero first tag number and multiplicity
       unsigned int index = (tag - first_empty_tag) / tags_per_buffer; // chopping off remainder
       if(index>=VBID_from_tag.size())
       {
          std::ostringstream errmsg;
          errmsg << "Error! Invalid MPI tag received; tag '"<<tag<<"' is not registered with this MPITagManager."<<std::endl;
          errmsg << "  Computed index ("<<index<<") >= VBID_from_tag.size() ("<<VBID_from_tag.size()<<")"<<std::endl;
          errmsg << "  index = (tag - first_empty_tag) / tags_per_buffer,  with: "<<std::endl;
          errmsg << "    first_empty_tag = "<<first_empty_tag<<std::endl;
          errmsg << "    tags_per_buffer = "<<tags_per_buffer<<std::endl;
          printer_error().raise(LOCAL_INFO, errmsg.str());
       }
       return VBID_from_tag[index];
    }

    /// Check for a tag request and fulfil it if found
    void MPITagManager::check_for_tag_requests()
    {
       // Error if this is not the master process
       if(mpiRank!=0)
       {
          std::ostringstream errmsg;
          errmsg << "rank "<<mpiRank<<": Error! Only master process is permitted to check_for_tag_requests()";
          printer_error().raise(LOCAL_INFO, errmsg.str());
       }

       MPI_Status status;
       while(printerComm.Iprobe(MPI_ANY_SOURCE, tag_req, &status) )
       {
          // Returns true if there is a message waiting
  
          // Find out who sent the message
          int sender_rank(-1);
          sender_rank = status.MPI_SOURCE;
          #ifdef MPI_DEBUG
          std::cout<<"rank "<<mpiRank<<": Noticed tag request message from rank "<<sender_rank<<", triggering Recv..."<<std::endl;
          #endif
            
          // Receive the tag request message
          VBIDpair bufID;
          printerComm.Recv(&bufID, 1, sender_rank, tag_req);
 
          //#ifdef MPI_DEBUG
          std::cout<<"rank "<<mpiRank<<": Received tag request ("<<bufID.vertexID<<","<<bufID.index<<") from rank "<<sender_rank<<std::endl;
          //#endif
 
          // Do the tag lookup/issue
          int tag = get_tags(bufID);
   
          // Attach it to the bufID and stick into a new send buffer
          msg_buffer.push_back(VBIDtrip(bufID,tag)); 
          int N = msg_buffer.size()-1; // index of new send buffer
      
          //#ifdef MPI_DEBUG
          std::cout<<"rank "<<mpiRank<<": Sending first-tag ("<<tag<<") to rank "<<sender_rank<<std::endl;
          std::cout<<"rank "<<mpiRank<<": tag check = "<<(&msg_buffer[N])->first_tag<<std::endl;
          //#endif

          // Send the tag data back to the worker
          //printerComm.Send(&tag, 1, sender_rank, tag_req);
          printerComm.Isend(&msg_buffer[N], 1, sender_rank, tag_req, &req_null);
       }
       // No more tag request messages waiting 

       return;
    }


    //// TODO: Tag daemon thread seemed to cause problems with MPI, now master process simply
    //// checks for tag requests every loop. Bit more wasteful but removes need for a new thread.

    //// /// Tag daemon function
    //// /// This is run in a separate thread on the master node, and just monitors
    //// /// for tag requests from the worker nodes. Thread is stopped and joined
    //// /// when the MPITagManager destructs.
    //// /// Has to have this funny function signature to work with pthreads
    //// void* MPITagManager::tag_daemon(void* thisptr_void)
    //// {
    ////    /// Trick to bring the "this" pointer into this static function
    ////    MPITagManager* thisptr = (MPITagManager*)thisptr_void;

    ////    logger() << LogTags::printers << "rank "<<thisptr->mpiRank<<": Starting MPITagManager::tag_daemon thread" << EOM;

    ////    /// Set sleep times
    ////    struct timespec short_time, long_time;
    ////    //short_time.tv_nsec = 10000000; // Hundreth of a second (10^7 nanoseconds)
    ////    short_time.tv_sec  = 0; // No seconds
    ////    short_time.tv_nsec = 100000000; // plus one tenth of a second (10^8 nanoseconds)
    ////    long_time.tv_sec  = 1; // 1 whole second 
    ////    long_time.tv_nsec = 0; // plus no nanoseconds

    ////    #ifdef MPI_DEBUG
    ////    std::cout<<"rank "<<thisptr->mpiRank<<": (Tag daemon) checking for incoming tag requests..."<<std::endl;
    ////    #endif

    ////    while(not thisptr->stop_tag_daemon)
    ////    {
    ////       thisptr->check_for_tag_requests();

    ////       // Wait a little before checking again
    ////       if (thisptr->tag_daemon_longsleep)
    ////       {
    ////          // long sleep, do after all known tags are dispatched to workers
    ////          nanosleep(&long_time,NULL);
    ////       }
    ////       else
    ////       {
    ////          // short sleep
    ////          nanosleep(&short_time,NULL);
    ////       }

    ////       if(thisptr->stop_tag_daemon)
    ////       {
    ////          #ifdef MPI_DEBUG
    ////          std::cout<<"rank "<<thisptr->mpiRank<<": tag_daemon noticed stop signal in Iprobe loop; abandoning message."<<std::endl;
    ////          #endif
    ////          // Should cause while condition to switch
    ////       }
    ////    }
    ////    #ifdef MPI_DEBUG
    ////    std::cout<<"rank "<<thisptr->mpiRank<<": tag_daemon noticed stop signal; ending listener loop."<<std::endl;
    ////    #endif

    ////    logger() << LogTags::printers << "rank "<<thisptr->mpiRank<<": Terminating MPITagManager::tag_daemon thread" << EOM;

    ////    //// // Finished! 
    ////    //// pthread_exit(NULL);  
    //// }

    #endif 
    /// @}
  
  } // end namespace Printers
} // end namespace Gambit

