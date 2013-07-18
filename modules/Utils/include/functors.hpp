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
///  \date 2013 Apr, May, June
///
///  \author Anders Kvellestad
///          (anders.kvellestad@fys.uio.no) 
///   \date 2013 Apr --> Added backend functor class
///
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 May, June, July 2013
///
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2013 July --> Added primary_model_functor class
///
///  *********************************************


#ifndef __functors_hpp__
#define __functors_hpp__

#include <map>
#include <vector>
#include <util_classes.hpp>
#include <util_functions.hpp>
#include <time.h>
#include <ModelParameters.hpp>

// Decay rate of average runtime estimate
#define FUNCTORS_FADE_RATE 0.01
// Minimum invaldiation rate (should be 0<...<<1)
#define FUNCTORS_BASE_INVALIDATION_RATE 0.01
// Initial runtime estimate
#define FUNCTORS_RUNTIME_INIT 1000

namespace GAMBIT
{

  // =====================================
  /// Function wrapper (functor) base class

  class functor
  {

    public:

      /// Empty virtual calculate(), needs to be redefined in daughters.
      virtual void calculate() {}

      /// Interface for runtime optimization
      /// Needs to be implemented by daughters
      virtual double getRuntimeAverage() {}
      virtual double getInvalidationRate() {}
      virtual void setFadeRate() {}
      virtual void notifyOfInvalidation() {}
      virtual void reset() {}

      // It may be safer to have the following things accessible 
      // only to the likelihood wrapper class and/or dependency resolver, i.e. so they cannot be used 
      // from within module functions

      /// Getter for the wrapped function's name
      str name()        { if (this == NULL) failBigTime(); return myName;       }
      /// Getter for the wrapped function's reported capability
      str capability()  { if (this == NULL) failBigTime(); return myCapability; }
      /// Getter for the wrapped function's reported return type
      str type()        { if (this == NULL) failBigTime(); return myType;       }
      /// Getter for the wrapped function's origin (module or backend name)
      str origin()      { if (this == NULL) failBigTime(); return myOrigin;     }
      /// Getter for the  version of the wrapped function's origin (module or backend)
      str version()     { if (this == NULL) failBigTime(); return myVersion;    }
      /// Getter for the wrapped function current status (0 = disabled, 1 = available (default), 2 = active)
      int status()      { if (this == NULL) failBigTime(); return myStatus;     }
      /// Getter for the  overall quantity provided by the wrapped function (capability-type pair)
      sspair quantity() { if (this == NULL) failBigTime(); return std::make_pair(myCapability, myType); }
      /// Getter for obsType (relevant for output nodes, aka helper structures for the dep. resolution)
      str obsType()     { if (this == NULL) failBigTime(); return myObsType;    }
      /// Setter for obsType (relevant only for next-to-output nodes)
      void setObsType(str obsType) { if (this == NULL) failBigTime(); this->myObsType = obsType; }

      /// Set method for version
      void setVersion(str ver) { myVersion = ver; }

      /// Set method for status (0 = disabled, 1 = available (default), 2 = active)
      void setStatus(int stat) { myStatus = stat; }

      /// Needs recalculating or not?  (Externally modifiable FIXME not sure if this should stay this way)
      bool needs_recalculating;

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
      virtual std::vector<sspair> backendspermitted(sspair quant) 
      { 
        cout << "Error.  The backendspermitted method has not been defined in this class." << endl;
        exit(1);
        std::vector<sspair> empty;
        return empty;
      }

      /// Getter for listing backend-specific conditional dependencies (4-string version)
      virtual std::vector<sspair> backend_conditional_dependencies (str req, str type, str be, str ver)  
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
      /// FIXME needs to use congruency relation to trigger on model descendents also
      virtual std::vector<sspair> model_conditional_dependencies (str model)
      { 
        cout << "Error.  The model_conditional_dependencies method has not been defined in this class." << endl;
        exit(1);
        std::vector<sspair> empty;
        return empty;
      }

      /// Resolve a dependency using a pointer to another functor object
      virtual void resolveDependency (functor* dep_functor)
      {
        cout << "Error.  The resolveDependency method has not been defined in this class." << endl;
        exit(1);
      }

      /// Resolve a backend requirement using a pointer to another functor object
      virtual void resolveBackendReq (functor* be_functor)
      {
        cout << "Error.  The resolveBackendReq method has not been defined in this class." << endl;
        exit(1);
      }

      /// Notify the functor that a certain model is being scanned, so that it can activate its dependencies accordingly.
      virtual void notifyOfModel(str model)
      {
        cout << "Error.  The notifyOfModel method has not been defined in this class." << endl;
        exit(1);
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
      /// myObsType(relevant for output and next-to-output nodes)
      str myObsType;
      /// Status: 0 disabled, 1 available (default), 2 active (required for dependency resolution)
      int myStatus;

      /// Attempt to retrieve a dependency or model parameter that has not been resolved
      static void failBigTime()
      {
          cout << endl << "Error in module function!  Attempted to use a conditional " << endl;
          cout << "dependency that has not been activated, or a model parameter " << endl;
          cout << "that is not defined in the model for which this function has " << endl;
          cout << "been invoked.  Please check your module function source code. " << endl;
          exit(1);
          /// FIXME \todo throw real error here                             
      }

  };


  // ================================================================
  /// Functor derived class for module functions with result type TYPE

  template <typename TYPE>
  class module_functor : public functor
  {

    public:

      /// Constructor
      module_functor(void (*inputFunction)(TYPE &),
                            str func_name,
                            str func_capability,
                            str result_type,
                            str origin_name)
      {
        myFunction      = inputFunction;
        myName          = func_name;
        myCapability    = func_capability;
        myType          = result_type;
        myOrigin        = origin_name;
        myStatus        = 1;
        needs_recalculating = true;
        usePointer = false;
        runtime_average = FUNCTORS_RUNTIME_INIT; // default 1 micro second
        runtime         = FUNCTORS_RUNTIME_INIT;
        pInvalidation   = FUNCTORS_BASE_INVALIDATION_RATE;
        fadeRate        = FUNCTORS_FADE_RATE; // can be set individually for each functor
      }

      /// Overloading Constructor
      // CW: Should be removed again once proper module parameters work
      module_functor(TYPE * outputPointer,
                            str func_name,
                            str func_capability,
                            str result_type,
                            str origin_name)
      {
        myPointer       = outputPointer;
        myName          = func_name;
        myCapability    = func_capability;
        myType          = result_type;
        myOrigin        = origin_name;
        myStatus        = 1;
        needs_recalculating = true;
        usePointer = true;
        runtime_average = FUNCTORS_RUNTIME_INIT;
        runtime         = FUNCTORS_RUNTIME_INIT;
        pInvalidation   = FUNCTORS_BASE_INVALIDATION_RATE;
        fadeRate        = FUNCTORS_FADE_RATE;
      }

      /// Calculate method (using either function or pointer)
      void calculate()
      {
        if(needs_recalculating)
        {
          timespec tp;
          double nsec, sec;
          clock_gettime(CLOCK_MONOTONIC, &tp);
          nsec = (double)-tp.tv_nsec;
          sec = (double)-tp.tv_sec;
          if(usePointer)
            myValue = *myPointer;
          else
            this->myFunction(myValue);
          clock_gettime(CLOCK_MONOTONIC, &tp);
          nsec += (double)tp.tv_nsec;
          sec += (double)tp.tv_sec;
          runtime = sec*1e9 + nsec;
          needs_recalculating = false;
          runtime_average = runtime_average*(1-fadeRate) + fadeRate*runtime;
          pInvalidation = pInvalidation*(1-fadeRate) +
            fadeRate*FUNCTORS_BASE_INVALIDATION_RATE;
          cout << "Runtime " << myName << ": " << runtime << " ns (" <<
            runtime_average << " ns)" << endl;
        }
      }

      // Getter for averaged runtime
      double getRuntimeAverage()
      {
        return runtime_average;
      }

      // Reset functor
      void reset()
      {
        needs_recalculating = true;
        runtime = .0;
      }

      // Tell functor that it invalidated the current point in model space
      void notifyOfInvalidation()
      {
        pInvalidation += fadeRate*(1-FUNCTORS_BASE_INVALIDATION_RATE);
      }

      // Invalidation rate
      double getInvalidationRate()
      {
        return pInvalidation;
      }

      void setFadeRate(double new_rate)
      {
        fadeRate = new_rate;
      }

      /// Operation (return value)
      TYPE operator()() 
      { 
        if (this == NULL) functor::failBigTime();
        return myValue;
      }

      /// Alternative to operation (returns a safe pointer to value)
      safe_ptr<TYPE> valuePtr()
      {
        if (this == NULL) functor::failBigTime();
        return safe_ptr<TYPE>(&myValue);
      }

      /// Getter for listing currently activated dependencies
      virtual std::vector<sspair> dependencies()                  { return myDependencies; }
      /// Getter for listing backend requirements
      virtual std::vector<sspair> backendreqs()                   { return myBackendReqs; }
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
      /// FIXME needs to use congruency relation to trigger on model descendents also
      virtual std::vector<sspair> model_conditional_dependencies (str model)
      { 
        if (myModelConditionalDependencies.find(model) != myModelConditionalDependencies.end())
        {
          return myModelConditionalDependencies[model];
        }
        else
        {
          std::vector<sspair> empty;
          return empty;
        }
      }

      /// Add and activate unconditional dependencies (a beer for anyone who can explain why this-> is required here).
      void setDependency(str dep, str type, void(*resolver)(functor*), str obsType = "")
      {
        sspair key (dep, type);
        myDependencies.push_back(key);
        dependency_map[key] = resolver;
        this->myObsType = obsType; // only relevant for output nodes
      }

      /// Add a backend conditional dependency for multiple backend versions
      void setBackendConditionalDependency
       (str req, str be, str ver, str dep, str dep_type, void(*resolver)(functor*))
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
       (str req, str be, str ver, str dep, str dep_type, void(*resolver)(functor*))
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

      /// Add a model conditional dependency
      void setModelConditionalDependency
       (str model, str dep, str dep_type, void(*resolver)(functor*))
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

      /// Add a backend requirement
      void setBackendReq(str req, str type, void(*resolver)(functor*))
      { 
        sspair key (req, type);
        backendreq_types[req] = type;
        myBackendReqs.push_back(key);
        backendreq_map[key] = resolver;
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
          (*dependency_map[key])(dep_functor);
          // propagate obsType from next to next-to-output nodes
          dep_functor->setObsType(this->myObsType);
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
            ///\todo FIXME throw a real error here
          } 
        }
        else
        {                                                                      
          cout << "Error whilst attempting to resolve backend requirement:" << endl;
          cout << "Function "<< myName << " in " << myOrigin << " does not require " << endl;
          cout << "backend capability " << key.first << " with type " << key.second << "." << endl;
          ///\todo FIXME throw a real error here
        }        
      }

      /// Notify the functor that a certain model is being scanned, so that it can activate its dependencies accordingly.
      virtual void notifyOfModel(str model)
      {
        //If this model fits any conditional dependencies (or is a descendent of a model that fits any), then activate them.
        std::vector<sspair> deps_to_activate = model_conditional_dependencies(model);          
        for (std::vector<sspair>::iterator it = deps_to_activate.begin() ; it != deps_to_activate.end(); ++it)
        {
          myDependencies.push_back(*it);        
        }
      }

    protected:

      /// Internal storage of function value
      TYPE myValue;

      /// Internal storage of function pointer (if usePointer == false)
      void (*myFunction)(TYPE &);

      /// Internal storage of value pointer (if usePointer == true)
      TYPE * myPointer;

      /// myValue either determined by myFunction (false) or myPointer (true)
      bool usePointer;

      /// Current runtime in ns
      double runtime;

      /// Averaged runtime in ns
      double runtime_average;

      /// Fade rate for average runtime
      double fadeRate;

      /// Probability that functors invalidates point in model parameter space
      double pInvalidation;

      /// Vector of dependency-type string pairs 
      std::vector<sspair> myDependencies;
      /// Vector of backend requirement-type string pairs        
      std::vector<sspair> myBackendReqs;

      /// Map from (vector with 4 strings: backend req, type, backend, version) to (vector of {conditional dependency-type} pairs)
      std::map< std::vector<str>, std::vector<sspair> > myBackendConditionalDependencies;

      /// Map from models to (vector of {conditional dependency-type} pairs)
      std::map< str, std::vector<sspair> > myModelConditionalDependencies;

      /// Map from backend requirements to their required types
      std::map<str, str> backendreq_types;

      /// Map from (dependency-type pairs) to (pointers to templated void functions 
      /// that set dependency functor pointers)
      std::map<sspair, void(*)(functor*)> dependency_map;

      /// Map from (backend requirement-type pairs) to (pointers to templated void functions 
      /// that set backend requirement functor pointers)
      std::map<sspair, void(*)(functor*)> backendreq_map;

      /// Map from (backend requirement-type pairs) to (vector of permitted {backend-version} pairs)
      std::map< sspair, std::vector<sspair> > permitted_map;

  };


  // ===============================================================================
  /// Backend functor class for functions with result type TYPE and argumentlist ARGS 

  template <typename TYPE, typename... ARGS>
  class backend_functor_common : public functor
  {

    public:

      /// Constructor 
      backend_functor_common (TYPE (*inputFunction)(ARGS...), 
                              str func_name,
                              str func_capability, 
                              str result_type,
                              str origin_name,
                              str origin_version)
      {
        myFunction      = inputFunction;
        myName          = func_name;
        myCapability    = func_capability;
        myType          = result_type;
        myOrigin        = origin_name;
        myVersion       = origin_version;
        myStatus        = 1;
        needs_recalculating = true;
      }

      void updatePointer(TYPE (*inputFunction)(ARGS...))
      {
        myFunction = inputFunction;
      }

    protected:

      /// Internal storage of function pointer
      TYPE (*myFunction)(ARGS...);

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

      /* Which is the better user interface?
       * 
       * 1) Force the use of 'someFunctor.calculate(args...)'
       *    to run a calculation and then obtain result via 'someFunctor()'.
       * 
       * 2) Use 'someFunctor(args...)' to perform calculation and return result.
       *    The function 'someFunctor.calculate(args...)' could still be used
       *    to force a re-calculation (regardless of 'needs_recalculating' flag).
       *    (Could also throw in a 'getResult()' function.) */
       
      // 1) Calculate method
      //void calculate(ARGS... args) { if(this->needs_recalculating) { myValue = this->myFunction(args...); } }

      // 1) Operation (return value) 
      //TYPE operator()() { return this->myValue; }

      /// 2) Calculate method 
      void calculate(ARGS... args) { myValue = this->myFunction(args...); }

      /// 2) Operation (execute function and return value) 
      TYPE operator()(ARGS... args) 
      { 
        if (this == NULL) functor::failBigTime();
        if(this->needs_recalculating) { myValue = this->myFunction(args...); }
        return myValue;
      }

      /// 2) Alternative to operation (execute function return a pointer to value)
      safe_ptr<TYPE> valuePtr(ARGS... args)
      {
        if (this == NULL) functor::functor::failBigTime();
        if(this->needs_recalculating) { myValue = this->myFunction(args...); }
        return safe_ptr<TYPE>(&myValue);
      }


    protected:

      /// Internal storage of function value
      TYPE myValue;
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
    
      // 1) Calculate method
      //void calculate(ARGS... args) { if(this->needs_recalculating) { this->myFunction(args...); } }

      // 1) Operation (return value) 
      //TYPE operator()() { this->myFunction(args...); }

      /// 2) Calculate method 
      void calculate(ARGS... args) { this->myFunction(args...); }

      /// 2) Operation (execute function and return value) 
      void operator()(ARGS... args) 
      { 
        if (this == NULL) functor::functor::failBigTime();
        if(this->needs_recalculating) { this->myFunction(args...); }
      }

  };

  /// Functors specific to primary ModelParameters objects
  ///
  /// These allow direct access to the functor contents via a raw pointer, so 
  /// that the parameter values can be set (not allowed via safe pointers).
  class primary_model_functor : public module_functor<ModelParameters>
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
        : module_functor<ModelParameters>(inputFunction,
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
        if (this == NULL) functor::failBigTime();
        return &this->myValue;
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
  


// FIXME: This is probably not the best place to define global variables:
#ifndef IN_CORE
    extern
#endif
  std::vector<functor *> globalFunctorList;
#ifndef IN_CORE
    extern
#endif
  std::vector<functor *> globalBackendFunctorList;
#ifndef IN_CORE
    extern
#endif
  std::vector<primary_model_functor *> globalPrimaryModelFunctorList;
}

#endif /* defined(__functors_hpp__) */
