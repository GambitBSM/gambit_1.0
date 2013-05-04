//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  MSSM model and prior definitions
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Ben Farmer
//  2013 May 01
//
//  *********************************************

#ifndef __MSSM_hpp__
#define __MSSM_hpp__

#include <string>
//#include "ModelParameters.hpp"
#include "ModelMacros.hpp"
//#include <dictionary.hpp>  //need this for the 'dict' type.

// Local shorthand for different types
typedef std::string str;

// Brainstorming what the model object is supposed to look like and do...

// 'models' base class needs to provide some pseudo-introspection abilities so
// that we can keep track of the inheritance hierarchy. For now, lets just do
// this by adding to a "hierarchy" list whenever we inherit, i.e. put it in the
// constructor or something. This will slightly suck because it won't be done 
// automatically... maybe can hook it into a nice macro for creating new models 
// though.
// Also this does not yet deal with multiple inheritence.
// May also need to have a "special" top (leaf) level of hierarchy to deal with 
// different parameterisations (or is this too specialised?)


namespace gambit{
  namespace models{
    
    // In include/modelmacros.hpp we have defined the virtual bass class
    // "model_base". The NEW_CHILD_MODEL macro builds a new class with the 
    // specified name, which inherits from either model_base or a child of
    // model_base and automatically builds a function "lineage()" which will spit 
    // out a vector of strings containing the names of all its parents (and 
    // itself)
    // Usage: NEW_CHILD_MODEL(<new model>,<parent model>)
    NEW_CHILD_MODEL(MSSM,model_base)
    void MSSM::defineParameters() {}
    // We MUST provide a definition for the "defineParameters()" function or 
    // else a compiler error occurs. defineParameters() is called by the 
    // constructor.
    
    // Test create second model from base
    NEW_CHILD_MODEL(test_model,model_base)
    void test_model::defineParameters() {}
    NEW_CHILD_MODEL(test_model2,test_model)
    void test_model2::defineParameters() {}
    
    // Next iteration...
    // This time we provide a definition for "defineParameters()" which
    // actually does something.
    NEW_CHILD_MODEL(CMSSM_base,MSSM)
    void CMSSM_base::defineParameters() {
      _definePar("M0");
      _definePar("M12");
      _definePar("A0");
    }
    
    namespace CMSSM {
      // Need to go inside CMSSM namespace to create parameterisations (just
      // so they have unique names). These are all "CMSSM" though as far as 
      // the hierarchy is concerned...
      // The P1 defineParameters function first runs the CMSSM_base 
      // defineParameters function If any parameters were defined there they 
      // are now defined here too. This is the current way of inheriting 
      // parameters from parents (It is not automatic!).
      NEW_CHILD_MODEL(P1,CMSSM_base);
      void P1::defineParameters() {
        this->CMSSM_base::defineParameters();
        _definePar("tanb");
        _definePar("sgnmu");
      }
    }
    
    // Now let's make a second 'branch' of the model tree:
    NEW_CHILD_MODEL(DMHalo_base,model_base)
    void DMHalo_base::defineParameters() {}
    
    // We define lots of parameters at once if we use a vector, or a char array
    // (so long as the array is terminated by a 0):
    NEW_CHILD_MODEL(Gaussian_Halo,DMHalo_base)
    void Gaussian_Halo::defineParameters() {
      const char* pararray1[] = {"v_earth", "par2", "par3", "par4"};
      const char* pararray2[] = {"par5","par6","par7",0};
      std::vector<std::string> parvector(pararray1, pararray1 + 4);
      _definePar(parvector);
      _definePar(pararray2);
      // We cannot pass an initialiser-list-style char array directly to the
      // function likes this:
      // _definePar({"par8","par9","par10",0});
      // However I wrote a variadic macro to achieve the same kind of 
      // "one-liner" behaviour:
      DEFINEPARS("par8","par9","par10")
      // I think in theory we could similarly extend _definePar to deal with a 
      // variable number of arguments, which would achieve the same thing, but 
      // it might get messier.
    }
    
    // Now create a "supermodel" which is an explicit union of two models
    // *Note that this is not the generic way which totally orthogonal models
    // will be combined. This is a fancy mixed up model which just happens
    // to predict halos and MSSM masses simultaneously. Not sure if this is
    // a useful thing to be able to do or not...
    // Calls a different macro, so that the new class inherits from both
    // branches of the hierachy. Currently just combines lineages into a big
    // list, i.e. there is no tree information.
    // Usage: NEW_SUPER_MODEL(<new model>,<parent model 1>,<parent model 2>)
    NEW_SUPER_MODEL(CMSSMandGHALO,CMSSM::P1,Gaussian_Halo)
    void CMSSMandGHALO::defineParameters() {
      this->Gaussian_Halo::defineParameters();
      this->CMSSM::P1::defineParameters();
      DEFINEPARS("extpar1","extpar2","extpar3")
    }
    
    
  } //end namespace models
} //end namespace gambit

#endif /* defined(__MSSM_hpp__) */

/*
class CMSSM : public MSSM
    {
    public:

      // Constructor
      functor(void (*inputFunction)(TYPE &), std::string iDo) {
        myFunction = inputFunction;
        myQuantity = iDo;
        needs_recalculating = true;
      }

      // 
      // Operation (return value) 
      TYPE operator()() { return myValue; }

      // Add pointer to pointer to dependent functor
      template <typename DEP>
      void addToDepList(functor<DEP>* &dep_functor) { 
        dependency_list.push_back (&dep_functor);
      }

      // It may be safer to have the following four things made accessible 
      // only to the likelihood wrapper class and/or dependency resolver, i.e. so they cannot be used 
      // from within module functions

      // Calculate method
      void calculate() { if(needs_recalculating) { myFunction(myValue); } }

      // Identification method
      std::string quantity() { return myQuantity; }

      // Needs recalculating or not?  (Externally modifiable)
      bool needs_recalculating;

      // Internal list of pointers to pointers to dependent functors
      std::list<boost::any> dependency_list;

    private:

      // Internal storage of function value
      TYPE myValue;

      // Internal storage of function pointer
      void (*myFunction)(TYPE &);

      // Internal storage of exactly what it is that this function calculates
      std::string myQuantity;

  };
*/



















