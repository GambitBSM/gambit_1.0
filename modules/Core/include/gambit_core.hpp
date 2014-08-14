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
///  \date 2014 Feb, Aug
///
///  *********************************************

#ifndef __gambit_core_hpp__
#define __gambit_core_hpp__

#include <map>
#include <vector>

#include "util_types.hpp"
#include "models.hpp"
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

      /// Internal model claw
      const Models::ModelFunctorClaw* modelInfo;

      /// Set of all declared modules
      std::set<str> modules;
      
      /// List of all declared backends
      std::set<str> backends;

      /// List of all declared capabilities
      std::set<str> capabilities;

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

      /// Constructor
      gambit_core(const Models::ModelFunctorClaw&);

      /// Destructor
      ~gambit_core(){}

      /// Command-line info function
      void bail();

      /// Diagnostics function
      void run_diagnostic(str);

      /// Flag to trigger dependency resolver to report functor run order
      bool show_runorder;

      /// Add a new module functor to functorList
      void registerModuleFunctor(functor&);

      /// Add a new module functor to nestFunctorList
      void registerNestedModuleFunctor(functor&);

      /// Add a new backend functor to backendFunctorList
      void registerBackendFunctor(functor&);

      /// Add a new primary model functor to primaryModelFunctorList
      void registerPrimaryModelFunctor(primary_model_functor&); 

      /// Add entries to the map of activated primary model functors
      void registerActiveModelFunctors(const pmfVec&); 

      /// Get a reference to the list of module functors
      const fVec& getModuleFunctors() const ; 

      /// Get a reference to the list of nested module functors
      const fVec& getNestedModuleFunctors() const ; 

      /// Get a reference to the list of backend model functors
      const fVec& getBackendFunctors() const ;

      /// Get a reference to the list of primary model functors
      const pmfVec& getPrimaryModelFunctors() const ;

      /// Get a reference to the map of all user-activated primary model functors
      const pmfMap& getActiveModelFunctors() const ;

  };

  /// Core accessor function
  gambit_core& Core();

}

#endif // defined __gambit_core_hpp__
