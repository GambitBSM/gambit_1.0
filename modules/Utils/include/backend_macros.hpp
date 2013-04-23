/*
 * General macros for loading a shared library
 * and constructing pointers to the variables and functions 
 * within the library. 
 * 
 * \author Anders Kvellestad
 * \date 2013-03-26
 *  
 * Modified: 2013-04-05
 */

#ifndef __BACKEND_GENERAL_HPP__
#define __BACKEND_GENERAL_HPP__

#include <iostream>
#include <string>
#include <functors.hpp>
#include <util_macros.hpp>
#include <util_classes.hpp>

#include "dlfcn.h"


//
// Macro containing initialization code
//
#define LOAD_LIBRARY                                                        \
namespace GAMBIT                                                          \
{                                                                           \
  namespace Backends                                                        \
  {                                                                         \
    namespace BACKENDNAME                                                  \
    {                                                                       \
                                                                            \
      void * pHandle;                                                      \
      void * pSym;                                                         \
                                                                            \
      void loadLibrary()                                                   \
      {                                                                     \
        pHandle = dlmopen(LM_ID_NEWLM, LIBPATH, RTLD_LAZY);                 \
        if(not pHandle) { std::cout << dlerror() << std::endl; }           \
      }                                                                     \
                                                                            \
      /*The code within the void function 'loadLibrary' is executed         \  
        when we create the following instance of the 'ini_code' struct. */  \
      namespace ini                                                        \
      {                                                                     \
        ini_code BACKENDNAME(&loadLibrary);                                \
      }                                                                     \
                                                                            \
    } /* end namespace BACKENDNAME */                                       \
  } /* end namespace Backends */                                             \
} /* end namespace GAMBIT */                                                \



//
// Macro for constructing pointers to library variables,
// defining simple 'get/set' functions and
// wrapping these functions in backend functors.
//
#define BE_VARIABLE(NAME, TYPE, SYMBOLNAME, POINTERNAME)                     \
namespace GAMBIT                                                           \
{                                                                            \
  namespace Backends                                                         \
  {                                                                          \
    namespace BACKENDNAME                                                   \
    {                                                                        \
                                                                             \
      TYPE * POINTERNAME;                                                    \
                                                                             \
      void CAT(constructVarPointer_,NAME)()                                 \
      {                                                                      \
        pSym = dlsym(pHandle, SYMBOLNAME);                                   \
        POINTERNAME = reinterpret_cast<TYPE*>(pSym);                       \
      }                                                                      \
                                                                             \
      /* The code within the void function 'constructVarPointer_NAME'        \
         is executed when we create the following instance of                \
         the 'ini_code' struct. */                                           \
      namespace ini                                                         \
      {                                                                      \
        ini_code NAME(&CAT(constructVarPointer_,NAME));                     \
      }                                                                      \
                                                                             \
      /* Construct 'get' function */                                         \
      TYPE get##NAME() { return *POINTERNAME; }                             \
                                                                             \
      /* Construct 'set' function */                                         \
      void set##NAME(TYPE a) { *POINTERNAME = a; }                          \
                                                                             \
                                                                             \
      /* Create functor objects                                               \
         FIXME : the way 'capability' is specified is rather pointless atm */ \
      namespace Functown                                                     \
      {                                                                       \
        auto get##NAME = makeBackendFunctor<TYPE>( GAMBIT::Backends::BACKENDNAME::get##NAME,   \
                                                        STRINGIFY(NAME),                     \
                                                        STRINGIFY( CAT(NAME, _capability) ), \
                                                        STRINGIFY(TYPE),                     \
                                                        STRINGIFY(BACKENDNAME),             \
                                                        STRINGIFY(VERSION) );                \
                                                                                             \
        auto set##NAME = makeBackendFunctor<void>( GAMBIT::Backends::BACKENDNAME::set##NAME,  \
                                                        STRINGIFY(NAME),                      \
                                                        STRINGIFY( CAT(NAME, _capability) ),  \
                                                        STRINGIFY(TYPE),                      \
                                                        STRINGIFY(BACKENDNAME),              \
                                                        STRINGIFY(VERSION) );                 \
                                                                                              \
      } /* end namespace Functown */                                         \
                                                                             \
    } /* end namespace BACKENDNAME */                                        \
  } /* end namespace Backends */                                              \
} /* end namespace GAMBIT */                                                 \



//
// Macro for constructing pointers to library functions
// and wrapping function pointers in backend functors.
//
#define BE_FUNCTION(NAME, TYPE, ARGSLIST, SYMBOLNAME)                         \
namespace GAMBIT                                                            \
{                                                                             \
  namespace Backends                                                         \
  {                                                                           \
    namespace BACKENDNAME                                                  \
    {                                                                         \
                                                                              \
      /* Define a type NAME_type to be a suitable function pointer. */        \
      typedef TYPE (*NAME##_type) ARGSLIST;                                  \
      /* Declare a pointer NAME of type NAME_type */                          \
      NAME##_type NAME;                                                       \
                                                                              \
      void CAT(constructFuncPointer_,NAME)()                                 \
      {                                                                       \
        /* Obtain a void pointer (pSym) to the library symbol. */             \
        pSym = dlsym(pHandle, SYMBOLNAME);                                    \
        /* Convert it to type (NAME_type) and assign                          \
           it to pointer NAME. */                                             \
        NAME = reinterpret_cast<NAME##_type>(pSym);                         \
      }                                                                       \
                                                                              \
      /* The code within the void function 'constructVarPointer_NAME'         \
         is executed when we create the following instance of                 \
         the 'ini_code' struct. */                                            \
      namespace ini                                                          \
      {                                                                       \
        ini_code NAME(&CAT(constructFuncPointer_,NAME));                     \
      }                                                                       \
                                                                              \
      /* Create functor object                                                \
         FIXME : the way 'capability' is specified is rather pointless atm */ \
      namespace Functown                                                     \
      {                                                                       \
        auto NAME = makeBackendFunctor<TYPE>( GAMBIT::Backends::BACKENDNAME::NAME, \
                                               STRINGIFY(NAME),                \
                                               STRINGIFY( CAT(NAME, _capability) ),  \
                                               STRINGIFY(TYPE),                \
                                               STRINGIFY(BACKENDNAME),        \
                                               STRINGIFY(VERSION) );            \
      } /* end namespace Functown */                                          \
                                                                              \
    } /* end namespace BACKENDNAME */                                         \
  } /* end namespace Backends */                                               \
} /* end namespace GAMBIT */                                                  \



//
// Macro for wrapping convenience functions in backend functors.
//
#define BE_CONV_FUNCTION(NAME, TYPE)                                          \
namespace GAMBIT                                                            \
{                                                                             \
  namespace Backends                                                         \
  {                                                                           \
    namespace BACKENDNAME                                                  \
    {                                                                         \
                                                                              \
      /* Create functor object                                                \
         FIXME : the way 'capability' is specified is rather pointless atm */ \
      namespace Functown                                                     \
      {                                                                       \
        auto NAME = makeBackendFunctor<TYPE>( GAMBIT::Backends::BACKENDNAME::NAME, \
                                               STRINGIFY(NAME),                \
                                               STRINGIFY( CAT(NAME, _capability) ),   \
                                               STRINGIFY(TYPE),                \
                                               STRINGIFY(BACKENDNAME),       \
                                               STRINGIFY(VERSION) );          \
      } /* end namespace Functown */                                          \
                                                                              \
    } /* end namespace BACKENDNAME */                                         \
  } /* end namespace Backends */                                               \
} /* end namespace GAMBIT */                                                  \


#endif // __BACKEND_GENERAL_HPP__
