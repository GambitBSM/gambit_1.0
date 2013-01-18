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
//  Jan 18 2013
//
//  *********************************************

#ifndef __module__
#define __module__

#include <map>
#include <string>
#include <iostream>
#include <observable.hpp>
#include <boost/preprocessor/seq/elem.hpp>

// Abstract base class for a generic module that can provide observable and 
// likelihood functions.
class module { 
  public: 
    virtual std::string name() = 0; 
    virtual bool provides() { return false; };
    virtual bool requires() { return false; };
    virtual void report() {};
    virtual void result() {};
    const std::map<std::string,std::string> iCanDo;
    const std::map<std::string,std::string> iMayNeed;
};


//  Create a specific module
#define CREATE_MODULE(MODULE)                                             \
                                                                          \
  /* Prototype the module initialisation function */                      \
  namespace MODULE { void initialize (); }                                \
                                                                          \
  /* Create the specific module daughter class */                         \
  class PASTE(MODULE,_cls) : public module {                              \
                                                                          \
   public:                                                                \
                                                                          \
    /* module constructor */                                              \
    PASTE(MODULE,_cls)() {                                                \
      deferred_constructor () ;                                           \
      initialize () ;                                                     \
    }                                                                     \
                                                                          \
    /* module constructor subroutines */                                  \
    void deferred_constructor () ;                                        \
    void initialize() { MODULE::initialize () ; }                         \
                                                                          \
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
    /* overloaded, non-templated version */                               \
    bool provides(std::string s) {                                        \
      if (map_bools.find(s) == map_bools.end()) { return false; }         \
      return (this->*map_bools[s])(); }                                   \
                                                                          \
    /* module requires observable/likelihood DEP_TAG to compute TAG */    \
    template <typename DEP_TAG, typename TAG>                             \
      bool requires() { return false; }                                   \
    /* overloaded, non-templated version */                               \
    bool requires(std::string dep, std::string obs) {                     \
      if (map_bools.find(dep+obs) == map_bools.end()) { return false; }   \
      return (this->*map_bools[dep+obs])(); }                             \
                                                                          \
    /* report on observable/likelihood TAG */                             \
    template <typename TAG> void report() {                               \
      std::cout<<"I do not support this tag."<<std::endl; }               \
    /* overloaded, non-templated version */                               \
    void report(std::string s) {                                          \
      if (map_voids.find(s) == map_voids.end()) {                         \
        std::cout<<"I do not support this tag."<<std::endl; }             \
      else {                                                              \
        (this->*map_voids[s])(); }                                        \
    }                                                                     \
                                                                          \
    /* alias for function TAG */                                          \
    template <typename TAG>                                               \
    typename obs_or_like_traits<TAG,PASTE(MODULE,_cls)>::type result() {  \
      std::cout<<"I do not support this tag. \n";                         \
      return 0; }                                                         \
    /* overloaded, 'stringy' version */                                   \
    /* Yes, it's very hard to read.  This is a templated member function  \
       that uses an input string s to pull a pointer to another member    \
       function out of the module's private dictionary.  It then          \
       dereferences that pointer, calls the other member function and     \
       returns the result.  The template type is the type of the return   \
       value, and of the return value of the other member function that   \
       this one calls.  The 'other member function' is in fact the        \
       function that this one overloads. */                               \
    template <typename Type>                                              \
    Type result(std::string s) {                                          \
      return ( this ->*                                                   \
       ( moduleDict.get<Type(PASTE(MODULE,_cls)::*)()>(s) ) )(); }        \
                                                                          \
   private:                                                               \
    /* maps from tag strings to tag-specialisted functions */             \
    std::map<std::string, bool(PASTE(MODULE,_cls)::*)()> map_bools;       \
    std::map<std::string, void(PASTE(MODULE,_cls)::*)()> map_voids;       \
    gambit::dict moduleDict;                                              \
};                                                                        \

#endif /* defined(__module__) */

