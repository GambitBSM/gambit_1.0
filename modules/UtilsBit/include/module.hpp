//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Generic module object definitions
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
//               ModuleBit.hpp)
//
//  *********************************************

#ifndef __Module__
#define __Module__

#include <iostream>
#include <typeinfo>

// Create a generic map from module names to instantiation method for them.
// When the macro CREATE_MODULE is called, it adds the module name and its 
// constructor to this map.
template<typename specific_module_name> 
  module * createInstance() { 
    return new specific_module_name;
  }
typedef std::map<std::string, module*(*)()> map_type;
map_type module_map;

// Create vector of strings that will contain the names of the all the
// module daughter classes that are created by calls to CREATE_MODULE
std::vector<std::string>> module_names


#define CREATE_MODULE(MODULE) \
/*  Create a generic module that can provide observable and 
//  likelihood functions */ \
\
class MODULE {  \
  \
  public: \
    \
    std::string name() { /* probably never needed and can be deleted */\
      return "MODULE"; \
    } \
    \
    template <typename Tag> \
    typename ObjectType<Tag>::type * result_address() { \
      std::cout<<"I do not support this tag: \n"; \
      std::cout<<typeid(Tag).name()<<"\n"; \
      return 0; \
    } \
    \
    template <typename Tag> \ /* can turn this into just a constant member variable instead of a function?? */ \
    bool provides() { \
      return false; \
    } \
    \
    template <typename Tag> \
    void report() { \
      /* Report stuff to the core about the observable or likelihood <Tag> */\
    } \
}; \
/* Save instantiation method and module name into map */ \
module_map["MODULE"] = &createInstance<MODULE>; \
/* Save module name into list of strings of available module names */ \
module_names.push_back("MODULE")

#define PROVIDE_OBS_OR_LIKE(MODULE, TAG) \
/*  Indicate that a specific module can provide a given observable or 
//  likelihood function, identified by TAG */ \
template <> \
obs_or_like_traits<Tags::TAG>::type * MODULE::result_address<Tags::TAG>() { \
  return obs_or_like_policies<Tags::TAG>::value; \
} \
\
template <> \
bool MODULE::provides<Tags::TAG>() { \
  return true; \
} \
\
template <> \
void MODULE::report<Tags::TAG>() { \
  /* Report stuff to the core about the observable or likelihood TAG */\
  std::cout<<"Dear Core, I provide the function with tag: \n"; \
  std::cout<<typeid(Tags::TAG).name()<<"\n"; \
}

#endif /* defined(__Module__) */
