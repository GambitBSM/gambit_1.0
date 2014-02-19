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
    /// Just a small wrapper object for the 'options' nodes which we extract
    /// from the prior/likelihood/auxiliaries section of the inifile
    class Options
    {
      public:
        // Constructor
        Options(YAML::Node optionsIN) : options(optionsIN) {} 

        // Default constructor
        Options() {}

        //
        // Getters for key/value pairs (this is all the options node should contain)
        //
        bool hasKey(std::string key) const
        {
          return options[key];
        }

        template<typename TYPE> TYPE getValue(std::string key) const
        {
          if (options[key])
            return options[key].as<TYPE>();
          // else
          std::cout << "ERROR: No options entry for " << key << std::endl;
          std::cout << "(sorry, I can't tell you which likelihood/auxiliary/prior entry this error comes from yet)" << std::endl;
          std::cout << "Contents of options:" << std::endl;
          std::cout << options << std::endl;
          exit(1);
        }

        // Dump contents of YAML::Node to cout
        void dumpcontents()
        {
            std::cout<<options<<std::endl;
        }

      private:
        YAML::Node options;
    };
  }
}

namespace Gambit
{
  namespace IniParser
  {
    class Options;
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
        Gambit::IniParser::Options options;
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
          rhs.options = Gambit::IniParser::Options(node["options"]);
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
        }

        template<typename TYPE> TYPE getValue(std::string key, std::string subkey) const
        {
          if (keyValuePairNode[key][subkey])
            return keyValuePairNode[key][subkey].as<TYPE>();
          std::cout << "ERROR: No inifile entry for " <<
            key << "." << subkey << std::endl;
          exit(1);
        }

        template<typename TYPE> TYPE getValue(std::string s1, std::string s2, std::string s3) const
        {
          if (keyValuePairNode[s1][s2][s3])
            return keyValuePairNode[s1][s2][s3].as<TYPE>();
          std::cout << "ERROR: No inifile entry for " << 
            s1 << "." << s2 << "." << s3 << std::endl;
          exit(1);
        }

        template<typename TYPE> TYPE getValue(std::string s1, std::string s2, std::string s3, std::string s4) const
        {
          if (keyValuePairNode[s1][s2][s3][s4])
            return keyValuePairNode[s1][s2][s3][s4].as<TYPE>();
          std::cout << "ERROR: No inifile entry for " << 
            s1 << "." << s2 << "." << s3 << "." << s4 << std::endl;
          exit(1);
        }

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
          if (priorsNode[priorname][key])
            return priorsNode[priorname][key].as<TYPE>();
          std::cout << "ERROR: " << priorname << "." << key << "not found in inifile" << std::endl;
          exit(1);
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
            ///TODO: gambit error
            std::cout<<"Error in prior section of inifile ("<<priorname<<")! A prior cannot have both of the keywords 'range' and 'options'. If a prior needs extra information aside from a range, the range and further options should all be put inside the 'options' section. 'range' is merely a convinience keyoword which triggers the auto-creation of an options section containing only a 'range' entry."<<std::endl;
            std::cout<<"Dumping contents of YAML::Node"<<std::endl;
            std::cout<<priorsNode[priorname]<<std::endl;
            exit(1);
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


      private:
        YAML::Node keyValuePairNode;
        YAML::Node parametersNode;
        YAML::Node priorsNode;
        // Central inifile structures: observables and scan parameteres 
        ObservablesType observables;
        ObservablesType auxiliaries;
    };




  }

}

#endif /* defined(__yaml_parser_hpp__) */
