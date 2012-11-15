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
//  Nov 15 2012 (inspired by Abram Krislock's 
//               ModuleBit.hpp)
//
//  *********************************************

#ifndef __module__
#define __module__

#include <iostream>
#include <stdio.h>
#include <map>
#include <vector>
#include "observable.hpp"

// Abstract base class for a generic module that can provide observable and 
// likelihood functions.  The only real reason this is here is so that I can
// later create a vector of pointers to this class which are actually pointers
// to the various daughter classes.  Although so far that seems to be useless
// as I can't call any of the templated members of the daughter classes via
// a pointer of the base class type. (see commented code at l 67 of gambit_example.cpp) 
class module { 
  public: 
    virtual std::string name() = 0; 
    virtual bool provides() { return false; };
    virtual bool requires() { return false; };
    virtual void report() {};
    virtual void result() {};
};

// Create a generic map from {module names} to {module instantiation methods}.
// When the macro CREATE_MODULE is called, it should add to this map the module 
// name and a function calling the module constructor... but I can't get that working.
template<typename specific_module_name> 
  module * createInstance() { 
    return new specific_module_name;
  }
typedef std::map<std::string, module*(*)()> map_type;

#ifndef __in_module__
// Instantiate the map
map_type module_map;
// Create vector of strings that will contain the names of the all the
// module daughter classes that are created by calls to CREATE_MODULE
std::vector<std::string> module_names;
#endif

#define CREATE_MODULE(MODULE) \
/*  Create a specific module daughter class */ \
\
class MODULE##_cls : public module { \
  public: \
    /* module name */ \
    std::string name() { return #MODULE; } \
    \
    /* module provides observable/likelihood TAG? */ \
    template <typename TAG> bool provides() { return false; } \
    \
    /* module requires observable/likelihood DEP_TAG to compute TAG */ \
    template <typename DEP_TAG, typename TAG> \
      bool requires() { return false; } \
    /* report on observable/likelihood TAG */ \
    template <typename TAG> void report() { \
      std::cout<<"I do not support this tag. \n"; \
      } \
    /* alias for function TAG */ \
    template <typename TAG> \
    typename obs_or_like_traits<TAG,MODULE##_cls>::type result() { \
      std::cout<<"I do not support this tag. \n"; \
      return 0; \
    } \
};

//This doesn't work until the functions have been added -- still need to sort out how to automatically 
//register new modules as present, so that they can be instantiated automatically in a loop in the driver.
/* Save instantiation method and module name into map */ \
//module_map["MODULE##_cls"] = &createInstance<MODULE##_cls>; \
/* Save module name into list of strings of available module names */ \
//module_names.push_back("MODULE##_cls");

#endif /* defined(__module__) */
