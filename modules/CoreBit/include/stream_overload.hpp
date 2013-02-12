#ifndef __stream_overload_hpp__
#define __stream_overload_hpp__


// Spacing utility for stream overload below
std::string spacing(int len, int maxlen) {
  int offset = 0;
  if (len < maxlen) {offset=maxlen-len;}
  return std::string(offset+5,' ');
}   

// Define overloadings of the stream operator for string-to-X maps 
// (needs to go into a header somewhere, and should really be templated
typedef std::basic_ostream<char, std::char_traits<char> > stream;
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



#endif /* defined(__stream_overload_hpp__) */
