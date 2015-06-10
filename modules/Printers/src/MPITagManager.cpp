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
#include <pthread.h> // Using pthreads for MPI listener process
#include <time.h> // For short sleeps in listener process 

// Gambit
#include "gambit/Printers/MPITagManager.hpp"
#include "gambit/Printers/new_mpi_datatypes.hpp"
#include "gambit/Core/error_handlers.hpp"

// MPI bindings
#include "gambit/Utils/mpiwrapper.hpp"

// Code!
namespace Gambit
{
  namespace Printers 
  {

    /// @{ MPITagManager member functions
    #ifdef WITH_MPI    

    /// Constructor   
    MPITagManager::MPITagManager(GMPI::Comm& pComm, int first_tag, int t_req, uint ntags)
           : first_empty_tag(first_tag)
           , next_tag(first_tag)
           , tags_per_buffer(ntags)
           , tag_req(t_req)
           , printerComm(pComm)
           , mpiRank(pComm.Get_rank())
           , mpiSize(pComm.Get_size())
    {
       if( mpiRank != 0 )
       {
          std::ostringstream errmsg;
          errmsg << "Error! Worker process tried to construct an MPITagManager object (rank is "<<mpiRank<<")! This is forbidden; all tag management must be handled via the master process, and tags dispatched to workers.";
          printer_error().raise(LOCAL_INFO, errmsg.str());
       }

       /// Start tag_daemon in new thread
       /// args: thread, thread attributes, function to run, function args
       int ret = pthread_create(&tag_daemon_thread, NULL, &MPITagManager::tag_daemon, this);
       if(ret)
       {
          std::ostringstream errmsg;
          errmsg << "Error creating tag_daemon thread! pthread_create() returned code: "<< ret; 
          printer_error().raise(LOCAL_INFO, errmsg.str());
       }
    }

    // Destructor, make sure to stop the tag_daemon
    MPITagManager::~MPITagManager()
    {
       stop_tag_daemon = true;

       /// Wait for it to finish, and re-join tag_daemon thread
       pthread_join( tag_daemon_thread, NULL);
    }
    

    /// Retrieve buffer tags from lookup map, or issue some if none yet reserved.
    /// Returned is the value of the first tag in the group; use the BuffTags
    /// constructor to get the rest (e.g. "BuffTags sometags(first_tag);")
    int MPITagManager::get_tags(const VBIDpair bufID)
    {
       std::map<VBIDpair, int>::iterator it = tags_from_VBID.find(bufID);
       if(it==tags_from_VBID.end())
       {
          // No tags yet; register some.
          int firstnewtag = next_tag;
          tags_from_VBID[bufID] = firstnewtag;
          // Increment reverse lookup and next_tag
          VBID_from_tag.push_back(bufID);
          next_tag += tags_per_buffer;
          return firstnewtag;
       }
       else
       {
          return it->second;
       }
    }

    /// Retrieve VBIDpair match a specific tag from a BuffTags collection
    VBIDpair MPITagManager::get_VBID_from_tag(const int tag)   
    {
       // correct for non-zero first tag number and multiplicity
       uint index = (tag - first_empty_tag) / tags_per_buffer; // chopping off remainder
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

    /// Tag daemon function
    /// This is run in a separate thread on the master node, and just monitors
    /// for tag requests from the worker nodes. Thread is stopped and joined
    /// when the MPITagManager destructs.
    /// Has to have this funny function signature to work with pthreads
    void* MPITagManager::tag_daemon(void* thisptr_void)
    {
       /// Trick to bring the "this" pointer into this static function
       MPITagManager* thisptr = (MPITagManager*)thisptr_void;

       /// Set sleep times
       struct timespec short_time, long_time;
       short_time.tv_nsec = 10000000; // Hundreth of a second (10^7 nanoseconds)
       long_time.tv_sec = 1; // 1 whole second 

       while(not thisptr->stop_tag_daemon)
       {
          MPI_Status status;
          while( thisptr->printerComm.Iprobe(MPI_ANY_SOURCE, thisptr->tag_req, &status) )
          {
             // Returns true if there is a message waiting
             
             // Find out who sent the message
             int sender_rank = status.MPI_SOURCE;
                
             // Receive the tag request message
             VBIDpair bufID;
             thisptr->printerComm.Recv(&bufID, 1, sender_rank, thisptr->tag_req);
 
             #ifdef MPI_DEBUG
             std::cout<<"rank "<<mpiRank<<": Receiving tag request ("<<bufID.vertexID<<","<<bufID.index<<") from rank "<<sender_rank<<std::endl;
             #endif
 
             // Do the tag lookup/issue
             int tag = thisptr->get_tags(bufID);
   
             #ifdef MPI_DEBUG
             std::cout<<"rank "<<mpiRank<<": Sending first-tag ("<<tag<<") to rank "<<sender_rank<<std::endl;
             #endif
             // Send the tag data back to the worker
             thisptr->printerComm.Send(&tag, 1, sender_rank, thisptr->tag_req);
          }
          // No more tag request messages waiting 

          // Wait a little before checking again
          if (thisptr->tag_daemon_longsleep)
          {
             // long sleep, do after all known tags are dispatched to workers
             nanosleep(&long_time,NULL);
          }
          else
          {
             // short sleep
             nanosleep(&short_time,NULL);
          }
       }
       // Finished! 
       return NULL;
    }
    #endif 
    /// @}
  
  } // end namespace Printers
} // end namespace Gambit

