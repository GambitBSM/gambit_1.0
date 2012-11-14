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

#include"module.hpp"

// Generate backend header code
//#include"backend_rollcall.hpp"

// Generate module header code
CREATE_MODULE(ExampleBit_A)
CREATE_MODULE(ExampleBit_B)

// Generate module member function header codes
#include"ExampleBit_A_rollcall.hpp"
#include"ExampleBit_B_rollcall.hpp"

#endif /* defined(__module_rollcall__) */
