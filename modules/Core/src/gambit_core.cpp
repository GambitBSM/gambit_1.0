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
///
///  *********************************************


#include <map>
#include <vector>

#include "gambit_core.hpp"
#include "error_handlers.hpp"

namespace Gambit
{

  /// Definitions of public methods in GAMBIT core class.

    /// Constructor, sets safe mode
    gambit_core::gambit_core(bool safe) : safe_mode_on(safe) {}

    /// Is the scan running in safe mode?
    bool gambit_core::safe_mode() { return safe_mode_on; }

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

    /// Add an entry to the map of activated primary model functors
    void gambit_core::registerActiveModelFunctor(primary_model_functor &f) 
    {
      activeModelFunctorList[f.origin()] = &f;
    }

    /// Get a pointer to the list of module functors
    const gambit_core::fVec* gambit_core::getModuleFunctors() const { return &functorList; } 

    /// Get a pointer to the list of nested module functors
    const gambit_core::fVec* gambit_core::getNestedModuleFunctors() const { return &nestedFunctorList; } 

    /// Get a pointer to the list of backend model functors
    const gambit_core::fVec* gambit_core::getBackendFunctors() const { return &backendFunctorList; }

    /// Get a pointer to the list of primary model functors
    const gambit_core::pmfVec* gambit_core::getPrimaryModelFunctors() const { return &primaryModelFunctorList; }

    /// Get a pointer to the map of all user-activated primary model functors
    const gambit_core::pmfMap* gambit_core::getActiveModelFunctors() const { return &activeModelFunctorList; }


  /// Core accessor function
  gambit_core& Core()
  {
    static gambit_core local(true);
    return local;
  }

}
