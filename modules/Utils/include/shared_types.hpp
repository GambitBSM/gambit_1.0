//  *********************************************
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Types returned from more than one module, 
///  model or backend as the results of their
///  externally-accessible functions.  Also
///  other classes, typedefs, etc that are used
///  internall in more than one module, model or
///  backend.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (patscott@physics.mcgill.ca)
///  \date 2013 Apr, Oct
///
///  *********************************************

#ifndef __shared_types_hpp__
#define __shared_types_hpp__

#include "backend_types_rollcall.hpp"
#include "model_types.hpp"

namespace Gambit
{
  
  // Pointer to a function that takes an integer by reference and returns a double.
  // Just used for example purposes in ExampleBit_A and ExampleBit_B.
  typedef double(*fptr)(int&);

  // Placeholder type for SM parameters. Will be used all over GAMBIT so will
  // need to think hard about how this works (different energy scales,
  // renormalisation schemese etc, automatic conversion?)
  struct SMpars
  {
    double alphaem;
    double alphas;
    double mZ;
    double mtop;
    // ...etc...
  };
  
  // Placeholder for CMSSM parameters object
  struct CMSSMpars
  {
    double m0;
    double m12;
    // ...etc...
  };

}

#endif //__shared_types_hpp__


