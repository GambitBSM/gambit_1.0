//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  General small utility classes, typedefs, etc.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Pat Scott
//  2013  Apr 22
//
//  *********************************************

#ifndef __util_classes_hpp__
#define __util_classes_hpp__

#include <string>
#include <iostream>

namespace GAMBIT
{

  // Useful typedefs
  typedef std::string str;
  typedef std::pair<str, str> sspair;

  // Useful unqualified functions
  using std::cout;
  using std::endl;

  // A container for a function that needs to be constructed at compile
  // and executed as initialisation code at startup.
  struct ini_code
  {
    ini_code(void (*unroll)()) { (*unroll)(); }
  };

}

#endif //defined __util_classes_hpp__
