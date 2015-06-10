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
    };
    // Needed by std::map for comparison of keys of type VBIDpair
    inline bool operator<(const VBIDpair& l, const VBIDpair& r) {
      return (l.vertexID<r.vertexID || (l.vertexID==r.vertexID && l.index<r.index));
    }
    
  } // end namespace Printers

  #ifdef WITH_MPI
  /// Declarations needed for specialisation of GMPI::get_mpi_data_type<T>() to VBIDpair type
  namespace GMPI { template<> MPI_Datatype get_mpi_data_type<Printers::VBIDpair>(); }
  /// Declare MPI datatype for struct VBIDpair (which is what the above function will 'get')
  extern MPI_Datatype mpi_VBIDpair_type;
  #endif

} // end namespace Gambit


#endif
