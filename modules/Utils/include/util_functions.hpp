//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  General small utility functions.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (patscott@physics.mcgill.ca)
///  \date 2013 Apr, Dec
///
///  *********************************************


#ifndef __util_functions_hpp__
#define __util_functions_hpp__

#include <vector>
#include <string>
#include <boost/algorithm/string/split.hpp>
#include <boost/algorithm/string/classification.hpp>

# if GAMBIT_CONFIG_FLAG_use_std_regex
  #include <regex>
#elif GAMBIT_CONFIG_FLAG_use_boost_regex
  #include <boost/regex.hpp>
#else
  #include <boost/algorithm/string/replace.hpp>
#endif

namespace Gambit
{

  /// Split a string into a vector of strings, using a delimiter,
  /// and removing any whitespace around the delimiter.
  std::vector<std::string> delimiterSplit(std::string s, std::string delim);

  /// Redirection function to turn an lvalue into an rvalue, so that it
  /// is correctly passed by value when doing perfect forwarding with
  /// functor typecasting.
  template <typename T>
  T byVal(T t) { return t; }

}
        
#endif //defined __util_functions_hpp__
