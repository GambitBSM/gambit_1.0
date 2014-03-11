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
  std::map<str,exception*> exception::exception_map;

  /// Utility errors
  error utils_error("A problem has been raised by one of the utility codes.","utils_error");
  /// Utility warnings
  warning utils_warning("A problem has been raised by one of the utility codes.","utils_warning");

  /// Exception errors
  error exceptions_internal_error("A problem has occurred in the exceptions system.","exceptions_internal_error");
  /// Exception warnings
  warning exceptions_internal_warning("A problem has occurred in the exceptions system.","exceptions_internal_warning");

}

