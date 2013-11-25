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
///
///  \author Anders Kvellestad
///          (anders.kvellestad@fys.uio.no)
///  \date 2013 Nov
///  *********************************************

#ifndef __module_macros_inmodule_hpp__
#define __module_macros_inmodule_hpp__

#include "functors.hpp"
#include "extern_core.hpp"
#include "util_macros.hpp"
#include "module_macros_common.hpp"
#include <boost/preprocessor/control/if.hpp>
#include "safety_bucket.hpp"

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
#define GET_BE_RESULT(FUNCTION, BE_REQ, ...)    SafePointers::FUNCTION::BEreq::BE_REQ(__VA_ARGS__)
/// Obtain the name of the backend function that fills the requirement \em BE_REQ of the current function
#define GET_BE_FUNCNAME(FUNCTION, BE_REQ)       SafePointers::FUNCTION::BEreq::CAT(BE_REQ,_baseptr)->name()
/// Obtain the name of the backend that fills the requirement \em BE_REQ of the current function
#define GET_BE_PACKAGE(FUNCTION, BE_REQ)        SafePointers::FUNCTION::BEreq::CAT(BE_REQ,_baseptr)->origin()
/// Obtain the version of the backend that fills the requirement \em BE_REQ of the current function
#define GET_BE_VERSION(FUNCTION, BE_REQ)        SafePointers::FUNCTION::BEreq::CAT(BE_REQ,_baseptr)->version()
/// Obtain the underlying function pointer to the backend function that fills the requirement \em BE_REQ of the current function
#define GET_BE_POINTER(FUNCTION, BE_REQ, ...)   SafePointers::FUNCTION::BEreq::CAT(BE_REQ,_get_function_ptr)<__VA_ARGS__>()

// /// Obtain the backend requirement \em BE_REQ of the current function, with arguments (...)
// #define GET_BE_RESULT(BE_REQ, ...) Backend_Reqs::BE_REQ(__VA_ARGS__)
// /// Obtain the name of the backend function that fills the requirement \em BE_REQ of the current function
// #define GET_BE_FUNCNAME(BE_REQ)    Backend_Reqs::CAT(BE_REQ,_baseptr)->name()
// /// Obtain the name of the backend that fills the requirement \em BE_REQ of the current function
// #define GET_BE_PACKAGE(BE_REQ)     Backend_Reqs::CAT(BE_REQ,_baseptr)->origin()
// /// Obtain the version of the backend that fills the requirement \em BE_REQ of the current function
// #define GET_BE_VERSION(BE_REQ)     Backend_Reqs::CAT(BE_REQ,_baseptr)->version()
// /// Obtain the underlying function pointer to the backend function that fills the requirement \em BE_REQ of the current function
// #define GET_BE_POINTER(BE_REQ, ...)  Backend_Reqs::CAT(BE_REQ,_get_function_ptr)<__VA_ARGS__>()
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
#define DECLARE_BACKEND_REQ_VARIABLE(TYPE)                MODULE_DECLARE_BACKEND_REQ_VARIABLE(TYPE)
#define DECLARE_BACKEND_REQ_FUNCTION(TYPE)                MODULE_DECLARE_BACKEND_REQ_FUNCTION(TYPE)
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
      /* Let the module source know that this functor is declared by the core*/\
      namespace Functown { extern module_functor<TYPE> FUNCTION; }             \
                                                                               \
      /* Create safe pointers to the index of the OpenMP chunk this functor    \
      is running within, the iteration number of the loop it is running within,\
      and the maximum number of threads that it is permitted to employ in      \
      carrying out its task. */                                                \
      namespace SafePointers                                                   \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          namespace Loop                                                       \
          {                                                                    \
            safe_ptr<int> chunk_index = Functown::FUNCTION.chunkPtr();         \
            safe_ptr<int> iteration = Functown::FUNCTION.iterationPtr();       \
            safe_ptr<int> max_threads = Functown::FUNCTION.threadPtr();        \
          }                                                                    \
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Set up a helper function to call the iterate method if the functor is \
      able to manage loops. */                                                 \
      namespace Functown                                                       \
      {                                                                        \
        BOOST_PP_IIF(CAN_MANAGE,                                               \
          void CAT(FUNCTION,_iterate)(int ci, int it, int mt)                  \
          {                                                                    \
            int mp = *SafePointers::FUNCTION::Loop::max_threads;               \
            if (mt > mp)                                                       \
            {                                                                  \
              cout<<endl<<"Error: you cannot launch an iteration of a loop "   \
               "over module functions with a larger permitted number of "<<endl\
               <<"threads than the loop manager itself may employ."<<endl;     \
              cout<<"  Offending function: "<<STRINGIFY(MODULE)<<"::"<<        \
               STRINGIFY(FUNCTION)<<endl;                                      \
              cout<<"  Threads allowed in offending loop manager: "<<mp<<endl; \
              cout<<"  Maximum threads suggested for iteration: "<<mt<<endl;   \
              cout<<"Notice that "<<mt<<" > "<<mp<<".  Mmmm."<<endl;           \
              /* FIXME throw a real error here */                              \
              exit(1);                                                         \
            }                                                                  \
            FUNCTION.iterate(ci,it,mt);                                        \
          }                                                                    \
        ,)                                                                     \
      }                                                                        \
                                                                               \
      /* Declare the parameters safe-pointer map as external, and create a     \
      pointer to the single iteration of the loop that can be executed by this \
      functor. */                                                              \
      namespace SafePointers                                                   \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          extern std::map<str, safe_ptr<double> > Param;                       \
          namespace Loop                                                       \
          {                                                                    \
            BOOST_PP_IIF(CAN_MANAGE,                                           \
              void (*executeIteration)(int, int, int) =                        \
               &Functown::CAT(FUNCTION,_iterate);                              \
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


/// Redirection of START_BACKEND_REQ(TYPE, [VAR/FUNC]) when invoked from within a module, 
/// and with the optional flag VAR given.  
#define MODULE_DECLARE_BACKEND_REQ_VARIABLE(TYPE)                              \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
    namespace MODULE                                                           \
    {                                                                          \
      namespace SafePointers                                                   \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          namespace BEreq                                                      \
          {                                                                    \
            /* Create a safe variable pointer for the backend                  \
            pointer returned by the backend functor. To be filled              \
            automatically at runtime when the dependency is resolved.*/        \
            extern safe_variable_ptr<TYPE> BACKEND_REQ;                        \
          }                                                                    \
        }                                                                      \
      }                                                                        \
    }                                                                          \
  }                                                                            \


/// Redirection of START_BACKEND_REQ(TYPE, [VAR/FUNC]) when invoked from within a module, 
/// and with the optional flag absent or given as FUNC.
#define MODULE_DECLARE_BACKEND_REQ_FUNCTION(TYPE)                              \
                                                                               \
  namespace Gambit                                                             \
  {                                                                            \
    namespace MODULE                                                           \
    {                                                                          \
      namespace SafePointers                                                   \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          namespace BEreq                                                      \
          {                                                                    \
                                                                               \
            /* Declare a (base) pointer to the backend functor.                \
            To be filled by the dependency resolver at runtime. */             \
            extern functor* CAT(BACKEND_REQ,_baseptr);                         \
                                                                               \
            /* Set up an empty alias for the backend requirement */            \
            template<typename GENERIC_TYPE, typename... ARGS>                  \
            GENERIC_TYPE BACKEND_REQ(ARGS ...args)                             \
            {                                                                  \
              cout<<"Incorrect return type implied for backend"<<endl;         \
              cout<<"requirement BACKEND_REQ (function"<<endl;                 \
              cout<<"FUNCTION, module MODULE). Exiting..."<<endl;              \
              /** FIXME \todo Throw a real error here. */                      \
            }                                                                  \
                                                                               \
            /* Set up a working alias that casts the (base) pointer to the     \
            backend functor to the appropriate backend_functor type, and then  \
            dereferences it to call the actual backend function. */            \
            template<typename ...ARGS>                                         \
            TYPE BACKEND_REQ(ARGS&& ...args)                                   \
            {                                                                  \
              typedef backend_functor<TYPE, ARGS...> be_functor;               \
              be_functor* myptr;                                               \
              if (Core.safe_mode())                                            \
              {                                                                \
                myptr = dynamic_cast<be_functor*>(CAT(BACKEND_REQ,_baseptr));  \
                if (myptr == 0)                                                \
                {                                                              \
                  cout<<endl<<"Error: Null returned from dynamic cast in ";    \
                  cout<<"attempting to retrieve backend requirement"<<endl;    \
                  cout<<STRINGIFY(BACKEND_REQ)<<" (function ";                 \
                  cout<<STRINGIFY(FUNCTION)<<", module "<<STRINGIFY(MODULE);   \
                  cout<<"). Probably you have passed arguments of the "<<endl; \
                  cout<<"wrong type(s) when calling this function."<<endl;     \
                  cout<<"The return type of the backend function is supposed ";\
                  cout<<"to be "<<STRINGIFY(TYPE)<<endl;                       \
                  /** FIXME \todo throw real error here */                     \
                }                                                              \
              }                                                                \
              else                                                             \
              {                                                                \
                myptr = static_cast<be_functor*>(CAT(BACKEND_REQ,_baseptr));   \
              }                                                                \
              BOOST_PP_IIF(IS_TYPE(void,TYPE),,return)                         \
               (*myptr)(std::forward<ARGS>(args)...);                          \
                                                                               \
            }                                                                  \
                                                                               \
            /* Set up a working alias that casts the (base) pointer to the     \
            backend functor to the appropriate backend_functor type, and then  \
            returns the underlying pointer to the actual backend function. */  \
            template<typename ...ARGS>                                         \
            /* Horrifically complicated syntax to return a function ptr */     \
            TYPE(*CAT(BACKEND_REQ,_get_function_ptr)())(ARGS...)               \
            {                                                                  \
              typedef backend_functor<TYPE, ARGS...> be_functor;               \
              be_functor* myptr;                                               \
              if (Core.safe_mode())                                            \
              {                                                                \
                myptr = dynamic_cast<be_functor*>(CAT(BACKEND_REQ,_baseptr));  \
                if (myptr == 0)                                                \
                {                                                              \
                  cout<<endl<<"Error: Null returned from dynamic cast in ";    \
                  cout<<"attempting to retrieve underlying function pointer "; \
                  cout<<endl<<"for backend requirement"<<endl;                 \
                  cout<<STRINGIFY(BACKEND_REQ)<<" (function ";                 \
                  cout<<STRINGIFY(FUNCTION)<<", module "<<STRINGIFY(MODULE);   \
                  cout<<"). Probably you have passed arguments of the "<<endl; \
                  cout<<"wrong type(s) when calling this function."<<endl;     \
                  cout<<"The return type of the backend function is supposed ";\
                  cout<<"to be "<<STRINGIFY(TYPE)<<endl;                       \
                  /** FIXME \todo throw real error here */                     \
                }                                                              \
              }                                                                \
              else                                                             \
              {                                                                \
                myptr = static_cast<be_functor*>(CAT(BACKEND_REQ,_baseptr));   \
              }                                                                \
              return myptr->handoutFunctionPointer();                          \
                                                                               \
            }                                                                  \
                                                                               \
          }                                                                    \
        }                                                                      \
      }                                                                        \
    }                                                                          \
  }                                                                            \


/// Redirection of START_CONDITIONAL_DEPENDENCY(TYPE) when invoked from within 
/// a module.
#define MODULE_START_CONDITIONAL_DEPENDENCY(TYPE)                              \
  MODULE_DEPENDENCY(CONDITIONAL_DEPENDENCY, TYPE)                              \

/// @}

#endif // defined __module_macros_inmodule_hpp__ 

