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
#include "modelmacros.hpp"
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
    NEW_CHILD_MODEL(MSSM,model_base)
    void MSSM::defineParameters() {}
    // We MUST provide a definition for the "defineParameters()" function or 
    // else a compiler error occurs. defineParameters() is called by the 
    // constructor.
    
    // Next iteration...
    NEW_CHILD_MODEL(CMSSM_base,MSSM)
    void CMSSM_base::defineParameters() {}
    
    namespace CMSSM {
      // Need to go inside CMSSM namespace to create parameterisations (just
      // so they have unique names). These are all "CMSSM" though as far as 
      // the hierarchy is concerned...
      NEW_CHILD_MODEL(P1,CMSSM_base);
      // This time we provide a definition for "defineParameters()" which
      // actually does something.
      void P1::defineParameters() {
        this->CMSSM_base::defineParameters();
        _defineValue("M0",1000,0,1e5);
        _defineValue("M12",1000,0,1e5);
        _defineValue("A0",1000,0,1e5);
        _defineValue("tanb",1,-1000,1000);
        _defineValue("sgnmu",1,-1e5,1e5);
      }
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



















