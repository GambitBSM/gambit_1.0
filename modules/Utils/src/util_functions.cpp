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

namespace GAMBIT
{

  /// Split a string into a vector of strings using a delimiter,
  /// and remove any whitespace around the delimiters.
  std::vector<std::string> delimiterSplit(std::string s, std::string delim)
  {
    std::vector<std::string> vec;
    // Get rid of any whitespace around the delimiters
    #if GAMBIT_CONFIG_FLAG_use_std_regex     // Using std::regex :D
      std::regex rgx1("\\s+"+delim), rgx2(delim+"\\s+");
      s = std::regex_replace(s, rgx1, delim);
      s = std::regex_replace(s, rgx2, delim);
    #elif GAMBIT_CONFIG_FLAG_use_boost_regex // Using boost::regex :|
      boost::regex rgx1("\\s+"+delim), rgx2(delim+"\\s+");
      s = boost::regex_replace(s, rgx1, delim);
      s = boost::regex_replace(s, rgx2, delim);
    #else                                    // Using lame-o methods >:(
      const char* whitespaces[] = {" ", "\t", "\n", "\f", "\r"};
      std::string previous = s+".";
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

}

