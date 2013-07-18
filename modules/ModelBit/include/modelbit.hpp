//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
///  Header for library of ModelBit provisions to 
///  the core.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Ben Farmer
//  2013 July 17
//
//  *********************************************

// Duties:
// * Activate primary_model_functors according to the model(s) being scanned

#ifndef __modelbit_hpp__
#define __modelbit_hpp__

#include <vector>
#include <string>
#include <functors.hpp>

namespace GAMBIT
{

  namespace ModelBit
  {
  
    /// Model activation function
    ///
    /// Activates primary_model_functors according to the model(s) being scanned
    std::map<std::string, primary_model_functor *> activatePrimaryModels(
        const std::vector<std::string> &, 
        std::vector<primary_model_functor *> &
        );
    
  }
}

#endif



