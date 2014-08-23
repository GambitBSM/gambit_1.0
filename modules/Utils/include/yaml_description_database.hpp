//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Small wrapper object for parsing and emitting
///  capability/model etc. database information
///  using yaml-cpp
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (ben.farmer@gmail.com)
///  \date 2014 Aug
///
///  *********************************************

#include <yaml-cpp/yaml.h>
#include <vector>
#include <sstream>
#include <utility>

#include "util_types.hpp"
#include "standalone_error_handlers.hpp"
#include "variadic_functions.hpp"


#ifndef __yaml_description_database_hpp__
#define __yaml_description_database_hpp__

namespace Gambit
{

  ///  A small wrapper object for 'description database' nodes.
  ///  The descriptions are extracted from, e.g., capabilities.dat
  class DescriptionDatabase 
  {

    public:

      /// Default constructor
      DescriptionDatabase() {}

      /// Construct from file
      DescriptionDatabase(str& filename)
      {
         loadFile(filename);
      }

      /// Copy constructor
      DescriptionDatabase(const YAML::Node &descriptions) : descriptions(descriptions) {}
      
      /// Move constructor
      DescriptionDatabase(YAML::Node &&descriptions) : descriptions(std::move(descriptions)) {}

      /// Getters for key/value pairs (which is all the options node should contain)
      /// @{
      template <typename... args>
      bool hasKey(const args&... keys) const
      {
        return getVariadicNode(descriptions, keys...);
      }

      template<typename TYPE, typename... args>
      TYPE getValue(const args&... keys) const
      {
        const YAML::Node node = getVariadicNode(descriptions, keys...);
        if (not node)
        {
          std::ostringstream os;
          os << "No entry for [" << stringifyVariadic(keys...) << "]\n Node contents:  " << descriptions;
          core_error().raise(LOCAL_INFO,os.str());
        }
        return node.as<TYPE>();
      }
      /// @}
     
      
      /// Load descriptions from file
      template<typename... args>
      void loadFile(str& filename)
      {
        try { 
          descriptions = YAML::LoadFile(filename);
        } 
        catch (YAML::Exception &e) {
          std::ostringstream msg;
          msg << "Error reading descriptions file \""<<filename<<"\"! ";
          msg << "Please check that file exists!" << endl;
          msg << "(yaml-cpp error: "<<e.what()<<" )";
          core_error().raise(LOCAL_INFO,msg.str());
        }
      }

      /// Check 'descriptions' for duplicate keys
      std::map<str,int> check_for_duplicates()
      {
        std::set<str> found; //found keys
        std::map<str,int> duplicates; //name and number of duplicates
        for(YAML::const_iterator it=descriptions.begin();it!=descriptions.end();++it) 
        {
          str name = it->first.as<str>();
          if(found.find(name)==found.end())
          {
            found.insert(name);
            duplicates[name] = 0;
          }
          else
          {
            duplicates[name] = duplicates[name] + 1;   
          }         
        }
        return duplicates;
      }
      
      /// Return vector of descriptions matching key (for retrieving values with non-unique keys)
      std::vector<str> get_all_values(str key)
      {
        std::vector<str> values;
        for(YAML::const_iterator it=descriptions.begin();it!=descriptions.end();++it) 
        {
          if(key==it->first.as<str>())
          {
            values.push_back(it->second.as<str>());
          }
        }
        return values;
      } 

    private:

      YAML::Node descriptions;

  };

}

#endif //defined __yaml_description_database_hpp__
