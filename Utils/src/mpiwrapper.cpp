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
#include <time.h> // For short sleeps in master_wait_for_tag function

#include "gambit/Utils/mpiwrapper.hpp"
#include "gambit/Utils/new_mpi_datatypes.hpp"

namespace Gambit
{

   namespace GMPI
   {
 
      /// @{ Main "Communicator" class
            
      /// @{ Constructors
      /// Default (attaches to MPI_COMM_WORLD):
      Comm::Comm() : boundcomm(MPI_COMM_WORLD)
      {
      }

      /// Copy existing communicator
      Comm::Comm(const MPI_Comm& comm) : boundcomm(comm)
      {
      }

      /// Duplicate input communicator into boundcomm
      /// (creates new context)
      /// NOTE! MPI_Comm_dup is a COLLECTIVE call, so all processes
      /// must call it! Beware deadlocks. May be better to duplicate
      /// first and then wrap in a communicator.
      void Comm::dup(const MPI_Comm& comm)
      {
         int errflag = MPI_Comm_dup(comm, &boundcomm);
         if(errflag!=0) {
           std::ostringstream errmsg;
           errmsg << "Error performing MPI_Comm_dup! Received error flag: "<<errflag; 
           utils_error().raise(LOCAL_INFO, errmsg.str());
         }
      }

      /// @}      
  
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
                  //std::cout<<"rank "<<myRank<<": Waiting for tag "<<tag<<" from process "<<sender<<std::endl;
                  Recv(&recv_buffer, 1, sender, tag); 
                  //std::cout<<"rank "<<myRank<<": Received tag "<<tag<<" from process "<<sender<<std::endl;
               }
            }
            else
            {
               // Other processes simply signal that they have passed this point.
               //std::cout<<"rank "<<myRank<<": Sending tag "<<tag<<" to process "<<0<<std::endl;
               Isend(&null_send_buffer, 1, 0 /*master*/, tag, &req_null);
            }
         }
         //std::cout<<"rank "<<myRank<<": Passed masterWaitForAll with tag "<<tag<<std::endl;
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
      //                //std::cout<<"rank "<<myRank<<": process "<<source<<" passed block? "<<passed[source]<<std::endl;
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
                  std::cout<<"rank "<<myRank<<": Sending tag "<<tag<<" to process "<<dest<<std::endl;
                  Isend(&null_send_buffer, 1, dest, tag, &req_null);
               }
            }
            else
            {
               // Keep this simple for now, and just block until message received.
               // Like above, could modify so that work could be done while waiting.
               int recv_buffer = 0; // To receive the null message
               std::cout<<"rank "<<myRank<<": Waiting for tag "<<tag<<" from process "<<0<<std::endl;
               Recv(&recv_buffer, 1, 0 /*source*/, tag);
               std::cout<<"rank "<<myRank<<": Received tag "<<tag<<" from process "<<0<<std::endl;
            }
         }
         std::cout<<"rank "<<myRank<<": Passed allWaitForMaster with tag "<<tag<<std::endl;
      }

      /// @}

      /// Check if MPI_Init has been called (it is an error to call it twice)
      bool Is_initialized() 
      { 
        int flag;
        MPI_Initialized(&flag);
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
      AddMpiIniFunc::AddMpiIniFunc(std::string local_info, std::string name, void(*func)())
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
        std::cout << "Hooking up to MPI..." << std::endl;
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

        std::cout << "  Process pool size : " << COMM_WORLD.Get_size() << std::endl;
        std::cout << "  I am process number " << COMM_WORLD.Get_rank() << std::endl;

        // Run externally defined initialisation functions
        std::cout << "  Running MPI initialisation functions..." << std::endl;
        for (std::vector<MpiIniFunc>::iterator it=get_mpi_ini_functions().begin();
              it != get_mpi_ini_functions().end(); it++)
        {
          std::cout << "    - Running function '"<<it->myname()<<"'" << std::endl;
          try
          {
             it->runme(); // Run function.
          }
          catch (const std::exception& e)
          {
             std::cout << "Gambit has failed to initialise MPI due to fatal exception: " << e.what() << std::endl;
             std::cout << "raised from an mpi_ini_function (with label="<<it->myname()<<") declared at: " << it->mylocation() << std::endl;
             throw(e);
          }
        }
        std::cout << "  MPI initialisation complete." << std::endl;
      }
      
   }
}


#endif
