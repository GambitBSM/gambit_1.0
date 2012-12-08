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
//
//  *********************************************

#ifndef __observable_hpp__
#define __observable_hpp__

#include <map>
#include <boost/assign.hpp>
#include <boost/preprocessor/stringize.hpp>
//#include <boost/mpl/map.hpp>
//#include <boost/mpl/pair.hpp>
//#include <boost/mpl/at.hpp>

#define __DUMMY__
#define __DUMMY_FUNC__(...)
#define PASTE(X,Y) PASTE_HIDDEN(X,Y)
#define PASTE_HIDDEN(X,Y) X##Y

template <typename Tag, typename Module>
struct obs_or_like_traits {
// A way to fetch a trait of an observable or likelihood
// (like its type), based on its tag and the module to which it belongs.
    typedef double type;  // Scalar numerical value by default.
};

template <typename Tag, typename Module>
struct obs_or_like_policies {
// Methods and functions associated with an observable 
// or likelihood, identified by its tag and the module to which it belongs.
    static typename obs_or_like_traits<Tag,Module>::type (*value)();
};


// Equivalent classes for dependencies, where both a dependent and 
// independent tag need to be specified
template <typename indepTag, typename depTag, typename Module>
struct dep_traits {
    typedef double type;  // Scalar numerical value by default.
};

template <typename indepTag, typename depTag, typename Module>
struct dep_policies {
    static typename dep_traits<indepTag,depTag,Module>::type (*value)();
};

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
  /* Instantiate the bastard at last (action?! for reals?) */                 \
  MAKE_INSTANCE(MODULE)                                                       \

// Work out which versions of the macros to call, depending on
// whether this file is being included in a main or a linked
// object file.
#ifdef __in_module__
  #define CREATE_OBS_OR_LIKE      CREATE_OBS_OR_LIKE_IN_MODULE
  #define SET_DEPENDENCY          __DUMMY_FUNC__
  #define SUMMARISE_OBS           __DUMMY_FUNC__
  #define SUMMARISE_DEP           __DUMMY_FUNC__
  #define MAKE_INSTANCE           __DUMMY_FUNC__
  #define MAKE_CONSTRUCTOR        __DUMMY_FUNC__
#else
  #define CREATE_OBS_OR_LIKE      CREATE_OBS_OR_LIKE_IN_DRIVER
  #define SET_DEPENDENCY          SET_DEPENDENCY_IN_DRIVER
  #define SUMMARISE_OBS           SUMMARISE_OBS_IN_DRIVER
  #define SUMMARISE_DEP           SUMMARISE_DEP_IN_DRIVER  
  #define MAKE_INSTANCE           MAKE_INSTANCE_IN_DRIVER
  #define MAKE_CONSTRUCTOR        MAKE_CONSTRUCTOR_IN_DRIVER
#endif


/* Just register (prototype) the function TAG in namespace for
   MODULE. */ \
#define CREATE_OBS_OR_LIKE_IN_MODULE(MODULE, TAG, TYPE)                      \
namespace MODULE { TYPE TAG (); }                                            \


// Create an observable or likelihood object identified by TAG,  
// with a given return type TYPE, and associate it with MODULE
#define CREATE_OBS_OR_LIKE_IN_DRIVER(MODULE, TAG, TYPE)                      \
                                                                             \
  /* Add the observable or likelihood to the global list of calculable       \
     observables */                                                          \
  namespace Tags { struct TAG; }                                             \
                                                                             \
  /* Register (prototype) the function TAG in namespace for MODULE */        \
  namespace MODULE { TYPE TAG (); }                                          \
                                                                             \
  /* Indicate that MODULE can provide the observable or likelihood           \
     function TAG */                                                         \
  template <> bool PASTE(MODULE,_cls)::provides<Tags::TAG>() {               \
    return true; }                                                           \
                                                                             \
  /* Register the return TYPE of the observable or likelihood                \
     function TAG in MODULE */                                               \
  template<>                                                                 \
  struct obs_or_like_traits<Tags::TAG,PASTE(MODULE,_cls)> {                  \
    typedef TYPE type;                                                       \
  };                                                                         \
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
  /* Set up an auxilary method to report stuff to the core about the         \
     observable or likelihood TAG.  Not actually sure what this would        \
     be used for at this stage. */                                           \
  template <>                                                                \
  void PASTE(MODULE,_cls)::report<Tags::TAG>() {                             \
    std::cout<<"Dear Core, I provide the function with tag: "<<              \
     #TAG<<std::endl;                                                        \
  }


// Set function OBSLIKE_TAG in module MODULE to depend on function 
// DEP_TAG, which must have type TYPE 
#define SET_DEPENDENCY_IN_DRIVER(MODULE, OBSLIKE_TAG, DEP_TAG, TYPE)         \
  /* Add the dependency to the global list of (presumably)                   \
     calculable observables; if nothing actually reports that                \
     it can calculate this, the core shall throw an error. */                \
  namespace Tags { struct DEP_TAG; }                                         \
                                                                             \
  /* Indicate that the implementation of OBSLIKE_TAG in MODULE               \
     requires the observable or likelihood function DEP_TAG to               \
     have been computed previously in order to run correctly. */             \
  template <>                                                                \
  bool PASTE(MODULE,_cls)::requires<Tags::DEP_TAG, Tags::OBSLIKE_TAG>() {    \
    return true; }                                                           \
                                                                             \
  /* Register the required TYPE of the required observable or likelihood     \
     function DEP_TAG in MODULE */                                           \
  template<>                                                                 \
  struct dep_traits<Tags::DEP_TAG,Tags::OBSLIKE_TAG,PASTE(MODULE,_cls)> {    \
    typedef TYPE type;                                                       \
  };                                                                         \


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
  void PASTE(MODULE,_cls)::PASTE(MODULE,_cls_deferred_constructor)() {       \
    CONTENTS_##MODULE(MODULE,CONSTRUCT_PROVIDES,CONSTRUCT_REQUIRES) }        \

// Make the map entries in the constructor corresponding to observables / likes
#define CONSTRUCT_PROVIDES(MODULE, TAG, TYPE)                                \
  map_bools[#TAG] = &PASTE(MODULE,_cls)::provides<Tags::TAG>;                \
  map_voids[#TAG] = &PASTE(MODULE,_cls)::report<Tags::TAG>;                  \
  //map_any[#TAG]   = &PASTE(MODULE,_cls)::result<Tags::TAG>;                \

// Make the map entries in the constructor corresponding to depedencies
#define CONSTRUCT_REQUIRES(MODULE, OBSLIKE_TAG, DEP_TAG, TYPE)               \
  map_bools[BOOST_PP_STRINGIZE(DEP_TAG##OBSLIKE_TAG)] =                      \
   &PASTE(MODULE,_cls)::requires<Tags::OBSLIKE_TAG, Tags::DEP_TAG>;          \



// Instantiate a module daughter class, naming the new object MODULE_obj 
#define MAKE_INSTANCE_IN_DRIVER(MODULE) MODULE##_cls MODULE##_obj;


#endif /* defined(__observable_hpp__) */

