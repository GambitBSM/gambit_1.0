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
#include <observable.hpp>
#include <boost/preprocessor/seq/elem.hpp>

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
    //const std::map<std::string,std::string> iCanDo;
    //const std::map<std::string,std::string> iMayNeed;
};


//  Create a specific module daughter class 
#define CREATE_MODULE(MODULE)                                             \
                                                                          \
class PASTE(MODULE,_cls) : public module {                                \
  public:                                                                 \
    /* module name */                                                     \
    std::string name() { return #MODULE; }                                \
                                                                          \
    /* all provided observables/likelihoods, their dependencies and       \
       their types, as strings */                                         \
    static const std::map<std::string,std::string> iCanDo;                \
    static const std::map<std::string,std::string> iMayNeed;              \
                                                                          \
    /* module provides observable/likelihood TAG? */                      \
    template <typename TAG> bool provides() { return false; }             \
                                                                          \
    /* module requires observable/likelihood DEP_TAG to compute TAG */    \
    template <typename DEP_TAG, typename TAG>                             \
      bool requires() { return false; }                                   \
                                                                          \
    /* report on observable/likelihood TAG */                             \
    template <typename TAG> void report() {                               \
      std::cout<<"I do not support this tag. \n";                         \
      }                                                                   \
    /* alias for function TAG */                                          \
    template <typename TAG>                                               \
    typename obs_or_like_traits<TAG,PASTE(MODULE,_cls)>::type result() {  \
      std::cout<<"I do not support this tag. \n";                         \
      return 0;                                                           \
    }                                                                     \
};                                                                        \



//  Create a Boost preprocessor sequence out of the strings
//  of all available observable or likelihood functions offered
//  by all modules.
#define TAGSTRING_SEQ MODULE_ROSTER(CREATE_TAGSTRING_SEQ)

//  Create a Boost preprocessor sequence out of the strings
//  of all available observable or likelihood functions offered
//  by a given MODULE.
#define CREATE_TAGSTRING_SEQ(MODULE)                                      \
  CONTENTS_##MODULE(MODULE,OBS_TAGSTRING_BRACKETS,DEP_TAGSTRING_BRACKETS)

//  Process an individual OBS_OR_LIKE CONTENTS entry
//  into a a Boost preprocessor sequence element.
#define OBS_TAGSTRING_BRACKETS(MODULE, TAG, TYPE) (#TAG)

//  Process an individual DEPENDENCY CONTENTS entry
//  into a a Boost preprocessor sequence element.
#define DEP_TAGSTRING_BRACKETS(MODULE, OBSLIKE_TAG, DEP_TAG, TYPE) (#DEP_TAG)

//  Helper macros for Boost preprocessor enum macro calls.
//   Returns sequence element  
#define SEQ_ENTRY(Z,N,DATA) BOOST_PP_SEQ_ELEM(N,DATA)
//   Defines map entry for tag string to index map 
#define MAPMAKER(Z,N,DATA) (ts_arr[N], ts_indx[N])


#endif /* defined(__module__) */




//#ifndef __in_module__
// Create a sequence of module daughter class types
//typedef boost::mpl::vector<> PASTE(module_list_,BOOST_PP_COUNTER);
//#endif


/* Add the new daughter class to the sequence of registered modules */    \
//typedef boost::mpl::push_back<PASTE(module_list_,BOOST_PP_COUNTER), PASTE(MODULE,_cls)>::type \
 PASTE(module_list_,BOOST_PP_ADD(BOOST_PP_COUNTER,1)); \

//#define FINALISE_MODULES typedef PASTE(module_list_,BOOST_PP_COUNTER) module_list;

