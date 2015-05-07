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

#include "gambit/Elements/terminator.hpp"

void Gambit::terminator()
{
  std::cout << std::endl << "Gambit has encountered a fatal error." << std::endl;
  std::cout << std::endl << "Check the output logs for details." << std::endl;
  std::cout << std::endl << "(Check your yaml file if you can't recall where the logs are.)" << std::endl << std::endl;
  exit(1);
}

