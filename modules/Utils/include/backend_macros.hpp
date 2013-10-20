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
///  \date 2013 Mar, Apr
///
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 June
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2013 July
///
///  *********************************************

#ifndef __BACKEND_MACROS_HPP__
#define __BACKEND_MACROS_HPP__

#include <iostream>
#include <string>
#include <dlfcn.h>

#include "functors.hpp"
#include "create_core.hpp"
#include "util_macros.hpp"
#include "util_classes.hpp"

#ifndef HAVE_MAC
#define PHANDLE_DLMOPEN dlmopen(LM_ID_NEWLM, LIBPATH, RTLD_LAZY)  
#else
#define PHANDLE_DLMOPEN dlopen(LIBPATH, RTLD_LAZY)  
#endif

/// Macro containing initialization code
#define LOAD_LIBRARY                                                        \
namespace Gambit                                                            \
{                                                                           \
  namespace Backends                                                        \
  {                                                                         \
    namespace BACKENDNAME                                                   \
    {                                                                       \
                                                                            \
      void * pHandle;                                                       \
      void * pSym;                                                          \
                                                                            \
      void loadLibrary()                                                    \
      {                                                                     \
        /*pHandle = dlmopen(LM_ID_NEWLM, LIBPATH, RTLD_LAZY);    */             \
        pHandle = PHANDLE_DLMOPEN;                                          \
        if(not pHandle) { std::cout << dlerror() << std::endl; }            \
        else std::cout << "Succeeded in loading " << LIBPATH << std::endl;  \
      }                                                                     \
                                                                            \
      /*The code within the void function 'loadLibrary' is executed         \
        when we create the following instance of the 'ini_code' struct. */  \
      namespace ini                                                         \
      {                                                                     \
        ini_code BACKENDNAME(&loadLibrary);                                 \
      }                                                                     \
                                                                            \
    } /* end namespace BACKENDNAME */                                       \
  } /* end namespace Backends */                                            \
} /* end namespace Gambit */                                                \


/// Macro for constructing pointers to library variables,
/// defining simple 'get/set' functions and
/// wrapping these functions in backend functors.
#define BE_VARIABLE(NAME, TYPE, SYMBOLNAME)                                 \
namespace Gambit                                                            \
{                                                                           \
  namespace Backends                                                        \
  {                                                                         \
    namespace BACKENDNAME                                                   \
    {                                                                       \
                                                                            \
      TYPE * NAME;                                                          \
                                                                            \
      /* Construct 'get' function */                                        \
      TYPE get##NAME() { return *NAME; }                                    \
                                                                            \
      /* Construct 'set' function */                                        \
      void set##NAME(TYPE a) { *NAME = a; }                                 \
                                                                            \
                                                                            \
      /* Create functor objects */                                          \
      namespace Functown                                                    \
      {                                                                     \
        auto get##NAME = makeBackendFunctor<TYPE>(                          \
         Gambit::Backends::BACKENDNAME::get##NAME,                          \
         STRINGIFY(NAME),                                                   \
         STRINGIFY( CAT(BACKENDNAME,_##get##NAME##_capability) ),           \
         STRINGIFY(TYPE),                                                   \
         STRINGIFY(BACKENDNAME),                                            \
         STRINGIFY(VERSION) );                                              \
                                                                            \
        auto set##NAME = makeBackendFunctor<void>(                          \
         Gambit::Backends::BACKENDNAME::set##NAME,                          \
         STRINGIFY(NAME),                                                   \
         STRINGIFY( CAT(BACKENDNAME,_##set##NAME##_capability) ),           \
         "void",                                                            \
         STRINGIFY(BACKENDNAME),                                            \
         STRINGIFY(VERSION) );                                              \
                                                                            \
      } /* end namespace Functown */                                        \
                                                                            \
      void CAT(constructVarPointer_,NAME)()                                 \
      {                                                                     \
        pSym = dlsym(pHandle, SYMBOLNAME);                                  \
        NAME = reinterpret_cast<TYPE*>(pSym);                               \
        Core.registerBackendFunctor(Functown::get##NAME);                   \
        Core.registerBackendFunctor(Functown::set##NAME);                   \
      }                                                                     \
                                                                            \
      /* The code within the void function 'constructVarPointer_NAME'       \
         is executed when we create the following instance of               \
         the 'ini_code' struct. */                                          \
      namespace ini                                                         \
      {                                                                     \
        ini_code NAME(&CAT(constructVarPointer_,NAME));                     \
      }                                                                     \
                                                                            \
    } /* end namespace BACKENDNAME */                                       \
  } /* end namespace Backends */                                            \
} /* end namespace Gambit */                                                \


/// Draft version of new macro for constructing pointers to library variables,
/// to work with reindexing.  Not at all finished, just ignore this for now...
#define BE_VARIABLE_DRAFT(NAME, TYPE, SYMBOLNAME, FFLAG)                    \
/*ASSERT(FFLAG == FORTRAN_STRUCTURE)*/                                      \
namespace Gambit                                                            \
{                                                                           \
  namespace Backends                                                        \
  {                                                                         \
    namespace BACKENDNAME                                                   \
    {                                                                       \
                                                                            \
      TYPE::fortranPart * NAME##fortranPartPtr;                             \
                                                                            \
      /* Construct 'get' function */                                        \
      TYPE get##NAME() { return TYPE(NAME##fortranPartPtr); }               \
                                                                            \
      /* Construct 'set' function */                                        \
      void set##NAME(TYPE a) { *NAME##fortranPartPtr = a.myFortranPart; }   \
                                                                            \
                                                                            \
      /* Create functor objects */                                          \
      namespace Functown                                                    \
      {                                                                     \
        auto get##NAME = makeBackendFunctor<TYPE>(                          \
         Gambit::Backends::BACKENDNAME::get##NAME,                          \
         STRINGIFY(NAME),                                                   \
         STRINGIFY( CAT(BACKENDNAME,_##get##NAME##_capability) ),           \
         STRINGIFY(TYPE),                                                   \
         STRINGIFY(BACKENDNAME),                                            \
         STRINGIFY(VERSION) );                                              \
                                                                            \
        auto set##NAME = makeBackendFunctor<void>(                          \
         Gambit::Backends::BACKENDNAME::set##NAME,                          \
         STRINGIFY(NAME),                                                   \
         STRINGIFY( CAT(BACKENDNAME,_##set##NAME##_capability) ),           \
         "void",                                                            \
         STRINGIFY(BACKENDNAME),                                            \
         STRINGIFY(VERSION) );                                              \
                                                                            \
      } /* end namespace Functown */                                        \
                                                                            \
      void CAT(constructVarPointer_,NAME)()                                 \
      {                                                                     \
        pSym = dlsym(pHandle, SYMBOLNAME);                                  \
        NAME##fortranPartPtr = reinterpret_cast<TYPE::fortranPart*>(pSym);  \
        Core.registerBackendFunctor(Functown::get##NAME);                   \
        Core.registerBackendFunctor(Functown::set##NAME);                   \
      }                                                                     \
                                                                            \
      /* The code within the void function 'constructVarPointer_NAME'       \
         is executed when we create the following instance of               \
         the 'ini_code' struct. */                                          \
      namespace ini                                                         \
      {                                                                     \
        ini_code NAME(&CAT(constructVarPointer_,NAME));                     \
      }                                                                     \
                                                                            \
    } /* end namespace BACKENDNAME */                                       \
  } /* end namespace Backends */                                            \
} /* end namespace Gambit */                                                \


/// \name Wrapping macros for backend-defined functions
///
/// BE_FUNCTION(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY) is the
/// macro used for constructing pointers to library functions and 
/// wrapping function pointers in backend functors.
///
/// The fifth argument (CAPABILITY) is optional.
/// If left out, it defaults to "[backend name]_[function name]_capability".
/// @{
#define BE_FUNCTION_4(NAME, TYPE, ARGSLIST, SYMBOLNAME)                     \
  BE_FUNCTION_IMPL(NAME, TYPE, ARGSLIST, SYMBOLNAME,                        \
   STRINGIFY(CAT(BACKENDNAME,_##NAME##_##capability)))                      \

#define BE_FUNCTION_5(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY)         \
  BE_FUNCTION_IMPL(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY)            \

#define BE_FUNCTION(...) VARARG(BE_FUNCTION, __VA_ARGS__)

#define BE_FUNCTION_IMPL(NAME, TYPE, ARGSLIST, SYMBOLNAME, CAPABILITY)      \
namespace Gambit                                                            \
{                                                                           \
  namespace Backends                                                        \
  {                                                                         \
    namespace BACKENDNAME                                                   \
    {                                                                       \
                                                                            \
      /* Define a type NAME_type to be a suitable function pointer. */      \
      typedef TYPE (*NAME##_type) ARGSLIST;                                 \
      /* Declare a pointer NAME of type NAME_type */                        \
      NAME##_type NAME;                                                     \
                                                                            \
      /* Create functor object */                                           \
      namespace Functown                                                    \
      {                                                                     \
        auto NAME = makeBackendFunctor<TYPE>(                               \
         Gambit::Backends::BACKENDNAME::NAME,                               \
         STRINGIFY(NAME),                                                   \
         CAPABILITY,                                                        \
         STRINGIFY(TYPE),                                                   \
         STRINGIFY(BACKENDNAME),                                            \
         STRINGIFY(VERSION) );                                              \
      } /* end namespace Functown */                                        \
                                                                            \
      void CAT(constructFuncPointer_,NAME)()                                \
      {                                                                     \
        /* Obtain a void pointer (pSym) to the library symbol. */           \
        pSym = dlsym(pHandle, SYMBOLNAME);                                  \
        /* Convert it to type (NAME_type) and assign                        \
           it to pointer NAME. */                                           \
        NAME = reinterpret_cast<NAME##_type>(pSym);                         \
        Functown::NAME.updatePointer(NAME);                                 \
        Core.registerBackendFunctor(Functown::NAME);                        \
      }                                                                     \
                                                                            \
      /* The code within the void function 'constructVarPointer_NAME'       \
         is executed when we create the following instance of               \
         the 'ini_code' struct. */                                          \
      namespace ini                                                         \
      {                                                                     \
        ini_code NAME(&CAT(constructFuncPointer_,NAME));                    \
      }                                                                     \
                                                                            \
    } /* end namespace BACKENDNAME */                                       \
  } /* end namespace Backends */                                            \
} /* end namespace Gambit */                                                \
/// @}


/// \name Wrapping macros for convenience functions
///
/// BE_CONV_FUNCTION(NAME, TYPE, CAPABILITY) is the macro used for wrapping 
/// convenience functions in backend functors.
///
/// The third argument (CAPABILITY) is optional.
/// If left out, it defaults to "[backend name]_[function name]_capability".
/// @{
#define BE_CONV_FUNCTION_2(NAME, TYPE)                                      \
  BE_CONV_FUNCTION_IMPL(NAME, TYPE,                                         \
   STRINGIFY(CAT(BACKENDNAME,_##NAME##_##capability)))                      \

#define BE_CONV_FUNCTION_3(NAME, TYPE, CAPABILITY)                          \
  BE_CONV_FUNCTION_IMPL(NAME, TYPE, CAPABILITY)                             \

#define BE_CONV_FUNCTION(...) VARARG(BE_CONV_FUNCTION, __VA_ARGS__)

#define BE_CONV_FUNCTION_IMPL(NAME, TYPE, CAPABILITY)                       \
namespace Gambit                                                            \
{                                                                           \
  namespace Backends                                                        \
  {                                                                         \
    namespace BACKENDNAME                                                   \
    {                                                                       \
                                                                            \
      /* Create functor object */                                           \
      namespace Functown                                                    \
      {                                                                     \
        auto NAME = makeBackendFunctor<TYPE>(                               \
         Gambit::Backends::BACKENDNAME::NAME,                               \
         STRINGIFY(NAME),                                                   \
         CAPABILITY,                                                        \
         STRINGIFY(TYPE),                                                   \
         STRINGIFY(BACKENDNAME),                                            \
         STRINGIFY(VERSION) );                                              \
      } /* end namespace Functown */                                        \
                                                                            \
      void CAT(constructFuncPointer_,NAME)()                                \
      {                                                                     \
        Core.registerBackendFunctor(Functown::NAME);                        \
      }                                                                     \
                                                                            \
      namespace ini                                                         \
      {                                                                     \
        ini_code NAME(&CAT(constructFuncPointer_,NAME));                    \
      }                                                                     \
                                                                            \
    } /* end namespace BACKENDNAME */                                       \
  } /* end namespace Backends */                                            \
} /* end namespace Gambit */                                                \
/// @}


#endif // __BACKEND_GENERAL_HPP__
