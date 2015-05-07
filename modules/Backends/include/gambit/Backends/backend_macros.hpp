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
///  \date 2015 Feb
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

#include "gambit/Utils/util_macros.hpp"
#include "gambit/Utils/util_types.hpp"
#include "gambit/Utils/util_functions.hpp"
#include "gambit/Utils/standalone_error_handlers.hpp"
#include "gambit/Elements/types_rollcall.hpp"
#include "gambit/Elements/functors.hpp"
#include "gambit/Elements/module_macros_incore.hpp"
#include "gambit/Logs/log.hpp"
#include "gambit/Backends/ini_functions.hpp"
#ifndef STANDALONE
  #include "gambit/Core/ini_functions.hpp"
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
    namespace Pipes                                                         \
    {                                                                       \
      namespace CAT_4(BACKENDNAME,_,SAFE_VERSION,_init)                     \
      {                                                                     \
        static const str backendDir = Backends::backendInfo().              \
         path_dir(STRINGIFY(BACKENDNAME), STRINGIFY(VERSION));              \
      }                                                                     \
    }                                                                       \
    void CAT_4(BACKENDNAME,_,SAFE_VERSION,_init)()                          \
    {                                                                       \
      using namespace Pipes :: CAT_4(BACKENDNAME,_,SAFE_VERSION,_init) ;    \
      using namespace Backends :: CAT_3(BACKENDNAME,_,SAFE_VERSION) ;       \

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
  int CAT(MODEL,_OK) = vectorstr_push_back(allowed_models,STRINGIFY(MODEL));\
}                                                                           \
DONE                                                                        \
        
/// Set all the allowed models for a given backend functor.
#define SET_ALLOWED_MODELS(NAME, MODELS)                                    \
int CAT(allowed_models_set_,NAME) =                                         \
 set_allowed_models(Functown::NAME, allowed_models, STRINGIFY(MODELS));

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
          safe_ptr<bool> NAME = Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION) \
                                ::Functown::NAME.inUsePtr();                \
        }                                                                   \
      }                                                                     \
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
      int load = loadLibrary(STRINGIFY(BACKENDNAME), STRINGIFY(VERSION),    \
                             STRINGIFY(SAFE_VERSION), pHandle, present,     \
                             BOOST_PP_IF(DO_CLASSLOADING,true,false));      \
                                                                            \
      /* Register this backend with the Core if not running in standalone */\
      REGISTER_BACKEND(BACKENDNAME, VERSION, SAFE_VERSION)                  \
                                                                            \
      /* Register a LogTag for this backend with the logging system */      \
      int reg_log = register_backend_with_log(STRINGIFY(BACKENDNAME));      \
                                                                            \
      /* Make backend path easily available to convenience functions. */    \
      static const str backendDir = backendInfo().                          \
       path_dir(STRINGIFY(BACKENDNAME), STRINGIFY(VERSION));                \
    }                                                                       \
  }                                                                         \
}                                                                           \
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
#ifndef STANDALONE
  #define REGISTER_BACKEND(BE, VER, SAFEVER)                                \
   int CAT_4(BE,_,SAFEVER,_rego) =                                          \
    register_backend(STRINGIFY(BE), STRINGIFY(VER));                        
#else 
  #define REGISTER_BACKEND(BE, VER, SAFEVER) DUMMYARG(BE, VER, SAFEVER)   
#endif

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
      int CAT(registered_type_,BOOST_PP_SEQ_CAT(BOOST_PP_SEQ_TRANSFORM(APPEND_TOKEN,            \
       NS_SEP, BOOST_PP_TUPLE_ELEM(2,0,elem)))) =                                               \
       register_type(STRINGIFY(BACKENDNAME)STRINGIFY(VERSION),                                  \
         STRINGIFY(BOOST_PP_SEQ_FOR_EACH_I(TRAILING_NSQUALIFIER, ,                              \
         BOOST_PP_SEQ_SUBSEQ(BOOST_PP_TUPLE_ELEM(2,0,elem),0,                                   \
         BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(BOOST_PP_TUPLE_ELEM(2,0,elem)),1)))                     \
         BOOST_PP_SEQ_ELEM(BOOST_PP_SUB(BOOST_PP_SEQ_SIZE(BOOST_PP_TUPLE_ELEM(2,0,elem)),1),    \
         BOOST_PP_TUPLE_ELEM(2,0,elem))));                                                      \
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
                                                                                                \
      /* Define a type NAME_type to be a suitable function pointer. */                          \
      typedef ABSTRACT*(*CAT(NAME,_type))CONVERT_VARIADIC_ARG(ARGS);                            \
                                                                                                \
      /* Get the pointer to the function in the shared library. */                              \
      const CAT(NAME,_type) NAME =                                                              \
       load_backend_symbol<CAT(NAME,_type)>(pHandle, pSym, SYMBOLNAME);                         \
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
    }                                                                                           \
  }                                                                                             \
}                                                                                               \
                                                                                                \
namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                     \
{                                                                                               \
  /* Define the static function pointer in the wrapper class for this factory. */               \
  Gambit::Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION)::CAT(NAME,_type)                          \
   Gambit::Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION)::PTRNAME =                               \
   Gambit::Backends::handover_factory_pointer(STRINGIFY(BACKENDNAME), STRINGIFY(VERSION),       \
   STRINGIFY(NAME), STRINGIFY(BARENAME), STRINGIFY(CONVERT_VARIADIC_ARG(ARGS)),                 \
   SYMBOLNAME, Gambit::Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION)::present,                    \
   Gambit::Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION)::NAME,                                   \
   &Gambit::Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION)::CAT(backend_not_loaded_,NAME),         \
   &Gambit::Backends::CAT_3(BACKENDNAME,_,SAFE_VERSION)::CAT(factory_not_loaded_,NAME));        \
}                                                                                               \


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
      /* Set the variable pointer and the getptr function. */                 \
      TYPE* const NAME= load_backend_symbol<TYPE*>(pHandle, pSym, SYMBOLNAME);\
      TYPE* CAT(getptr,NAME)() { return NAME; }                               \
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
      /* Disable the functor if the library is missing or symbol not found. */\
      int CAT(vstatus_,NAME) = set_backend_functor_status(present,            \
       Functown::NAME, SYMBOLNAME);                                           \
                                                                              \
    } /* end namespace BACKENDNAME_SAFE_VERSION */                            \
  } /* end namespace Backends */                                              \
                                                                              \
  /* Create the safe pointer to the 'in use' flag of the functor. */          \
  MAKE_INUSE_POINTER(NAME)                                                    \
                                                                              \
} /* end namespace Gambit */                                                  \

/// Supplementary backend variable macro
#define BE_VARIABLE_I_SUPP(NAME)                                              \
namespace Gambit                                                              \
{                                                                             \
  namespace Backends                                                          \
  {                                                                           \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                               \
    {                                                                         \
      int CAT(vptr_supp_,NAME) = register_backend_functor(Functown::NAME);    \
    }                                                                         \
  }                                                                           \
}                                                                             \


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
      const NAME##_type NAME = load_backend_symbol<NAME##_type>(pHandle, pSym, SYMBOLNAME);     \
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
      int CAT(fstatus_,NAME) = set_backend_functor_status(present, Functown::NAME, SYMBOLNAME); \
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


/// Supplemenentary backend function macro
#define BE_FUNCTION_I_SUPP(NAME)                                                                \
namespace Gambit                                                                                \
{                                                                                               \
  namespace Backends                                                                            \
  {                                                                                             \
    namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)                                                 \
    {                                                                                           \
      int CAT(fptr_supp_,NAME) = register_backend_functor(Functown::NAME);                      \
    }                                                                                           \
  }                                                                                             \
}                                                                                               \


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
      int CAT(cfptr_supp_,NAME) = register_backend_functor(Functown::NAME);                     \
    }                                                                                           \
  }                                                                                             \
}                                                                                               \

#endif // __BACKEND_MACROS_HPP__
