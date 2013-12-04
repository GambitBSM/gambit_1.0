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
///  \date 2013 All year 
///  \date 2014 Foreverrrrr
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
#include "safety_bucket.hpp"
#include "module_macros_common.hpp"
#include <boost/preprocessor/control/if.hpp>

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
#define DECLARE_BACKEND_REQ(TYPE, IS_VARIABLE)            MODULE_DECLARE_BACKEND_REQ(TYPE, IS_VARIABLE)
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
      /* Create safe pointers to the iteration number of the loop this functor \
      is running within, and the set of threads indices that it is permitted to\
      employ in carrying out its task. */                                      \
      namespace SafePointers                                                   \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          namespace Loop                                                       \
          {                                                                    \
            safe_ptr<int> iteration = Functown::FUNCTION.iterationPtr();       \
            safe_ptr<std::set<int> > available_threads =                       \
             Functown::FUNCTION.threadPtr();                                   \
          }                                                                    \
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Set up a helper function to call the iterate method if the functor is \
      able to manage loops. */                                                 \
      namespace Functown                                                       \
      {                                                                        \
        BOOST_PP_IIF(CAN_MANAGE,                                               \
          void CAT(FUNCTION,_iterate)(int it, const std::set<int>&cand_threads)\
          {                                                                    \
            int mp = SafePointers::FUNCTION::Loop::available_threads->size();  \
            int mt = cand_threads.size();                                      \
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
            for (std::set<int>::const_iterator it = cand_threads.begin();      \
                 it != cand_threads.end(); ++it)                               \
            {                                                                  \
              if (SafePointers::FUNCTION::Loop::available_threads->find(*it)   \
                  == SafePointers::FUNCTION::Loop::available_threads->end())   \
              {                                                                \
                cout<<endl<<"Error: one or more of the thread indices you have"\
                 " tried to provide to some nested functions is not allowed, " \
                 "as *this* function was not given permission to use that "    \
                 "thread in the first place.  Check *Loops::available_threads" \
                 "in"<<STRINGIFY(MODULE)<<"::"<<STRINGIFY(FUNCTION)<<"."<<endl;\
                cout<<"  Threads allowed in offending loop manager: "<<        \
                 *SafePointers::FUNCTION::Loop::available_threads<<endl;       \
                cout<<"  Requested threads: "<<cand_threads<<endl;             \
                /* FIXME throw a real error here */                            \
                exit(1);                                                       \
              }                                                                \
            }                                                                  \
            FUNCTION.iterate(it,cand_threads);                                 \
          }                                                                    \
          void CAT(FUNCTION,_easy_iterate)(int it)                             \
          {                                                                    \
            FUNCTION.iterate(it,                                               \
             *SafePointers::FUNCTION::Loop::available_threads);                \
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
              void (*executeIteration)(int, const std::set<int>&) =            \
               &Functown::CAT(FUNCTION,_iterate);                              \
              void (*executeEasyIteration)(int) =                              \
               &Functown::CAT(FUNCTION,_easy_iterate);                         \
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
      /* Given that TYPE is not void, create a safety_bucket for the           \
      dependency result. To be initialized automatically at runtime            \
      when the dependency is resolved. */                                      \
      namespace SafePointers                                                   \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          BOOST_PP_IIF(IS_TYPE(void,TYPE),,                                    \
            namespace Dep { extern dep_bucket<TYPE> DEP; } )                   \
        }                                                                      \
                                                                               \
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


/// Redirection of START_BACKEND_REQ(TYPE, [VAR/FUNC]) when invoked from within a module. 
#define MODULE_DECLARE_BACKEND_REQ(TYPE, IS_VARIABLE)                          \
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
            /* Create a safety_bucket for the backend variable/function.       \
            To be initialized by the dependency resolver at runtime. */        \
            BOOST_PP_IIF(IS_VARIABLE,                                          \
              /* If IS_VARIABLE = 1: */                                        \
              extern BEvariable_bucket<TYPE> BACKEND_REQ;                      \
              , /* If IS_VARAIBLE = 0: */                                      \
              extern BEfunction_bucket<TYPE> BACKEND_REQ;                      \
            ) /* End BOOST_PP_IIF */                                           \
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

