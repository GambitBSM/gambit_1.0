//  *********************************************
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  General small utility classes, typedefs, etc.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (patscott@physics.mcgill.ca)
///  \date 2013 Apr
///
///  \author Ben Farmer  
///          (benjamin.farmer@monash.edu)
///  \date 2013 Jun
///
///  \author Torsten Bringmann
///          (torsten.bringmann@desy.de)
///  \date 2013 Jun
///
///  \author Anders Kvellestad
///          (anders.kvellestad@fys.uio.no)
///  \date 2013 Nov
///
///  \author Lars A. Dal  
///          (l.a.dal@fys.uio.no)
///  \date 2014 Jan, Mar
///  *********************************************

#ifndef __util_types_hpp__
#define __util_types_hpp__

#include <string>
#include <sstream>
#include <omp.h>

#include "ini_code_struct.hpp"
#include "standalone_error_handlers.hpp"
#include "variadic_functions.hpp"

namespace Gambit
{

  /// Shorthand for a standard string
  typedef std::string str;
  /// Shorthand for a pair of standard strings
  typedef std::pair<str, str> sspair;

  // Useful unqualified functions
  using std::cout;
  using std::endl;

  /// A safe pointer that throws an informative error if you try to dereference
  /// it when nullified, and cannot be used to overwrite the thing it points to.
  template <typename TYPE> 
  class safe_ptr
  {

    public:

      /// Construct-o-safe_ptr
      safe_ptr(TYPE* in_ptr = NULL) { ptr = in_ptr; }

      /// Set pointer
      virtual void set(TYPE* in_ptr) { ptr = in_ptr; }

      /// Dereference pointer
      virtual const TYPE& operator*() const
      { 
        if (ptr == NULL) dieGracefully();
        return *ptr;
      }        

      /// Dereference pointer as if it is an array
      virtual const TYPE& operator[](int index) const
      { 
        if (ptr == NULL) dieGracefully();
        return *(ptr+index);
      }        

      /// Access is allowed to const member functions only
      virtual const TYPE* operator->() const
      { 
        if (ptr == NULL) dieGracefully();
        return ptr;
      }        

    protected:

      /// The actual underlying pointer, interpreted as a pointer to constant value
      const TYPE* ptr;

      /// Failure message invoked when the user tries to dereference a null safe_ptr
      static void dieGracefully()
      {
        str errmsg = "You just tried to dereference a GAMBIT safe pointer that has value";
        errmsg +=  "\nNULL.  Bad idea.  Probably you tried to retrieve a conditional"
                   "\ndependency that has not been activated because the necessary condition"
                   "\nhas not been met, or you tried to access a model parameter for a model"
                   "\nthat you are not actually scanning.  This means there is a bug in one"
                   "\nof your module functions.";
        utils_error().raise(LOCAL_INFO,errmsg);
      }

  };


  /// A safe pointer designed to point at an array, and return the entry in that array 
  /// corresponding to the current OpenMP thread.
  template <typename TYPE>
  class omp_safe_ptr : public safe_ptr<TYPE>
  {

    public:

      /// Constructor
      omp_safe_ptr(TYPE* in_ptr = NULL) : safe_ptr<TYPE>(in_ptr) {}

      /// Dereference pointer
      virtual const TYPE& operator*() const
      { 
        if (this->ptr == NULL) safe_ptr<TYPE>::dieGracefully();
        return *(this->ptr+omp_get_thread_num());
      }        

  };

  /// A safe variable pointer that throws an informative error if you try to dereference
  /// it when nullified, but unlike safe_ptr it can be used to overwrite the thing it points to.
  /// However, it is not possible to change the address of this pointer without using the 'set'
  /// function (in which case you presumably know what you're doing).
  template <typename TYPE> 
  class safe_variable_ptr
  {

    public:

      /// Remove the default copy constructor and assignment operator.
      safe_variable_ptr & operator=(const safe_variable_ptr&) = delete;
      safe_variable_ptr(const safe_variable_ptr&) = delete;

      /// Constructor
      safe_variable_ptr(TYPE* in_ptr = NULL) { ptr = in_ptr; }

      /// Set pointer
      void set(TYPE* in_ptr) { ptr = in_ptr; }

      /// Get pointer
      TYPE* get() { return ptr; }

      /// Dereference pointer
      TYPE& operator*()
      { 
        if (ptr == NULL) dieGracefully();
        return *ptr;
      }        

      /// Dereference pointer as if it is an array
      TYPE& operator[](int index)
      { 
        if (ptr == NULL) dieGracefully();
        return *(ptr+index);
      }        

      /// Access member functions
      TYPE* operator->()
      { 
        if (ptr == NULL) dieGracefully();
        return ptr;
      }        
          
    protected:

      /// The actual underlying pointer
      TYPE* ptr;

      /// Failure message invoked when the user tries to dereference a null safe_variable_ptr
      static void dieGracefully()
      {
        str errmsg = "You just tried to dereference a GAMBIT safe variable pointer that has value";
        errmsg +=  "\nNULL.  Bad idea.  Probably you tried to retrieve a conditional"
                   "\ndependency that has not been activated because the necessary condition"
                   "\nhas not been met.";
        utils_error().raise(LOCAL_INFO,errmsg);
      } 

  };

  /// Reindexed array type.
  template <typename T, int dim>
  class Farray
  {
    private:
      T *array;
      int start[dim], end[dim], size[dim];
      
      //allowed input types into Farray
      typedef mult_types<int, unsigned int, short int, unsigned short int, 
                        const int, const unsigned int, const short int, const unsigned short int,
                        int &, unsigned int &, short int &, unsigned short int &,
                        const int &, const unsigned int &, const short int &, const unsigned short int &> allowed_types;
                        
    public:
      Farray<T,dim>(T *in, int st[dim], int en[dim]) 
      { 
        array = in; 
        for (int i = 0; i < dim; ++i) 
        {      
          start[i] = st[i]; 
          end[i] = en[i]; 
          size[i] = end[i]-start[i]+1;
        }
      }
      
      Farray<T,dim>() {array = NULL;}
      
      Farray<T,dim>& operator= (const Farray<T,dim> &orig)
      {
        if (this == &orig) return *this;
        // Allow assignment of different size Farray only if this Farray is not fully initialized
        if(array != NULL)
        {    
          for (int i = 0; i < dim; ++i) 
          {
            if(orig.size[i] != size[i]) 
            {
              utils_error().raise(LOCAL_INFO,"Trying to use assignment operator on different size Farrays.");
            }
          }
        }
        else
        {
          for (int i = 0; i < dim; ++i) 
          {
             size[i] = orig.size[i];
          }        
        }
        for (int i = 0; i < dim; ++i) 
        {      
          start[i] = orig.start[i];
          end[i] = orig.end[i];   
        }  
        array = orig.array;
        return *this;
      }
      
      template <typename ... Args>
      typename enable_if_all_member<allowed_types, const T&, Args...>::type::type
      operator () (Args ... a) const
      {      
        int len = sizeof...(a);
        if(len != dim) 
        {
          std::ostringstream err;
          err << "Trying to access "<<dim<<"-dimensional Farray using "<<len<<" arguments.";      
          utils_error().raise(LOCAL_INFO,err.str());          
        }         
        if(array == NULL)
        { 
          utils_error().raise(LOCAL_INFO,"Trying to access uninitialized Farray."); 
        }  
        int indices[] = {a...};             
        int idx = 0;
        // Calculate index for array access
        for (int i = 0; i < dim; ++i) 
        {
          int idx_i = indices[i];
          if(idx_i<start[i] || idx_i>end[i])
          { 
            std::ostringstream err;
            err << "Farray index out of range.\n Trying to access element "<<idx_i<<"; allowed range is "<<start[i]<<"-"<<end[i]<<".";      
            utils_error().raise(LOCAL_INFO,err.str());                         
          }
          idx_i -= start[i];				
          for (int j=0; j<i; j++) idx_i *= size[j];
          idx += idx_i;
        }   
        return array[idx];   
      }
      
      template <typename ... Args>
      typename enable_if_all_member<allowed_types, T&, Args...>::type::type
      operator () (Args ... a)
      {      
        int len = sizeof...(a);
        if(len != dim) 
        {
          std::ostringstream err;
          err << "Trying to access "<<dim<<"-dimensional Farray using "<<len<<" arguments.";      
          utils_error().raise(LOCAL_INFO,err.str());     
        }         
        if(array == NULL)
        { 
          utils_error().raise(LOCAL_INFO,"Trying to access uninitialized Farray."); 
        }  
        int indices[] = {a...};             
        int idx = 0;
        // Calculate index for array access      
        for (int i = 0; i < dim; ++i) 
        {
          int idx_i = indices[i];
          if(idx_i<start[i] || idx_i>end[i])
          { 
            std::ostringstream err;
            err << "Farray index out of range.\n Trying to access element "<<idx_i<<"; allowed range is "<<start[i]<<"-"<<end[i]<<".";      
            utils_error().raise(LOCAL_INFO,err.str());  
          }
          idx_i -= start[i];				
          for (int j=0; j<i; j++) idx_i *= size[j];
          idx += idx_i;
        }   
        return array[idx];   
      }
      
      template <typename ... Args>
      typename enable_if_not_all_member<allowed_types, const T&, Args...>::type::type
      operator () (Args ... a) const
      {
        utils_error().raise(LOCAL_INFO,"Trying to access Farray element using an invalid type.");
        
        T temp;
        return temp;
      }
      
      template <typename ... Args>
      typename enable_if_not_all_member<allowed_types, T&, Args...>::type::type
      operator () (Args ... a)
      {
        utils_error().raise(LOCAL_INFO,"Trying to access Farray element using an invalid type.");
        
        T temp;
        return temp;
      }
      
      T* getArray() 
      { 
        if(array == NULL) 
        {
          utils_error().raise(LOCAL_INFO,"Trying to call getArray() on uninitialized Farray."); 
        } 
        return array;
              
      }
      
      void setLimits(int st[dim], int en[dim]) 
      {
        for (int i = 0; i < dim; ++i) 
        {
          if((en[i]-st[i])==(end[i]-start[i]))
          {
            start[i]=st[i]; 
            end[i]=en[i];
          }  
          else 
          {
            utils_error().raise(LOCAL_INFO,"Wrong size index array(s) sent to Farray setLimits() function.");  
          }
        }
      }
      
      int* getStart(){return start;}
      int* getEnd(){return end;}
      int* getSize(){return size;}
  };

}
#endif //defined __util_types_hpp__



