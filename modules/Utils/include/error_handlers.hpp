//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Exception object definitions.
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

#include "standalone_error_handlers.hpp"

namespace Gambit
{

  /// Dependency resolver errors
  error dependency_resolver_error("A problem has been raised by the dependency resolver.","dependency_resolver_error");
  /// Dependency resolver warnings
  warning dependency_resolver_warning("A problem has been raised by the dependency resolver.","dependency_resolver_warning");

}

