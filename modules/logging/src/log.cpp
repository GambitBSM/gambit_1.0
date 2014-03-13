//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Master source file for Gambit logging
///
///  The LogMaster object is statically declared
///  here, so this should be in its own compilation
///  unit. The function defined here lets you
///  retrieve this static log object in the other
///  compilation units. To use this function,
///  include the header "log.hpp" in your file.
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

#include "log.hpp"

namespace Gambit {

  using namespace Logging;
  LogMaster& Log() {
      static LogMaster global_log;
      return global_log;
  }

} // end namespace Gambit
