//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Master header for Gambit logging
///
///  Including this header causes a static
///  LogMaster object to be created, which is to be
///  used for logging throughout the code. Do not
///  include this header in more than one of your
///  compilation units or compile will fail!
///  That is, include this only in the primary
///  exectuable source file
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2014 Mar
///
///  *********************************************

#ifndef __log_hpp__
#define __log_hpp__

#include "logging.hpp"

namespace Gambit {

  /// Function to retrieve a reference to the Gambit global log object.
  Logging::LogMaster& logger();

} // end namespace Gambit

#endif /* defined(__log_hpp__) */
