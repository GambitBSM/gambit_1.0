//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Functor class definitions.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Pat Scott
//  2013  Apr 4
//  *********************************************

#ifndef __functors_hpp__
#define __functors_hpp__

#include <list>
#include <string>
#include <boost/any.hpp>


namespace GAMBIT
{

  // A container for a function that needs to be constructed at compile
  // and executed as initialisation code at startup.
  struct ini_code
  {
    ini_code(void (*unroll)()) { (*unroll)(); }
  };


  // Function wrapper (functor) base class
  class functor
  {

    public:

      // It may be safer to have the following things accessible 
      // only to the likelihood wrapper class and/or dependency resolver, i.e. so they cannot be used 
      // from within module functions

      // Method for setting the value of a pointer to a dependency
      void setDependency (std::string dep_name, functor& dep_functor) {}

      // Calculate method (pure virtual => functor is an abstract base class)
      virtual void calculate() = 0;

      // Identification methods
      std::string quantity() { return myQuantity; }
      std::string type()     { return myType;     }

      // Needs recalculating or not?  (Externally modifiable)
      bool needs_recalculating;

      // Internal list of pointers to pointers to dependent functors
      std::list<boost::any> dependency_list;

      // Internal list of pointers to pointers to backend functors
      std::list<boost::any> backend_req_list;

    protected:

      // Internal storage of exactly what it is that this function calculates
      std::string myQuantity;

      // Internal storage of the type of exactly what this function calculates
      std::string myType;

  };


  // Functor derived class for module functions with result type TYPE
  template <typename TYPE>
  class module_functor : functor
  {

    public:

      // Constructor 
      module_functor(void (*inputFunction)(TYPE &), std::string capability, std::string result_type)
      {
        myFunction = inputFunction;
        myQuantity = capability;
        myType = result_type;
        needs_recalculating = true;
      }

      // Calculate method
      void calculate() { if(needs_recalculating) { myFunction(myValue); } }

      // Operation (return value) 
      TYPE operator()() { return myValue; }

      // Add pointer to pointer to dependent functor
      template <typename DEP>
      void addToDepList(module_functor<DEP>* &dep_functor)
      { 
        dependency_list.push_back (&dep_functor);
      }

      // Add pointer to pointer to backend functor
      template <typename BE_REQ>
      void addToBEList(module_functor<BE_REQ>* &be_functor)
      { 
        backend_req_list.push_back (&be_functor);
      }

    protected:

      // Internal storage of function value
      TYPE myValue;

      // Internal storage of function pointer
      void (*myFunction)(TYPE &);

  };


  // Functor derived class for backend functions with result type TYPE
  template <typename TYPE>
  class backend_functor : module_functor<TYPE>
  {

    public:

      // Method for passing input parameters to backend functions
      void give_input() { }

    protected:

  };


}

#endif /* defined(__functors_hpp__) */
