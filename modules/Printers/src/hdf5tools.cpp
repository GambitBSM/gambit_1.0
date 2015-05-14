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

#include "gambit/Printers/hdf5tools.hpp"

// HDF5 C++ bindings
#include "H5Cpp.h" 
    
namespace Gambit {
  namespace Printers {

    namespace HDF5 { 
      /// Create or open hdf5 file
      H5FilePtr openFile(const std::string& fname)
      {
          H5::Exception::dontPrint();
          H5::H5File* file = 0;
      
          try {
              file = new H5::H5File(fname.c_str(), H5F_ACC_RDWR);
          } catch(const H5::FileIException&) {
              try {
                  file = new H5::H5File(fname.c_str(), H5F_ACC_TRUNC);
              } catch(const H5::FileIException& e) {
                  std::ostringsteam errmsg;
                  errmsg << "Error creating or opening HDF5 file '"<<name<<"'. Message was: "<<e.what();
                  printer_error().raise(LOCAL_INFO, errmsg);
              }
          }  
      
          // Wrap raw pointer in a shared pointer for safer handling
          return H5FilePtr(file);
      }

      /// Create hdf5 file (always overwrite existing files)
      H5FilePtr createFile(const std::string& fname)
      {
          H5::Exception::dontPrint();
          H5::H5File* file = 0;

          try {
              file = new H5::H5File(fname.c_str(), H5F_ACC_RDWR);       
          } catch(const H5::FileIException& e) {
              std::ostringsteam errmsg;
              errmsg << "Error creating HDF5 file '"<<name<<"'. Message was: "<<e.what();
              printer_error().raise(LOCAL_INFO, errmsg);
          }
 
          // Wrap raw pointer in a shared pointer for safer handling
          return H5FilePtr(file);
      }

      /// Create a group inside the specified location
      // Argument "location" can be a pointer to either a file or another group
      H5GroupPtr createGroup(H5FGPtr location, const std::string& name)   
      {
          try {
              group = new H5::Group( location->createGroup(name) );
          } catch(const H5::GroupIException& e) {
              std::ostringsteam errmsg;
              errmsg << "Error creating HDF5 group '"<<name<<"'. Message was: "<<e.what();
              printer_error().raise(LOCAL_INFO, errmsg);
          }
 
          // Wrap raw pointer in a shared pointer for safer handling
          return H5GroupPtr(group); 
      }

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
      H5GroupPtr H5Utils::openGroup(H5FilePtr file, const std::string& name, int accessmode) {
         H5::Group* group = NULL;
         // User does not want to create group
         if(accessmode & H5Utils::DONOTCREATE) {
            try {
               group = new H5::Group(file->openGroup(name.c_str()));
            } catch(const H5::FileIException& err_does_not_exist) {
              std::ostringsteam errmsg;
              errmsg << "Error opening HDF5 group '"<<name<<"'. Group does not exist, and accessmode is set to DONOTCREATE. Message was: "<<e.what();
              printer_error().raise(LOCAL_INFO, errmsg);
            }
         }
         // Possibly create group and parent groups
         std::stringstream ss(name);
         std::stringstream path;
         std::string gp_name;
         while(std::getline(ss, gp_name, '/')) {
            path << "/" << gp_name;
            if(group != NULL) { delete group; }
            try {
               group = new H5::Group(file->openGroup(path.str().c_str()));
            } catch(const H5::FileIException& err_does_not_exist) {
               group = new H5::Group(file->createGroup(path.str().c_str()));
            }
         }
         return H5GroupPtr(group);
      }



    }
 
  }
}


