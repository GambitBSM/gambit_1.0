//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Define overloadings of the stream operator for
//  string-to-X maps.
//  (Should really be templated eventually.)
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Pat Scott
//  Jan 29 2013
//
//  *********************************************


#ifndef __map_extensions_hpp__
#define __map_extensions_hpp__


namespace Gambit {


  // Local stream alias
  typedef std::basic_ostream<char, std::char_traits<char> > stream;


  // Spacing utility for stream overloads below
  std::string spacing(int len, int maxlen) {

    int offset = 0;
    if (len < maxlen) {offset=maxlen-len;}
    return std::string(offset+5,' ');

  }   


  // string-to-string
  stream& operator<<(stream& os, const std::map<std::string,std::string>& map) {

    unsigned int maxlen = 0;
    std::map<std::string,std::string>::const_iterator it;

    for (it = map.begin(); it != map.end(); it++) {
      if ((*it).first.length() > maxlen) maxlen = (*it).first.length(); 
    }
    
    for (it = map.begin(); it != map.end(); it++) {
      if (it != map.begin()) {os << std::endl;}
      os << " " << (*it).first << spacing((*it).first.length(), maxlen) << "(" << (*it).second << ")";
    }

    return os;

  }


  // string-to-int
  stream& operator<<(stream& os, const std::map<std::string,int>& map) {

    unsigned int maxlen = 0;
    std::map<std::string,int>::const_iterator it;

    for (it = map.begin(); it != map.end(); it++) {
      if ((*it).first.length() > maxlen) maxlen = (*it).first.length();
    }
    
    for (it = map.begin(); it != map.end(); it++) {
      if (it != map.begin()) {os << std::endl;}
      os << " " << (*it).first << spacing((*it).first.length(), maxlen) << "(" << (*it).second << ")";
    }

    return os;

  }


} // end namespace Gambit

#endif /* defined(__map_extensions_hpp__) */

