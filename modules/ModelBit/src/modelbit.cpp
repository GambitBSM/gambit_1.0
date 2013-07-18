//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
///  Library of ModelBit provisions to the core
///  
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

#include <modelbit.hpp>

namespace GAMBIT
{

  namespace ModelBit
  {
  
    /// Model activation function
    ///
    /// Activates primary_model_functors according to the model(s) being scanned
    std::map<std::string, primary_model_functor *> activatePrimaryModels (
          const std::vector<std::string> &selectedmodels, 
          std::vector<primary_model_functor *> &functorList
          )
    {
      std::map<std::string, primary_model_functor *> outputmap;
      
      // Loop through functor list and activate functor if it matches a member
      // of 'selectedmodels'.
      for (std::vector<primary_model_functor *>::iterator it = 
              functorList.begin();
          it != functorList.end(); ++it)
      {
        // Check if this functor originates from one of the selected models
        if(std::find(selectedmodels.begin(), selectedmodels.end(), (*it)->origin()) 
              != selectedmodels.end()) {
            // If yes, activate this functor
            (*it)->setStatus(1); // 1 means "available". Possibly switch this to 2 ("active").
            // Initialise ModelParameters object it contains
            (*it)->calculate();
            // Add it to the output map
            outputmap[(*it)->origin()] = *it;
        } else {
            // If no, deactivate this functor
            (*it)->setStatus(0);
        }
      }
      return outputmap;
    }
    
    
    /// Some other function
    
  }
}
