//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Exception object registration.
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

#ifndef __register_error_handlers_hpp__
#define __register_error_handlers_hpp__

#include "error_handlers.hpp"
#include "register_standalone_error_handlers.hpp"

namespace Gambit
{

  namespace Ini
  {

    void register_handlers()
    {
      error e = core_error();
      warning w = core_warning();
      e = DRes::dependency_resolver_error();
      w = DRes::dependency_resolver_warning();
      e = IniParser::inifile_error();
      w = IniParser::inifile_warning();
    }

    ini_code handlers(&register_handlers);

  }
    
}

#endif //#ifndef __register_error_handlers_hpp__

