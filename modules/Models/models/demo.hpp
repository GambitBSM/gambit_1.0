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
//  2013 May, ???, 2014 Mar
//  Pat Scott
//  2013 Sep
//
//  *********************************************

#ifndef __demo_hpp__
#define __demo_hpp__

#include <string>

#define MODEL test_parent_I
  START_MODEL
  DEFINEPARS(p1,p2,p3)
#undef MODEL

#define MODEL NormalDist
  START_MODEL
  DEFINEPARS(mu,sigma)
#undef MODEL

#define MODEL MSSM_demo
#define PARENT test_parent_I
  START_MODEL
  DEFINEPARS(M1,M2,M3,AU1,AU2,AU3)
  INTERPRET_AS_PARENT__BEGIN
  INTERPRET_AS_PARENT__DEFINE(MSSM_I_IAPfunc)
  namespace Gambit{ namespace Models{ namespace MSSM_demo{
  void MSSM_I_IAPfunc (ModelParameters &parentparams)
  {
      cout<<"Running interpret_as_parent calculations for MSSM_demo -> test_parent_I ..."<<endl;
      using namespace Pipes::test_parent_I_parameters;
      const ModelParameters &p = *Dep::MSSM_demo_parameters;
      
      double M1 = p["M1"];
      double M2 = p["M2"];
      double M3 = p["M3"];
      
      //Can now get parameters less verbosely:
      //double M1 = *Param["M1"];
      //double M2 = *Param["M2"];
      //double M3 = *Param["M3"];

      //Or alternatively, if you also declare explicit dependencies on any of the parameters:
      //double M1 = *Dep::M1;
      //double M2 = *Dep::M2;
      //double M3 = *Dep::M3;
      //*Params is the preferred way though.
      
      parentparams.setValue("p1", 0.01*M1*M2*M3);
      parentparams.setValue("p2", 0.10*M1*M2*M3);
      parentparams.setValue("p3", 1.00*M1*M2*M3);
    }
    }}} //exiting namespaces
#undef PARENT
#undef MODEL

// Fast way of defining a model. Wraps every parameter in a functor,
// with the matched CAPABILITY given a name based on PARAMETER.
// To avoid name clashes we have to give these really ugly names since all the
// functor tags living in the global Gambit namespace need unique names. 
// ( e.g. CMSSM_I_M0 )
// If a parameter is to be matched to a "proper" capability then this needs to 
// be specified using the long method.

#define MODEL CMSSM_demo
#define PARENT MSSM_demo
  START_MODEL
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
  INTERPRET_AS_PARENT__DEFINE(CMSSM_demo_IAPfunc)
  
  namespace Gambit{ namespace Models{ namespace CMSSM_demo{
  void CMSSM_demo_IAPfunc (ModelParameters &parentparams)
  {
    std::cout<<"Running interpret_as_parent calculations for CMSSM_demo -> MSSM_demo ..."<<std::endl;
    /* Get host model parameter object using dependency system 
       (can technically use parametersptr directly since we have access to it,
        but I might try and restore proper encapsulation of the 
        ModelParameters objects in their functors, i.e. this pointer might be
        removed in the future, so better to use this proper method. */
    
    using namespace Pipes::MSSM_demo_parameters;
    const ModelParameters &p = *Dep::CMSSM_demo_parameters;
      
    double M0  = p["M0"];
    double M12 = p["M12"];
    double A0  = p["A0"];
    
    /* Play around with the extra info obtained from dependency */
    cout<<"nevents dependency has supplied the value: "<<*Dep::nevents<<endl;
    
    /* Grab reference to parent parameter object and set some values. 
       The parent parameter object already exists if we have gotten this 
       far (was created along with the functor that wraps this function) */
    
    parentparams.setValue("M1", M0);
    parentparams.setValue("M2", 0.5*M0);
    parentparams.setValue("M3", 3*M0);
    parentparams.setValue("AU1", A0);
    parentparams.setValue("AU2", 2*A0);
    parentparams.setValue("AU3", 0);
  }
  }}} //exiting namespaces  
#undef PARENT
#undef MODEL

// Alternative parameterisations of models are treated just like any other model. You may like to have a "primary" parameterisation, and "alternative" parameterisations which are child models of the primary, with interpret-as-parent functions defined to convert from the alternate to the primary parameters.
#define MODEL CMSSM_II_demo
#define PARENT MSSM_demo
  START_MODEL
  DEFINEPARS(M0, M12, A0, B, mu)
#undef PARENT
#undef MODEL


// Make second branch of model tree

#define MODEL DMHalo_base_demo
  START_MODEL
  DEFINEPARS(null)
#undef MODEL   

#define MODEL Gaussian_Halo_demo
#define PARENT DMHalo_base_demo
  START_MODEL
  DEFINEPARS(v_earth, par2, par3)   // Can call this more than once:
  DEFINEPARS(par4, par5, par6, par7, par8, par9, par10)
#undef PARENT
#undef MODEL

// Long way of defining a model. Individually specify parameter names and
// the capabilities they map to. Also allows room to specify other things
// about parameters if we like. 
#define MODEL SomeOther_Halo_demo
#define PARENT DMHalo_base_demo
  START_MODEL
  
    #define PARAMETER v_earth
    MAP_TO_CAPABILITY(earthvel)
    //DOSOMETHINGELSE(blah)
    #undef PARAMETER 

    #define PARAMETER blah0
    MAP_TO_CAPABILITY(blah0cap)
    //DOSOMETHINGELSE(blah)
    #undef PARAMETER 
  
#undef PARENT
#undef MODEL


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













