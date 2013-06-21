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
#include <ModelMacros.hpp>
#include <util_classes.hpp>
//#include <dictionary.hpp>  //need this for the 'dict' type.

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


namespace GAMBIT{

  namespace Models{
    
    // In include/modelmacros.hpp we have defined the virtual bass class
    // "model_base". The NEW_CHILD_MODEL macro builds a new class with the 
    // specified name, which inherits from either model_base or a child of
    // model_base and automatically builds a function "lineage()" which will spit 
    // out a vector of strings containing the names of all its parents (and 
    // itself)
    // Usage: NEW_CHILD_MODEL(<new model>,<parent model>)
    NEW_CHILD_MODEL(MSSM,model_base)
    // We also need to provide a definition for the "parameterkeys" data member,
    // which the model class is going to use to construct the parameter object.
    // We will demonstrate macros that do this shortly.
    const std::vector<str> MSSM::parameterkeys = {};
    
    
    // Test create second model from base
    NEW_CHILD_MODEL(test_model,model_base)
    const std::vector<str> test_model::parameterkeys = {};
    
    NEW_CHILD_MODEL(test_model2,test_model)
    const std::vector<str> test_model2::parameterkeys = {};
    
    // Next iteration...
    // This time we define some parameters
    // Note: parameters are stored in the "parameters" member object, which
    // also is in possession of the needed get/set functions.
    NEW_CHILD_MODEL(CMSSM_base,MSSM)
    const std::vector<str> CMSSM_base::parameterkeys = {"M0", "M12", "A0"};

    namespace CMSSM {
      // Need to go inside CMSSM namespace to create parameterisations (just
      // so they have unique names). This namespace is not known to the 
      // hierarchy though.
      // There is no automatic "inheritance" of parameters from the parent
      // model, however there are a couple of ways to get those parameters. If
      // we have access to the original list used to create the parent we can
      // just use that again, or if not we can access the private list stored 
      // inside the model class. There are also macros to make this less 
      // verbose, which I shall demo shortly.
      
      NEW_CHILD_MODEL(P1,CMSSM_base);
      const std::vector<str> newkeys = {"tanb", "sgnmu"};
      const std::vector<str> P1::parameterkeys = vecjoin(
                                                  CMSSM_base::parameterkeys,
                                                  newkeys
                                                  );
    }
    
    // Now let's make a second 'branch' of the model tree:
    NEW_CHILD_MODEL(DMHalo_base,model_base)
    const std::vector<str> DMHalo_base::parameterkeys = {};
    
    // We can use the DEFINEPARS macro to define the 'parameterkeys' data
    // member, and thus the parameters given to the parameter object:
    NEW_CHILD_MODEL(Gaussian_Halo,DMHalo_base)
    DEFINEPARS(Gaussian_Halo, \
                  "v_earth", "par2", "par3", "par4","par5", \
                  "par6","par7","par8","par9","par10")
    
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
    const std::vector<str> newkeys = {"extpar1","extpar2","extpar3"};
    const std::vector<str> CMSSMandGHALO::parameterkeys = vecjoin3(
                                                  Gaussian_Halo::parameterkeys,
                                                  CMSSM::P1::parameterkeys,
                                                  newkeys
                                                  );
    // Could hide this with some macro stuff, but have not invented these yet.
    
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



















