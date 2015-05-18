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
///  \date 2015 Jan, Feb
///  *********************************************

#ifndef __util_types_hpp__
#define __util_types_hpp__

#include <string>
#include <sstream>
#include <omp.h>
#include <cstring>

#include "gambit/Utils/standalone_error_handlers.hpp"
#include "gambit/Utils/variadic_functions.hpp"

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


  /// Array class that matches the memory structure and functionality of arrays in Fortran codes
  /// Syntax: Farray<[type], [lower index, dim 1], [upper index, dim 1], [alternating lower/upper indices for subsequent dimensions]>
  /// DO NOT UNDER ANY CIRCUMSTANCE add new member variables to this class! 
  /// This would break the crucial memory structure.  
  template <typename T, int... lims>
  class Farray
  {
    protected:
      static_assert(sizeof...(lims)%2==0,    "Farray error: Odd number of index limits.");      
      static_assert(sizeof...(lims)!=0,      "Farray error: No array index limits given.");        
      // Allowed array access types (expand if necessary)
      typedef mult_types< short, const short, short&, const short&,
                          unsigned short, const unsigned short, unsigned short&, const unsigned short&,
                          int, const int, int&, const int&,
                          unsigned, const unsigned, unsigned&, const unsigned&,
                          long, const long, long&, const long&,
                          unsigned long, const unsigned long, unsigned long&, const unsigned long&,
                          long long , const long long, long long&, const long long&,
                          unsigned long long, const unsigned long long, unsigned long long&, const unsigned long long&> allowed_types;     
      // Helper structs for calculating number of elements
      template<int... _lims>
      struct calc_nElem{};
      template<int limL, int limU, int... _lims>
      struct calc_nElem<limL,limU,_lims...>
      {
        enum{val= (limU-limL+1)*calc_nElem<_lims... >::val};
        static_assert(limU>limL, "Farray error: Upper array index limit is lower than lower limit.");
      };
      template<int limL, int limU>
      struct calc_nElem<limL,limU>
      {
        enum{val=(limU-limL+1)};
        static_assert(limU>limL, "Farray error: Upper array index limit is lower than lower limit.");
      };
    public:
      typedef calc_nElem<lims... > nElem;   
      T array[nElem::val]; 
      Farray(){}
      Farray(Farray<T,lims... > &in){*this = in;} 
      template <typename ... Args>
      typename enable_if_all_member<allowed_types, T&, Args...>::type::type      
      operator () (Args ... a)
      {   
        static_assert(2*sizeof...(a)==sizeof...(lims), "Farray error: Invalid number of arguments passed to () operator.");              
        int indices[] = {int(a)...};             
        int limits[] = {lims...};
        int idx = 0;
        // Calculate index for array access
        for (int i = 0; i < int(sizeof...(lims)/2); ++i) 
        {
          int idx_i = indices[i];
          if(idx_i<limits[2*i] || idx_i>limits[2*i+1])
          {
            str errmsg = "Farray error: Array index out of bounds.";
            utils_error().raise(LOCAL_INFO,errmsg);
          } 
          idx_i -= limits[2*i];                            
          for (int j=0; j<i; j++) idx_i *= (limits[2*j+1]-limits[2*j]+1);
          idx += idx_i;
        }   
        return array[idx];   
      }      
      template <typename ... Args>
      typename enable_if_all_member<allowed_types, const T&, Args...>::type::type
      operator () (Args ... a) const
      {      
        static_assert(2*sizeof...(a)==sizeof...(lims), "Farray error: Invalid number of arguments passed to () operator.");         
        int indices[] = {int(a)...};             
        int limits[] = {lims...};
        int idx = 0;
        // Calculate index for array access
        for (int i = 0; i < (sizeof...(lims)/2); ++i) 
        {
          int idx_i = indices[i];
          if(idx_i<limits[2*i] || idx_i>limits[2*i+1])
          {
            str errmsg = "Farray error: Array index out of bounds.";
            utils_error().raise(LOCAL_INFO,errmsg);
          } 
          idx_i -= limits[2*i];                                          
          for (int j=0; j<i; j++) idx_i *= limits[2*j+1]-limits[2*j]+1;
          idx += idx_i;
        }             
        return array[idx];   
      }
      Farray<T,lims... >& operator= (const Farray<T,lims... > &orig)
      {
        if (this == &orig) return *this;
        for (int i=0; i<nElem::val; ++i) 
        {
          array[i] = orig.array[i];
        }        
        return *this;
      }        
  };
  
  /// Farray specialization for Fortran strings. This is a 1-dimensional char array with indices 1 to len.
  /// It has assignment operators for standard string types, and accessors that return std::string objects.
  /// Strings longer than len will be truncated by the assignment operators, and shorter strings will be given trailing spaces.
  /// Syntax: Fstring<[string length]>
  /// DO NOT UNDER ANY CIRCUMSTANCE add new member variables to this class!   
  template <int len>
  class Fstring : public Farray<char,1,len>
  {
    public:
      Fstring(){}
      Fstring(const std::string &in)  {*this = in;}
      Fstring(const char* in)         {*this = in;}   
      Fstring(char in)                {*this = in;}         
      template<int ilen>        
      Fstring(const Fstring<ilen> &in){*this = in;}       
      Fstring& operator= (const std::string &in)
      {
        for(int i=0; i<len; i++)
        {
          Farray<char,1,len>::array[i] = (i<in.length()) ? in[i] : ' ';
        }
        return *this;
      }
      Fstring& operator= (const char* in)
      {
        for(int i=0; i<len; i++)
        {
          Farray<char,1,len>::array[i] = (i<int(std::strlen(in))) ? in[i] : ' ';
        }
        return *this;
      }        
      Fstring& operator= (char in)
      {
        Farray<char,1,len>::array[0] = in;
        for(int i=1; i<len; i++)
        {
          Farray<char,1,len>::array[i] = ' ';
        }
        return *this;
      }          
      template<int ilen>
      Fstring& operator= (const Fstring<ilen> &in)
      {
        if (reinterpret_cast<const void*>(this) == reinterpret_cast<const void*>(&in)) return *this;
        for(int i=0; i<len; i++)
        {
          Farray<char,1,len>::array[i] = (i<ilen) ? in.array[i] : ' ';
        }
        return *this;
      }
      /// Get std::string copy of the Fstring, including all trailing spaces
      std::string str() const
      {
        return std::string(Farray<char,1,len>::array,len);
      }
      /// Get std::string copy of the Fstring without trailing spaces      
      std::string trimmed_str() const
      {
        int idx;
        for(int i=1; i<=len; i++)
        {
          idx=len-i;
          if(Farray<char,1,len>::array[idx] != ' ') break;
        }
        return std::string(Farray<char,1,len>::array,idx+1);
      }        
  };

  /// Farray specialization for Fortran arrays of strings.
  /// This is an N+1-dimensional char array, where N is the number of dimensions specified by the user (1/2 * the number of array index limits).
  /// The special () operator is intended to be used instead of the operators of the Farray base class, and takes 1 argument less than the Farray class operators
  /// (the array index for the letters in the strings should not be passed).
  /// This operator returns references to Fstring objects that can be assigned to and read from.
  /// Syntax: FstringArray<[string length], [lower index, dim 1], [upper index, dim 1], [alternating lower/upper indices for subsequent dimensions]>
  /// DO NOT UNDER ANY CIRCUMSTANCE add new member variables to this class!   
  template <int len, int... lims>
  class FstringArray : public Farray<char,1,len, lims... >
  {
    public:
      template <typename ... Args>
      typename enable_if_all_member<typename Farray<char,1,len, lims... >::allowed_types, Fstring<len>&, Args...>::type::type      
      operator () (Args ... a)
      {   
        static_assert(2*sizeof...(a)==sizeof...(lims), "FstringArray error: Invalid number of arguments passed to () operator");              
        int indices[] = {1,int(a)...};             
        int limits[] = {1,len,lims...};
        int idx = 0;
        // Calculate index for array access
        for (int i = 0; i < int((sizeof...(lims)+2)/2); ++i) 
        {
          int idx_i = indices[i];
          if(idx_i<limits[2*i] || idx_i>limits[2*i+1])
          {
            str errmsg = "FstringArray error: Array index out of bounds.";
            utils_error().raise(LOCAL_INFO,errmsg);
          } 
          idx_i -= limits[2*i];                            
          for (int j=0; j<i; j++) idx_i *= (limits[2*j+1]-limits[2*j]+1);
          idx += idx_i;
        }   
        return *reinterpret_cast<Fstring<len>*>(&Farray<char,1,len, lims... >::array[idx]);  
      }     
  };
  
  /// Fortran complex type. Use typdef versions instead of the 
  /// DO NOT UNDER ANY CIRCUMSTANCE add new member variables to this class!     
  template <typename T>
  class FcomplexT
  {
    public:
      T re;
      T im;
      template<typename T2>
      FcomplexT& operator= (const FcomplexT<T2> &in)
      {
        re = in.re;
        im = in.im;
        return *this;
      }
      // TODO: Implement convenient operators here...
  };

  /// Fortran type typedefs
  /// Todo: Implement compiler dependent macros ensuring that these are always correct
  typedef FcomplexT<float>  Fcomplex;
  typedef FcomplexT<float>  Fcomplex8;
  typedef FcomplexT<double> Fcomplex16;
  typedef FcomplexT<double> Fdouble_complex;  
  typedef FcomplexT<long double> Flongdouble_complex;  
  typedef char              Fcharacter;  
  typedef double            Fdouble;
  typedef double            Fdouble_precision;
  typedef double            Fdoubleprecision;    
  typedef int               Finteger;
  typedef short             Finteger2;  
  typedef long int          Finteger4;  
  typedef long long         Finteger8;  
  typedef bool              Flogical;
  typedef bool              Flogical1;  
  typedef float             Freal;
  typedef float             Freal4;
  typedef double            Freal8;
  typedef long double       Freal16;
  
  
}
#endif //defined __util_types_hpp__



