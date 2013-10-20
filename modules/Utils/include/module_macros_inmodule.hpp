//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Generic observable and likelihood function 
///  macro definitions, for inclusion from actual
///  module source code.
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
//
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 Jan, Feb
///  *********************************************

#ifndef __module_macros_inmodule_hpp__
#define __module_macros_inmodule_hpp__

#include "functors.hpp"
#include "extern_core.hpp"
#include "util_macros.hpp"
#include "module_macros_common.hpp"
#include <boost/preprocessor/control/if.hpp>

/// \name Dependency-retrieval and info macros
/// These are used from within module function source code to obtain the actual
/// calculated values of dependencies, and probe details of the specific
/// module functions that have been connected by the dependency resolver in order
/// to fulfill dependencies.
/// @{

/// Retrive the name of the function that fills \em DEP for the current function
#define GET_DEP_FUNCNAME(DEP)      Dependencies::DEP->name()
/// Retrive the name of the module that provides the function that fills \em DEP for the current function
#define GET_DEP_MODULE(DEP)        Dependencies::DEP->origin()
/// @}


/// \name Backend-requirement-retrieval and info macros
/// These are used from within module function source code to obtain the actual
/// calculated values of backend requirement, and probe details of the specific
/// backend functions that have been connected by the dependency resolver in order
/// to fulfill backend requirements.
/// @{

/// Obtain the backend requirement \em BE_REQ of the current function, with arguments (...)
#define GET_BE_RESULT(BE_REQ, ...) Backend_Reqs::BE_REQ(__VA_ARGS__)
/// Obtain the name of the backend function that fills the requirement \em BE_REQ of the current function
#define GET_BE_FUNCNAME(BE_REQ)    Backend_Reqs::CAT(BE_REQ,_baseptr)->name()
/// Obtain the name of the backend that fills the requirement \em BE_REQ of the current function
#define GET_BE_PACKAGE(BE_REQ)     Backend_Reqs::CAT(BE_REQ,_baseptr)->origin()
/// Obtain the version of the backend that fills the requirement \em BE_REQ of the current function
#define GET_BE_VERSION(BE_REQ)     Backend_Reqs::CAT(BE_REQ,_baseptr)->version()
/// Obtain the underlying function pointer to the backend function that fills the requirement \em BE_REQ of the current function
#define GET_BE_POINTER(BE_REQ, ...)  Backend_Reqs::CAT(BE_REQ,_get_function_ptr)<__VA_ARGS__>()
/// @}


/// \name Rollcall macros
/// These are called from within rollcall headers in each module to 
/// register module functions, their capabilities, return types, dependencies,
/// and backend requirements.
/// @{

// Redirect the rollcall macros to their in-module variants
#define START_MODULE                                      DUMMY
#define START_CAPABILITY                                  DUMMY
#define DECLARE_FUNCTION(TYPE, CAN_MANAGE)                MODULE_DECLARE_FUNCTION(TYPE, CAN_MANAGE)
#define DEPENDENCY(DEP, TYPE)                             MODULE_DEPENDENCY(DEP, TYPE)
#define NEEDS_MANAGER_WITH_CAPABILITY(LOOPMAN)            DUMMYARG(LOOPMAN)                                  
#define ALLOWED_MODEL(MODEL)                              MODULE_ALLOWED_MODEL(MODEL)
#define START_BACKEND_REQ(TYPE)                           MODULE_START_BACKEND_REQ(TYPE)
#define BE_OPTION(BACKEND,VERSTRING)                      DUMMYARG(BACKEND,VERSTRING)
#define START_CONDITIONAL_DEPENDENCY(TYPE)                MODULE_START_CONDITIONAL_DEPENDENCY(TYPE)
#define ACTIVATE_DEP_BE(BACKEND_REQ, BACKEND, VERSTRING)  DUMMYARG(BACKEND_REQ, BACKEND, VERSTRING)
#define ACTIVATE_FOR_MODELS(...)                          DUMMYARG(__VA_ARGS__)

/// @}


//  *******************************************************************************
/// \name In-module rollcall macros
/// @{

/// Redirection of \link START_FUNCTION() START_FUNCTION\endlink when invoked 
/// from within a module core.
#define MODULE_DECLARE_FUNCTION(TYPE, CAN_MANAGE)                              \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
                                                                               \
      /* Let the module source know that this functor is declared by the core, \
      and set up a helper function to call its iterate method if it is able to \
      manage loops. */                                                         \
      namespace Functown                                                       \
      {                                                                        \
        extern module_functor<TYPE> FUNCTION;                                  \
        BOOST_PP_IIF(CAN_MANAGE,                                               \
          void CAT(FUNCTION,_iterate)(int iteration)                           \
          {                                                                    \
            FUNCTION.iterate(iteration);                                       \
          }                                                                    \
        ,)                                                                     \
      }                                                                        \
                                                                               \
      /* Create pointers to the iteration number and the single iteration of   \
      the loop that can be executed by this functor. */                        \
      namespace SafePointers                                                   \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          extern std::map<str, safe_ptr<double> > Param;                       \
          namespace Loop                                                       \
          {                                                                    \
            safe_ptr<int> iteration = Functown::FUNCTION.iterationPtr();       \
            BOOST_PP_IIF(CAN_MANAGE,                                           \
              void (*executeIteration)(int)= &Functown::CAT(FUNCTION,_iterate);\
            ,)                                                                 \
          }                                                                    \
        }                                                                      \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \


/// Redirection of DEPENDENCY(DEP, TYPE) when invoked from within a module.
#define MODULE_DEPENDENCY(DEP, TYPE)                                           \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
                                                                               \
      /* Create a pointer to the dependency functor. To be filled by the       \
      dependency resolver during runtime. */                                   \
      namespace Dependencies                                                   \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          extern module_functor<TYPE>* DEP;                                    \
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Create a safe pointer to the dependency result. To be filled          \
      automatically at runtime when the dependency is resolved. */             \
      namespace SafePointers                                                   \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          BOOST_PP_IIF(IS_TYPE(void,TYPE),,                                    \
           namespace Dep { extern safe_ptr<TYPE> DEP; } )                      \
        }                                                                      \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \


/// Redirection of ALLOW_MODEL when invoked from within a module.
#define MODULE_ALLOWED_MODEL(MODEL)                                            \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
                                                                               \
      /* Create a pointer to the model functor. To be filled by the            \
      dependency resolver during runtime. */                                   \
      namespace Parameters                                                     \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          extern module_functor<ModelParameters>* MODEL;                       \
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Create a safe pointer to the model parameters result. To be filled    \
      automatically at runtime when the dependency is resolved. */             \
      namespace SafePointers                                                   \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          namespace Model {extern safe_ptr<ModelParameters> MODEL; }           \
        }                                                                      \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \


/// Redirection of START_BACKEND_REQ(TYPE) when invoked from within a module.
#define MODULE_START_BACKEND_REQ(TYPE)                                         \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
                                                                               \
      namespace Backend_Reqs                                                   \
      {                                                                        \
                                                                               \
        namespace FUNCTION                                                     \
        {                                                                      \
                                                                               \
          /* Declare a (base) pointer to the backend function functor.  To be  \
          filled by the dependency resolver at runtime. */                     \
          extern functor* CAT(BACKEND_REQ,_baseptr);                           \
                                                                               \
          /* Set up an empty alias for the backend requirement */              \
          template<typename GENERIC_TYPE, typename... ARGS>                    \
          GENERIC_TYPE BACKEND_REQ(ARGS ...args)                               \
          {                                                                    \
            cout<<"Incorrect return type implied for backend"<<endl;           \
            cout<<"requirement BACKEND_REQ (function"<<endl;                   \
            cout<<"FUNCTION, module MODULE). Exiting..."<<endl;                \
            /** FIXME \todo Throw a real error here. */                        \
          }                                                                    \
                                                                               \
          /* Set up a working alias that casts the (base) pointer to the       \
          backend functor to the appropriate backend_functor type, and then    \
          dereferences it to call the actual backend function. */              \
          template<typename ...ARGS>                                           \
          TYPE BACKEND_REQ(ARGS&& ...args)                                     \
          {                                                                    \
            typedef backend_functor<TYPE, ARGS...> be_functor;                 \
            be_functor* myptr;                                                 \
            if (Core.safe_mode())                                              \
            {                                                                  \
              myptr = dynamic_cast<be_functor*>(CAT(BACKEND_REQ,_baseptr));    \
              if (myptr == 0)                                                  \
              {                                                                \
                cout<<endl<<"Error: Null returned from dynamic cast in ";      \
                cout<<"attempting to retrieve backend requirement"<<endl;      \
                cout<<STRINGIFY(BACKEND_REQ)<<" (function ";                   \
                cout<<STRINGIFY(FUNCTION)<<", module "<<STRINGIFY(MODULE);     \
                cout<<"). Probably you have passed arguments of the "<<endl;   \
                cout<<"wrong type(s) when calling this function."<<endl;       \
                cout<<"The return type of the backend function is supposed ";  \
                cout<<"to be "<<STRINGIFY(TYPE)<<endl;                         \
                /** FIXME \todo throw real error here */                       \
              }                                                                \
            }                                                                  \
            else                                                               \
            {                                                                  \
              myptr = static_cast<be_functor*>(CAT(BACKEND_REQ,_baseptr));     \
            }                                                                  \
            BOOST_PP_IIF(IS_TYPE(void,TYPE),,return)                           \
             (*myptr)(std::forward<ARGS>(args)...);                            \
                                                                               \
          }                                                                    \
                                                                               \
          /* Set up a working alias that casts the (base) pointer to the       \
          backend functor to the appropriate backend_functor type, and then    \
          returns the underlying pointer to the actual backend function. */    \
          template<typename ...ARGS>                                           \
          /* Horrifically complicated syntax to return a function ptr */       \
          TYPE(*CAT(BACKEND_REQ,_get_function_ptr)())(ARGS...)                 \
          {                                                                    \
            typedef backend_functor<TYPE, ARGS...> be_functor;                 \
            be_functor* myptr;                                                 \
            if (Core.safe_mode())                                              \
            {                                                                  \
              myptr = dynamic_cast<be_functor*>(CAT(BACKEND_REQ,_baseptr));    \
              if (myptr == 0)                                                  \
              {                                                                \
                cout<<endl<<"Error: Null returned from dynamic cast in ";      \
                cout<<"attempting to retrieve underlying function pointer ";   \
                cout<<endl<<"for backend requirement"<<endl;                   \
                cout<<STRINGIFY(BACKEND_REQ)<<" (function ";                   \
                cout<<STRINGIFY(FUNCTION)<<", module "<<STRINGIFY(MODULE);     \
                cout<<"). Probably you have passed arguments of the "<<endl;   \
                cout<<"wrong type(s) when calling this function."<<endl;       \
                cout<<"The return type of the backend function is supposed ";  \
                cout<<"to be "<<STRINGIFY(TYPE)<<endl;                         \
                /** FIXME \todo throw real error here */                       \
              }                                                                \
            }                                                                  \
            else                                                               \
            {                                                                  \
              myptr = static_cast<be_functor*>(CAT(BACKEND_REQ,_baseptr));     \
            }                                                                  \
            return myptr->handoutFunctionPointer();                            \
                                                                               \
          }                                                                    \
                                                                               \
        }                                                                      \
                                                                               \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \


/// Redirection of START_CONDITIONAL_DEPENDENCY(TYPE) when invoked from within 
/// a module.
#define MODULE_START_CONDITIONAL_DEPENDENCY(TYPE)                              \
  MODULE_DEPENDENCY(CONDITIONAL_DEPENDENCY, TYPE)                              \

/// @}

#endif // defined __module_macros_inmodule_hpp__ 

