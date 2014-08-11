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
      std::map<str,bool> works;
      std::map<str,str> paths;
      std::map<str,str> dlerrors;
    };

  }

}


#endif // defined __backend_info_hpp__
