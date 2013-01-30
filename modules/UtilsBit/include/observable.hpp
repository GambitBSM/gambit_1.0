//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Generic observable and likelihood object 
//  definitions.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Pat Scott
//  Nov 15++ 2012 (initially inspired by Abram  
//                 Krislock's Objects.hpp)
//  Jan 18,29 2013
//
//  *********************************************

#ifndef __observable_hpp__
#define __observable_hpp__

#include <map>
#include <string>
#include <iostream>
#include <dictionary.hpp>

#define PASTE(X,Y) PASTE_HIDDEN(X,Y)
#define PASTE_HIDDEN(X,Y) X##Y
#define STRINGIFY(X) STRINGIFY2(X)
#define STRINGIFY2(X) #X

namespace GAMBIT {

  // A way to fetch a trait of an observable or likelihood
  // (like its type), based on its tag and the module to which it belongs.
  template <typename Tag>
  struct obs_or_like_traits {
    typedef double type;  // Scalar numerical value by default.
  };

  // Methods and functions associated with an observable 
  // or likelihood, identified by its tag and the module to which it belongs.
  template <typename Tag>
  struct obs_or_like_policies {
    static typename obs_or_like_traits<Tag>::type (*value)();
  };

  // Equivalent classes for dependencies, where both a dependent and 
  // independent tag need to be specified
  template <typename indepTag, typename depTag>
  struct dep_traits {
    typedef double type;  // Scalar numerical value by default.
  };

}

#define START_MODULE                                                           \
                                                                               \
  namespace GAMBIT {                                                           \
                                                                               \
    namespace MODULE {                                                         \
                                                                               \
      /* module name */                                                        \
      std::string name() { return STRINGIFY(MODULE); }                         \
                                                                               \
      /* maps from tag strings to tag-specialisted functions */                \
      std::map<std::string, bool(*)()> map_bools;                              \
      std::map<std::string, void(*)()> map_voids;                              \
      GAMBIT::dict moduleDict;                                                 \
                                                                               \
      /* module provides observable/likelihood NAME? */                        \
      template <typename TAG> bool provides() { return false; }                \
                                                                               \
      /* overloaded, non-templated version */                                  \
      bool provides(std::string s) {                                           \
        if (map_bools.find(s) == map_bools.end()) { return false; }            \
        return (*map_bools[s])();                                              \
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
        std::cout<<"I do not support this tag."<<std::endl;                    \
      }                                                                        \
                                                                               \
      /* overloaded, non-templated version */                                  \
      void report(std::string s) {                                             \
        if (map_voids.find(s) == map_voids.end()) {                            \
          std::cout<<"I do not support this tag."<<std::endl; }                \
        else { (*map_voids[s])(); }                                            \
      }                                                                        \
                                                                               \
      /* all module observables/likelihoods, their dependencies and            \
      their types, as strings */                                               \
      static const std::map<std::string,std::string> iCanDo;                   \
      static const std::map<std::string,std::string> iMayNeed;                 \
                                                                               \
      /* alias for observable/likelihood function TAG */                       \
      template <typename TAG> typename obs_or_like_traits<TAG>::type result() {\
        std::cout<<"I do not support this tag. \n";                            \
        return 0;                                                              \
      }                                                                        \
                                                                               \
      /* overloaded, 'stringy' version */                                      \
      /* A templated function that uses an input string s to pull a pointer to \
      the zero-parameter alias fuction above out of the module's private       \
      dictionary.  It then dereferences that pointer, calls the function and   \
      returns the result. */                                                   \
      template <typename TYPE> TYPE result(std::string s) {                    \
        return ( *moduleDict.get<TYPE(MODULE::*)()>(s) )();                    \
      }                                                                        \
                                                                               \
      /* First draft of an observable/likelihood function wrapper class */     \
      template <typename TYPE> struct functor {                                \
        functor (std::string function_name, bool (*provides)(),                \
                 void (*report)(), TYPE result) {                              \
          map_bools[function_name] = provides();                               \
          map_voids[function_name] = report();                                 \
          moduleDict.set<TYPE>(function_name, result());                       \
        }                                                                      \
      };                                                                       \
                                                                               \
    }                                                                          \
                                                                               \


#define START_FUNCTION                                                         \
                                                                               \
    /* Add FUNCTION to the global set of tags of recognised functions */       \
    ADD_TAG_IN_CURRENT_NAMESPACE(FUNCTION)                                     \
                                                                               \
    namespace MODULE {                                                         \
                                                                               \
      /* Add FUNCTION to the local set of tags of recognised functions */      \
      ADD_TAG_IN_CURRENT_NAMESPACE(FUNCTION)                                   \
                                                                               \
      /* Indicate that this module can provide function FUNCTION */            \
      template <> bool provides<GAMBIT::Tags::FUNCTION>() {                    \
        return true;                                                           \
      }                                                                        \
      template <> bool provides<Tags::FUNCTION>() {                            \
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
      template <>                                                              \
      void report<Tags::FUNCTION>() {                                          \
        std::cout<<"Dear Core, I provide the function with tag: "<<            \
        STRINGIFY(FUNCTION)<<std::endl;                                        \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               

#define RETURN_TYPE(TYPE)                                                      \
                                                                               \
    /* Register (prototype) the function          */                           \
    namespace MODULE { TYPE FUNCTION (); }                                     \
                                                                               \
    /* Register the FUNCTION's return TYPE */                                  \
    template<> struct obs_or_like_traits<MODULE::Tags::FUNCTION> {             \
      typedef TYPE type;                                                       \
    };                                                                         \
                                                                               \
    /* Set up a function pointer to FUNCTION */                                \
    template<> obs_or_like_traits<MODULE::Tags::FUNCTION>::type                \
     (*obs_or_like_policies<MODULE::Tags::FUNCTION>::value)() =                \
     MODULE::FUNCTION;                                                         \
                                                                               \
    /* Set up an alias function to call the function using the pointer */      \
    template <> obs_or_like_traits<MODULE::Tags::FUNCTION>::type               \
     MODULE::result<MODULE::Tags::FUNCTION>() {                                \
       return obs_or_like_policies<MODULE::Tags::FUNCTION>::value();           \
     }                                                                         \
                                                                               \
//    This doesn't work yet - the functor class needs work
//     namespace MODULE {                                                      \
      functor<TYPE(MODULE::*)()> PASTE(FUNCTION,_functor)(                     \
       STRINGIZE(FUNCTION),                                                    \
       &provides<Tags::FUNCTION>,                                              \
       &report<Tags::FUNCTION>,                                                \
       &result<Tags::FUNCTION>)                                                \
     }                                                                         \
                                                                          

#define DEPENDENCY(DEP, TYPE)                                                  \
                                                                               \
    /* Add DEP to the global set of tags of recognised functions */            \
    ADD_TAG_IN_CURRENT_NAMESPACE(DEP)                                          \
                                                                               \
    /* Register the required TYPE of the required observable or likelihood     \
    function DEP */                                                            \
    template<> struct dep_traits<Tags::DEP,MODULE::Tags::FUNCTION> {           \
      typedef TYPE type;                                                       \
    };                                                                         \
                                                                               \
    namespace MODULE {                                                         \
                                                                               \
      /* Indicate that the implementation of FUNCTION in MODULE                \
      requires the observable or likelihood function DEP to                    \
      have been computed previously in order to run correctly. */              \
      template <>                                                              \
      bool requires<GAMBIT::Tags::DEP, Tags::FUNCTION>() {                     \
        return true;                                                           \
      }                                                                        \
                                                                               \
    }                                                                          \


#define ADD_TAG_IN_CURRENT_NAMESPACE(TAG) namespace Tags { struct TAG; }
                                                                             
#define END_MODULE                                                             \
  }















// Set up a map with all the function names and their type names
//#define SUMMARISE_OBS_IN_DRIVER(MODULE, DETAILS)                             \
  const std::map<std::string,std::string>                                    \
   PASTE(MODULE,_cls)::iCanDo = boost::assign::map_list_of DETAILS;


// Set up a map with all the dependency names and their type names
//#define SUMMARISE_DEP_IN_DRIVER(MODULE, DETAILS)                             \
  const std::map<std::string,std::string>                                    \
   PASTE(MODULE,_cls)::iMayNeed = boost::assign::map_list_of DETAILS;


// Make the map entries in the constructor for observables / likes
//  map_bools[STRINGIZE(FUNCTION)] = &provides<Tags::FUNCTION>;                \
  map_voids[STRINGIZE(FUNCTION)] = &report<Tags::FUNCTION>;                  \
  moduleDict.set<TYPE(MODULE::*)()>                                          \
   (STRINGIZE(FUNCTION), &result<Tags::FUNCTION>);                           \


// Make the map entries in the constructor for depedencies
//  map_bools[BOOST_PP_STRINGIZE(DEP_TAG##OBSLIKE_TAG)] =                      \
//   &PASTE(MODULE,_cls)::requires<Tags::OBSLIKE_TAG, Tags::DEP_TAG>;          \




#endif // defined(__observable_hpp__) 

