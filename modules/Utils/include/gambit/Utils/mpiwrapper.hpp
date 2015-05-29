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

      /// Mapping from (basic) C++ types to MPI datatypes
      /// Idea based off of "get_hdf5_data_type" in hdf5tools.hpp

      template<typename T> 
      int get_mpi_data_type();
      // Left undefined because I want a compile error if specialisation doesn't exist.

      int get_mpi_data_type<char>              { return MPI_CHAR               };
      // bunch of types omitted in get_hdf5_data_type for reasons not totally clear to me...
      int get_mpi_data_type<long long>         { return MPI_LONG_LONG          };
      int get_mpi_data_type<unsigned long long>{ return MPI_UNSIGNED_LONG_LONG };
      int get_mpi_data_type<int8_t>            { return MPI_INT8_T             };
      int get_mpi_data_type<uint8_t>           { return MPI_UINT8_T            };
      int get_mpi_data_type<int16_t>           { return MPI_INT16_T            };
      int get_mpi_data_type<uint16_t>          { return MPI_UINT16_T           };
      int get_mpi_data_type<int32_t>           { return MPI_INT32_T            };
      int get_mpi_data_type<uint32_t>          { return MPI_UINT32_T           };
      int get_mpi_data_type<int64_t>           { return MPI_INT64_T            };
      int get_mpi_data_type<uint64_t>          { return MPI_UINT64_T           };
      int get_mpi_data_type<float>             { return MPI_FLOAT              };
      int get_mpi_data_type<double>            { return MPI_DOUBLE             };
      int get_mpi_data_type<long double>       { return MPI_LONG_DOUBLE        };

 
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

            /// Blocking receive
            ///  void*        buf      - memory address in which to store received message
            ///  int          count    - number of elements in message
            ///  MPI_Datatype datatpye - datatype of each message element
            ///  int          source   - rank of sending (receiving?) process
            ///  int          tag      - message tag          
            ///  MPI_status*  status   - struct containing data about the received message
            /// Returns:
            ///  MPI_status - struct containing data about the received message
            void Recv(void *buf, int count, MPI_Datatype datatype, 
                                  int source, int tag, 
                                  MPI_Status *status=MPI_STATUS_IGNORE)
            {
               int errflag; 
               errflag = MPI_Recv(buf, count, datatype, source, tag, boundcomm, status)
            }

            /// Templated blocking receive to automatically determine types
            template<class T>
            void Recv(T *buf, int count, 
                      int source, int tag, 
                      MPI_Status *status=MPI_STATUS_IGNORE)
            {
               static const int datatype = get_mpi_data_type<T>();
               Recv(buf, count, datatype, source, tag, status);
            }

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

