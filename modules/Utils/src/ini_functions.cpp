//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions for triggering initialisation code.
///
///  *********************************************
///
///  Authors
///  =======
///
///  (add name and date if you modify)
///
///  \author Pat Scott 
///          (p.scott@imperial.ac.uk)
///  \date 2015 Feb
///
///  *********************************************

#include "gambit/Utils/ini_functions.hpp"
#include "gambit/Utils/equivalency_singleton.hpp"
#include "gambit/Backends/backend_singleton.hpp"

namespace Gambit
{
    
  /// Catch initialisation exceptions
  void ini_catch(std::exception& e)
  {
    std::cout << "GAMBIT has failed to initialise due to fatal exception: " << e.what() << std::endl;
    //std::cout << "raised from ini_code_struct declared at: " << location << std::endl;
    throw(e);
  }
    
  /// Helper function for passing default backend information at initialisation
  int pass_default_to_backendinfo(str be, str def)
  {
    try
    {
      Backends::backendInfo().defaults[be] = def;
    }
    catch (std::exception& e) { ini_catch(e); }    
    return 0;
  }

  /// Helper function for adding a type equivalency at initialisation
  int add_equivrelation(str s1, str s2)
  {
    try
    {
      Utils::typeEquivalencies().add(s1,s2);
    }
    catch (std::exception& e) { ini_catch(e); }
    return 0;
  }

}
