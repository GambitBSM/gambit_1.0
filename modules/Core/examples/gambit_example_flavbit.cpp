//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Example of GAMBIT core framework use.
///
///  A program to demo what can be done with the 
///  current development version of the code. 
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author GAMBIT Collaboration
///  \date 2012 Oct --> ??
///
///  *********************************************

#include "graphs.hpp"
#include "backend_rollcall.hpp"
#include "module_rollcall.hpp"
#include "model_rollcall.hpp"
#include "exceptions.hpp"
#include "map_extensions.hpp"
#include "yaml_parser.hpp"
#include "gambit_scan.hpp"

using namespace Gambit;

int main( int argc, const char* argv[] )
{
     double result;
         
  FlavBit::SI_bsgamma(result);
   
  return 1;

};
