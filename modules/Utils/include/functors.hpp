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
///  \date 2013 Apr-July, Dec
///  \date 2014 Jan, Mar
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
#include "model_types.hpp"
#include "model_functions.hpp"
#include "yaml_options.hpp"
#include "log.hpp"

// Decay rate of average runtime estimate
#define FUNCTORS_FADE_RATE 0.01
// Minimum invaldiation rate (should be 0<...<<1)
#define FUNCTORS_BASE_INVALIDATION_RATE 0.01
// Initial runtime estimate
#define FUNCTORS_RUNTIME_INIT 1000

namespace Gambit
{

  /// Forward declaration of Printers::BasePrinter class for use in print functions.
  namespace Printers { class BasePrinter; }

  /// Function wrapper (functor) base class
  class functor
  {

    public:

      /// Constructor
      functor (str, str, str, str);
      
      /// Virtual calculate(); needs to be redefined in daughters.
      virtual void calculate();

      // It may be safer to have some of the following things accessible 
      // only to the likelihood wrapper class and/or dependency resolver, i.e. so they cannot be used 
      // from within module functions

      /// Interfaces for runtime optimization
      /// Need to be implemented by daughters
      /// @{
      virtual double getRuntimeAverage();
      virtual double getInvalidationRate();
      virtual void setFadeRate();
      virtual void notifyOfInvalidation();
      virtual void reset();
      /// @}

      /// Reset-then-recalculate method
      virtual void reset_and_calculate();

      /// Setter for version
      void setVersion(str);
      /// Setter for status (0 = disabled, 1 = available (default), 2 = active)
      void setStatus(int);
      /// Setter for purpose (relevant only for next-to-output functors)
      void setPurpose(str);
      /// Setter for vertex ID (used in printer system)     
      void setVertexID(int);
   
      /// Getter for the wrapped function's name
      str name() const;
      /// Getter for the wrapped function's reported capability
      str capability() const;
      /// Getter for the wrapped function's reported return type
      str type() const;
      /// Getter for the wrapped function's origin (module or backend name)
      str origin() const;
      /// Getter for the version of the wrapped function's origin (module or backend)
      str version() const;
      /// Getter for the wrapped function current status (0 = disabled, 1 = available (default), 2 = active)
      int status() const;
      /// Getter for the  overall quantity provided by the wrapped function (capability-type pair)
      sspair quantity() const;
      /// Getter for purpose (relevant for output nodes, aka helper structures for the dep. resolution)
      str purpose() const;
      /// Getter for vertex ID
      int vertexID() const;
      /// Getter indicating if the wrapped function's result should to be printed
      virtual bool requiresPrinting() const;

      /// Setter for indicating if the wrapped function's result should to be printed
      virtual void setPrintRequirement(bool);

      /// Set the ordered list of pointers to other functors that should run nested in a loop managed by this one
      virtual void setNestedList (std::vector<functor*>&);

      /// Set the iteration number in a loop in which this functor runs
      virtual void setIteration (int);

      /// Getter for revealing whether this is permitted to be a manager functor
      virtual bool canBeLoopManager();

      /// Getter for revealing the required capability of the wrapped function's loop manager
      virtual str loopManagerCapability();

      /// Getter for listing currently activated dependencies
      virtual std::vector<sspair> dependencies();
      /// Getter for listing backend requirement groups
      virtual std::vector<str> backendgroups();                   
      /// Getter for listing all backend requirements
      virtual std::vector<sspair> backendreqs();
      /// Getter for listing backend requirements from a specific group
      virtual std::vector<sspair> backendreqs(str);
      /// Getter for listing permitted backends
      virtual std::vector<sspair> backendspermitted(sspair);

      /// Getter for listing backend-specific conditional dependencies (4-string version)
      virtual std::vector<sspair> backend_conditional_dependencies (str, str, str, str);
      
      /// Getter for backend-specific conditional dependencies (3-string version)
      virtual std::vector<sspair> backend_conditional_dependencies (str req, str type, str be);
      
      /// Getter for backend-specific conditional dependencies (backend functor pointer version)
      virtual std::vector<sspair> backend_conditional_dependencies (functor* be_functor);

      /// Getter for listing model-specific conditional dependencies
      virtual std::vector<sspair> model_conditional_dependencies (str);

      /// Getter for listing model-specific conditional backend requirements
      virtual std::vector<sspair> model_conditional_backend_reqs (str);

      /// Resolve a dependency using a pointer to another functor object
      virtual void resolveDependency (functor*);

      /// Resolve a backend requirement using a pointer to another functor object
      virtual void resolveBackendReq (functor*);

      /// Notify the functor that a certain model is being scanned, so that it can activate its dependencies accordingly.
      virtual void notifyOfModel(str);

      /// Notify the functor about an instance of the options class that contains
      /// information from its corresponding ini-file entry in the auxiliaries or
      /// observables section.
      void notifyOfIniOptions(const Options&);

      /// Return a safe pointer to the options that this functor is supposed to run with (e.g. from the ini file).
      safe_ptr<Options> getOptions();

      /// Test whether the functor is allowed (either explicitly or implicitly) to be used with a given model
      bool modelAllowed(str model);

      /// Test whether the functor has been explictly allowed to be used with a given model 
      bool modelExplicitlyAllowed(str model);

      /// Test whether the functor is allowed to be used with all models
      bool allModelsAllowed();

      /// Add a model to the internal list of models for which this functor is allowed to be used.
      void setAllowedModel(str model);

      /// Print function
      virtual void print(Printers::BasePrinter*);

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
      /// Internal storage of the vertex ID number used by the printer system to identify functors
      int myVertexID;
      /// Debug flag
      bool verbose;

      /// Internal storage of function options, as a YAML node
      Options myOptions;

      /// List of allowed models
      std::set<str> allowedModels;

      /// Needs recalculating or not?
      bool needs_recalculating;

      /// Attempt to retrieve a dependency or model parameter that has not been resolved
      static void failBigTime(str method);

      /// Test if a model has a parent model in the functor's allowedModels list
      bool allowed_parent_model_exists(str model);

      /// Try to find a parent model in some user-supplied map from models to sspair vectors
      str find_parent_model_in_map(str model, std::map< str, std::vector<sspair> > karta);

  };


  // ================================================================
  /// Functor derived class for module functions
  
  class module_functor_common : public functor
  {

    public:

      /// Constructor
      module_functor_common(str, str, str, str);

      /// Getter for averaged runtime
      double getRuntimeAverage();

      /// Reset functor
      void reset();

      /// Tell functor that it invalidated the current point in model space
      void notifyOfInvalidation();

      /// Getter for invalidation rate
      double getInvalidationRate();

      /// Setter for the fade rate 
      void setFadeRate(double new_rate);

      /// Return a safe pointer to the vector of models that this functor is currently configured to run with.
      safe_ptr< std::vector<str> > getModels();

      /// Return a safe pointer to a string indicating which backend requirement has been activated for a given backend group.
      safe_ptr<str> getChosenReqFromGroup(str);

      /// Execute a single iteration in the loop managed by this functor.
      void iterate(int iteration);

      /// Setter for setting the iteration number in the loop in which this functor runs
      virtual void setIteration (int iteration);
      /// Return a safe pointer to the iteration number in the loop in which this functor runs.
      virtual omp_safe_ptr<int> iterationPtr();

      /// Setter for specifying whether this is permitted to be a manager functor, which runs other functors nested in a loop.
      virtual void setCanBeLoopManager (bool canManage);
      /// Getter for revealing whether this is permitted to be a manager functor
      virtual bool canBeLoopManager();

      /// Setter for specifying the capability required of a manager functor, if it is to run this functor nested in a loop.
      virtual void setLoopManagerCapability (str cap);
      /// Getter for revealing the required capability of the wrapped function's loop manager
      virtual str loopManagerCapability();
      /// Getter for revealing the name of the wrapped function's assigned loop manager
      virtual str loopManagerName();
      /// Getter for revealing the module of the wrapped function's assigned loop manager
      virtual str loopManagerOrigin();

      /// Getter for listing currently activated dependencies
      virtual std::vector<sspair> dependencies();
      /// Getter for listing backend requirement groups
      virtual std::vector<str> backendgroups();                   
      /// Getter for listing all backend requirements
      virtual std::vector<sspair> backendreqs();
      /// Getter for listing backend requirements from a specific group
      virtual std::vector<sspair> backendreqs(str);
      /// Getter for listing permitted backends
      virtual std::vector<sspair> backendspermitted(sspair quant);

      /// Getter for listing backend-specific conditional dependencies (4-string version)
      virtual std::vector<sspair> backend_conditional_dependencies (str req, str type, str be, str ver);
      
      /// Getter for backend-specific conditional dependencies (3-string version)
      virtual std::vector<sspair> backend_conditional_dependencies (str req, str type, str be);
      
      /// Getter for backend-specific conditional dependencies (backend functor pointer version)
      virtual std::vector<sspair> backend_conditional_dependencies (functor* be_functor);

      /// Getter for listing model-specific conditional dependencies
      virtual std::vector<sspair> model_conditional_dependencies (str model);

      /// Getter for listing model-specific conditional backend requirements
      virtual std::vector<sspair> model_conditional_backend_reqs (str model);

      /// Add and activate unconditional dependencies.
      void setDependency(str, str, void(*)(functor*, module_functor_common*), str purpose= "");

      /// Add a backend conditional dependency for multiple backend versions
      void setBackendConditionalDependency(str, str, str, str, str, void(*)(functor*, module_functor_common*));

      /// Add a backend conditional dependency for a single backend version
      void setBackendConditionalDependencySingular(str, str, str, str, str, void(*)(functor*, module_functor_common*));

      /// Add a model conditional dependency for multiple models
      void setModelConditionalDependency(str, str, str, void(*)(functor*, module_functor_common*));

      /// Add a model conditional dependency for a single model
      void setModelConditionalDependencySingular(str, str, str, void(*)(functor*, module_functor_common*));

      /// Add an unconditional backend requirement
      /// The info gets updated later if this turns out to be contitional on a model. 
      void setBackendReq(str, str, std::vector<str>, str, void(*)(functor*));

      /// Add an unconditional backend requirement
      /// FIXME (delete me) The info gets updated later if this turns out to be contitional on a model. 
      void setBackendReq_deprecated(str, str, void(*)(functor*));

      /// Add a model conditional backend requirement for multiple models
      void setModelConditionalBackendReq(str model, str req, str type);

      /// Add a model conditional backend requirement for a single model
      void setModelConditionalBackendReqSingular(str model, str req, str type);

      /// Add multiple versions of a permitted backend 
      void setPermittedBackend(str req, str be, str ver);

      /// Add a single permitted backend version
      void setPermittedBackendSingular(str req, str be, str ver);

      /// Set the ordered list of pointers to other functors that should run nested in a loop managed by this one
      virtual void setNestedList (std::vector<functor*> &newNestedList);

      /// Resolve a dependency using a pointer to another functor object
      virtual void resolveDependency (functor* dep_functor);

      /// Resolve a backend requirement using a pointer to another functor object
      virtual void resolveBackendReq (functor* be_functor);

      /// Notify the functor that a certain model is being scanned, so that it can activate its dependencies and backend reqs accordingly.
      virtual void notifyOfModel(str model);


    protected:

      /// Current runtime in ns
      double runtime;

      /// Averaged runtime in ns
      double runtime_average;

      /// Fade rate for average runtime
      double fadeRate;

      /// Probability that functors invalidates point in model parameter space
      double pInvalidation;

      /// Internal list of models that this functor is currently configured to work with
      std::vector<str> myModels;

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

      /// Internal list of backend groups that this functor's requirements fall into.
      std::vector<str> myGroups;

      /// Map from groups to backend reqs, indicating which backend req has been activated for which backend group.
      std::map<str,str> chosenReqsFromGroups;

      /// Vector of all backend requirement-type string pairs        
      std::vector<sspair> myBackendReqs;

      /// Vector of backend requirement-type string pairs for specific backend groups       
      std::map<str,std::vector<sspair> > myGroupedBackendReqs;

      /// Vector of dependency-type string pairs 
      std::vector<sspair> myDependencies;

      /// Map from (vector with 4 strings: backend req, type, backend, version) to (vector of {conditional dependency-type} pairs)
      std::map< std::vector<str>, std::vector<sspair> > myBackendConditionalDependencies;

      /// Map from models to (vector of {conditional dependency-type} pairs)
      std::map< str, std::vector<sspair> > myModelConditionalDependencies;

      /// Map from models to (vector of {conditional backend requirement-type} pairs)
      std::map< str, std::vector<sspair> > myModelConditionalBackendReqs;

      /// Map from backend requirements to their required types
      std::map<str, str> backendreq_types;

      /// Map from backend requirements to their designated groups
      std::map<str, str> backendreq_groups;

      /// Map from backend requirements to their rule tags
      std::map<str, std::vector<str> > backendreq_tags; 

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
      virtual void startTiming(double nsec, double sec);

      /// Do post-calculate timing things
      virtual void finishTiming(double nsec, double sec);

      /// Integer LogTag, for tagging log messages
      int myLogTag; 

  };


  /// Actual module functor type for all but TYPE=void
  template <typename TYPE>
  class module_functor : public module_functor_common
  {

    public:

      /// Constructor
      module_functor(void(*)(TYPE &), str, str, str, str);

      /// Destructor
      ~module_functor();

      /// Setter for specifying the capability required of a manager functor, if it is to run this functor nested in a loop.
      virtual void setLoopManagerCapability (str manager);

      /// Setter for indicating if the wrapped function's result should to be printed
      virtual void setPrintRequirement(bool flag);

      /// Getter indicating if the wrapped function's result should to be printed
      virtual bool requiresPrinting();

      /// Calculate method
      void calculate();

      /// Operation (return value)
      TYPE operator()(int index);

      /// Alternative to operation (returns a safe pointer to value)
      safe_ptr<TYPE> valuePtr();

      /// Printer function
      virtual void print(Printers::BasePrinter* printer, int index);

      /// Printer function (no-thread-index short-circuit)
      virtual void print(Printers::BasePrinter* printer);


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
      module_functor(void (*)(), str, str, str, str);

      /// Calculate method
      void calculate();

      /// Blank print method
      virtual void print(Printers::BasePrinter*, int);

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

      /// Integer LogTag, for tagging log messages
      int myLogTag; 

    public:

      /// Constructor 
      backend_functor_common (funcPtrType, str, str, str, str, str);

      /// Update the internal function pointer wrapped by the functor
      void updatePointer(funcPtrType inputFunction);

      /// Hand out the internal function pointer wrapped by the functor
      funcPtrType handoutFunctionPointer();

  };


  /// Actual backend functor type for all but TYPE=void
  template <typename TYPE, typename... ARGS>
  class backend_functor : public backend_functor_common<TYPE, ARGS...>
  {

    public:

      /// Constructor 
      backend_functor (TYPE(*)(ARGS...), str, str, str, str, str);

      /// Operation (execute function and return value) 
      TYPE operator()(ARGS... args);

      /// Alternative to operation, in case the functor return value is 
      /// in fact a pointer to a backend variable. 
      safe_variable_ptr<TYPE> variablePtr();

  };


  /// Template specialisation of backend functor type for TYPE=void
  template <typename... ARGS>
  class backend_functor<void, ARGS...> : public backend_functor_common<void, ARGS...>
  {

    public:

      /// Constructor 
      backend_functor (void (*)(ARGS...), str, str, str, str, str);
    
      /// Operation (execute function and return value) 
      void operator()(ARGS... args);

  };

  /// Functors specific to ModelParameters objects
  class model_functor : public module_functor<ModelParameters>
  {
  
    public:
    
      /// Constructor
      model_functor(void (*)(ModelParameters &), str, str, str, str);
      
      /// Function for adding a new parameter to the map inside the ModelParameters object
      void addParameter(str parname);

      /// Function for handing over parameter identities to another model_functor
      void donateParameters(model_functor &receiver);

  };    

  /// Functors specific to primary ModelParameters objects
  ///
  /// These allow direct access to the functor contents via a raw pointer, so 
  /// that the parameter values can be set (not allowed via safe pointers).
  class primary_model_functor : public model_functor
  {
  
    public:
    
      /// Constructor
      primary_model_functor(void (*)(ModelParameters &), str, str, str, str);
      
      /// Functor contents raw pointer "get" function
      /// Returns a raw pointer to myValue, so that the contents may be 
      /// modified (intended for setting parameter values in primary 
      /// ModelParameters objects)
      ModelParameters* getcontentsPtr();

  };    


//**********************************************************************
// Everything below this point is implementation.  If we ever get the 
// functor type harvester script to also harvest backend functor types
// (along with their argument types), then we can move it all into the 
// source file instead, and generate the specialisations using
// BOOST_PP_SEQ_FOR_EACH(INSTANTIATE_BACKEND_FUNCTOR_TEMPLATE,,BACKEND_TYPES)
// in that file. 
//**********************************************************************

  // Backend_functor_common class method definitions

    /// Constructor 
    template <typename TYPE, typename... ARGS>
    backend_functor_common<TYPE, ARGS...>::backend_functor_common (funcPtrType inputFunction, 
                                                                   str func_name,
                                                                   str func_capability, 
                                                                   str result_type,
                                                                   str origin_name,
                                                                   str origin_version) 
    : functor (func_name, func_capability, result_type, origin_name),
      myFunction (inputFunction),
      myLogTag(-1) 
    {
      myVersion = origin_version; 
      // Determine LogTag number
      myLogTag = Logging::str2tag(myOrigin);
      // Check for failure
      if(myLogTag==-1)
      {
        std::ostringstream ss;
        ss << "Error retrieving LogTag number (in functors.hpp, constructor for backend_functor_common)! No match for backend name in tag2str map! This is supposed to be a backend functor, so this is a fatal error. (myOrigin="<<myOrigin<<", myName="<<myName<<")";
        logger().send(ss.str(),LogTags::err,LogTags::fatal);
        //TODO: gambit error
        exit(0);
      }
    }

    /// Update the internal function pointer wrapped by the functor
    template <typename TYPE, typename... ARGS>
    void backend_functor_common<TYPE, ARGS...>::updatePointer(funcPtrType inputFunction)
    {
      myFunction = inputFunction;
    }

    /// Hand out the internal function pointer wrapped by the functor
    template <typename TYPE, typename... ARGS>
    typename backend_functor_common<TYPE, ARGS...>::funcPtrType backend_functor_common<TYPE, ARGS...>::handoutFunctionPointer() 
    {
      return myFunction;
    }

    // Actual backend functor class method definitions for TYPE != void

    /// Constructor 
    template <typename TYPE, typename... ARGS>
    backend_functor<TYPE, ARGS...>::backend_functor (TYPE (*inputFunction)(ARGS...), 
                                                     str func_name,
                                                     str func_capability, 
                                                     str result_type,
                                                     str origin_name,
                                                     str origin_version)
    : backend_functor_common<TYPE, ARGS...>(inputFunction, func_name,
      func_capability, result_type, origin_name, origin_version) {}

    /// Operation (execute function and return value) 
    template <typename TYPE, typename... ARGS>
    TYPE backend_functor<TYPE, ARGS...>::operator()(ARGS... args) 
    {
      if (this == NULL) functor::failBigTime("operator()");
      logger().entering_backend(this->myLogTag);
      TYPE tmp = this->myFunction(args...);
      logger().leaving_backend();
      return tmp;
    }

    /// Alternative to operation, in case the functor return value is 
    /// in fact a pointer to a backend variable. 
    template <typename TYPE, typename... ARGS>
    safe_variable_ptr<TYPE> backend_functor<TYPE, ARGS...>::variablePtr()
    {
      if (this == NULL) functor::functor::failBigTime("variablePtr");
      return safe_variable_ptr<TYPE>(this->myFunction); 
    }


    // Actual backend functor class method definitions for TYPE=void

    /// Constructor 
    template <typename... ARGS>
    backend_functor<void, ARGS...>::backend_functor (void (*inputFunction)(ARGS...), 
                                                     str func_name,
                                                     str func_capability, 
                                                     str result_type,
                                                     str origin_name,
                                                     str origin_version)
    : backend_functor_common<void, ARGS...>(inputFunction, func_name,
      func_capability, result_type, origin_name, origin_version) {}
    
    /// Operation (execute function and return value) 
    template <typename... ARGS>
    void backend_functor<void, ARGS...>::operator()(ARGS... args) 
    {
      if (this == NULL) functor::functor::failBigTime("operator()");
      logger().entering_backend(this->myLogTag);
      this->myFunction(args...);
      logger().leaving_backend();
    }

}

#endif /* defined(__functors_hpp__) */
