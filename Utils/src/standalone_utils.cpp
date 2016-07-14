//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Includes implementations needed to use a GAMBIT
///  module as a standalone analysis code.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (patscott@physics.mcgill.ca)
///  \date 2016 Jun
///
///  *********************************************

#include "gambit/Utils/standalone_utils.hpp"
#include "gambit/Logs/logger.hpp"
#include "gambit/Logs/logmaster.hpp"

namespace Gambit
{

  /// Logger setup standalone utility function
  void initialise_standalone_logs(str prefix)
  {
    // Make a logging object
    std::map<std::string, std::string> loggerinfo;

    // Ensure that the desired output directory exists
    Utils::ensure_path_exists(prefix);

    // Add entries to the loggerinfo map
    loggerinfo["Default"]  = prefix+"default.log";
    loggerinfo["Debug"]   = prefix+"debug.log";
    loggerinfo["Warning"] = prefix+"warnings.log";
    loggerinfo["Error"]   = prefix+"errors.log";

    // Initialise global LogMaster object
    logger().initialise(loggerinfo);
  }

}
