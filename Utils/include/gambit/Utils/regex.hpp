//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Automater for certain BOOST regex includes
///  Used to be in util_functions.hpp but was
///  moved here to avoid cluttering up the
///  build of object files that don't need BOOST.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2017 Mar 30
///
///  *********************************************


#ifndef __gambit_regex_hpp__
#define __gambit_regex_hpp__

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

#endif
