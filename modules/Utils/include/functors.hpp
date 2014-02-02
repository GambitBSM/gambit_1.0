//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functor class definitions.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2013 Apr-July, Dec-Jan '14
///
///  \author Anders Kvellestad
///          (anders.kvellestad@fys.uio.no) 
///   \date 2013 Apr, Nov
///
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 May, June, July 2013
///
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2013 July, Sep, 2014 Jan
///
///  *********************************************


#ifndef __functors_hpp__
#define __functors_hpp__

#include <map>
#include <set>
#include <vector>
#include <time.h>
#include <sstream>
#include <algorithm>
#include <omp.h>
#include "util_types.hpp"
#include "util_functions.hpp"
#include "printers.hpp"
#include "model_types.hpp"
#include "model_functions.hpp"

// Decay rate of average runtime estimate
#define FUNCTORS_FADE_RATE 0.01
// Minimum invaldiation rate (should be 0<...<<1)
#define FUNCTORS_BASE_INVALIDATION_RATE 0.01
// Initial runtime estimate
#define FUNCTORS_RUNTIME_INIT 1000

namespace Gambit
{

  /// Function wrapper (functor) base class

  class functor
  {

    public:

      /// Constructor
      functor (str func_name,
               str func_capability,
               str result_type,
               str origin_name) :      
       myName          (func_name),
       myCapability    (func_capability),
       myType          (result_type),
       myOrigin        (origin_name),
       myStatus        (1),
       needs_recalculating (true) {}
      
      /// Virtual calculate(); needs to be redefined in daughters.
      virtual void calculate() {};

      // It may be safer to have some of the following things accessible 
      // only to the likelihood wrapper class and/or dependency resolver, i.e. so they cannot be used 
      // from within module functions

      /// Interfaces for runtime optimization
      /// Need to be implemented by daughters
      /// @{
      virtual double getRuntimeAverage() { return 0; }
      virtual double getInvalidationRate() { return 0; }
      virtual void setFadeRate() {}
      virtual void notifyOfInvalidation() {}
      virtual void reset() {}
      /// @}

      /// Reset-then-recalculate method
      virtual void reset_and_calculate() { this->reset(); this->calculate(); } 

      /// Setter for version
      void setVersion(str ver) { if (this == NULL) failBigTime("setVersion"); myVersion = ver; }
      /// Setter for status (0 = disabled, 1 = available (default), 2 = active)
      void setStatus(int stat) { if (this == NULL) failBigTime("setStatus"); myStatus = stat; }
      /// Setter for purpose (relevant only for next-to-output functors)
      void setPurpose(str purpose) { if (this == NULL) failBigTime("setPurpose"); myPurpose = purpose; }
      
      /// Getter for the wrapped function's name
      str name()        { if (this == NULL) failBigTime("name"); return myName; }
      /// Getter for the wrapped function's reported capability
      str capability()  { if (this == NULL) failBigTime("capability"); return myCapability; }
      /// Getter for the wrapped function's reported return type
      str type()        { if (this == NULL) failBigTime("type"); return myType; }
      /// Getter for the wrapped function's origin (module or backend name)
      str origin()      { if (this == NULL) failBigTime("origin"); return myOrigin; }
      /// Getter for the version of the wrapped function's origin (module or backend)
      str version()     { if (this == NULL) failBigTime("version"); return myVersion; }
      /// Getter for the wrapped function current status (0 = disabled, 1 = available (default), 2 = active)
      int status()      { if (this == NULL) failBigTime("status"); return myStatus; }
      /// Getter for the  overall quantity provided by the wrapped function (capability-type pair)
      sspair quantity() { if (this == NULL) failBigTime("quantity"); return std::make_pair(myCapability, myType); }
      /// Getter for purpose (relevant for output nodes, aka helper structures for the dep. resolution)
      str purpose()     { if (this == NULL) failBigTime("purpose"); return myPurpose; }
      /// Getter indicating if the wrapped function's result should to be printed
      virtual bool requiresPrinting() { if (this == NULL) failBigTime("requiresPrinting"); return false; }

      /// Setter for indicating if the wrapped function's result should to be printed
      virtual void setPrintRequirement(bool flag)
      {
        if (flag)
        {
          cout << "Error.  The setPrintRequirement method has not been defined in this class." << endl;
          exit(1);
        }
      }

      /// Set the ordered list of pointers to other functors that should run nested in a loop managed by this one
      virtual void setNestedList (std::vector<functor*>&)
      { 
        cout << "Error.  The setNestedList method has not been defined in this class." << endl;
        exit(1);
      } 

      /// Set the iteration number in a loop in which this functor runs
      virtual void setIteration (int)
      { 
        cout << "Error.  The setIteration method has not been defined in this class." << endl;
        exit(1);
      }

      /// Getter for revealing whether this is permitted to be a manager functor
      virtual bool canBeLoopManager()
      {
        cout << "Error.  The canBeLoopManager method has not been defined in this class." << endl;
        exit(1);
      }

      /// Getter for revealing the required capability of the wrapped function's loop manager
      virtual str loopManagerCapability()
      {
        cout << "Error.  The loopManagerCapability method has not been defined in this class." << endl;
        exit(1);
      }

      /// Getter for listing currently activated dependencies
      virtual std::vector<sspair> dependencies()          
      { 
        cout << "Error.  The dependencies method has not been defined in this class." << endl;
        exit(1);
        std::vector<sspair> empty;
        return empty;
      }
      /// Getter for listing backend requirements
      virtual std::vector<sspair> backendreqs()                   
      {
        cout << "Error.  The backendreqs method has not been defined in this class." << endl;
        exit(1);
        std::vector<sspair> empty;
        return empty;
      }
      /// Getter for listing permitted backends
      virtual std::vector<sspair> backendspermitted(sspair) 
      { 
        cout << "Error.  The backendspermitted method has not been defined in this class." << endl;
        exit(1);
        std::vector<sspair> empty;
        return empty;
      }

      /// Getter for listing backend-specific conditional dependencies (4-string version)
      virtual std::vector<sspair> backend_conditional_dependencies (str, str, str, str)  
      { 
        cout << "Error.  The backend_conditional_dependencies method has not been defined in this class." << endl;
        exit(1);
        std::vector<sspair> empty;
        return empty;
      }
      
      /// Getter for backend-specific conditional dependencies (3-string version)
      virtual std::vector<sspair> backend_conditional_dependencies (str req, str type, str be)  
      { 
        return backend_conditional_dependencies(req, type, be, "any");
      }
      
      /// Getter for backend-specific conditional dependencies (backend functor pointer version)
      virtual std::vector<sspair> backend_conditional_dependencies (functor* be_functor)  
      { 
        return backend_conditional_dependencies (be_functor->capability(), be_functor->type(),
         be_functor->origin(), be_functor->version());
      }

      /// Getter for listing model-specific conditional dependencies
      virtual std::vector<sspair> model_conditional_dependencies (str)
      { 
        cout << "Error.  The model_conditional_dependencies method has not been defined in this class." << endl;
        exit(1);
        std::vector<sspair> empty;
        return empty;
      }

      /// Getter for listing model-specific conditional backend requirements
      virtual std::vector<sspair> model_conditional_backend_reqs (str)
      { 
        cout << "Error.  The model_conditional_backend_reqs method has not been defined in this class." << endl;
        exit(1);
        std::vector<sspair> empty;
        return empty;
      }

      /// Resolve a dependency using a pointer to another functor object
      virtual void resolveDependency (functor*)
      {
        cout << "Error.  The resolveDependency method has not been defined in this class." << endl;
        exit(1);
      }

      /// Resolve a backend requirement using a pointer to another functor object
      virtual void resolveBackendReq (functor*)
      {
        cout << "Error.  The resolveBackendReq method has not been defined in this class." << endl;
        exit(1);
      }

      /// Notify the functor that a certain model is being scanned, so that it can activate its dependencies accordingly.
      virtual void notifyOfModel(str)
      {
        cout << "Error.  The notifyOfModel method has not been defined in this class." << endl;
        exit(1);
      }

      /// Test whether the functor is allowed to be used with a given model 
      bool modelAllowed(str model)
      {
        if (allowedModels.empty()) return true;
        str parent = find_allowed_parent_model(model);
        if (allowedModels.find(parent) != allowedModels.end()) return true;
        return false;        
      }

      /// Add a model to the internal list of models for which this functor is allowed to be used.
      void setAllowedModel(str model) { allowedModels.insert(model); }

      /// Print function
      virtual void print(Printers::BasePrinter*, int)
      { 
         // TODO: throw real GAMBIT Error
         std::cout<<"Warning: this is the functor base class print function! This should not be used; print "
          << "function should be redefined in daughter functor classes. If this is running there is a problem "
          << "somewhere (from functor "<<myName<<")."<<std::endl;
         std::cout<<"Currently only functors derived from module_functor_common<!=void> are allowed to try to print "
          << "themselves; i.e. backend and void functors may not do this (they inherit this default message)"<<std::endl;
      }    

    protected:
          
      /// Internal storage of the function name.
      str myName;       
      /// Internal storage of exactly what the function calculates.
      str myCapability; 
      /// Internal storage of the type of what the function calculates.
      str myType;       
      /// Internal storage of the name of the module or backend to which the function belongs.
      str myOrigin;     
      /// Internal storage of the version of the module or backend to which the function belongs.
      str myVersion;    
      /// Purpose of the function (relevant for output and next-to-output functors)
      str myPurpose;
      /// Status: 0 disabled, 1 available (default), 2 active (required for dependency resolution)
      int myStatus;

      /// List of allowed models
      std::set<str> allowedModels;

      /// Needs recalculating or not?
      bool needs_recalculating;

      /// Attempt to retrieve a dependency or model parameter that has not been resolved
      static void failBigTime(str method)
      {
          cout << endl << "Error in module function!  Attempted to use a conditional " << endl;
          cout << "dependency that has not been activated, or a model parameter " << endl;
          cout << "that is not defined in the model for which this function has " << endl;
          cout << "been invoked.  Please check your module function source code. " << endl;
          cout << "Method invoked: " << method << endl;
          exit(1);
          /// FIXME \todo throw real error here                             
      }

      /// Try to find a parent model in the functor's allowedModels list
      str find_allowed_parent_model(str model)
      {
        for (std::set<str>::reverse_iterator it = allowedModels.rbegin() ; it != allowedModels.rend(); ++it)
        {
          if (model_is_registered(*it))
          {
            if (descendant_of(model, *it)) return *it;
          } 
        }    
        return "";    
      }

      /// Try to find a parent model in some user-supplied map from models to sspair vectors
      str find_parent_model_in_map(str model, std::map< str, std::vector<sspair> > karta)
      {
        for (std::map< str, std::vector<sspair> >::reverse_iterator it = karta.rbegin() ; it != karta.rend(); ++it)
        {
          if (model_is_registered(it->first))
          {
            if (descendant_of(model, it->first)) return it->first;
          } 
        }    
        return "";    
      }

  };


  // ================================================================
  /// Functor derived class for module functions
  
  class module_functor_common : public functor
  {

    public:

      /// Constructor
      module_functor_common(str func_name,
                            str func_capability,
                            str result_type,
                            str origin_name)
      : functor            (func_name, func_capability, result_type, origin_name),
        runtime            (FUNCTORS_RUNTIME_INIT),
        runtime_average    (FUNCTORS_RUNTIME_INIT),           // default 1 micro second
        fadeRate           (FUNCTORS_FADE_RATE),              // can be set individually for each functor
        pInvalidation      (FUNCTORS_BASE_INVALIDATION_RATE),
        iCanManageLoops    (false),
        iRunNested         (false),
        myLoopManagerCapability ("none"),
        myLoopManagerName       ("none"),
        myLoopManagerOrigin     ("none"),
        globlMaxThreads    (omp_get_max_threads())
      {
        if (globlMaxThreads == 0)
        {
          cout << "Error: cannot determine number of hardware threads available on this system.";
          //FIXME throw real error here
          exit(1);
        }
      }

      /// Getter for averaged runtime
      double getRuntimeAverage()
      {
        return runtime_average;
      }

      /// Reset functor
      void reset()
      {
        needs_recalculating = true;
        runtime = .0;
      }

      /// Tell functor that it invalidated the current point in model space
      void notifyOfInvalidation()
      {
        pInvalidation += fadeRate*(1-FUNCTORS_BASE_INVALIDATION_RATE);
      }

      /// Invalidation rate
      double getInvalidationRate()
      {
        return pInvalidation;
      }

      void setFadeRate(double new_rate)
      {
        fadeRate = new_rate;
      }

      /// Execute a single iteration in the loop managed by this functor.
      void iterate(int iteration)
      {
        if (not myNestedFunctorList.empty())
        {          
          for (std::vector<functor*>::iterator it = myNestedFunctorList.begin();
           it != myNestedFunctorList.end(); ++it) 
          {
            (*it)->setIteration(iteration);   // Tell the nested functor what iteration this is.
            (*it)->reset_and_calculate();     // Reset the nested functor so that it recalculates, then set it off
          }
        }
      } 

      /// Setter for setting the iteration number in the loop in which this functor runs
      virtual void setIteration (int iteration) { myCurrentIteration[omp_get_thread_num()] = iteration; }
      /// Return a safe pointer to the iteration number in the loop in which this functor runs.
      virtual omp_safe_ptr<int> iterationPtr() 
      {
        if (this == NULL) functor::failBigTime("iterationPtr");
        return omp_safe_ptr<int>(myCurrentIteration); 
      }

      /// Setter for specifying whether this is permitted to be a manager functor, which runs other functors nested in a loop.
      virtual void setCanBeLoopManager (bool canManage) { iCanManageLoops = canManage; }
      /// Getter for revealing whether this is permitted to be a manager functor
      virtual bool canBeLoopManager() { if (this == NULL) failBigTime("canBeLoopManager"); return iCanManageLoops; }

      /// Setter for specifying the capability required of a manager functor, if it is to run this functor nested in a loop.
      virtual void setLoopManagerCapability (str cap) { iRunNested = true; myLoopManagerCapability = cap; }
      /// Getter for revealing the required capability of the wrapped function's loop manager
      virtual str loopManagerCapability() { if (this == NULL) failBigTime("loopManagerCapability"); return myLoopManagerCapability; }
      /// Getter for revealing the name of the wrapped function's assigned loop manager
      virtual str loopManagerName() { if (this == NULL) failBigTime("loopManagerCapability"); return myLoopManagerName; }
      /// Getter for revealing the module of the wrapped function's assigned loop manager
      virtual str loopManagerOrigin() { if (this == NULL) failBigTime("loopManagerCapability"); return myLoopManagerOrigin; }

      /// Getter for listing currently activated dependencies
      virtual std::vector<sspair> dependencies() { return myDependencies; }
      /// Getter for listing backend requirements
      virtual std::vector<sspair> backendreqs() { return myBackendReqs; }
      /// Getter for listing permitted backends
      virtual std::vector<sspair> backendspermitted(sspair quant) 
      { 
        if (permitted_map.find(quant) != permitted_map.end())
        {
          return permitted_map[quant]; 
        }
        else
        {
          std::vector<sspair> empty;
          return empty;
        }
      }

      /// Getter for listing backend-specific conditional dependencies (4-string version)
      virtual std::vector<sspair> backend_conditional_dependencies (str req, str type, str be, str ver)  
      { 
        std::vector<sspair> generic_deps, specific_deps, total_deps;
        std::vector<str> quad;
        quad.push_back(req);
        quad.push_back(type);
        quad.push_back(be);
        quad.push_back(ver);
        //Check first what conditional dependencies exist for all versions of this backend
        if (ver != "any")
        {
          generic_deps = backend_conditional_dependencies(req, type, be, "any");
        }
        //Now see if there are any for this specific version
        if (myBackendConditionalDependencies.find(quad) != myBackendConditionalDependencies.end())
        {
          specific_deps = myBackendConditionalDependencies[quad];
        }
        //Now put them together
        total_deps.reserve(generic_deps.size() + specific_deps.size());
        total_deps.insert(total_deps.end(), generic_deps.begin(), generic_deps.end());
        total_deps.insert(total_deps.end(), specific_deps.begin(), specific_deps.end());        
        return total_deps;
      }
      
      /// Getter for backend-specific conditional dependencies (3-string version)
      virtual std::vector<sspair> backend_conditional_dependencies (str req, str type, str be)  
      { 
        return backend_conditional_dependencies(req, type, be, "any");
      }
      
      /// Getter for backend-specific conditional dependencies (backend functor pointer version)
      virtual std::vector<sspair> backend_conditional_dependencies (functor* be_functor)  
      { 
        return backend_conditional_dependencies (be_functor->capability(), be_functor->type(),
         be_functor->origin(), be_functor->version());
      }

      /// Getter for listing model-specific conditional dependencies
      virtual std::vector<sspair> model_conditional_dependencies (str model)
      { 
        str parent = find_parent_model_in_map(model,myModelConditionalDependencies);
        if (parent != "") return myModelConditionalDependencies[parent];
        std::vector<sspair> empty;
        return empty;
      }

      /// Getter for listing model-specific conditional backend requirements
      virtual std::vector<sspair> model_conditional_backend_reqs (str model)
      { 
        str parent = find_parent_model_in_map(model,myModelConditionalBackendReqs);
        if (parent != "") return myModelConditionalBackendReqs[parent];
        std::vector<sspair> empty;
        return empty;
      }

      /// Add and activate unconditional dependencies.
      void setDependency(str dep, str type, void(*resolver)(functor*, module_functor_common*), str purpose= "")
      {
        sspair key (dep, type);
        myDependencies.push_back(key);
        dependency_map[key] = resolver;
        this->myPurpose = purpose; // only relevant for output nodes
      }

      /// Add a backend conditional dependency for multiple backend versions
      void setBackendConditionalDependency
       (str req, str be, str ver, str dep, str dep_type, void(*resolver)(functor*, module_functor_common*))
      {
        // Split the version string and send each version to be registered
        std::vector<str> versions = delimiterSplit(ver, ",");
        for (std::vector<str>::iterator it = versions.begin() ; it != versions.end(); ++it)
        {
          setBackendConditionalDependencySingular(req, be, *it, dep, dep_type, resolver);
        }
      }

      /// Add a backend conditional dependency for a single backend version
      void setBackendConditionalDependencySingular
       (str req, str be, str ver, str dep, str dep_type, void(*resolver)(functor*, module_functor_common*))
      {
        sspair key (dep, dep_type);
        std::vector<str> quad;
        if (backendreq_types.find(req) != backendreq_types.end())
        {
          quad.push_back(req);
          quad.push_back(backendreq_types[req]);
          quad.push_back(be);
          quad.push_back(ver);
        }
        else
        {
          cout << "Error whilst attempting to set backend-conditional dependency:" << endl;
          cout << "The type of the backend requirement " << req << "on which the " << endl; 
          cout << "dependency "<< dep << " is conditional has not been set.  This" << endl;
          cout << "is " << this->name() << " in " << this->origin() << "." << endl;
          ///\todo FIXME throw a real error here
        }
        if (myBackendConditionalDependencies.find(quad) == myBackendConditionalDependencies.end())
        {
          std::vector<sspair> newvec;
          myBackendConditionalDependencies[quad] = newvec;
        }
        myBackendConditionalDependencies[quad].push_back(key);
        dependency_map[key] = resolver;
      }

      /// Add a model conditional dependency for multiple models
      void setModelConditionalDependency
       (str model, str dep, str dep_type, void(*resolver)(functor*, module_functor_common*))
      {
        // Split the model string and send each model to be registered
        std::vector<str> models = delimiterSplit(model, ",");
        for (std::vector<str>::iterator it = models.begin() ; it != models.end(); ++it)
        {
          setModelConditionalDependencySingular(*it, dep, dep_type, resolver);
        }
      }

      /// Add a model conditional dependency for a single model
      void setModelConditionalDependencySingular
       (str model, str dep, str dep_type, void(*resolver)(functor*, module_functor_common*))
      { 
        sspair key (dep, dep_type);
        if (myModelConditionalDependencies.find(model) == myModelConditionalDependencies.end())
        {
          std::vector<sspair> newvec;
          myModelConditionalDependencies[model] = newvec;
        }
        myModelConditionalDependencies[model].push_back(key);
        dependency_map[key] = resolver;
      }

      /// Add an unconditional backend requirement
      /// The info gets updated later if this turns out to be contitional on a model. 
      void setBackendReq(str req, str type, void(*resolver)(functor*))
      { 
        sspair key (req, type);
        backendreq_types[req] = type;
        myBackendReqs.push_back(key);
        backendreq_map[key] = resolver;
      }

      /// Add a model conditional backend requirement for multiple models
      void setModelConditionalBackendReq
       (str model, str req, str type)
      {
        // Split the model string and send each model to be registered
        std::vector<str> models = delimiterSplit(model, ",");
        for (std::vector<str>::iterator it = models.begin() ; it != models.end(); ++it)
        {
          setModelConditionalBackendReqSingular(*it, req, type);
        }
      }

      /// Add a model conditional backend requirement for a single model
      void setModelConditionalBackendReqSingular
       (str model, str req, str type)
      { 
        sspair key (req, type);
        // Remove the entry from the unconditional backend reqs list...
        myBackendReqs.erase(std::remove(myBackendReqs.begin(), myBackendReqs.end(), key), myBackendReqs.end());
        // Check that the model is not already in the conditional backend reqs list, then add it
        if (myModelConditionalBackendReqs.find(model) == myModelConditionalBackendReqs.end())
        {
          std::vector<sspair> newvec;
          myModelConditionalBackendReqs[model] = newvec;
        }
        myModelConditionalBackendReqs[model].push_back(key);
      }

      /// Add multiple versions of a permitted backend 
      void setPermittedBackend(str req, str be, str ver)
      {
        // Split the version string and send each version to be registered
        std::vector<str> versions = delimiterSplit(ver, ",");
        for (std::vector<str>::iterator it = versions.begin() ; it != versions.end(); ++it)
        {
          setPermittedBackendSingular(req, be, *it);
        }
      }

      /// Add a single permitted backend version
      void setPermittedBackendSingular(str req, str be, str ver)
      { 
        sspair key;
        if (backendreq_types.find(req) != backendreq_types.end())
        {
          key = std::make_pair(req, backendreq_types[req]);
        }
        else
        {
          cout << "Error whilst attempting to set permitted backend:" << endl;
          cout << "The return type of the backend requirement " << req << "is not set." << endl; 
          cout << "This is " << this->name() << " in " << this->origin() << "." << endl;
          ///\todo FIXME throw a real error here
        }
        sspair vector_entry (be,  ver);
        if (permitted_map.find(key) == permitted_map.end())
        {
          std::vector<sspair> newvec;
          permitted_map[key] = newvec;
        }
        permitted_map[key].push_back(vector_entry);       
      }

      /// Set the ordered list of pointers to other functors that should run nested in a loop managed by this one
      virtual void setNestedList (std::vector<functor*> &newNestedList)
      { 
        if (iCanManageLoops) 
        {
          myNestedFunctorList = newNestedList;
        }
        else
        {
          cout << "Error: this module functor is not permitted to manage" << endl;
          cout << "loops, so you cannot set its nested functor list. " << endl; 
          cout << "This is " << this->name() << " in " << this->origin() << "." << endl;
          ///\todo FIXME throw a real error here
        }
      } 

      /// Resolve a dependency using a pointer to another functor object
      virtual void resolveDependency (functor* dep_functor)
      {
        sspair key (dep_functor->quantity());
        if (dependency_map.find(key) == dependency_map.end())                            
        {                                                                      
          cout << "Error whilst attempting to resolve dependency:" << endl;
          cout << "Function "<< myName << " in " << myOrigin << " does not depend on " << endl;
          cout << "capability " << key.first << " with type " << key.second << "." << endl;
          ///\todo FIXME throw a real error here
        }
        else
        {
          (*dependency_map[key])(dep_functor,this);
          // propagate purpose from next to next-to-output nodes
          dep_functor->setPurpose(this->myPurpose);
          // save the identity of this functor's loop manager (if it has one)
          if (dep_functor->capability() == myLoopManagerCapability and dep_functor->canBeLoopManager()) 
          { 
            myLoopManagerName = dep_functor->name();
            myLoopManagerOrigin = dep_functor->origin();
          }
        }
      }

      /// Resolve a backend requirement using a pointer to another functor object
      virtual void resolveBackendReq (functor* be_functor)
      {
        sspair key (be_functor->quantity());
        //First make sure that the proposed backend function fulfills a known requirement of the module function.
        if (backendreq_map.find(key) != backendreq_map.end())                            
        { 
          sspair proposal (be_functor->origin(), be_functor->version());  //Proposed backend-version pair
          sspair generic_proposal (be_functor->origin(), "any");          //Proposed backend, any version 
          if ( //Check for a condition under which the proposed backend function is an acceptable fit for this requirement.
           //Check whether there are have been any permitted backends stated for this requirement (if not, anything goes).
           (permitted_map.find(key) == permitted_map.end()) || 
           //Iterate over the vector of backend-version pairs for this requirement to see if all versions of the 
           //proposed backend have been explicitly permitted.
           (std::find(permitted_map[key].begin(), permitted_map[key].end(), generic_proposal) != permitted_map[key].end()) ||
           //Iterate over the vector of backend-version pairs again to see if the specific backend version 
           //proposed had been explicitly permitted.
           (std::find(permitted_map[key].begin(), permitted_map[key].end(), proposal) != permitted_map[key].end()) )         
          {
            (*backendreq_map[key])(be_functor);   //One of the conditions was met, so do the resolution.
            //If this is also the condition under which any backend-conditional dependencies should be activated, do it.
            std::vector<sspair> deps_to_activate = backend_conditional_dependencies(be_functor);
            for (std::vector<sspair>::iterator it = deps_to_activate.begin() ; it != deps_to_activate.end(); ++it)
            {
              myDependencies.push_back(*it);        
            }   
          }
          else          
          { 
            cout << "Error whilst attempting to resolve backend requirement:" << endl;
            cout << "Backend capability " << key.first << " with type " << key.second << "." << endl;
            cout << "required by function "<< myName << " in " << myOrigin << " is not permitted " << endl;
            cout << "to use "<< proposal.first << ", version " << proposal.second << "." << endl;
            exit(1);
            ///\todo FIXME throw a real error here
          } 
        }
        else
        {                                                                      
          cout << "Error whilst attempting to resolve backend requirement:" << endl;
          cout << "Function "<< myName << " in " << myOrigin << " does not require " << endl;
          cout << "backend capability " << key.first << " with type " << key.second << "." << endl;
          exit(1);
          ///\todo FIXME throw a real error here
        }        
      }

      /// Notify the functor that a certain model is being scanned, so that it can activate its dependencies and backend reqs accordingly.
      virtual void notifyOfModel(str model)
      {
        //Make sure this model is actually allowed to be used with this functor, otherwise die gracefully.
        if (not modelAllowed(model))
        {                                                                      
          cout << "Error whilst attempting to notify functor of model:" << endl;
          cout << "Function "<< myName << " in " << myOrigin << " cannot be used " << endl;
          cout << "with model " << model << ".  Check module header or ini file for errors."<< endl;
          exit(1);
          ///\todo FIXME throw a real error here
        }        
        //If this model fits any conditional dependencies (or is a descendent of a model that fits any), then activate them.
        std::vector<sspair> deps_to_activate = model_conditional_dependencies(model);          
        for (std::vector<sspair>::iterator it = deps_to_activate.begin() ; it != deps_to_activate.end(); ++it)
        {
          myDependencies.push_back(*it);        
        }
        //If this model fits any conditional backend requirements (or is a descendent of a model that fits any), then activate them.
        std::vector<sspair> backend_reqs_to_activate = model_conditional_backend_reqs(model);
        cout << "model: " << model << endl;
        for (std::vector<sspair>::iterator it = backend_reqs_to_activate.begin() ; it != backend_reqs_to_activate.end(); ++it)
        {
          cout << "req: " << it->first << " " << it->second << endl;
          myBackendReqs.push_back(*it);        
        }
      }


    protected:

      /// Current runtime in ns
      double runtime;

      /// Averaged runtime in ns
      double runtime_average;

      /// Fade rate for average runtime
      double fadeRate;

      /// Probability that functors invalidates point in model parameter space
      double pInvalidation;

      /// Flag indicating whether this function can manage a loop over other functions
      bool iCanManageLoops;

      /// Flag indicating whether this function can run nested in a loop over functions
      bool iRunNested;

      /// Capability of a function that mangages a loop that this function can run inside of.
      str myLoopManagerCapability;
      /// Name of a function that mangages a loop that this function can run inside of.
      str myLoopManagerName;
      /// Module of a function that mangages a loop that this function can run inside of.
      str myLoopManagerOrigin;

      /// Vector of functors that have been set up to run nested within this one.
      std::vector<functor*> myNestedFunctorList;

      /// Pointer to counters for iterations of nested functor loop.
      int* myCurrentIteration;

      /// Maximum number of OpenMP threads this MPI process is permitted to launch in total.
      const int globlMaxThreads;

      /// Vector of dependency-type string pairs 
      std::vector<sspair> myDependencies;
      /// Vector of backend requirement-type string pairs        
      std::vector<sspair> myBackendReqs;

      /// Map from (vector with 4 strings: backend req, type, backend, version) to (vector of {conditional dependency-type} pairs)
      std::map< std::vector<str>, std::vector<sspair> > myBackendConditionalDependencies;

      /// Map from models to (vector of {conditional dependency-type} pairs)
      std::map< str, std::vector<sspair> > myModelConditionalDependencies;

      /// Map from models to (vector of {conditional backend requirement-type} pairs)
      std::map< str, std::vector<sspair> > myModelConditionalBackendReqs;

      /// Map from backend requirements to their required types
      std::map<str, str> backendreq_types;

      /// Map from (dependency-type pairs) to (pointers to templated void functions 
      /// that set dependency functor pointers)
      std::map<sspair, void(*)(functor*, module_functor_common*)> dependency_map;

      /// Map from (backend requirement-type pairs) to (pointers to templated void functions 
      /// that set backend requirement functor pointers)
      std::map<sspair, void(*)(functor*)> backendreq_map;

      /// Map from (backend requirement-type pairs) to (vector of permitted {backend-version} pairs)
      std::map< sspair, std::vector<sspair> > permitted_map;

      /// Internal timespec object
      timespec tp;

      /// Do pre-calculate timing things
      virtual void startTiming(double nsec, double sec)
      {
#ifndef HAVE_MAC
        clock_gettime(CLOCK_MONOTONIC, &tp);
#endif
        nsec = (double)-tp.tv_nsec;
        sec = (double)-tp.tv_sec;
      }

      /// Do post-calculate timing things
      virtual void finishTiming(double nsec, double sec)
      {
#ifndef HAVE_MAC
        clock_gettime(CLOCK_MONOTONIC, &tp);
#endif
        nsec += (double)tp.tv_nsec;
        sec += (double)tp.tv_sec;
        runtime = sec*1e9 + nsec;
        needs_recalculating = false;
        runtime_average = runtime_average*(1-fadeRate) + fadeRate*runtime;
        pInvalidation = pInvalidation*(1-fadeRate) + fadeRate*FUNCTORS_BASE_INVALIDATION_RATE;
        if (not omp_in_parallel()) cout << "Runtime " << myName << ": " << runtime << " ns (" << runtime_average << " ns)" << endl;
      }

  };


  /// Actual module functor type for all but TYPE=void
  template <typename TYPE>
  class module_functor : public module_functor_common
  {

    public:

      /// Constructor
      module_functor(void (*inputFunction)(TYPE &),
                            str func_name,
                            str func_capability,
                            str result_type,
                            str origin_name)
      : module_functor_common(func_name, func_capability, result_type, origin_name),
        myFunction  (inputFunction),
        myPrintFlag (true)
      {
        myValue = new TYPE[1];                  // Allocate the memory needed to hold the result of this function
        myCurrentIteration = new int[1];        // Allocate the memory needed to hold the current iteration of the loop this function runs in
        myCurrentIteration[0] = 0;              // Zero the iteration counter to start off.
      }

      /// Destructor
      ~module_functor() 
      { 
        delete [] myValue;
        delete [] myCurrentIteration;
      }

      /// Setter for specifying the capability required of a manager functor, if it is to run this functor nested in a loop.
      virtual void setLoopManagerCapability (str manager) 
      { 
        module_functor_common::setLoopManagerCapability(manager); // Call the regular version of this method.
        delete [] myValue;                              // Get rid of the scalar result container
        delete [] myCurrentIteration;                   // Get rid of the scalar iteration container
        myValue = new TYPE[globlMaxThreads];            // Reserve enough space to hold as many results as there are threads allowed
        myCurrentIteration = new int[globlMaxThreads];  // Reserve enough space to hold as many iteration numbers as there are threads allowed
        std::fill(myCurrentIteration, myCurrentIteration+globlMaxThreads, 0); // Zero them to start off
      }

      /// Setter for indicating if the wrapped function's result should to be printed
      virtual void setPrintRequirement(bool flag) { if (this == NULL) failBigTime("setPrintRequirement"); myPrintFlag = flag; }

      /// Getter indicating if the wrapped function's result should to be printed
      virtual bool requiresPrinting() { if (this == NULL) failBigTime("requiresPrinting"); return myPrintFlag; }

      /// Calculate method
      void calculate()
      {
        if (needs_recalculating)
        {
          double nsec = 0, sec = 0;
          this->startTiming(nsec,sec);                       //Begin timing function evaluation
          this->myFunction(myValue[omp_get_thread_num()]);   //Run and place result in the appropriate slot in myValue
          this->finishTiming(nsec,sec);                      //Stop timing function evaluation
        }
      }

      /// Operation (return value)
      TYPE operator()(int index) 
      { 
        if (this == NULL) functor::failBigTime("operator()");
        return (iRunNested ? myValue[index] : myValue[0]);
      }

      /// Alternative to operation (returns a safe pointer to value)
      safe_ptr<TYPE> valuePtr()
      {
        if (this == NULL) functor::failBigTime("valuePtr");
        return safe_ptr<TYPE>(myValue);
      }

      /// Printer function
      virtual void print(Printers::BasePrinter* printer, int vertex, int index)
      {
        // Check if this functor is set to output its contents
        if(myPrintFlag)
        {
          if (not iRunNested) index = 0; // Force printing of index=0 if this functor canno trun nested. 
          // We can expand the list of stuff supplied to printers easily, but each printer will of course have to be modified to accept the new arguments.
          printer->print(myValue[0],vertex,myName,myCapability,myOrigin);
        }
      }

      /// Printer function (no-thread-index short-circuit)
      virtual void print(Printers::BasePrinter* printer, int vertex) { print(printer,vertex,0); }


    protected:

      /// Internal storage of function pointer
      void (*myFunction)(TYPE &);

      /// Internal pointer to storage location of function value
      TYPE* myValue;

      /// Flag to select whether or not the results of this functor should be sent to the printer object.
      bool myPrintFlag;

  };


  /// Actual module functor type for TYPE=void
  template <>
  class module_functor<void> : public module_functor_common
  {

    public:

      /// Constructor
      module_functor(void (*inputFunction)(),
                            str func_name,
                            str func_capability,
                            str result_type,
                            str origin_name)
      : module_functor_common(func_name, func_capability, result_type, origin_name),
        myFunction (inputFunction) {}

      /// Calculate method
      void calculate()
      {
        if (needs_recalculating)
        {
          double nsec = 0, sec = 0;
          this->startTiming(nsec,sec);
          this->myFunction();
          this->finishTiming(nsec,sec);
        }
      }

      /// Blank print method
      virtual void print(Printers::BasePrinter* printer, int vertex) {} 

    protected:

      /// Internal storage of function pointer
      void (*myFunction)();

  };


  // ===============================================================================
  /// Backend functor class for functions with result type TYPE and argumentlist ARGS 

  template <typename TYPE, typename... ARGS>
  class backend_functor_common : public functor
  {

    protected:

      /// Type of the function pointer being encapsulated
      typedef TYPE (*funcPtrType)(ARGS...);

      /// Internal storage of function pointer
      funcPtrType myFunction;

    public:

      /// Constructor 
      backend_functor_common (funcPtrType inputFunction, 
                              str func_name,
                              str func_capability, 
                              str result_type,
                              str origin_name,
                              str origin_version) 
      : functor (func_name, func_capability, result_type, origin_name),
        myFunction (inputFunction) 
      { myVersion = origin_version; }

      /// Update the internal function pointer wrapped by the functor
      void updatePointer(funcPtrType inputFunction)
      {
        myFunction = inputFunction;
      }

      /// Hand out the internal function pointer wrapped by the functor
      funcPtrType handoutFunctionPointer() 
      {
        return myFunction;
      }

  };


  /// Actual backend functor type for all but TYPE=void
  template <typename TYPE, typename... ARGS>
  class backend_functor : public backend_functor_common<TYPE, ARGS...>
  {

    public:

      /// Constructor 
      backend_functor (TYPE (*inputFunction)(ARGS...), 
                       str func_name,
                       str func_capability, 
                       str result_type,
                       str origin_name,
                       str origin_version)
      : backend_functor_common<TYPE, ARGS...>(inputFunction, func_name,
        func_capability, result_type, origin_name, origin_version) {}

      /// Operation (execute function and return value) 
      TYPE operator()(ARGS... args) 
      { 
        if (this == NULL) functor::failBigTime("operator()");
        return this->myFunction(args...);
      }

      /// Alternative to operation, in case the functor return value is 
      /// in fact a pointer to a backend variable. 
      safe_variable_ptr<TYPE> variablePtr()
      {
        if (this == NULL) functor::functor::failBigTime("variablePtr");
        return safe_variable_ptr<TYPE>(this->myFunction); 
      }

  };


  /// Template specialisation of backend functor type for TYPE=void
  template <typename... ARGS>
  class backend_functor<void, ARGS...> : public backend_functor_common<void, ARGS...>
  {

    public:

      /// Constructor 
      backend_functor (void (*inputFunction)(ARGS...), 
                       str func_name,
                       str func_capability, 
                       str result_type,
                       str origin_name,
                       str origin_version)
      : backend_functor_common<void, ARGS...>(inputFunction, func_name,
        func_capability, result_type, origin_name, origin_version) {}
    
      /// Operation (execute function and return value) 
      void operator()(ARGS... args) 
      { 
        if (this == NULL) functor::functor::failBigTime("operator()");
        this->myFunction(args...);
      }

  };

  /// Functors specific to ModelParameters objects
  class model_functor : public module_functor<ModelParameters>
  {
  
    public:
    
      /// Constructor
      ///
      /// This is not inherited from the parent class, but we don't need anything
      /// different so we just directly call the parent class constructor.
      model_functor(void (*inputFunction)(ModelParameters &),
                              str func_name,
                              str func_capability,
                              str result_type,
                              str origin_name)
      : module_functor<ModelParameters>(inputFunction,
                                        func_name,
                                        func_capability,
                                        result_type,
                                        origin_name) {}   
      
      /// Function for adding a new parameter to the map inside the ModelParameters object
      void addParameter(str parname)
      {
        myValue->_definePar(parname);
      }

      /// Function for handing over parameter identities to another model_functor
      void donateParameters(model_functor &receiver)
      {
        for(std::map<std::string,double>::const_iterator it = myValue->getValuesPtr()->begin();
            it != myValue->getValuesPtr()->end(); 
            it++)
        {
          receiver.addParameter(it->first);
        }
      }

  };    

  /// Functors specific to primary ModelParameters objects
  ///
  /// These allow direct access to the functor contents via a raw pointer, so 
  /// that the parameter values can be set (not allowed via safe pointers).
  class primary_model_functor : public model_functor
  {
  
    public:
    
      /// Constructor
      ///
      /// This is not inherited from the parent class, but we don't need anything
      /// different so we just directly call the parent class constructor.
      primary_model_functor(void (*inputFunction)(ModelParameters &),
                              str func_name,
                              str func_capability,
                              str result_type,
                              str origin_name)
      : model_functor(inputFunction,
                      func_name,
                      func_capability,
                      result_type,
                      origin_name) {}   
      
      /// Functor contents raw pointer "get" function
      /// Returns a raw pointer to myValue, so that the contents may be 
      /// modified (intended for setting parameter values in primary 
      /// ModelParameters objects)
      ModelParameters* getcontentsPtr()
      {
        if (this == NULL) functor::failBigTime("getcontentsPtr");
        return myValue;
      }

  };    

  /// Function for creating backend functor objects.
  ///
  /// This is needed due to the way the BE_FUNCTION / BE_VARIABLE macros
  /// in backend_general.hpp works at the moment...
  template<typename OUTTYPE, typename... ARGS>
  backend_functor<OUTTYPE,ARGS...> makeBackendFunctor( OUTTYPE(*f_in)(ARGS...), 
                                                          str func_name, 
                                                          str func_capab, 
                                                          str ret_type, 
                                                          str origin_name,
                                                          str origin_ver)
  { 
    return backend_functor<OUTTYPE,ARGS...>(f_in, func_name,func_capab,ret_type,origin_name,origin_ver);
  }

}

#endif /* defined(__functors_hpp__) */
