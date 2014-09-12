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
///  \date 2013 Apr, July, Aug, Sep
///  \date 2014 Mar
///
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2013 May, June, July
///
///  *********************************************

#include "util_functions.hpp"

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

  /// Strips namespace from the start of a string, or after "const".
  str strip_leading_namespace(str s, str ns)
  {
    #if GAMBIT_CONFIG_FLAG_use_regex     // Using regex :D
      regex expression("(^|[\\s\\*\\&\\(\\,\\[])"+ns+"::");
      s = regex_replace(s, expression, str("\\1"));
    #else                                // Using lame-o methods >:(
      int len = ns.length() + 2;
      if (s.substr(0,len) == ns+str("::")) s.replace(0,len,"");
      boost::replace_all(s, str(",")+ns+"::", str(","));
      boost::replace_all(s, str("*")+ns+"::", str("*"));
      boost::replace_all(s, str("&")+ns+"::", str("&"));
      boost::replace_all(s, str("(")+ns+"::", str("("));
      boost::replace_all(s, str("[")+ns+"::", str("["));
      for (int i = 0; i != 5; i++)
      {
        boost::replace_all(s, whitespaces[i]+ns+"::", whitespaces[i]);
      }
    #endif
    return s;
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

  /// Function to help static initialisation of our const data member vectors.
  /// Returns a copy of the vector with the string argument appended.
  std::vector<str> vecappend(const std::vector<str>& basevec, const str& newentry)
  {
    std::vector<str> newvec(basevec);
    newvec.push_back(newentry);
    return newvec;
  }
    
  /// Similar to vecappend(); joins two vectors and returns the result
  std::vector<str> vecjoin(const std::vector<str>& bv1, 
                           const std::vector<str>& bv2) 
  {
    std::vector<str> newvec;
    newvec.reserve( bv1.size() + bv2.size() );
    newvec.insert( newvec.end(), bv1.begin(), bv1.end() );
    newvec.insert( newvec.end(), bv2.begin(), bv2.end() );
    return newvec;
  }
      
  /// As per vecjoin() but joins three vectors and returns the result.
  std::vector<str> vecjoin3(const std::vector<str>& bv1, 
                            const std::vector<str>& bv2,
                            const std::vector<str>& bv3) 
  {
    std::vector<str> newvec;
    newvec.reserve( bv1.size() + bv2.size() + bv3.size() );
    newvec.insert( newvec.end(), bv1.begin(), bv1.end() );
    newvec.insert( newvec.end(), bv2.begin(), bv2.end() );
    newvec.insert( newvec.end(), bv3.begin(), bv3.end() );
    return newvec;
  }

}

