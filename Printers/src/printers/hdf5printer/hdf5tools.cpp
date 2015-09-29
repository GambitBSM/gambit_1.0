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

#include "gambit/Printers/printers/hdf5printer/hdf5tools.hpp"
#include "gambit/Logs/log.hpp"

#include <stdio.h>
#include <iostream>
  
namespace Gambit {
  namespace Printers {

    namespace HDF5 { 
      /// Create or open hdf5 file
      /// third argument "oldfile" is used to report whether an existing file was opened (true if yes)
      hid_t openFile(const std::string& fname, bool overwrite, bool& oldfile)
      {
          hid_t file_id;  // file handle

          if(overwrite)
          {
            // DANGER! Deletes existing file
            if( remove(fname.c_str()) != 0 )
            {
              // Error deleting file, but probably it just didn't exist to delete
              logger()<<LogTags::utils<<LogTags::warn<<"Failed to delete file '"<<fname<<"'! Maybe it didn't exist in the first place."<<EOM;
            }
            // else deleted file with no problem       
            logger()<<LogTags::utils<<LogTags::info<<"Deleted pre-existing file "<<fname<<" (because overwrite=true)"<<EOM;
          }          

          errorsOff();
          file_id = H5Fopen(fname.c_str(), H5F_ACC_RDWR, H5P_DEFAULT);
          errorsOn();
          if(file_id < 0)
          {
             /* Ok maybe file doesn't exist yet, try creating it */
             errorsOff();
             file_id = H5Fcreate(fname.c_str(), H5F_ACC_EXCL, H5P_DEFAULT, H5P_DEFAULT);             
             errorsOn();
             if(file_id < 0)
             {
                /* Still no good; error */
                std::ostringstream errmsg;
                errmsg << "Failed to open existing HDF5 file, then failed to create new one! ("<<fname<<")";
                printer_error().raise(LOCAL_INFO, errmsg.str());
             }
             else
             {
                /* successfully created new file */
                oldfile = false;
             }
          }
          else
          {
             /* successfully opened existing file */
             oldfile = true;
          }

          /* Return the file handle */
          return file_id;
      }

      /// Check if hdf5 file exists and can be opened in read/write mode
      bool checkFileReadable(const std::string& fname, std::string& msg)
      {
          bool readable(false);

          errorsOff();
          hid_t file_id = H5Fopen(fname.c_str(), H5F_ACC_RDWR, H5P_DEFAULT);
          errorsOn();
          if(file_id < 0)
          {
            readable=false;
            std::ostringstream errmsg;
            errmsg<<"H5Fopen failed (tried to open '"<<fname<<"')";
            msg = errmsg.str();
          }
          else
          {
            /* everything fine, close the file */
            herr_t status = H5Fclose(file_id);
            if(status<0) 
            {
                std::ostringstream errmsg;
                errmsg << "Failed to properly close HDF5 file after successfully checking that it was readable! ("<<fname<<")";
                printer_error().raise(LOCAL_INFO, errmsg.str());
            }
            readable=true;
          }
          return readable;
      } 

      /// Check if a group exists and can be accessed
      bool checkGroupReadable(hid_t location, const std::string& groupname, std::string& msg)   
      {
          hid_t group_id;
          bool readable(false);

          errorsOff();
          group_id = H5Gopen2(location, groupname.c_str(), H5P_DEFAULT);
          errorsOn();
          if(group_id < 0)
          {
            readable=false;
            std::ostringstream errmsg;
            errmsg<<"H5Gopen failed (tried to open '"<<groupname<<"' from location with id "<<location<<")";
            msg = errmsg.str();
          }
          else
          {
            /* everything fine, close the group */
            herr_t status = H5Gclose(group_id);
            if(status<0) 
            {
                std::ostringstream errmsg;
                errmsg << "Failed to properly close HDF5 group after successfully checking that it was readable! ("<<groupname<<")";
                printer_error().raise(LOCAL_INFO, errmsg.str());
            }
            readable=true;
          }
          return readable;
      }
 
      /// Create hdf5 file (always overwrite existing files)
      hid_t createFile(const std::string& fname)
      {
          hid_t file_id = H5Fcreate(fname.c_str(), H5F_ACC_TRUNC, H5P_DEFAULT, H5P_DEFAULT);             
          if(file_id < 0)
          {
             /* Still no good; error */
             std::ostringstream errmsg;
             errmsg << "Failed to create HDF5 file '"<<fname<<"'!";
             printer_error().raise(LOCAL_INFO, errmsg.str());
          }
          return file_id;
      }

      /// Create a group inside the specified location
      // Argument "location" can be a handle for either a file or another group
      hid_t createGroup(hid_t location, const std::string& name)   
      {
          hid_t group_id;

          group_id = H5Gcreate2(location, name.c_str(), H5P_DEFAULT, H5P_DEFAULT, H5P_DEFAULT);
          if(group_id<0)
          {
              std::ostringstream errmsg;
              errmsg << "Error creating HDF5 group '"<<name<<"'";
              printer_error().raise(LOCAL_INFO, errmsg.str());
          }
          return group_id; 
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
      hid_t openGroup(hid_t file_id, const std::string& name, bool nocreate) //, int accessmode) 
      {
         hid_t group_id;
 
         // User does not want to create group
         if(nocreate) //accessmode & H5Utils::DONOTCREATE)
         {
            group_id = H5Gcreate2(file_id, name.c_str(), H5P_DEFAULT, H5P_DEFAULT, H5P_DEFAULT);
            if(group_id<0)
            {
              std::ostringstream errmsg;
              errmsg << "Error opening HDF5 group '"<<name<<"'. Group (probably) does not exist, and 'nocreate' flag is set to 'true', so we will not attempt to create one";
              printer_error().raise(LOCAL_INFO, errmsg.str());
            } 
            H5Gclose(group_id);
         }
         // Possibly create group and parent groups
         std::stringstream ss(name);
         std::stringstream path;
         std::string gp_name;
         while(std::getline(ss, gp_name, '/')) 
         {
            path << "/" << gp_name;
            errorsOff();
            group_id = H5Gopen2(file_id, path.str().c_str(), H5P_DEFAULT);
            errorsOn();
            if(group_id<0)
            {
               /* doesn't exist; try to create it */
               group_id = H5Gcreate2(file_id, path.str().c_str(), H5P_DEFAULT, H5P_DEFAULT, H5P_DEFAULT);
               if(group_id<0)
               {
                 std::ostringstream errmsg;
                 errmsg << "Error while recursively creating/opening group '"<<name<<"'. Failed to create group '"<<path.str()<<"'";
                 printer_error().raise(LOCAL_INFO, errmsg.str());
               }
            }          
            H5Gclose(group_id);
        }
        // Should exist now; open the group and return the handle
        group_id = H5Gopen2(file_id, name.c_str(), H5P_DEFAULT);
        if(group_id<0)
        {
          std::ostringstream errmsg;
          errmsg << "Error opening HDF5 group '"<<name<<"' after recursive creation supposedly succeeded! There must be a bug in this routine, please fix.";
          printer_error().raise(LOCAL_INFO, errmsg.str());
        } 
        return group_id;
      }

      /// Close hdf5 file
      void closeFile(hid_t file_id)
      {
         herr_t status = H5Fclose(file_id);
         if(status<0)
         {
           std::ostringstream errmsg;
           errmsg << "Error encountered while closing HDF5 file with id '"<<file_id<<"'!";
           printer_error().raise(LOCAL_INFO, errmsg.str());
         }
      }

      /// Close hdf5 group
      void closeGroup(hid_t group_id)
      {
         herr_t status = H5Gclose(group_id);
         if(status<0)
         {
           std::ostringstream errmsg;
           errmsg << "Error encountered while closing HDF5 group with id '"<<group_id<<"'!";
           printer_error().raise(LOCAL_INFO, errmsg.str());
         }
      }

      /// global error variables (handler)
      H5E_auto2_t old_func;
      void *old_client_data;

      /// Silence error report (e.g. while probing for file existence)
      /// Just silences default error stack, since we aren't using anything else
      void errorsOff()
      {
         /* Save old error handler */
         H5Eget_auto(H5E_DEFAULT, &old_func, &old_client_data);

         /* Turn off error handling */
         H5Eset_auto(H5E_DEFAULT, NULL, NULL);
      }

      /// Restore error report
      void errorsOn()
      {
         /* Restore previous error handler */
         H5Eset_auto(H5E_DEFAULT, old_func, old_client_data);
      }

    }
 
  }
}


