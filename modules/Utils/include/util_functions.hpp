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

#include "util_types.hpp"

#include <boost/algorithm/string/split.hpp>
#include <boost/algorithm/string/classification.hpp>

# if GAMBIT_CONFIG_FLAG_use_std_regex
  #include <regex>
  #define GAMBIT_CONFIG_FLAG_use_regex 1
  namespace Gambit { using std::regex; using std::regex_replace; }
#elif GAMBIT_CONFIG_FLAG_use_boost_regex
  #include <boost/regex.hpp>
  #define GAMBIT_CONFIG_FLAG_use_regex 1
  namespace Gambit { using boost::regex; using boost::regex_replace; }
#else
  #include <boost/algorithm/string/replace.hpp>
  #define GAMBIT_CONFIG_FLAG_use_regex 0
#endif

namespace Gambit
{

  /// Split a string into a vector of strings, using a delimiter,
  /// and removing any whitespace around the delimiter.
  std::vector<str> delimiterSplit(str, str);

  /// Strip all whitespace except that following "const", 
  /// in which case the whitespace is replaced by a single space.
  str strip_whitespace_except_after_const(str);

  /// Redirection function to turn an lvalue into an rvalue, so that it
  /// is correctly passed by value when doing perfect forwarding with
  /// functor typecasting.
  template <typename T>
  T byVal(T t) { return t; }

  /// Test if two sets are disjoint (works on any sorted std container I think)
  // From http://stackoverflow.com/questions/1964150/c-test-if-2-sets-are-disjoint
  template<class Set1, class Set2> 
  bool is_disjoint(const Set1 &set1, const Set2 &set2)
  {
      if(set1.empty() || set2.empty()) return true;
  
      typename Set1::const_iterator 
          it1 = set1.begin(), 
          it1End = set1.end();
      typename Set2::const_iterator 
          it2 = set2.begin(), 
          it2End = set2.end();
  
      if(*it1 > *set2.rbegin() || *it2 > *set1.rbegin()) return true;
  
      while(it1 != it1End && it2 != it2End)
      {
          if(*it1 == *it2) return false;
          if(*it1 < *it2) { it1++; }
          else { it2++; }
      }
  
      return true;
  }


}
        
#endif //defined __util_functions_hpp__
