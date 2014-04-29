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
///  \date 2013 Apr
///
///  *********************************************

#include <util_functions.hpp>

namespace Gambit
{

  const char* whitespaces[] = {" ", "\t", "\n", "\f", "\r"};

  /// Split a string into a vector of strings using a delimiter,
  /// and remove any whitespace around the delimiters.
  std::vector<str> delimiterSplit(str s, str delim)
  {
    std::vector<str> vec;
    // Get rid of any whitespace around the delimiters
    #if GAMBIT_CONFIG_FLAG_use_regex     // Using regex :D 
      regex rgx1("\\s+"+delim), rgx2(delim+"\\s+");
      s = regex_replace(s, rgx1, delim);
      s = regex_replace(s, rgx2, delim);
    #else                                // Using lame-o methods >:(
      str previous = s+".";
      while (s != previous) 
      {
        previous = s;
        for (int i = 0; i != 5; i++)
        {
          boost::replace_all(s, whitespaces[i]+delim, delim);
          boost::replace_all(s, delim+whitespaces[i], delim);
        }
      }
    #endif
    // Split up the list of versions by the delimiters
    boost::split(vec, s, boost::is_any_of(delim), boost::token_compress_on);
    return vec;
  }

  /// Strips all whitespaces from a string, but re-inserts a single regular space after "const".
  str strip_whitespace_except_after_const(str s)
  {
    str tempstr("__TEMP__"), empty(""), constdec2("const ");
    #if GAMBIT_CONFIG_FLAG_use_regex     // Using regex :D
      regex constdec1("const\\s+"), temp(tempstr), whitespace("\\s+");
      s = regex_replace(s, constdec1, tempstr);
      s = regex_replace(s, whitespace, empty);
      s = regex_replace(s, temp, constdec2); 
    #else                                // Using lame-o methods >:(
      str previous = s+".";
      while (s != previous) 
      {
        previous = s;
        for (int i = 0; i != 5; i++)
        {
          boost::replace_all(s, str("const")+whitespaces[i], tempstr);
          s.erase(std::remove(s.begin(), s.end(), *whitespaces[i]), s.end());
        }
      }
      boost::replace_all(s, tempstr, constdec2);
    #endif
    return s;
  }

  /// Strips leading and/or trailing parentheses from a string.
  void strip_parentheses(str &s)
  {
    if (s.at(0) == '(')       s = s.substr(1, s.size());
    if (*s.rbegin() == ')')   s = s.substr(0, s.size()-1);
  }

}

