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
//  Nov 10-14 2012 (inspired by Abram Krislock's 
//               Objects.hpp)
//
//  *********************************************

#ifndef __observable_hpp__
#define __observable_hpp__

template <typename Tag>
struct obs_or_like_traits {
// A way to fetch a trait of an observable or likelihood
// (like its type), based on its tag.
    typedef double type;  // Scalar numerical value by default.
};

template <typename Tag>
struct obs_or_like_policies {
// Methods and functions associated with an observable 
// or likelihood, identified by its tag.
    static typename obs_or_like_traits<Tag>::type (*value)();
};


//Todo: hoist templates as far as possible
//      work out how the hell to log module daughter classes at compile time
//      define new SET_DEPENDENCY(MODULE, OBSLIKE_TAG, DEP_TAG, TYPE) 
//       macro for giving dependency to an obs or like

#define CREATE_OBS_OR_LIKE(MODULE, TAG, TYPE) \
/* Create an observable or likelihood object identified by TAG,  
   with a given return type TYPE, and associate it with MODULE */ \
\
namespace Tags { \
/* Add the observable or likelihood to the global list of calculable 
   observables */ \
  struct TAG; \
  namespace MODULE { \
  /* Add the observable or likelihood to the MODULE-specific list of 
     calculable observables.  We need a nested namespace here as 
     multiple modules could define the same observable
     in different ways, with different return types */ \
    struct TAG{}; \
  } \
} \
\
namespace MODULE { \
/* Register (prototype) the function TAG in namespace for MODULE */ \
  TYPE TAG (); \
}\
\
template <> \
/* Indicate that MODULE can provide the observable or likelihood 
   function TAG */ \
bool MODULE##_cls::provides<Tags::TAG>() { \
  return true; \
} \
\
template<> \
/* Register the return TYPE of the observable or likelihood 
   function TAG in MODULE */ \
struct obs_or_like_traits<Tags::MODULE::TAG> { \
  typedef TYPE type; \
}; \
\
template<> \
/* Set up a function pointer to function TAG in MODULE */ \
/*  static typename obs_or_like_traits<Tags::MODULE::TAG>::type \
   * obs_or_like_policies<Tags::MODULE::TAG>::value = NULL; */\
  static typename obs_or_like_traits<Tags::MODULE::TAG>::type \
   (*obs_or_like_policies<Tags::MODULE::TAG>::value)() = MODULE::TAG; \
\
template <> \
/* Set up a function to return a pointer to the value returned by 
   this function pointer */ \
typename obs_or_like_traits<Tags::MODULE::TAG>::type \
 * MODULE##_cls::result_address<Tags::MODULE::TAG>() { \
  /* return obs_or_like_policies<Tags::MODULE::TAG>::value; */ \
  return &((*obs_or_like_policies<Tags::MODULE::TAG>::value)()); \
} \
\
template <> \
/* Set up an auxilary method to report stuff to the core about the
   observable or likelihood TAG */\
void MODULE##_cls::report<Tags::TAG>() { \
  std::cout<<"Dear Core, I provide the function with tag: \n"; \
  std::cout<<typeid(Tags::MODULE::TAG).name()<<"\n"; \
}

#endif /* defined(__observable_hpp__) */

