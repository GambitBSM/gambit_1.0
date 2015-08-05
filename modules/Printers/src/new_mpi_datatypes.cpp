//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Function definitions for new_mpi_datatypes.hpp  
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
  namespace Printers {

     // Operators for (e.g. map) key comparisons

     bool operator<(const VBIDpair& l, const VBIDpair& r) {
        return (l.vertexID<r.vertexID || (l.vertexID==r.vertexID && l.index<r.index));
     }
     bool operator==( const VBIDpair& l, const VBIDpair& r) {
         return l.vertexID==r.vertexID && l.index==r.index;
     }    
     bool operator!=( const VBIDpair& l, const VBIDpair& r) {
         return !( l == r );
     }

     bool operator<(const VBIDtrip& l, const VBIDtrip& r) {
        return (l.vertexID<r.vertexID || (l.vertexID==r.vertexID && l.index<r.index) || (l.vertexID==r.vertexID && l.index==r.index && l.first_tag<r.first_tag) );
     }
     bool operator==( const VBIDtrip& l, const VBIDtrip& r) {
         return l.vertexID==r.vertexID && l.index==r.index && l.first_tag==r.first_tag;
     }    
     bool operator!=( const VBIDtrip& l, const VBIDtrip& r) {
         return !( l == r );
     }

     bool operator<(const PPIDpair& l, const PPIDpair& r) {
       return (l.pointID<r.pointID || (l.pointID==r.pointID && l.rank<r.rank));
     }
     bool operator==( const PPIDpair& l, const PPIDpair& r) {
         return l.pointID==r.pointID && l.rank==r.rank;
     }    
     bool operator!=( const PPIDpair& l, const PPIDpair& r) {
         return !( l == r );
     }
 
 
     #ifdef WITH_MPI 
     MPI_Datatype mpi_VBIDpair_type;  
     MPI_Datatype mpi_VBIDtrip_type;  
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
     void define_mpiVBIDtrip()
     {
        const int nitems=3;
        int          blocklengths[3] = {1,1,1};
        MPI_Datatype types[3] = {MPI_INT, MPI_UNSIGNED, MPI_UNSIGNED};
        MPI_Aint     offsets[3];

        offsets[0] = offsetof(VBIDtrip, vertexID);
        offsets[1] = offsetof(VBIDtrip, index);
        offsets[2] = offsetof(VBIDtrip, first_tag);

        MPI_Type_create_struct(nitems, blocklengths, offsets, types, &mpi_VBIDtrip_type);
        MPI_Type_commit(&mpi_VBIDtrip_type);
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
     GMPI::AddMpiIniFunc prepare_mpiVBIDtrip(LOCAL_INFO, "define_mpiVBIDtrip", &define_mpiVBIDtrip);
     GMPI::AddMpiIniFunc prepare_mpiPPIDpair(LOCAL_INFO, "define_mpiPPIDpair", &define_mpiPPIDpair);
     #endif

 }

  /// Definition needed for specialisation of GMPI::get_mpi_data_type<T>() to VBIDpair type
  /// so that template MPI Send and Receive functions work.
  //template<> MPI_Datatype GMPI::get_mpi_data_type<Printers::VBIDpair>() { return Printers::mpi_VBIDpair_type; }
  #ifdef WITH_MPI 
  MPI_Datatype GMPI::get_mpi_data_type<Printers::VBIDpair>::type() 
  { return Printers::mpi_VBIDpair_type; } 

  MPI_Datatype GMPI::get_mpi_data_type<Printers::VBIDtrip>::type() 
  { return Printers::mpi_VBIDtrip_type; } 

  MPI_Datatype GMPI::get_mpi_data_type<Printers::PPIDpair>::type() 
  { return Printers::mpi_PPIDpair_type; } 
  #endif

} // end namespace Gambit
