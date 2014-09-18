//  *********************************************
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Includes everything needed to use a GAMBIT
///  module as a standalone analysis code.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (patscott@physics.mcgill.ca)
///  \date 2014 Feb
///
///  *********************************************

#ifndef __standalone_hpp__
#define __standalone_hpp__

#define STANDALONE

#include "module_macros_incore.hpp"
#include "log.hpp"
#include "backend_rollcall.hpp"
#include "model_rollcall.hpp"
#include "register_standalone_error_handlers.hpp"
#include "stream_overloads.hpp"

using namespace Gambit;
using std::cout;
using std::endl;

#endif //__standalone_hpp__

