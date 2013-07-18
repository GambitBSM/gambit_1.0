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
    
    /// Modelbit object which performs initialisation and checking operations
    /// on the global primary_model_functor list.
    class ModelFunctorClaw
    {
      public:
        /// Constructor
        ///
        /// Hooks the "claw" into the global primary model functor list
        ModelFunctorClaw (std::vector<primary_model_functor *> &);
        
        /// Model activation function
        ///
        /// Activates primary_model_functors according to the model(s) being 
        /// scanned
        void activatePrimaryModels( const std::vector<std::string> &);
        
        /// Active model functor "usefulness" checker
        ///
        /// Checks that all the active primary model functors are actually used 
        /// for something in the dependency tree. If not throws an error to warn
        /// the user.
        void checkPrimaryModelFunctorUsage();
        
        /// Member variable which stores the map of user-activated models
        std::map<std::string, primary_model_functor *> activeModelFunctors;

      private:
        /// Private reference to the global functor list
        std::vector<primary_model_functor *> &_globalPrimaryModelFunctors;

    };
    
  }
}

#endif



