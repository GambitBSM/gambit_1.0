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
///  \date 2013 Apr, July, Aug, Dec
///  \date 2014 Mar
///
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2013 May, June, July
///
///  *********************************************


#ifndef __util_functions_hpp__
#define __util_functions_hpp__

#include <vector>
#include <chrono> 

#include "gambit/Utils/util_types.hpp"

#include <boost/algorithm/string/split.hpp>
#include <boost/algorithm/string/classification.hpp>

extern "C"
{
  #include "mkpath/mkpath.h"  
}

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

  /// Redirection function to turn an lvalue into an rvalue, so that it
  /// is correctly passed by value when doing perfect forwarding with
  /// functor typecasting.
  template <typename T>
  T byVal(T t) { return t; }

  namespace Utils
  {

    /// Split a string into a vector of strings, using a delimiter,
    /// and removing any whitespace around the delimiter.
    std::vector<str> delimiterSplit(str, str);

    /// Strips namespace from the start of a string, or after "const".
    str strip_leading_namespace(str s, str ns);

    /// Strip all whitespace except that following "const", 
    /// in which case the whitespace is replaced by a single space.
    str strip_whitespace_except_after_const(str);

    /// Strip Gambit namespace and clean out whitespace
    inline str fix_type(str s) { return strip_leading_namespace(strip_whitespace_except_after_const(s), "Gambit"); } 

    /// Strips leading and/or trailing parentheses from a string.
    void strip_parentheses(str&);

    /// Get pointers to beginning and end of array. 
    // Useful for initialising vectors with arrays, e.g.
    //   int vv[] = { 12,43 };
    //   std::vector<int> v(beginA(vv), endA(vv));
    // Though 'begin' is unnecessary, can just do
    //   std::vector<int> v(vv, endA(vv));
    template <typename T, size_t N>
    T* beginA(T(&arr)[N]) { return &arr[0]; }
    template <typename T, size_t N>
    T* endA(T(&arr)[N]) { return &arr[0]+N; }

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

     /// Ensure that a path exists (and then return the path, for chaining purposes)
    const std::string& ensure_path_exists(const std::string&);

    typedef std::chrono::time_point<std::chrono::system_clock> time_point;

    /// Get clock time
    time_point get_clock_now();

    /// Get date and time
    std::string return_time_and_date(const time_point& in);

  }

}
        
#endif //defined __util_functions_hpp__
