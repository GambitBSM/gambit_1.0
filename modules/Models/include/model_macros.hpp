//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Helper macros for model definitions.
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
///  \date 2014 Jan, Nov
///
///  *********************************************

#ifndef __model_macros_hpp__
#define __model_macros_hpp__

#include "util_macros.hpp"
#include "util_types.hpp"
#include "orphan.hpp"
#include "types_rollcall.hpp"
#include "claw_singleton.hpp"
#include "boost_fallbacks.hpp"

#include <boost/preprocessor/seq/for_each.hpp>


// MACRO DEFINITIONS. 

//  ****************************************************************************
/// "Rollcall" macros. These are lifted straight from module_macros_incore.hpp
/// but are modified here and there to suit the role of models.

// New addition: Now with core vs module macro redirections similar to those
// in the module macros, to permit translation ("interpret as") functions to
// be defined in source files and be compiled separately from the gambit core.
// (Note: this is not yet throughly tested. Might be missing some currently
// unused  macros)

#define STRING2(x) #x
#define STRING(x) STRING2(x)

#ifdef __model_rollcall_hpp__
  // #include "module_macros_incore.hpp"
  #pragma message "In model_macros.hpp: Using CORE versions of macros"
  #define START_MODEL             CORE_START_MODEL
  #define DEFINEPARS(...)         CORE_DEFINEPARS(__VA_ARGS__)
  #define MAP_TO_CAPABILITY(PARAMETER,CAPABILITY)  \
                                  CORE_MAP_TO_CAPABILITY(PARAMETER,CAPABILITY)
  #define INTERPRET_AS_X__FUNCTION(MODEL_X,FUNC)  \
                                  CORE_INTERPRET_AS_X__FUNCTION(MODEL_X,FUNC)
  #define INTERPRET_AS_PARENT__FUNCTION(FUNC)  \
                                  CORE_INTERPRET_AS_PARENT__FUNCTION(FUNC)
  #define INTERPRET_AS_X__DEPENDENCY(MODEL_X, DEP, TYPE)  \
                                  CORE_INTERPRET_AS_X__DEPENDENCY(MODEL_X, DEP, TYPE)
#else
  #pragma message "In model_macros.hpp: Using MODULE versions of macros"
  #define START_MODEL             MODULE_START_MODEL
  #define DEFINEPARS(...)         /* Do nothing */
  #define MAP_TO_CAPABILITY(PARAMETER,CAPABILITY) /* Do nothing */
  #define INTERPRET_AS_X__FUNCTION(MODEL_X,FUNC) \
                                  MODULE_INTERPRET_AS_X__FUNCTION(MODEL_X,FUNC)
  #define INTERPRET_AS_PARENT__FUNCTION(FUNC) \
                                  MODULE_INTERPRET_AS_X__FUNCTION(PARENT,FUNC)
  #define INTERPRET_AS_X__DEPENDENCY(MODEL_X, DEP, TYPE)  \
                                  MODULE_INTERPRET_AS_X__DEPENDENCY(MODEL_X, DEP, TYPE)
#endif

/// "in module" version of the START_MODEL macro
#define MODULE_START_MODEL                                                     \
  IF_TOKEN_UNDEFINED(MODEL,FAIL("You must define MODEL before calling "        \
   "START_MODEL."))                                                            \
  /*_Pragma("message declaring model...") \
  _Pragma( STRINGIFY(CAT("message Forward declaring model: ",MODEL)) )      */ \
  namespace Gambit                                                             \
  {                                                                            \
   namespace Models                                                            \
   {                                                                           \
    namespace MODEL                                                            \
    {                                                                          \
      /* Module errors */                                                      \
      error& CAT(MODEL,_error)();                                              \
      /* Module warnings */                                                    \
      warning& CAT(MODEL,_warning)();                                          \
    }                                                                          \
   }                                                                           \
  }                                                                            \

/// "in module" version of the INTERPRET_AS_X__FUNCTION macro
#define MODULE_INTERPRET_AS_X__FUNCTION(MODEL_X,FUNC)                          \
  namespace Gambit                                                             \
  {                                                                            \
    namespace Models                                                           \
    {                                                                          \
      namespace MODEL                                                          \
      {                                                                        \
        /* Declare the user-defined function as defined elsewhere */           \
        extern void FUNC (const ModelParameters&, ModelParameters&);           \
                                                                               \
        /* Let the module source know that this functor is declared*/          \
        namespace Functown { extern module_functor<ModelParameters>            \
                                            CAT(MODEL_X,_parameters); }        \
                                                                               \
        namespace Pipes                                                        \
        {                                                                      \
          namespace CAT(MODEL_X,_parameters)                                   \
          {                                                                    \
            /* Declare the parameters safe-pointer map as external. */         \
            extern std::map<str, safe_ptr<double> > Param;                     \
            /* Declare the safe-pointer to the models vector as external. */   \
            extern safe_ptr< std::vector<str> > Models;                        \
            /* Declare the safe pointer to the run options as external. */     \
            extern safe_ptr<Options> runOptions;                               \
          }                                                                    \
        }                                                                      \
      }                                                                        \
    }                                                                          \
  }                                                                            \

/// "in module" version of the INTERPRET_AS_X__DEPENDENCY macro
#define MODULE_INTERPRET_AS_X__DEPENDENCY(MODEL_X, DEP, TYPE)                  \
  namespace Gambit                                                             \
  {                                                                            \
    namespace Models                                                           \
    {                                                                          \
      namespace MODEL                                                          \
      {                                                                        \
        /* Given that TYPE is not void, create a safety_bucket for the         \
        dependency result. To be initialized automatically at runtime          \
        when the dependency is resolved. */                                    \
        namespace Pipes                                                        \
        {                                                                      \
          namespace CAT(MODEL_X,_parameters)                                  \
          {                                                                    \
            BOOST_PP_IIF(IS_TYPE(void,TYPE),,                                  \
              namespace Dep { extern dep_bucket<TYPE> DEP; } )                 \
          }                                                                    \
                                                                               \
        }                                                                      \
      }                                                                        \
    }                                                                          \
  }                                                                            


/// Piggybacks off the CORE_START_MODULE_COMMON macro, as we need all the same 
/// machinery.
#define CORE_START_MODEL                                                       \
  IF_TOKEN_UNDEFINED(MODEL,FAIL("You must define MODEL before calling "        \
   "START_MODEL."))                                                            \
  /* _Pragma("message creating model...") \
  _Pragma( STRINGIFY(CAT("message  Creating model: ",MODEL)) )              */ \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    ADD_TAG_IN_CURRENT_NAMESPACE(primary_parameters)                           \
    ADD_TAG_IN_CURRENT_NAMESPACE(CAT(MODEL,_parameters))                       \
    ADD_MODEL_TAG_IN_CURRENT_NAMESPACE(MODEL)                                  \
                                                                               \
    namespace Models                                                           \
    {                                                                          \
                                                                               \
      namespace MODEL                                                          \
      {                                                                        \
                                                                               \
        /* Basic machinery, same as for modules                                \
           (macro from module_macros_incore.hpp) */                            \
        CORE_START_MODULE_COMMON_MAIN(MODEL)                                   \
                                                                               \
        /* Runtime addition of model to GAMBIT model database */               \
        void rt_add_model()                                                    \
        {                                                                      \
          ModelDB().declare_model(STRINGIFY(MODEL), STRINGIFY(PARENT));        \
        }                                                                      \
                                                                               \
        namespace Ini                                                          \
        {                                                                      \
          ini_code AddModel (&rt_add_model);                                   \
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
                                                                               \
      /* Make the functor exclusive to this model and its descendants */       \
      CORE_ALLOW_MODEL(MODEL,primary_parameters,MODEL)                         \
                                                                               \
    }                                                                          \
  }                                                                            \

/// Tells the core that the current parameter corresponds to the specified
/// CAPABILITY, so that module functions can then draw upon them like any
/// other capabilities. Draws from CORE_START_CAPABILITY macro.
/// So far we only allow parameters of type double (currently the parameter
/// object cannot store anything else anyway). If we really want to allow 
/// integer or maybe complex parameters later we could extend some things in 
/// here.
#define CORE_MAP_TO_CAPABILITY(PARAMETER,CAPABILITY)                           \
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
  }                                                                            \

  
/// Macro to define parameter.  Does not create a corresponding CAPABILITY;
/// use MAP_TO_CAPABILITY to do this after calling DEFINEPAR(S).
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

/// Define multiple model parameters
/// @{
#define CORE_DEFINEPARS(...)                                                   \
  BOOST_PP_SEQ_FOR_EACH(DO_LINK, _, BOOST_PP_TUPLE_TO_SEQ((__VA_ARGS__)))
#define DO_LINK(r,data,elem) DEFINEPAR(elem)
/// @}

/// Real declaration macro for INTERPRET_AS_X functions.
#define CORE_INTERPRET_AS_X__FUNCTION(MODEL_X,FUNC)                            \
        INTERPRET_AS_X__FUNCTION_FULL(MODEL_X,FUNC,1)                          \

/// Generic declaration macro for INTERPRET_AS_ functions.
#define INTERPRET_AS_X__FUNCTION_FULL(MODEL_X,FUNC,ADD_FRIEND)                 \
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
        ADD_TAG_IN_CURRENT_NAMESPACE(FUNC)                                     \
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
           definition from MODEL_X's primary_parameters functor, and           \
           adds MODEL_X as a friend of MODEL if it is not a parent. */         \
        void CAT(pars_for_,MODEL_X)()                                          \
        {                                                                      \
          MODEL_X::Functown::primary_parameters.donateParameters               \
           (Functown::CAT(MODEL_X,_parameters));                               \
          BOOST_PP_IIF(ADD_FRIEND,                                             \
           ModelDB().add_friend(STRINGIFY(MODEL), STRINGIFY(MODEL_X));,)       \
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
      /* Make the functor exclusive to this model and its descendants */       \
      CORE_ALLOW_MODEL(MODEL,CAT(MODEL_X,_parameters),MODEL)                   \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \


/// Add a dependency to an interpret-as-X function.
#define CORE_INTERPRET_AS_X__DEPENDENCY(MODEL_X, DEP, TYPE)                    \
  CORE_DEPENDENCY(DEP, TYPE, MODEL, CAT(MODEL_X,_parameters), IS_MODEL)        \

/// Wrappers to convert INTERPRET_AS_X macros to INTERPRET_AS_PARENT macros.
/// @{
#define INTERPRET_AS_PARENT__DEPENDENCY(DEP, TYPE)                             \
  INTERPRET_AS_X__DEPENDENCY(PARENT, DEP, TYPE)                                
#define CORE_INTERPRET_AS_PARENT__FUNCTION(FUNC)                               \
  INTERPRET_AS_X__FUNCTION_FULL(PARENT,FUNC,0)                                        
/// @}

/// Macro to get to model namespace easily
#define MODEL_NAMESPACE Gambit::Models::MODEL 

/// Macro to easily get the Pipes for an INTERPRET_AS_X function, for retrieving 
/// dependencies
#define USE_MODEL_PIPE(MODEL_X)                                                 \
  using namespace MODEL_NAMESPACE::Pipes::CAT(MODEL_X,_parameters);             \

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
     "ModelParameters", STRINGIFY(ORIGIN), ModelDB());                         \
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

