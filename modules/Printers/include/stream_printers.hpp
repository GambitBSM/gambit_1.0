//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Define overloadings of the stream operator for
///  various containers.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (patscott@physics.mcgill.ca)
///  \date 2013 Jan, Dec
///
///  \author Ben Farmer  
///          (benjamin.farmer@monash.edu)
///  \date 2013 Jun
///
///  *********************************************


#ifndef __stream_printers_hpp__
#define __stream_printers_hpp__

#include <map>
#include <set>
#include <string>
#include <vector>
#include <ostream>

namespace Gambit
{

  /// Stream overload for map: string-to-string (should really be templated eventually)
  std::ostream& operator<<(std::ostream&, const std::map<std::string,std::string>&);

  /// Stream overload for map: string-to-int (should really be templated eventually)
  std::ostream& operator<<(std::ostream&, const std::map<std::string,int>&);

  /// Stream overload for pairs of any type that already has << defined.
  template <class Type1, class Type2>
  inline std::ostream& operator << (std::ostream& os, const std::pair<Type1, Type2>& p) 
  {
    os << "( " << p.first << ", " << p.second << ")";
    return os;
  }

  /// Stream overload for sets of any type that already has << defined.
  template <class Type>
  inline std::ostream& operator<<(std::ostream& os, const std::set<Type>& set)
  {
    os << "{";
    int length = set.size();
    if (length != 0)
    {  
      typename std::set<Type>::const_iterator it, start, finish;
      start = set.begin();
      finish = set.end();
      os << *start;
      if (length != 1)
      {
        for (it = ++start; it != finish; it++) { os << ", " << *it; }
      }
    }
    os << "}";
    return os;
  }

  /// Stream overload for vectors of any type that already has << defined.
  template <class Type>
  inline std::ostream& operator << (std::ostream& os, const std::vector<Type>& v) 
  {
    os << "[";
    int length = v.size();
    if (length != 0)
    {  
      typename std::vector<Type>::const_iterator it, start, finish;
      start = v.begin();
      finish = v.end();
      os << *start;
      if (length != 1)
      {
        for (it = ++start; it != finish; it++) { os << ", " << *it; }
      }
    }
    os << " ]";
    return os;
  }

  // Spacing utility for stream overloads
  std::string spacing(int len, int maxlen);

}

#endif /* defined(__stream_printers_hpp__) */

