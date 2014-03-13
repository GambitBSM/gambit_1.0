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

#include "error_handlers.hpp"

namespace Gambit
{

  /// Core errors
  error& core_error()
  { 
    static error local("The Core has encountered a problem.","core_error"); 
    return local;
  }

  /// Core warnings
  warning& core_warning()
  {
    static warning local("The Core has encountered a problem.","core_warning");
    return local;
  }

  namespace Graphs
  {

    /// Dependency resolver errors
    error& dependency_resolver_error()
    {
      static error local("A problem has been raised by the dependency resolver subsystem.","dependency_resolver_error");
      return local;
    }

    /// Dependency resolver warnings
    warning& dependency_resolver_warning()
    {
      static warning local("A problem has been raised by the dependency resolver subsystem.","dependency_resolver_warning");
      return local;
    }

  }

  namespace IniParser
  {

    /// IniFile errors
    error& inifile_error()
    {
      static error local("A problem has been encountered in the iniFile reader subsystem.","inifile_error");
      return local;
    }

    /// IniFile warnings
    warning& inifile_warning()
    {
      static warning local("A problem has been encountered in the iniFile reader subsystem.","inifile_warning");
      return local;
    }

  }

}
