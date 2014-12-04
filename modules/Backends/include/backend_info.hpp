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
///
///  *********************************************

#ifndef __backend_info_hpp__
#define __backend_info_hpp__

#include <map>
#include "util_types.hpp"

namespace Gambit
{

  namespace Backends
  {

    /// Structure providing some basic info on backend libraries
    struct backend_info
    {
      public: 
        backend_info();                            // Constructor
        std::map<str,str> dlerrors;                // Key: backend name
        std::map<str,str> defaults;                // Key: backend name
        std::map<str,bool> works;                  // Key: backend name + version
        std::map<str,bool> classloader;            // Key: backend name + version
        std::map<str,bool> classes_OK;             // Key: backend name + version
        std::map<str,std::set<str> > classes;      // Key: backend name + version
        std::map<str,std::set<str> > factory_args; // Key: backend name + version + class name
        std::map<str,str> constructor_status;      // Key: backend name + version + class name + factory args
        str version_from_safe_version (str, str) const;
        void link_versions(str, str, str);
        str path_of(str, str);
      private: 
        std::map<str,std::map<str,str> > safe_version_map;
        std::map<str,str> paths;                   // Key: backend name
    };

  }

}


#endif // defined __backend_info_hpp__
