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
///
///  *********************************************

#ifdef WITH_MPI // Contents of this file ignored if MPI not enabled

#include <iostream>
#include <vector>
#include "gambit/Utils/mpiwrapper.hpp"
#include <iostream>

namespace Gambit {
   namespace GMPI {
 
      /// @{ Main "Communicator" class
            
      /// @{ Constructors
      /// Default (attaches to MPI_COMM_WORLD):
      Comm::Comm()
        : boundcomm(MPI_COMM_WORLD)
      {
      }

      /// Duplicate input communicator (creates new context)
      Comm::Comm(const MPI_Comm& comm) 
      {
         MPI_Comm_dup(comm, &boundcomm);
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

      /// @}

      /// Check if MPI_Init has been called (it is an error to call it twice)
      bool Is_initialized() 
      { 
        int flag;
        MPI_Initialized(&flag);
        return (flag!=0);
      }

      /// @{ Helpers for registration of compound datatypes

      /// Vector storing functions to be run when MPI initialises.
      std::vector<MpiIniFunc> mpi_ini_functions;

      /// Constructor for AddMpiInitFunc
      ///
      /// AddMpiInitFunc will add functions to the map when it is constructed. Works
      /// on the same idea as the "ini_code" struct, except it doesn't
      /// cause the functions to be run, just "queues them up" so to speak.
      AddMpiIniFunc::AddMpiIniFunc(std::string local_info, std::string name, void(*func)())
      {
        mpi_ini_functions.push_back(MpiIniFunc(local_info,name,func));
      }

      /// @}

      /// Initialise MPI
      void Init(int& argc, char**& argv) {
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
           MPI_Init(&argc,&argv); 
        }

        // Create communicator and check out basic info
        Comm COMM_WORLD;

        std::cout << "  Process pool size : " << COMM_WORLD.Get_size() << std::endl;
        std::cout << "  I am process number " << COMM_WORLD.Get_rank() << std::endl;

        // Run externally defined initialisation functions
        std::cout << "  Running MPI initialisation functions..." << std::endl;
        for (std::vector<MpiIniFunc>::iterator it=mpi_ini_functions.begin();
              it != mpi_ini_functions.end(); it++)
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
      
      /// Shut down MPI
      void Finalize() { 
        Comm COMM_WORLD;
        std::cout << "Shutting down MPI (process "<< COMM_WORLD.Get_rank() <<")..." << std::endl;
        MPI_Finalize(); 
      }

   }
}


#endif
