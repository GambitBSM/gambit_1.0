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

    /// Structure providing info on backend libraries
    struct backend_info
    {
      public: 
        std::map<str,bool> works;
        std::map<str,bool> classloader;
        std::map<str,bool> classes_OK;
        std::map<str,str> paths;
        std::map<str,str> dlerrors;
        str version_from_safe_version(str be, str sv) { return safe_version_map.at(be).at(sv); } 
        void link_versions(str be, str v, str sv) { safe_version_map[be][sv] = v; }
      private: 
        std::map<str,std::map<str,str> > safe_version_map;
    };

  }

}


#endif // defined __backend_info_hpp__
