//  *********************************************
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Input and return types for backend functions.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (patscott@physics.mcgill.ca)
///  \date 2013 Oct
///
///  *********************************************

#ifndef __backend_types_rollcall_hpp__
#define __backend_types_rollcall_hpp__

// Include all the type headers from the different backends
//#include "SLHA_types.hpp" //Greg:  I think someone forgot to do "git add SLHA_types.hpp" lol
struct MSSMsoftmassesQ {struct {double M1; double M2;} softmasses;}; //Greg:: added these type structs so that Gambit will compile.
struct MSSMspecQ {struct {double stop1; double neut1;} MASS;};
#include "DarkSUSY_types.hpp"
#include "SuperIso_types.hpp"
#include "libFarrayTest_types.hpp"

// by Aldo
#include "FastSim_types.hpp"

#endif //__backend_types_rollcall_hpp__


