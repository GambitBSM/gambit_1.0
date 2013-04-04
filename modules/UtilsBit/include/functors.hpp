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

      // Identification methods
      std::string name()     { return myName;     }
      std::string quantity() { return myQuantity; }
      std::string type()     { return myType;     }
      std::string module()   { return myModule;   }

      // Needs recalculating or not?  (Externally modifiable)
      bool needs_recalculating;

      // Internal list of pointers to pointers to dependent functors !FIXME to be modified
      std::list<boost::any> dependency_list;

      // Internal list of pointers to pointers to backend functors !FIXME to be modified
      std::list<boost::any> backend_req_list;

    protected:
                              //Internal storage of
      std::string myName;     //the function name,
      std::string myQuantity; //exactly what it calculates,
      std::string myType;     //the type of what it calculates, and
      std::string myModule;   //the name of the module to which it belongs.

  };


  // Functor derived class for module functions with result type TYPE
  template <typename TYPE>
  class module_functor : public functor
  {

    public:

      // Constructor 
      module_functor(void (*inputFunction)(TYPE &), 
                           std::string func_name,
                           std::string capability, 
                           std::string result_type,
                           std::string module_name)
      {
        std::cout << "functor initialization: " << func_name << std::endl;
        myFunction      = inputFunction;
        myName          = func_name;
        myQuantity      = capability;
        myType          = result_type;
        myModule        = module_name;
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
  class backend_functor : public module_functor<TYPE>
  {

    public:

      // Method for passing input parameters to backend functions !FIXME not finished
      void give_input() { }

    protected:

  };


}

#endif /* defined(__functors_hpp__) */
