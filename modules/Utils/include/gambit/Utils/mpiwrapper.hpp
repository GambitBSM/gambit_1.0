//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  A simple C++ wrapper for the MPI C bindings.
///  It is by no means comprehensive, and is just
///  intended to simplify some MPI commands within
///  Gambit.
///
///  Extend as needed.
///
///  Note: Some C++ bindings already exist, but
///  it appears that they are deprecated in really
///  new versions of the MPI standard, and don't
///  offer functionality over the C bindings
///  anyway. I have nevertheless mirrored the names
///  of some of the deprecated C++ bindings, in
///  case it helps some people who were used to
///  them.
///
///  There is also boost/mpi, but it is a compiled
///  library and we have been avoiding those.  
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2015 Apr
///
///  *********************************************

// WITH_MPI macro determines whether MPI is used or not
// Defined at compile time by cmake. (using something like -DWITH_MPI, in gcc case)

#ifdef WITH_MPI // Contents of this file ignored if MPI not enabled
#ifndef __mpiwrapper_hpp__
#define __mpiwrapper_hpp__

#include <mpi.h>

namespace Gambit {
   namespace GMPI {
 
      /// Main "Communicator" class
      class Comm
      {
         public:
            /// Constructor
            Comm(MPI_Comm comm);
        
            /// Get total number of MPI tasks in this communicator group
            int Get_size() const;

            /// Get "rank" (ID number) of current task in this communicator group
            int Get_rank() const;

         private:
            // The MPI communicator to which the current object "talks".
            const MPI_Comm boundcomm;
      };

      /// Global "World" communicator object
      extern Comm COMM_WORLD;

      /// Check if MPI_Init has been called (it is an error to call it twice)
      bool Is_initialized(); 
      
      /// Initialise MPI
      /// The arguments are required in order to "fix up" the command line 
      /// arguments so that they match their positions when the "mpirun -n X" 
      /// wrapper call is absent.
      void Init(int& argc, char**& argv);

      /// Shut down MPI
      void Finalize();

   }
}


#endif // include guard
#endif // MPI

