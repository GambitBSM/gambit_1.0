//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Definitions for new_mpi_datatypes.hpp  
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

#include "gambit/Printers/new_mpi_datatypes.hpp"
#include "gambit/Core/error_handlers.hpp" // for LOCAL_INFO

// MPI bindings
#include "gambit/Utils/mpiwrapper.hpp"

// Code!
namespace Gambit
{
  #ifdef WITH_MPI 
  namespace Printers {
    
     MPI_Datatype mpi_VBIDpair_type;  
     MPI_Datatype mpi_PPIDpair_type;  

     void define_mpiVBIDpair()
     {
        const int nitems=2;
        int          blocklengths[2] = {1,1};
        MPI_Datatype types[2] = {MPI_INT, MPI_UNSIGNED};
        MPI_Aint     offsets[2];

        offsets[0] = offsetof(VBIDpair, vertexID);
        offsets[1] = offsetof(VBIDpair, index);

        MPI_Type_create_struct(nitems, blocklengths, offsets, types, &mpi_VBIDpair_type);
        MPI_Type_commit(&mpi_VBIDpair_type);
     }
     void define_mpiPPIDpair()
     {
        const int nitems=2;
        int          blocklengths[2] = {1,1};
        MPI_Datatype types[2] = {MPI_UNSIGNED_LONG, MPI_UNSIGNED};
        MPI_Aint     offsets[2];

        offsets[0] = offsetof(PPIDpair, pointID);
        offsets[1] = offsetof(PPIDpair, rank);

        MPI_Type_create_struct(nitems, blocklengths, offsets, types, &mpi_PPIDpair_type);
        MPI_Type_commit(&mpi_PPIDpair_type);
     }

     /// Queue up these functiona to run when MPI initialises
     GMPI::AddMpiIniFunc prepare_mpiVBIDpair(LOCAL_INFO, "define_mpiVBIDpair", &define_mpiVBIDpair);
     GMPI::AddMpiIniFunc prepare_mpiPPIDpair(LOCAL_INFO, "define_mpiPPIDpair", &define_mpiPPIDpair);
 }

  /// Definition needed for specialisation of GMPI::get_mpi_data_type<T>() to VBIDpair type
  /// so that template MPI Send and Receive functions work.
  //template<> MPI_Datatype GMPI::get_mpi_data_type<Printers::VBIDpair>() { return Printers::mpi_VBIDpair_type; }

  MPI_Datatype GMPI::get_mpi_data_type<Printers::VBIDpair>::type() 
  { return Printers::mpi_VBIDpair_type; } 

  MPI_Datatype GMPI::get_mpi_data_type<Printers::PPIDpair>::type() 
  { return Printers::mpi_PPIDpair_type; } 

  #endif

} // end namespace Gambit
