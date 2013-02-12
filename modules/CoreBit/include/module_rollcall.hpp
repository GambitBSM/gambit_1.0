//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Compile-time registration of available modules 
//  Add to this if you want to add a new module.
//
//  To add a new module, just add another line:
//   #include "your_module_name_rollcall.hpp"
//
//  If you have a module that you want to 
//  use as a standalone code, instead of
//  including this file, just include 
//  your_module_name_rollcall.hpp in your 
//  driver program.
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

// Create all the modules
#include <ExampleBit_A_rollcall.hpp>
#include <ExampleBit_B_rollcall.hpp>
#include <TinyDarkBit_rollcall.hpp>

#endif /* defined(__module_rollcall__) */

