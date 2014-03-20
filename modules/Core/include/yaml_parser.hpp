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
        
        // Greg:  added getParameterOptions function
        const Options getParameterOptions(std::string model, std::string param) const
        {
          if (hasModelParameterEntry(model, param, "options"))
          {
            return Options(parametersNode[model][param]["options"]);
          }
          else
          {
            return Options(parametersNode[model][param]);
          }
        }
        // Ben: added 'priors' section. Need to extract this format of data:

        // m12_prior: 
        //   parameters: M12
        //   type: log
        //   range: [100,2000]
        // 
        // A0Mstop_prior:
        //   parameters: A0, Mstop
        //   type: gaussian2D
        //   options:
        //      cov_11_12: [0.5, 0.1]
        //      cov_21_22: [0.1, 0.6]
 
        //
        // Getters for priors section
        //
 
        // Get value stored at the requested location
        template<typename TYPE> TYPE getPriorEntry(std::string priorname,
            std::string key) const
        {
          if (not priorsNode[priorname][key]) inifile_error().raise(LOCAL_INFO,priorname + "." + key + "not found in inifile");
          return priorsNode[priorname][key].as<TYPE>();
        }

        // For existence checks
        bool hasPriorEntry(std::string priorname, std::string key) const
        {
          return priorsNode[priorname][key];
        }

        // Extract the 'options' section into its own YAML::Node (wrapped in a helper class to handle errors etc)
        // (So that we can give this to the constructor for the prior, so it can use the options to build itself)
        const Options getPriorOptions(std::string priorname) const
        {
          Options options; 

          std::cout<<"getting options for prior "<<priorname<<std::endl;
          // If 'range' keyword exists in a prior section, 'options' is not allowed to exist. 
          // Check that this requirement is met
          if ( hasPriorEntry(priorname,"range") and hasPriorEntry(priorname,"options") )
          {
            str errmsg = "Error in prior section of inifile (";
            errmsg +=     priorname + ")!"
                       "\nA prior cannot have both of the keywords 'range' and 'options'. "
                       "\nIf a prior needs extra information aside from a range, the range "
                       "\nand further options should all be put inside the 'options' section. "
                       "\n'Range' is merely a convenience keyoword which triggers the "
                       "\nauto-creation of an options section containing only a 'range' entry.";
                       "\nFIXME to dump contents of YAML::Node!!\n";// + priorsNode[priorname]; FIXME
            inifile_error().raise(LOCAL_INFO,errmsg);
          }
          // Auto-create options section if 'range' keyword found
          if ( hasPriorEntry(priorname,"range") )
          {
            std::cout<<"range keyword found, autocreating options section..."<<std::endl;
            YAML::Node auto_options;
            auto_options["range"] = priorsNode[priorname]["range"];
            options = Options(auto_options);
          }
          // Otherwise just pass through the existing options section
          else if ( hasPriorEntry(priorname,"options") )
          {
            std::cout<<"options keyword found, passing through options section..."<<std::endl;
            options = Options(priorsNode[priorname]["options"]);
          }
          else
          {
            std::cout<<"neither range or options keyword found, autocreating empty options section..."<<std::endl;
            //  Neither "range" nor "options" exists. I guess in principle a prior might not require any options, if it was say a standard normal distribution or something. Ok, won't throw an error for this. Will leave it up to the priors to complain if they don't get the options they want. We need to pass them something though, so it will just be an empty YAML::Node.
            YAML::Node empty_options;
            options = Options(empty_options);
          }
 
          return options;
        }

        // Return list of names for priors (for use iterating through the priors)
        const std::vector<std::string> getPriorNames() const
        {
          std::vector<std::string> result;
          for (YAML::const_iterator it = priorsNode.begin(); it!=priorsNode.end(); ++it)
          {
            result.push_back( it->first.as<std::string>() );
          }
          return result;
        }
        
        //
        // Getters for scanner section
        //
        
        template <typename... args>
        bool hasScannerKey(args... keys) const
        {
          return getVariadicNode(scannerNode, keys...);
        }

        template<typename TYPE, typename... args> TYPE getScannerValue(args... keys) const
        {
          const YAML::Node node = getVariadicNode(scannerNode, keys...);
          if (not node) inifile_error().raise(LOCAL_INFO,"No inifile entry for [" + stringifyVariadic(keys...) + "]");
          return node.as<TYPE>();
        }
        
        const Options getScannerOptions(std::string key) const
        {
          if (hasKey(key, "options"))
          {
            return Options(scannerNode[key]["options"]);
          }
          else
          {
            return Options(scannerNode[key]);
          }
        }


      private:
        YAML::Node keyValuePairNode;
        YAML::Node parametersNode;
        YAML::Node priorsNode;
        YAML::Node scannerNode;
        // Central inifile structures: observables and scan parameteres 
        ObservablesType observables;
        ObservablesType auxiliaries;
    };




  }

}

#endif /* defined(__yaml_parser_hpp__) */
