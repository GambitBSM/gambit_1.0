//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Definitions of new MPI datatypes needed by
///  printers.
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


#ifndef __new_mpi_datatypes_hpp__
#define __new_mpi_datatypes_hpp__

// MPI bindings
#include "gambit/Utils/mpiwrapper.hpp"

// Code!
namespace Gambit
{
  namespace Printers 
  {
    /// vertexID / sub-print index pair
    /// Identifies individual buffers (I call them VertexBuffer, but actually there can be more than one per vertex) 
    //typedef std::pair<int,uint> VBIDpair;
    struct VBIDpair {
      int   vertexID;
      uint  index;
      VBIDpair() {}
      VBIDpair(int v, uint i)
        : vertexID(v)
        , index(i)
      {}
    };
    // Needed by std::map for comparison of keys of type VBIDpair
    inline bool operator<(const VBIDpair& l, const VBIDpair& r) {
      return (l.vertexID<r.vertexID || (l.vertexID==r.vertexID && l.index<r.index));
    }

    /// pointID / process number pair
    /// Used to identify a single parameter space point
    //typedef std::pair<ulong,uint> PPIDpair;
    struct PPIDpair {
      ulong pointID;
      uint  rank;
      PPIDpair() {}
      PPIDpair(ulong p, uint r)
        : pointID(p)
        , rank(r)
      {}
    };
    // Needed by std::map for comparison of keys of type VBIDpair
    inline bool operator<(const PPIDpair& l, const PPIDpair& r) {
      return (l.pointID<r.pointID || (l.pointID==r.pointID && l.rank<r.rank));
    }
    
  } // end namespace Printers

  #ifdef WITH_MPI
  /// Declarations needed for specialisation of GMPI::get_mpi_data_type<T>::type() to VBIDpair and PPIDpair types
  namespace GMPI { 
     template<> 
     struct get_mpi_data_type<Printers::VBIDpair> 
     { 
       static MPI_Datatype type();
     }; 
     template<> 
     struct get_mpi_data_type<Printers::PPIDpair> 
     { 
       static MPI_Datatype type();
     }; 
  }
  /// Declare MPI datatype for structs VBIDpair and PPIDpair (which is what the above functions will 'get')
  extern MPI_Datatype mpi_VBIDpair_type;
  extern MPI_Datatype mpi_PPIDpair_type;
  #endif

} // end namespace Gambit


#endif
