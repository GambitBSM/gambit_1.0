//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Compile-time registration of available modules 
//  Add to this if you want to add a new module.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Pat Scott
//  Nov 10 2012
//
//  *********************************************

#ifndef __module_rollcall_hpp__
#define __module_rollcall_hpp__

#include "module.hpp"

// Generate backend header code
//#include"backend_rollcall.hpp"

// To add a new module, just add another two lines as follows.
//   Within MODULE_ROSTER:
//     DEF_MODULE(your_module_name)  // Creates the module
//   Just before MAP_MODULE_ROSTER:
//     #include "your_module_name_rollcall.hpp" // registers observables, etc

#define MODULE_ROSTER(DEF_MODULE) \
  DEF_MODULE(ExampleBit_A) \
  DEF_MODULE(ExampleBit_B) \

MODULE_ROSTER(CREATE_MODULE) // Create all the modules

#include "ExampleBit_A_rollcall.hpp"
#include "ExampleBit_B_rollcall.hpp"

//MAP_MODULE_ROSTER(MODULE_ROSTER(CREATE_MODULE)) // Map the module objects to strings -- todo

#endif /* defined(__module_rollcall__) */
