//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  A collection of tools for interacting with
///  HDF5 databases.
///
///  Currently I am using the C++ bindings for 
///  HDF5, however they are a bit crap and it may
///  be better to just write our own.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2015 May
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2015 Jul
///
///  *********************************************
 
#ifndef __hdf5tools_hpp__
#define __hdf5tools_hpp__

#include <cstdint>
#include <memory>
#include <sstream>
#include <iostream>
#include <algorithm>
//#include <boost/multi_array.hpp> // Used in buffers

// HDF5 C++ bindings
#include "H5Cpp.h" 
 
// Gambit
#include "gambit/Utils/standalone_error_handlers.hpp"

// MPI bindings
#include "gambit/Utils/mpiwrapper.hpp"

/// Provide template specialisation of get_hdf5_data_type only if the requested type hasn't been used to define one already.
#define SPECIALISE_HDF5_DATA_TYPE_IF_NEEDED(TYPE_CATEGORY, TYPEDEFD_TYPE, RETURN_HDF5_TYPE)                                  \
      template<typename T>                                                                                                   \
      struct get_hdf5_data_type<T, typename boost::enable_if_c< std::is_same<T, TYPEDEFD_TYPE>::value                     && \
                                                               !std::is_same<char, TYPEDEFD_TYPE>::value                  && \
                                                               !std::is_same<short, TYPEDEFD_TYPE>::value                 && \
                                                               !std::is_same<int, TYPEDEFD_TYPE>::value                   && \
                                                               !std::is_same<long, TYPEDEFD_TYPE>::value                  && \
                                                               !std::is_same<long long, TYPEDEFD_TYPE>::value             && \
                                                               !std::is_same<unsigned char, TYPEDEFD_TYPE>::value         && \
                                                               !std::is_same<unsigned short, TYPEDEFD_TYPE>::value        && \
                                                               !std::is_same<unsigned int, TYPEDEFD_TYPE>::value          && \
                                                               !std::is_same<unsigned long, TYPEDEFD_TYPE>::value         && \
                                                               !std::is_same<unsigned long long, TYPEDEFD_TYPE>::value    && \
                                                               !std::is_same<float, TYPEDEFD_TYPE>::value                 && \
                                                               !std::is_same<double, TYPEDEFD_TYPE>::value                && \
                                                               !std::is_same<long double, TYPEDEFD_TYPE>::value           && \
                                                               !std::is_same<bool, TYPEDEFD_TYPE>::value>::type >            \
      {                                                                                                                      \
         static TYPE_CATEGORY type() { return RETURN_HDF5_TYPE; }                                                            \
      };                                                                                                                     \


namespace Gambit
{
  
  namespace Printers
  {

      /// Typedefs for managed H5 pointers
      typedef std::shared_ptr<H5::CommonFG> H5FGPtr; // common ancestor of H5File and Group
      typedef std::shared_ptr<H5::H5File> H5FilePtr;
      typedef std::shared_ptr<H5::Group>  H5GroupPtr;
      
      namespace HDF5 { 
         /// Create or open hdf5 file
         // If overwrite=true then any existing file will be deleted and replaced. USE CAREFULLY!!!
         H5FilePtr openFile(const std::string& fname, bool overwrite=false);

         /// Create hdf5 file (always overwrite existing files)
         H5FilePtr createFile(const std::string& fname);

         /// Create a group inside the specified location
         // Argument "location" can be a pointer to either a file or another group
         H5GroupPtr createGroup(H5FGPtr location, const std::string& name);

         // Modified minimally from https://github.com/gregreen/h5utils/blob/master/src/h5utils.cpp#L92
         // Credit: Gregory Green 2012
         /*
          * Opens a group, creating it if it does not exist. Nonexistent parent groups are also
          * created. This works similarly to the Unix/Linux command
          * mkdir -p /parent/subgroup/group
          * in that if /parent and /parent/subgroup do not exist, they will be created.
          *
          * If no accessmode has H5Utils::DONOTCREATE flag set, then returns NULL if group
          * does not yet exist.
          *
          */ 
         H5GroupPtr openGroup(H5FilePtr file, const std::string& name, bool nocreate=false);
 
      }

      /// Base template is left undefined in order to raise 
      /// a compile error if specialisation doesn't exist.
      template<typename T, typename Enable=void> 
      struct get_hdf5_data_type;

      /// True types
      /// @{
      template<> struct get_hdf5_data_type<char>              { static H5::IntType   type() { return H5::PredType::NATIVE_CHAR   ; } };
      template<> struct get_hdf5_data_type<short>             { static H5::IntType   type() { return H5::PredType::NATIVE_SHORT  ; } };
      template<> struct get_hdf5_data_type<int>               { static H5::IntType   type() { return H5::PredType::NATIVE_INT    ; } };
      template<> struct get_hdf5_data_type<long>              { static H5::IntType   type() { return H5::PredType::NATIVE_LONG   ; } };
      template<> struct get_hdf5_data_type<long long>         { static H5::IntType   type() { return H5::PredType::NATIVE_LLONG  ; } };
      template<> struct get_hdf5_data_type<unsigned char>     { static H5::IntType   type() { return H5::PredType::NATIVE_UCHAR  ; } };
      template<> struct get_hdf5_data_type<unsigned short>    { static H5::IntType   type() { return H5::PredType::NATIVE_USHORT ; } };
      template<> struct get_hdf5_data_type<unsigned int>      { static H5::IntType   type() { return H5::PredType::NATIVE_UINT   ; } };
      template<> struct get_hdf5_data_type<unsigned long>     { static H5::IntType   type() { return H5::PredType::NATIVE_ULONG  ; } };
      template<> struct get_hdf5_data_type<unsigned long long>{ static H5::IntType   type() { return H5::PredType::NATIVE_ULLONG ; } };
      template<> struct get_hdf5_data_type<float>             { static H5::FloatType type() { return H5::PredType::NATIVE_FLOAT  ; } };
      template<> struct get_hdf5_data_type<double>            { static H5::FloatType type() { return H5::PredType::NATIVE_DOUBLE ; } };
      template<> struct get_hdf5_data_type<long double>       { static H5::FloatType type() { return H5::PredType::NATIVE_LDOUBLE; } };
      template<> struct get_hdf5_data_type<bool>              { static H5::IntType   type() { return H5::PredType::NATIVE_UINT8  ; } };
      // Bools are a bit trickier because C has no built-in boolean type (until recently; anyway 
      // the HDF5 libraries were written in C before this existed). We also want something that
      // will be recognised as a bool by h5py. For now we just use an unsigned int.
      /// @}

      /// Typedef'd types; enabled only where they differ from the true types.
      /// @{      
      SPECIALISE_HDF5_DATA_TYPE_IF_NEEDED(H5::IntType, int8_t,   H5::PredType::NATIVE_INT8)
      SPECIALISE_HDF5_DATA_TYPE_IF_NEEDED(H5::IntType, uint8_t,  H5::PredType::NATIVE_UINT8)
      SPECIALISE_HDF5_DATA_TYPE_IF_NEEDED(H5::IntType, int16_t,  H5::PredType::NATIVE_INT16)
      SPECIALISE_HDF5_DATA_TYPE_IF_NEEDED(H5::IntType, uint16_t, H5::PredType::NATIVE_UINT16)
      SPECIALISE_HDF5_DATA_TYPE_IF_NEEDED(H5::IntType, int32_t,  H5::PredType::NATIVE_INT32)
      SPECIALISE_HDF5_DATA_TYPE_IF_NEEDED(H5::IntType, uint32_t, H5::PredType::NATIVE_UINT32)
      SPECIALISE_HDF5_DATA_TYPE_IF_NEEDED(H5::IntType, int64_t,  H5::PredType::NATIVE_INT64)
      SPECIALISE_HDF5_DATA_TYPE_IF_NEEDED(H5::IntType, uint64_t, H5::PredType::NATIVE_UINT64)
      /// @}

      //!_______________________________________________________________________________________


  }
}

#endif

