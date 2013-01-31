//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Generic observable and likelihood object 
//  definitions.
//
//  Initially inspired by Abram  
//  Krislock's Objects.hpp.
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
//  2013  Jan 18, 29, 30
//
//  Abram Krislock
//  2013 Jan 31
//  *********************************************

#ifndef __observable_hpp__
#define __observable_hpp__

#include <map>
#include <string>
#include <iostream>
#include <dictionary.hpp>

#define STRINGIFY(X) STRINGIFY2(X)
#define STRINGIFY2(X) #X

namespace GAMBIT {

  /* Observable/likelihood function wrapper class */
  struct function_wrapper {
    function_wrapper(void (*unroll)()) { (*unroll)(); }
  };

}

#define START_MODULE                                                           \
                                                                               \
  namespace GAMBIT {                                                           \
                                                                               \
    namespace MODULE {                                                         \
                                                                               \
      /* A way to fetch a trait of an observable or likelihood                 \
      (like its type), based on its tag.*/                                     \
      template <typename TAG>                                                  \
      struct function_traits {                                                 \
        typedef double type;  /* Scalar numerical value by default. */         \
      };                                                                       \
                                                                               \
      /* Methods and functions associated with an observable or likelihood,    \
      identified by its tag and the module to which it belongs. */             \
      template <typename TAG>                                                  \
      struct function_policies {                                               \
        static typename function_traits<TAG>::type (*value)();                 \
      };                                                                       \
                                                                               \
      /* Equivalent class for dependencies, where TAG is dependent upon        \
      DEP_TAG */                                                               \
      template <typename DEP_TAG, typename TAG>                                \
      struct dep_traits {                                                      \
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
      /* all module observables/likelihoods, their dependencies and            \
      their types, as strings */                                               \
      static std::map<std::string,std::string> iCanDo;                         \
      static std::map<std::string,std::string> iMayNeed;                       \
                                                                               \
      /* module provides observable/likelihood TAG? */                         \
      template <typename TAG> bool provides() { return false; }                \
                                                                               \
      /* overloaded, non-templated version */                                  \
      bool provides(std::string obs) {                                         \
        if (map_bools.find(obs) == map_bools.end()) { return false; }          \
        return (*map_bools[obs])();                                            \
      }                                                                        \
                                                                               \
      /* module requires observable/likelihood DEP_TAG to compute TAG */       \
      template <typename DEP_TAG, typename TAG>                                \
        bool requires() { return false; }                                      \
                                                                               \
      /* overloaded, non-templated version */                                  \
      bool requires(std::string dep, std::string obs) {                        \
        if (map_bools.find(dep+obs) == map_bools.end()) { return false; }      \
        return (*map_bools[dep+obs])();                                        \
      }                                                                        \
                                                                               \
      /* report on observable/likelihood TAG */                                \
      template <typename TAG> void report() {                                  \
        std::cout<<"This tag is not supported by ";                            \
        std::cout<<STRINGIFY(MODULE)<<"."<<std::endl;                          \
      }                                                                        \
                                                                               \
      /* overloaded, non-templated version */                                  \
      void report(std::string obs) {                                           \
        if (map_voids.find(obs) == map_voids.end()) {                          \
          std::cout<<"This tag is not supported by ";                          \
          std::cout<<STRINGIFY(MODULE)<<"."<<std::endl;                        \
        }                                                                      \
        else { (*map_voids[obs])(); }                                          \
      }                                                                        \
                                                                               \
      /* alias for observable/likelihood function TAG */                       \
      template <typename TAG> typename function_traits<TAG>::type result() {   \
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
      template <typename TYPE> TYPE result(std::string obs) {                  \
        return ( *moduleDict.get<TYPE(*)()>(obs) )();                          \
      }                                                                        \
                                                                               \
      /* runtime registration function for observable/likelihood function TAG*/\
      template <typename TAG> void rt_register_function () {                   \
        std::cout<<"This tag is not supported by ";                            \
        std::cout<<STRINGIFY(MODULE)<<"."<<std::endl;                          \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \
                                                                               

#define START_FUNCTION                                                         \
                                                                               \
  namespace GAMBIT {                                                           \
                                                                               \
    /* Add FUNCTION to the global set of tags of recognised functions */       \
    ADD_TAG_IN_CURRENT_NAMESPACE(FUNCTION)                                     \
                                                                               \
    namespace MODULE {                                                         \
                                                                               \
      /* Indicate that this module can provide function FUNCTION */            \
      template <> bool provides<GAMBIT::Tags::FUNCTION>() {                    \
        return true;                                                           \
      }                                                                        \
                                                                               \
      /* Set up an auxilary method to report stuff to the core about the       \
      function.  Not actually sure what this would                             \
      be used for at this stage. */                                            \
      template <>                                                              \
      void report<GAMBIT::Tags::FUNCTION>() {                                  \
        std::cout<<"Dear Core, I provide the function with tag: "<<            \
        STRINGIFY(FUNCTION)<<std::endl;                                        \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \


#define RETURN_TYPE(TYPE)                                                      \
                                                                               \
  namespace GAMBIT {                                                           \
                                                                               \
    namespace MODULE {                                                         \
                                                                               \
      /* Register (prototype) the function */                                  \
      TYPE FUNCTION ();                                                        \
                                                                               \
      /* Register the FUNCTION's return TYPE */                                \
      template<> struct function_traits<GAMBIT::Tags::FUNCTION> {              \
        typedef TYPE type;                                                     \
      };                                                                       \
                                                                               \
      /* Set up a function pointer to FUNCTION */                              \
      template<> function_traits<GAMBIT::Tags::FUNCTION>::type                 \
       (*function_policies<GAMBIT::Tags::FUNCTION>::value)() = FUNCTION;       \
                                                                               \
      /* Set up an alias function to call the function using the pointer */    \
      template <> function_traits<GAMBIT::Tags::FUNCTION>::type                \
       result<GAMBIT::Tags::FUNCTION>() {                                      \
         return function_policies<GAMBIT::Tags::FUNCTION>::value();            \
      }                                                                        \
                                                                               \
      /* Set up the commands to be called at runtime to register the function*/\
      template <> void rt_register_function<Tags::FUNCTION> () {               \
        map_bools[STRINGIFY(FUNCTION)] = &provides<Tags::FUNCTION>;            \
        map_voids[STRINGIFY(FUNCTION)] = &report<Tags::FUNCTION>;              \
        iCanDo[STRINGIFY(FUNCTION)] = STRINGIFY(TYPE);                         \
        moduleDict.set<TYPE(*)()>(STRINGIFY(FUNCTION),&result<Tags::FUNCTION>);\
      }                                                                        \
                                                                               \
      /* Create the function wrapper object */                                 \
      namespace Function_Wrappers {                                            \
        function_wrapper FUNCTION(&rt_register_function<Tags::FUNCTION>);      \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \
                                                                          

#define DEPENDENCY(DEP, TYPE)                                                  \
                                                                               \
  namespace GAMBIT {                                                           \
                                                                               \
    /* Add DEP to the global set of tags of recognised functions */            \
    ADD_TAG_IN_CURRENT_NAMESPACE(DEP)                                          \
                                                                               \
    namespace MODULE {                                                         \
                                                                               \
      /* Register the required TYPE of the required observable or likelihood   \
      function DEP */                                                          \
      template<> struct dep_traits<GAMBIT::Tags::DEP,GAMBIT::Tags::FUNCTION> { \
        typedef TYPE type;                                                     \
      };                                                                       \
                                                                               \
      /* Indicate that the implementation of FUNCTION in MODULE                \
      requires the observable or likelihood function DEP to                    \
      have been computed previously in order to run correctly. */              \
      template <> bool requires<GAMBIT::Tags::DEP, Tags::FUNCTION>() {         \
        return true;                                                           \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \
  }                                                                            \


#define ADD_TAG_IN_CURRENT_NAMESPACE(TAG) namespace Tags { struct TAG; }













// Set up a map with all the function names and their type names
//#define SUMMARISE_OBS_IN_DRIVER(MODULE, DETAILS)                             \
  const std::map<std::string,std::string>                                    \
   PASTE(MODULE,_cls)::iCanDo = boost::assign::map_list_of DETAILS;


// Set up a map with all the dependency names and their type names
//#define SUMMARISE_DEP_IN_DRIVER(MODULE, DETAILS)                             \
  const std::map<std::string,std::string>                                    \
   PASTE(MODULE,_cls)::iMayNeed = boost::assign::map_list_of DETAILS;



// Make the map entries in the constructor for depedencies
//  map_bools[BOOST_PP_STRINGIZE(DEP_TAG##OBSLIKE_TAG)] =                      \
//   &PASTE(MODULE,_cls)::requires<Tags::OBSLIKE_TAG, Tags::DEP_TAG>;          \




#endif // defined(__observable_hpp__) 

