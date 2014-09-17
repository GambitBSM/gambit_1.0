//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Ini-file parser based on yaml-cpp
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 June 2013
///
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2014 Feb
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2014 Mar
///
///  *********************************************

#include <iostream>
#include <fstream>
#include <string>

#include "util_types.hpp"
#include "util_functions.hpp"
#include "error_handlers.hpp"
#include "variadic_functions.hpp"
#include "yaml_options.hpp"

#include <yaml-cpp/yaml.h>

#ifndef __yaml_parser_hpp__
#define __yaml_parser_hpp__


namespace Gambit
{

  namespace IniParser
  {

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
        bool printme; // Instruction to printer as to whether to write result to disk
        Options options;
        std::vector<Observable> dependencies; // ..deps of deps of deps of obs possible
        std::vector<Observable> backends; // ..deps of deps of deps of obs possible

        ///Default constructor, to ensure the default values are not gibberish
        Observable():
          purpose(),
          capability(),
          type(),
          function(),
          module(),
          backend(),
          version(),
          printme(true),
          options(),
          dependencies(),
          backends()
        {}
      };

      // struct Parameter
      // {
      //   std::string name;
      //   std::pair<double, double> range;
      // }
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

      // Strip leading "Gambit::" namespaces, but preserve "const ".
      rhs.type = Gambit::strip_leading_namespace(Gambit::strip_whitespace_except_after_const(rhs.type),"Gambit");
      
      if (node["printme"].IsDefined())
          rhs.printme = node["printme"].as<bool>();

      if (node["options"].IsDefined())
          rhs.options = Gambit::Options(node["options"]);
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
  // }
}

namespace Gambit
{
  namespace IniParser
  {
    typedef std::vector<Types::Observable> ObservablesType;
    // typedef std::vector<Types::Parameter> ParametersType;
    typedef Types::Observable ObservableType;
    // typedef Types::Parameter ParameterType;

    /// Main inifile class
    class IniFile
    {
      public:
        // Read the file
        void readFile(std::string filename);

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
        
        YAML::Node getParametersNode() const {return parametersNode;}
        YAML::Node getPriorsNode() const {return priorsNode;}
        YAML::Node getPrinterNode() const {return printerNode;}
        YAML::Node getScannerNode() const {return scannerNode;}
        YAML::Node getKeyValuePairNode() const {return keyValuePairNode;}
        
        template <typename... args>
        bool hasKey(args... keys) const
        {
                return getVariadicNode(keyValuePairNode, keys...);
        }

        template<typename TYPE, typename... args> TYPE getValue(args... keys) const
        {
          const YAML::Node node = getVariadicNode(keyValuePairNode, keys...);
          if (not node) inifile_error().raise(LOCAL_INFO,"No inifile entry for [" + stringifyVariadic(keys...) + "]");
          return node.as<TYPE>();
        }

        //
        // Getters for model/parameter section
        //
        template<typename TYPE> TYPE getModelParameterEntry(std::string model,
            std::string param, std::string key) const
        {
          if (not parametersNode[model][param][key]) inifile_error().raise(LOCAL_INFO,model + "." + param + "." + key + "not found in inifile.");
          return parametersNode[model][param][key].as<TYPE>();
        }

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

        // Greg: added getOptions
        const Options getOptions(std::string key) const
        {
          if (hasKey(key, "options"))
          {
            return Options(keyValuePairNode[key]["options"]);
          }
          else
          {
            return Options(keyValuePairNode[key]);
          }
        }

      private:
        YAML::Node keyValuePairNode;
        YAML::Node parametersNode;
        YAML::Node priorsNode;
        YAML::Node printerNode;
        YAML::Node scannerNode;
        // Central inifile structures: observables and scan parameteres 
        ObservablesType observables;
        ObservablesType auxiliaries;
    };




  }

}

#endif /* defined(__yaml_parser_hpp__) */
