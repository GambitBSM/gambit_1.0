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
#include "logging.hpp"

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

  // Declare the interpret as parent function, and build the functor machinery around it.
  // The user-defined part of the function can go anywhere, so long as you properly attach
  // it to this declaration (which puts the function here: Gambit::Models::MODEL::<FUNCTION>)
  // The MODEL_NAMESPACE macro get you the Gambit::Models::MODEL part, if MODEL is defined.
  INTERPRET_AS_PARENT__FUNCTION(MSSM_I_IAPfunc)

  // Note: "myparams" must be const. You're not allowed to change them here. Change "parentparams".
  // To be able to access the Pipes, in case dependencies exist, this function has to be put in
  // the correct namespace, and be defined after the Interpret-As-Parent functor has been defined.
  // To make it easier to attach the function definition to the correct declaration I made a macro; MODEL_NAMESPACE
  void MODEL_NAMESPACE::MSSM_I_IAPfunc (const ModelParameters &myparams, ModelParameters &parentparams)
  {
      logger()<<"Running interpret_as_parent calculations for MSSM_demo -> test_parent_I ..."<<EOM;
      
      double M1 = myparams["M1"];
      double M2 = myparams["M2"];
      double M3 = myparams["M3"];
    
      parentparams.setValue("p1", 0.01*M1*M2*M3);
      parentparams.setValue("p2", 0.10*M1*M2*M3);
      parentparams.setValue("p3", 1.00*M1*M2*M3);
  } 
 

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
  DEFINEPARS(M0, M12, A0, Mstop, tanb, sgnmu)
  
  // Attach a CAPABILITY to a parameter (creates a "little guys" functor)
  MAP_TO_CAPABILITY(Mstop, Mstop_obs)
  
  // Add in an INTERPRET_AS_PARENT function (sets the PARENT model's parameter
  // object as a CAPABILITY of this model)
  
  // Need to go to a little effort to find the correct pipes to retrieve the dependency.
  // To save this effort, I made the USE_MODEL_PIPE macro. This requires the PARENT and MODEL
  // macros to be defined correctly to work (just a warning in case you define the IAP 
  // function elsewhere, which is perfectly legitimate to do, say in a cpp file so that
  // recompiling is not necessary whenever you change it. Just #define PARENT and MODEL
  // if you do this.)
  // The macro just expands to the following:
  //   using namespace Gambit::Models::MODEL::Pipes::PARENT_parameters;
  //
  INTERPRET_AS_PARENT__FUNCTION(CMSSM_demo_IAPfunc)
  INTERPRET_AS_PARENT__DEPENDENCY(id, std::string)

  void MODEL_NAMESPACE::CMSSM_demo_IAPfunc (const ModelParameters &myparams, ModelParameters &parentparams)
  {
      logger()<<"Running interpret_as_parent calculations for CMSSM_demo -> MSSM_demo ..."<<EOM;
      
      USE_MODEL_PIPE

      double M0  = myparams["M0"];
      double M12 = myparams["M12"];
      double A0  = myparams["A0"];
      
      /* Play around with the extra info obtained from dependency */
      logger()<<"identity dependency has supplied the value: "<<*Dep::id<<EOM;
      
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

#define MODEL SomeOther_Halo_demo
#define PARENT DMHalo_base_demo
  START_MODEL
  DEFINEPARS(v_earth, blah0)
  MAP_TO_CAPABILITY(v_earth, earthvel)
  MAP_TO_CAPABILITY(blah0,   blah0cap)
#undef PARENT
#undef MODEL


// Make third branch of model tree, and connect it to the first branch by INTERPRET_AS_X

#define MODEL TWOHDM_demo_parent
  START_MODEL
  DEFINEPARS(X, Y, Z)
#undef MODEL

#define MODEL TWOHDM_demo
#define PARENT TWOHDM_demo_parent
  START_MODEL
  DEFINEPARS(X, Y, Z)
  INTERPRET_AS_PARENT__FUNCTION(to_parent)
  INTERPRET_AS_X__FUNCTION(MSSM_demo,to_MSSM)
  void MODEL_NAMESPACE::to_parent(const ModelParameters &myparams, ModelParameters &parentparams)
  {
      USE_MODEL_PIPE
      logger()<<"Running interpret_as_parent calculations for TWOHDM_demo -> TWOHDM_demo_parent ..."<<EOM;     
      parentparams.setValue("X",myparams["X"]);
      parentparams.setValue("Y",2.0*myparams["Y"]);
      parentparams.setValue("Z",myparams["Z"]);
  }
  void MODEL_NAMESPACE::to_MSSM(const ModelParameters &myparams, ModelParameters &MSSM_params)
  {
      USE_MODEL_PIPE
      logger()<<"Running interpret_as_X calculations for TWOHDM_demo -> MSSM_demo ..."<<EOM;     
      MSSM_params.setValue("M1",myparams["X"]);
      MSSM_params.setValue("M2",myparams["Y"]);
      MSSM_params.setValue("M3",myparams["Z"]);
      MSSM_params.setValue("AU1",1.0);
      MSSM_params.setValue("AU2",2.0);
      MSSM_params.setValue("AU3",3.0);
  }
#undef PARENT
#undef MODEL

#define MODEL TWOHDM_sub_demo
#define PARENT TWOHDM_demo
  START_MODEL
  DEFINEPARS(Y,Z)
  INTERPRET_AS_PARENT__FUNCTION(to_parent)
  void MODEL_NAMESPACE::to_parent(const ModelParameters &myparams, ModelParameters &parentparams)
  {
      USE_MODEL_PIPE
      logger()<<"Running interpret_as_parent calculations for TWOHDM_sub_demo -> TWOHDM_demo ..."<<EOM;     
      parentparams.setValue("X",1.0);
      parentparams.setValue("Y",myparams["Y"]);
      parentparams.setValue("Z",myparams["Z"]);
  }
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













