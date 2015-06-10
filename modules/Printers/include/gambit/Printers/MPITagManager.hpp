//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  MPITagManager class declaration
///
///  This class is designed for use with the
///  hdf5 printer, for issuing unique MPI tags to
///  output buffers. However it may be useful for 
///  other printers, so I have put it in the more
///  general include path.
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


#ifndef __MPITagManager_hpp__
#define __MPITagManager_hpp__

// Standard libraries
#include <map>
#include <vector>
#include <pthread.h> // Using pthreads for MPI listener process
#include <time.h> // For short sleeps in listener process 

// Gambit
#include "gambit/Printers/new_mpi_datatypes.hpp"

// MPI bindings
#include "gambit/Utils/mpiwrapper.hpp"


// Code!
namespace Gambit
{
  namespace Printers 
  {

    #ifdef WITH_MPI
    /// Class for monitoring and issuing unique MPI tags for each hdf5 buffer object
    /// Need this in order to match the buffers from workers to the output datasets
    /// in the master process.
    class MPITagManager
    {
      private:
        /// First unclaimed tag known to this object
        const int first_empty_tag;
        /// Next unclaimed tag
        int next_tag;
        const int tags_per_buffer; // Make sure this matches BuffTags
        /// Tag to use for tag requests
        int tag_req;

        /// Match buffer IDs to (first of an) MPI tag group
        std::map<VBIDpair, int> tags_from_VBID;

        /// Reverse lookup; need to quickly figure out which VBIDpair an 
        /// individual tag belongs to.
        /// Note that there is an offset between the vector indices and the tag
        /// numbers, and that we only store one VBID per tags_per_buffer tags.
        std::vector<VBIDpair> VBID_from_tag;

        /// MPI properties
        GMPI::Comm& printerComm;
        uint mpiRank;
        uint mpiSize;

        /// tag_daemon thread
        pthread_t tag_daemon_thread;

        /// Flag to trigger tag_daemon "long sleep" mode
        /// (i.e. waits longer between polls for new messages)
        bool tag_daemon_longsleep = false;

        /// Flag to stop the tag_daemon thread
        bool stop_tag_daemon = false;

      public:
        MPITagManager(GMPI::Comm& pComm, int first_free_tag, int tag_req, uint tags_per_buffer);

        // Destructor, make sure to stop the tag_daemon
        ~MPITagManager();

        /// Retrieve buffer tags from lookup map, or issue some if none yet reserved.
        /// Returned is the value of the first tag in the group; use the BuffTags
        /// constructor to get the rest (e.g. "BuffTags sometags(first_tag);")
        int get_tags(const VBIDpair bufID);

        /// Retrieve VBIDpair match a specific tag from a BuffTags collection
        VBIDpair get_VBID_from_tag(const int tag); 

        /// Tag daemon function
        /// This is run in a separate thread on the master node, and just monitors
        /// for tag requests from the worker nodes. Thread is stopped and joined
        /// when the MPITagManager destructs.
        /// Has to have this funny function signature to work with pthreads
        static void* tag_daemon(void* thisptr_void);

    };
    #endif
    
  } // end namespace Printers
} // end namespace Gambit

#endif
