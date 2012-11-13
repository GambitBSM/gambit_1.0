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
//  Nov 10 2012 (inspired by Abram Krislock's 
//               Objects.hpp)
//
//  *********************************************

#ifndef __Observable__
#define __Observable__

template <typename Tag>
struct obs_or_like_traits {
// A way to fetch a trait of an observable or likelihood (like its type), based on its tag.
    typedef double type;  // Scalar numerical value by default.
};

template <typename Tag>
struct obs_or_like_policies {
// Methods and functions associated with an observable or likelihood, identified by its tag.
    static obs_or_like_traits<Tag>::type *value;
};


//Todo: hoist templates as far as possible
//      set individual observables and likes up with a given module by definition at creation
//      define new SET_DEPENDENCY(MODULE, OBSLIKE_TAG, DEP_TAG, TYPE) macro for giving dependency to an obs or like
//      put tags for obs_or_likes in each module in their own namespaces defined by the module name
//      work out where to call all these macros
#define CREATE_OBS_OR_LIKE(MODULE, TAG, TYPE) \
/* Create an observable or likelihood object identified by TAG, with a given return type TYPE*/ \
namespace Tags { \
    struct TAG{}; \
} \
\
template<> \
struct obs_or_like_traits<Tags::TAG> { \
    typedef TYPE type; \
}; \
\
template<> \
obs_or_like_traits<Tags:TAG>::type * obs_or_like_policies<Tags::TAG>::value = NULL;


#endif /* defined(__Observable__) */

