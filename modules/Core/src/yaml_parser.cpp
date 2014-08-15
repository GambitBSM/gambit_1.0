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
    void IniFile::readFile(std::string filename)
    {
      // Read inifile file
      std::vector<YAML::Node> roots = YAML::LoadAllFromFile(filename);

      // Set central nodes
      ///TODO Ben> We might want to rethink the yaml file structure we are using. Currently it is all going to break if people leave
      // a section out of their yaml file, or specify them in the wrong order, etc. It is impossible to "name" yaml documents (i.e.
      // our sections seperated via ---) so we might just want all the inifile options inside the one document, under their own
      // named key entries. The order will then not matter, and we could deal with missing sections. 
      parametersNode = roots[0];
      priorsNode = roots[1];
      printerNode = roots[2];
      scannerNode = roots[3];
      YAML::Node outputNode = roots[4];
      YAML::Node auxNode = roots[5];
      YAML::Node logNode = roots[6];
      keyValuePairNode = roots[7];

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
  }
}
