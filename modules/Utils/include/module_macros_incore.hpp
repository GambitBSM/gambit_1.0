//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Generic observable and likelihood function 
///  macro definitions, for inclusion from the
///  Core.
///
///
///  Note here that \link FUNCTION() FUNCTION 
/// \endlink is the actual module function name,
///  whereas both \link CAPABILITY() CAPABILITY 
/// \endlink and all \em DEPs refer to the 
///  abstract physical quantities that functions 
///  may provide or require.  Thus, the provides()
///  methods expect a quantity input (i.e. 
///  corresponding to a \link CAPABILITY() 
///  CAPABILITY\endlink), the requires() methods  
///  expect a quantity input for the dependency but a 
///  function name input (i.e. corresponding to a 
///  \link FUNCTION() FUNCTION\endlink) for 
///  the actual dependent function, and all other 
///  things operate on the basis of the function 
///  name, not the quantity that is calculated.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2012 Nov  
///  \date 2013,14 Foreverrrrr
///
///  \author Abram Krislock
///          (abram.krislock@fysik.su.se)
///  \date 2013 Jan, Feb
///
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 Jan, Feb, 2014 Jan
///
///  \author Anders Kvellestad
///          (anders.kvellestad@fys.uio.no)
///  \date 2013 Nov
///  *********************************************

#ifndef __module_macros_incore_hpp__
#define __module_macros_incore_hpp__

#include <map>
#include <boost/preprocessor/logical/bitand.hpp>
#include <boost/preprocessor/logical/compl.hpp>

#include "graphs.hpp"
#include "functors.hpp"
#include "create_core.hpp"
#include "types_rollcall.hpp"
#include "module_macros_common.hpp"
#include "safety_bucket.hpp"


/// \name Tag-registration macros
/// @{
/// Add a regular tag to the current namespace
#define ADD_TAG_IN_CURRENT_NAMESPACE(TAG) namespace Tags { struct TAG; }
/// Add a backend tag to the current namespace
#define ADD_BETAG_IN_CURRENT_NAMESPACE(TAG) namespace BETags { struct TAG; }
/// Add a backend tag to the current namespace
#define ADD_MODEL_TAG_IN_CURRENT_NAMESPACE(TAG) namespace ModelTags { struct TAG; }
/// @}


/// \name Simple macro constants
/// @{
#define IS_MODEL 1
#define NOT_MODEL 0
#define NEW_CAPABILITY 1
#define OLD_CAPABILITY 0
/// @}

/// \name String definitions for IS_EQUAL macro.
/// @{
#define PointInit_PointInit       1)(1
/// @}


/// \name Variadic redirectors for \link QUICK_FUNCTION() QUICK_FUNCTION\endlink function.
/// @{
#define START_FUNCTION_AND_ALLOW_MODELS_MORE(MODULE, CAPABILITY, FUNCTION, TYPE, ...)        \
 CORE_DECLARE_FUNCTION(MODULE, CAPABILITY, FUNCTION, TYPE, 0)                                \
 ALLOW_MODELS_ABC(MODULE, CAPABILITY, FUNCTION, __VA_ARGS__)
#define START_FUNCTION_AND_ALLOW_MODELS_1(MODULE, CAPABILITY, FUNCTION, TYPE)                \
 CORE_DECLARE_FUNCTION(MODULE, CAPABILITY, FUNCTION, TYPE, 0)
#define START_FUNCTION_AND_ALLOW_MODELS(MODULE, CAPABILITY, FUNCTION, ...)                   \
 VARARG_SWITCH_ON_GT_ONE_ABC(START_FUNCTION_AND_ALLOW_MODELS, MODULE, CAPABILITY, FUNCTION,  \
 __VA_ARGS__)
/// @}

/// Quick, one-line declaration of simple module functions.
/// Allows declaration of capability, function name and type, as well as up to ten allowed 
/// models, all in one hit.  Typically used to supplement standalone modules so that all 
/// dependencies can be dealt with, but can be used in rollcall headers as well.  NEW_CAPABILITY
/// flag can be either NEW_CAPABILITY or OLD_CAPABILITY.
#define QUICK_FUNCTION(MODULE, CAPABILITY, NEW_CAPABILITY_FLAG, FUNCTION, ...)               \
 BOOST_PP_IIF(NEW_CAPABILITY_FLAG,CORE_START_CAPABILITY(MODULE,CAPABILITY),BOOST_PP_EMPTY()) \
 START_FUNCTION_AND_ALLOW_MODELS(MODULE, CAPABILITY, FUNCTION, __VA_ARGS__)                                

/// \name Rollcall macros (redirection within the Core).
/// These are called from within rollcall headers in each module to 
/// register module functions, their capabilities, return types, dependencies,
/// and backend requirements.
/// @{

/// Registers the current \link MODULE() MODULE\endlink.
#define START_MODULE                                      CORE_START_MODULE

/// Registers the current \link CAPABILITY() CAPABILITY\endlink of the current 
/// \link MODULE() MODULE\endlink.
#define START_CAPABILITY                                  CORE_START_CAPABILITY(MODULE, CAPABILITY)

/// Registers the current \link FUNCTION() FUNCTION\endlink of the current 
/// \link MODULE() MODULE\endlink as a provider
/// of the current \link CAPABILITY() CAPABILITY\endlink, returning a result of 
/// type \em TYPE.
#define DECLARE_FUNCTION(TYPE, FLAG)                      CORE_DECLARE_FUNCTION(MODULE, CAPABILITY, FUNCTION, TYPE, FLAG)

/// Indicates that the current \link FUNCTION() FUNCTION\endlink of the current 
/// \link MODULE() MODULE\endlink must be managed by another function (in the same
/// module or another) that calls it from within a loop.  That other function must
/// provide capability \em LOOPMAN. 
#define NEEDS_MANAGER_WITH_CAPABILITY(LOOPMAN)            CORE_NEEDS_MANAGER_WITH_CAPABILITY(LOOPMAN)                                  

/// Indicate that the current \link FUNCTION() FUNCTION\endlink depends on the 
/// presence of another module function that can supply capability \em DEP, with
/// return type \em TYPE.
#define DEPENDENCY(DEP, TYPE)                             CORE_DEPENDENCY(DEP, TYPE, MODULE, FUNCTION, NOT_MODEL)

/// Indicate that the current \link FUNCTION() FUNCTION\endlink may only be used with
/// specific model \em MODEL.  If this is absent, all models are allowed but no 
/// model parameters will be accessible from within the module funtion.
#define ALLOWED_MODEL(MODULE,CAPABILITY,FUNCTION,MODEL)   CORE_ALLOWED_MODEL(MODULE,CAPABILITY,FUNCTION,MODEL)

/// Indicate that the current \link FUNCTION() FUNCTION\endlink requires a
/// a backend variable to be available with capability \link BACKEND_REQ() 
/// BACKEND_REQ\endlink and type \em TYPE.
#define DECLARE_BACKEND_REQ(TYPE, IS_VARIABLE)            CORE_DECLARE_BACKEND_REQ(TYPE, IS_VARIABLE)

/// Register that the current \link BACKEND_REQ() BACKEND_REQ\endlink may
/// be provided by backend \em BACKEND.  Permitted versions are passed in
/// \em VERSTRING.
#define BE_OPTION(BACKEND,VERSTRING)                      CORE_BACKEND_OPTION(BACKEND,VERSTRING)

/// Indicate that the current \link FUNCTION() FUNCTION\endlink may depend on the 
/// presence of another module function that can supply capability 
/// \link CONDITIONAL_DEPENDENCY() CONDITIONAL_DEPENDENCY\endlink, with return type
/// \em TYPE.
#define START_CONDITIONAL_DEPENDENCY(TYPE)                CORE_START_CONDITIONAL_DEPENDENCY(TYPE)

/// Indicate that the current \link CONDITIONAL_DEPENDENCY() CONDITIONAL_DEPENDENCY\endlink
/// should be activated if the backend requirement \em BACKEND_REQ of the current 
/// \link FUNCTION() FUNCTION\endlink is filled by a backend function from \em BACKEND.
/// The versions of \em BACKEND that this applies to are passed in \em VERSTRING.
#define ACTIVATE_DEP_BE(BACKEND_REQ, BACKEND, VERSTRING)  CORE_ACTIVATE_DEP_BE(BACKEND_REQ, BACKEND, VERSTRING)

/// Expander for ACTIVATE_FOR_MODELS
/// Depends on whether the macro has been called inside a \em BACKEND_REQ block or a \em CONDITIONAL_DEPENDENCY block.
/// Indicates that the current \link CONDITIONAL_DEPENDENCY() CONDITIONAL_DEPENDENCY\endlink or
/// \link BACKEND_REQ() BACKEND_REQ\endlink should be activated if the model being scanned matches one of the
/// models passed as an argument.
#define ACTIVATE_FOR_MODELS(...)                         IF_ELSE_TOKEN_DEFINED(BACKEND_REQ, ACTIVATE_BE_MODEL, ACTIVATE_DEP_MODEL)(#__VA_ARGS__)
/// @}

/// \name Initialisation dependency switches.
/// Macros for defining the action to be taken if a dependency on the module's 
/// point-level initialisation function is required.
/// @{
#define INITDEPYES(MODULE,FUNCTION)                      CORE_DEPENDENCY(PointInit, void, MODULE, FUNCTION, NOT_MODEL)
#define INITDEPNO(MODULE,FUNCTION) 
/// @}


//  *******************************************************************************
/// \name Actual in-core rollcall macros
/// These macros do the actual heavy lifting within the rollcall system.
/// @{

/// Redirection of \link START_MODULE() START_MODULE\endlink when invoked from 
/// within the core.
#define CORE_START_MODULE                                                      \
                                                                               \
  IF_TOKEN_UNDEFINED(MODULE,FAIL("You must define MODULE before calling "      \
   "START_MODULE."))                                                           \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
    namespace MODULE                                                           \
    {                                                                          \
      CORE_START_MODULE_COMMON(MODULE)                                         \
    }                                                                          \
  }                                                                            \

/// Central module definition macro, used by modules and models.
#define CORE_START_MODULE_COMMON(MODULE)                                       \
                                                                               \
      namespace Accessors                                                      \
      {                                                                        \
                                                                               \
        /* Module name */                                                      \
        str name() { return STRINGIFY(MODULE); }                               \
                                                                               \
        /* Maps from tag strings to tag-specialisted functions */              \
        std::map<str, bool(*)()> map_bools;                                    \
        std::map<str, bool(*)(str)> condit_bools;                              \
        std::map<str, std::map<str, bool(*)()> >model_bools;                   \
                                                                               \
        /* All module observables/likelihoods, their dependencies, required    \
        quantities from backends, and their types, as strings */               \
        static std::map<str,str> iCanDo, iMayNeed, iMayNeedFromBackends;       \
                                                                               \
        /* Module provides observable/likelihood TAG? */                       \
        template <typename TAG>                                                \
        bool provides() { return false; }                                      \
                                                                               \
        /* Overloaded, non-templated version */                                \
        bool provides(str obs)                                                 \
        {                                                                      \
          if (map_bools.find(obs) == map_bools.end()) { return false; }        \
          return (*map_bools[obs])();                                          \
        }                                                                      \
                                                                               \
        /* Module requires observable/likelihood DEP_TAG to compute TAG */     \
        template <typename DEP_TAG, typename TAG>                              \
        bool requires() { return false; }                                      \
                                                                               \
        /* Overloaded, non-templated version */                                \
        bool requires(str dep, str obs)                                        \
        {                                                                      \
          if (map_bools.find(dep+obs) == map_bools.end()) { return false; }    \
          return (*map_bools[dep+obs])();                                      \
        }                                                                      \
                                                                               \
        /* Additional overloaded, non-templated versions */                    \
        bool requires(str dep, str obs, str req, str be, str ver)              \
        {                                                                      \
          if (requires(dep, obs)) {return true; }                              \
          if (condit_bools.find(dep+obs+req+be) == condit_bools.end())         \
          {                                                                    \
            return false;                                                      \
          }                                                                    \
          if ((*condit_bools[dep+obs+req+be])("any"))                          \
          {                                                                    \
            return true;                                                       \
          }                                                                    \
          else                                                                 \
          {                                                                    \
            return (*condit_bools[dep+obs+req+be])(ver);                       \
          }                                                                    \
        }                                                                      \
        bool requires(str dep, str obs, str req, str be)                       \
        {                                                                      \
          return requires(dep, obs, req, be, "any");                           \
        }                                                                      \
                                                                               \
        /* Module requires quantity BE_TAG from a backend to compute TAG */    \
        template <typename BE_TAG, typename TAG>                               \
        bool needs_from_backend() { return false; }                            \
                                                                               \
        /* Overloaded, non-templated version */                                \
        bool needs_from_backend(str quant, str obs)                            \
        {                                                                      \
          if (map_bools.find("BE_"+quant+obs) == map_bools.end()) return false;\
          return (*map_bools["BE_"+quant+obs])();                              \
        }                                                                      \
                                                                               \
        /* Module requires quantity BE_TAG from a backend to compute TAG if    \
        scanning a given model. */                                             \
        template <typename BE_TAG, typename TAG>                               \
        bool needs_from_backend_conditional_on_model(str) { return false; }    \
                                                                               \
        /* Additional overloaded, non-templated version of needs_from_backend*/\
        bool needs_from_backend(str quant, str obs, str model)                 \
        {                                                                      \
          if (condit_bools.find("BE_"+quant+obs) == condit_bools.end())        \
           return false;                                                       \
          return (*condit_bools["BE_"+quant+obs])(model);                      \
        }                                                                      \
                                                                               \
        /* Module may require observable/likelihood DEP_TAG to compute TAG,    \
        depending on the backend and version meeting requirement REQ_TAG.*/    \
        template <typename DEP_TAG, typename TAG, typename REQ_TAG,            \
         typename BE>                                                          \
        bool requires_conditional_on_backend(str) {return false; }             \
                                                                               \
        /* Overloaded version of templated function */                         \
        template <typename DEP_TAG, typename TAG, typename REQ_TAG,            \
         typename BE>                                                          \
        bool requires_conditional_on_backend()                                 \
        {                                                                      \
          return requires_conditional_on_backend<DEP_TAG,TAG,                  \
           REQ_TAG,BE>("any");                                                 \
        }                                                                      \
                                                                               \
        /* Module may require observable/likelihood DEP_TAG to compute TAG,    \
        depending on the model being scanned.*/                                \
        template <typename DEP_TAG, typename TAG>                              \
        bool requires_conditional_on_model(str) {return false; }               \
                                                                               \
        /* Module allows use of model MODEL_TAG when computing TAG */          \
        template <typename MODEL_TAG, typename TAG>                            \
        bool explicitly_allowed_model()                                        \
        {                                                                      \
          return false;                                                        \
        }                                                                      \
                                                                               \
        /* Overloaded, non-templated version */                                \
        bool allowed_model(str model, str obs)                                 \
        {                                                                      \
          if (model_bools.find(obs) == model_bools.end()) return true;         \
          if (model_bools[obs].find(model) == model_bools[obs].end())          \
           return false;                                                       \
          return (*model_bools[obs][model])();                                 \
        }                                                                      \
                                                                               \
      }                                                                        \
                                                                               \
      /* Resolve dependency DEP_TAG in function TAG */                         \
      template <typename DEP_TAG, typename TAG>                                \
      void resolve_dependency(functor*, module_functor_common*)                \
      {                                                                        \
        cout<<STRINGIFY(MODULE)<<" does not"<<endl;                            \
        cout<<"have this dependency for this function.";                       \
      }                                                                        \
                                                                               \
      /* Resolve backend requirement BE_REQ in function TAG */                 \
      template <typename BE_REQ, typename TAG>                                 \
      void resolve_backendreq(functor* be_functor)                             \
      {                                                                        \
        cout<<STRINGIFY(MODULE)<<" does not"<<endl;                            \
        cout<<"have this backend requirement for this function.";              \
      }                                                                        \
                                                                               \
      /* Runtime registration function for observable/likelihood function TAG*/\
      template <typename TAG>                                                  \
      void rt_register_function ()                                             \
      {                                                                        \
        cout<<"This tag is not supported by "<<STRINGIFY(MODULE)<<"."<<endl;   \
      }                                                                        \
                                                                               \
      /* Runtime registration function for nesting requirements of             \
      observable/likelihood function TAG*/                                     \
      template <typename TAG>                                                  \
      void rt_register_function_nesting ()                                     \
      {                                                                        \
        cout<<"This tag is not supported by "<<STRINGIFY(MODULE)<<"."<<endl;   \
      }                                                                        \
                                                                               \
      /* Runtime registration function for dependency DEP_TAG of function TAG*/\
      template <typename DEP_TAG, typename TAG>                                \
      void rt_register_dependency ()                                           \
      {                                                                        \
        cout<<STRINGIFY(MODULE)<<" does not"<<endl;                            \
        cout<<"have this dependency for this function.";                       \
      }                                                                        \
                                                                               \
      /* Runtime registration of conditional dependency DEP_TAG of function    \
      TAG, where dependency exists if TAG requires backend function BE_REQ,    \
      and BE_REQ is provided by backend BE.*/                                  \
      template <typename DEP_TAG, typename TAG, typename BE_REQ, typename BE>  \
      void rt_register_conditional_dependency ()                               \
      {                                                                        \
        rt_register_conditional_dependency<DEP_TAG, TAG>();                    \
      }                                                                        \
      template <typename DEP_TAG, typename TAG>                                \
      void rt_register_conditional_dependency ()                               \
      {                                                                        \
        cout<<STRINGIFY(MODULE)<<" does not"<<endl;                            \
        cout<<"have any matching conditional dependency.";                     \
      }                                                                        \
                                                                               \
      /* Runtime registration function for backend req BE_REQ of               \
      function TAG*/                                                           \
      template <typename BE_REQ, typename TAG>                                 \
      void rt_register_req ()                                                  \
      {                                                                        \
        cout<<STRINGIFY(MODULE)<<" does not"<<endl;                            \
        cout<<"have this backend requirement for this function.";              \
      }                                                                        \
                                                                               \
      /* Runtime registration function for conditional backend req BE_REQ of   \
      function TAG*/                                                           \
      template <typename BE_REQ, typename TAG>                                 \
      void rt_register_conditional_backend_req ()                              \
      {                                                                        \
        cout<<STRINGIFY(MODULE)<<" does not"<<endl;                            \
        cout<<"have this conditional backend requirement for this function.";  \
      }                                                                        \

/// Redirection of \link START_CAPABILITY() START_CAPABILITY\endlink when  
/// invoked from within the core.
#define CORE_START_CAPABILITY(MODULE, CAPABILITY)                              \
                                                                               \
  IF_TOKEN_UNDEFINED(MODULE,FAIL("You must define MODULE before calling "      \
   "START_CAPABILITY."))                                                       \
  IF_TOKEN_UNDEFINED(CAPABILITY,FAIL("You must define CAPABILITY before "      \
   "calling START_CAPABILITY. Please check the rollcall header for "           \
   STRINGIFY(MODULE) "."))                                                     \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    /* Add CAPABILITY to the global set of things that can be calculated*/     \
    ADD_TAG_IN_CURRENT_NAMESPACE(CAPABILITY)                                   \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
                                                                               \
      namespace Accessors                                                      \
      {                                                                        \
        /* Indicate that this module can provide quantity CAPABILITY */        \
        template <>                                                            \
        bool provides<Gambit::Tags::CAPABILITY>() { return true; }             \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \


/// Redirection of \link START_FUNCTION() START_FUNCTION\endlink when invoked 
/// from within the core.
#define CORE_DECLARE_FUNCTION(MODULE, CAPABILITY, FUNCTION, TYPE, FLAG)        \
                                                                               \
  IF_TOKEN_UNDEFINED(MODULE,FAIL("You must define MODULE before calling "      \
   "START_FUNCTION."))                                                         \
  IF_TOKEN_UNDEFINED(CAPABILITY,FAIL("You must define CAPABILITY before "      \
   "calling START_FUNCTION. Please check the rollcall header for "             \
   STRINGIFY(MODULE) "."))                                                     \
  IF_TOKEN_UNDEFINED(FUNCTION,FAIL("You must define FUNCTION before calling "  \
   "START_FUNCTION. Please check the rollcall header for "                     \
   STRINGIFY(MODULE) "."))                                                     \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    /* Fail if a void-type function is declared, unless it can manage loops or \
       is an initialisation function. */                                       \
    BOOST_PP_IIF(BOOST_PP_BITAND(IS_TYPE(void,TYPE), BOOST_PP_EQUAL(FLAG, 0)), \
      FAIL("Module functions cannot have void results, unless they manage "    \
       "loops or are initialisation functions.  Loop managers are declared "   \
       "by adding CAN_MANAGE_LOOPS as the second argument of START_FUNCTION"   \
       ", and initialisation functions are declared by #defining CAPABILITY "  \
       "PointInit.  Please check the rollcall header for " STRINGIFY(MODULE)   \
       ".")                                                                    \
    ,)                                                                         \
                                                                               \
    BOOST_PP_IIF(BOOST_PP_EQUAL(FLAG, 2),                                      \
      IF_NOT_EQUAL(CAPABILITY,PointInit,                                       \
        /* Fail if an initialisation function's CAPABILITY is not PointInit. */\
        FAIL("Only initialisation functions can be declared using the flag "   \
         "INIT_FUNCTION. This requires CAPABILITY to be #defined as PointInit."\
         " Please check the rollcall header for " STRINGIFY(MODULE) ".")       \
      )                                                                        \
      BOOST_PP_IIF(IS_TYPE(void,TYPE), ,                                       \
        /* Fail if an initialisation function has a non-void return type */    \
        FAIL("Initialisation functions must have void results. This is "       \
         "indicated by calling START_FUNCTION with first argument void, "      \
         "or giving no arguments.  Please check the rollcall header for "      \
         STRINGIFY(MODULE) ".")                                                \
      )                                                                        \
    ,                                                                          \
      IF_EQUAL(CAPABILITY,PointInit,                                           \
        /* Fail if a  non-initialisation function has CAPABILITY PointInit. */ \
        FAIL("Initialisation functions cannot manage loops. Please check the " \
         "rollcall header for " STRINGIFY(MODULE) ".")                         \
      )                                                                        \
    )                                                                          \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
      /* Add FUNCTION to the module's set of recognised functions. */          \
      ADD_TAG_IN_CURRENT_NAMESPACE(FUNCTION)                                   \
                                                                               \
      /* Register (prototype) the function */                                  \
      BOOST_PP_IIF(IS_TYPE(void,TYPE),                                         \
        void FUNCTION();                                                       \
      ,                                                                        \
        void FUNCTION (TYPE &);                                                \
      )                                                                        \
                                                                               \
      /* Wrap it in a functor */                                               \
      MAKE_FUNCTOR(FUNCTION,TYPE,CAPABILITY,MODULE,BOOST_PP_EQUAL(FLAG, 1))    \
    }                                                                          \
                                                                               \
  }                                                                            \
                                                                               \
  /* Every module function (except the point-level init functions themselves)  \
     depends on a module-specific point-level initialization function. */      \
  BOOST_PP_IIF(BOOST_PP_BITAND(BOOST_PP_NOT_EQUAL(FLAG, 2),                    \
   BOOST_PP_NOT(IS_EQUAL(CAPABILITY,PointInit))), INITDEPYES, INITDEPNO)       \
   (MODULE,FUNCTION)                                                           \
                                                                               \
  /* If scan-level init functions are ever needed, the point-level init        \
  functions should be made to depend on them here. */                          \


/// Main parts of the functor creation
#define MAKE_FUNCTOR(FUNCTION,TYPE,CAPABILITY,ORIGIN,CAN_MANAGE)               \
                                                                               \
  /* Create the function wrapper object (functor) */                           \
  namespace Functown                                                           \
  {                                                                            \
    BOOST_PP_IIF(IS_TYPE(ModelParameters,TYPE),                                \
      model_functor                                                            \
    ,                                                                          \
      module_functor<TYPE>                                                     \
    )                                                                          \
    FUNCTION (&ORIGIN::FUNCTION, STRINGIFY(FUNCTION), STRINGIFY(CAPABILITY),   \
     STRINGIFY(TYPE), STRINGIFY(ORIGIN));                                      \
  }                                                                            \
                                                                               \
  /* Set up the commands to be called at runtime to register the function*/    \
  template <>                                                                  \
  void rt_register_function<Tags::FUNCTION> ()                                 \
  {                                                                            \
    Core.registerModuleFunctor(Functown::FUNCTION);                            \
    BOOST_PP_IIF(CAN_MANAGE,Functown::FUNCTION.setCanBeLoopManager(true);,)    \
    Accessors::map_bools[STRINGIFY(CAPABILITY)] =                              \
     &Accessors::provides<Gambit::Tags::CAPABILITY>;                           \
    Accessors::iCanDo[STRINGIFY(FUNCTION)] = STRINGIFY(TYPE);                  \
  }                                                                            \
                                                                               \
  /* Create the function initialisation object */                              \
  namespace Ini                                                                \
  {                                                                            \
    ini_code FUNCTION (&rt_register_function<Tags::FUNCTION>);                 \
  }                                                                            \
                                                                               \
  /* Create a map to hold pointers to all the model parameters accessible to   \
  this functor. */                                                             \
  namespace Pipes                                                              \
  {                                                                            \
    namespace FUNCTION                                                         \
    {                                                                          \
      std::map<str, safe_ptr<const double> > Param;                            \
    }                                                                          \
  }                                                                            \


/// Redirection of NEEDS_MANAGER_WITH_CAPABILITY(LOOPMAN) when invoked from 
/// within the core.
#define CORE_NEEDS_MANAGER_WITH_CAPABILITY(LOOPMAN)                            \
                                                                               \
  IF_TOKEN_UNDEFINED(MODULE,FAIL("You must define MODULE before calling "      \
   "NEEDS_MANAGER_WITH_CAPABILITY."))                                          \
  IF_TOKEN_UNDEFINED(CAPABILITY,FAIL("You must define CAPABILITY before "      \
   "calling NEEDS_MANAGER_WITH_CAPABILITY. Please check the rollcall header "  \
   "for " STRINGIFY(MODULE) "."))                                              \
  IF_TOKEN_UNDEFINED(FUNCTION,FAIL("You must define FUNCTION before calling "  \
   "NEEDS_MANAGER_WITH_CAPABILITY. Please check the rollcall header for "      \
   STRINGIFY(MODULE) "."))                                                     \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
                                                                               \
      IF_EQUAL(CAPABILITY, PointInit,                                          \
        FAIL("Initialization functions cannot require loop managers. "         \
         "Please check the rollcall header for " STRINGIFY(MODULE) ".")        \
      )                                                                        \
                                                                               \
      namespace Pipes                                                          \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          namespace Loop                                                       \
          {                                                                    \
            /* Create a safe pointer to the iteration number of the loop this  \
            functor is running within. */                                      \
            omp_safe_ptr<int> iteration;                                       \
          }                                                                    \
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Set up the runtime commands that register the fact that this FUNCTION \
      requires it be run inside a loop manager with capability LOOPMAN. */     \
      template <>                                                              \
      void rt_register_function_nesting<Tags::FUNCTION> ()                     \
      {                                                                        \
        Core.registerNestedModuleFunctor(Functown::FUNCTION);                  \
        Functown::FUNCTION.setLoopManagerCapability(STRINGIFY(LOOPMAN));       \
        Pipes::FUNCTION::Loop::iteration = Functown::FUNCTION.iterationPtr();  \
      }                                                                        \
                                                                               \
      /* Create the corresponding initialisation object */                     \
      namespace Ini                                                            \
      {                                                                        \
        ini_code CAT(FUNCTION,_nesting)                                        \
         (&rt_register_function_nesting<Tags::FUNCTION>);                      \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \


/// First common component of CORE_DEPENDENCY(DEP, TYPE, MODULE, FUNCTION) and 
/// CORE_START_CONDITIONAL_DEPENDENCY(TYPE).
#define DEPENDENCY_COMMON_1(DEP, TYPE, MODULE, FUNCTION)                       \
                                                                               \
      /* Given that TYPE is not void, create a safety_bucket for the           \
      dependency result. To be initialized automatically at runtime            \
      when the dependency is resolved. */                                      \
      namespace Pipes                                                          \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          BOOST_PP_IIF(IS_TYPE(void,TYPE), ,                                   \
           namespace Dep {dep_bucket<TYPE> DEP;})                              \
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Resolve dependency DEP in FUNCTION */                                 \
      template <>                                                              \
      void resolve_dependency<Gambit::Tags::DEP, Tags::FUNCTION>(functor*      \
       dep_functor, module_functor_common* BOOST_PP_IIF(IS_TYPE(void,TYPE), ,  \
       this_functor))                                                          \
      {                                                                        \
        /* First try casting the dep pointer passed in to a module_functor */  \
        module_functor<TYPE> * ptr =                                           \
         dynamic_cast<module_functor<TYPE>*>(dep_functor);                     \
                                                                               \
        /* Now test if that cast worked */                                     \
        if (ptr == 0)  /* It didn't; throw an error. */                        \
        {                                                                      \
          cout<<"Error: Null returned from dynamic cast of "<< endl;           \
          cout<<"dependency functor in MODULE::resolve_dependency, for"<< endl;\
          cout<<"dependency DEP of function FUNCTION.  Attempt was to "<< endl;\
          cout<<"resolve to "<<dep_functor->name()<<" in   "<< endl;           \
          cout<<dep_functor->origin()<<"."<<endl;                              \
          exit(1);                                                             \
          /** FIXME \todo throw real error here */                             \
        }                                                                      \
                                                                               \
        /* It did! Now initialize the safety_bucket using the functors.*/      \
        BOOST_PP_IIF(IS_TYPE(void,TYPE), ,                                     \
          Pipes::FUNCTION::Dep::DEP.initialize(ptr,this_functor);              \
        )                                                                      \
                                                                               \
      }                                                                        \


/// Second common component of CORE_DEPENDENCY(DEP, TYPE, MODULE, FUNCTION) and 
/// CORE_START_CONDITIONAL_DEPENDENCY(TYPE).
#define DEPENDENCY_COMMON_2(DEP,FUNCTION)                                      \
                                                                               \
  /* Create the dependency initialisation object */                            \
  namespace Ini                                                                \
  {                                                                            \
    ini_code CAT_3(DEP,_for_,FUNCTION)                                         \
     (&rt_register_dependency<Gambit::Tags::DEP, Tags::FUNCTION>);             \
  }                                                                            \
                                                                            

/// Redirection of DEPENDENCY(DEP, TYPE) when invoked from within the core.
#define CORE_DEPENDENCY(DEP, TYPE, MODULE, FUNCTION, IS_MODEL_DEP)             \
                                                                               \
  IF_EQUAL(CAPABILITY, PointInit,                                              \
    FAIL("Initialization functions cannot have dependencies. "                 \
    "Please check the rollcall header for " STRINGIFY(MODULE) ".")             \
  )                                                                            \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    /* Add DEP to global set of tags of recognised module capabilities/deps */ \
    ADD_TAG_IN_CURRENT_NAMESPACE(DEP)                                          \
                                                                               \
    /* Put everything inside the Models namespace if this is a model dep */    \
    BOOST_PP_IIF(IS_MODEL_DEP, namespace Models {, )                           \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
                                                                               \
      DEPENDENCY_COMMON_1(DEP, TYPE, MODULE, FUNCTION)                         \
                                                                               \
      namespace Accessors                                                      \
      {                                                                        \
        /* Indicate that FUNCTION requires DEP to be computed previously*/     \
        template <>                                                            \
        bool requires<Gambit::Tags::DEP, Tags::FUNCTION>() { return true; }    \
      }                                                                        \
                                                                               \
      /* Set up the commands to be called at runtime to register dependency*/  \
      template <>                                                              \
      void rt_register_dependency<Gambit::Tags::DEP, Tags::FUNCTION> ()        \
      {                                                                        \
        Accessors::map_bools[STRINGIFY(CAT(DEP,FUNCTION))] =                   \
         &Accessors::requires<Gambit::Tags::DEP, Tags::FUNCTION>;              \
        Accessors::iMayNeed[STRINGIFY(DEP)] = STRINGIFY(TYPE);                 \
        Functown::FUNCTION.setDependency(STRINGIFY(DEP),STRINGIFY(TYPE),       \
         &resolve_dependency<Gambit::Tags::DEP, Tags::FUNCTION>);              \
      }                                                                        \
                                                                               \
      DEPENDENCY_COMMON_2(DEP, FUNCTION)                                       \
                                                                               \
    }                                                                          \
                                                                               \
    /* Close the Models namespace if this is a model dep */                    \
    BOOST_PP_IIF(IS_MODEL_DEP, }, )                                            \
                                                                               \
  }                                                                            \


/// Redirection of ALLOW_MODEL when invoked from within the core.
#define CORE_ALLOWED_MODEL(MODULE,CAPABILITY,FUNCTION,MODEL)                   \
                                                                               \
  IF_TOKEN_UNDEFINED(MODULE,FAIL("You must define MODULE before calling "      \
   "ALLOWED_MODEL(S)."))                                                       \
  IF_TOKEN_UNDEFINED(CAPABILITY,FAIL("You must define CAPABILITY before "      \
   "calling ALLOWED_MODEL(S). Please check the rollcall header "               \
   "for " STRINGIFY(MODULE) "."))                                              \
  IF_TOKEN_UNDEFINED(FUNCTION,FAIL("You must define FUNCTION before calling "  \
   "ALLOWED_MODEL(S). Please check the rollcall header for "                   \
   STRINGIFY(MODULE) "."))                                                     \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    /* Add MODEL to global set of tags of recognised models */                 \
    ADD_MODEL_TAG_IN_CURRENT_NAMESPACE(MODEL)                                  \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
                                                                               \
      namespace Accessors                                                      \
      {                                                                        \
        /* Indicate that FUNCTION can be used with MODEL */                    \
        template <>                                                            \
        bool explicitly_allowed_model<ModelTags::MODEL, Tags::FUNCTION>()      \
        {                                                                      \
          return true;                                                         \
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Create a safety bucket to the model parameter values. To be filled    \
      automatically at runtime when the dependency is resolved. */             \
      namespace Pipes                                                          \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          namespace Dep { dep_bucket<ModelParameters> CAT(MODEL,_parameters); }\
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Resolve dependency on parameters of MODEL in FUNCTION */              \
      template <>                                                              \
      void resolve_dependency<ModelTags::MODEL, Tags::FUNCTION>                \
       (functor* params_functor, module_functor_common* this_functor)          \
      {                                                                        \
        /* First try casting the pointer passed in to a module_functor */      \
        module_functor<ModelParameters>* ptr =                                 \
         dynamic_cast<module_functor<ModelParameters>*>(params_functor);       \
                                                                               \
        /* Now test if that cast worked */                                     \
        if (ptr == 0)  /* It didn't; throw an error. */                        \
        {                                                                      \
          cout<<"Error: Null returned from dynamic cast in "<< endl;           \
          cout<<"MODULE::resolve_dependency, for model"<< endl;                \
          cout<<"MODEL with function FUNCTION.  Attempt was to "<< endl;       \
          cout<<"resolve to "<<params_functor->name()<<" in   "<< endl;        \
          cout<<params_functor->origin()<<"."<<endl;                           \
          exit(1);                                                             \
          /** FIXME \todo throw real error here */                             \
        }                                                                      \
                                                                               \
        /* It did! Now initialize the safety_bucket using the functors.*/      \
        Pipes::FUNCTION::Dep::CAT(MODEL,_parameters).initialize(ptr,           \
         this_functor);                                                        \
        /* Get a pointer to the parameter map provided by this MODEL */        \
        safe_ptr<ModelParameters> model_safe_ptr =                             \
         Pipes::FUNCTION::Dep::CAT(MODEL,_parameters).safe_pointer();          \
        const std::map<str,double>* parameterMap =                             \
         model_safe_ptr->getValuesPtr();                                       \
        /* Use that to add the parameters provided by this MODEL to the map    \
        of safe pointers to model parameters. */                               \
        for (std::map<str,double>::const_iterator it = parameterMap->begin();  \
         it != parameterMap->end(); ++it)                                      \
        {                                                                      \
          if (Pipes::FUNCTION::Param.find(it->first) ==                        \
              Pipes::FUNCTION::Param.end())                                    \
          { /* Add a safe pointer to the value of this parameter to the map*/  \
            Pipes::FUNCTION::Param[it->first] =                                \
             safe_ptr<const double>(&(parameterMap->at(it->first)));           \
          }                                                                    \
          else                                                                 \
          { /* This parameter already exists in the map! Fail. */              \
            cout<<"Error in MODULE::resolve_dependency, for model"<< endl;     \
            cout<<"MODEL with function FUNCTION.  Attempt was to "<< endl;     \
            cout<<"resolve to "<<params_functor->name()<<" in   "<< endl;      \
            cout<<params_functor->origin()<<"."<<endl;                         \
            cout<<"You have tried to scan two models simultaneously"<< endl;   \
            cout<<"that have one or more parameters in common. "<< endl;       \
            cout<<"Problem parameter: "<<it->first<<endl;                      \
          }                                                                    \
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Set up the commands to be called at runtime to register the           \
      compatibility of the model with the functor */                           \
      template <>                                                              \
      void rt_register_dependency<ModelTags::MODEL, Tags::FUNCTION> ()         \
      {                                                                        \
        Accessors::model_bools[STRINGIFY(FUNCTION)][STRINGIFY(MODEL)] =        \
         &Accessors::explicitly_allowed_model<ModelTags::MODEL,Tags::FUNCTION>;\
        Accessors::iMayNeed[STRINGIFY(CAT(MODEL,_parameters))] =               \
         "ModelParameters";                                                    \
        Functown::FUNCTION.setAllowedModel(STRINGIFY(MODEL));                  \
        Functown::FUNCTION.setModelConditionalDependency(STRINGIFY(MODEL),     \
         STRINGIFY(CAT(MODEL,_parameters)),"ModelParameters",                  \
         &resolve_dependency<ModelTags::MODEL, Tags::FUNCTION>);               \
      }                                                                        \
                                                                               \
      /* Create the dependency initialisation object */                        \
      namespace Ini                                                            \
      {                                                                        \
        ini_code CAT_3(MODEL,_params_for_,FUNCTION)                            \
         (&rt_register_dependency<ModelTags::MODEL, Tags::FUNCTION>);          \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \



/// Redirection of START_BACKEND_REQ(TYPE, [VAR/FUNC]) when invoked from within 
/// the core. The optional flag VAR corresponds to IS_VARIABLE=1, while FUNC 
/// (or no flag) corresponds to IS_VARIABLE=0.
#define CORE_DECLARE_BACKEND_REQ(TYPE, IS_VARIABLE)                            \
                                                                               \
  IF_TOKEN_UNDEFINED(MODULE,FAIL("You must define MODULE before calling "      \
   "START_BACKEND_REQ."))                                                      \
  IF_TOKEN_UNDEFINED(CAPABILITY,FAIL("You must define CAPABILITY before "      \
   "calling START_BACKEND_REQ. Please check the rollcall header "              \
   "for " STRINGIFY(MODULE) "."))                                              \
  IF_TOKEN_UNDEFINED(FUNCTION,FAIL("You must define FUNCTION before calling "  \
   "START_BACKEND_REQ. Please check the rollcall header for "                  \
   STRINGIFY(MODULE) "."))                                                     \
  IF_TOKEN_UNDEFINED(BACKEND_REQ,FAIL("You must define BACKEND_REQ before "    \
   "calling START_BACKEND_REQ. Please check the rollcall header for "          \
   STRINGIFY(MODULE) "."))                                                     \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    /* If scan-level initialisation functions are implemented, the macro should\
    fail here if the user has tried to declare that a scan-level initialisation\
    function has a backend requirement. */                                     \
                                                                               \
    /* Add BACKEND_REQ to global set of recognised backend func tags */        \
    ADD_BETAG_IN_CURRENT_NAMESPACE(BACKEND_REQ)                                \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
      namespace Pipes                                                          \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          namespace BEreq                                                      \
          {                                                                    \
            /* Create a safety_bucket for the backend variable/function.       \
            To be initialized by the dependency resolver at runtime. */        \
            BOOST_PP_IIF(IS_VARIABLE,                                          \
              /* If IS_VARIABLE = 1: */                                        \
              BEvariable_bucket<TYPE> BACKEND_REQ;                             \
              , /* If IS_VARAIBLE = 0: */                                      \
              BEfunction_bucket<TYPE> BACKEND_REQ;                             \
            )  /* End BOOST_PP_IIF */                                          \
          }                                                                    \
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Indicate that FUNCTION has a BACKEND_REQ */                           \
      namespace Accessors                                                      \
      {                                                                        \
        template <>                                                            \
        bool needs_from_backend<BETags::BACKEND_REQ, Tags::FUNCTION>()         \
        {                                                                      \
          return true;                                                         \
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Resolve backend requirement BACKEND_REQ in FUNCTION */                \
      template <>                                                              \
      void resolve_backendreq<BETags::BACKEND_REQ, Tags::FUNCTION>             \
       (functor* be_functor)                                                   \
      {                                                                        \
                                                                               \
        /* Use the given functor pointer (be_functor) to initialize the        \
        safety_bucket Pipes::FUNCTION::BEreq::BACKEND_REQ.                     \
        If IS_VARIABLE = 1 we do a type cast of the functor first. */          \
        BOOST_PP_IIF(IS_VARIABLE,                                              \
          /* If IS_VARIABLE = 1: */                                            \
          backend_functor<TYPE*> * ptr =                                       \
            dynamic_cast<backend_functor<TYPE*>*>(be_functor);                 \
          Pipes::FUNCTION::BEreq::BACKEND_REQ.initialize(ptr);                 \
          , /* If IS_VARIABLE = 0: */                                          \
          Pipes::FUNCTION::BEreq::BACKEND_REQ.initialize(be_functor);          \
        ) /* End BOOST_PP_IIF */                                               \
      }                                                                        \
                                                                               \
      /* Set up the commands to be called at runtime to register req.          \
      (Note that TYPE is used for backend functions, while TYPE* is used       \
      for backend variables.) */                                               \
      template <>                                                              \
      void rt_register_req<BETags::BACKEND_REQ, Tags::FUNCTION>()              \
      {                                                                        \
        Accessors::map_bools[STRINGIFY(CAT_3(BE_,BACKEND_REQ,FUNCTION))] =     \
         &Accessors::needs_from_backend<BETags::BACKEND_REQ,Tags::FUNCTION>;   \
                                                                               \
        Accessors::iMayNeedFromBackends[STRINGIFY(BACKEND_REQ)] =              \
          BOOST_PP_IIF(IS_VARIABLE, STRINGIFY(TYPE*), STRINGIFY(TYPE));        \
                                                                               \
        Functown::FUNCTION.setBackendReq(STRINGIFY(BACKEND_REQ),               \
          BOOST_PP_IIF(IS_VARIABLE, STRINGIFY(TYPE*), STRINGIFY(TYPE)),        \
         &resolve_backendreq<BETags::BACKEND_REQ,Tags::FUNCTION>);             \
      }                                                                        \
                                                                               \
      /* Create the backend requirement initialisation object */               \
      namespace Ini                                                            \
      {                                                                        \
        ini_code CAT_3(BACKEND_REQ,_backend_for_,FUNCTION)                     \
         (&rt_register_req<BETags::BACKEND_REQ,Tags::FUNCTION>);               \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \


/// Redirection of BE_OPTION(BACKEND, VERSTRING) when invoked from within the 
/// core.
#define CORE_BACKEND_OPTION(BACKEND,VERSTRING)                                 \
                                                                               \
  IF_TOKEN_UNDEFINED(MODULE,FAIL("You must define MODULE before calling "      \
   "BE_OPTION."))                                                              \
  IF_TOKEN_UNDEFINED(CAPABILITY,FAIL("You must define CAPABILITY before "      \
   "calling BE_OPTION. Please check the rollcall header "                      \
   "for " STRINGIFY(MODULE) "."))                                              \
  IF_TOKEN_UNDEFINED(FUNCTION,FAIL("You must define FUNCTION before calling "  \
   "BE_OPTION. Please check the rollcall header for "                          \
   STRINGIFY(MODULE) "."))                                                     \
  IF_TOKEN_UNDEFINED(BACKEND_REQ,FAIL("You must define BACKEND_REQ before "    \
   "calling BE_OPTION. Please check the rollcall header for "                  \
   STRINGIFY(MODULE) "."))                                                     \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    /* Add BACKEND to global set of recognised backend tags */                 \
    ADD_BETAG_IN_CURRENT_NAMESPACE(BACKEND)                                    \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
                                                                               \
      /* Set up the command to be called at runtime to register the option */  \
      void CAT_6(rt_register_opt_,BACKEND,_opt_,BACKEND_REQ,_be_,FUNCTION)()   \
      {                                                                        \
        Functown::FUNCTION.setPermittedBackend(STRINGIFY(BACKEND_REQ),         \
         STRINGIFY(BACKEND), VERSTRING);                                       \
      }                                                                        \
                                                                               \
      /* Create the option registration initialisation object */               \
      namespace Ini                                                            \
      {                                                                        \
        ini_code CAT_5(BACKEND,_opt_,BACKEND_REQ,_be_,FUNCTION)                \
         (& CAT_6(rt_register_opt_,BACKEND,_opt_,BACKEND_REQ,_be_,FUNCTION));  \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \


/// Redirection of START_CONDITIONAL_DEPENDENCY(TYPE) when invoked from within 
/// the core.
#define CORE_START_CONDITIONAL_DEPENDENCY(TYPE)                                \
                                                                               \
  IF_TOKEN_UNDEFINED(MODULE,FAIL("You must define MODULE before calling "      \
   "START_CONDITIONAL_DEPENDENCY."))                                           \
  IF_TOKEN_UNDEFINED(CAPABILITY,FAIL("You must define CAPABILITY before "      \
   "calling START_CONDITIONAL_DEPENDENCY. Please check the rollcall header "   \
   "for " STRINGIFY(MODULE) "."))                                              \
  IF_TOKEN_UNDEFINED(FUNCTION,FAIL("You must define FUNCTION before calling "  \
   "START_CONDITIONAL_DEPENDENCY. Please check the rollcall header for "       \
   STRINGIFY(MODULE) "."))                                                     \
  IF_TOKEN_UNDEFINED(CONDITIONAL_DEPENDENCY,FAIL("You must define "            \
   "CONDITIONAL_DEPENDENCY before calling START_CONDITIONAL_DEPENDENCY. Please"\
   " check the rollcall header for " STRINGIFY(MODULE) "."))                   \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    /* Add DEP to global set of tags of recognised module capabilities/deps */ \
    ADD_TAG_IN_CURRENT_NAMESPACE(CONDITIONAL_DEPENDENCY)                       \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
                                                                               \
      DEPENDENCY_COMMON_1(CONDITIONAL_DEPENDENCY, TYPE, MODULE, FUNCTION)      \
                                                                               \
      /* Set up the first set of commands to be called at runtime to register  \
      the conditional dependency. */                                           \
      template <>                                                              \
      void rt_register_dependency                                              \
       <Gambit::Tags::CONDITIONAL_DEPENDENCY, Tags::FUNCTION> ()               \
      {                                                                        \
        Accessors::iMayNeed[STRINGIFY(CONDITIONAL_DEPENDENCY)]=STRINGIFY(TYPE);\
      }                                                                        \
                                                                               \
      /* Create the first conditional dependency initialisation object */      \
      DEPENDENCY_COMMON_2(CONDITIONAL_DEPENDENCY, FUNCTION)                    \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \

                                                                               
/// Redirection of ACTIVATE_DEP_BE(BACKEND_REQ, BACKEND, VERSTRING) when 
/// invoked from within the core.
#define CORE_ACTIVATE_DEP_BE(BACKEND_REQ, BACKEND, VERSTRING)                  \
                                                                               \
  IF_TOKEN_UNDEFINED(MODULE,FAIL("You must define MODULE before calling "      \
   "ACTIVATE_FOR_BACKEND."))                                                   \
  IF_TOKEN_UNDEFINED(CAPABILITY,FAIL("You must define CAPABILITY before "      \
   "calling ACTIVATE_FOR_BACKEND. Please check the rollcall header "           \
   "for " STRINGIFY(MODULE) "."))                                              \
  IF_TOKEN_UNDEFINED(FUNCTION,FAIL("You must define FUNCTION before calling "  \
   "ACTIVATE_FOR_BACKEND. Please check the rollcall header for "               \
   STRINGIFY(MODULE) "."))                                                     \
  IF_TOKEN_UNDEFINED(CONDITIONAL_DEPENDENCY,FAIL("You must define "            \
   "CONDITIONAL_DEPENDENCY before calling ACTIVATE_FOR_BACKEND. Please"        \
   " check the rollcall header for " STRINGIFY(MODULE) "."))                   \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    /* Add BACKEND to global set of recognised backend tags */                 \
    ADD_BETAG_IN_CURRENT_NAMESPACE(BACKEND)                                    \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
                                                                               \
      namespace Accessors                                                      \
      {                                                                        \
        /* Indicate that FUNCTION requires CONDITIONAL_DEPENDENCY to have      \
        been computed previously if BACKEND is in use for BACKEND_REQ.*/       \
        template <>                                                            \
        bool requires_conditional_on_backend                                   \
         <Gambit::Tags::CONDITIONAL_DEPENDENCY, Tags::FUNCTION,                \
         BETags::BACKEND_REQ, BETags::BACKEND> (str ver)                       \
        {                                                                      \
          typedef std::vector<str> vec;                                        \
          vec versions = delimiterSplit(VERSTRING, ",");                       \
          for (vec::iterator it= versions.begin() ; it != versions.end(); ++it)\
          {                                                                    \
            if (*it == ver) return true;                                       \
          }                                                                    \
          return false;                                                        \
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Set up the second set of commands to be called at runtime to register \
      the conditional dependency. */                                           \
      template <>                                                              \
      void rt_register_conditional_dependency                                  \
       <Gambit::Tags::CONDITIONAL_DEPENDENCY, Tags::FUNCTION,                  \
       BETags::BACKEND_REQ, BETags::BACKEND> ()                                \
      {                                                                        \
        Accessors::condit_bools[STRINGIFY(CAT_4(CONDITIONAL_DEPENDENCY,        \
         FUNCTION,BACKEND_REQ,BACKEND))] =                                     \
         &Accessors::requires_conditional_on_backend                           \
         <Gambit::Tags::CONDITIONAL_DEPENDENCY, Tags::FUNCTION,                \
         BETags::BACKEND_REQ, BETags::BACKEND>;                                \
        Functown::FUNCTION.setBackendConditionalDependency                     \
         (STRINGIFY(BACKEND_REQ), STRINGIFY(BACKEND), VERSTRING,               \
         STRINGIFY(CONDITIONAL_DEPENDENCY),                                    \
         Accessors::iMayNeed[STRINGIFY(CONDITIONAL_DEPENDENCY)],               \
         &resolve_dependency<Gambit::Tags::CONDITIONAL_DEPENDENCY,             \
         Tags::FUNCTION>);                                                     \
      }                                                                        \
                                                                               \
      /* Create the second conditional dependency initialisation object */     \
      namespace Ini                                                            \
      {                                                                        \
        ini_code CAT_7(CONDITIONAL_DEPENDENCY,_for_,FUNCTION,_with_,           \
         BACKEND_REQ,_provided_by_,BACKEND)                                    \
         (&rt_register_conditional_dependency                                  \
         <Gambit::Tags::CONDITIONAL_DEPENDENCY, Tags::FUNCTION,                \
         BETags::BACKEND_REQ, BETags::BACKEND>);                               \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \

/// Redirection of ACTIVATE_FOR_MODELS(MODELSTRING) when invoked from within 
/// the core, inside a BACKEND_REQ definition.
#define ACTIVATE_BE_MODEL(MODELSTRING)                                         \
                                                                               \
  IF_TOKEN_UNDEFINED(MODULE,FAIL("You must define MODULE before calling "      \
   "ACTIVATE_FOR_MODEL(S)."))                                                  \
  IF_TOKEN_UNDEFINED(CAPABILITY,FAIL("You must define CAPABILITY before "      \
   "calling ACTIVATE_FOR_MODEL(S). Please check the rollcall header "          \
   "for " STRINGIFY(MODULE) "."))                                              \
  IF_TOKEN_UNDEFINED(FUNCTION,FAIL("You must define FUNCTION before calling "  \
   "ACTIVATE_FOR_MODEL(S). Please check the rollcall header for "              \
   STRINGIFY(MODULE) "."))                                                     \
  IF_TOKEN_UNDEFINED(BACKEND_REQ,FAIL("You must define either BACKEND_REQ or " \
   "CONDITIONAL_DEPENDENCY before calling ACTIVATE_FOR_MODEL(S). Please check "\
   "the rollcall header for " STRINGIFY(MODULE) "."))                          \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
                                                                               \
      namespace Accessors                                                      \
      {                                                                        \
        /* Indicate that FUNCTION requires BACKEND_REQ if one of the models in \
        MODELSTRING is scanned.*/  \
        template <>                                                            \
        bool needs_from_backend_conditional_on_model                           \
         <BETags::BACKEND_REQ, Tags::FUNCTION>(str model)                      \
        {                                                                      \
          typedef std::vector<str> vec;                                        \
          vec models = delimiterSplit(MODELSTRING, ",");                       \
          for (vec::iterator it = models.begin() ; it != models.end(); ++it)   \
          {                                                                    \
            if (*it == model) return true;                                     \
          }                                                                    \
          return false;                                                        \
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Set up the second set of commands to be called at runtime to register \
      the conditional backend requirement. */                                  \
      template <>                                                              \
      void rt_register_conditional_backend_req                                 \
         <BETags::BACKEND_REQ, Tags::FUNCTION> ()                              \
      {                                                                        \
        Accessors::map_bools.erase(STRINGIFY(CAT_3(BE_,BACKEND_REQ,FUNCTION)));\
                                                                               \
        Accessors::condit_bools[STRINGIFY(CAT_3(BE_,BACKEND_REQ,FUNCTION))] =  \
         &Accessors::needs_from_backend_conditional_on_model                   \
         <BETags::BACKEND_REQ, Tags::FUNCTION>;                                \
                                                                               \
        Functown::FUNCTION.setModelConditionalBackendReq                       \
         (MODELSTRING, STRINGIFY(BACKEND_REQ),                                 \
         Accessors::iMayNeedFromBackends[STRINGIFY(BACKEND_REQ)]);             \
      }                                                                        \
                                                                               \
      /* Create the second conditional backend requirement init object. */     \
      namespace Ini                                                            \
      {                                                                        \
        ini_code CAT_4(BACKEND_REQ,_backend_for_,FUNCTION,_with_models)        \
         (&rt_register_conditional_backend_req                                 \
         <BETags::BACKEND_REQ, Tags::FUNCTION>);                               \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \

/// Redirection of ACTIVATE_FOR_MODELS(MODELSTRING) when invoked from within 
/// the core, inside a CONDITIONAL_DEPENDENCY definition.
#define ACTIVATE_DEP_MODEL(MODELSTRING)                                        \
                                                                               \
  IF_TOKEN_UNDEFINED(MODULE,FAIL("You must define MODULE before calling "      \
   "ACTIVATE_FOR_MODEL(S)."))                                                  \
  IF_TOKEN_UNDEFINED(CAPABILITY,FAIL("You must define CAPABILITY before "      \
   "calling ACTIVATE_FOR_MODEL(S). Please check the rollcall header "          \
   "for " STRINGIFY(MODULE) "."))                                              \
  IF_TOKEN_UNDEFINED(FUNCTION,FAIL("You must define FUNCTION before calling "  \
   "ACTIVATE_FOR_MODEL(S). Please check the rollcall header for "              \
   STRINGIFY(MODULE) "."))                                                     \
  IF_TOKEN_UNDEFINED(CONDITIONAL_DEPENDENCY,FAIL("You must define either "     \
  "BACKEND_REQ or CONDITIONAL_DEPENDENCY before calling ACTIVATE_FOR_MODEL(S)."\
  " Please check the rollcall header for " STRINGIFY(MODULE) "."))             \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
                                                                               \
      namespace Accessors                                                      \
      {                                                                        \
        /* Indicate that FUNCTION requires CONDITIONAL_DEPENDENCY to be        \
        computed previously if one of the models in MODELSTRING is scanned.*/  \
        template <>                                                            \
        bool requires_conditional_on_model                                     \
         <Gambit::Tags::CONDITIONAL_DEPENDENCY,Tags::FUNCTION> (str model)     \
        {                                                                      \
          typedef std::vector<str> vec;                                        \
          vec models = delimiterSplit(MODELSTRING, ",");                       \
          for (vec::iterator it = models.begin() ; it != models.end(); ++it)   \
          {                                                                    \
            if (*it == model) return true;                                     \
          }                                                                    \
          return false;                                                        \
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Set up the second set of commands to be called at runtime to register \
      the conditional dependency. */                                           \
      template <>                                                              \
      void rt_register_conditional_dependency                                  \
       <Gambit::Tags::CONDITIONAL_DEPENDENCY, Tags::FUNCTION> ()               \
      {                                                                        \
        Accessors::condit_bools[STRINGIFY(CAT(CONDITIONAL_DEPENDENCY,          \
         FUNCTION))] = &Accessors::requires_conditional_on_model               \
         <Gambit::Tags::CONDITIONAL_DEPENDENCY,Tags::FUNCTION>;                \
                                                                               \
        Functown::FUNCTION.setModelConditionalDependency                       \
         (MODELSTRING, STRINGIFY(CONDITIONAL_DEPENDENCY),                      \
         Accessors::iMayNeed[STRINGIFY(CONDITIONAL_DEPENDENCY)],               \
         &resolve_dependency<Gambit::Tags::CONDITIONAL_DEPENDENCY,             \
         Tags::FUNCTION>);                                                     \
      }                                                                        \
                                                                               \
      /* Create the second conditional dependency initialisation object */     \
      namespace Ini                                                            \
      {                                                                        \
        ini_code CAT_4(CONDITIONAL_DEPENDENCY,_for_,FUNCTION,_with_models)     \
         (&rt_register_conditional_dependency                                  \
         <Gambit::Tags::CONDITIONAL_DEPENDENCY, Tags::FUNCTION>);              \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \

/// @}

#endif // defined __core_module_macros_incore_hpp__ 

