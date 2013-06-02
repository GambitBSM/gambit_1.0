//////////////////////////////////////////////////////////
// Simple example for GAMBIT ini-file parser
// 
// Christoph Weniger, 6 May 2013
//////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <string>
#include "yaml-cpp/yaml.h"
#include <yaml_parser.hpp>

namespace GAMBIT
{
  namespace IniParser
  {
    int IniFile::readFile(std::string filename)
    {
      // Read ini-file file
      std::vector<YAML::Node> roots = YAML::LoadAllFromFile(filename);

      // Set central nodes
      YAML::Node inputNode = roots[0];
      YAML::Node outputNode = roots[1];
      flagNode = roots[2];

      // Read observables
      for(YAML::const_iterator it=outputNode.begin(); it!=outputNode.end(); ++it)
      {
        observables.push_back((*it).as<Types::Observable>());
      }

      // Read scanner parameters
      for(YAML::const_iterator it=inputNode.begin(); it!=inputNode.end(); ++it)
      {
        parameters.push_back((*it).as<Types::Parameter>());
      }
      return 0;
    }
  }
}
