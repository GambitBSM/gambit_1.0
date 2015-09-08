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

#include "gambit/Utils/standalone_error_handlers.hpp"
#include "gambit/Utils/mpiwrapper.hpp"

#include <hdf5.h>
#include <boost/utility/enable_if.hpp>


/// Provide template specialisation of get_hdf5_data_type only if the requested type hasn't been used to define one already.
#define SPECIALISE_HDF5_DATA_TYPE_IF_NEEDED(TYPEDEFD_TYPE, RETURN_HDF5_TYPE)                                  \
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
         static hid_t type() { return RETURN_HDF5_TYPE; }                                                            \
      };                                                                                                                     \


namespace Gambit
{
  
  namespace Printers
  {

      /// Typedefs for managed H5 pointers
      //typedef std::shared_ptr<H5::CommonFG> H5FGPtr; // common ancestor of H5File and Group
      //typedef std::shared_ptr<H5::H5File> H5FilePtr;
      //typedef std::shared_ptr<H5::Group>  H5GroupPtr;
      
      namespace HDF5 { 
         /// Create or open hdf5 file
         // If overwrite=true then any existing file will be deleted and replaced. USE CAREFULLY!!!
         // third argument "oldfile" is used to report whether an existing file was opened (true if yes)
         hid_t openFile(const std::string& fname, bool overwrite, bool& oldfile);

         /// Close hdf5 file
         void closeFile(hid_t file);

         /// Check if hdf5 file exists and can be opened in read/write mode
         bool checkFileReadable(const std::string& fname, std::string& msg);

         /// Check if a group exists and can be accessed
         bool checkGroupReadable(hid_t location, const std::string& groupname, std::string& msg);   

         /// Create hdf5 file (always overwrite existing files)
         hid_t createFile(const std::string& fname);

         /// Create a group inside the specified location
         // Argument "location" can be a pointer to either a file or another group
         hid_t createGroup(hid_t location, const std::string& name);

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
         hid_t openGroup(hid_t file_id, const std::string& name, bool nocreate=false);
 
         /// Close group
         void closeGroup(hid_t group);


      }

      /// Base template is left undefined in order to raise 
      /// a compile error if specialisation doesn't exist.
      template<typename T, typename Enable=void> 
      struct get_hdf5_data_type;

      /// True types
      /// @{
      template<> struct get_hdf5_data_type<char>              { static hid_t type() { return H5T_NATIVE_CHAR   ; } };
      template<> struct get_hdf5_data_type<short>             { static hid_t type() { return H5T_NATIVE_SHORT  ; } };
      template<> struct get_hdf5_data_type<int>               { static hid_t type() { return H5T_NATIVE_INT    ; } };
      template<> struct get_hdf5_data_type<long>              { static hid_t type() { return H5T_NATIVE_LONG   ; } };
      template<> struct get_hdf5_data_type<long long>         { static hid_t type() { return H5T_NATIVE_LLONG  ; } };
      template<> struct get_hdf5_data_type<unsigned char>     { static hid_t type() { return H5T_NATIVE_UCHAR  ; } };
      template<> struct get_hdf5_data_type<unsigned short>    { static hid_t type() { return H5T_NATIVE_USHORT ; } };
      template<> struct get_hdf5_data_type<unsigned int>      { static hid_t type() { return H5T_NATIVE_UINT   ; } };
      template<> struct get_hdf5_data_type<unsigned long>     { static hid_t type() { return H5T_NATIVE_ULONG  ; } };
      template<> struct get_hdf5_data_type<unsigned long long>{ static hid_t type() { return H5T_NATIVE_ULLONG ; } };
      template<> struct get_hdf5_data_type<float>             { static hid_t type() { return H5T_NATIVE_FLOAT  ; } };
      template<> struct get_hdf5_data_type<double>            { static hid_t type() { return H5T_NATIVE_DOUBLE ; } };
      template<> struct get_hdf5_data_type<long double>       { static hid_t type() { return H5T_NATIVE_LDOUBLE; } };
      template<> struct get_hdf5_data_type<bool>              { static hid_t type() { return H5T_NATIVE_UINT8  ; } };
      // Bools are a bit trickier because C has no built-in boolean type (until recently; anyway 
      // the HDF5 libraries were written in C before this existed). We also want something that
      // will be recognised as a bool by h5py. For now we just use an unsigned int.
      /// @}

      /// Typedef'd types; enabled only where they differ from the true types.
      /// @{      
      SPECIALISE_HDF5_DATA_TYPE_IF_NEEDED(int8_t,   H5T_NATIVE_INT8)
      SPECIALISE_HDF5_DATA_TYPE_IF_NEEDED(uint8_t,  H5T_NATIVE_UINT8)
      SPECIALISE_HDF5_DATA_TYPE_IF_NEEDED(int16_t,  H5T_NATIVE_INT16)
      SPECIALISE_HDF5_DATA_TYPE_IF_NEEDED(uint16_t, H5T_NATIVE_UINT16)
      SPECIALISE_HDF5_DATA_TYPE_IF_NEEDED(int32_t,  H5T_NATIVE_INT32)
      SPECIALISE_HDF5_DATA_TYPE_IF_NEEDED(uint32_t, H5T_NATIVE_UINT32)
      SPECIALISE_HDF5_DATA_TYPE_IF_NEEDED(int64_t,  H5T_NATIVE_INT64)
      SPECIALISE_HDF5_DATA_TYPE_IF_NEEDED(uint64_t, H5T_NATIVE_UINT64)
      /// @}

      //!_______________________________________________________________________________________

      // Some useful code for comparing the C API hid_t codes for the various types.
      // They do not seem to match the C++ API types in the way I would have expected...
      //            std::cout << "test: h5t.type().getId()  = "<<h5t.type().getId() <<std::endl;
      //            std::cout << "H5::PredType::NATIVE_UINT = "<<H5::PredType::NATIVE_UINT.getId()<<std::endl;
      //            std::cout << "      H5T_NATIVE_UINT     = "<<H5T_NATIVE_UINT<<std::endl;
      //            std::cout << "----"<<std::endl;
      //            std::cout << " INT8  :" << H5::PredType::NATIVE_INT8.getId()  <<std::endl;
      //            std::cout << "       :" << get_hdf5_data_type<int8_t>::type().getId() <<std::endl;
      //            std::cout << "       :" << H5T_NATIVE_INT<<std::endl;
      //            std::cout << "       :" << H5T_NATIVE_LONG<<std::endl;
      //            std::cout << "       :" << H5T_NATIVE_LLONG<<std::endl;
      //            std::cout << "UINT8  :" << H5::PredType::NATIVE_UINT8.getId() <<std::endl;
      //            std::cout << "       :" << get_hdf5_data_type<uint8_t>::type().getId() <<std::endl;
      //            std::cout << "       :" << H5T_NATIVE_B8<<std::endl;
      //            std::cout << " INT16 :" << H5::PredType::NATIVE_INT16.getId() <<std::endl;
      //            std::cout << "       :" << get_hdf5_data_type<int16_t>::type().getId() <<std::endl;
      //            std::cout << "UINT16 :" << H5::PredType::NATIVE_UINT16.getId()<<std::endl;
      //            std::cout << "       :" << get_hdf5_data_type<uint16_t>::type().getId() <<std::endl;
      //            std::cout << "       :" << H5T_NATIVE_B16<<std::endl;
      //            std::cout << " INT32 :" << H5::PredType::NATIVE_INT32.getId() <<std::endl;
      //            std::cout << "       :" << get_hdf5_data_type<int32_t>::type().getId() <<std::endl;
      //            std::cout << "UINT32 :" << H5::PredType::NATIVE_UINT32.getId()<<std::endl;
      //            std::cout << "       :" << get_hdf5_data_type<uint32_t>::type().getId() <<std::endl;
      //            std::cout << "       :" << H5T_NATIVE_B32<<std::endl;
      //            std::cout << " INT64 :" << H5::PredType::NATIVE_INT64.getId() <<std::endl;
      //            std::cout << "       :" << get_hdf5_data_type<int64_t>::type().getId() <<std::endl;
      //            std::cout << "UINT64 :" << H5::PredType::NATIVE_UINT64.getId()<<std::endl;
      //            std::cout << "       :" << get_hdf5_data_type<uint64_t>::type().getId() <<std::endl;
      //            std::cout << "       :" << H5T_NATIVE_B64<<std::endl;


  }
}

#endif

