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
///  *********************************************

#ifndef __util_types_hpp__
#define __util_types_hpp__

#include <string>
#include <iostream>

namespace Gambit
{

  /// Shorthand for a standard string
  typedef std::string str;
  /// Shorthand for a pair of standard strings
  typedef std::pair<str, str> sspair;

  // Useful unqualified functions
  using std::cout;
  using std::endl;

  /// A container for a function that needs to be constructed at compile
  /// and executed as initialisation code at startup.
  struct ini_code
  {
    ini_code(void (*unroll)()) { (*unroll)(); }
  };
  
  /// A safe pointer that throws an informative error if you try to dereference
  /// it when nullified, and cannot be used to overwrite the thing it points to.
  template <typename TYPE> 
  class safe_ptr
  {

    public:

      /// Construct-o-safe_ptr
      safe_ptr(TYPE* in_ptr = NULL) { ptr = in_ptr; }

      /// Set pointer
      void set(TYPE* in_ptr) { ptr = in_ptr; }

      /// Dereference pointer
      const TYPE& operator*() const
      { 
        if (ptr == NULL) dieGracefully();
        return *ptr;
      }        

      /// Access is allowed to const member functions only
      const TYPE* operator->() const
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
        cout << endl << "You just tried to dereference a GAMBIT safe pointer that has value" << endl;
        cout << "NULL.  Bad idea.  Probably you tried to retrieve a conditional" << endl;
        cout << "dependency that has not been activated because the necessary condition" << endl;
        cout << "has not been met, or you tried to access a model parameter for a model" << endl;
        cout << "that you are not actually scanning.  This means there is a bug in one" << endl;
        cout << "of your module functions." << endl;
      }

  };

}
#endif //defined __util_types_hpp__
