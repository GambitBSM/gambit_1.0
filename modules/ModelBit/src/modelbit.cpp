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
// * Check whether all active primary_model_functors are actually used in the
//   the dependency graph

#include <modelbit.hpp>

namespace GAMBIT
{
  typedef std::map<std::string, primary_model_functor *> activemodel_map;
  typedef std::map<std::string, primary_model_functor *>::const_iterator activemodel_it;

  namespace ModelBit
  {
    //
    /// ModelFunctorClaw function definitions
    /// 
    /// Modelbit object which performs initialisation and checking operations
    /// on the global primary_model_functor list.

    // Public functions and data members
    
    /// Constructor
    ///
    /// Hooks the "claw" into the global primary model functor list
    ModelFunctorClaw::ModelFunctorClaw (std::vector<primary_model_functor *> 
                                                  &globalPrimaryModelFunctors)
      : _globalPrimaryModelFunctors(globalPrimaryModelFunctors) {}
    
    /// Model activation function
    ///
    /// Activates primary_model_functors according to the model(s) being scanned
    void ModelFunctorClaw::activatePrimaryModels ( 
                                const std::vector<std::string> &selectedmodels )
    { 
      // Loop through functor list and activate functor if it matches a member
      // of 'selectedmodels'.
      for (std::vector<primary_model_functor *>::iterator it = 
              _globalPrimaryModelFunctors.begin();
          it != _globalPrimaryModelFunctors.end(); ++it)
      {
        // Check if this functor originates from one of the selected models
        if(std::find(selectedmodels.begin(), selectedmodels.end(), (*it)->origin()) 
              != selectedmodels.end()) {
            // If yes, activate this functor
            (*it)->setStatus(1); // 1 means "available". Possibly switch this to 2 ("active").
            // Initialise ModelParameters object it contains
            (*it)->calculate();
            // Add it to the activeModelFunctors map
            activeModelFunctors[(*it)->origin()] = *it;
        } else {
            // If no, deactivate this functor
            (*it)->setStatus(0);
        }
      }

    }
    
    /// Active model functor "usefulness" checker
    ///
    /// Checks that all the active primary model functors are actually used for
    /// something in the dependency tree. If not throws an error to warn the
    /// user.
    void ModelFunctorClaw::checkPrimaryModelFunctorUsage()
    {
      std::vector<std::string> unusedmodels;
      std::string modelname;
      primary_model_functor* functorPtr;
      // Loop through functor list and check that their statuses have all been
      // set to 2 ("active"). If not, it means that some of them were not
      // activated by the dependency resolver and thus are not used for 
      // computing anything.
      for(activemodel_it it = activeModelFunctors.begin(); 
                                      it != activeModelFunctors.end(); it++) 
      {
        modelname  = it->first;
        functorPtr = it->second;
        
        if ( functorPtr->status()!=2 )
        {
          unusedmodels.push_back( modelname );
        } 
      }     
    
      // If we found unused models throw an error
      ///TODO: Make this into a proper GAMBIT error!
      if ( unusedmodels.size() > 0 )
      {
        std::cout<<"ERROR! Some models selected for scanning are not \
required by any of the requested observables/likelihoods! Please switch these \
off in the inifile or add a target which actually uses them."<<std::endl;
        std::cout<<"List of unused models:"<<std::endl;
        for (std::vector<std::string>::iterator it = unusedmodels.begin();
          it != unusedmodels.end(); ++it)
        {
          std::cout<<(*it)<<std::endl;
        }
        exit (EXIT_FAILURE);
      }
      
    } //end checkPrimaryModelFunctorUsage


    /// Model congruency checking functions
    ///
    /// During model registration we have created a series of "lineage" vectors,
    /// one for each model, detailing their ancestry. These functions are tools
    /// for checking whether one model is a descendant of another, or whether 
    /// one model is an ancestor of another.
  }
}
