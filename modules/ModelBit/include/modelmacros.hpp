//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Wrapper class and helper macros for model 
//  definitions. Mostly based on contents of
//  UtilsBit/include/observable.hpp (i.e.
//  functors which wrap module functions).
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Ben Farmer
//  2013 May 01
//
//  *********************************************

#include "ModelParameters.hpp"

typedef std::string str;

// Base class for building new models (root of model inheritance tree)
namespace gambit{

class model_base : public ModelParameters
  {
  public:
    virtual std::vector<str>& lineage() const 
    { 
      static std::vector<str> lin;
      lin.assign(1,"model");
      return lin;
    }
    virtual void defineParameters()
    {
      std::cout<<"No parameters defined!"<<std::endl;
    };
  };

// Macro to build new child models, which inherit a vector recording the 
// inherirance pattern

#define STR_VALUE(ARG)  #ARG
#define NEW_CHILD_MODEL(NAME,PARENT)                                           \
class NAME : public PARENT                                                     \
  {                                                                            \
  public:                                                                      \
    static const str& name(void)                                               \
    {                                                                          \
      static const str selfname = STR_VALUE(NAME);                             \
      return selfname;                                                         \
    };                                                                         \
                                                                               \
    void defineParameters();                                                   \
                                                                               \
    /*Need to override constructors since we are going to use them to define   \
    the parameters*/                                                           \
    NAME(){                                                                    \
      defineParameters();                                                      \
    };                                                                         \
    /*~NAME(){};*/                                                             \
                                                                               \
    /*typedef PARENT base;*/                                                   \
    virtual std::vector<str>& lineage() const {                                \
      static std::vector<str> lin;                                             \
      lin = PARENT::lineage();                                                 \
      lin.push_back(STR_VALUE(NAME));                                          \
      return lin;                                                              \
    };                                                                         \
  };                                                                           \

}

/*
// Model wrapper class. It's main purpose is to 
class modelwrapper {

  public:

    // Constructor 
    functor(void (*inputFunction)(TYPE &), std::string iDo) {
      myFunction = inputFunction;
      myQuantity = iDo;
      needs_recalculating = true;
    }

    // Operation (return value) 
    TYPE operator()() { return myValue; }

    // Add pointer to pointer to dependent functor
    template <typename DEP>
    void addToDepList(functor<DEP>* &dep_functor) { 
      dependency_list.push_back (&dep_functor);
    }

    // It may be safer to have the following four things made accessible 
    // only to the likelihood wrapper class and/or dependency resolver, i.e. so they cannot be used 
    // from within module functions

    // Calculate method
    void calculate() { if(needs_recalculating) { myFunction(myValue); } }

    // Identification method
    std::string quantity() { return myQuantity; }

    // Needs recalculating or not?  (Externally modifiable)
    bool needs_recalculating;

    // Internal list of pointers to pointers to dependent functors
    std::list<boost::any> dependency_list;

  private:

    // Internal storage of function value
    TYPE myValue;

    // Internal storage of function pointer
    void (*myFunction)(TYPE &);

    // Internal storage of exactly what it is that this function calculates
    std::string myQuantity;

};


// A container for a function that needs to be constructed at compile
// and executed as initialisation code at startup.
struct ini_code {
  ini_code(void (*unroll)()) { (*unroll)(); }
};
*/

