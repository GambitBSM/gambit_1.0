//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Helper macros for model definitions. Mostly 
///  based on contents of Utils/include/observable.hpp
///  (i.e. functors that wrap module functions).
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2013 May, June, July
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2013 July, Aug
///  \date 2014 Jan
///
///  *********************************************

#ifndef __model_macros_hpp__
#define __model_macros_hpp__

#include "util_macros.hpp"
#include "util_types.hpp"
#include "model_functions.hpp"
#include "module_macros_incore.hpp"
#include "types_rollcall.hpp"
#include "models.hpp"
#include "boost_fallbacks.hpp"

#include <boost/preprocessor/seq/for_each.hpp>


// MACRO DEFINITIONS. 

//  ****************************************************************************
/// "Rollcall" macros. These are lifted straight from module_macros_incore.hpp
/// but are modified here and there to suit the role of models.

/// Piggybacks off the CORE_START_MODULE_COMMON macro, as we need all the same 
/// machinery.
#define START_MODEL                                                            \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    ADD_TAG_IN_CURRENT_NAMESPACE(primary_parameters)                           \
    ADD_TAG_IN_CURRENT_NAMESPACE(CAT(MODEL,_parameters))                       \
                                                                               \
    namespace Models                                                           \
    {                                                                          \
                                                                               \
      namespace MODEL                                                          \
      {                                                                        \
                                                                               \
        /* Basic machinery, same as for modules 
           (macro from module_macros_incore.hpp) */                            \
        CORE_START_MODULE_COMMON(MODEL)                                        \
                                                                               \
        /* Model lineage                                                       
           Each model is automatically marked as a child of the parent model.*/\
        const std::vector<str> lineage = vecappend( PARENT::lineage,           \
                                                    STRINGIFY(MODEL) );        \
                                                                               \
        /* Congruency function (checks if this model is a descendent of the
           specified model (or is itself the specified model) ) 
           Returns 'true' if the supplied string is an element of 'lineage',
           else returns 'false'. */                                            \
        bool is_descendant_of(str testmodel)                                   \
        {                                                                      \
          verify_model(testmodel);                                             \
          for (std::vector<str>::const_iterator it = lineage.begin();          \
               it!=lineage.end(); ++it)                                        \
          {                                                                    \
            if (testmodel==*it) {return true;};                                \
          }                                                                    \
          return false;                                                        \
        }                                                                      \
                                                                               \
        /* Runtime addition of model to GAMBIT (modelClaw) database */         \
        void rt_add_model()                                                    \
        {                                                                      \
          modelClaw().add_model(STRINGIFY(MODEL));                             \
        }                                                                      \
                                                                               \
        /* Runtime addition of model's parents to ModelClaw database */        \
        void rt_add_parents()                                                  \
        {                                                                      \
          modelClaw().add_parents(STRINGIFY(MODEL), STRINGIFY(PARENT));        \
        }                                                                      \
                                                                               \
        /* Runtime addition of model's lineage to ModelClaw database */        \
        void rt_add_lineage()                                                  \
        {                                                                      \
          modelClaw().add_lineage(STRINGIFY(MODEL), lineage);                  \
        }                                                                      \
                                                                               \
        /* Runtime addition of model-as-a-descendant to ModelClaw databases */ \
        void rt_add_descendant()                                               \
        {                                                                      \
          modelClaw().add_descendant(STRINGIFY(MODEL), &is_descendant_of);     \
        }                                                                      \
                                                                               \
        namespace Ini                                                          \
        {                                                                      \
          ini_code AddModel (&rt_add_model);                                   \
          ini_code AddParents (&rt_add_parents);                               \
          ini_code AddLineage (&rt_add_lineage);                               \
          ini_code AddDescendant (&rt_add_descendant);                         \
        }                                                                      \
                                                                               \
        namespace Accessors                                                    \
        {                                                                      \
          /* Add appropriate 'provides' check to confirm the parameters object 
             as a CAPABILITY of this model. */                                 \
          template <>                                                          \
          bool provides<Gambit::Tags::CAT(MODEL,_parameters)>(){return true;}  \
        }                                                                      \
                                                                               \
        /* Functor's actual "calculate" function.  Doesn't do anything. */     \
        void primary_parameters (ModelParameters&) {}                          \
                                                                               \
        /* Wrap it up in a primary_model_functor */                            \
        MAKE_PRIMARY_MODEL_FUNCTOR(primary_parameters, CAT(MODEL,_parameters), \
                                   MODEL)                                      \
                                                                               \
      }                                                                        \
    }                                                                          \
  }                                                                            \
          
/// Tells the core that the current parameter corresponds to the specified
/// CAPABILITY, so that module functions can then draw upon them like any
/// other capabilities. Draws from CORE_START_CAPABILITY macro.
/// So far I am only allowing parameters of type double (currently the parameter
/// object cannot store anything else anyway). If we really want to allow 
/// integer or maybe complex parameters later we could extend some things in 
/// here.

#define MAP_TO_CAPABILITY(PARAMETER,CAPABILITY)                                \
  LINK_PARAMETER_TO_CAPABILITY(PARAMETER,CAPABILITY)                           \

#define LINK_PARAMETER_TO_CAPABILITY(PARAMETER,CAPABILITY)                     \
                                                                               \
  /*DEFINEPAR(PARAMETER) -- Now do this seperately */                          \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    /* Add CAPABILITY to global set of tags of known module capabilities/deps*/\
    ADD_TAG_IN_CURRENT_NAMESPACE(CAPABILITY)                                   \
                                                                               \
    namespace Models                                                           \
    {                                                                          \
                                                                               \
      namespace MODEL                                                          \
      {                                                                        \
                                                                               \
        /* Add PARAMETER to set of tags of known module functions.*/           \
        ADD_TAG_IN_CURRENT_NAMESPACE(PARAMETER)                                \
                                                                               \
        namespace Accessors                                                    \
        {                                                                      \
          /* Indicate that this PARAMETER can provide quantity CAPABILITY */   \
          template <>                                                          \
          bool provides<Gambit::Tags::CAPABILITY>() { return true; }           \
        }                                                                      \
                                                                               \
        /* The wrapper function which extracts the value of PARAMETER from
           the parameter object. This is the analogue of a module function, 
           and is what will be wrapped in a functor for processing by the 
           core */                                                             \
        /* Just the prototype here: defined a bit later on */                  \
        void PARAMETER (double &);                                             \
                                                                               \
        /* Wrap it up in a functor (macro from module_macros_incore.hpp) */    \
        MAKE_FUNCTOR(PARAMETER,double,CAPABILITY,MODEL,0)                      \
           
        /* Tell this functor to only activate for MODEL */                     \
        LITTLEGUY_ALLOW_MODEL                                                  \
                                                                               \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \
                                                                               \
  /* Create dependency of PARAMETER functor on host model parameters object */ \
  CORE_DEPENDENCY(CAT(MODEL,_parameters),ModelParameters,MODEL,PARAMETER,      \
   IS_MODEL)                                                                   \
                                                                               \
  /* Define the actual parameter setting function, now that we have the        
     functor and its dependency */                                             \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    namespace Models                                                           \
    {                                                                          \
                                                                               \
      namespace MODEL                                                          \
      {                                                                        \
                                                                               \
        /* The wrapper function which extracts the value of PARAMETER from
           the parameter object. This is the analogue of a module function, 
           and is what will be wrapped in a functor for processing by the 
           core */                                                             \
        void PARAMETER (double &result)                                        \
        {                                                                      \
          safe_ptr<ModelParameters> model_safe_ptr =                           \
           Pipes::PARAMETER::Dep::CAT(MODEL,_parameters).safe_pointer();       \
          result = model_safe_ptr->getValue(STRINGIFY(PARAMETER));             \
        }                                                                      \
                                                                               \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }    
  
  
// Macro to define parameter WITHOUT creating a corresponding CAPABILITY.
// Decided it just causes zillions of unused functors to be created. Really only
// need them if a specific capability is wanted, which MAP_TO_CAPABILITY
// still provides.
#define DEFINEPAR(PARAMETER)                                                   \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    namespace Models                                                           \
    {                                                                          \
                                                                               \
      namespace MODEL                                                          \
      {                                                                        \
                                                                               \
        /* A function that tells the functor holding the ModelParameters object\
           to add the new parameter to its [parameter name, value] map. */     \
        void CAT(add,PARAMETER)()                                              \
        {                                                                      \
          Functown::primary_parameters.addParameter(STRINGIFY(PARAMETER));     \
        }                                                                      \
                                                                               \
        /* Compiler cann't call push_back, so do it at  initialisation time    \
           using this ini_code trick. Don't call this function ever again!*/   \
        namespace Ini                                                          \
        {                                                                      \
          ini_code CAT(iniadd,PARAMETER) (&CAT(add,PARAMETER));                \
        }                                                                      \
                                                                               \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \


// Macro to easily define parameters who don't need special CAPABILITY 
// definitions. Iteratively calls MAP_TO_CAPABILITY, with CAPABILITYs defined
// with the same name as the parameters.
//#define DEFINEPARS(...)                                                      \
//do{                                                                          \
//    const char* _arr_[] = {__VA_ARGS__};                                     \
//    for(int i=0; i<sizeof(_arr_)/sizeof(const char*) ; i++){                 \
//      LINK_PARAMETER_TO_CAPABILITY(_arr_[i],_arr_[i]));                      \
//    }                                                                        \
//}while(0);   

// Ugghh, ok it is not great calling a macro in a loop like that, since it gets
// expanded first of course. I think this trick using the boost preprocessor
// does what we want though. Hope it is portable enough for our needs. Note that
// one needs a relatively up-to-date version of boost to get the variadic stuff.

// No longer want every parameter in its own functor: just the ones with
// custom CAPABILITIES
//#define DO_LINK(r,data,elem) LINK_PARAMETER_TO_CAPABILITY(elem,CAT_5(MODEL,_,PARAMETERISATION,_,elem))
// Changed our minds again: We do want these "miniguys".
#define DO_LINK(r,data,elem) DEFINEPAR(elem)
// Want simple names though: can resolve name clashes with dependency resolver,
// in principle.
//#define DO_LINK(r,data,elem) \
//  LINK_PARAMETER_TO_CAPABILITY(elem,elem)
// Nope, changed our minds again; back to no "little guys" except for those explicitly
// created by MAP_TO_CAPABILITY

#define DEFINEPARS(...) \
  BOOST_PP_SEQ_FOR_EACH(DO_LINK, _, BOOST_PP_TUPLE_TO_SEQ((__VA_ARGS__)))


// Generic constructor macro for INTERPRET_AS_X function wrapper.
// Need to run INTERPRET_AS_X__DEFINE(MODEL_X,CODE) afterwards to actually
// define the function.
#define INTERPRET_AS_X__BEGIN(MODEL_X)                                         \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    /* Add tags which specify that MODEL_X_parameters is a known capability/dep\  
    in GAMBIT. */                                                              \
    ADD_TAG_IN_CURRENT_NAMESPACE(CAT(MODEL_X,_parameters))                     \
                                                                               \
    namespace Models                                                           \
    {                                                                          \
                                                                               \
      namespace MODEL                                                          \
      {                                                                        \
                                                                               \
        namespace Accessors                                                    \
        {                                                                      \
          /* Indicate that this MODEL can provide quantity MODEL_X_parameters*/\
          template <>                                                          \
          bool provides<Gambit::Tags::CAT(MODEL_X,_parameters)>()              \
          {                                                                    \
            return true;                                                       \
          }                                                                    \
        }                                                                      \
                                                                               \
        /* Add MODEL_X_parameters to the set of tags of known functions        \
        provided by this model. */                                             \
        ADD_TAG_IN_CURRENT_NAMESPACE(CAT(MODEL_X,_parameters))                 \
                                                                               \
        /* The function which computes the MODEL_X_parameters object. This     \
           is the analogue of a module function, and is what will be wrapped   \
           in a functor for processing by the core                             \
           Note: CODE must be enclosed in braces. */                           \
        /* Register (prototype) the function */                                \
        void CAT(MODEL_X,_parameters) (ModelParameters &);                     \
                                                                               \
        /* Wrap it up in a functor (macro from module_macros_incore.hpp) */    \
        MAKE_FUNCTOR(CAT(MODEL_X,_parameters),ModelParameters,                 \
         CAT(MODEL_X,_parameters),MODEL,0)                                     \
                                                                               \
        /* Make a function that tells the functor to take its parameter        \
           definition from MODEL_X's primary_parameters functor. */            \
        void CAT(pars_for_,MODEL_X)()                                          \
        {                                                                      \
          MODEL_X::Functown::primary_parameters.donateParameters               \
           (MODEL::Functown::CAT(MODEL_X,_parameters));                        \
        }                                                                      \
                                                                               \
        /* Call it at initialisation time using an ini_code object. */         \
        namespace Ini                                                          \
        {                                                                      \
          ini_code CAT(ini_pars_for_,MODEL_X) (&CAT(pars_for_,MODEL_X));       \
        }                                                                      \
                                                                               \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \
                                                                               \
  /* Automatically add a dependency on the host model's parameters */          \
  INTERPRET_AS_X__DEPENDENCY(MODEL_X,CAT(MODEL,_parameters),ModelParameters)   \
  
  
// Actually define the interpret_as_X function. Alternatively this could be
// moved into a seperate source file, as occurs for module functions, rather
// than making the user write it in the model header. This would let the
// compiler help the user debug their code more easily, since stuck into a 
// macro like this the compiler can't see what line the user's error occurs on.
#define INTERPRET_AS_X__DEFINE(MODEL_X,FUNC)                                   \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    namespace Models                                                           \
    {                                                                          \
                                                                               \
      namespace MODEL                                                          \
      {                                                                        \
                                                                               \
        /* Prototype the user-defined function */                              \
        void FUNC (const ModelParameters&, ModelParameters&);                  \
                                                                               \
        /* The actual definition of the interpret_as_X "module" function */    \
        void CAT(MODEL_X,_parameters) (ModelParameters &model_x_params)        \
        {                                                                      \
          /* Collect MODEL's parameters via dependency system */               \
          using namespace Pipes::CAT(MODEL_X,_parameters);                     \
          const ModelParameters& model_params = *Dep::CAT(MODEL,_parameters);  \
                                                                               \
          /* Run user-supplied code (which must take result as an
             argument, and set the parameters it contains as desired) */       \
          FUNC (model_params,model_x_params);                                  \
        }                                                                      \
                                                                               \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \

#define INTERPRET_AS_X__DEPENDENCY(MODEL_X, DEP, TYPE)                         \
  CORE_DEPENDENCY(DEP, TYPE, MODEL, CAT(MODEL_X,_parameters), IS_MODEL)        \

// Wrappers to convert INTERPRET_AS_X macros to INTERPRET_AS_PARENT macros.
#define INTERPRET_AS_PARENT__BEGIN                                             \
  INTERPRET_AS_X__BEGIN(PARENT)                                                \

#define INTERPRET_AS_PARENT__DEPENDENCY(DEP, TYPE)                             \
  INTERPRET_AS_X__DEPENDENCY(PARENT, DEP, TYPE)                                \

#define INTERPRET_AS_PARENT__DEFINE(FUNC)                                      \
  INTERPRET_AS_X__DEFINE(PARENT,FUNC)                                          \

// Full combo wrapper
#define INTERPRET_AS_PARENT__FUNCTION(FUNC)                                    \
  INTERPRET_AS_PARENT__BEGIN                                                   \
  INTERPRET_AS_PARENT__DEFINE(FUNC)                                            \

// Macro to get to model namespace easily
#define MODEL_NAMESPACE Gambit::Models::MODEL 

// Macro to easily get the Pipes, for retrieving dependencies
#define USE_MODEL_PIPE                                                         \
  using namespace MODEL_NAMESPACE::Pipes::CAT(PARENT,_parameters);       \

/// Macros to create and register primary model functors. 
///
/// We need this extra wrapper in order to define these special functors and add
/// them to the Core's primary model functor list (no other functors allowed here).         
/// @{

// Determine whether to make registration calls to the Core in the 
// MAKE_PRIMARY_MODEL_FUNCTOR macro, depending on STANDALONE flag 
#ifdef STANDALONE
  #define MAKE_PRIMARY_MODEL_FUNCTOR(FUNCTION,CAPABILITY,ORIGIN)               \
          MAKE_PRIMARY_MODEL_FUNCTOR_MAIN(FUNCTION,CAPABILITY,ORIGIN)
#else
  #define MAKE_PRIMARY_MODEL_FUNCTOR(FUNCTION,CAPABILITY,ORIGIN)               \
          MAKE_PRIMARY_MODEL_FUNCTOR_MAIN(FUNCTION,CAPABILITY,ORIGIN)          \
          MAKE_PRIMARY_MODEL_FUNCTOR_SUPP(FUNCTION)                  
#endif
  
/// Main version of MAKE_FUNCTOR modified to build primary_parameters functors.
#define MAKE_PRIMARY_MODEL_FUNCTOR_MAIN(FUNCTION,CAPABILITY,ORIGIN)            \
                                                                               \
  /* Create the function wrapper object (functor) */                           \
  namespace Functown                                                           \
  {                                                                            \
    primary_model_functor FUNCTION                                             \
     (&ORIGIN::FUNCTION, STRINGIFY(FUNCTION), STRINGIFY(CAPABILITY),           \
     "ModelParameters", STRINGIFY(ORIGIN));                                    \
  }                                                                            \
                                                                               \
  /* Set up the commands to be called at runtime to register the function. */  \
  template <>                                                                  \
  void rt_register_function<Tags::FUNCTION> ()                                 \
  {                                                                            \
    Accessors::map_bools[STRINGIFY(CAPABILITY)] =                              \
     &Accessors::provides<Gambit::Tags::CAPABILITY>;                           \
    Accessors::iCanDo[STRINGIFY(FUNCTION)] = "ModelParameters";                \
  }                                                                            \
                                                                               \
  /* Create the function initialisation object */                              \
  namespace Ini                                                                \
  {                                                                            \
    ini_code FUNCTION (&rt_register_function<Tags::FUNCTION>);                 \
  }                                                                            \

/// Supplementary version of MAKE_FUNCTOR modded for primary_parameters functors.
#define MAKE_PRIMARY_MODEL_FUNCTOR_SUPP(FUNCTION)                              \
                                                                               \
  /* Register the functor with the Core. */                                    \
  template <>                                                                  \
  void rt_register_function_supp<Tags::FUNCTION> ()                            \
  {                                                                            \
    Core().registerPrimaryModelFunctor(Functown::FUNCTION);                    \
  }                                                                            \
                                                                               \
  /* Create the function initialisation object */                              \
  namespace Ini                                                                \
  {                                                                            \
    ini_code CAT(FUNCTION,_supp) (&rt_register_function_supp<Tags::FUNCTION>); \
  }                                                                            \

/// @}

#endif /* defined(__model_macros_hpp__) */

