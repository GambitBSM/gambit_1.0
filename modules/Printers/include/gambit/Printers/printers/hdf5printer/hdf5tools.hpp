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

namespace Gambit {
  
  namespace Printers {

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

      // modified from http://stackoverflow.com/questions/9250237/write-a-boostmulti-array-to-hdf5-dataset 
      //!_______________________________________________________________________________________
      //!     
      //!     map types to HDF5 types
      //!     
      //!     \author lg (04 March 2013)
      //!
      //!     "I have commented out lines which lead to duplicate definitions because some of 
      //!     the <stdint.h> types (e.g. uint8_t) are aliases of standard types (e.g. unsigned 
      //!     char)"
      //!_______________________________________________________________________________________ 
      template<typename T> 
      struct get_hdf5_data_type;
      // EDIT: Left undefined because I want a compile error if specialisation doesn't exist.
      //{   static H5::PredType type() 
      //    {   
      //        //static_assert(false, "Unknown HDF5 data type");
      //        return H5::PredType::NATIVE_DOUBLE; 
      //    }
      //};

      template<> struct get_hdf5_data_type<char>              { H5::IntType type()   const { return H5::PredType::NATIVE_CHAR   ; } };
      //template<> struct get_hdf5_data_type<unsigned char>   { H5::IntType type()   const { return H5::PredType::NATIVE_UCHAR  ; } };
      //template<> struct get_hdf5_data_type<short>           { H5::IntType type()   const { return H5::PredType::NATIVE_SHORT  ; } };
      //template<> struct get_hdf5_data_type<unsigned short>  { H5::IntType type()   const { return H5::PredType::NATIVE_USHORT ; } };
      //template<> struct get_hdf5_data_type<int>             { H5::IntType type()   const { return H5::PredType::NATIVE_INT    ; } };
      //template<> struct get_hdf5_data_type<unsigned int>    { H5::IntType type()   const { return H5::PredType::NATIVE_UINT   ; } };
      //template<> struct get_hdf5_data_type<long>            { H5::IntType type()   const { return H5::PredType::NATIVE_LONG   ; } };
      //template<> struct get_hdf5_data_type<unsigned long>   { H5::IntType type()   const { return H5::PredType::NATIVE_ULONG  ; } };
      template<> struct get_hdf5_data_type<long long>         { H5::IntType type()   const { return H5::PredType::NATIVE_LLONG  ; } };
      template<> struct get_hdf5_data_type<unsigned long long>{ H5::IntType type()   const { return H5::PredType::NATIVE_ULLONG ; } };
      template<> struct get_hdf5_data_type<int8_t>            { H5::IntType type()   const { return H5::PredType::NATIVE_INT8   ; } };
      template<> struct get_hdf5_data_type<uint8_t>           { H5::IntType type()   const { return H5::PredType::NATIVE_UINT8  ; } };
      template<> struct get_hdf5_data_type<int16_t>           { H5::IntType type()   const { return H5::PredType::NATIVE_INT16  ; } };
      template<> struct get_hdf5_data_type<uint16_t>          { H5::IntType type()   const { return H5::PredType::NATIVE_UINT16 ; } };
      template<> struct get_hdf5_data_type<int32_t>           { H5::IntType type()   const { return H5::PredType::NATIVE_INT32  ; } };
      template<> struct get_hdf5_data_type<uint32_t>          { H5::IntType type()   const { return H5::PredType::NATIVE_UINT32 ; } };
      template<> struct get_hdf5_data_type<int64_t>           { H5::IntType type()   const { return H5::PredType::NATIVE_INT64  ; } };
      template<> struct get_hdf5_data_type<uint64_t>          { H5::IntType type()   const { return H5::PredType::NATIVE_UINT64 ; } };
      template<> struct get_hdf5_data_type<float>             { H5::FloatType type() const { return H5::PredType::NATIVE_FLOAT  ; } };
      template<> struct get_hdf5_data_type<double>            { H5::FloatType type() const { return H5::PredType::NATIVE_DOUBLE ; } };
      template<> struct get_hdf5_data_type<long double>       { H5::FloatType type() const { return H5::PredType::NATIVE_LDOUBLE; } };

      // Bools are a bit trickier because C has no builtin boolean type (until recently; anyway 
      // the HDF5 libraries are written in C before this existed). I also want something that
      // will be recognised as a bool by h5py. For now just use an unsigned int...
      template<> struct get_hdf5_data_type<bool>              { H5::IntType type()   const { return H5::PredType::NATIVE_UINT8  ; } };


      //!_______________________________________________________________________________________


  }
}

#endif

