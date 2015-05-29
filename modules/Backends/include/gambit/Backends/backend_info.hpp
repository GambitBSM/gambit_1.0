//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Simple container used for storing info about
///  backends during initialisation time.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (patscott@physics.mcgill.ca)
///  \date 2014 Aug
///  \date 2015 May
///
///  *********************************************

#ifndef __backend_info_hpp__
#define __backend_info_hpp__

#include <map>
#include "gambit/Utils/util_types.hpp"
#include "yaml-cpp/yaml.h"

namespace Gambit
{

  namespace Backends
  {

    /// Structure providing some basic info on backend libraries
    struct backend_info
    {

      public: 

        /// Constructor
        backend_info();                            

        /// Return the path to a backend library
        str path(str, str) const;

        /// Return the path to a backend library with GAMBIT_DIR expanded
        str corrected_path(str, str) const;

        /// Return the path to the folder in which a backend library resides
        str path_dir(str, str) const;              

        /// Key: backend name + version
        std::map<str,str> dlerrors;

        /// Key: backend name
        std::map<str,str> defaults;
        
        /// Key: backend name + version
        std::map<str,bool> works;

        /// Key: backend name + version
        std::map<str,bool> classloader;           

        /// Key: backend name + version
        std::map<str,bool> classes_OK;             

        /// Key: backend name + version
        std::map<str,std::set<str> > classes;
        
        /// Key: backend name + version + class name
        std::map<str,std::set<str> > factory_args;

        /// Key: backend name + version + class name + factory args
        std::map<str,str> constructor_status;

        /// Given a backend and a safe version (with no periods), return the true version
        str version_from_safe_version (str, str) const;

        /// Given a backend and a true version (with periods), return the safe version
        str safe_version_from_version (str, str) const; 

        /// Link a backend's version and safe version
        void link_versions(str, str, str);

      private: 
        
        /// Map from backend names to maps between version and safe version
        std::map<str,std::pair<std::map<str,str>,std::map<str,str> > > safe_version_map;

        /// Filename in which to find the backend locations configuration file.
        const str filename;
        
        /// YAML node corresponding to backend locations configuration file.
        YAML::Node bepathfile;

    };

  }

}


#endif // defined __backend_info_hpp__
