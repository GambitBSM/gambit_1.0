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

// Create all the modules
#include <ExampleBit_A_rollcall.hpp>
#include <ExampleBit_B_rollcall.hpp>
#include <TinyDarkBit_rollcall.hpp>
//#include <DarkBit_rollcall.hpp>
#include <SUSYspecBit_rollcall.hpp>
#include <TEMP_ScannerBit_rollcall.hpp>

#endif /* defined(__module_rollcall__) */

