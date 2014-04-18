//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Garbage collection of last resort.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///  \date 2014 Apr
///
///  *********************************************

#include "terminator.hpp"

void Gambit::terminator()
{
  std::cout << std::endl << "Gambit terminator called.  Sleep faster." << std::endl << std::endl;
  exit(1);
}

