//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Definitions for Gambit MPI C++ bindings.
//
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2015 Apr
///  *********************************************

#ifdef WITH_MPI // Contents of this file ignored if MPI not enabled

#include <iostream>
#include <vector>
#include <iostream>
#include <algorithm>
#include <time.h> // For nanosleep (posix only)
#include <chrono>

#include "gambit/Utils/mpiwrapper.hpp"
#include "gambit/Utils/new_mpi_datatypes.hpp"

//#define MPI_DEBUG_OUTPUT // Turn on debugging messages


namespace Gambit
{

   namespace GMPI
   {
 
      /// @{ Main "Communicator" class
            
      /// @{ Constructors
      /// Default (attaches to MPI_COMM_WORLD):
      Comm::Comm() : boundcomm(MPI_COMM_WORLD), myname("COMM_WORLD")
      {
         if(not Is_initialized())
         {
            utils_error().raise(LOCAL_INFO, "Error creating Comm object (wrapper for MPI communicator)! MPI has not been initialised!");
         }
      }

      /// Copy existing communicator
      Comm::Comm(const MPI_Comm& comm, const std::string& name) : boundcomm(comm), myname(name)
      {
         if(not Is_initialized())
         {
            utils_error().raise(LOCAL_INFO, "Error creating Comm object (wrapper for MPI communicator)! MPI has not been initialised!");
         }
      }

      /// Duplicate input communicator into boundcomm
      /// (creates new context)
      /// NOTE! MPI_Comm_dup is a COLLECTIVE call, so all processes
      /// must call it! Beware deadlocks. May sometimes be better to duplicate
      /// first and then wrap in a communicator.
      void Comm::dup(const MPI_Comm& comm, const std::string& name)
      {
         int errflag = MPI_Comm_dup(comm, &boundcomm);
         if(errflag!=0) {
           std::ostringstream errmsg;
           errmsg << "Error performing MPI_Comm_dup! Received error flag: "<<errflag; 
           utils_error().raise(LOCAL_INFO, errmsg.str());
         }
         // Change bound name
         myname = name;
      }

      /// Destructor
      ///́ Warn if any undelivered messages exist
      Comm::~Comm() { check_for_undelivered_messages(); }
      /// @}      

      /// Check for undelivered messages (unless finalize has already been called)
      void Comm::check_for_undelivered_messages()
      {
        if(not Is_finalized())
        {
          std::ostringstream errmsg;
          // Warn if any unreceived messages exist
          MPI_Status status;
          bool message_waiting = Iprobe(MPI_ANY_SOURCE, MPI_ANY_TAG, &status);
          if(message_waiting)
          {
            int source = status.MPI_SOURCE;
            int tag = status.MPI_TAG;
            LOGGER << "rank " << Get_rank() << ": WARNING! Unreceived MPI message detected (source="<<source<<", tag="<<tag<<", communicator group="<<Get_name()<<"). This may cause problems when MPI_Finalize is run." << EOM;
          }
        }
      }
  
      /// Get total number of MPI tasks in this communicator group
      int Comm::Get_size() const
      {
        int size;
        MPI_Comm_size(boundcomm,&size);
        return size;
      }

      /// Get "rank" (ID number) of current task in this communicator group
      int Comm::Get_rank() const
      {
        int rank;
        MPI_Comm_rank(boundcomm,&rank);
        return rank;
      }

      /// Get name of communicator group (for error messages)
      std::string Comm::Get_name() const
      {
        return myname;
      }

      /// Null buffer for use in master_wait_for_tag
      int null_send_buffer = 0;
      MPI_Request req_null = MPI_REQUEST_NULL;

      /// Tells master to wait until all other processes pass this function, with the specified MPI tag
      /// Could be modified to take a function pointer to loop over, 
      void Comm::masterWaitForAll(int tag)
      {
         std::size_t mpiSize = Get_size(); 
         std::size_t myRank  = Get_rank();
         if(mpiSize>1)
         {
            if(myRank==0)
            {
               for(std::size_t sender=1; sender<mpiSize; sender++)
               {
                  // Do a blocking wait for each worker, until all messages received
                  int recv_buffer = 0; // To receive the null message
                  //std::cerr<<"rank "<<myRank<<": Waiting for tag "<<tag<<" from process "<<sender<<std::endl;
                  Recv(&recv_buffer, 1, sender, tag); 
                  //std::cerr<<"rank "<<myRank<<": Received tag "<<tag<<" from process "<<sender<<std::endl;
               }
            }
            else
            {
               // Other processes simply signal that they have passed this point.
               //std::cerr<<"rank "<<myRank<<": Sending tag "<<tag<<" to process "<<0<<std::endl;
               Isend(&null_send_buffer, 1, 0 /*master*/, tag, &req_null);
            }
         }
         //std::cerr<<"rank "<<myRank<<": Passed masterWaitForAll with tag "<<tag<<std::endl;
      }

      /// Version of the above that loops over non-blocking commands. Could modify to do work
      /// in the loop while waiting for the signal.
      // void Comm::masterWaitForAll(int tag)
      // {
      //    std::size_t mpiSize = Get_size(); 
      //    std::size_t myRank  = Get_rank();
      //    if(mpiSize>1)
      //    {
      //       if(myRank==0)
      //       {
      //          MPI_Status status;
      //          int recv_buffer = 0; // To receive the null message
      //          std::vector<bool> passed(mpiSize); // should init to "false"
      //          passed[0] = true; // Set rank zero entry to 'true' so we don't wait for ourselves.

      //          // sleep setup
      //          struct timespec sleep_time;
      //          sleep_time.tv_sec  = 0.1 ; // 1/10th of second 
      //          sleep_time.tv_nsec = 0; // plus no nanoseconds

      //          while( std::find(passed.begin(), passed.end(), false) != passed.end() ) // Pass when 'false' cannot be found
      //          {
      //             // Check whether other processes have caught up yet
      //             for(std::size_t source=1;source<mpiSize;source++)
      //             {
      //                //std::cerr<<"rank "<<myRank<<": process "<<source<<" passed block? "<<passed[source]<<std::endl;
      //                if(not passed[source])
      //                {
      //                   if( Iprobe(source, tag, &status) )
      //                   {
      //                      // Ok the source has now reached this function.
      //                      passed[source] = true;
      //                      Recv(&recv_buffer, 1, source, tag);
      //                   } 
      //                }
      //             }

      //             // While waiting, could do work here.
  
      //             // sleep (is a busy sleep, but at least will avoid slamming MPI with constant Iprobes)
      //             nanosleep(&sleep_time,NULL);
      //         }
      //       }
      //       else
      //       {
      //          // Other processes simply signal that they have passed this point.
      //          Isend(&null_send_buffer, 1, 0 /*master*/, tag, &req_null);
      //       }
      //    }
      // }



      /// Tells master to wait until all other processes pass this function, with the specified MPI tag
      void Comm::allWaitForMaster(int tag)
      {
         std::size_t mpiSize = Get_size(); 
         std::size_t myRank  = Get_rank();
         if(mpiSize>1)
         {
            if(myRank==0)
            {
               // Send to everyone that we have passed the checkpoint
               // Check whether other processes have caught up yet
               for(std::size_t dest=1; dest<mpiSize; dest++)
               {
                  //std::cerr<<"rank "<<myRank<<": Sending tag "<<tag<<" to process "<<dest<<std::endl;
                  Isend(&null_send_buffer, 1, dest, tag, &req_null);
               }
            }
            else
            {
               // Keep this simple for now, and just block until message received.
               // Like above, could modify so that work could be done while waiting.
               int recv_buffer = 0; // To receive the null message
               //std::cerr<<"rank "<<myRank<<": Waiting for tag "<<tag<<" from process "<<0<<std::endl;
               Recv(&recv_buffer, 1, 0 /*source*/, tag);
               //std::cerr<<"rank "<<myRank<<": Received tag "<<tag<<" from process "<<0<<std::endl;
            }
         }
         //std::cerr<<"rank "<<myRank<<": Passed allWaitForMaster with tag "<<tag<<std::endl;
      }

      bool Comm::BarrierWithTimeout(const std::chrono::duration<double> timeout, const int tag)
      {
         std::size_t mpiSize = Get_size(); 
         std::size_t myRank  = Get_rank();
         bool timedout = false;

         std::vector<bool> entered(mpiSize); // should init to "false"
         entered[myRank] = true; // we know that we have entered the barrier
         //std::cerr<<"rank "<<myRank<<": Entered BarrierWithTimeout (with tag "<<tag<<")"<<std::endl;
         if(mpiSize>1)
         {
            int recv_buffer = 0; // To receive the null messages
            MPI_Status status;

            // First, tell all other processes that we have entered the barrier.
            IsendToAll(&null_send_buffer, 1, tag, &req_null);

            // Setup timeout interval and sleep time             
            unsigned int Nchecks = 100; // Check for messages 100 times evenly spaced over the timeout interval
            std::chrono::time_point<std::chrono::system_clock> start = std::chrono::system_clock::now();

            struct timespec sleeptime;
            sleeptime.tv_sec = 0;
            sleeptime.tv_nsec = std::chrono::duration_cast<std::chrono::nanoseconds>(timeout).count() / Nchecks;

            // Now, loop and wait for all other processes to send their own entering signals
            while( not timedout and std::find(entered.begin(), entered.end(), false) != entered.end() ) // Pass when 'false' cannot be found
            {
               // Check whether other processes have entered the barrier
               for(std::size_t source=0;source<mpiSize;source++)
               {
                  //std::cerr<<"rank "<<myRank<<": has process "<<source<<" entered BarrierWithTimeout? "<<entered[source]<<std::endl;
                  if(not entered[source])
                  {
                     if( Iprobe(source, tag, &status) )
                     {
                        // Ok the source has now reached this barrier.
                        entered[source] = true;
                        Recv(&recv_buffer, 1, source, tag);
                     } 
                  }
               }

               // While waiting, could do work here.
  
               //std::cerr << "rank " << myRank <<": sleeping... (total timeout = "<<std::chrono::duration_cast<std::chrono::seconds>(timeout).count()<<"; sleeptime = "<<sleeptime.tv_nsec*1e-9<<")"<< std::endl;
               // sleep (is a busy sleep, but at least will avoid slamming MPI with constant Iprobes)
               nanosleep(&sleeptime,NULL);

               // Check if timeout interval has been exceeded
               std::chrono::time_point<std::chrono::system_clock> current = std::chrono::system_clock::now();
               std::chrono::duration<double> time_waited = current - start;
               //std::cerr << "rank " << myRank <<": time_waited = "<<std::chrono::duration_cast<std::chrono::seconds>(time_waited).count() << std::endl;
               
               if(time_waited >= timeout) timedout = true;
            }
         }

         // if we timed out, spit out some errors
         if(timedout)
         {
            LOGGER << "rank " << myRank << ": timed out in BarrierWithTimeout (tag="<<tag<<") waiting for the following process(es): ";
            for(std::size_t source=0;source<mpiSize;source++)
            {
               if(not entered[source]) LOGGER << source << ", ";
            }
            LOGGER << EOM;
         }
         return timedout;
      }

      /// This is a fancy barrier that waits a certain amount of time after the FIRST process
      /// enters before unlocking (so that other action can be taken). This means that all the
      /// processes that enter the barrier *do* get synchronised, even if the barrier unlocks.
      /// This helps the synchronisation to be achieved next time.
      bool Comm::BarrierWithCommonTimeout(std::chrono::duration<double> timeout, 
                                          const int tag_entered, 
                                          const int tag_timeleft)
      {
         std::size_t mpiSize = Get_size(); 
         std::size_t myRank  = Get_rank();
         bool timedout = false;

         std::vector<bool> entered(mpiSize,false); // should init to "false"
         entered[myRank] = true; // we know that we have entered the barrier
         LOGGER << "Entered BarrierWithCommonTimeout; timeout="<<std::chrono::duration_cast<std::chrono::milliseconds>(timeout).count()<<" ms; tag_entered="<<tag_entered<<"; tag_timeleft="<<tag_timeleft<<EOM;
         if(mpiSize>1)
         {
            int null_recv_buffer = 0; // To receive the null messages
            MPI_Status status;

            // First, tell all other processes that we have entered the barrier
            IsendToAll(&null_send_buffer, 1, tag_entered, &req_null);

            // Setup timeout interval and sleep time             
            unsigned int Nchecks = 100; // Check for messages 100 times evenly spaced over the timeout interval
            std::chrono::time_point<std::chrono::system_clock> start = std::chrono::system_clock::now();

            struct timespec sleeptime;
            sleeptime.tv_sec = 0;
            sleeptime.tv_nsec = std::chrono::duration_cast<std::chrono::nanoseconds>(timeout).count() / Nchecks;

            // Vector to keep track of processes from which we have received "time remaining" counts.
            std::vector<bool>  received_timeleft(mpiSize,false);
            received_timeleft[myRank] = true; // Don't need to message ourselves

            // Vector to keep track of processes to which we have sent *our* "time remaining" counts.
            std::vector<bool>  sent_timeleft(mpiSize,false);
            sent_timeleft[myRank] = true; // Don't need to message ourselves
 
            // Now, loop and wait for all other processes to send their own entering signals
            while( not timedout and std::find(entered.begin(), entered.end(), false) != entered.end() ) // Pass when 'false' cannot be found
            {
               // Check which other processes have entered the barrier
               for(std::size_t source=0;source<mpiSize;source++)
               {
                  //std::cerr<<"rank "<<myRank<<": has process "<<source<<" entered BarrierWithTimeout? "<<entered[source]<<std::endl;
                  if(not entered[source] and Iprobe(source, tag_entered, &status) )
                  {
                     // Ok the source has now reached this barrier.
                     entered[source] = true;
                     Recv(&null_recv_buffer, 1, source, tag_entered);
                     LOGGER << myRank <<": "<<"Process "<<source<<" entered BarrierWithCommonTimeout."<< EOM;

                     // Clear out any other barrier entry messages that this process may have sent in previous loops
                     // (for example if it has already timed out waiting for us in this barrier for several attempts)
                     int max_loops = 10000; // Just hardcoded; if more messages than this are waiting then something crazy has happened.
                     receive_all_with_tag(&null_recv_buffer, 1, source, tag_entered, max_loops);
                  } 
               }

               // Send our "timeleft" data to all processes waiting in this loop, if we haven't already done so
               for(std::size_t source=0;source<mpiSize;source++)
               {
                  if(entered[source] and not sent_timeleft[source])
                  {
                     unsigned long buf_timeleft;
                     std::chrono::time_point<std::chrono::system_clock> current = std::chrono::system_clock::now();
                     std::chrono::duration<double> our_timeleft = timeout - (current - start);
                     buf_timeleft = std::chrono::duration_cast<std::chrono::milliseconds>(our_timeleft).count();
                     Isend(&buf_timeleft, 1, source, tag_timeleft, &req_null); 
                     sent_timeleft[source] = true;
                     LOGGER << myRank <<": "<< "Sent our_timeleft ("<<buf_timeleft<<" ms) to process "<<source<< EOM;
                  }
               }

               // From processes that we know are waiting in this loop, check for messages from them with their time_left data
               for(std::size_t source=0;source<mpiSize;source++)
               {
                  if(entered[source] and not received_timeleft[source]) // and Iprobe(source, tag_timeleft, &status) ) // wait to receive regardless of whether they have sent the message yet.
                  {
                     // Ok the source is trying to tell us how much time they have left in their Barrier, record this.
                     received_timeleft[source] = true;
                     unsigned long buf_timeleft;
                     LOGGER << myRank <<": "<< "Attempting to received their_timeleft from process "<<source<<EOM;
                     Recv(&buf_timeleft, 1, source, tag_timeleft);
                     LOGGER << myRank <<": "<< "Received their_timeleft ("<<buf_timeleft<<" ms) from process "<<source<<EOM;
                     //Update our own timeleft to reflect this
                     //i.e. subtract difference between our timeleft and theirs from total timeout time.
                     std::chrono::milliseconds their_timeleft(buf_timeleft);
                     std::chrono::time_point<std::chrono::system_clock> current = std::chrono::system_clock::now();
                     std::chrono::duration<double> our_timeleft = timeout - (current - start);
                     std::chrono::duration<double> diff = our_timeleft - their_timeleft;
                     if(diff>std::chrono::milliseconds(10)) // We have more time left than them, need to correct. But ignore discrepances of less than 100 ms.
                     {
                        timeout = timeout - diff; 
                        // Debug
                        LOGGER << myRank <<": "<< "Adjusting timeout; process "<<source<<" reports that it has "<<std::chrono::duration_cast<std::chrono::milliseconds>(their_timeleft).count()<<" ms until timeout, but we have "<<std::chrono::duration_cast<std::chrono::milliseconds>(our_timeleft).count()<<" ms left. Our remaining time is longer than theirs, so we will subtract "<<std::chrono::duration_cast<std::chrono::milliseconds>(diff).count()<<" ms to improve synchronisation." << EOM;
                     } else {
                        LOGGER << myRank <<": "<< "Difference between their_timeleft and our_timeleft is less than 10ms; will not bother to adjust." << EOM;
                     }
                  } 
               }

               // While waiting, could do work here.
  
               LOGGER << myRank <<": "<< "sleeping... (total timeout = "<<std::chrono::duration_cast<std::chrono::seconds>(timeout).count()<<"; sleeptime = "<<sleeptime.tv_nsec*1e-9<<")"<< std::endl << std::flush << EOM; // Seem to need to flush before the nanosleep for some reason, or else the message vanishes (if output to std::cerr).
               // sleep (is a busy sleep, but at least will avoid slamming MPI with constant Iprobes)
               nanosleep(&sleeptime,NULL);

               // Check if timeout interval has been exceeded
               std::chrono::time_point<std::chrono::system_clock> current = std::chrono::system_clock::now();
               std::chrono::duration<double> time_waited = current - start;
               //std::cerr << "rank " << myRank <<": time_waited = "<<std::chrono::duration_cast<std::chrono::seconds>(time_waited).count() << std::endl;
               
               if(time_waited >= timeout) timedout = true;
               LOGGER << myRank <<": "<< "End of wait loop; time left to timeout: "<<std::chrono::duration_cast<std::chrono::milliseconds>(timeout - time_waited).count()<<" ms"<<EOM;
            }


            // Check that we didn't screw up the logic and leave some message unreceived somehow
            for(std::size_t source=0;source<mpiSize;source++)
            {
               if((not timedout) and not entered[source])
               {
                 // Supposedly the synchronisation succeeded, but process 'source' is not recorded as having entered the barrier!
                 LOGGER << "Error! Exiting BarrierWithCommonTimeout, but inconsistency in final state detected. Synchronisation registered as successful, but process "<<source<<" was not detected as having entered the barrier!"<<EOM;
               }
   
               if(entered[source])
               {
                 if(not sent_timeleft[source])
                 {
                    LOGGER << "WARNING! Exiting BarrierWithCommonTimeout, but inconsistency in final state detect. Process "<<source<<" was detected as having entered the barrier, however we (process "<<myRank<<") did not send 'our_timeleft' to that process"<<EOM;
                 }
   
                 // From processes that we know are waiting in this loop, check for messages from them with their time_left data
                 if(not received_timeleft[source])
                 {
                    LOGGER << "WARNING! Exiting BarrierWithCommonTimeout, but inconsistency in final state detect. Process "<<source<<" was detected as having entered the barrier, however we (process "<<myRank<<") did not received 'their_timeleft' from that process"<<EOM;
                 }
               }
            }

            /// Clear out any remaining MPI messages related to this barrier that we might have missed.
            //int max_loops = 2*Get_size();

            //int null_recv_buffer = 0;
            //receive_all_with_tag(&null_recv_buffer, 1, MPI_ANY_SOURCE, tag_entered, max_loops, errorlog);

            //unsigned long null_buf_timeleft;
            //receive_all_with_tag(&null_buf_timeleft, 1, MPI_ANY_SOURCE, tag_timeleft, max_loops, errorlog);

         }

         // if we timed out, spit out some errors
         if(timedout)
         {
            LOGGER << "rank " << myRank << ": timed out in BarrierWithCommonTimeout (tag_entered="<<tag_entered<<") waiting for the following process(es): ";
            for(std::size_t source=0;source<mpiSize;source++)
            {
               if(not entered[source]) LOGGER << source << ", ";
            }
            LOGGER << std::endl;
         }
         LOGGER << "Leaving BarrierWithCommonTimeout (tag_entered="<<tag_entered<<")"<<EOM;
         return timedout;
      }

      /// @}

      /// Check if MPI_Init has been called (it is an error to call it twice)
      bool Is_initialized() 
      { 
        int flag;
        MPI_Initialized(&flag);
        return (flag!=0);
      }

      /// Check if MPI_Finalize has been called (it is an error to do anything else after this)
      bool Is_finalized()
      {
        int flag;
        MPI_Finalized(&flag);
        return (flag!=0);
      }

      /// @{ Helpers for registration of compound datatypes

      /// Get vector storing functions to be run when MPI initialises.
      std::vector<MpiIniFunc>& get_mpi_ini_functions()
      {
         static std::vector<MpiIniFunc> mpi_ini_functions;
         return mpi_ini_functions;
      }

      /// Constructor for AddMpiInitFunc
      ///
      /// AddMpiInitFunc will add functions to the map when it is constructed. Works
      /// on the same idea as the "ini_code" struct, except it doesn't
      /// cause the functions to be run, just "queues them up" so to speak.
      AddMpiIniFunc::AddMpiIniFunc(const std::string& local_info, const std::string& name, void(*func)())
      {
         get_mpi_ini_functions().push_back(MpiIniFunc(local_info,name,func));
      }

      /// @}

      /// Initialise MPI
      void Init()
      {
        // Dummies; can't rely on being able to use these seriously as the MPI standard doesn't mandate it.
        int argc = 0;
        char** argv = NULL;

        // Run any functions needed to queue up MPI datatype definition functions
        // (still a little hacky, but works)
        Printers::queue_mpidefs();

        // Do basic interrogation
        #ifdef MPI_DEBUG_OUTPUT
        std::cerr << "Hooking up to MPI..." << std::endl;
        #endif
        if(Is_initialized())
        {
           std::ostringstream errmsg;
           errmsg << "Error initialising MPI! It is already initialised!"; 
           utils_error().raise(LOCAL_INFO, errmsg.str());
        } 
        else
        {
           int errflag;
           errflag = MPI_Init(&argc,&argv);

           // // Test case for thread-safe MPI. Probably not going to use this though.
           // int provided; // output; level of thread support provided (may not meet the requested level)    
           // errflag = MPI_Init_thread(&argc,&argv,MPI_THREAD_FUNNELED,&provided);
           // if(provided<MPI_THREAD_MULTIPLE)
           // {
           //    std::ostringstream errmsg;
           //    errmsg << "Error initialising MPI with thread support level MPI_THREAD_FUNNELED. The implementation did not provide the requested level of thread support; the best it could do was ";
           //    switch(provided)
           //    {
           //       case MPI_THREAD_SINGLE:     errmsg<<"MPI_THREAD_SINGLE"; break;
           //       case MPI_THREAD_FUNNELED:   errmsg<<"MPI_THREAD_FUNNELED"; break;
           //       case MPI_THREAD_SERIALIZED: errmsg<<"MPI_THREAD_SERIALIZED"; break;
           //       case MPI_THREAD_MULTIPLE:   errmsg<<"MPI_THREAD_MULTIPLE"; break;
           //       default: errmsg<<"[UNRECOGNISED CODE!!!]"; break;
           //    }
           //    utils_error().raise(LOCAL_INFO, errmsg.str());
           // }

           if(errflag!=0) {
              std::ostringstream errmsg;
              errmsg << "Error initialising MPI! Received error flag: "<<errflag; 
              utils_error().raise(LOCAL_INFO, errmsg.str());
           }
        }

        // Create communicator and check out basic info
        Comm COMM_WORLD;

        #ifdef MPI_DEBUG_OUTPUT
        std::cerr << "  Process pool size : " << COMM_WORLD.Get_size() << std::endl;
        std::cerr << "  I am process number " << COMM_WORLD.Get_rank() << std::endl;

        // Run externally defined initialisation functions
        std::cerr << "  Running MPI initialisation functions..." << std::endl;
        #endif
        for (std::vector<MpiIniFunc>::iterator it=get_mpi_ini_functions().begin();
              it != get_mpi_ini_functions().end(); it++)
        {
         #ifdef MPI_DEBUG_OUTPUT
         std::cerr << "    - Running function '"<<it->myname()<<"'" << std::endl;
         #endif
          try
          {
             it->runme(); // Run function.
          }
          catch (const std::exception& e)
          {
             std::cerr << "Gambit has failed to initialise MPI due to fatal exception: " << e.what() << std::endl;
             std::cerr << "raised from an mpi_ini_function (with label="<<it->myname()<<") declared at: " << it->mylocation() << std::endl;
             throw(e);
          }
        }
        #ifdef MPI_DEBUG_OUTPUT
        std::cerr << "  MPI initialisation complete." << std::endl;
        #endif
      }

      // Finalize MPI, also check for pending messages as these could cause MPI_Finalize() to hang
      void Finalize()
      {
        if(not Is_finalized() and Is_initialized())
        {
          {
            Comm COMM_WORLD;
            #ifdef MPI_DEBUG_OUTPUT
            std::cerr << "rank " << COMM_WORLD.Get_rank() << ": Shutting down MPI..." << std::endl;
            #endif
          // Warn if any unreceived messages exist from WORLD (when it is destructed). Undelivered messages from other communicators are checked when their wrappers are destructed, so try to make sure this happens before finalize is called, otherwise the warnings will not occur. 
          }
          MPI_Finalize();
        }
      }
   }
}


#endif
