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
#include "gambit/cmake/cmake_variables.hpp"

namespace Gambit
{

  #ifdef GAMBIT_VERSION_MAJOR
    const int gambit_version_major =     GAMBIT_VERSION_MAJOR;    
  #else
    const int gambit_version_major =     0;    
  #endif  

  #ifdef GAMBIT_VERSION_MINOR
    const int gambit_version_minor =     GAMBIT_VERSION_MINOR;    
  #else  
    const int gambit_version_minor =     0;    
  #endif
  
  #ifdef GAMBIT_VERSION_REVISION
    const int gambit_version_revision =  GAMBIT_VERSION_REVISION;
  #else
    const int gambit_version_revision =  0;
  #endif

  const int gambit_version_int =  10000*gambit_version_major + 100*gambit_version_minor + gambit_version_revision;

  inline str get_gambit_version()
  {
    std::ostringstream ss;
    ss << gambit_version_major << "." << gambit_version_minor << "." << gambit_version_revision;
    return ss.str();
  }
  
  const str gambit_version = get_gambit_version();

}

#endif // defined __version_hpp__
