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
//  Jan 18 2013
//
//  *********************************************

#ifndef __observable_hpp__
#define __observable_hpp__

#include <map>
#include <string>
#include <iostream>
#include <dictionary.hpp>
#include <boost/assign.hpp>
#include <boost/preprocessor/stringize.hpp>

#define __DUMMY__
#define __DUMMY_FUNC__(...)
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

  template <typename indepTag, typename depTag>
  struct dep_policies {
    static typename dep_traits<indepTag,depTag>::type (*value)();
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
        return (*map_bools[s])();                                               \
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
        std::cout<<"I do not support this tag."<<std::endl; }                  \
                                                                               \
      /* overloaded, non-templated version */                                  \
      void report(std::string s) {                                             \
        if (map_voids.find(s) == map_voids.end()) {                            \
          std::cout<<"I do not support this tag."<<std::endl; }                \
        else {                                                                 \
          (*map_voids[s])(); }                                 		       \
      }                                                                        \
                                                                               \
    }                                                                          \
                                                                               \


#define RETURN_TYPE(TYPE)                                                      \
                                                                               \
    /* Add FUNCTION to the global set of tags of recognised functions */       \
    namespace Tags { struct FUNCTION; }                                        \
                                                                               \
    /* Register its return TYPE */                                             \
    template<> struct obs_or_like_traits<Tags::FUNCTION> {                     \
      typedef TYPE type;                                                       \
    };                                                                         \
                                                                               \
    namespace MODULE {                                                         \
                                                                               \
      /* Register (prototype) the function          */                         \
      TYPE FUNCTION ();                                                        \
                                                                               \
      /* Add it to the local set of tags of recognised functions */            \
      namespace Tags { struct FUNCTION; }                                      \
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
                                                                               

#define DEPENDENCY(DEP, TYPE)                                                  \
                                                                               \
    /* Add DEP to the global set of tags of recognised functions */            \
    namespace Tags { struct DEP; }                                             \
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

                                                                             
#define END_MODULE                                                             \
  }

// Completion macro for registration of observables and likelihoods
#define COMPLETE(MODULE) \
  /* Create the module functions */                                           \
  CONTENTS_##MODULE(MODULE,CREATE_OBS_OR_LIKE,SET_DEPENDENCY)                 \
  /* Make string map of names+types of all functions */                       \
  SUMMARISE_OBS(MODULE,CONTENTS_##MODULE(MODULE,OBS_SUMMARY, __DUMMY_FUNC__)) \
  /* Make string map of names+types of all dependencies */                    \
  SUMMARISE_DEP(MODULE,CONTENTS_##MODULE(MODULE,__DUMMY_FUNC__, DEP_SUMMARY)) \
  /* Make the module constructor */                                           \
  MAKE_CONSTRUCTOR(MODULE)                                                    \
                                                   \




// Create an observable or likelihood object identified by TAG,  
// with a given return type TYPE, and associate it with MODULE
#define CREATE_OBS_OR_LIKE_IN_DRIVER(MODULE, TAG, TYPE)                      \
                                                                             \
                                                                             \
  /* Set up a function pointer to function TAG in MODULE */                  \
  template<>                                                                 \
    obs_or_like_traits<Tags::TAG,PASTE(MODULE,_cls)>::type                   \
     (*obs_or_like_policies<Tags::TAG,PASTE(MODULE,_cls)>::value)()          \
      = MODULE::TAG;                                                         \
                                                                             \
  /* Set up an alias function to call the function pointed to by             \
     the one above */                                                        \
  template <>                                                                \
    obs_or_like_traits<Tags::TAG,PASTE(MODULE,_cls)>::type                   \
     PASTE(MODULE,_cls)::result<Tags::TAG>() {                               \
       return obs_or_like_policies<Tags::TAG,PASTE(MODULE,_cls)>::value();   \
     }                                                                       \
                                                                             \




// Set up a map with all the function names and their type names
#define OBS_SUMMARY(MODULE, TAG, TYPE) (#TAG, #TYPE)
#define SUMMARISE_OBS_IN_DRIVER(MODULE, DETAILS)                             \
  const std::map<std::string,std::string>                                    \
   PASTE(MODULE,_cls)::iCanDo = boost::assign::map_list_of DETAILS;


// Set up a map with all the dependency names and their type names
#define DEP_SUMMARY(MODULE, OBSLIKE_TAG, DEP_TAG, TYPE) (#DEP_TAG, #TYPE)    
#define SUMMARISE_DEP_IN_DRIVER(MODULE, DETAILS)                             \
  const std::map<std::string,std::string>                                    \
   PASTE(MODULE,_cls)::iMayNeed = boost::assign::map_list_of DETAILS;


// Set up the module's constructor
#define MAKE_CONSTRUCTOR_IN_DRIVER(MODULE)                                   \
  /* Deferred constructor (function info registration) */                    \
  void PASTE(MODULE,_cls)::deferred_constructor () {                         \
    CONTENTS_##MODULE(MODULE,CONSTRUCT_PROVIDES,CONSTRUCT_REQUIRES)          \
  }                                                                          \


// Make the map entries in the constructor for observables / likes
#define CONSTRUCT_PROVIDES(MODULE, TAG, TYPE)                                \
  map_bools[#TAG] = &PASTE(MODULE,_cls)::provides<Tags::TAG>;                \
  map_voids[#TAG] = &PASTE(MODULE,_cls)::report<Tags::TAG>;                  \
  moduleDict.set<TYPE(PASTE(MODULE,_cls)::*)()>                              \
   (#TAG, &PASTE(MODULE,_cls)::result<Tags::TAG>);                           \


// Make the map entries in the constructor for depedencies
#define CONSTRUCT_REQUIRES(MODULE, OBSLIKE_TAG, DEP_TAG, TYPE)               \
  map_bools[BOOST_PP_STRINGIZE(DEP_TAG##OBSLIKE_TAG)] =                      \
   &PASTE(MODULE,_cls)::requires<Tags::OBSLIKE_TAG, Tags::DEP_TAG>;          \




#endif // defined(__observable_hpp__) 

