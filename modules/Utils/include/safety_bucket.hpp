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
///  *********************************************

#ifndef __safety_bucket_hpp__
#define __safety_bucket_hpp__


#include <iostream>
#include "util_types.hpp"
#include "functors.hpp"


namespace Gambit
{

  /// Base class for the interface classes 'dep_bucket', 'BEvariable_bucket' and 'BEfunction_bucket'.
  template <typename TYPE>
  class safety_bucket_base
  {
    
    protected:

      bool _initialized;

      /// Failure message invoked when the user tries to access the object before it is initialized
      static void dieGracefully()
      {
        cout << endl << "You just tried to access a GAMBIT object (derived from 'safety_bucket_base') that has not" << endl;
        cout << "been initialized with a non-zero functor pointer. Bad idea." << endl;
        cout << "Probably you tried to retrieve a backend or module dependency" << endl; 
        cout << "that has not been activated." << endl;
      }
  };



  /// An interface class for backend variables providing a 'safe' interface to
  /// to the variable pointer as well as some utility functions.
  template <typename TYPE>
  class BEvariable_bucket : public safety_bucket_base<TYPE>
  {

    using safety_bucket_base<TYPE>::_initialized;
    using safety_bucket_base<TYPE>::dieGracefully;

    public:

      /// Constructor 
      BEvariable_bucket(backend_functor<TYPE> * functor_ptr_in = NULL)
      {
        initialize(functor_ptr_in);
      }


      /// Initialize this bucket with a functor pointer
      void initialize(backend_functor<TYPE> * functor_ptr_in)
      {
        _functor_ptr = functor_ptr_in;
        
        // Extract variable pointer from functor and store as a safe_variable_ptr 
        if (functor_ptr_in == NULL)  
        {
          _svptr.set(NULL); 
          _initialized = false;
        }
        else 
        { 
          _svptr.set( (*_functor_ptr)() );
          _initialized = true;
        }
      }


      /// Get capability name
      str name()
      { 
        if (not _initialized) dieGracefully();
        return _functor_ptr->name();
      }

      /// Get backend name
      str backend()
      { 
        if (not _initialized) dieGracefully();
        return _functor_ptr->origin();
      }

      /// Get version information
      str version()
      { 
        if (not _initialized) dieGracefully();
        return _functor_ptr->version();
      }

      /// Dereference the variable pointer stored as a safe_variable_ptr
      TYPE& operator *()
      {
        if (not _initialized) dieGracefully();
        return *_svptr;
      }

      /// Get the underlying variable pointer
      TYPE * pointer()
      {
        if (not _initialized) dieGracefully();
        return _svptr.get();
      }

      /// Get the safe_pointer_ptr
      safe_variable_ptr<TYPE>& safe_pointer()
      {
        if (not _initialized) dieGracefully();
        return _svptr;
      }


    protected:

      backend_functor<TYPE> * _functor_ptr;
      safe_variable_ptr<TYPE> _svptr;
  };

}

#endif // defined __safety_bucket_hpp__ 

