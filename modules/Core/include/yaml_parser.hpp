//////////////////////////////////////////////////////////
// GAMBIT
// INI-file parser based on yaml-cpp
//
// Christoph Weniger, 2013-06-03
//
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
    // Structs corresponding to ini-file
    namespace Types
    {
      struct Dependency
      {
        std::string capability;
        std::string module;
      };

      struct Observable
      {
        std::string obsType;
        std::string capability;
        std::string backend;
        std::vector<Dependency> dependencies;
      };

      struct Parameter
      {
        std::string name;
        std::pair<double, double> range;
      };
    }
  }
}

// Rules for ini-file --> Structs mapping
namespace YAML {
  using namespace GAMBIT::IniParser::Types;
  template<> struct convert<Observable>
  {
    static bool decode(const Node& node, Observable& rhs)
    {
      rhs.obsType = node["obsType"].as<std::string>();
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
        // Read the file
        int readFile(std::string filename);

        // Central ini-file structures: observables and scan parameteres 
        ObservablesType observables;
        ParametersType parameters;

        // Templated getter function for arbitrary key-value pairs
        template<typename TYPE> TYPE getValue(std::string key)
        {
          return mapNode[key].as<TYPE>();
        };

      private:
        YAML::Node mapNode;
    };
  }
}

#endif /* defined(__yaml_parser_hpp__) */
