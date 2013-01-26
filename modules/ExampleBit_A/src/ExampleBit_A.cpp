//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Functions of module ExampleBit_A
//
//  Put your functions in files like this
//  if you wish to add observables or likelihoods
//  to this module.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Pat Scott
//  Nov 15 2012
//  Jan 18 2013
//
//  Christoph Weniger
//  Jan 17 2013
//
//  *********************************************

#include <string>
#include <iostream>

namespace GAMBIT {

  namespace ExampleBit_A {

    double count = 3.5;

    // Initialization routine
    void initialize () {
      std::cout << std::endl;
      std::cout << "********************************************" << std::endl;
      std::cout << "***       Initializing ExampleBit_A      ***" << std::endl;
      std::cout << "********************************************" << std::endl;
    }

    // Module functions
    double nevents () { return count++; } ;
    double nevents_like () { return 1.5; } ;
    std::string authors_dogs_name () { return "Millie"; } ;

  }

}
