//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Master header for Gambit logging
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2014 Mar
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2014 Mar
///
///  *********************************************

#ifndef __log_hpp__
#define __log_hpp__

#include "logging.hpp"

namespace Gambit
{

  /// Function to retrieve a reference to the Gambit global log object.
  Logging::LogMaster& logger();

}

#endif /* defined(__log_hpp__) */
