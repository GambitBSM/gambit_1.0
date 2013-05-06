//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Generic observable and likelihood function 
///  macro definitions.
//
//  Initially inspired by Abram  
//  Krislock's Objects.hpp.
//
//  Note here that FUNCTION is the actual function name, whereas both CAPABILITY
//  and DEP refer to the abstract physical quantities that functions may provide
//  or require.  Thus, the provides() methods expect a quantity input, the 
//  requires() methods expect a quantity input for the dependency and a function
//  name input for the actual dependent function, and all other things operate
//  on the basis of the function name, not the quantity that is calculated.
//
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Pat Scott
//  2012  Nov 15++  
//  2013  Jan 18, 29-31, Feb 04, Mar 28, Apr 3-9
//  2013-2078 Foreverrrrr
//
//  Abram Krislock
//  2013 Jan 31, Feb 05
//  *********************************************

///
/// \def START_CAPABILITY
/// Registers the current CAPABILITY of the current MODULE.

#ifndef __module_macros_hpp__
#define __module_macros_hpp__

#include <map>
#include <graphs.hpp>
#include <dictionary.hpp>
#include <functors.hpp>
#include <util_macros.hpp>
#include <util_classes.hpp>
#include <util_functions.hpp>
#include <globals.hpp> // FIXME this to be removed once the core object is better defined
#include <boost/preprocessor/comparison/greater.hpp>

//Tag registration one-liners
#define ADD_TAG_IN_CURRENT_NAMESPACE(TAG) namespace Tags { struct TAG; }
#define ADD_BETAG_IN_CURRENT_NAMESPACE(TAG) namespace BETags { struct TAG; }

//Dependency retrieval and info one-liners
#define GET_DEP(DEP)               (*Dependencies::DEP)()
#define GET_DEP_MODULE(DEP)        Dependencies::DEP->origin()
#define GET_DEP_FUNCNAME(DEP)      Dependencies::DEP->name()

//Backend retrieval and info one-liners
#define GET_BE_RESULT(BE_REQ, ...) Backend_Reqs::BE_REQ(__VA_ARGS__)
#define GET_BE_PACKAGE(BE_REQ)     Backend_Reqs::CAT(BE_REQ,_baseptr)->origin()
#define GET_BE_FUNCNAME(BE_REQ)    Backend_Reqs::CAT(BE_REQ,_baseptr)->name()
#define GET_BE_VERSION(BE_REQ)     Backend_Reqs::CAT(BE_REQ,_baseptr)->version()

//Redirect rollcall macros depending in whether this file is included from 
//the core or a module.
#ifdef IN_CORE
  #define START_MODULE                  CORE_START_MODULE
  #define START_CAPABILITY              CORE_START_CAPABILITY
  #define START_FUNCTION                CORE_START_FUNCTION
  #define DEPENDENCY                    CORE_DEPENDENCY
  #define START_BACKEND_REQ             CORE_START_BACKEND_REQ
  #define BE_OPTION                     CORE_BACKEND_OPTION
  #define START_CONDITIONAL_DEPENDENCY  CORE_START_CONDITIONAL_DEPENDENCY
  #define ACTIVATE_DEP_BE               CORE_ACTIVATE_DEP_BE
#else
  #define START_MODULE                  DUMMY
  #define START_CAPABILITY              DUMMY
  #define START_FUNCTION                DUMMYARG
  #define DEPENDENCY                    MODULE_DEPENDENCY
  #define START_BACKEND_REQ             MODULE_START_BACKEND_REQ
  #define BE_OPTION                     DUMMYARG
  #define START_CONDITIONAL_DEPENDENCY  DUMMYARG
  #define ACTIVATE_DEP_BE               DUMMYARG
#endif

//Redirect the BACKEND_OPTION macro according to whether it has been called
//with version numbers or not (make the version number 'any' if it is omitted).
#define BE_OPTION_0(_1)      BE_OPTION(_1, "any")
#define BE_OPTION_1(_1, ...) BE_OPTION(_1, #__VA_ARGS__)
#define BACKEND_OPTION(...)  CAT(BE_OPTION_, BOOST_PP_GREATER \
                             (BOOST_PP_VARIADIC_SIZE(__VA_ARGS__), 1))(__VA_ARGS__)

//Redirect the ACTIVATE_FOR_BACKEND macro according to whether it has been called
//with version numbers or not (make the version number 'any' if it is omitted).
#define ACTIVATE_DEP_BE_0(_1, _2)      ACTIVATE_DEP_BE(_1, _2, "any")
#define ACTIVATE_DEP_BE_1(_1, _2, ...) ACTIVATE_DEP_BE(_1, _2, #__VA_ARGS__)
#define ACTIVATE_FOR_BACKEND(...)      CAT(ACTIVATE_DEP_BE_, BOOST_PP_GREATER \
                                       (BOOST_PP_VARIADIC_SIZE(__VA_ARGS__), 2)) \
                                       (__VA_ARGS__)

//True rollcall macros
#define CORE_START_MODULE                                                      \
                                                                               \
  namespace GAMBIT                                                             \
  {                                                                            \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
                                                                               \
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
      GAMBIT::dict moduleDict;                                                 \
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
      /* Module may require observable/likelihood DEP_TAG to compute TAG,      \
      depending on the backend and version used to meet requirment REQ_TAG. */ \
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
        if (map_bools.find("BE_"+quant+obs) == map_bools.end()) {return false;}\
        return (*map_bools["BE_"+quant+obs])();                                \
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
    }                                                                          \
                                                                               \
  }                                                                            \
                                                                               

#define CORE_START_CAPABILITY                                                  \
                                                                               \
  namespace GAMBIT                                                             \
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


#define CORE_START_FUNCTION(TYPE)                                              \
                                                                               \
  namespace GAMBIT                                                             \
  {                                                                            \
                                                                               \
    /* Add FUNCTION to global set of tags of recognised module capabils/deps */\
    ADD_TAG_IN_CURRENT_NAMESPACE(FUNCTION)                                     \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
                                                                               \
      /* Set up an auxilary method to report stuff to the core about the       \
      function.  Not actually sure what this would                             \
      be used for at this stage. */                                            \
      template <>                                                              \
      void report<Tags::FUNCTION>()                                            \
      {                                                                        \
        cout<<"Dear Core, I provide the function with tag: "<<                 \
        STRINGIFY(FUNCTION)<<endl;                                             \
      }                                                                        \
                                                                               \
      /* Register (prototype) the function */                                  \
      void FUNCTION (TYPE &);                                                  \
                                                                               \
      /* Register the FUNCTION's result TYPE */                                \
      template<>                                                               \
      struct function_traits<Tags::FUNCTION>                                   \
      {                                                                        \
        typedef TYPE type;                                                     \
      };                                                                       \
                                                                               \
      /* Create the function wrapper object (functor) */                       \
      namespace Functown                                                       \
      {                                                                        \
        module_functor<TYPE> FUNCTION                                          \
         (&MODULE::FUNCTION, STRINGIFY(FUNCTION), STRINGIFY(CAPABILITY),       \
         STRINGIFY(TYPE), STRINGIFY(MODULE));                                  \
      }                                                                        \
                                                                               \
      /* Set up an alias function to call the function */                      \
      template <>                                                              \
      function_traits<Tags::FUNCTION>::type result<Tags::FUNCTION>()           \
      {                                                                        \
         Functown::FUNCTION.calculate();                                       \
         return Functown::FUNCTION();                                          \
      }                                                                        \
                                                                               \
      /* Set up the commands to be called at runtime to register the function*/\
      template <>                                                              \
      void rt_register_function<Tags::FUNCTION> ()                             \
      {                                                                        \
        boost::add_vertex(&Functown::FUNCTION, Graphs::masterGraph);           \
        map_bools[STRINGIFY(CAPABILITY)] = &provides<Tags::CAPABILITY>;        \
        map_voids[STRINGIFY(FUNCTION)] = &report<Tags::FUNCTION>;              \
        iCanDo[STRINGIFY(FUNCTION)] = STRINGIFY(TYPE);                         \
        moduleDict.set<TYPE(*)()>(STRINGIFY(FUNCTION),&result<Tags::FUNCTION>);\
      }                                                                        \
                                                                               \
      /* Create the function initialisation object */                          \
      namespace Ini                                                            \
      {                                                                        \
        ini_code FUNCTION (&rt_register_function<Tags::FUNCTION>);             \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \
                                                                          

#define DEPENDENCY_COMMON_1(DEP, TYPE)                                         \
                                                                               \
  namespace GAMBIT                                                             \
  {                                                                            \
                                                                               \
    /* Add DEP to global set of tags of recognised module capabilities/deps */ \
    ADD_TAG_IN_CURRENT_NAMESPACE(DEP)                                          \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
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
          module_functor<TYPE> *DEP;                                           \
        }                                                                      \
      }                                                                        \
                                                                               \
      /* Resolve dependency DEP in FUNCTION */                                 \
      template <>                                                              \
      void resolve_dependency<Tags::DEP, Tags::FUNCTION>(functor* dep_functor) \
      {                                                                        \
        Dependencies::FUNCTION::DEP =                                          \
         dynamic_cast<module_functor<TYPE>*>(dep_functor);                     \
        if (Dependencies::FUNCTION::DEP == 0)                                  \
        {                                                                      \
          cout<<"Error: Null returned from dynamic cast in "<< endl;           \
          cout<<"MODULE::resolve_dependency, for dependency"<< endl;           \
          cout<<"DEP of function FUNCTION.  Attempt was to "<< endl;           \
          cout<<"resolve to "<<dep_functor->name()<<" in   "<< endl;           \
          cout<<dep_functor->origin()<<"."<<endl;                              \
          /* FIXME throw real error here */                                    \
        }                                                                      \
      }                                                                        \


#define DEPENDENCY_COMMON_2(DEP,TYPE)                                          \
                                                                               \
      /* Create the dependency initialisation object */                        \
      namespace Ini                                                            \
      {                                                                        \
        ini_code CAT_3(DEP,_for_,FUNCTION)                                     \
         (&rt_register_dependency<Tags::DEP, Tags::FUNCTION>);                 \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \


#define CORE_DEPENDENCY(DEP, TYPE)                                             \
                                                                               \
  DEPENDENCY_COMMON_1(DEP, TYPE)                                               \
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
  DEPENDENCY_COMMON_2(DEP, TYPE)                                               \


#define MODULE_DEPENDENCY(DEP, TYPE)                                           \
                                                                               \
  namespace GAMBIT                                                             \
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
          extern module_functor<TYPE> *DEP;                                    \
        }                                                                      \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \


#define CORE_START_BACKEND_REQ(TYPE)                                           \
                                                                               \
  namespace GAMBIT                                                             \
  {                                                                            \
                                                                               \
    /* Add BACKEND_REQ to global set of recognised backend func tags */        \
    ADD_BETAG_IN_CURRENT_NAMESPACE(BACKEND_REQ)                                \
                                                                               \
    namespace MODULE                                                           \
    {                                                                          \
                                                                               \
      /* Register the required return TYPE of the backend function */          \
      template<>                                                               \
      struct dep_traits<BETags::BACKEND_REQ, Tags::FUNCTION>                   \
      {                                                                        \
        typedef TYPE type;                                                     \
      };                                                                       \
                                                                               \
      /* Create a (base) pointer to the backend functor.  To be filled by      \
      the dependency resolver at runtime. */                                   \
      namespace Backend_Reqs                                                   \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          functor *CAT(BACKEND_REQ,_baseptr);                                  \
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
        Backend_Reqs::FUNCTION::CAT(BACKEND_REQ,_baseptr) = be_functor;        \
      }                                                                        \
                                                                               \
      /* Set up the commands to be called at runtime to register req*/         \
      template <>                                                              \
      void rt_register_req<BETags::BACKEND_REQ, Tags::FUNCTION>()              \
      {                                                                        \
        map_bools[STRINGIFY(CAT(BE_##BACKEND_REQ,FUNCTION))] =                 \
         &needs_from_backend<BETags::BACKEND_REQ,Tags::FUNCTION>;              \
        iMayNeedFromBackends[STRINGIFY(BACKEND_REQ)] = STRINGIFY(TYPE);        \
        Functown::FUNCTION.setBackendReq(                                      \
         STRINGIFY(BACKEND_REQ),STRINGIFY(TYPE),                               \
         &resolve_backendreq<BETags::BACKEND_REQ,Tags::FUNCTION>);             \
      }                                                                        \
                                                                               \
      /* Create the dependency initialisation object */                        \
      namespace Ini                                                            \
      {                                                                        \
        ini_code CAT_3(BACKEND_REQ,_backend_for_,FUNCTION)                     \
         (&rt_register_req<BETags::BACKEND_REQ,Tags::FUNCTION>);               \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \


#define MODULE_START_BACKEND_REQ(TYPE)                                         \
                                                                               \
  namespace GAMBIT                                                             \
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
          extern functor *CAT(BACKEND_REQ,_baseptr);                           \
                                                                               \
          /* Set up an empty alias for the backend requirement */              \
          template<typename GENERIC_TYPE, typename... ARGS>                    \
          GENERIC_TYPE BACKEND_REQ(ARGS ...args)                               \
          {                                                                    \
            cout<<"Incorrect return type implied for backend"<<endl;           \
            cout<<"requirement BACKEND_REQ (function"<<endl;                   \
            cout<<"FUNCTION, module MODULE). Exiting..."<<endl;                \
            /* FIXME Throw a real error here. */                               \
          }                                                                    \
                                                                               \
          /* Set up a working alias that casts the (base) pointer to the       \
          backend functor to the appropriate backend_functor type, and then    \
          dereferences it to call the actual backend function. */              \
          template<typename... ARGS>                                           \
          TYPE BACKEND_REQ(ARGS ...args)                                       \
          {                                                                    \
            typedef backend_functor<TYPE, ARGS...> be_functor;                 \
            be_functor *myptr;                                                 \
            if (GAMBIT::safe_mode)                                             \
            {                                                                  \
              myptr = dynamic_cast<be_functor*>(CAT(BACKEND_REQ,_baseptr));    \
              if (myptr == 0)                                                  \
              {                                                                \
                cout<<endl<<"Error: Null returned from dynamic cast in ";      \
                cout<<"attempting to retrieve backend requirement"<<endl;      \
                cout<<STRINGIFY(BACKEND_REQ)<<" (function ";                   \
                cout<<STRINGIFY(FUNCTION)<<", module "<<STRINGIFY(MODULE);     \
                cout<<"). Probably you have passed arguments of the wrong ";   \
                cout<<"type(s) when calling this function."<<endl;             \
                /* FIXME throw real error here */                              \
              }                                                                \
            }                                                                  \
            else                                                               \
            {                                                                  \
              myptr = static_cast<be_functor*>(CAT(BACKEND_REQ,_baseptr));     \
            }                                                                  \
            BOOST_PP_IF(IS_TYPE(void,TYPE),,return) (*myptr)(args...);         \
          }                                                                    \
                                                                               \
        }                                                                      \
                                                                               \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \


#define CORE_BACKEND_OPTION(BACKEND,VERSTRING)                                 \
                                                                               \
  namespace GAMBIT                                                             \
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


#define CORE_START_CONDITIONAL_DEPENDENCY(TYPE)                                \
                                                                               \
  DEPENDENCY_COMMON_1(CONDITIONAL_DEPENDENCY, TYPE)                            \
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
  /* Create the first conditional dependency initialisation object */          \
  DEPENDENCY_COMMON_2(CONDITIONAL_DEPENDENCY, TYPE)                            \

                                                                               
#define CORE_ACTIVATE_DEP_BE(BACKEND_REQ, BACKEND, VERSTRING)                  \
                                                                               \
  namespace GAMBIT                                                             \
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



#endif // defined(__module_macros_hpp__) 

