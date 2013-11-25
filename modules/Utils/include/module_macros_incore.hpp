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
///  \date 2013 Jan -- Aug
///  \date 2013 Foreverrrrr
///
///  \author Abram Krislock
///          (abram.krislock@fysik.su.se)
///  \date 2013 Jan, Feb
///
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 Jan, Feb
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
#include "dictionary.hpp"
#include "functors.hpp"
#include "create_core.hpp"
#include "types_rollcall.hpp"
#include "module_macros_common.hpp"
#include "safety_bucket.hpp"

/// \name Tag-registration macros
/// @{
/// Add a regular tag to the current namespace
#define ADD_TAG_IN_CURRENT_NAMESPACE(TAG) namespace Tags { struct TAG; };
/// Add a backend tag to the current namespace
#define ADD_BETAG_IN_CURRENT_NAMESPACE(TAG) namespace BETags { struct TAG; };
/// Add a backend tag to the current namespace
#define ADD_MODEL_TAG_IN_CURRENT_NAMESPACE(TAG) namespace ModelTags { struct TAG; };
/// @}


/// \name Rollcall macros (redirection within the Core).
/// These are called from within rollcall headers in each module to 
/// register module functions, their capabilities, return types, dependencies,
/// and backend requirements.
/// @{

/// Registers the current \link MODULE() MODULE\endlink.
#define START_MODULE                                      CORE_START_MODULE

/// Registers the current \link CAPABILITY() CAPABILITY\endlink of the current 
/// \link MODULE() MODULE\endlink.
#define START_CAPABILITY                                  CORE_START_CAPABILITY

/// Registers the current \link FUNCTION() FUNCTION\endlink of the current 
/// \link MODULE() MODULE\endlink as a provider
/// of the current \link CAPABILITY() CAPABILITY\endlink, returning a result of 
/// type \em TYPE.
#define DECLARE_FUNCTION(TYPE, CAN_MANAGE)                CORE_DECLARE_FUNCTION(TYPE, CAN_MANAGE)

/// Indicates that the current \link FUNCTION() FUNCTION\endlink of the current 
/// \link MODULE() MODULE\endlink must be managed by another function (in the same
/// module or another) that calls it from within a loop.  That other function must
/// provide capability \em LOOPMAN. 
#define NEEDS_MANAGER_WITH_CAPABILITY(LOOPMAN)            CORE_NEEDS_MANAGER_WITH_CAPABILITY(LOOPMAN)                                  

/// Indicate that the current \link FUNCTION() FUNCTION\endlink depends on the 
/// presence of another module function that can supply capability \em DEP, with
/// return type \em TYPE.
#define DEPENDENCY(DEP, TYPE)                             CORE_DEPENDENCY(DEP, TYPE)

/// Indicate that the current \link FUNCTION() FUNCTION\endlink may only be used with
/// specific model \em MODEL.  If this is absent, all models are allowed but no 
/// model parameters will be accessible from within the module funtion.
#define ALLOWED_MODEL(MODEL)                              CORE_ALLOWED_MODEL(MODEL)

/// Indicate that the current \link FUNCTION() FUNCTION\endlink requires a
/// a backend variable to be available with capability \link BACKEND_REQ() 
/// BACKEND_REQ\endlink and type \em TYPE.
#define DECLARE_BACKEND_REQ_VARIABLE(TYPE)                CORE_DECLARE_BACKEND_REQ(TYPE,1)

/// Indicate that the current \link FUNCTION() FUNCTION\endlink requires a
/// a backend function to be available with capability \link BACKEND_REQ() 
/// BACKEND_REQ\endlink and return type \em TYPE.
#define DECLARE_BACKEND_REQ_FUNCTION(TYPE)                CORE_DECLARE_BACKEND_REQ(TYPE,0)

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

/// Indicate that the current \link CONDITIONAL_DEPENDENCY() CONDITIONAL_DEPENDENCY\endlink
/// should be activated if the model being scanned matches one of the models passed 
/// as an argument.
#define ACTIVATE_FOR_MODELS(...)                          CORE_ACTIVATE_DEP_MODEL(#__VA_ARGS__)

/// @}


//  *******************************************************************************
/// \name Actual in-core rollcall macros
/// These macros do the actual heavy lifting within the rollcall system.
/// @{

/// Redirection of \link START_MODULE() START_MODULE\endlink when invoked from 
/// within the core.
#define CORE_START_MODULE                                                      \
  namespace Gambit                                                             \
  {                                                                            \
    namespace MODULE                                                           \
    {                                                                          \
      CORE_START_MODULE_COMMON(MODULE)                                         \
    }                                                                          \
  }                                                                            \

/// Central module definition macro, used by modules and models.
#define CORE_START_MODULE_COMMON(MODULE)                                       \
      /* A way to fetch a trait of an observable or likelihood                 \
      (like its type), based on its tag.*/                                     \
      template <typename TAG>                                                  \
      struct function_traits                                                   \
      {                                                                        \
        typedef double type;  /* Scalar numerical value by default. */         \
      };                                                                       \
                                                                               \
      /* Equivalent class for dependencies, where TAG is dependent upon        \
      DEP_TAG */                                                               \
      template <typename DEP_TAG, typename TAG>                                \
      struct dep_traits                                                        \
      {                                                                        \
        typedef double type;  /* Scalar numerical value by default. */         \
      };                                                                       \
                                                                               \
      /* Module name */                                                        \
      str name() { return STRINGIFY(MODULE); }                                 \
                                                                               \
      /* Maps from tag strings to tag-specialisted functions */                \
      std::map<str, void(*)()> map_voids;                                      \
      std::map<str, bool(*)()> map_bools;                                      \
      std::map<str, bool(*)(str)> condit_bools;                                \
      std::map<str, std::map<str, bool(*)()> >model_bools;                     \
      Gambit::dict moduleDict;                                                 \
                                                                               \
      /* All module observables/likelihoods, their dependencies, required      \
      quantities from backends, and their types, as strings */                 \
      static std::map<str,str> iCanDo, iMayNeed, iMayNeedFromBackends;         \
                                                                               \
      /* Module provides observable/likelihood TAG? */                         \
      template <typename TAG>                                                  \
      bool provides() { return false; }                                        \
                                                                               \
      /* Overloaded, non-templated version */                                  \
      bool provides(str obs)                                                   \
      {                                                                        \
        if (map_bools.find(obs) == map_bools.end()) { return false; }          \
        return (*map_bools[obs])();                                            \
      }                                                                        \
                                                                               \
      /* Module requires observable/likelihood DEP_TAG to compute TAG */       \
      template <typename DEP_TAG, typename TAG>                                \
      bool requires() { return false; }                                        \
                                                                               \
      /* Overloaded, non-templated version */                                  \
      bool requires(str dep, str obs)                                          \
      {                                                                        \
        if (map_bools.find(dep+obs) == map_bools.end()) { return false; }      \
        return (*map_bools[dep+obs])();                                        \
      }                                                                        \
                                                                               \
      /* Additional overloaded, non-templated versions */                      \
      bool requires(str dep, str obs, str req, str be, str ver)                \
      {                                                                        \
        if (requires(dep, obs)) {return true; }                                \
        if (condit_bools.find(dep+obs+req+be) == condit_bools.end())           \
        {                                                                      \
          return false;                                                        \
        }                                                                      \
        if ((*condit_bools[dep+obs+req+be])("any"))                            \
        {                                                                      \
          return true;                                                         \
        }                                                                      \
        else                                                                   \
        {                                                                      \
          return (*condit_bools[dep+obs+req+be])(ver);                         \
        }                                                                      \
      }                                                                        \
      bool requires(str dep, str obs, str req, str be)                         \
      {                                                                        \
        return requires(dep, obs, req, be, "any");                             \
      }                                                                        \
                                                                               \
      /* Module requires quantity BE_TAG from a backend to compute TAG */      \
      template <typename BE_TAG, typename TAG>                                 \
      bool needs_from_backend() { return false; }                              \
                                                                               \
      /* Overloaded, non-templated version */                                  \
      bool needs_from_backend(str quant, str obs)                              \
      {                                                                        \
        if (map_bools.find("BE_"+quant+obs) == map_bools.end()) return false;  \
        return (*map_bools["BE_"+quant+obs])();                                \
      }                                                                        \
                                                                               \
      /* Module may require observable/likelihood DEP_TAG to compute TAG,      \
      depending on the backend and version used to meet requirement REQ_TAG. */\
      template <typename DEP_TAG, typename TAG, typename REQ_TAG, typename BE> \
      bool requires_conditional_on_backend(str ver) {return false; }           \
                                                                               \
      /* Overloaded version of templated function */                           \
      template <typename DEP_TAG, typename TAG, typename REQ_TAG, typename BE> \
      bool requires_conditional_on_backend()                                   \
      {                                                                        \
        return requires_conditional_on_backend<DEP_TAG,TAG,REQ_TAG,BE>("any"); \
      }                                                                        \
                                                                               \
      /* Module may require observable/likelihood DEP_TAG to compute TAG,      \
      depending on the model being scanned.*/                                  \
      template <typename DEP_TAG, typename TAG>                                \
      bool requires_conditional_on_model(str model) {return false; }           \
                                                                               \
      /* Module allows use of model MODEL_TAG when computing TAG */            \
      template <typename MODEL_TAG, typename TAG>                              \
      bool explicitly_allowed_model()                                          \
      {                                                                        \
        return false;                                                          \
      }                                                                        \
                                                                               \
      /* Overloaded, non-templated version */                                  \
      bool allowed_model(str model, str obs)                                   \
      {                                                                        \
        if (model_bools.find(obs) == model_bools.end()) return true;           \
        if (model_bools[obs].find(model) == model_bools[obs].end())            \
         return false;                                                         \
        return (*model_bools[obs][model])();                                   \
      }                                                                        \
                                                                               \
      /* Report on observable/likelihood TAG */                                \
      template <typename TAG>                                                  \
      void report()                                                            \
      {                                                                        \
        cout<<"This tag is not supported by "<<STRINGIFY(MODULE)<<"."<<endl;   \
      }                                                                        \
                                                                               \
      /* Overloaded, non-templated version */                                  \
      void report(str obs)                                                     \
      {                                                                        \
        if (map_voids.find(obs) == map_voids.end())                            \
        {                                                                      \
          cout<<"This tag is not supported by "<<STRINGIFY(MODULE)<<"."<<endl; \
        }                                                                      \
        else { (*map_voids[obs])(); }                                          \
      }                                                                        \
                                                                               \
      /* Alias for observable/likelihood function TAG */                       \
      template <typename TAG>                                                  \
      typename function_traits<TAG>::type result()                             \
      {                                                                        \
        cout<<"This tag is not supported by "<<STRINGIFY(MODULE)<<"."<<endl;   \
        return 0;                                                              \
      }                                                                        \
                                                                               \
      /* Overloaded, 'stringy' version */                                      \
      /* A templated function that uses an input string obs to pull a pointer  \
      to the zero-parameter alias fuction above out of the module's private    \
      dictionary.  It then dereferences that pointer, calls the function and   \
      returns the result. */                                                   \
      template <typename TYPE>                                                 \
      TYPE result(str obs)                                                     \
      {                                                                        \
        return ( *moduleDict.get<TYPE(*)()>(obs) )();                          \
      }                                                                        \
                                                                               \
      /* Resolve dependency DEP_TAG in function TAG */                         \
      template <typename DEP_TAG, typename TAG>                                \
      void resolve_dependency(functor* dep_functor)                            \
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


/// Redirection of \link START_CAPABILITY() START_CAPABILITY\endlink when  
/// invoked from within the core.
#define CORE_START_CAPABILITY                                                  \
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
      /* Indicate that this module can provide quantity CAPABILITY */          \
      template <>                                                              \
      bool provides<Tags::CAPABILITY>() { return true; }                       \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \


/// Redirection of \link START_FUNCTION() START_FUNCTION\endlink when invoked 
/// from within the core.
#define CORE_DECLARE_FUNCTION(TYPE, CAN_MANAGE)                                \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    /* Fail if a void-type function is declared, unless it can manage loops.*/ \
    BOOST_PP_IIF(                                                              \
     BOOST_PP_BITAND(IS_TYPE(void,TYPE), BOOST_PP_COMPL(CAN_MANAGE)),          \
     FAIL("Module functions cannot have void results, unless they can manage " \
          "loops (which is declared by adding CAN_MANAGE_LOOPS as the second " \
          "argument of START_FUNCTION)."),)                                    \
                                                                               \
    /* Add FUNCTION to global set of tags of recognised module capabils/deps */\
    ADD_TAG_IN_CURRENT_NAMESPACE(FUNCTION)                                     \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
      /* Register (prototype) the function */                                  \
      BOOST_PP_IIF(IS_TYPE(void,TYPE),                                         \
        void FUNCTION();                                                       \
      ,                                                                        \
        void FUNCTION (TYPE &);                                                \
      )                                                                        \
                                                                               \
      /* Wrap it in a functor */                                               \
      MAKE_FUNCTOR(FUNCTION,TYPE,CAPABILITY,MODULE,CAN_MANAGE)                 \
    }                                                                          \
                                                                               \
  }                                                                            \


/// Main parts of the functor creation
#define MAKE_FUNCTOR(FUNCTION,TYPE,CAPABILITY,ORIGIN,CAN_MANAGE)               \
  /* Set up an auxilary method to report stuff to the core about the           \
  function.  Not actually sure what this would                                 \
  be used for at this stage. */                                                \
  template <>                                                                  \
  void report<Tags::FUNCTION>()                                                \
  {                                                                            \
    cout<<"Dear Core, I provide the function with tag: "<<                     \
    STRINGIFY(FUNCTION)<<endl;                                                 \
  }                                                                            \
                                                                               \
  /* Register the FUNCTION's result TYPE */                                    \
  template<>                                                                   \
  struct function_traits<Tags::FUNCTION>                                       \
  {                                                                            \
    typedef TYPE type;                                                         \
  };                                                                           \
                                                                               \
  /* Create the function wrapper object (functor) */                           \
  namespace Functown                                                           \
  {                                                                            \
    module_functor<TYPE> FUNCTION                                              \
     (&ORIGIN::FUNCTION, STRINGIFY(FUNCTION), STRINGIFY(CAPABILITY),           \
     STRINGIFY(TYPE), STRINGIFY(ORIGIN));                                      \
  }                                                                            \
                                                                               \
  /* Set up an alias function to call the function */                          \
  template <>                                                                  \
  function_traits<Tags::FUNCTION>::type result<Tags::FUNCTION>()               \
  {                                                                            \
     Functown::FUNCTION.calculate();                                           \
     BOOST_PP_IIF(IS_TYPE(void,TYPE),,return Functown::FUNCTION();)            \
  }                                                                            \
                                                                               \
  /* Set up the commands to be called at runtime to register the function*/    \
  template <>                                                                  \
  void rt_register_function<Tags::FUNCTION> ()                                 \
  {                                                                            \
    Core.registerModuleFunctor(Functown::FUNCTION);                            \
    BOOST_PP_IIF(CAN_MANAGE,Functown::FUNCTION.setCanBeLoopManager(true);,)    \
    map_bools[STRINGIFY(CAPABILITY)] = &provides<Tags::CAPABILITY>;            \
    map_voids[STRINGIFY(FUNCTION)] = &report<Tags::FUNCTION>;                  \
    iCanDo[STRINGIFY(FUNCTION)] = STRINGIFY(TYPE);                             \
    moduleDict.set<TYPE(*)()>(STRINGIFY(FUNCTION),&result<Tags::FUNCTION>);    \
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
  namespace SafePointers                                                       \
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
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
                                                                               \
      /* Set up the runtime commands that register the fact that this FUNCTION \
      requires it be run inside a loop manager with capability LOOPMAN. */     \
      template <>                                                              \
      void rt_register_function_nesting<Tags::FUNCTION> ()                     \
      {                                                                        \
        Core.registerNestedModuleFunctor(Functown::FUNCTION);                  \
        Functown::FUNCTION.setLoopManagerCapability(STRINGIFY(LOOPMAN));       \
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


/// First common component of CORE_DEPENDENCY(DEP, TYPE) and 
/// CORE_START_CONDITIONAL_DEPENDENCY(TYPE).
#define DEPENDENCY_COMMON_1(DEP, TYPE, MODULE, FUNCTION)                       \
                                                                               \
      /* Register the required TYPE of the required observable or likelihood   \
      function DEP */                                                          \
      template<>                                                               \
      struct dep_traits<Tags::DEP, Tags::FUNCTION>                             \
      {                                                                        \
        typedef TYPE type;                                                     \
      };                                                                       \
                                                                               \
      /* Create a pointer to the dependency functor. To be filled by the       \
      dependency resolver during runtime. */                                   \
      namespace Dependencies                                                   \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          module_functor<TYPE>* DEP = NULL;                                    \
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Create a safe pointer to the dependency result. To be filled          \
      automatically at runtime when the dependency is resolved. */             \
      namespace SafePointers                                                   \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          BOOST_PP_IIF(IS_TYPE(void,TYPE),,namespace Dep {safe_ptr<TYPE> DEP;})\
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Resolve dependency DEP in FUNCTION */                                 \
      template <>                                                              \
      void resolve_dependency<Tags::DEP, Tags::FUNCTION>(functor* dep_functor) \
      {                                                                        \
        /* First try casting the pointer passed in to a module_functor */      \
        Dependencies::FUNCTION::DEP =                                          \
         dynamic_cast<module_functor<TYPE>*>(dep_functor);                     \
                                                                               \
        /* Now test if that cast worked */                                     \
        if (Dependencies::FUNCTION::DEP == 0)  /* It didn't; throw an error. */\
        {                                                                      \
          cout<<"Error: Null returned from dynamic cast in "<< endl;           \
          cout<<"MODULE::resolve_dependency, for dependency"<< endl;           \
          cout<<"DEP of function FUNCTION.  Attempt was to "<< endl;           \
          cout<<"resolve to "<<dep_functor->name()<<" in   "<< endl;           \
          cout<<dep_functor->origin()<<"."<<endl;                              \
          /** FIXME \todo throw real error here */                             \
        }                                                                      \
        else /* It did!  Now set the pointer to the dependency result. */      \
        {                                                                      \
         BOOST_PP_IIF(IS_TYPE(void,TYPE),,                                     \
          SafePointers::FUNCTION::Dep::DEP =                                   \
           Dependencies::FUNCTION::DEP->valuePtr(); )                          \
        }                                                                      \
                                                                               \
      }                                                                        \


/// Second common component of CORE_DEPENDENCY(DEP, TYPE) and 
/// CORE_START_CONDITIONAL_DEPENDENCY(TYPE).
#define DEPENDENCY_COMMON_2(DEP,TYPE)                                          \
                                                                               \
  /* Create the dependency initialisation object */                            \
  namespace Ini                                                                \
  {                                                                            \
    ini_code CAT_3(DEP,_for_,FUNCTION)                                         \
     (&rt_register_dependency<Tags::DEP, Tags::FUNCTION>);                     \
  }                                                                            \
                                                                            

/// Redirection of DEPENDENCY(DEP, TYPE) when invoked from within the core.
#define CORE_DEPENDENCY(DEP, TYPE)                                             \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    /* Add DEP to global set of tags of recognised module capabilities/deps */ \
    ADD_TAG_IN_CURRENT_NAMESPACE(DEP)                                          \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
                                                                               \
      DEPENDENCY_COMMON_1(DEP, TYPE, MODULE, FUNCTION)                         \
                                                                               \
      /* Indicate that FUNCTION requires DEP to have been computed previously*/\
      template <>                                                              \
      bool requires<Tags::DEP, Tags::FUNCTION>()                               \
      {                                                                        \
        return true;                                                           \
      }                                                                        \
                                                                               \
      /* Set up the commands to be called at runtime to register dependency*/  \
      template <>                                                              \
      void rt_register_dependency<Tags::DEP, Tags::FUNCTION> ()                \
      {                                                                        \
        map_bools[STRINGIFY(CAT(DEP,FUNCTION))] =                              \
         &requires<Tags::DEP, Tags::FUNCTION>;                                 \
        iMayNeed[STRINGIFY(DEP)] = STRINGIFY(TYPE);                            \
        Functown::FUNCTION.setDependency(STRINGIFY(DEP),STRINGIFY(TYPE),       \
         &resolve_dependency<Tags::DEP, Tags::FUNCTION>);                      \
      }                                                                        \
                                                                               \
      DEPENDENCY_COMMON_2(DEP, TYPE)                                           \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \


/// Redirection of ALLOW_MODEL when invoked from within the core.
#define CORE_ALLOWED_MODEL(MODEL)                                              \
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
      /* Indicate that FUNCTION can be used with MODEL */                      \
      template <>                                                              \
      bool explicitly_allowed_model<ModelTags::MODEL, Tags::FUNCTION>()        \
      {                                                                        \
        return true;                                                           \
      }                                                                        \
                                                                               \
      /* Create a pointer to the model parameter functor. To be filled by the  \
      dependency resolver during runtime. */                                   \
      namespace Parameters                                                     \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          module_functor<ModelParameters>* MODEL = NULL;                       \
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Create a safe pointer to the model parameter values. To be filled     \
      automatically at runtime when the dependency is resolved. */             \
      namespace SafePointers                                                   \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          namespace Model { safe_ptr<ModelParameters> MODEL; }                 \
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Resolve dependency on parameters of MODEL in FUNCTION */              \
      template <>                                                              \
      void resolve_dependency<ModelTags::MODEL, Tags::FUNCTION>                \
       (functor* params_functor)                                               \
      {                                                                        \
        /* First try casting the pointer passed in to a module_functor */      \
        Parameters::FUNCTION::MODEL =                                          \
         dynamic_cast<module_functor<ModelParameters>*>(params_functor);       \
                                                                               \
        /* Now test if that cast worked */                                     \
        if (Parameters::FUNCTION::MODEL == 0)  /* It didn't; throw an error. */\
        {                                                                      \
          cout<<"Error: Null returned from dynamic cast in "<< endl;           \
          cout<<"MODULE::resolve_dependency, for model"<< endl;                \
          cout<<"MODEL with function FUNCTION.  Attempt was to "<< endl;       \
          cout<<"resolve to "<<params_functor->name()<<" in   "<< endl;        \
          cout<<params_functor->origin()<<"."<<endl;                           \
          /** FIXME \todo throw real error here */                             \
        }                                                                      \
        else /* It did! */                                                     \
        {                                                                      \
          /* Set the pointer to the model parameter result. */                 \
          SafePointers::FUNCTION::Model::MODEL =                               \
           Parameters::FUNCTION::MODEL->valuePtr();                            \
          /* Get a pointer to the parameter map provided by this MODEL */      \
          const std::map<str,double>* parameterMap =                           \
           SafePointers::FUNCTION::Model::MODEL->getValuesPtr();               \
          /* Use that to add the parameters provided by this MODEL to the map  \
          of safe pointers to model parameters. */                             \
          for (std::map<str,double>::const_iterator it = parameterMap->begin();\
           it != parameterMap->end(); ++it)                                    \
          {                                                                    \
            if (SafePointers::FUNCTION::Param.find(it->first) ==               \
                SafePointers::FUNCTION::Param.end())                           \
            { /* Add a safe pointer to the value of this parameter to the map*/\
              SafePointers::FUNCTION::Param[it->first] =                       \
               safe_ptr<const double>(&(parameterMap->at(it->first)));         \
            }                                                                  \
            else                                                               \
            { /* This parameter already exists in the map! Fail. */            \
              cout<<"Error in MODULE::resolve_dependency, for model"<< endl;   \
              cout<<"MODEL with function FUNCTION.  Attempt was to "<< endl;   \
              cout<<"resolve to "<<params_functor->name()<<" in   "<< endl;    \
              cout<<params_functor->origin()<<"."<<endl;                       \
              cout<<"You have tried to scan two models simultaneously"<< endl; \
              cout<<"that have one or more parameters in common. "<< endl;     \
              cout<<"Problem parameter: "<<it->first<<endl;                    \
            }                                                                  \
          }                                                                    \
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Set up the commands to be called at runtime to register the           \
      compatibility of the model with the functor */                           \
      template <>                                                              \
      void rt_register_dependency<ModelTags::MODEL, Tags::FUNCTION> ()         \
      {                                                                        \
        model_bools[STRINGIFY(FUNCTION)][STRINGIFY(MODEL)] =                   \
         &explicitly_allowed_model<ModelTags::MODEL, Tags::FUNCTION>;          \
        iMayNeed[STRINGIFY(MODEL)] = "ModelParameters";                        \
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



/// Redirection of START_BACKEND_REQ(TYPE, [VAR/FUNC]) when invoked from within the core.
/// The optional flag VAR corresponds to IS_VARIABLE=1, while FUNC (or no flag)
/// corresponds to IS_VARIABLE=0.
#define CORE_DECLARE_BACKEND_REQ(TYPE, IS_VARIABLE)                            \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    /* Add BACKEND_REQ to global set of recognised backend func tags */        \
    ADD_BETAG_IN_CURRENT_NAMESPACE(BACKEND_REQ)                                \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
                                                                               \
      /* Register the required return TYPE of the backend function/variable */ \
      template<>                                                               \
      struct dep_traits<BETags::BACKEND_REQ, Tags::FUNCTION>                   \
      {                                                                        \
        /* Use TYPE* for backend variables, and TYPE for backend functions */  \
        typedef BOOST_PP_IIF(IS_VARIABLE, TYPE*, TYPE) type;                   \
      };                                                                       \
                                                                               \
      namespace SafePointers                                                   \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          namespace BEreq                                                      \
          {                                                                    \
                                                                               \
            /* Create a (base) pointer to the backend functor.                 \
            To be filled by the dependency resolver at runtime. */             \
            functor* CAT(BACKEND_REQ,_baseptr) = NULL;                         \
                                                                               \
            /* If IS_VARIABLE=1, create a safe variable pointer for the        \
            backend pointer returned by the backend functor. To be filled      \
            automatically at runtime when the dependency is resolved.*/        \
            BOOST_PP_IIF(IS_VARIABLE, safe_variable_ptr<TYPE> BACKEND_REQ; ,)  \
          }                                                                    \
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Indicate that FUNCTION has a BACKEND_REQ */                           \
      template <>                                                              \
      bool needs_from_backend<BETags::BACKEND_REQ, Tags::FUNCTION>()           \
      {                                                                        \
        return true;                                                           \
      }                                                                        \
                                                                               \
      /* Resolve backend requirement BACKEND_REQ in FUNCTION */                \
      template <>                                                              \
      void resolve_backendreq<BETags::BACKEND_REQ, Tags::FUNCTION>             \
       (functor* be_functor)                                                   \
      {                                                                        \
        SafePointers::FUNCTION::BEreq::CAT(BACKEND_REQ,_baseptr) = be_functor; \
                                                                               \
        /* If IS_VARIABLE=1, cast the given functor pointer (be_functor) to    \
        a backend functor pointer of the correct type, and then use the        \
        backend pointer returned by the functor to set the safe_variable_ptr   \
        living in SafePointers::FUNCTION::BEreq */                             \
        BOOST_PP_IIF(IS_VARIABLE,                                              \
          backend_functor<TYPE*> * ptr =                                       \
            dynamic_cast<backend_functor<TYPE*>*>(be_functor);                 \
          SafePointers::FUNCTION::BEreq::BACKEND_REQ.set( (*ptr)() );          \
        ,)  /* End BOOST_PP_IIF */                                             \
      }                                                                        \
                                                                               \
      /* Set up the commands to be called at runtime to register req.          \
      (Note that TYPE is used for backend functions, while TYPE* is used       \
      for backend variables.) */                                               \
      template <>                                                              \
      void rt_register_req<BETags::BACKEND_REQ, Tags::FUNCTION>()              \
      {                                                                        \
        map_bools[STRINGIFY(CAT(BE_##BACKEND_REQ,FUNCTION))] =                 \
         &needs_from_backend<BETags::BACKEND_REQ,Tags::FUNCTION>;              \
                                                                               \
        iMayNeedFromBackends[STRINGIFY(BACKEND_REQ)] =                         \
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
       <Tags::CONDITIONAL_DEPENDENCY, Tags::FUNCTION> ()                       \
      {                                                                        \
        iMayNeed[STRINGIFY(CONDITIONAL_DEPENDENCY)] = STRINGIFY(TYPE);         \
      }                                                                        \
                                                                               \
      /* Create the first conditional dependency initialisation object */      \
      DEPENDENCY_COMMON_2(CONDITIONAL_DEPENDENCY, TYPE)                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \

                                                                               
/// Redirection of ACTIVATE_DEP_BE(BACKEND_REQ, BACKEND, VERSTRING) when 
/// invoked from within the core.
#define CORE_ACTIVATE_DEP_BE(BACKEND_REQ, BACKEND, VERSTRING)                  \
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
      /* Indicate that FUNCTION requires CONDITIONAL_DEPENDENCY to have        \
      been computed previously if BACKEND is in use for BACKEND_REQ.*/         \
      template <>                                                              \
      bool requires_conditional_on_backend<Tags::CONDITIONAL_DEPENDENCY,       \
       Tags::FUNCTION, BETags::BACKEND_REQ, BETags::BACKEND> (str ver)         \
      {                                                                        \
        typedef std::vector<str> vec;                                          \
        vec versions = delimiterSplit(VERSTRING, ",");                         \
        for (vec::iterator it = versions.begin() ; it != versions.end(); ++it) \
        {                                                                      \
          if (*it == ver) return true;                                         \
        }                                                                      \
        return false;                                                          \
      }                                                                        \
                                                                               \
      /* Set up the second set of commands to be called at runtime to register \
      the conditional dependency. */                                           \
      template <>                                                              \
      void rt_register_conditional_dependency<Tags::CONDITIONAL_DEPENDENCY,    \
       Tags::FUNCTION, BETags::BACKEND_REQ, BETags::BACKEND> ()                \
      {                                                                        \
        condit_bools[STRINGIFY(CAT_4(CONDITIONAL_DEPENDENCY,FUNCTION,          \
         BACKEND_REQ,BACKEND))] = &requires_conditional_on_backend             \
         <Tags::CONDITIONAL_DEPENDENCY, Tags::FUNCTION, BETags::BACKEND_REQ,   \
         BETags::BACKEND>;                                                     \
        Functown::FUNCTION.setBackendConditionalDependency                     \
         (STRINGIFY(BACKEND_REQ), STRINGIFY(BACKEND), VERSTRING,               \
         STRINGIFY(CONDITIONAL_DEPENDENCY),                                    \
         iMayNeed[STRINGIFY(CONDITIONAL_DEPENDENCY)],                          \
         &resolve_dependency<Tags::CONDITIONAL_DEPENDENCY, Tags::FUNCTION>);   \
      }                                                                        \
                                                                               \
      /* Create the second conditional dependency initialisation object */     \
      namespace Ini                                                            \
      {                                                                        \
        ini_code CAT_7(CONDITIONAL_DEPENDENCY,_for_,FUNCTION,_with_,           \
         BACKEND_REQ,_provided_by_,BACKEND)                                    \
         (&rt_register_conditional_dependency<Tags::CONDITIONAL_DEPENDENCY,    \
         Tags::FUNCTION, BETags::BACKEND_REQ, BETags::BACKEND>);               \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \

/// Redirection of ACTIVATE_DEP_MODEL(MODELSTRING) when invoked from within 
/// the core.
#define CORE_ACTIVATE_DEP_MODEL(MODELSTRING)                                   \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
                                                                               \
      /* Indicate that FUNCTION requires CONDITIONAL_DEPENDENCY to have        \
      been computed previously if one of the model in MODELSTRING is scanned.*/\
      template <>                                                              \
      bool requires_conditional_on_model<Tags::CONDITIONAL_DEPENDENCY,         \
       Tags::FUNCTION> (str model)                                             \
      {                                                                        \
        typedef std::vector<str> vec;                                          \
        vec models = delimiterSplit(MODELSTRING, ",");                         \
        for (vec::iterator it = models.begin() ; it != models.end(); ++it)     \
        {                                                                      \
          if (*it == model) return true;                                       \
        }                                                                      \
        return false;                                                          \
      }                                                                        \
                                                                               \
      /* Set up the second set of commands to be called at runtime to register \
      the conditional dependency. */                                           \
      template <>                                                              \
      void rt_register_conditional_dependency<Tags::CONDITIONAL_DEPENDENCY,    \
       Tags::FUNCTION> ()                                                      \
      {                                                                        \
        condit_bools[STRINGIFY(CAT(CONDITIONAL_DEPENDENCY,FUNCTION))] =        \
         &requires_conditional_on_model<Tags::CONDITIONAL_DEPENDENCY,          \
         Tags::FUNCTION>;                                                      \
        Functown::FUNCTION.setModelConditionalDependency                       \
         (MODELSTRING, STRINGIFY(CONDITIONAL_DEPENDENCY),                      \
         iMayNeed[STRINGIFY(CONDITIONAL_DEPENDENCY)],                          \
         &resolve_dependency<Tags::CONDITIONAL_DEPENDENCY, Tags::FUNCTION>);   \
      }                                                                        \
                                                                               \
      /* Create the second conditional dependency initialisation object */     \
      namespace Ini                                                            \
      {                                                                        \
        ini_code CAT_4(CONDITIONAL_DEPENDENCY,_for_,FUNCTION,_with_models)     \
         (&rt_register_conditional_dependency<Tags::CONDITIONAL_DEPENDENCY,    \
         Tags::FUNCTION>);                                                     \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \

/// @}

#endif // defined __core_module_macros_incore_hpp__ 

