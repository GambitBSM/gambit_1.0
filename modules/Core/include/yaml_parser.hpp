//////////////////////////////////////////////////////////
// GAMBIT
// INI-file parser based on yaml-cpp
//
// Christoph Weniger (c.weniger@uva.nl)
// June 2013
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
    // Structs corresponding to inifile
    namespace Types
    {
      // Dependency and Observable have the same type (and obsType entry is
      // irrelevant for dependencies)
      struct Observable
      {
        std::string obsType;
        std::string capability;
        std::string function;
        std::string module;
        std::string version;
        std::string options;
        std::vector<Observable> dependencies; // ..deps of deps of deps of obs possible
      };

      struct Parameter
      {
        std::string name;
        std::pair<double, double> range;
      };
    }
  }
}

// Rules for inifile --> Structs mapping
namespace YAML {
  using namespace GAMBIT::IniParser::Types;
  template<> struct convert<Observable>
  {
    static bool decode(const Node& node, Observable& rhs)
    {
      #define READ(NAME) \
      if (node[#NAME].IsDefined()) \
        rhs.NAME = node[#NAME].as<std::string>();
      READ(obsType)
      READ(capability)
      READ(function)
      READ(module)
      READ(version)
      READ(options)
      #undef READ
      for(YAML::const_iterator it=node["dependencies"].begin();
          it!=node["dependencies"].end(); ++it)
      {
        rhs.dependencies.push_back((*it).as<Observable>());
      }
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
    typedef Types::Observable ObservableType;
    typedef Types::Parameter ParameterType;

    class IniFile
    {
      public:
        // Read the file
        int readFile(std::string filename);

        // Central inifile structures: observables and scan parameteres 
        ObservablesType observables;
        ParametersType parameters;

        // Check for observables etc
        bool hasObservable(std::string capability);
        bool hasDependency(ObservableType observable, std::string capability);
        ObservableType getObservable(std::string capability);
        ObservableType getDependency(ObservableType observable, std::string capability);

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
