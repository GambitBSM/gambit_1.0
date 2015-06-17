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

#include "gambit/Utils/mpiwrapper.hpp"
#include <iostream>

namespace Gambit {
   namespace GMPI {
 
      /// @{ Main "Communicator" class
            
      /// Constructor
      Comm::Comm(MPI_Comm comm) : boundcomm(comm) {}
        
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

      /// Global "World" communicator object
      Comm COMM_WORLD(MPI_COMM_WORLD);

      /// Check if MPI_Init has been called (it is an error to call it twice)
      bool Is_initialized() 
      { 
        int flag;
        MPI_Initialized(&flag);
        return flag;
      }

      /// Initialise MPI
      void Init(int& argc, char**& argv) {
        // Do basic interrogation
        std::cout << "Hooking up to MPI..." << std::endl;
        MPI_Init(&argc,&argv); 
        std::cout << "  Process pool size : " << COMM_WORLD.Get_size() << std::endl;
        std::cout << "  I am process number " << COMM_WORLD.Get_rank() << std::endl;
      }
      
      /// Shut down MPI
      void Finalize() { 
        std::cout << "Shutting down MPI (process "<< COMM_WORLD.Get_rank() <<")..." << std::endl;
        MPI_Finalize(); 
      }

   }
}


#endif
