//////////////////////////////////////////////////////////
// Simple example for GAMBIT Ini-file parser
// 
// Christoph Weniger, 6 May 2013
//////////////////////////////////////////////////////////

#include <boost/spirit/include/qi.hpp>
#include <boost/fusion/include/adapt_struct.hpp>
// #include <boost/config/warning_disable.hpp>
// #include <boost/spirit/include/phoenix_core.hpp> // #include <boost/spirit/include/phoenix_operator.hpp>
// #include <boost/spirit/include/phoenix_object.hpp>

#include <iostream>
#include <fstream>
#include <string>
#include <ini_parser.hpp>

namespace GAMBIT 
{
  namespace ini_parser
  {
    IniFileParser::IniFileParser(std::string filename)
      {
        this->parse_now(filename);
      };

    void IniFileParser::print()
    {
        // Pretty print what is now in the structs
        for(std::vector<client::observable>::iterator it =
            this->obs_list.begin(); it != this->obs_list.end(); ++it)
        {
          std::cout << "Observable (Module): " << (*it).name << " (" << (*it).module << ")" << std::endl;
          for(std::vector<client::backend>::iterator it2 = (*it).backends.begin(); it2 !=
              (*it).backends.end(); ++it2)
          {
            std::cout << "-Backend (Module): " << (*it2).name << " (" << (*it2).backend << ")" << std::endl;
          }
          for(std::vector<client::dependency>::iterator it2 = (*it).dependencies.begin(); it2 !=
              (*it).dependencies.end(); ++it2)
          {
            std::cout << "-Dependency (Module): " << (*it2).name << " (" << (*it2).module << ")" << std::endl;
          }
        }
    }

    void IniFileParser::parse_now(std::string filename)
    {
        typedef std::string::const_iterator iterator_type;
        typedef client::observable_parser<iterator_type> observable_parser;

        observable_parser g; // Our main parser

        // Read in ini file
        std::ifstream in(filename);
        std::string str((std::istreambuf_iterator<char>(in)), 
            std::istreambuf_iterator<char>());

        // Parse it!
        std::string::const_iterator iter = str.begin();
        std::string::const_iterator end = str.end();
        bool r = parse(iter, end, *g, this->obs_list);
    };
  };
};
