//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Library of Models methods.
///  
///  Duties:
///  * Activate primary_model_functors according to
///    the model(s) being scanned
///  * Check whether all active primary_model_functors
///    are actually used
///
///  *********************************************
///
///  Authors
///  =======
///
///  (add name and date if you modify)
///
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2013 July 17
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2013 Aug, Sep
///  \date 2014 Mar
///
///  *********************************************

#include "models.hpp"

namespace Gambit
{

  namespace Models
  {

    typedef std::map<std::string, primary_model_functor *>::const_iterator activemodel_it;

    /// ModelFunctorClaw function definitions
    /// Models object the performs initialisation and checking operations
    /// on a primary_model_functor list.
    /// @{

    // Public functions and data members
        
    /// Model activation function
    /// Returns a vector of primary_model_functors to be activated, according to the model(s) being scanned
    primodel_vec ModelFunctorClaw::getPrimaryModelFunctorsToActivate (std::vector<str> selectedmodels, const primodel_vec& primaryModelFunctors)
    {
      // Holder for result
      primodel_vec result;
      // Iterator to elements of 'selectedmodels'
      std::vector<str>::iterator el;      

      // Loop through functor list and activate functor if it matches a member of 'selectedmodels'.
      for (primodel_vec::const_iterator 
          it  = primaryModelFunctors.begin();
          it != primaryModelFunctors.end();
          ++it)
      {
        // Check if this functor originates from one of the selected models
        el = std::find(selectedmodels.begin(), selectedmodels.end(), (*it)->origin());
        if(el != selectedmodels.end())
        {
          // If yes, activate this functor
          (*it)->setStatus(1);               // 1 means "available". Possibly switch this to 2 ("active").
          (*it)->setPrintRequirement(true);  // Tell printer to output this functor
          // Initialise ModelParameters object it contains
          (*it)->calculate();
          // Add it to the vector of primary model functors to make active (to be returned)
          result.push_back(*it);
          // Add it to the internal list of active models
          activemodels.push_back(*el);
          // Remove it from the input 'selectedmodels' list
          selectedmodels.erase(el);
        } 
        else
        {
            // If no, deactivate this functor
            (*it)->setStatus(0);
        }
      }

      // Check that all requested models have been activated
      if( selectedmodels.size() != 0 )
      {
        // Report error
        /// TODO: Change to proper gambit error
        std::cout<<"Error! Some of the requested models could not be activated for ";
        std::cout<<"scanning! Probably they have not been defined, or you spelled ";
        std::cout<<"their name wrong in the ini file."<<std::endl;
        std::cout<<"Un-activatable models:"<<std::endl;
        for (std::vector<str>::iterator 
             m = selectedmodels.begin(); m != selectedmodels.end(); ++m)
        {
          std::cout<<"  "<<(*m)<<std::endl;
        }
        exit (EXIT_FAILURE);
      }

      return result;

    }
   
    /// Retrieve the internally stored vector of activated models
    std::vector<str> ModelFunctorClaw::get_activemodels()   
    {
      return activemodels;
    } 

    /// Active model functor "usefulness" checker
    ///
    /// Checks that all the active primary model functors are actually used for
    /// something in the dependency tree. If not throws an error to warn the
    /// user.
    void ModelFunctorClaw::checkPrimaryModelFunctorUsage(const activemodel_map& activeModelFunctors)
    {
      std::vector<std::string> unusedmodels;
      std::string modelname;
      primary_model_functor* functorPtr;
      // Loop through functor list and check that their statuses have all been
      // set to 2 ("active"). If not, it means that some of them were not
      // activated by the dependency resolver and thus are not used for 
      // computing anything.
      for(activemodel_it it  = activeModelFunctors.begin(); 
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
        std::cout<<"ERROR! Some models selected for scanning are not ";
        std::cout<<"required by any of the requested observables/likelihoods! Please switch these ";
        std::cout<<"off in the inifile or add a target which actually uses them."<<std::endl;
        std::cout<<"List of unused models:"<<std::endl;
        for (std::vector<std::string>::iterator it = unusedmodels.begin();
          it != unusedmodels.end(); ++it)
        {
          std::cout<<(*it)<<std::endl;
        }
        exit (EXIT_FAILURE);
      }
      
    }


    /// Add a model to those recongnised by GAMBIT
    void ModelFunctorClaw::add_model (const str &model)
    {
      allmodelnames.insert(model);
    }  

    /// Add parents to the parents database
    void ModelFunctorClaw::add_parents (const str &model, const str &parent)
    {
      if (parent != "PARENT") myParentsDB[model].push_back(parent); 
    }          

    /// Add lineage vector to the lineage database
    void ModelFunctorClaw::add_lineage (const str &model, const std::vector<str> &lineage)
    {
      myLineageDB[model] = lineage;
    }

    /// Add model to the descendants and is-descendant-of databases
    void ModelFunctorClaw::add_descendant (const str &model, const LineageFunction is_descendant_func)
    {
      myIsDescendantOfDB[model] = is_descendant_func;
      for (std::set<str>::iterator parent = allmodelnames.begin(); parent != allmodelnames.end(); ++parent)               
      {
        // If this model descends from parent, add it to the parent's descendents vector                               
        if (descended_from(model,*parent)) myDescendantsDB[*parent].push_back(model);
      }                                                                    
    }                                                                      

    /// Indicate whether a model is recognised by GAMBIT or not
    bool ModelFunctorClaw::model_exists (const str &model) 
    {
      return allmodelnames.find(model) != allmodelnames.end();
    }

    /// List all the models recognised by GAMBIT
    str ModelFunctorClaw::list_models()
    {
      str temp = "";
      for (std::set<str>::iterator it = allmodelnames.begin(); it != allmodelnames.end(); ++it)
      {
        temp += "\n" + *it; 
      } 
      return temp;
    }

    /// Retrieve the lineage for a given model
    std::vector<str> ModelFunctorClaw::get_lineage (const str &model)
    {      
      return myLineageDB.find(model) == myLineageDB.end() ? std::vector<str>() : myLineageDB[model];
    }

    /// Retrieve the descendants for a given model
    std::vector<str> ModelFunctorClaw::get_descendants (const str &model)
    {
      return myDescendantsDB.find(model) == myDescendantsDB.end() ? std::vector<str>() : myDescendantsDB[model];
    }

    /// Retrieve the parents for a given model
    std::vector<str> ModelFunctorClaw::get_parents (const str &model)
    {
      return myParentsDB.find(model) == myParentsDB.end() ? std::vector<str>() : myParentsDB[model];
    }

    /// Check if model 1 is descended from model 2
    bool ModelFunctorClaw::descended_from (const str &model1, const str &model2) 
    {
      return myIsDescendantOfDB[model1](model2);
    }

    /// @}
    
  }

  /// Claw accessor function
  Models::ModelFunctorClaw& modelClaw()
  {
    static Models::ModelFunctorClaw local;
    return local;
  }

}
