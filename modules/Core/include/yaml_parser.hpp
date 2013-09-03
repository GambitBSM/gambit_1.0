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
#include <yaml-cpp/yaml.h>

#ifndef __yaml_parser_hpp__
#define __yaml_parser_hpp__

namespace Gambit
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

      // struct Parameter
      // {
      //   std::string name;
      //   std::pair<double, double> range;
      // };
    }
  }
}

// Rules for inifile --> Structs mapping
namespace YAML {
  using namespace Gambit::IniParser::Types;
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
  // template<> struct convert<Parameter>
  // {
  //   static bool decode(const Node& node, Parameter& rhs)
  //   {
  //     rhs.name =  node["parameter"].as<std::string>();
  //     rhs.range = node["range"].as<std::pair<double,double> >();
  //     return true;
  //   }
  // };
}

namespace Gambit
{
  namespace IniParser
  {
    typedef std::vector<Types::Observable> ObservablesType;
    // typedef std::vector<Types::Parameter> ParametersType;
    typedef Types::Observable ObservableType;
    // typedef Types::Parameter ParameterType;

    class IniFile
    {
      public:
        // Read the file
        int readFile(std::string filename);

        //
        // Getters for private observable and auxiliaries entries
        //
        const ObservablesType & getObservables() const
        {
          return observables;
        }

        const ObservablesType & getAuxiliaries() const
        {
          return auxiliaries;
        }

        //
        // Getters for key/value section
        //
        bool hasKey(std::string key) const
        {
          return keyValuePairNode[key];
        }

        bool hasKey(std::string s1, std::string s2) const
        {
          return keyValuePairNode[s1][s2];
        }

        bool hasKey(std::string s1, std::string s2, std::string s3) const
        {
          return keyValuePairNode[s1][s2][s3];
        }

        bool hasKey(std::string s1, std::string s2, std::string s3, std::string s4) const
        {
          return keyValuePairNode[s1][s2][s3][s4];
        }

        template<typename TYPE> TYPE getValue(std::string key) const
        {
          if (keyValuePairNode[key])
            return keyValuePairNode[key].as<TYPE>();
          std::cout << "ERROR: No inifile entry for " << key << std::endl;
          exit(1);
        };

        template<typename TYPE> TYPE getValue(std::string key, std::string subkey) const
        {
          if (keyValuePairNode[key][subkey])
            return keyValuePairNode[key][subkey].as<TYPE>();
          std::cout << "ERROR: No inifile entry for " <<
            key << "." << subkey << std::endl;
          exit(1);
        };

        template<typename TYPE> TYPE getValue(std::string s1, std::string s2, std::string s3) const
        {
          if (keyValuePairNode[s1][s2][s3])
            return keyValuePairNode[s1][s2][s3].as<TYPE>();
          std::cout << "ERROR: No inifile entry for " << 
            s1 << "." << s2 << "." << s3 << std::endl;
          exit(1);
        };

        template<typename TYPE> TYPE getValue(std::string s1, std::string s2, std::string s3, std::string s4) const
        {
          if (keyValuePairNode[s1][s2][s3][s4])
            return keyValuePairNode[s1][s2][s3][s4].as<TYPE>();
          std::cout << "ERROR: No inifile entry for " << 
            s1 << "." << s2 << "." << s3 << "." << s4 << std::endl;
          exit(1);
        };

        //
        // Getters for model/parameter section
        //
        template<typename TYPE> TYPE getModelParameterEntry(std::string model,
            std::string param, std::string key) const
        {
          if (parametersNode[model][param][key])
            return parametersNode[model][param][key].as<TYPE>();
          std::cout << "ERROR: " << model << "." << param << "." << key << "not found in inifile" << std::endl;
          exit(1);
        };

        bool hasModelParameterEntry(std::string model, std::string param, std::string key) const
        {
          return parametersNode[model][param][key];
        }

        // Return list of model names (without "adhoc" model!)
        const std::vector<std::string> getModelNames() const
        {
          std::vector<std::string> result;
          for (YAML::const_iterator it = parametersNode.begin(); it!=parametersNode.end(); ++it)
          {
            if (it->first.as<std::string>() != "adhoc")
              result.push_back( it->first.as<std::string>() );
          }
          return result;
        }

        const std::vector<std::string> getModelParameters(std::string model) const
        {
          std::vector<std::string> result;
          if (parametersNode[model])
          {
            for (YAML::const_iterator it = parametersNode[model].begin(); it!=parametersNode[model].end(); ++it)
            {
              result.push_back( it->first.as<std::string>() );
            }
          }
          return result;
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
