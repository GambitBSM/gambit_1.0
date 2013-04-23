//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  General small utility classes.
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

namespace GAMBIT
{

  // A container for a function that needs to be constructed at compile
  // and executed as initialisation code at startup.
  struct ini_code
  {
    ini_code(void (*unroll)()) { (*unroll)(); }
  };

}

#endif //defined __util_classes_hpp__
