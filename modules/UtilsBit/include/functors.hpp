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
#include <vector>
#include <utility>
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

      typedef std::pair<std::string, std::string> sspair;

      // Empty virtual destructor to make polymorphic
      virtual ~functor() {}

      // It may be safer to have the following things accessible 
      // only to the likelihood wrapper class and/or dependency resolver, i.e. so they cannot be used 
      // from within module functions

      // Identification methods
      std::string name()       { return myName;       }
      std::string capability() { return myCapability; }
      std::string type()       { return myType;       }
      std::string module()     { return myModule;     }
      sspair quantity()        { return std::make_pair(myCapability, myType); }

      // Needs recalculating or not?  (Externally modifiable)
      bool needs_recalculating;

      // Vector of dependency-type pairs as strings 
      std::vector<sspair> dependencies;
      
      // Vector of backend requirement-type pairs as strings 
      std::vector<sspair> backendreqs;

      // Add a dependency
      void setDependency(std::string dep, std::string type, void(*resolver)(functor*))
      { 
        sspair key (dep, type);
        dependencies.push_back(key);
        dependency_map[key] = resolver;
      }

      // Add a backend requirement
      void setBackendReq(std::string req, std::string type)
      { 
        backendreqs.push_back(std::make_pair(req, type));
      }

      // Resolve a dependency using a pointer to another functor object
      void resolveDependency (functor* dep_functor)
      {
        sspair key (dep_functor->quantity());
        if (dependency_map.find(key) == dependency_map.end())                            
        {                                                                      
          std::cout << "Error whilst attempting to resolve dependency." << std::endl;
          std::cout << "A dependency matching the passed functor pointer " << std::endl;
          std::cout << "does not exist in the functor of " << myName << std::endl;
          //FIXME throw a real error here
        }
        else { (*dependency_map[key])(dep_functor); }
      }

    protected:
                                //Internal storage of
      std::string myName;       //the function name,
      std::string myCapability; //exactly what it calculates,
      std::string myType;       //the type of what it calculates, and
      std::string myModule;     //the name of the module to which it belongs.

      // Map from (dependency-type pairs) to (pointers to templated void functions 
      // that set dependency functor pointers)
      std::map<sspair, void(*)(functor*)> dependency_map;

  };


  // Functor derived class for module functions with result type TYPE
  template <typename TYPE>
  class module_functor : public functor
  {

    public:

      // Constructor 
      module_functor(void (*inputFunction)(TYPE &), 
                           std::string func_name,
                           std::string func_capability, 
                           std::string result_type,
                           std::string module_name)
      {
        std::cout << "functor initialization: " << func_name << std::endl;
        myFunction      = inputFunction;
        myName          = func_name;
        myCapability    = func_capability;
        myType          = result_type;
        myModule        = module_name;
        needs_recalculating = true;
      }

      // Calculate method
      void calculate() { if(needs_recalculating) { myFunction(myValue); } }

      // Operation (return value) 
      TYPE operator()() { return myValue; }

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
