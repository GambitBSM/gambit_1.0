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
#include <contrib/yaml-cpp-0.5.1/include/yaml-cpp/yaml.h>

#ifndef __yaml_parser_hpp__
#define __yaml_parser_hpp__

namespace GAMBIT
{
  namespace IniParser
  {
    // Structs corresponding to inifile
    namespace Types
    {
      // Dependency and Observable have the same type (and purpose entry is
      // irrelevant for dependencies)
      struct Observable
      {
        std::string purpose;
        std::string capability;
        std::string type;
        std::string function;
        std::string module;
        std::string backend;
        std::string version;
        std::string options;
        std::vector<Observable> dependencies; // ..deps of deps of deps of obs possible
        std::vector<Observable> backends; // ..deps of deps of deps of obs possible
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
      READ(purpose)
      READ(capability)
      READ(type)
      READ(function)
      READ(module)
      READ(backend)
      READ(version)
      READ(options)
      #undef READ
      for(YAML::const_iterator it=node["dependencies"].begin();
          it!=node["dependencies"].end(); ++it)
      {
        rhs.dependencies.push_back((*it).as<Observable>());
      }
      for(YAML::const_iterator it=node["backends"].begin();
          it!=node["backends"].end(); ++it)
      {
        rhs.backends.push_back((*it).as<Observable>());
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

        // Getters for private observable, auxiliaries and parameter entries
        const ObservablesType & getObservables()
        {
          return observables;
        }

        const ObservablesType & getAuxiliaries()
        {
          return auxiliaries;
        }

        bool hasKey(std::string key)
        {
          return keyValuePairNode[key];
        }

        bool hasKey(std::string s1, std::string s2)
        {
          return keyValuePairNode[s1][s2];
        }

        bool hasKey(std::string s1, std::string s2, std::string s3)
        {
          return keyValuePairNode[s1][s2][s3];
        }

        bool hasKey(std::string s1, std::string s2, std::string s3, std::string s4)
        {
          return keyValuePairNode[s1][s2][s3][s4];
        }

        // Templated getter function for arbitrary key-value pairs
        template<typename TYPE> TYPE getValue(std::string key)
        {
          if (keyValuePairNode[key])
            return keyValuePairNode[key].as<TYPE>();
          std::cout << "ERROR: No inifile entry for " << key << std::endl;
          exit(1);
        };

        template<typename TYPE> TYPE getValue(std::string key, std::string subkey)
        {
          if (keyValuePairNode[key][subkey])
            return keyValuePairNode[key][subkey].as<TYPE>();
          std::cout << "ERROR: No inifile entry for " <<
            key << "." << subkey << std::endl;
          exit(1);
        };

        template<typename TYPE> TYPE getValue(std::string s1, std::string s2, std::string s3)
        {
          if (keyValuePairNode[s1][s2][s3])
            return keyValuePairNode[s1][s2][s3].as<TYPE>();
          std::cout << "ERROR: No inifile entry for " << 
            s1 << "." << s2 << "." << s3 << std::endl;
          exit(1);
        };

        template<typename TYPE> TYPE getValue(std::string s1, std::string s2, std::string s3, std::string s4)
        {
          if (keyValuePairNode[s1][s2][s3][s4])
            return keyValuePairNode[s1][s2][s3][s4].as<TYPE>();
          std::cout << "ERROR: No inifile entry for " << 
            s1 << "." << s2 << "." << s3 << "." << s4 << std::endl;
          exit(1);
        };

        // Templated getter function for arbitrary key-value pairs
        template<typename TYPE> TYPE getParameterEntry(std::string param, std::string key)
        {
          if (parametersNode[param][key])
            return parametersNode[param][key].as<TYPE>();
          std::cout << "ERROR: Parameter " << param << " has no inifile entry " << key << std::endl;
          exit(1);
        };

        bool hasParameterEntry(std::string param, std::string key)
        {
          return parametersNode[param][key];
        }

        std::vector<std::string> getParameterList()
        {
          std::vector<std::string> parList;
          for (YAML::const_iterator it = parametersNode.begin(); it!=parametersNode.end(); ++it)
          {
            parList.push_back( it->first.as<std::string>() );
          }
          return parList;
        }

      private:
        YAML::Node keyValuePairNode;
        YAML::Node parametersNode;
        // Central inifile structures: observables and scan parameteres 
        ObservablesType observables;
        ObservablesType auxiliaries;
    };
  }
}

#endif /* defined(__yaml_parser_hpp__) */
