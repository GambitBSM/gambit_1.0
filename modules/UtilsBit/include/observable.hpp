//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Generic observable and likelihood object 
//  definitions.
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
//  2013  Jan 18, 29-31, Feb 04, Mar 28, Apr 3
//
//  Abram Krislock
//  2013 Jan 31, Feb 05
//  *********************************************

#ifndef __observable_hpp__
#define __observable_hpp__

#include <map>
#include <string>
#include <iostream>
#include <dictionary.hpp>
#include <functors.hpp>
#include <graphs.hpp>

//Some redirection macros
#define STRINGIFY(X) STRINGIFY2(X)
#define STRINGIFY2(X) #X
#define CAT(X,Y) CAT2(X,Y)
#define CAT2(X,Y) X##Y
#define DUMMY
#define DUMMYARG(...)

//Some useful one-liners
#define ADD_TAG_IN_CURRENT_NAMESPACE(TAG) namespace Tags { struct TAG; }
#define ADD_BETAG_IN_CURRENT_NAMESPACE(TAG) namespace BETags { struct TAG; }
#define GET_DEP(DEP) (*Dependencies::DEP)()

//Redirect rollcall macros depending in whether this file is included from 
//the core or a module.
#ifdef IN_CORE
  #define START_MODULE       CORE_START_MODULE
  #define START_CAPABILITY   CORE_START_CAPABILITY
  #define START_FUNCTION     CORE_START_FUNCTION
  #define DEPENDENCY         CORE_DEPENDENCY
  #define START_BACKEND_REQ  CORE_START_BACKEND_REQ
#else
  #define START_MODULE       DUMMY
  #define START_CAPABILITY   DUMMY
  #define START_FUNCTION     DUMMYARG
  #define DEPENDENCY         MODULE_DEPENDENCY
  #define START_BACKEND_REQ  MODULE_START_BACKEND_REQ
#endif


//Start true rollcall macros

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
      /* module name */                                                        \
      std::string name() { return STRINGIFY(MODULE); }                         \
                                                                               \
      /* maps from tag strings to tag-specialisted functions */                \
      std::map<std::string, bool(*)()> map_bools;                              \
      std::map<std::string, void(*)()> map_voids;                              \
      GAMBIT::dict moduleDict;                                                 \
                                                                               \
      /* all module observables/likelihoods, their dependencies, required      \
      quantities from backends, and their types, as strings */                 \
      static std::map<std::string,std::string> iCanDo;                         \
      static std::map<std::string,std::string> iMayNeed;                       \
      static std::map<std::string,std::string> iMayNeedFromBackends;           \
                                                                               \
      /* module provides observable/likelihood TAG? */                         \
      template <typename TAG>                                                  \
      bool provides() { return false; }                                        \
                                                                               \
      /* overloaded, non-templated version */                                  \
      bool provides(std::string obs)                                           \
      {                                                                        \
        if (map_bools.find(obs) == map_bools.end()) { return false; }          \
        return (*map_bools[obs])();                                            \
      }                                                                        \
                                                                               \
      /* module requires observable/likelihood DEP_TAG to compute TAG */       \
      template <typename DEP_TAG, typename TAG>                                \
      bool requires() { return false; }                                        \
                                                                               \
      /* overloaded, non-templated version */                                  \
      bool requires(std::string dep, std::string obs)                          \
      {                                                                        \
        if (map_bools.find(dep+obs) == map_bools.end()) { return false; }      \
        return (*map_bools[dep+obs])();                                        \
      }                                                                        \
                                                                               \
      /* module requires quantity BE_TAG from a backend to compute TAG */      \
      template <typename BE_TAG, typename TAG>                                 \
      bool needs_from_backend() { return false; }                              \
                                                                               \
      /* overloaded, non-templated version */                                  \
      bool needs_from_backend(std::string quant, std::string obs)              \
      {                                                                        \
        if (map_bools.find("BE_"+quant+obs) == map_bools.end()) {return false;}\
        return (*map_bools["BE_"+quant+obs])();                                \
      }                                                                        \
                                                                               \
      /* report on observable/likelihood TAG */                                \
      template <typename TAG>                                                  \
      void report()                                                            \
      {                                                                        \
        std::cout<<"This tag is not supported by ";                            \
        std::cout<<STRINGIFY(MODULE)<<"."<<std::endl;                          \
      }                                                                        \
                                                                               \
      /* overloaded, non-templated version */                                  \
      void report(std::string obs)                                             \
      {                                                                        \
        if (map_voids.find(obs) == map_voids.end())                            \
        {                                                                      \
          std::cout<<"This tag is not supported by ";                          \
          std::cout<<STRINGIFY(MODULE)<<"."<<std::endl;                        \
        }                                                                      \
        else { (*map_voids[obs])(); }                                          \
      }                                                                        \
                                                                               \
      /* alias for observable/likelihood function TAG */                       \
      template <typename TAG>                                                  \
      typename function_traits<TAG>::type result()                             \
      {                                                                        \
        std::cout<<"This tag is not supported by ";                            \
        std::cout<<STRINGIFY(MODULE)<<"."<<std::endl;                          \
        return 0;                                                              \
      }                                                                        \
                                                                               \
      /* overloaded, 'stringy' version */                                      \
      /* A templated function that uses an input string obs to pull a pointer  \
      to the zero-parameter alias fuction above out of the module's private    \
      dictionary.  It then dereferences that pointer, calls the function and   \
      returns the result. */                                                   \
      template <typename TYPE>                                                 \
      TYPE result(std::string obs)                                             \
      {                                                                        \
        return ( *moduleDict.get<TYPE(*)()>(obs) )();                          \
      }                                                                        \
                                                                               \
      /* runtime registration function for observable/likelihood function TAG*/\
      template <typename TAG>                                                  \
      void rt_register_function ()                                             \
      {                                                                        \
        std::cout<<"This tag is not supported by ";                            \
        std::cout<<STRINGIFY(MODULE)<<"."<<std::endl;                          \
      }                                                                        \
                                                                               \
      /* runtime registration function for dependency DEP_TAG of function TAG*/\
      template <typename DEP_TAG, typename TAG>                                \
      void rt_register_dependency ()                                           \
      {                                                                        \
        std::cout<<STRINGIFY(MODULE)<<" does not"<<std::endl;                  \
        std::cout<<"have this dependency.";                                    \
      }                                                                        \
                                                                               \
      /* runtime registration function for backend req BE_REQ of               \
      function TAG*/                                                           \
      template <typename BE_REQ, typename TAG>                                 \
      void rt_register_req ()                                                  \
      {                                                                        \
        std::cout<<STRINGIFY(MODULE)<<" does not"<<std::endl;                  \
        std::cout<<"have this backend req.";                                   \
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
        std::cout<<"Dear Core, I provide the function with tag: "<<            \
        STRINGIFY(FUNCTION)<<std::endl;                                        \
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
        boost::add_vertex(Functown::FUNCTION, Graphs::masterGraph);            \
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
                                                                          
// Wishlist
// - minimal
//   - output variable (capability)
//     string + type
//   - input variables (dependencies)
//     list of (string + type)

#define CORE_DEPENDENCY(DEP, TYPE)                                             \
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
        Functown::FUNCTION.addToDepList<TYPE>(Dependencies::FUNCTION::DEP);    \
      }                                                                        \
                                                                               \
      /* Create the dependency initialisation object */                        \
      namespace Ini                                                            \
      {                                                                        \
        ini_code CAT(DEP##_for_,FUNCTION)                                      \
         (&rt_register_dependency<Tags::DEP, Tags::FUNCTION>);                 \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \


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
      /* Create a pointer to the backend functor.  To be filled by             \
      the dependency resolver at runtime. */                                   \
      namespace Backend_Reqs                                                   \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          backend_functor<TYPE> *BACKEND_REQ;                                  \
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
      /* Set up the commands to be called at runtime to register req*/         \
      template <>                                                              \
      void rt_register_req<BETags::BACKEND_REQ, Tags::FUNCTION>()              \
      {                                                                        \
        map_bools[STRINGIFY(CAT(BE_##BACKEND_REQ,FUNCTION))] =                 \
         &needs_from_backend<BETags::BACKEND_REQ,Tags::FUNCTION>;              \
        iMayNeedFromBackends[STRINGIFY(BACKEND_REQ)] = STRINGIFY(TYPE);        \
        /*Functown::FUNCTION.addToBEList<TYPE>                                 \
         (Backend_Reqs::FUNCTION::BACKEND_REQ);*/                              \
      }                                                                        \
                                                                               \
      /* Create the dependency initialisation object */                        \
      namespace Ini                                                            \
      {                                                                        \
        ini_code CAT(BACKEND_REQ##_backend_for_,FUNCTION)                      \
         (&rt_register_req<BETags::BACKEND_REQ,                                \
         Tags::FUNCTION>);                                                     \
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
      /* Create a pointer to the backend function functor.  To be filled by    \
      the dependency resolver at runtime. */                                   \
      namespace Backend_Reqs                                                   \
      {                                                                        \
        namespace FUNCTION                                                     \
        {                                                                      \
          extern backend_functor<TYPE> *BACKEND_REQ;                           \
        }                                                                      \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \

#endif // defined(__observable_hpp__) 

