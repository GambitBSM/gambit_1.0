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

// Example code for adding a new module:
// //Generate module header code
//     CREATE_MODULE(your_module_name)
// //Increment module counter
//     #include BOOST_PP_UPDATE_COUNTER()
// //Generate module member function header codes
//     #include"your_module_name_rollcall.hpp"

CREATE_MODULE(ExampleBit_A)
#include BOOST_PP_UPDATE_COUNTER()
#include"ExampleBit_A_rollcall.hpp"

CREATE_MODULE(ExampleBit_B)
#include BOOST_PP_UPDATE_COUNTER()
#include"ExampleBit_B_rollcall.hpp"

FINALISE_MODULES

#endif /* defined(__module_rollcall__) */
