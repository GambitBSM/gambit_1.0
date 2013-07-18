//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module ExampleBit_A.
///
///  Put your functions in files like this
///  if you wish to add observables or likelihoods
///  to this module.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Pat Scott
///    \date 2012 Nov
///    \date 2013 Jan, Feb, May 
///
///  \author Christoph Weniger
///    \date 2013 Jan 
///
///  *********************************************

#include <string>
#include <iostream>
#include <ExampleBit_A_rollcall.hpp>

namespace GAMBIT {

  namespace ExampleBit_A {

    // Some local module codes and declarations
    double count = 3.5;
    double some_other_function(int &input)
    {
      std::cout << "  This is some_other_function, invoked with argument " << input << std::endl;
      return input * 2.0;
    }


    // Initialization routine
    void initialize ()
    {
      std::cout << std::endl;
      std::cout << "********************************************" << std::endl;
      std::cout << "***       Initializing ExampleBit_A      ***" << std::endl;
      std::cout << "********************************************" << std::endl;
    }


    // Module functions
    void nevents_dbl  (double &result)    { result = count++; }
    void nevents_int  (int    &result)    { result = (int) (GET_DEP(nevents_int::nevents)); }
    void nevents_like (double &result)    { result = 1.5; }
    void identity     (str    &result)    { result = "turkion"; }
    void function_pointer_retriever( double(*&result)(int&) )
    {
      //Two ways to try this: a pointer to a fortran function that has been backended:
      //result = GET_BE_FUNCTION_POINTER(backend_function_pointer_retriever::runMe);
      //or a pointer to a local C++ funtion
      result = &some_other_function;
    }

  }

}
