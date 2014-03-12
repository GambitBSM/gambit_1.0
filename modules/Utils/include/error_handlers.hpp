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

  /// Core errors
  error core_error("The Core has encountered a problem.","core_error");
  /// Core warnings
  warning core_warning("The Core has encountered a problem.","core_warning");

  /// Model errors
  error model_error("A problem has been encountered in the model subsystem.","model_error");
  /// Model warnings
  warning model_warning("A problem has been encountered in the model subsystem.","model_warning");

  namespace Graphs
  {
    /// Dependency resolver errors
    error dependency_resolver_error("A problem has been raised by the dependency resolver subsystem.","dependency_resolver_error");
    /// Dependency resolver warnings
    warning dependency_resolver_warning("A problem has been raised by the dependency resolver subsystem.","dependency_resolver_warning");
  }

  namespace IniParser
  {
    /// IniFile errors
    error inifile_error("A problem has been encountered in the iniFile reader subsystem.","inifile_error");
    /// IniFile warnings
    warning inifile_warning("A problem has been encountered in the iniFile reader subsystem.","inifile_warning");
  }

}

