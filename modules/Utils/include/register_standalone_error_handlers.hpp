//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Registration of exception objects required 
///  for standalone compilation.
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

#ifndef __register_standalone_error_handlers_hpp__
#define __register_standalone_error_handlers_hpp__

#include "static_members.hpp"
#include "standalone_error_handlers.hpp"

namespace Gambit
{

  namespace Ini
  {

    void register_standalone_handlers()
    {
      error e = utils_error();
      warning w = utils_warning();
      e = logging_error();
      w = logging_warning();
      e = model_error();
      w = model_warning();
      e = Printers::printer_error();
      w = Printers::printer_warning();
    }

    ini_code standalone_handlers(&register_standalone_handlers);

  }

}

#endif //#ifndef __register_standalone_error_handlers_hpp__

