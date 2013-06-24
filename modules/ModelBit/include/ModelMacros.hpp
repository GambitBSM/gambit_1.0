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

#ifndef __ModelMacros_hpp__
#define __ModelMacros_hpp__

#include <ModelParameters.hpp>
#include <util_macros.hpp>
#include <util_functions.hpp>
#include <util_classes.hpp>

namespace GAMBIT{

  namespace Models{
  
    // Function to help static initialisation of our const data member vectors.
    // Returns a copy of the vector with the string argument appended.
    std::vector<str> vecappend(const std::vector<str>& basevec,const str newentry)
      {
        std::vector<str> newvec(basevec);
        newvec.push_back(newentry);
        //std::cout<<"in vecappend:"<<newvec<<std::endl;
        return newvec;
      }
    
    // Similar to above; joins two vectors and returns the result
    std::vector<str> vecjoin(const std::vector<str>& bv1, 
                             const std::vector<str>& bv2) 
      {
        std::vector<str> newvec;
        newvec.reserve( bv1.size() + bv2.size() );
        newvec.insert( newvec.end(), bv1.begin(), bv1.end() );
        newvec.insert( newvec.end(), bv2.begin(), bv2.end() );
        //std::cout<<"in vecjoin:"<<newvec<<std::endl;
        return newvec;
      }
      
    // As above but joins three vectors and returns the result.
    std::vector<str> vecjoin3(const std::vector<str>& bv1, 
                              const std::vector<str>& bv2,
                              const std::vector<str>& bv3) 
      {
        std::vector<str> newvec;
        newvec.reserve( bv1.size() + bv2.size() + bv3.size() );
        newvec.insert( newvec.end(), bv1.begin(), bv1.end() );
        newvec.insert( newvec.end(), bv2.begin(), bv2.end() );
        newvec.insert( newvec.end(), bv3.begin(), bv3.end() );
        //std::cout<<"in vecjoin:"<<newvec<<std::endl;
        return newvec;
      }
    
    // Base class for building new models (root of model inheritance tree)
    // Label ModelParameters base class as virtual to avoid ambiguous references
    // to ModelParameters functions in models that inherit from two children of 
    // model_base simultaneously (this way all children of model_base share
    // "the same" ModelParameters parent object)
    class model_base
      {
      public:
        //model_base(const str name = "BASECLASS") {}
        model_base() {} ;
        virtual ~model_base() {} ;
        
        // *** Methods which need to be manually overwritten by users when 
        //     defining a new model:
        
        // This macro is called by the constructor of the child models. Use it
        // to define the parameters of the model (i.e. by calling the 
        // _definePar method inherited from ModelParameters, or by using the
        // DEFINEPARS macro defined in the "macros" section of this file.
        /* NO LONGER DOING THIS! Parameter list should instead be supplied to
           the NEW_CHILD_MODEL macro.
        
        virtual void defineParameters()
        {
          std::cout<<"This method is part of the base class for GAMBIT models! \
You should not be calling it!"<<std::endl;
        };
        */
        
        // *** Methods which are universal to all models and are not changed
        //     by any of the child models. We do, however, have to redefine them
        //     in the child classes, otherwise they will still retrieve the
        //     const data members of the top parent (the model_base class!).
        
        // Returns (copy of the string containing) the name of the model
        virtual str getname() const 
        { 
          return name;
        };
        
        // Returns (copy of) the lineage vector of the model
        virtual std::vector<str> getlineage() const 
        { 
          return lineage;
        };
        
        // Parameter object; model parameter names and values stored in here.
        // Is initialised by the constructor with correct parameter keys for
        // this model.
        ModelParameters parameters;
        
        // Returns a pointer to the above "parameters" object. This is useful
        // if we are accessing all models using base class pointers, since
        // these pointers cannot access the 'parameters' member object directly.
        virtual ModelParameters* getparamobjptr()
        { 
          return &parameters;
        };
        
        // Tests whether a specified model string is in the lineage list
        /*
        bool is_descendant_of(str& testmodel)
        {
          bool result;
          for(std::vector<str>::iterator it = v.begin(); it != v.end(); ++it) {
            it->doSomething();
          }
        }
        */
        protected:
          static const str name;
          static const std::vector<str> lineage;
          static const std::vector<str> parameterkeys;
      };
      
      //Initialise the name, lineage, and parameterkeys data members
      const str model_base::name = "base_model";
      const std::vector<str> model_base::lineage(1,"base_model");
      const std::vector<str> model_base::parameterkeys = {};
      //(The internet claims that that above initialisations should be in a 
      //source file, not a header, but surely it is ok if the header has include
      //protection macros so that it only "really" gets included once?)

  } //end namespace Models

} //end namespace GAMBIT


// MACRO DEFINITIONS

// Macro to build new child models, which inherit a vector recording the 
// inherirance pattern.
// ALL THE FUNCTIONS DECLARED IN THIS MACRO MUST RECEIVE A NEW DEFINITON
// SOMEWHERE! The definitions will not be inherited from the parent because
// the macro declares them (which is claim that we are going to provide
// a new definition). Inheritance is thus a little tricky with this
// structure.

// One-liner for passing a list of parameter strings directly to the
// ModelParameters::_definePar function (which is owned by the "parameters"
// member object). Uses a variadic macro. Didn't know such a thing existed!
/* REPLACED with version below
#define DEFINEPARS(...)                                                        \
do{                                                                            \
    const char* _arr_[] = {__VA_ARGS__};                                       \
    for(int i=0; i<sizeof(_arr_)/sizeof(const char*) ; i++){                   \
      parameters._definePar(_arr_[i]);                                         \
    }                                                                          \
}while(0);                                                                     \
*/
#define DEFINEPARS(MODEL,...)                                                  \
const std::vector<str> MODEL::parameterkeys = delimiterSplit(#__VA_ARGS__,",");\

// Main "child model" class building macros

// I am sorry for the multi-layered macros! Hopefully the structure is not too
// horrible though. There is one main macro, CHILD_BODY, which creates the main
// framework of the child model class, which is shared by the macros which 
// create different types of children. The different types of child class
// creation macros first call this macro, then add whatever unique stuff they
// need. MAKE SURE TO EXPLICITLY ADD PUBLIC/PROTECTED/PRIVATE ACCESS QUALIFIERS
// IN THE CHILD CREATION MACROS, because CHILD_BODY creates its own sections
// and the main macro will be left using the last access qualifier in 
// CHILD_BODY until you override it.

// Macro to create repeated stuff in body of child class creation macros
#define CHILD_BODY(NAME)                                                     \
public:                                                                      \
                                                                             \
  /*Need to override constructors since we are going to use them to          \
  define the parameters */                                                   \
  NAME() : parameters(parameterkeys) {};                                     \
  virtual ~NAME(){};                                                         \
                                                                             \
  /*Need to redefine the get methods, otherwise we will end up with the      \
  inherited versions which retrieve the data members of the parent class!    \
  */                                                                         \
  /* Returns (copy of the string containing) the name of the model */        \
  virtual str getname() const                                                \
  {                                                                          \
    return name;                                                             \
  };                                                                         \
                                                                             \
  /* Returns (copy of) the lineage vector of the model */                    \
  virtual std::vector<str> getlineage() const                                \
  {                                                                          \
    return lineage;                                                          \
  };                                                                         \
                                                                             \
  /* Parameter object; model parameter names and values stored in here.      \
     Initialised by the constructor. */                                      \
  ModelParameters parameters;                                                \
                                                                             \
  /* Returns a pointer to the above "parameters" object. This is useful      \
     if we are accessing all models using base class pointers, since         \
     these pointers cannot access the 'parameters' member object directly. */\
  virtual ModelParameters* getparamobjptr()                                  \
  {                                                                          \
    return &parameters;                                                      \
  };                                                                         \
                                                                             \
protected:                                                                   \
  static const str name;                                                     \
  static const std::vector<str> lineage;                                     \
  static const std::vector<str> parameterkeys;                               \

// Macro for creating standard child model class from a single parent
#define NEW_CHILD_MODEL(NAME,PARENT)                                           \
class NAME : public PARENT                                                     \
  {                                                                            \
  CHILD_BODY(NAME)                                                             \
  };                                                                           \
/*Now initialise the name, lineage and parameterkeys data members*/            \
const str NAME::name = STRINGIFY(NAME);                                        \
const std::vector<str> NAME::lineage =                                         \
                  vecappend(PARENT::lineage,STRINGIFY(NAME));                  \

// This next macro builds a child model class from two parents. The new lineage 
// list is simply a merger of the parent lists.
#define NEW_SUPER_MODEL(NAME,PARENT1,PARENT2)                                  \
class NAME : public PARENT1, public PARENT2                                    \
  {                                                                            \
  CHILD_BODY(NAME)                                                             \
  };                                                                           \
/*Now initialise the name, lineage and parameterkeys data members*/            \
const str NAME::name = STRINGIFY(NAME);                                        \
const std::vector<str> NAME::lineage =                                         \
    vecappend( vecjoin(PARENT1::lineage,PARENT2::lineage), STRINGIFY(NAME) );  \

#endif /* defined(__ModelMacros_hpp__) */

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

