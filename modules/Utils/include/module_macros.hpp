//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Generic observable and likelihood function 
///  macro definitions.
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
///  \date 2013 Jan, Feb, Mar, Apr, May
///  \date 2013-Foreverrrrr
///
///  \author Abram Krislock
///          (abram.krislock@fysik.su.se)
///  \date 2013 Jan, Feb
//
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 Jan, Feb
///  *********************************************

#ifndef __module_macros_hpp__
#define __module_macros_hpp__

#include <map>
#include <graphs.hpp>
#include <dictionary.hpp>
#include <functors.hpp>
#include <util_macros.hpp>
#include <util_classes.hpp>
#include <util_functions.hpp>
#include <globals.hpp> // \todo FIXME inclusion of globals.hpp to be reversed once the core objects are better defined
#include <boost/preprocessor/comparison/greater.hpp>


/// \name Dependency-retrieval and info macros
/// These are used from within module function source code to obtain the actual
/// calculated values of dependencies, and probe details of the specific
/// module functions that have been connected by the dependency resolver in order
/// to fulfill dependencies.
/// @{

/// Retrive dependency \em DEP of the current function
#define GET_DEP(DEP)               (*Dependencies::DEP)()
#define GET_DEP_PTR(DEP)           Dependencies::DEP->valuePtr()
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
/// @}


/// \name Rollcall macros
/// These are called from within rollcall headers in each module to 
/// register module functions, their capabilities, return types, dependencies,
/// and backend requirements.
/// @{

//  Redirect rollcall macros depending in whether this file is included from 
//  the core or a module. 
#ifdef IN_CORE  // This file has been inluded from the core

  /// Registers the current \link MODULE() MODULE\endlink.
  #define START_MODULE                                      CORE_START_MODULE

  /// Registers the current \link CAPABILITY() CAPABILITY\endlink of the current 
  /// \link MODULE() MODULE\endlink.
  #define START_CAPABILITY                                  CORE_START_CAPABILITY

  /// Registers the current \link FUNCTION() FUNCTION\endlink of the current 
  /// \link MODULE() MODULE\endlink as a provider
  /// of the current \link CAPABILITY() CAPABILITY\endlink, returning a result of 
  /// type \em TYPE.
  #define START_FUNCTION(TYPE)                              CORE_START_FUNCTION(TYPE)

  /// Indicate that the current \link FUNCTION() FUNCTION\endlink depends on the 
  /// presence of another module function that can supply capability \em DEP, with
  /// return type \em TYPE.
  #define DEPENDENCY(DEP, TYPE)                             CORE_DEPENDENCY(DEP, TYPE)

  /// Indicate that the current \link FUNCTION() FUNCTION\endlink requires a
  /// a backend function to be available with capability \link BACKEND_REQ() 
  /// BACKEND_REQ\endlink and return type \em TYPE.
  #define START_BACKEND_REQ(TYPE)                           CORE_START_BACKEND_REQ(TYPE)

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

#else // This file has been inluded from a module; most rollcall macros can be ignored.

  #define START_MODULE                                      DUMMY
  #define START_CAPABILITY                                  DUMMY
  #define START_FUNCTION(TYPE)                              DUMMYARG(TYPE)
  #define DEPENDENCY(DEP, TYPE)                             MODULE_DEPENDENCY(DEP, TYPE)
  #define START_BACKEND_REQ(TYPE)                           MODULE_START_BACKEND_REQ(TYPE)
  #define BE_OPTION(BACKEND,VERSTRING)                      DUMMYARG(BACKEND,VERSTRING)
  #define START_CONDITIONAL_DEPENDENCY(TYPE)                MODULE_START_CONDITIONAL_DEPENDENCY(TYPE)
  #define ACTIVATE_DEP_BE(BACKEND_REQ, BACKEND, VERSTRING)  DUMMYARG(BACKEND_REQ, BACKEND, VERSTRING)

#endif
/// @}


/// \name Variadic redirection macros for BACKEND_OPTION(BACKEND, [VERSIONS])
/// Register that the current \link BACKEND_REQ() BACKEND_REQ\endlink may
/// be provided by backend \em BACKEND, versions \em [VERSIONS].  Permitted
/// versions are passed as optional additional arguments; if no version 
/// information is passed, all versions of \em BACKEND are considered valid.
/// @{

/// BACKEND_OPTION() called with no versions; allow any backend version
#define BE_OPTION_0(_1)      BE_OPTION(_1, "any")
/// BACKEND_OPTION() called with more than one argument; allow specified backend versions
#define BE_OPTION_1(_1, ...) BE_OPTION(_1, #__VA_ARGS__)
///  Redirects the BACKEND_OPTION(BACKEND, [VERSIONS]) macro to the 
///  BE_OPTION(BACKEND, VERSTRING) macro according to whether it has been called with 
///  version numbers or not (making the version number 'any' if it is omitted).
#define BACKEND_OPTION(...)  CAT(BE_OPTION_, BOOST_PP_GREATER \
                             (BOOST_PP_VARIADIC_SIZE(__VA_ARGS__), 1))(__VA_ARGS__)
/// @}


/// \name Variadic redirection macros for ACTIVATE_FOR_BACKEND(BACKEND_REQ, BACKEND, [VERSIONS])
/// Indicate that the current \link CONDITIONAL_DEPENDENCY() CONDITIONAL_DEPENDENCY\endlink
/// should be activated if the backend requirement \em BACKEND_REQ of the current 
/// \link FUNCTION() FUNCTION\endlink is filled by a backend function from \em BACKEND.
/// The specific versions that this applies to are passed as optional additional arguments;
/// if no version information is passed, all versions of \em BACKEND are considered to
/// cause the \link CONDITIONAL_DEPENDENCY() CONDITIONAL_DEPENDENCY\endlink to become
/// active.
/// @{

/// ACTIVATE_FOR_BACKEND() called with no versions; allow any backend version
#define ACTIVATE_DEP_BE_0(_1, _2)      ACTIVATE_DEP_BE(_1, _2, "any")
/// ACTIVATE_FOR_BACKEND() called with two arguments; allow specified backend versions
#define ACTIVATE_DEP_BE_1(_1, _2, ...) ACTIVATE_DEP_BE(_1, _2, #__VA_ARGS__)
/// Redirects the ACTIVATE_FOR_BACKEND(BACKEND_REQ, BACKEND, [VERSIONS]) macro to 
/// the ACTIVATE_DEP_BE(BACKEND_REQ, BACKEND, VERSTRING) macro according to whether
/// it has been called with version numbers or not (making the version number 'any' 
/// if it is omitted).
#define ACTIVATE_FOR_BACKEND(...)      CAT(ACTIVATE_DEP_BE_, BOOST_PP_GREATER   \
                                       (BOOST_PP_VARIADIC_SIZE(__VA_ARGS__), 2))\
                                       (__VA_ARGS__)
/// @}


/// \name Tag-registration macros
/// @{

/// Add a regular tag to the current namespace
#define ADD_TAG_IN_CURRENT_NAMESPACE(TAG) namespace Tags { struct TAG; };
/// Add a backend tag to the current namespace
#define ADD_BETAG_IN_CURRENT_NAMESPACE(TAG) namespace BETags { struct TAG; };
/// @}


//  *******************************************************************************
/// \name True rollcall macros
/// These macros do the actual heavy lifting within the rollcall system.
/// @{

/// Redirection of \link START_MODULE() START_MODULE\endlink when invoked from 
/// within the core.
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
                                                                               
/// Redirection of \link START_CAPABILITY() START_CAPABILITY\endlink when  
/// invoked from within the core.
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


/// Redirection of START_FUNCTION(TYPE) when invoked from within the core.
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
        GAMBIT::globalFunctorList.push_back(&Functown::FUNCTION);              \
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
                                                                          

/// First common component of CORE_DEPENDENCY(DEP, TYPE) and 
/// CORE_START_CONDITIONAL_DEPENDENCY(TYPE).
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
          namespace Dep { safe_ptr<TYPE> DEP; }                                \
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
          SafePointers::FUNCTION::Dep::DEP =                                   \
           Dependencies::FUNCTION::DEP->valuePtr();                            \
        }                                                                      \
                                                                               \
      }                                                                        \


/// Second common component of CORE_DEPENDENCY(DEP, TYPE) and 
/// CORE_START_CONDITIONAL_DEPENDENCY(TYPE).
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


/// Redirection of DEPENDENCY(DEP, TYPE) when invoked from within the core.
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


/// Redirection of DEPENDENCY(DEP, TYPE) when invoked from within a module.
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
          namespace Dep { extern safe_ptr<TYPE> DEP; }                         \
        }                                                                      \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \


/// Redirection of START_BACKEND_REQ(TYPE) when invoked from within the core.
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
          functor* CAT(BACKEND_REQ,_baseptr) = NULL;                           \
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


/// Redirection of START_BACKEND_REQ(TYPE) when invoked from within a module.
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
          template<typename... ARGS>                                           \
          TYPE BACKEND_REQ(ARGS ...args)                                       \
          {                                                                    \
            typedef backend_functor<TYPE, ARGS...> be_functor;                 \
            be_functor* myptr;                                                 \
            if (GAMBIT::safe_mode)                                             \
            {                                                                  \
              myptr = dynamic_cast<be_functor*>(CAT(BACKEND_REQ,_baseptr));    \
              /* CW: This example here makes only sense for dssusy */          \
              /* it deomstantes that casting *can* work            */          \
              cout << "be_functor* cast: " << dynamic_cast<be_functor*>(CAT(BACKEND_REQ,_baseptr)) << endl;\
              cout << "explicit cast: " << dynamic_cast<backend_functor<void, int&, int&>*>(CAT(BACKEND_REQ,_baseptr)) << endl;\
              if (myptr == 0)                                                  \
              {                                                                \
                cout<<endl<<"Error: Null returned from dynamic cast in ";      \
                cout<<"attempting to retrieve backend requirement"<<endl;      \
                cout<<STRINGIFY(BACKEND_REQ)<<" (function ";                   \
                cout<<STRINGIFY(FUNCTION)<<", module "<<STRINGIFY(MODULE);     \
                cout<<"). Probably you have passed arguments of the wrong ";   \
                cout<<"type(s) when calling this function."<<endl;             \
                /** FIXME \todo throw real error here */                       \
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


/// Redirection of BE_OPTION(BACKEND, VERSTRING) when invoked from within the 
/// core.
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


/// Redirection of START_CONDITIONAL_DEPENDENCY(TYPE) when invoked from within 
/// the core.
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

                                                                               
/// Redirection of START_CONDITIONAL_DEPENDENCY(TYPE) when invoked from within 
/// a module.
#define MODULE_START_CONDITIONAL_DEPENDENCY(TYPE)                              \
  MODULE_DEPENDENCY(CONDITIONAL_DEPENDENCY, TYPE)                              \


/// Redirection of ACTIVATE_DEP_BE(BACKEND_REQ, BACKEND, VERSTRING) when 
/// invoked from within the core.
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

/// @}

#endif // defined(__module_macros_hpp__) 

