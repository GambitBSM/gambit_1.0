//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  GAMBIT Core driver class.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///  \date 2013 Aug
///  \date 2014 Feb
///
///  *********************************************

#ifndef __gambit_core_hpp__
#define __gambit_core_hpp__

#include <map>
#include <vector>

#include "util_types.hpp"
#include "functors.hpp"

namespace Gambit
{

  /// Master driver class for a GAMBIT scan.
  class gambit_core
  {

    private:

      /// Internal typedefs to keep things readable
      /// @{
      typedef std::vector<functor*> fVec;
      typedef std::vector<primary_model_functor*> pmfVec;
      typedef std::map<str, primary_model_functor*> pmfMap;
      /// @}     

      /// Internal indication of the safe mode status
      bool safe_mode_on;

      /// List of all declared module functors
      fVec functorList;

      /// List of all module functors that are declared as nested (i.e. require loop managers)
      fVec nestedFunctorList;
 
      /// List of all declared backend functors
      fVec backendFunctorList;

      /// List of all declared primary model functors
      pmfVec primaryModelFunctorList;

      /// A map of all user-activated primary model functors
      pmfMap activeModelFunctorList;

    public:

      /// Constructor, sets safe mode
      gambit_core(bool);

      /// Destructor
      ~gambit_core(){}

      /// Is the scan running in safe mode?
      bool safe_mode();

      /// Add a new module functor to functorList
      void registerModuleFunctor(functor&);

      /// Add a new module functor to nestFunctorList
      void registerNestedModuleFunctor(functor&);

      /// Add a new backend functor to backendFunctorList
      void registerBackendFunctor(functor&);

      /// Add a new primary model functor to primaryModelFunctorList
      void registerPrimaryModelFunctor(primary_model_functor&); 

      /// Add an entry to the map of activated primary model functors
      void registerActiveModelFunctor(primary_model_functor&); 

      /// Get a pointer to the list of module functors
      const fVec* getModuleFunctors() const ; 

      /// Get a pointer to the list of nested module functors
      const fVec* getNestedModuleFunctors() const ; 

      /// Get a pointer to the list of backend model functors
      const fVec* getBackendFunctors() const ;

      /// Get a pointer to the list of primary model functors
      const pmfVec* getPrimaryModelFunctors() const ;

      /// Get a pointer to the map of all user-activated primary model functors
      const pmfMap* getActiveModelFunctors() const ;

  };

  /// Core accessor function
  gambit_core& Core();

}

#endif // defined __gambit_core_hpp__
