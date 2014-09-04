//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  'Safety bucket' class definitions.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Anders Kvellestad
///          (anders.kvellestad@fys.uio.no) 
///   \date 2013 Apr, Nov
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca) 
///   \date 2014 Mar
///
///  *********************************************

#ifndef __safety_bucket_hpp__
#define __safety_bucket_hpp__

#include <iostream>
#include <omp.h>

#include "util_types.hpp"
#include "standalone_error_handlers.hpp"
#include "functors.hpp"


namespace Gambit
{

  /// Base class for the interface classes 'dep_bucket', 'BEvariable_bucket' and 'BEfunction_bucket'.
  class safety_bucket_base
  {
    
    public:

      /// Get capability name.
      str name()
      { 
        if (not _initialized) dieGracefully();
        return _functor_base_ptr->name();
      }

      // Get name of origin (module/backend).
      str origin()
      { 
        if (not _initialized) dieGracefully();
        return _functor_base_ptr->origin();
      }


    protected:

      functor * _functor_base_ptr;

      bool _initialized;

      /// Failure message invoked when the user tries to access the object before it is initialized.
      static void dieGracefully()
      {
        str errmsg = "You just tried to access a GAMBIT object (derived from 'safety_bucket_base')"
                   "\nthat has not been initialized with a non-zero functor pointer. Bad idea."
                   "\nProbably you tried to retrieve a backend or module dependency"
                   "\nthat has not been activated.";
        utils_error().raise(LOCAL_INFO,errmsg);
      }
  };



  /// An interface class for module dependencies.
  template <typename TYPE>
  class dep_bucket : public safety_bucket_base
  {

    public:

      /// Constructor for dep_bucket.
      dep_bucket(module_functor<TYPE> * functor_ptr_in = NULL, module_functor_common* dependent_functor_ptr_in = NULL)
      {
        initialize(functor_ptr_in, dependent_functor_ptr_in);
      }

      /// Initialize this bucket with a depedency functor pointer.
      void initialize(module_functor<TYPE> * functor_ptr_in, module_functor_common* dependent_functor_ptr_in)
      {
        _functor_ptr = functor_ptr_in;
        _functor_base_ptr = functor_ptr_in;
        _dependent_functor_ptr = dependent_functor_ptr_in;
        
        // Extract pointer to dependency from functor and store as a safe_ptr.
        if (functor_ptr_in == NULL)  
        {
          _sptr.set(NULL); 
          _initialized = false;
        }
        else 
        { 
          _sptr = _functor_ptr->valuePtr();
          _initialized = true;
        }
      }

      /// Get module name.
      str module()
      { 
        return origin();
      }

      /// Check if the thread index needs to be used to access the functor's result
      static bool use_thread_index(module_functor<TYPE>* f1, module_functor_common* f2)
      {
        return (f1->loopManagerCapability() != "none" and
          f1->loopManagerCapability() == f2->loopManagerCapability() and
          f1->loopManagerName()       == f2->loopManagerName()       and
          f1->loopManagerOrigin()     == f2->loopManagerOrigin() );        
      }

      /// Dereference the dependency pointer stored as a safe_ptr.
      const TYPE& operator *() const
      {
        if (not _initialized) dieGracefully();
        //Choose the index of the thread if the dependency and the dependent functor are running inside the same loop.  If not, just access the first element.
        int index = use_thread_index(_functor_ptr, _dependent_functor_ptr) ? omp_get_thread_num() : 0;
        return _sptr[index];                 
      }


      /// Access is allowed to const member functions only
      const TYPE* operator->() const
      { 
        if (not _initialized) dieGracefully();
        //Choose the index of the thread if the dependency and the dependent functor are running inside the same loop.  If not, just choose the first element.
        int index = use_thread_index(_functor_ptr, _dependent_functor_ptr) ? omp_get_thread_num() : 0;
        return _sptr.operator->() + index;   //Call a const member function of the indexth element of the array pointed to by the safe pointer.
      }        

      /// Get the safe_ptr.
      safe_ptr<TYPE>& safe_pointer()
      {
        if (not _initialized) dieGracefully();
        return _sptr;
      }


    protected:

      module_functor<TYPE> * _functor_ptr;
      safe_ptr<TYPE> _sptr;
      module_functor_common * _dependent_functor_ptr;

  };



  /// A base class for BEvariable_bucket and BEfunction_bucket.
  class BE_bucket_base : public safety_bucket_base
  {

    public:

      /// Get backend name.
      str backend()
      { 
        return origin();
      }

      /// Get version information.
      str version()
      { 
        if (not _initialized) dieGracefully();
        return _functor_base_ptr->version();
      }

  };


  /// An interface class for backend variables.
  template <typename TYPE>
  class BEvariable_bucket : public BE_bucket_base
  {

    protected:

      backend_functor<TYPE*> * _functor_ptr;
      safe_variable_ptr<TYPE> _svptr;

    public:

      /// Constructor for BEvariable_bucket.
      BEvariable_bucket(backend_functor<TYPE*> * functor_ptr_in = NULL)
      {
        initialize(functor_ptr_in);
      }


      /// Initialize this bucket with a functor pointer.
      void initialize(backend_functor<TYPE*> * functor_ptr_in)
      {
        _functor_ptr      = functor_ptr_in;
        _functor_base_ptr = functor_ptr_in;

        if (functor_ptr_in == NULL)  
        {
          _svptr.set(NULL); 
          _initialized = false;
        }
        else 
        { 
          // Extract variable pointer from functor and store as a safe_variable_ptr 
          _svptr.set( (*_functor_ptr)() );
          _initialized = true;
        }
      }

      /// Dereference the variable pointer stored as a safe_variable_ptr.
      TYPE& operator *()
      {
        if (not _initialized) dieGracefully();
        return *_svptr;
      }

      /// Access member functions
      TYPE* operator->()
      { 
        return _svptr.operator->();
      }        

      /// Get the underlying variable pointer.
      TYPE * pointer()
      {
        if (not _initialized) dieGracefully();
        return _svptr.get();
      }

      /// Get the safe_variable_ptr.
      safe_variable_ptr<TYPE>& safe_pointer()
      {
        if (not _initialized) dieGracefully();
        return _svptr;
      }

  };


  /// An interface class for backend functions.
  template <typename TYPE, typename... ARGS>
  class BEfunction_bucket : public BE_bucket_base
  {

    public:

      /// Constructor for BEfunction_bucket.
      BEfunction_bucket(backend_functor<TYPE, ARGS...>* functor_ptr_in = NULL)
      {
        initialize(functor_ptr_in);
      }

      /// Initialize this bucket with a functor pointer.
      void initialize(backend_functor<TYPE, ARGS...>* functor_ptr_in)
      {
        _functor_ptr      = functor_ptr_in;
        _functor_base_ptr = functor_ptr_in;

        if (functor_ptr_in == NULL)  
        {
          _initialized = false;
        }
        else 
        { 
          _initialized = true;
        }
      }

      /// Call backend function.
      TYPE operator ()(ARGS&& ...args)
      {
        if (not _initialized) dieGracefully();
        return (*_functor_ptr)(std::forward<ARGS>(args)...);
      }

      /// Return the underlying function pointer.
      TYPE (*pointer())(ARGS...)
      {
        if (not _initialized) dieGracefully();
        return _functor_ptr->handoutFunctionPointer();
      }


    protected:

      backend_functor<TYPE, ARGS...>* _functor_ptr;

  };

}

#endif // defined __safety_bucket_hpp__ 

