//////////////////////////////////////////////////////////
// Simple example for GAMBIT ini-file parser
// 
// Christoph Weniger, 6 May 2013
//////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <string>
#include "yaml-cpp/yaml.h"

#ifndef __yaml_parser_hpp__
#define __yaml_parser_hpp__

namespace GAMBIT
{
  namespace IniParser
  {
    // Define allowed structures in ini-file
    namespace Types
    {
      struct Dependency
      {
        std::string capability;
        std::string module;
      };

      struct Observable
      {
        std::string scannerID;
        std::string capability;
        std::string backend;
        std::vector<Dependency> dependencies;
      };

      struct Parameter
      {
        std::string name;
        std::pair<double, double> range;
        std::string prior;
      };
    }
  }
}

// Rules for ini-file --> Types mapping
namespace YAML {
  using namespace GAMBIT::IniParser::Types;
  template<> struct convert<Observable>
  {
    static bool decode(const Node& node, Observable& rhs)
    {
      rhs.scannerID = node["scannerID"].as<std::string>();
      rhs.capability = node["capability"].as<std::string>();
      rhs.backend = node["backend"].as<std::string>();
      for(YAML::const_iterator it=node["dependencies"].begin();
          it!=node["dependencies"].end(); ++it)
      {
        rhs.dependencies.push_back((*it).as<Dependency>());
      }
      return true;
    }
  };
  template<> struct convert<Dependency>
  {
    static bool decode(const Node& node, Dependency& rhs)
    {
      rhs.capability = node["capability"].as<std::string>();
      rhs.module = node["module"].as<std::string>();
      return true;
    }
  };
  template<> struct convert<Parameter>
  {
    static bool decode(const Node& node, Parameter& rhs)
    {
      rhs.name =  node["parameter"].as<std::string>();
      rhs.range = node["range"].as<std::pair<double,double> >();
      rhs.prior = node["prior"].as<std::string>();
      return true;
    }
  };
}

namespace GAMBIT
{
  namespace IniParser
  {
    typedef std::vector<Types::Observable> ObservablesType;
    typedef std::vector<Types::Parameter> ParametersType;

    class IniFile
    {
      public:
        // Public Structures
        ObservablesType observables;
        ParametersType parameters;

        // Public Methods
        int readFile(std::string filename);

        template<typename TYPE> TYPE getFlag(std::string key)
        {
          return flagNode[key].as<TYPE>();
        };

      private:
        YAML::Node flagNode;
    };
  }
}

#endif /* defined(__yaml_parser_hpp__) */
