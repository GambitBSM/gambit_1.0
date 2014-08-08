//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Simple containers used for storing info about
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

namespace Gambit
{
  namespace Backends
  {
    extern std::map<str,bool> works;
    extern std::map<str,str> paths;
    extern std::map<str,str> dlerrors;
  }
}


#endif // defined __backend_info_hpp__
