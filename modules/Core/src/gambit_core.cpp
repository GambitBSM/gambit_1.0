//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  GAMBIT Core driver class implementation.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///  \date 2013 Aug
///  \date 2014 Mar
///
///  *********************************************


#include <map>
#include <vector>

#include "gambit_core.hpp"
#include "error_handlers.hpp"

namespace Gambit
{

  /// Definitions of public methods in GAMBIT core class.

    /// Add a new module functor to functorList
    void gambit_core::registerModuleFunctor(functor &f) { functorList.push_back(&f); }

    /// Add a new module functor to nestFunctorList
    void gambit_core::registerNestedModuleFunctor(functor &f) { nestedFunctorList.push_back(&f); }

    /// Add a new backend functor to backendFunctorList
    void gambit_core::registerBackendFunctor(functor &f) { backendFunctorList.push_back(&f); }

    /// Add a new primary model functor to primaryModelFunctorList
    void gambit_core::registerPrimaryModelFunctor(primary_model_functor &f) 
    {
      registerModuleFunctor(f);
      primaryModelFunctorList.push_back(&f); 
    }

    /// Add entries to the map of activated primary model functors
    void gambit_core::registerActiveModelFunctors(const gambit_core::pmfVec& fvec) 
    {
      for (gambit_core::pmfVec::const_iterator it = fvec.begin(); it != fvec.end(); ++it)
      {  
        activeModelFunctorList[(*it)->origin()] = *it;
      }
    }

    /// Get a reference to the list of module functors
    const gambit_core::fVec& gambit_core::getModuleFunctors() const { return functorList; } 

    /// Get a reference to the list of nested module functors
    const gambit_core::fVec& gambit_core::getNestedModuleFunctors() const { return nestedFunctorList; } 

    /// Get a reference to the list of backend model functors
    const gambit_core::fVec& gambit_core::getBackendFunctors() const { return backendFunctorList; }

    /// Get a reference to the list of primary model functors
    const gambit_core::pmfVec& gambit_core::getPrimaryModelFunctors() const { return primaryModelFunctorList; }

    /// Get a reference to the map of all user-activated primary model functors
    const gambit_core::pmfMap& gambit_core::getActiveModelFunctors() const { return activeModelFunctorList; }


  /// Core accessor function
  gambit_core& Core()
  {
    static gambit_core local;
    return local;
  }

}
