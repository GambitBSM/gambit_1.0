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
//#include <ModelMacros.hpp>
#include <model_macros.hpp>
#include <util_classes.hpp>
//#include <dictionary.hpp>  //need this for the 'dict' type.

// Note: the namespaces are all controlled by the macros now, so none appear
// here! It is a similar deal to the module rollcall headers.
  
// In include/modelmacros.hpp we have defined the virtual bass class
// "model_base". The NEW_CHILD_MODEL macro builds a new class with the 
// specified name, which inherits from either model_base or a child of
// model_base and automatically builds a function "lineage()" which will spit 
// out a vector of strings containing the names of all its parents (and 
// itself)

// NEW FRAMEWORK

#define MODEL test_parent
#define PARENT model_base
  #define PARAMETERISATION I
  START_PARAMETERISATION
  DEFINEPARS(p1,p2,p3)
  #undef PARAMETERISATION
#undef PARENT
#undef MODEL

#define MODEL MSSM
#define PARENT test_parent_I /* We may define a different parent for
  different parameterisations if we like. */
  #define PARAMETERISATION I
  START_PARAMETERISATION
  DEFINEPARS(M1,M2,M3,AU1,AU2,AU3)
  INTERPRET_AS_PARENT__BEGIN
  INTERPRET_AS_PARENT__DEFINE(
    {
      cout<<"Running interpret_as_parent calculations for MSSM_I -> test_parent_I ..."<<endl;
      using namespace SafePointers::test_parent_I_parameters;
      double M1 = Dep::MSSM_I_parameters->getValue("M1");
      double M2 = Dep::MSSM_I_parameters->getValue("M2");
      double M3 = Dep::MSSM_I_parameters->getValue("M3");
      
      target_parameters.setValue("p1", 0.01*M1*M2*M3);
      target_parameters.setValue("p2", 0.10*M1*M2*M3);
      target_parameters.setValue("p3", 1.00*M1*M2*M3);
    }
  )
  #undef PARAMETERISATION
#undef PARENT
#undef MODEL

// Fast way of defining a model. Wraps every parameter in a functor,
// with the matched CAPABILITY given a name based on PARAMETER.
// To avoid name clashes we have to give these really ugly names since all the
// functor tags living in the global GAMBIT namespace need unique names. 
// ( e.g. CMSSM_I_M0 )
// If a parameter is to be matched to a "proper" capability then this needs to 
// be specified using the long method.
#define MODEL CMSSM
// Currently only the parameterisations have a "lineage" vector, so we need to
// pick one of those to inherit from. Probably need functions to map
// horizontally between parametersations, similar to INTERPRET_AS_PARENT.
#define PARENT MSSM_I

  #define PARAMETERISATION I
  START_PARAMETERISATION
  DEFINEPARS(M0, M12, A0, tanb, sgnmu)
  
    // Add in a sensibly named capability for good measure
    // -> convert to having ModelParameters as a dependency, no individual functors
    // by default.
    #define PARAMETER Mstop
    MAP_TO_CAPABILITY(Mstop_obs)
    #undef PARAMETER 
  
  // Add in an INTERPRET_AS_PARENT function (sets the PARENT model's parameter
  // object as a CAPABILITY of this model)
  INTERPRET_AS_PARENT__BEGIN
  INTERPRET_AS_PARENT__DEPENDENCY(nevents, double)
  INTERPRET_AS_PARENT__DEFINE(
  {
    cout<<"Running interpret_as_parent calculations for CMSSM_I -> MSSM_I ..."<<endl;
    /* Get host model parameter object using dependency system 
       (can technically use parametersptr directly since we have access to it,
        but I might try and restore proper encapsulation of the 
        ModelParameters objects in their functors, i.e. this pointer might be
        removed in the future, so better to use this proper method. */
    
    using namespace SafePointers::MSSM_I_parameters;
    double M0 = Dep::CMSSM_I_parameters->getValue("M0");
    double M12 = Dep::CMSSM_I_parameters->getValue("M12");
    double A0 = Dep::CMSSM_I_parameters->getValue("A0");
    
    // Can we set parameters with this pointer?
    /*
    cout<<"testing safepointer->setValue"<<endl;
    cout<<M0<<endl;
    Dep::CMSSM_I_parameters->setValue("M0",500);
    cout<<Dep::CMSSM_I_parameters->getValue("M0")<<endl;
    ...no*/
    /*
    double M0 = parametersptr->getValue("M0");
    double M12 = parametersptr->getValue("M12");
    double A0 = parametersptr->getValue("A0");
    */
    
    /* Play around with the extra info obtained from dependency */
    cout<<"nevents dependency has supplied the value: "<<*Dep::nevents<<endl;
    
    /* Grab reference to parent parameter object and set some values. 
       The parent parameter object already exists if we have gotten this 
       far (was created along with the functor that wraps this function) */
    
    target_parameters.setValue("M1", M0);
    target_parameters.setValue("M2", 0.5*M0);
    target_parameters.setValue("M3", 3*M0);
    target_parameters.setValue("AU1", A0);
    target_parameters.setValue("AU2", 2*A0);
    target_parameters.setValue("AU3", 0);
  })
    
  #undef PARAMETERISATION
  
  #define PARAMETERISATION II
  START_PARAMETERISATION
  DEFINEPARS(M0, M12, A0, B, mu)
  #undef PARAMETERISATION
  
#undef PARENT
#undef MODEL


// Make second branch of model tree

#define MODEL DMHalo_base
#define PARENT model_base
  #define PARAMETERISATION I
  START_PARAMETERISATION
  DEFINEPARS(null)
  #undef PARAMETERISATION
#undef PARENT
#undef MODEL   

#define MODEL Gaussian_Halo
#define PARENT DMHalo_base_I
  #define PARAMETERISATION I
  START_PARAMETERISATION
  DEFINEPARS(v_earth, par2, par3)   // Can call this more than once:
  DEFINEPARS(par4, par5, par6, par7, par8, par9, par10)
  #undef PARAMETERISATION
#undef PARENT
#undef MODEL

// Long way of defining a model. Individually specify parameter names and
// the capabilities they map to. Also allows room to specify other things
// about parameters if we like. 
#define MODEL SomeOther_Halo
#define PARENT DMHalo_base_I

  #define PARAMETERISATION I
  START_PARAMETERISATION
  
    #define PARAMETER v_earth
    MAP_TO_CAPABILITY(earthvel)
    //DOSOMETHINGELSE(blah)
    #undef PARAMETER 

    #define PARAMETER blah0
    MAP_TO_CAPABILITY(blah0cap)
    //DOSOMETHINGELSE(blah)
    #undef PARAMETER 

  #undef PARAMETERISATION
  
#undef PARENT
#undef MODEL

//  #define PARAMETER par2
//    CAPABILITY(otherstuff)

//INTERPRET_AS_PARENT(
//  *insert real C++ code here*
//)
    

// Currently cannot create "supermodels" as we could before, but I can
// add this ability easily. Might have problems dealing with the
// INTERPRET_AS_PARENT functions. Would just have to specify which parent
// I guess.         

#endif /* defined(__MSSM_hpp__) */

/* Rough concept: split up definition, so we can create functors for every
   parameter. Dependency system then deals with these functions.
   
    - need a "get parameter value" function for every parameter, which is what
      the functor calls. Just extracts parameter from the parameter object.
   Might have to consider ripping everything out of the model classes. But maybe
   not, will have to see.
   
    - "interpret_as_parent" function gives instructions for the creation of the
      parent parameter object. Possibly does this by calling the constructor
      for the parent model object, and just providing the appropriate 
      parameters? We don't want to be creating objects every loop though... needblacksun
      
      the dependency system to determine if it is necessary and then create the
      parent model object if we have to, then simply modify its values via the
      "interpret_as_parent" function each loop. Bit tricky.
      
    - Functors should be pretty much, if not exactly, the same as
      module_functors, and the core will possibly just deal with them the same
      way (although they will probably get higher priority than module_functors,
      since we should resolve dependencies by using these before we decide to
      go out and calculate anything, unless the ini_file explicitly asks us to
      get the value from some module function instead).
      
   Resources:
      Utils/include/functors.hpp - line 259 class module_functor
      Utils/include/module_macros.hpp - line 434 CORE_START_FUNCTION(TYPE)
      
      

  #define CHILD_MODEL Gaussian_Halo
    PARENT(DMHalo_base)
    
      #define PARAMETER v_earth
        CAPABILITY(earthvel)
        DOSOMETHINGELSE(blah)

      #define PARAMETER par2
        CAPABILITY(otherstuff)

    INTERPRET_AS_PARENT(
      *insert real C++ code here*
    )
    
*/













