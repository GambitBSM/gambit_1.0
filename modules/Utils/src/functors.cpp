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


#include <boost/preprocessor/seq/for_each.hpp>
#include "functors.hpp"
#include "all_functor_types.hpp"

#define FWDPRINT(r,data,elem) virtual void print(elem const&, const functor*) = 0;

namespace Gambit
{

  /// Poorly declaration of Printers::BasePrinter for use in print functions; leave implementation to printer source files.
  /// If the compiled printer sources are not linked against the compiled program, any calls to the print functions will generate
  /// link errors.  This is how printers are removed from standalone module compilation, and calls to the print functions outlawed.
  namespace Printers
  {
    class BasePrinter
    {
      public:
        BOOST_PP_SEQ_FOR_EACH(FWDPRINT, _, PRINTABLE_TYPES)
        virtual void initialise(const std::vector<int>&) = 0;
        virtual void endline() = 0;
    };
  }
   
  // Functor class methods

    /// Constructor
    functor::functor (str func_name,
                      str func_capability,
                      str result_type,
                      str origin_name) :      
     myName          (func_name),
     myCapability    (func_capability),
     myType          (result_type),
     myOrigin        (origin_name),
     myStatus        (1),
     myVertexID      (-1),       // (Note: myVertexID = -1 is intended to mean that no vertexID has been assigned)
     needs_recalculating (true) {}
    
    /// Virtual calculate(); needs to be redefined in daughters.
    void functor::calculate() {};

    /// Interfaces for runtime optimization
    /// Need to be implemented by daughters
    /// @{
    double functor::getRuntimeAverage() { return 0; }
    double functor::getInvalidationRate() { return 0; }
    void functor::setFadeRate() {}
    void functor::notifyOfInvalidation() {}
    void functor::reset() {}
    /// @}

    /// Reset-then-recalculate method
    void functor::reset_and_calculate() { this->reset(); this->calculate(); } 

    /// Setter for version
    void functor::setVersion(str ver) { if (this == NULL) failBigTime("setVersion"); myVersion = ver; }
    /// Setter for status (0 = disabled, 1 = available (default), 2 = active)
    void functor::setStatus(int stat) { if (this == NULL) failBigTime("setStatus"); myStatus = stat; }
    /// Setter for purpose (relevant only for next-to-output functors)
    void functor::setPurpose(str purpose) { if (this == NULL) failBigTime("setPurpose"); myPurpose = purpose; }
    /// Setter for vertex ID (used in printer system)
    void functor::setVertexID(int vertexID) { if (this == NULL) failBigTime("setVertexID"); myVertexID = vertexID; }
    
    /// Getter for the wrapped function's name
    str functor::name()        const { if (this == NULL) failBigTime("name"); return myName; }
    /// Getter for the wrapped function's reported capability
    str functor::capability()  const { if (this == NULL) failBigTime("capability"); return myCapability; }
    /// Getter for the wrapped function's reported return type
    str functor::type()        const { if (this == NULL) failBigTime("type"); return myType; }
    /// Getter for the wrapped function's origin (module or backend name)
    str functor::origin()      const { if (this == NULL) failBigTime("origin"); return myOrigin; }
    /// Getter for the version of the wrapped function's origin (module or backend)
    str functor::version()     const { if (this == NULL) failBigTime("version"); return myVersion; }
    /// Getter for the wrapped function current status (0 = disabled, 1 = available (default), 2 = active)
    int functor::status()      const { if (this == NULL) failBigTime("status"); return myStatus; }
    /// Getter for the  overall quantity provided by the wrapped function (capability-type pair)
    sspair functor::quantity() const { if (this == NULL) failBigTime("quantity"); return std::make_pair(myCapability, myType); }
    /// Getter for purpose (relevant for output nodes, aka helper structures for the dep. resolution)
    str functor::purpose()     const { if (this == NULL) failBigTime("purpose"); return myPurpose; }
    /// Getter for vertex ID
    int functor::vertexID()    const { if (this == NULL) failBigTime("vertexID"); return myVertexID; }   
    /// Getter indicating if the wrapped function's result should to be printed
    bool functor::requiresPrinting() const { if (this == NULL) failBigTime("requiresPrinting"); return false; }

    /// Setter for indicating if the wrapped function's result should to be printed
    void functor::setPrintRequirement(bool flag)
    {
      if (flag)
      {
        cout << "Error.  The setPrintRequirement method has not been defined in this class." << endl;
        exit(1);
      }
    }

    /// Set the ordered list of pointers to other functors that should run nested in a loop managed by this one
    void functor::setNestedList (std::vector<functor*>&)
    { 
      cout << "Error.  The setNestedList method has not been defined in this class." << endl;
      exit(1);
    } 

    /// Set the iteration number in a loop in which this functor runs
    void functor::setIteration (int)
    { 
      cout << "Error.  The setIteration method has not been defined in this class." << endl;
      exit(1);
    }

    /// Getter for revealing whether this is permitted to be a manager functor
    bool functor::canBeLoopManager()
    {
      cout << "Error.  The canBeLoopManager method has not been defined in this class." << endl;
      exit(1);
    }

    /// Getter for revealing the required capability of the wrapped function's loop manager
    str functor::loopManagerCapability()
    {
      cout << "Error.  The loopManagerCapability method has not been defined in this class." << endl;
      exit(1);
    }

    /// Getter for listing currently activated dependencies
    std::vector<sspair> functor::dependencies()          
    { 
      cout << "Error.  The dependencies method has not been defined in this class." << endl;
      exit(1);
      std::vector<sspair> empty;
      return empty;
    }
    /// Getter for listing backend requirements
    std::vector<sspair> functor::backendreqs()                   
    {
      cout << "Error.  The backendreqs method has not been defined in this class." << endl;
      exit(1);
      std::vector<sspair> empty;
      return empty;
    }
    /// Getter for listing permitted backends
    std::vector<sspair> functor::backendspermitted(sspair) 
    { 
      cout << "Error.  The backendspermitted method has not been defined in this class." << endl;
      exit(1);
      std::vector<sspair> empty;
      return empty;
    }

    /// Getter for listing backend-specific conditional dependencies (4-string version)
    std::vector<sspair> functor::backend_conditional_dependencies (str, str, str, str)  
    { 
      cout << "Error.  The backend_conditional_dependencies method has not been defined in this class." << endl;
      exit(1);
      std::vector<sspair> empty;
      return empty;
    }
    
    /// Getter for backend-specific conditional dependencies (3-string version)
    std::vector<sspair> functor::backend_conditional_dependencies (str req, str type, str be)  
    { 
      return backend_conditional_dependencies(req, type, be, "any");
    }
    
    /// Getter for backend-specific conditional dependencies (backend functor pointer version)
    std::vector<sspair> functor::backend_conditional_dependencies (functor* be_functor)  
    { 
      return backend_conditional_dependencies (be_functor->capability(), be_functor->type(),
       be_functor->origin(), be_functor->version());
    }

    /// Getter for listing model-specific conditional dependencies
    std::vector<sspair> functor::model_conditional_dependencies (str)
    { 
      cout << "Error.  The model_conditional_dependencies method has not been defined in this class." << endl;
      exit(1);
      std::vector<sspair> empty;
      return empty;
    }

    /// Getter for listing model-specific conditional backend requirements
    std::vector<sspair> functor::model_conditional_backend_reqs (str)
    { 
      cout << "Error.  The model_conditional_backend_reqs method has not been defined in this class." << endl;
      exit(1);
      std::vector<sspair> empty;
      return empty;
    }

    /// Resolve a dependency using a pointer to another functor object
    void functor::resolveDependency (functor*)
    {
      cout << "Error.  The resolveDependency method has not been defined in this class." << endl;
      exit(1);
    }

    /// Resolve a backend requirement using a pointer to another functor object
    void functor::resolveBackendReq (functor*)
    {
      cout << "Error.  The resolveBackendReq method has not been defined in this class." << endl;
      exit(1);
    }

    /// Notify the functor that a certain model is being scanned, so that it can activate its dependencies accordingly.
    void functor::notifyOfModel(str)
    {
      cout << "Error.  The notifyOfModel method has not been defined in this class." << endl;
      exit(1);
    }

    /// Test whether the functor is allowed to be used with a given model 
    bool functor::modelAllowed(str model)
    {
      if (allowedModels.empty()) return true;
      str parent = find_allowed_parent_model(model);
      if (allowedModels.find(parent) != allowedModels.end()) return true;
      return false;        
    }

    /// Test whether the functor is allowed to be used with all models
    bool functor::allModelsAllowed()
    {
      return allowedModels.empty();
    }

    /// Add a model to the internal list of models for which this functor is allowed to be used.
    void functor::setAllowedModel(str model) { allowedModels.insert(model); }

    /// Print function
    void functor::print(Printers::BasePrinter*)
    { 
       // TODO: throw real GAMBIT Error
       std::cout<<"Warning: this is the functor base class print function! This should not be used; print "
        << "function should be redefined in daughter functor classes. If this is running there is a problem "
        << "somewhere (from functor "<<myName<<")."<<std::endl;
       std::cout<<"Currently only functors derived from module_functor_common<!=void> are allowed to try to print "
        << "themselves; i.e. backend and void functors may not do this (they inherit this default message)"<<std::endl;
    }    


    /// Attempt to retrieve a dependency or model parameter that has not been resolved
    void functor::failBigTime(str method)
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
    str functor::find_allowed_parent_model(str model)
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
    str functor::find_parent_model_in_map(str model, std::map< str, std::vector<sspair> > karta)
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


  // Module_functor_common class methods

    /// Constructor
    module_functor_common::module_functor_common(str func_name,
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
    double module_functor_common::getRuntimeAverage()
    {
      return runtime_average;
    }

    /// Reset functor
    void module_functor_common::reset()
    {
      needs_recalculating = true;
      runtime = .0;
    }

    /// Tell functor that it invalidated the current point in model space
    void module_functor_common::notifyOfInvalidation()
    {
      pInvalidation += fadeRate*(1-FUNCTORS_BASE_INVALIDATION_RATE);
    }

    /// Invalidation rate
    double module_functor_common::getInvalidationRate()
    {
      return pInvalidation;
    }

    void module_functor_common::setFadeRate(double new_rate)
    {
      fadeRate = new_rate;
    }

    /// Execute a single iteration in the loop managed by this functor.
    void module_functor_common::iterate(int iteration)
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
    void module_functor_common::setIteration (int iteration) { myCurrentIteration[omp_get_thread_num()] = iteration; }
    /// Return a safe pointer to the iteration number in the loop in which this functor runs.
    omp_safe_ptr<int> module_functor_common::iterationPtr() 
    {
      if (this == NULL) functor::failBigTime("iterationPtr");
      return omp_safe_ptr<int>(myCurrentIteration); 
    }

    /// Setter for specifying whether this is permitted to be a manager functor, which runs other functors nested in a loop.
    void module_functor_common::setCanBeLoopManager (bool canManage) { iCanManageLoops = canManage; }
    /// Getter for revealing whether this is permitted to be a manager functor
    bool module_functor_common::canBeLoopManager() { if (this == NULL) failBigTime("canBeLoopManager"); return iCanManageLoops; }

    /// Setter for specifying the capability required of a manager functor, if it is to run this functor nested in a loop.
    void module_functor_common::setLoopManagerCapability (str cap) { iRunNested = true; myLoopManagerCapability = cap; }
    /// Getter for revealing the required capability of the wrapped function's loop manager
    str module_functor_common::loopManagerCapability() { if (this == NULL) failBigTime("loopManagerCapability"); return myLoopManagerCapability; }
    /// Getter for revealing the name of the wrapped function's assigned loop manager
    str module_functor_common::loopManagerName() { if (this == NULL) failBigTime("loopManagerCapability"); return myLoopManagerName; }
    /// Getter for revealing the module of the wrapped function's assigned loop manager
    str module_functor_common::loopManagerOrigin() { if (this == NULL) failBigTime("loopManagerCapability"); return myLoopManagerOrigin; }

    /// Getter for listing currently activated dependencies
    std::vector<sspair> module_functor_common::dependencies() { return myDependencies; }
    /// Getter for listing backend requirements
    std::vector<sspair> module_functor_common::backendreqs() { return myBackendReqs; }
    /// Getter for listing permitted backends
    std::vector<sspair> module_functor_common::backendspermitted(sspair quant) 
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
    std::vector<sspair> module_functor_common::backend_conditional_dependencies (str req, str type, str be, str ver)  
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
    std::vector<sspair> module_functor_common::backend_conditional_dependencies (str req, str type, str be)  
    { 
      return backend_conditional_dependencies(req, type, be, "any");
    }
    
    /// Getter for backend-specific conditional dependencies (backend functor pointer version)
    std::vector<sspair> module_functor_common::backend_conditional_dependencies (functor* be_functor)  
    { 
      return backend_conditional_dependencies (be_functor->capability(), be_functor->type(),
       be_functor->origin(), be_functor->version());
    }

    /// Getter for listing model-specific conditional dependencies
    std::vector<sspair> module_functor_common::model_conditional_dependencies (str model)
    { 
      str parent = find_parent_model_in_map(model,myModelConditionalDependencies);
      if (parent != "") return myModelConditionalDependencies[parent];
      std::vector<sspair> empty;
      return empty;
    }

    /// Getter for listing model-specific conditional backend requirements
    std::vector<sspair> module_functor_common::model_conditional_backend_reqs (str model)
    { 
      str parent = find_parent_model_in_map(model,myModelConditionalBackendReqs);
      if (parent != "") return myModelConditionalBackendReqs[parent];
      std::vector<sspair> empty;
      return empty;
    }

    /// Add and activate unconditional dependencies.
    void module_functor_common::setDependency(str dep, str type, void(*resolver)(functor*, module_functor_common*), str purpose)
    {
      sspair key (dep, type);
      myDependencies.push_back(key);
      dependency_map[key] = resolver;
      this->myPurpose = purpose; // only relevant for output nodes
    }

    /// Add a backend conditional dependency for multiple backend versions
    void module_functor_common::setBackendConditionalDependency
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
    void module_functor_common::setBackendConditionalDependencySingular
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
    void module_functor_common::setModelConditionalDependency
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
    void module_functor_common::setModelConditionalDependencySingular
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
    void module_functor_common::setBackendReq(str req, str type, void(*resolver)(functor*))
    { 
      sspair key (req, type);
      backendreq_types[req] = type;
      myBackendReqs.push_back(key);
      backendreq_map[key] = resolver;
    }

    /// Add a model conditional backend requirement for multiple models
    void module_functor_common::setModelConditionalBackendReq
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
    void module_functor_common::setModelConditionalBackendReqSingular
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
    void module_functor_common::setPermittedBackend(str req, str be, str ver)
    {
      // Split the version string and send each version to be registered
      std::vector<str> versions = delimiterSplit(ver, ",");
      for (std::vector<str>::iterator it = versions.begin() ; it != versions.end(); ++it)
      {
        setPermittedBackendSingular(req, be, *it);
      }
    }

    /// Add a single permitted backend version
    void module_functor_common::setPermittedBackendSingular(str req, str be, str ver)
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
    void module_functor_common::setNestedList (std::vector<functor*> &newNestedList)
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
    void module_functor_common::resolveDependency (functor* dep_functor)
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
    void module_functor_common::resolveBackendReq (functor* be_functor)
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
    void module_functor_common::notifyOfModel(str model)
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

    /// Do pre-calculate timing things
    void module_functor_common::startTiming(double nsec, double sec)
    {
#ifndef HAVE_MAC
      clock_gettime(CLOCK_MONOTONIC, &tp);
#endif
      nsec = (double)-tp.tv_nsec;
      sec = (double)-tp.tv_sec;
    }

    /// Do post-calculate timing things
    void module_functor_common::finishTiming(double nsec, double sec)
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


  /// Class methods for actual module functors for TYPE != void

    template <typename TYPE>
    module_functor<TYPE>::module_functor(void (*inputFunction)(TYPE &),
                                   str func_name,
                                   str func_capability,
                                   str result_type,
                                   str origin_name)
    : module_functor_common(func_name, func_capability, result_type, origin_name),
      myFunction  (inputFunction),
      myPrintFlag (false)
    {
      myValue = new TYPE[1];                  // Allocate the memory needed to hold the result of this function
      myCurrentIteration = new int[1];        // Allocate the memory needed to hold the current iteration of the loop this function runs in
      myCurrentIteration[0] = 0;              // Zero the iteration counter to start off.
    }

    /// Destructor
    template <typename TYPE>
    module_functor<TYPE>::~module_functor() 
    { 
      delete [] myValue;
      delete [] myCurrentIteration;
    }

    /// Setter for specifying the capability required of a manager functor, if it is to run this functor nested in a loop.
    template <typename TYPE>
    void module_functor<TYPE>::setLoopManagerCapability (str manager) 
    { 
      module_functor_common::setLoopManagerCapability(manager); // Call the regular version of this method.
      delete [] myValue;                              // Get rid of the scalar result container
      delete [] myCurrentIteration;                   // Get rid of the scalar iteration container
      myValue = new TYPE[globlMaxThreads];            // Reserve enough space to hold as many results as there are threads allowed
      myCurrentIteration = new int[globlMaxThreads];  // Reserve enough space to hold as many iteration numbers as there are threads allowed
      std::fill(myCurrentIteration, myCurrentIteration+globlMaxThreads, 0); // Zero them to start off
    }

    /// Setter for indicating if the wrapped function's result should to be printed
    template <typename TYPE>
    void module_functor<TYPE>::setPrintRequirement(bool flag) { if (this == NULL) failBigTime("setPrintRequirement"); myPrintFlag = flag; }

    /// Getter indicating if the wrapped function's result should to be printed
    template <typename TYPE>
    bool module_functor<TYPE>::requiresPrinting() { if (this == NULL) failBigTime("requiresPrinting"); return myPrintFlag; }

    /// Calculate method
    template <typename TYPE>
    void module_functor<TYPE>::calculate()
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
    template <typename TYPE>
    TYPE module_functor<TYPE>::operator()(int index) 
    { 
      if (this == NULL) functor::failBigTime("operator()");
      return (iRunNested ? myValue[index] : myValue[0]);
    }

    /// Alternative to operation (returns a safe pointer to value)
    template <typename TYPE>
    safe_ptr<TYPE> module_functor<TYPE>::valuePtr()
    {
      if (this == NULL) functor::failBigTime("valuePtr");
      return safe_ptr<TYPE>(myValue);
    }

    /// Printer function
    template <typename TYPE>
    void module_functor<TYPE>::print(Printers::BasePrinter* printer, int index)
    {
      // Check if this functor is set to output its contents
      if(myPrintFlag)
      {
        if (not iRunNested) index = 0; // Force printing of index=0 if this functor cannot run nested. 
        // We now pass the 'this' pointer for this functor to the print function. In principle we could
        // probably pass only this, but it is a little tricky because we still have to call the overload
        // of 'print' which is appropriate for the type of 'myValue'. If the printers only expect
        // module_functors, then we could use the template type of the pointer to do the resolution, but 
        // it might just be more straightforward to pass 'myValue' like we are currently doing...
        printer->print(myValue[0],this);
      }
    }

    /// Printer function (no-thread-index short-circuit)
    template <typename TYPE>
    void module_functor<TYPE>::print(Printers::BasePrinter* printer) { print(printer,0); }


  /// Class methods for actual module functors for TYPE=void

    /// Constructor
    module_functor<void>::module_functor(void (*inputFunction)(),
                                         str func_name,
                                         str func_capability,
                                         str result_type,
                                         str origin_name)
    : module_functor_common(func_name, func_capability, result_type, origin_name),
      myFunction (inputFunction) {}

    /// Calculate method
    void module_functor<void>::calculate()
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
    void module_functor<void>::print(Printers::BasePrinter*, int) {} 


  /// Model functor class method definitions
    
    /// Constructor
    model_functor::model_functor(void (*inputFunction)(ModelParameters &),
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
    void model_functor::addParameter(str parname)
    {
      myValue->_definePar(parname);
    }

    /// Function for handing over parameter identities to another model_functor
    void model_functor::donateParameters(model_functor &receiver)
    {
      for(std::map<std::string,double>::const_iterator it = myValue->getValuesPtr()->begin();
          it != myValue->getValuesPtr()->end(); 
          it++)
      {
        receiver.addParameter(it->first);
      }
    }


  /// Primary model functor class method definitions
   
    /// Constructor
    primary_model_functor::primary_model_functor(void (*inputFunction)(ModelParameters &),
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
    ModelParameters* primary_model_functor::getcontentsPtr()
    {
      if (this == NULL) functor::failBigTime("getcontentsPtr");
      return myValue;
    }

#define INSTANTIATE_MODULE_FUNCTOR_TEMPLATE(r,x,TYPE)  template class module_functor<TYPE>; 
INSTANTIATE_MODULE_FUNCTOR_TEMPLATE(,,void)
BOOST_PP_SEQ_FOR_EACH(INSTANTIATE_MODULE_FUNCTOR_TEMPLATE,,PRINTABLE_TYPES)

//Maybe one day... 
//#define INSTANTIATE_BACKEND_FUNCTOR_TEMPLATE(...)      template class backend_functor<__VA_ARGS__>;
//BOOST_PP_SEQ_FOR_EACH(INSTANTIATE_BACKEND_FUNCTOR_TEMPLATE,,BACKEND_TYPES)

}
