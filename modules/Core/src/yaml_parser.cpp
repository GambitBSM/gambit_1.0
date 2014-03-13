//////////////////////////////////////////////////////////
// Simple example for GAMBIT Ini-file parser
//
// Christoph Weniger <c.weniger@uva.nl>
// May, June, July 2013
//////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <string>
#include <yaml-cpp/yaml.h>

// Gambit headers
#include "yaml_parser.hpp"
#include "log.hpp"

namespace Gambit
{
  namespace IniParser
  {
    int IniFile::readFile(std::string filename)
    {
      // Read inifile file
      std::vector<YAML::Node> roots = YAML::LoadAllFromFile(filename);

      // Set central nodes
      parametersNode = roots[0];
      priorsNode = roots[1];
      scannerNode = roots[2];
      YAML::Node outputNode = roots[3];
      YAML::Node auxNode = roots[4];
      YAML::Node logNode = roots[5];
      keyValuePairNode = roots[6];

      // Read likelihood/observables
      for(YAML::const_iterator it=outputNode.begin(); it!=outputNode.end(); ++it)
      {
        observables.push_back((*it).as<Types::Observable>());
      }

      // Read auxiliaries
      for(YAML::const_iterator it=auxNode.begin(); it!=auxNode.end(); ++it)
      {
        auxiliaries.push_back((*it).as<Types::Observable>());
      }

      // Parse the logging setup node, and initialise the LogMaster object

      YAML::Node redir = logNode["redirection"];
      // map storing info used to set up logger objects
      std::map<std::set<std::string>,std::string> loggerinfo;
      for(YAML::const_iterator it=redir.begin(); it!=redir.end(); ++it) 
      {
          std::set<std::string> tags;
          std::string filename;
          // Iterate through tags and add them to the set 
          YAML::Node yamltags = it->first;
          for(YAML::const_iterator it2=yamltags.begin();it2!=yamltags.end();++it2)         
          {
            tags.insert( it2->as<std::string>() );
          }
          filename = (it->second).as<std::string>();
    
          // Add entry to the loggerinfo map
          loggerinfo[tags] = filename;
      }
      // Initialise global LogMaster object
      logger().initialise(loggerinfo);

      return 0;
    }
  }
}
