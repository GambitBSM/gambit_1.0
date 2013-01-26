//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Compile-time registration of available modules 
//  Add to this if you want to add a new module.
//
//  To add a new module, just add another two 
//  lines as follows:
//      DEF_MODULE(your_module_name)
//      #include "your_module_name_rollcall.hpp"
//
//  The first creates the module and must be part
//  of the MODULE_ROSTER macro. The second
//  registers the observable and likelihood 
//  functions that the new module can provide, 
//  and must be a standalone command.
//
//  If you have a module XBit that you want to 
//  use as a standalone code, instead of
//  including this file just put the following
//  at the top of your driver program:
//  #include <module.hpp>
//  CREATE_MODULE(XBit)
//  #include <XBit_rollcall.hpp>
//  #include <module_rollcall_finish.hpp>
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Pat Scott
//  Nov 10++ 2012
//
//  *********************************************

#ifndef __module_rollcall_hpp__
#define __module_rollcall_hpp__

#include <module.hpp>

// Define all the modules
//#define MODULE_ROSTER(DEF_MODULE) \
  DEF_MODULE(ExampleBit_A) \
  DEF_MODULE(ExampleBit_B) \
  DEF_MODULE(TinyDarkBit) \

// Create all the modules
//MODULE_ROSTER(CREATE_MODULE) 

// Add the module functions
#include <ExampleBit_A_rollcall.hpp>
//#include <ExampleBit_B_rollcall.hpp>
//#include <TinyDarkBit_rollcall.hpp>

// Finish registering module functions (presently redundant)
//#include <module_rollcall_finish.hpp>

#endif /* defined(__module_rollcall__) */

