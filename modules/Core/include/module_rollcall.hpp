//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Compile-time registration of available modules. 
///  Add to this if you want to add a new module.
///
///  To add a new module, just add another line:
///  \code
///    #include "your_module_name_rollcall.hpp"
///  \endcode
///
///  If you have a module that you want to 
///  use as a standalone code, instead of
///  including this file, just include
///  standalone.hpp and 
///  your_module_name_rollcall.hpp in your 
///  driver program.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///  \date 2012 Nov
///
///  \author Ben Farmer
///  \date 2013-05-29
///
///  *********************************************

#ifndef __module_rollcall_hpp__
#define __module_rollcall_hpp__

// Include the module macro definitions
#include "module_macros_incore.hpp"

// Create all the modules
#include "ExampleBit_A_rollcall.hpp"
#include "ExampleBit_B_rollcall.hpp"
#include "DarkBit_rollcall.hpp"
#include "SUSYspecBit_rollcall.hpp"
#include "FlavBit_rollcall.hpp"
#ifdef COLLIDE
  // Debugging... No seriously, I am including these headers, right??
  #pragma message "COLLIDE = " BOOST_PP_STRINGIZE(COLLIDE)
  #pragma message "Included from module_rollcall: HEColliderBit_rollcall.hpp"
  #include "HEColliderBit_rollcall.hpp"
#endif

#endif /* defined(__module_rollcall__) */

