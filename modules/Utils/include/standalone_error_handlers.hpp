//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Exception objects required for standalone
///  compilation.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2014 Mar
///
///  *********************************************

#include "exceptions.hpp"

namespace Gambit
{

  /// Map of pointers to all instances of the exception class.
  std::map<const char*,exception*> exception::exception_map;

  /// Utility errors
  error utils_error("A problem has been raised by one of the utility codes.","utils_error");
  /// Utility warnings
  warning utils_warning("A problem has been raised by one of the utility codes.","utils_warning");

  /// Logging errors
  error logging_error("A problem has occurred in the logging utilities.","logging_error");
  /// Logging warnings
  warning logging_warning("A problem has occurred in the logging utilities.","logging_warning");

  namespace Printers
  {
    /// Printer errors
    error printer_error("A problem has occurred in the printer utilities.","printer_error");
    /// Printer warnings
    warning printer_warning("A problem has occurred in the printer utilities.","printer_warning");
  }

}

