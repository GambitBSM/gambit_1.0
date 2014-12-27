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
///  \date 2013 May, June, July
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
#include "yaml_parser.hpp"
#include "log.hpp"
#include "safety_bucket.hpp"

#include "yaml-cpp/yaml.h"

namespace Gambit
{

  namespace IniParser
  {

    /// Recursive import
    int importRound(YAML::Node node)
    {
      int counter = 0;
      // std::cout << node << " type: " << node.Type() << std::endl;
      if (node.Type() == YAML::NodeType::Scalar)
      {
        if ( node.Tag() == "!import" )
        {
          YAML::Node import;
          std::string filename = node.as<std::string>();
          std::cout << "Importing: " << filename << std::endl;
          try { 
            import = YAML::LoadFile(filename);
          } 
          catch (YAML::Exception &e) {
            std::ostringstream msg;
            msg << "Error reading Inifile \""<<filename<<"\" recursively! ";
            msg << "Please check that file exist!" << endl;
            msg << "(yaml-cpp error: "<<e.what()<<" )";
            inifile_error().raise(LOCAL_INFO,msg.str());
          }
          node = import;
          return 1;
        }
        return 0;
      }
      if (node.Type() == YAML::NodeType::Sequence)
      {
        for (unsigned int i = 0; i<node.size(); ++i)
        {
          counter += importRound(node[i]);
        }
        return counter;
      }
      if (node.Type() == YAML::NodeType::Map)
      {
        for (YAML::const_iterator it = node.begin(); it != node.end(); ++it)
        {
          counter += importRound(it->second);  // Only values are processed
        }
        return counter;
      }
      return 0;
    }

    void recursiveImport(YAML::Node node)
    {
      int import_counter = 0;
      int last_import_counter = 0;
      for ( int i = 0; i < 10; ++i)
      {
        last_import_counter = importRound(node);
        import_counter += last_import_counter;
      }
      if (last_import_counter > 0)
      {
        std::cout << last_import_counter << std::endl;
        std::cout << "WARNING: YAML imports were truncated after 10 recursions." << std::endl;
      }
    }


    // Implementations of main inifile class

    void IniFile::readFile(std::string filename)
    {
      // Read inifile file
      YAML::Node root;
      try { 
        root = YAML::LoadFile(filename);
        //roots = YAML::LoadAllFromFile(filename);
      } 
      catch (YAML::Exception &e) {
        std::ostringstream msg;
        msg << "Error reading Inifile \""<<filename<<"\"! ";
        msg << "Please check that file exist!" << endl;
        msg << "(yaml-cpp error: "<<e.what()<<" )";
        inifile_error().raise(LOCAL_INFO,msg.str());
      }

      recursiveImport(root);
      parametersNode = root["Parameters"];
      priorsNode = root["Priors"];
      printerNode = root["Printer"];
      scannerNode = root["Scanner"];
      YAML::Node outputNode = root["ObsLikes"];
      YAML::Node auxNode = root["Auxiliaries"];
      YAML::Node logNode = root["Logger"];
      keyValuePairNode = root["KeyValues"];

      /*
      parametersNode = root[0];
      priorsNode = root[1];
      printerNode = root[2];
      scannerNode = root[3];
      YAML::Node outputNode = root[4];
      YAML::Node auxNode = root[5];
      YAML::Node logNode = root[6];
      keyValuePairNode = root[7];
      */

      // Set fatality of exceptions
      if (hasKey("exceptions"))
      {       
        // Iterate over the map of all recognised exception objects
        std::map<const char*,exception*>::iterator iter;
        for (iter = exception::exception_map.begin(); iter != exception::exception_map.end(); ++iter)
        {
          // Check if the exception has an entry in the YAML file
          if (hasKey("exceptions",iter->first))
          { 
            // Retrieve the entry and set the exception's 'fatal' flag accordingly.
            str value = getValue<str>("exceptions",iter->first);
            if (value == "fatal")
            {
              iter->second->set_fatal(true);
            }
            else if (value == "non-fatal")
            {
              iter->second->set_fatal(false);
            }
            else
            {
              str error_msg = "Unrecognised entry \"" + value + "\" for exceptions key \"" + iter->first + "\" in input file.";
              inifile_error().raise(LOCAL_INFO,error_msg);
            }
          }
        }
      }

      // Parse the logging setup node, and initialise the LogMaster object
      std::string prefix = logNode["prefix"].as<std::string>();
      YAML::Node redir = logNode["redirection"];
      // map storing info used to set up logger objects
      std::map<std::set<std::string>,std::string> loggerinfo;
      for(YAML::const_iterator it=redir.begin(); it!=redir.end(); ++it) 
      {
          std::set<std::string> tags;
          std::string filename;
          // Iterate through tags and add them to the set 
          YAML::Node yamltags = it->first;
          for(YAML::const_iterator it2=yamltags.begin();it2!=yamltags.end();++it2)         
          {
            tags.insert( it2->as<std::string>() );
          }
          filename = (it->second).as<std::string>();
    
          // Add entry to the loggerinfo map
          if((filename=="stdout") or (filename=="stderr"))
          {
            // Special cases to trigger redirection to standard output streams
            loggerinfo[tags] = filename;
          }
          else
          {
            loggerinfo[tags] = prefix + filename;
          }
      }
      // Initialise global LogMaster object
      logger().initialise(loggerinfo);


      // Read likelihood/observables
      for(YAML::const_iterator it=outputNode.begin(); it!=outputNode.end(); ++it)
      {
        observables.push_back((*it).as<Types::Observable>());
      }


      // Read auxiliaries
      for(YAML::const_iterator it=auxNode.begin(); it!=auxNode.end(); ++it)
      {
        auxiliaries.push_back((*it).as<Types::Observable>());
      }

    }

    /// Getters for private observable and auxiliary entries
    /// @{
    const ObservablesType& IniFile::getObservables() const { return observables; }
    const ObservablesType& IniFile::getAuxiliaries() const { return auxiliaries; }
    /// @}

    /// Getters for key/value section
    /// @{
    YAML::Node IniFile::getParametersNode()   const {return parametersNode;}
    YAML::Node IniFile::getPriorsNode()       const {return priorsNode;}
    YAML::Node IniFile::getPrinterNode()      const {return printerNode;}
    YAML::Node IniFile::getScannerNode()      const {return scannerNode;}
    YAML::Node IniFile::getKeyValuePairNode() const {return keyValuePairNode;}
    /// @}

    /// Getters for model/parameter section
    /// @{
    bool IniFile::hasModelParameterEntry(std::string model, std::string param, std::string key) const
    {
      return parametersNode[model][param][key];
    }

    /// Return list of model names (without "adhoc" model!)
    const std::set<str> IniFile::getModelNames() const
    {
      std::set<str> result;
      for (YAML::const_iterator it = parametersNode.begin(); it!=parametersNode.end(); ++it)
      {
        if (it->first.as<std::string>() != "adhoc")
          result.insert( it->first.as<std::string>() );
      }
      return result;
    }

    const std::vector<std::string> IniFile::getModelParameters(std::string model) const
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

    /// Getter for options
    const Options IniFile::getOptions(std::string key) const
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

    /// @}


  }
}
