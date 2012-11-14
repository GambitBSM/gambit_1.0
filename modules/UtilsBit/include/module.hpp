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
//  Nov 10-14 2012 (inspired by Abram Krislock's 
//               ModuleBit.hpp)
//
//  *********************************************

#ifndef __module__
#define __module__

#include <iostream>
#include <typeinfo>
#include "observable.hpp"

// Abstract base class for a generic module that can provide observable and 
// likelihood functions.  The only real reason this is here is so that I can
// later create a vector of pointers to this class which are actually pointers
// to the various daughter classes. 
class module { 
  public: 
    virtual std::string name() = 0;    
    virtual void * result_address() { return 0; } 
    virtual bool provides() { return false; }    
    virtual void report() {}
}; 

// Create a generic map from {module names} to {module instantiation methods}.
// When the macro CREATE_MODULE is called, it should add to this map the module 
// name and a function calling the module constructor.
template<typename specific_module_name> 
  module * createInstance() { 
    return new specific_module_name;
  }
typedef std::map<std::string, module*(*)()> map_type;
map_type module_map;

// Create vector of strings that will contain the names of the all the
// module daughter classes that are created by calls to CREATE_MODULE
std::vector<std::string> module_names;

#define CREATE_MODULE(MODULE) \
/*  Create a specific module daughter class */ \
\
class MODULE##_cls : public module { \
  \
  public: \
    \
    std::string name() { \
      return #MODULE; \
    } \
    \
    template <typename Tag> \
    typename obs_or_like_traits<Tag>::type * result_address() { \
      std::cout<<"I do not support this tag: \n"; \
      std::cout<<typeid(Tag).name()<<"\n"; \
      return 0; \
    } \
    \
    template <typename Tag> \
    bool provides() { \
      return false; \
    } \
    \
    template <typename Tag> \
    void report() { \
      std::cout<<"I do not support this tag. \n"; \
      /* Report stuff to the core about the observable or likelihood <Tag> */\
    } \
\
}; \
\

//This doesn't work in a header -- still need to sort out how to automatically 
//register new modules as present, so that they can be instantiated automatically
/* Save instantiation method and module name into map */ \
//module_map["MODULE##_cls"] = &createInstance<MODULE##_cls>; \
/* Save module name into list of strings of available module names */ \
//module_names.push_back("MODULE##_cls");

#endif /* defined(__module__) */
