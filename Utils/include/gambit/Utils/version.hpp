//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Version numbering.
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

#ifndef __version_hpp__
#define __version_hpp__

#include "gambit/Utils/util_types.hpp"

namespace Gambit
{

  const int major =     0; // 0 to 99
  const int minor =     1; // 0 to 99
  const int revision =  0; // 0 to 99
  const int int_version =  10000*major + 100*minor + revision;
  inline str get_version() { std::ostringstream ss; ss << major << "." << minor << "." << revision; return ss.str(); }
  const str version = get_version();

}


#endif // defined __version_hpp__
