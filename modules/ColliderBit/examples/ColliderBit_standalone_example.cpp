//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Example of GAMBIT ColliderBit standalone
///  main program.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///
///  *********************************************

// Always required in any standalone module main file
#include "gambit/Utils/standalone_module.hpp"
#include "gambit/ColliderBit/ColliderBit_rollcall.hpp"

using namespace ColliderBit::Accessors;     // Helper functions that provide some info about the module
using namespace ColliderBit::Functown;      // Functors wrapping the module's actual module functions
using namespace BackendIniBit::Functown;    // Functors wrapping the backend initialisation functions

int main()
{

  cout << "Collide my bits." << endl;

}
