//////////////////////////////////////////////////////////
// Simple example for GAMBIT Ini-file parser
//
// Christoph Weniger (c.weniger@uva.nl)
// May, June 2013
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
      // Read inifile file
      std::vector<YAML::Node> roots = YAML::LoadAllFromFile(filename);

      // Set central nodes
      YAML::Node inputNode = roots[0];
      YAML::Node outputNode = roots[1];
      mapNode = roots[2];

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

    bool IniFile::hasObservable(std::string capability)
    {
      for (ObservablesType::const_iterator it = observables.begin();
          it != observables.end(); ++it)
      {
        if ((*it).capability == capability)
          return true;
      }
      return false;
    }

    bool IniFile::hasDependency(ObservableType observable, std::string capability)
    {
      for (ObservablesType::const_iterator it = observable.dependencies.begin();
          it != observable.dependencies.end(); ++it)
      {
        if ((*it).capability == capability)
          return true;
      }
      return false;
    }

    ObservableType IniFile::getObservable(std::string capability)
    {
      ObservableType ret;
      for (ObservablesType::const_iterator it = observables.begin();
          it != observables.end(); ++it)
      {
        if ((*it).capability == capability)
          return (*it);
      }
    }

    ObservableType IniFile::getDependency(ObservableType observable, std::string capability)
    {
      ObservableType ret;
      for (ObservablesType::const_iterator it = observable.dependencies.begin();
          it != observable.dependencies.end(); ++it)
      {
        if ((*it).capability == capability)
          return (*it);
      }
    }
  }
}
