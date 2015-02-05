//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  General macros for loading a shared library
///  and constructing pointers to the variables and
///  functions within the library. 
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Anders Kvellestad
///          (anders.kvellestad@fys.uio.no) 
///  \date 2013 Mar, Apr, Nov
///
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 June
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2013 July
///  \date 2014 Jan, Mar, May
///
///  \author Lars A. Dal  
///          (l.a.dal@fys.uio.no)
///  \date 2014 Jan, Mar
///  \date 2015 Jan, Feb
///
///  *********************************************

#ifndef __BACKEND_MACROS_HPP__
#define __BACKEND_MACROS_HPP__

#include <iostream>
#include <string>
#include <dlfcn.h>
#include <map>
#include <sstream>

#include "static_members.hpp"
#include "util_macros.hpp"
#include "util_types.hpp"
#include "util_functions.hpp"
#include "types_rollcall.hpp"
#include "functors.hpp"
#include "log.hpp"
#include "standalone_error_handlers.hpp"
#include "module_macros_incore.hpp"
#include "backend_singleton.hpp"
#include "claw_singleton.hpp"
#ifndef STANDALONE
  #include "core_singleton.hpp"
#endif

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bitand.hpp>
#include <boost/preprocessor/logical/bitor.hpp>
#include <boost/preprocessor/list/size.hpp>
#include <boost/preprocessor/seq/transform.hpp>
#include <boost/preprocessor/seq/for_each.hpp>
#include <boost/preprocessor/seq/for_each_i.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/to_seq.hpp>
#include <boost/preprocessor/punctuation/comma_if.hpp>

/// Define the separator to use instead of "::" when macros get gnarly.
#define NS_SEP ___ns_separator_that_will_never_appear_naturally___

namespace Gambit
{
  namespace Backends
  {

    typedef void(*voidFptr)();
    /// Hack to suppress warnings about casting between void pointers and function pointers.
    /// "Necessary" as long as dlsym has no separate functionality for retrieving function pointers.
    union void_voidFptr
    {
      void *ptr;      // Use this for objects
      voidFptr fptr;  // Use this for functions
    };

    /// Get back the "::" from things that use NS_SEP instead
    str fixns(str s)
    {
      str ns = STRINGIFY(NS_SEP);
      const str cc = "::";
      #if GAMBIT_CONFIG_FLAG_use_regex     // Using regex :D
        regex rgx1(ns), rgx2("my_ns"+cc), rgx3(cc+"\\("), rgx4(cc+"$");
        s = regex_replace(s, rgx1, cc);
        s = regex_replace(s, rgx2, "");
        s = regex_replace(s, rgx3, "(");
        s = regex_replace(s, rgx4, "");
      #else                                // Using lame-o methods >:(
        boost::replace_all(s, ns, cc);
        boost::replace_all(s, "my_ns"+cc, "");
        boost::replace_all(s, cc+"(", "(");
        const int cclen = cc.length();
        const int slen = s.length();
        if (cclen > slen) return s;
        if (s.substr(slen-cclen,cclen) == cc) s.replace(slen-cclen,cclen,"");
      #endif
      return s;
    }

  }
}

/// Turn classloading off by default (this is redefined by BOSSed backends).
#define DO_CLASSLOADING 0

/// Declare the backend initialisation module BackendIniBit.
#define MODULE BackendIniBit
  START_MODULE
#undef MODULE

/// Dependency macro for point-level backend initialisation functions (in BackendIniBit)
#define BE_INI_DEPENDENCY(DEP, TYPE) CORE_DEPENDENCY(DEP, TYPE, BackendIniBit, CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init), NOT_MODEL)

/// Model-conditional dependency macro for point-level backend initialisation functions (in BackendIniBit)
#define BE_INI_CONDITIONAL_DEPENDENCY(DEP, TYPE, ...)                                                                                             \
  CORE_START_CONDITIONAL_DEPENDENCY(BackendIniBit, CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init), CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init), DEP, TYPE) \
  ACTIVATE_DEP_MODEL(BackendIniBit, CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init), CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init), DEP, #__VA_ARGS__)

/// Macro for assigning allowed models to an entire backend.
#define BE_ALLOW_MODELS(...) BOOST_PP_SEQ_FOR_EACH(BE_ALLOW_MODEL_INTERMEDIATE, , BOOST_PP_TUPLE_TO_SEQ((__VA_ARGS__)))

/// Intermediate macro for expanding BE_ALLOW_MODELS.
#define BE_ALLOW_MODEL_INTERMEDIATE(r,data,MODEL) BE_ALLOW_MODEL(MODEL)

/// Boilerplate code for point-level backend initialisation function definitions
#define BE_INI_FUNCTION                                                     \
namespace Gambit                                                            \
{                                                                           \
  namespace BackendIniBit                                                   \
  {                                                                         \
    void CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init)()                         \
    {                                                                       \
      using namespace Pipes::CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init);      \
      using namespace Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION);          \
      logger().entering_backend(Logging::str2tag(STRINGIFY(BACKENDNAME)));  \
  
/// Boilerplate code for convenience function definitions
#define BE_NAMESPACE                                                        \
namespace Gambit                                                            \
{                                                                           \
  namespace Backends                                                        \
  {                                                                         \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                             \
    {                                                                       \
      namespace                                                             \

/// Closer for convenience and initialisation function definitional boilerplate.
#define DONE }}}    

/// Macro for assigning a single allowed model to an entire backend.
#define BE_ALLOW_MODEL(MODEL)                                               \
BE_NAMESPACE                                                                \
{                                                                           \
  void CAT_3(register_allowed_model,_,MODEL)()                              \
  {                                                                         \
    allowed_models.push_back(STRINGIFY(MODEL));                             \
  }                                                                         \
                                                                            \
  namespace ini                                                             \
  {                                                                         \
    ini_code CAT_3(ini_allowed_model,_,MODEL)                               \
             (&CAT_3(register_allowed_model,_,MODEL));                      \
  }                                                                         \
                                                                            \
}                                                                           \
DONE                                                                        \

/// Indicate to a backend functor that it can be used with a given model.
#define SET_SINGLE_ALLOWED_MODEL(r,NAME,MODEL)                              \
  Functown::NAME.setAllowedModel(STRINGIFY(MODEL));
        
/// Set all the allowed models for a given backend functor.
#define SET_ALLOWED_MODELS(NAME, MODELS)                                    \
      void CAT(setAllowedModels_,NAME)()                                    \
      {                                                                     \
        /* Set all the models that have been designated as allowed at the */\
        /* backend level as also allowed for this backend functor. */       \
        if (not allowed_models.empty())                                     \
        {                                                                   \
          for (std::vector<str>::const_iterator it = allowed_models.begin();\
               it != allowed_models.end(); ++it)                            \
          {                                                                 \
            Functown::NAME.setAllowedModel(*it);                            \
          }                                                                 \
        }                                                                   \
        /* Set all the models that have been specifically allowed for this*/\
        /* backend functor as allowed.                                    */\
        BOOST_PP_IIF(ISEMPTY(MODELS), ,                                     \
         BOOST_PP_SEQ_FOR_EACH(SET_SINGLE_ALLOWED_MODEL, NAME,              \
         BOOST_PP_TUPLE_TO_SEQ((STRIP_PARENS(MODELS))) )  )                 \
      }                                                                     \
                                                                            \
      /* The code within the void function 'NAME_models'                    \
         is executed when we create the following instance of               \
         the 'ini_code' struct. */                                          \
      namespace ini                                                         \
      {                                                                     \
        ini_code CAT_3(NAME,_,models)(&CAT(setAllowedModels_,NAME));        \
      }                                                                     \

/// Make the inUse pipe for a given backend functor.                        
#define MAKE_INUSE_POINTER(NAME)                                            \
  namespace BackendIniBit                                                   \
  {                                                                         \
    namespace Pipes                                                         \
    {                                                                       \
      namespace CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init)                    \
      {                                                                     \
        namespace InUse                                                     \
        {                                                                   \
          safe_ptr<bool> NAME;                                              \
        }                                                                   \
      }                                                                     \
    }                                                                       \
                                                                            \
    /* Make the function that points the safe pointer to the inUse flag. */ \
    void CAT_7(BACKENDNAME,_,SAFE_VERSION,_,NAME,_,setInUsePtr)()           \
    {                                                                       \
      Pipes::CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init)::InUse::NAME =        \
       Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION)::Functown::              \
       NAME.inUsePtr();                                                     \
    }                                                                       \
                                                                            \
    /* Make the ini object that points the safe pointer to the inUse flag.*/\
    namespace ini                                                           \
    {                                                                       \
      ini_code CAT_7(BACKENDNAME,_,SAFE_VERSION,_,NAME,_,iniInUsePtr)       \
       (&CAT_7(BACKENDNAME,_,SAFE_VERSION,_,NAME,_,setInUsePtr));           \
    }                                                                       \
  }                                                                         \

/// Macro containing initialization code
#define LOAD_LIBRARY                                                        \
namespace Gambit                                                            \
{                                                                           \
  namespace Backends                                                        \
  {                                                                         \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                             \
    {                                                                       \
                                                                            \
      void * pHandle;                                                       \
      void_voidFptr pSym;                                                   \
      bool present;                                                         \
      std::vector<str> allowed_models;                                      \
      void loadLibrary()                                                    \
      {                                                                     \
        const str be   = STRINGIFY(BACKENDNAME);                            \
        const str ver  = STRINGIFY(VERSION);                                \
        const str sv   = STRINGIFY(SAFE_VERSION);                           \
        const str path = backendInfo().corrected_path(be,ver);              \
        backendInfo().link_versions(be, ver, sv);                           \
        pHandle = dlopen(path.c_str(), RTLD_LAZY);                          \
        if(not pHandle)                                                     \
        {                                                                   \
          std::ostringstream err;                                           \
          str error = dlerror();                                            \
          backendInfo().dlerrors[be+ver] = error;                           \
          err << "Failed loading library from " << path                     \
              << " due to error: " << error << std::endl                    \
              << "All functors generated from this library will get "       \
                 "status=-1.";                                              \
          backend_warning().raise(LOCAL_INFO,err.str());                    \
          present = false;                                                  \
        }                                                                   \
        else                                                                \
        {                                                                   \
          logger() << "Succeeded in loading " << path << std::endl          \
                   << LogTags::backends << LogTags::info << EOM;            \
          present = true;                                                   \
        }                                                                   \
        backendInfo().works[be+ver] = present;                              \
      }                                                                     \
                                                                            \
      void ibinBOSSd()                                                      \
      {                                                                     \
        const str be   = STRINGIFY(BACKENDNAME);                            \
        const str ver  = STRINGIFY(VERSION);                                \
        backendInfo().classloader[be+ver] = true;                           \
        backendInfo().classes_OK[be+ver] = true;                            \
      }                                                                     \
                                                                            \
      void noBOSS()                                                         \
      {                                                                     \
        const str be   = STRINGIFY(BACKENDNAME);                            \
        const str ver  = STRINGIFY(VERSION);                                \
        backendInfo().classloader[be+ver] = false;                          \
      }                                                                     \
                                                                            \
      /*The code within the void functions are executed                     \
        when we create instances of the 'ini_code' struct. */               \
      namespace ini                                                         \
      {                                                                     \
        ini_code CAT_3(BACKENDNAME,_,SAFE_VERSION)(&loadLibrary);           \
        ini_code cl_info(&BOOST_PP_IF(DO_CLASSLOADING,ibinBOSSd,noBOSS));   \
      }                                                                     \
                                                                            \
      /* Register this backend with the Core if not running in standalone */\
      REGISTER_BACKEND(BACKENDNAME, VERSION, SAFE_VERSION)                  \
                                                                            \
      /* Register a LogTag for this backend with the logging system */      \
      REGISTER_BACKEND_LOGTAG                                               \
                                                                            \
    } /* end namespace BACKENDNAME_SAFE_VERSION */                          \
  } /* end namespace Backends */                                            \
} /* end namespace Gambit */                                                \
                                                                            \
/* Register the factory functions for all classes loaded by this backend. */\
BOOST_PP_IIF(DO_CLASSLOADING, LOAD_ALL_FACTORIES, )                         \
                                                                            \
/* Register the initialisation function for this backend */                 \
CORE_START_CAPABILITY(BackendIniBit,                                        \
 CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init))                                  \
CORE_DECLARE_FUNCTION(BackendIniBit,                                        \
 CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init),                                  \
 CAT_5(BACKENDNAME,_,SAFE_VERSION,_,init),                                  \
 void,2)                                                                    \

/// Register this backend with the Core if not running in standalone mode.
#ifdef STANDALONE
  #define REGISTER_BACKEND(BE, VER, SAFEVER)   DUMMYARG(BE, VER, SAFEVER)   
#else 
  #define REGISTER_BACKEND(BE, VER, SAFEVER)   REGISTER_BACKEND_WITH_CORE(BE, VER, SAFEVER)
#endif

/// Register a backend with the GAMBIT Core
#define REGISTER_BACKEND_WITH_CORE(BE, VER, SAFEVER)                                            \
void CAT_4(register_backend_,BE,_,SAFEVER) ()                                                   \
{                                                                                               \
  Core().registerBackend(STRINGIFY(BE), STRINGIFY(VER));                                        \
}                                                                                               \
                                                                                                \
namespace ini                                                                                   \
{                                                                                               \
  ini_code run_backend_rego(&CAT_4(register_backend_,BE,_,SAFEVER));                            \
}                                                                                               \

/// Macro for adding a tag to the logging system for each backend
#define REGISTER_BACKEND_LOGTAG                                                                 \
void rt_register_backend_with_log ()                                                            \
{                                                                                               \
  int mytag = Logging::getfreetag();                                                            \
  Logging::tag2str()[mytag] = STRINGIFY(BACKENDNAME)/* "v" STRINGIFY(VERSION)*/;                \
  Logging::components().insert(mytag);                                                          \
}                                                                                               \
                                                                                                \
namespace ini                                                                                   \
{                                                                                               \
  ini_code register_backend_with_log (&rt_register_backend_with_log);                           \
}                                                                                               \

/// Load factory functions for classes provided by this backend
#define LOAD_ALL_FACTORIES                                                                      \
 BOOST_PP_SEQ_FOR_EACH(LOAD_FACTORIES_FOR_TYPE, , CAT_4(BACKENDNAME,_,SAFE_VERSION,_all_data))                            

/// Load all factory functions for a given type.
#define LOAD_FACTORIES_FOR_TYPE(r,data,elem)                                                    \
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                 \
    {                                                                                           \
      /*Alias the namespace that the classes live in, to avoid macro issues with "::" */        \
      namespace my_ns = ::CAT_3(BACKENDNAME,_,SAFE_VERSION);                                    \
                                                                                                \
      /*Typedef the wrapper type to avoid expanding type seq inside BOOST_PP_SEQ_FOR_EACH_I*/   \
      typedef ::CAT_3(BACKENDNAME,_,SAFE_VERSION)::BOOST_PP_SEQ_FOR_EACH_I(TRAILING_NSQUALIFIER,\
               , BOOST_PP_SEQ_SUBSEQ(BOOST_PP_TUPLE_ELEM(2,0,elem),0,                           \
                BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(BOOST_PP_TUPLE_ELEM(2,0,elem)),1)))              \
              BOOST_PP_SEQ_ELEM(BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(BOOST_PP_TUPLE_ELEM(2,0,elem)),1)\
               ,BOOST_PP_TUPLE_ELEM(2,0,elem))                                                  \
              CAT(BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_TRANSFORM(APPEND_TOKEN,                         \
               NS_SEP, BOOST_PP_TUPLE_ELEM(2,0,elem))),wrapper);                                \
                                                                                                \
      /*Typedef the abstract type to avoid expanding type seq inside BOOST_PP_SEQ_FOR_EACH_I*/  \
      typedef ::CAT_3(BACKENDNAME,_,SAFE_VERSION)::BOOST_PP_SEQ_FOR_EACH_I(TRAILING_NSQUALIFIER,\
               , BOOST_PP_SEQ_SUBSEQ(BOOST_PP_TUPLE_ELEM(2,0,elem),0,                           \
                BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(BOOST_PP_TUPLE_ELEM(2,0,elem)),1)))              \
              CAT(Abstract_,BOOST_PP_SEQ_ELEM(BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(                   \
               BOOST_PP_TUPLE_ELEM(2,0,elem)),1), BOOST_PP_TUPLE_ELEM(2,0,elem)))               \
              CAT(BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_TRANSFORM(APPEND_TOKEN,                         \
         NS_SEP, BOOST_PP_TUPLE_ELEM(2,0,elem))),abstract);                                     \
                                                                                                \
      /*Register the type with the backend info object*/                                        \
      void CAT(register_type_,BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_TRANSFORM(APPEND_TOKEN,             \
         NS_SEP, BOOST_PP_TUPLE_ELEM(2,0,elem))) ) ()                                           \
      {                                                                                         \
        backendInfo().classes[STRINGIFY(BACKENDNAME)STRINGIFY(VERSION)].insert(                 \
         Utils::strip_whitespace_except_after_const(                                            \
         STRINGIFY(BOOST_PP_SEQ_FOR_EACH_I(TRAILING_NSQUALIFIER, ,                              \
         BOOST_PP_SEQ_SUBSEQ(BOOST_PP_TUPLE_ELEM(2,0,elem),0,                                   \
         BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(BOOST_PP_TUPLE_ELEM(2,0,elem)),1)))                     \
         BOOST_PP_SEQ_ELEM(BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(BOOST_PP_TUPLE_ELEM(2,0,elem)),1),    \
         BOOST_PP_TUPLE_ELEM(2,0,elem))) ));                                                    \
      }                                                                                         \
                                                                                                \
      namespace ini                                                                             \
      {                                                                                         \
        ini_code CAT(run_type_rego, BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_TRANSFORM(APPEND_TOKEN,       \
         NS_SEP, BOOST_PP_TUPLE_ELEM(2,0,elem))) )                                              \
         (&CAT(register_type_,BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_TRANSFORM(APPEND_TOKEN,             \
         NS_SEP, BOOST_PP_TUPLE_ELEM(2,0,elem))) ));                                            \
      }                                                                                         \
                                                                                                \
    } /* end namespace BACKENDNAME_SAFE_VERSION */                                              \
  } /* end namespace Backends */                                                                \
} /* end namespace Gambit*/                                                                     \
                                                                                                \
/*Load up each factory in turn for this type*/                                                  \
BOOST_PP_SEQ_FOR_EACH_I(LOAD_NTH_FACTORY_FOR_TYPE,                                              \
 BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_TRANSFORM(APPEND_TOKEN, NS_SEP,                                  \
 BOOST_PP_TUPLE_ELEM(2,0,elem))), BOOST_PP_TUPLE_ELEM(2,1,elem))                                \

/// Redirector from within BOOST_PP_SEQ_FOR_EACH_I to LOAD_SINGLE_FACTORY
#define LOAD_NTH_FACTORY_FOR_TYPE(r,data,i,elem)                                                \
 LOAD_SINGLE_FACTORY(data, CAT_3(data,factory,i), BOOST_PP_TUPLE_ELEM(2,1,elem),                \
 BOOST_PP_TUPLE_ELEM(2,0,elem), CAT(data,abstract), CAT(data,wrapper)::CAT(__factory,i) )       \

/// Load a single factory function from a backend
#define LOAD_SINGLE_FACTORY(BARENAME, NAME, ARGS, SYMBOLNAME, ABSTRACT, PTRNAME)                \
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                 \
    {                                                                                           \
      /* Define a type NAME_type to be a suitable function pointer. */                          \
      typedef ABSTRACT*(*CAT(NAME,_type))CONVERT_VARIADIC_ARG(ARGS);                            \
    }                                                                                           \
  }                                                                                             \
}                                                                                               \
                                                                                                \
namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                     \
{                                                                                               \
  /* Define the static function pointer in the wrapper class for this factory. */               \
  Gambit::Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION)::CAT(NAME,_type)                          \
   Gambit::Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION)::PTRNAME;                                \
}                                                                                               \
                                                                                                \
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                 \
    {                                                                                           \
      /* Get the pointer to the function in the shared library. */                              \
      LOAD_BACKEND_FUNCTION(NAME, SYMBOLNAME)                                                   \
                                                                                                \
      /* Function to throw an error if a backend is absent. */                                  \
      ABSTRACT* CAT(backend_not_loaded_,NAME)CONVERT_VARIADIC_ARG(ARGS)                         \
      {                                                                                         \
        std::ostringstream err;                                                                 \
        err << "The backend library" << std::endl                                               \
            << STRINGIFY(BACKENDNAME) << " v" << STRINGIFY(VERSION) << "," << std::endl         \
            << "which is supposed to contain the factory for class " << std::endl               \
            << fixns(STRINGIFY(BARENAME) STRINGIFY(CONVERT_VARIADIC_ARG(ARGS)))<<", "<<std::endl\
            << "is missing or catastrophically broken." << std::endl                            \
            << "Fix or find that backend yo -- or don't use the type." << std::endl;            \
        backend_error().raise(LOCAL_INFO BOOST_PP_COMMA() err.str());                           \
        return NULL;                                                                            \
      }                                                                                         \
                                                                                                \
      /* Function to throw an error if a factory hasn't loaded properly. */                     \
      ABSTRACT* CAT(factory_not_loaded_,NAME)CONVERT_VARIADIC_ARG(ARGS)                         \
      {                                                                                         \
        std::ostringstream err;                                                                 \
        err << "Factory for class " << fixns(STRINGIFY(BARENAME)                                \
                STRINGIFY(CONVERT_VARIADIC_ARG(ARGS)))                                          \
            << " did not load properly from " << std::endl                                      \
            << STRINGIFY(BACKENDNAME) << " v" << STRINGIFY(VERSION) << std::endl                \
            << "...so you can't make an object with it." << std::endl;                          \
        backend_error().raise(LOCAL_INFO BOOST_PP_COMMA() err.str());                           \
        return NULL;                                                                            \
      }                                                                                         \
                                                                                                \
      /* Provide the factory pointer to the loaded type's wrapper constructor.  If the library  \
      is not present or the symbol not found, save this info in the backend info object. */     \
      void CAT(handoverFactoryPointer_,NAME)()                                                  \
      {                                                                                         \
        const str be   = STRINGIFY(BACKENDNAME);                                                \
        const str ver  = STRINGIFY(VERSION);                                                    \
        const str path = backendInfo().corrected_path(be,ver);                                  \
        backendInfo().factory_args[be+ver+fixns(STRINGIFY(BARENAME))].                          \
         insert(STRINGIFY(CONVERT_VARIADIC_ARG(ARGS)));                                         \
        if(!present)                                                                            \
        {                                                                                       \
          PTRNAME = CAT(backend_not_loaded_,NAME);                                              \
          backendInfo().classes_OK[be+ver] = false;                                             \
          backendInfo().constructor_status[be+ver+fixns(STRINGIFY(BARENAME)                     \
           STRINGIFY(CONVERT_VARIADIC_ARG(ARGS)))] = "lib absent";    \
        }                                                                                       \
        else if(dlerror() != NULL)                                                              \
        {                                                                                       \
          std::ostringstream err;                                                               \
          err << "Library symbol " << SYMBOLNAME << " not found in " << path << "."             \
              << std::endl << "The BOSSed type relying on factory " << STRINGIFY(NAME)          \
              << STRINGIFY(CONVERT_VARIADIC_ARG(ARGS)) << " will be unavailable." << std::endl; \
          backend_warning().raise(LOCAL_INFO BOOST_PP_COMMA() err.str());                       \
          PTRNAME = CAT(factory_not_loaded_,NAME);                                              \
          backendInfo().classes_OK[be+ver] = false;                                             \
          backendInfo().constructor_status[be+ver+fixns(STRINGIFY(BARENAME)                     \
           STRINGIFY(CONVERT_VARIADIC_ARG(ARGS)))] = "broken";                                  \
        }                                                                                       \
        else                                                                                    \
        {                                                                                       \
          PTRNAME = NAME;                                                                       \
          logger() << "Succeeded in loading constructor " << fixns(STRINGIFY(BARENAME)          \
                      STRINGIFY(CONVERT_VARIADIC_ARG(ARGS))) << " from "<< std::endl            \
                   << path << "." << LogTags::backends << LogTags::info << EOM;                 \
          backendInfo().constructor_status[be+ver+fixns(STRINGIFY(BARENAME)                     \
           STRINGIFY(CONVERT_VARIADIC_ARG(ARGS)))] = "OK";                                      \
        }                                                                                       \
      }                                                                                         \
                                                                                                \
      /* Set up the ini code object to execute the wrapper factory-setting routine. */          \
      namespace ini                                                                             \
      {                                                                                         \
        ini_code CAT(ini_for_handoverFactoryPointer_,NAME)(&CAT(handoverFactoryPointer_,NAME)); \
      }                                                                                         \
                                                                                                \
    } /* end namespace BACKENDNAME_SAFE_VERSION */                                              \
  } /* end namespace Backends */                                                                \
} /* end namespace Gambit */                                                                    \



/// \name Variadic redirection macro for BE_VARIABLE(TYPE, NAME, SYMBOLNAME, CAPABILITY, [(ALLOWED_MODELS)])
#define BE_VARIABLE_5(_1, _2, _3, _4, _5)      BE_VARIABLE_I(_1, _2, _3, _4, _5)  
#define BE_VARIABLE_4(_1, _2, _3, _4)          BE_VARIABLE_I(_1, _2, _3, _4, ()) 
#define BE_VARIABLE(...)                       VARARG(BE_VARIABLE, __VA_ARGS__)


/// \name Variadic redirection macro for BE_CONV_FUNCTION(NAME, TYPE, ARGSLIST, CAPABILITY, [(ALLOWED_MODELS)])
#define BE_CONV_FUNCTION_5(_1, _2, _3, _4, _5) BE_CONV_FUNCTION_FULL(_1, _2, _3, _4, _5)  
#define BE_CONV_FUNCTION_4(_1, _2, _3, _4)     BE_CONV_FUNCTION_FULL(_1, _2, _3, _4, ()) 
#define BE_CONV_FUNCTION(...)                  VARARG(BE_CONV_FUNCTION, __VA_ARGS__)


// Determine whether to make registration calls to the Core or not in BE_VARIABLE_I, depending on STANDALONE flag 
#ifdef STANDALONE
  #define BE_VARIABLE_I(TYPE, NAME, SYMBOLNAME, CAPABILITY, MODELS)           \
          BE_VARIABLE_I_MAIN(TYPE, NAME, SYMBOLNAME, CAPABILITY, MODELS)
#else
  #define BE_VARIABLE_I(TYPE, NAME, SYMBOLNAME, CAPABILITY, MODELS)           \
          BE_VARIABLE_I_MAIN(TYPE, NAME, SYMBOLNAME, CAPABILITY, MODELS)      \
          BE_VARIABLE_I_SUPP(NAME)
#endif


/// Main actual backend variable macro
#define BE_VARIABLE_I_MAIN(TYPE, NAME, SYMBOLNAME, CAPABILITY, MODELS)        \
namespace Gambit                                                              \
{                                                                             \
  namespace Backends                                                          \
  {                                                                           \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                               \
    {                                                                         \
                                                                              \
      /* Declare a function that provides the variable pointer. */            \
      TYPE * CAT(constructVarPointer_,NAME)()                                 \
      {                                                                       \
        /* Obtain a void pointer (pSym) to the library symbol. */             \
        /* -- First clear error code by calling dlerror() */                  \
        dlerror();                                                            \
        /* -- Obtain pointer from symbol */                                   \
        pSym.ptr = dlsym(pHandle, SYMBOLNAME);                                \
        return reinterpret_cast<TYPE*>(pSym.ptr);                             \
      }                                                                       \
                                                                              \
      /* Set the variable pointer and the getptr function. */                 \
      TYPE * const NAME = CAT(constructVarPointer_,NAME)();                   \
      TYPE * CAT(getptr,NAME)() { return NAME; }                              \
                                                                              \
      /* Create functor objects */                                            \
      namespace Functown                                                      \
      {                                                                       \
        backend_functor<TYPE*(*)(), TYPE*> NAME(                              \
        Gambit::Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION)::CAT(getptr,NAME),\
        STRINGIFY(NAME),   /* functor name */                                 \
        CAPABILITY,        /* functor capability */                           \
        SAFE_STRINGIFY(TYPE*),                                                \
        STRINGIFY(BACKENDNAME),                                               \
        STRINGIFY(VERSION),                                                   \
        STRINGIFY(SAFE_VERSION),                                              \
        Models::ModelDB());                                                   \
      } /* end namespace Functown */                                          \
                                                                              \
      /* Set the allowed model properties of the functor. */                  \
      SET_ALLOWED_MODELS(NAME, MODELS)                                        \
                                                                              \
      void CAT(setVarFunctorStatus_,NAME)()                                   \
      {                                                                       \
        /* -- Disable the functor if the library is not present               \
              or the symbol not found. */                                     \
        if(!present)                                                          \
        {                                                                     \
          Functown::NAME.setStatus(-1);                                       \
        }                                                                     \
        else if(dlerror() != NULL)                                            \
        {                                                                     \
          std::ostringstream err;                                             \
          err << "Library symbol " << SYMBOLNAME << " not found."             \
              << std::endl << "The functor generated for this symbol "        \
              << "will get status=-2" << std::endl;                           \
          backend_warning().raise(LOCAL_INFO,err.str());                      \
          Functown::NAME.setStatus(-2);                                       \
        }                                                                     \
      }                                                                       \
                                                                              \
      /* The code within the void function 'setVarFunctorStatus_NAME'         \
         is executed when we create the following instance of                 \
         the 'ini_code' struct. */                                            \
      namespace ini                                                           \
      {                                                                       \
        ini_code NAME(&CAT(setVarFunctorStatus_,NAME));                       \
      }                                                                       \
                                                                              \
    } /* end namespace BACKENDNAME_SAFE_VERSION */                            \
  } /* end namespace Backends */                                              \
                                                                              \
  /* Create the safe pointer to the 'in use' flag of the functor. */          \
  MAKE_INUSE_POINTER(NAME)                                                    \
                                                                              \
} /* end namespace Gambit */                                                  \

/// Supplementary backend variable macro
#define BE_VARIABLE_I_SUPP(NAME)                                            \
namespace Gambit                                                            \
{                                                                           \
  namespace Backends                                                        \
  {                                                                         \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                             \
    {                                                                       \
                                                                            \
      void CAT(constructVarPointer_supp_,NAME)()                            \
      {                                                                     \
        /* Register functors */                                             \
        Core().registerBackendFunctor(Functown::NAME);                      \
      }                                                                     \
                                                                            \
      /* The code within the void function 'constructVarPointer_supp_NAME'  \
         is executed when we create the following instance of               \
         the 'ini_code' struct. */                                          \
      namespace ini                                                         \
      {                                                                     \
        ini_code CAT(NAME,_supp)(&CAT(constructVarPointer_supp_,NAME));     \
      }                                                                     \
                                                                            \
    } /* end namespace BACKENDNAME_SAFE_VERSION */                          \
  } /* end namespace Backends */                                            \
} /* end namespace Gambit */                                                \


/// \name Wrapping macros for backend-defined functions
///
/// BE_FUNCTION(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY, [(MODELS)]) is the
/// macro used for constructing pointers to library functions and 
/// wrapping function pointers in backend functors.
///
/// The sixth argument (MODELS) is optional, and contains a list of models that you want this function to be able
/// to be used with.  
/// @{
  
#define BE_FUNCTION_5(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY)                             \
  BE_FUNCTION_I(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY, ())

#define BE_FUNCTION_6(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY, MODELS)                     \
  BE_FUNCTION_I(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY, MODELS)                             

#define BE_FUNCTION(...) VARARG(BE_FUNCTION, __VA_ARGS__)


// Determine whether to make registration calls to the Core or not in BE_FUNCTION_IMPL2, depending on STANDALONE flag 
#ifdef STANDALONE
  #define BE_FUNCTION_I(NAME, TYPE, ARGLIST, SYMBOLNAME, CAPABILITY, MODELS)                    \
          BE_FUNCTION_I_MAIN(NAME, TYPE, ARGLIST, SYMBOLNAME, CAPABILITY, MODELS)
#else
  #define BE_FUNCTION_I(NAME, TYPE, ARGLIST, SYMBOLNAME, CAPABILITY, MODELS)                    \
          BE_FUNCTION_I_MAIN(NAME, TYPE, ARGLIST, SYMBOLNAME, CAPABILITY, MODELS)               \
          BE_FUNCTION_I_SUPP(NAME)
#endif


/// Main actual backend function macro
#define BE_FUNCTION_I_MAIN(NAME, TYPE, ARGLIST, SYMBOLNAME, CAPABILITY, MODELS)                 \
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                 \
    {                                                                                           \
                                                                                                \
      /* Define a type NAME_type to be a suitable function pointer. */                          \
      typedef TYPE (*NAME##_type) CONVERT_VARIADIC_ARG(ARGLIST);                                \
                                                                                                \
      /* Get the pointer to the function in the shared library. */                              \
      LOAD_BACKEND_FUNCTION(NAME, SYMBOLNAME)                                                   \
                                                                                                \
      /* Create functor object */                                                               \
      namespace Functown                                                                        \
      {                                                                                         \
        backend_functor<TYPE(*)CONVERT_VARIADIC_ARG(ARGLIST), TYPE                              \
         INSERT_NONEMPTY(STRIP_VARIADIC_ARG(ARGLIST))> NAME(                                    \
         Gambit::Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION)::NAME,                             \
         STRINGIFY(NAME),                                                                       \
         CAPABILITY,                                                                            \
         STRINGIFY(TYPE) STRINGIFY(CONVERT_VARIADIC_ARG(ARGLIST)),                              \
         STRINGIFY(BACKENDNAME),                                                                \
         STRINGIFY(VERSION),                                                                    \
         STRINGIFY(SAFE_VERSION),                                                               \
         Models::ModelDB());                                                                    \
      } /* end namespace Functown */                                                            \
                                                                                                \
      /* Disable the functor if the library is not present or the symbol not found. */          \
      void CAT(setFunctorStatus_,NAME)()                                                        \
      {                                                                                         \
        if(!present)                                                                            \
        {                                                                                       \
          Functown::NAME.setStatus(-1);                                                         \
        }                                                                                       \
        else if(dlerror() != NULL)                                                              \
        {                                                                                       \
          std::ostringstream err;                                                               \
          err << "Library symbol " << SYMBOLNAME << " not found."  << std::endl                 \
              << "The functor generated for this symbol will get status=-2" << std::endl;       \
          backend_warning().raise(LOCAL_INFO, err.str());                                       \
          Functown::NAME.setStatus(-2);                                                         \
        }                                                                                       \
      }                                                                                         \
                                                                                                \
      /* Set up the ini code object to execute the functor status-setting routine. */           \
      namespace ini                                                                             \
      {                                                                                         \
        ini_code CAT(ini_for_setFunctorStatus_,NAME)(&CAT(setFunctorStatus_,NAME));             \
      }                                                                                         \
                                                                                                \
      /* Set the allowed model properties of the functor. */                                    \
      SET_ALLOWED_MODELS(NAME, MODELS)                                                          \
                                                                                                \
    } /* end namespace BACKENDNAME_SAFE_VERSION */                                              \
  } /* end namespace Backends */                                                                \
                                                                                                \
  /* Create the safe pointer to the 'in use' flag of the functor. */                            \
  MAKE_INUSE_POINTER(NAME)                                                                      \
                                                                                                \
} /* end namespace Gambit*/                                                


/* Retrieve a pointer to a function from a shared library. */
#define LOAD_BACKEND_FUNCTION(NAME, SYMBOLNAME)                                                 \
      /* Declare a function that can be used to get the pointer to the backend function. */     \
      NAME##_type CAT(constructFuncPointer_,NAME)()                                             \
      {                                                                                         \
        /* Obtain a void pointer (pSym) to the library symbol. */                               \
        /* -- First clear error code by calling dlerror() */                                    \
        dlerror();                                                                              \
        /* -- Obtain pointer from symbol */                                                     \
        pSym.ptr = dlsym(pHandle BOOST_PP_COMMA() SYMBOLNAME);                                  \
        NAME##_type NAME = reinterpret_cast<NAME##_type>(pSym.fptr);                            \
        /* Hand over the pointer */                                                             \
        return NAME;                                                                            \
      }                                                                                         \
      /* Declare a pointer NAME of type NAME_type */                                            \
      const NAME##_type NAME = CAT(constructFuncPointer_,NAME)();                               \
      
   
/// Supplemenentary backend function macro
#define BE_FUNCTION_I_SUPP(NAME)                                                                \
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                 \
    {                                                                                           \
                                                                                                \
      void CAT(constructFuncPointer_supp_,NAME)()                                               \
      {                                                                                         \
        /* Register functor. */                                                                 \
        Core().registerBackendFunctor(Functown::NAME);                                          \
      }                                                                                         \
                                                                                                \
      /* The code within the void function 'constructFuncPointer_supp_NAME'                     \
         is executed when we create the following instance of                                   \
         the 'ini_code' struct. */                                                              \
      namespace ini                                                                             \
      {                                                                                         \
        ini_code CAT(NAME,_supp)(&CAT(constructFuncPointer_supp_,NAME));                        \
      }                                                                                         \
                                                                                                \
    } /* end namespace BACKENDNAME_SAFE_VERSION */                                              \
  } /* end namespace Backends */                                                                \
} /* end namespace Gambit */


// Determine whether to make registration calls to the Core or not in BE_CONV_FUNCTION, depending on STANDALONE flag 
#ifdef STANDALONE
  #define BE_CONV_FUNCTION_FULL(NAME, TYPE, ARGSLIST, CAPABILITY, MODELS)                       \
          BE_CONV_FUNCTION_MAIN(NAME, TYPE, ARGSLIST, CAPABILITY, MODELS)
#else
  #define BE_CONV_FUNCTION_FULL(NAME, TYPE, ARGSLIST, CAPABILITY, MODELS)                       \
          BE_CONV_FUNCTION_MAIN(NAME, TYPE, ARGSLIST, CAPABILITY, MODELS)                       \
          BE_CONV_FUNCTION_SUPP(NAME)
#endif


/// \name Main wrapping macro for convenience functions
/// BE_CONV_FUNCTION(NAME, TYPE, ARGSLIST, CAPABILITY, [(MODELS)]) is the macro used 
/// for wrapping convenience functions in backend functors.
#define BE_CONV_FUNCTION_MAIN(NAME, TYPE, ARGSLIST, CAPABILITY, MODELS)                         \
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                 \
    {                                                                                           \
      /* Forward declare function */                                                            \
      namespace { TYPE NAME(STRIP_PARENS(CONVERT_VARIADIC_ARG(ARGSLIST))); }                    \
      /* Create functor object */                                                               \
      namespace Functown                                                                        \
      {                                                                                         \
        backend_functor<TYPE(*)CONVERT_VARIADIC_ARG(ARGSLIST), TYPE                             \
         INSERT_NONEMPTY(STRIP_VARIADIC_ARG(ARGSLIST))> NAME(                                   \
         Gambit::Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION)::NAME,                             \
         STRINGIFY(NAME),                                                                       \
         CAPABILITY,                                                                            \
         STRINGIFY(TYPE) STRINGIFY(CONVERT_VARIADIC_ARG(ARGSLIST)),                             \
         STRINGIFY(BACKENDNAME),                                                                \
         STRINGIFY(VERSION),                                                                    \
         STRINGIFY(SAFE_VERSION)  BOOST_PP_COMMA()                                              \
         Models::ModelDB());                                                                    \
      } /* end namespace Functown */                                                            \
      /* Set the allowed model properties of the functor. */                                    \
      SET_ALLOWED_MODELS(NAME, MODELS)                                                          \
    }                                                                                           \
  }                                                                                             \
  /* Create the safe pointer to the 'in use' flag of the functor. */                            \
  MAKE_INUSE_POINTER(NAME)                                                                      \
}                                                                                               \

/// \name Supplementary wrapping macro for convenience functions
#define BE_CONV_FUNCTION_SUPP(NAME)                                                             \
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                 \
    {                                                                                           \
                                                                                                \
      void CAT(constructFuncPointer_,NAME)()                                                    \
      {                                                                                         \
        Core().registerBackendFunctor(Functown::NAME);                                          \
      }                                                                                         \
                                                                                                \
      namespace ini                                                                             \
      {                                                                                         \
        ini_code CAT(NAME,_supp)(&CAT(constructFuncPointer_,NAME));                             \
      }                                                                                         \
                                                                                                \
    }                                                                                           \
  }                                                                                             \
}                                                                                               \

#endif // __BACKEND_MACROS_HPP__
