//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Small wrapper object for parsing and emitting
///  capability/model etc. database information
///  using yaml-cpp
///
///  Also in this file are the definitions of
///  structs for carrying around capability/model
///  information, as well as YAML emitters/decoders
///  for these structs.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (ben.farmer@gmail.com)
///  \date 2014 Aug,Sep
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
  /// Helper struct to carry around capability information
  struct capability_info
  {
     std::string name; // capability name
     std::set<std::string> modset; // Set of modules in which capability is used
     std::set<std::string> beset;  // Set of backends in which capability is used
     std::string description; // Full description of capability
     bool has_description; // Flag to check if description is missing
  };

  /// Helper struct to carry around model information
  struct model_info
  {
     std::string name; // model name
     std::vector<std::string> parameters; // Parameter names
     int nparams; // Number of parameters ( parameters.size() )
     std::string parent; // Parent model name
     std::vector<std::string> lineage;     // Parent and all ancestor models
     std::vector<std::string> descendants; // all child and higher order descendants
     std::string description; // Full description of capability
     bool has_description; // Flag to check if description is missing
  };

  /// Emitter for the capability_info struct
  YAML::Emitter& operator << (YAML::Emitter&, const capability_info&);
  
  /// Emitter for the model_info struct
  YAML::Emitter& operator << (YAML::Emitter&, const model_info&);
 
  ///  A small wrapper object for 'description database' nodes.
  ///  The descriptions are extracted from, e.g., capabilities.dat
  class DescriptionDatabase 
  {

    public:

      /// Default constructor
      DescriptionDatabase();

      /// Construct from file
      DescriptionDatabase(const str& filename);

      /// Copy constructor
      DescriptionDatabase(const YAML::Node &descriptions);
      
      /// Move constructor
      DescriptionDatabase(YAML::Node &&descriptions);

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
          utils_error().raise(LOCAL_INFO,os.str());
        }
        return node.as<TYPE>();
      }
      /// @}
     
      
      /// Load descriptions from file
      template<typename... args>
      void loadFile(const str& filename)
      {
        try { 
          descriptions = YAML::LoadFile(filename);
        } 
        catch (YAML::Exception &e) {
          std::ostringstream msg;
          msg << "Error reading descriptions file \""<<filename<<"\"! ";
          msg << "Please check that file exists!" << endl;
          msg << "(yaml-cpp error: "<<e.what()<<" )";
          utils_error().raise(LOCAL_INFO,msg.str());
        }
      }

      /// Check 'descriptions' for duplicate keys
      std::map<str,int> check_for_duplicates();
          
      /// Return vector of descriptions matching key (for retrieving values with non-unique keys)
      std::vector<str> get_all_values(str key);
     
    private:

      YAML::Node descriptions;

  };

} // end Gambit namespace

/// Decoder for YAML node into capability struct
// As it turns out, this isn't actually needed for anything at the moment, since I ended up keeping a copy of the whole database in memory while constructing it. I therefore have not written an equivalent decoder for the model database. Keeping this for now in case this situation changes...
namespace YAML {
  template<> struct convert<Gambit::capability_info>
  {
    static bool decode(const Node& node, Gambit::capability_info& rhs)
    {

      #define READ(NAME) \
      if (node[#NAME].IsDefined()) \
      {\
        rhs.NAME = node[#NAME].as<std::string>();\
      }\
      else\
      {\
        std::ostringstream errmsg; \
        errmsg << "Error decoding capability_info struct from YAML file. Could not find key '" STRINGIFY(#NAME) "'"; \
        Gambit::utils_error().raise(LOCAL_INFO,errmsg.str()); \
      }\

      READ(name)
      READ(description)

      #undef READ

      if(rhs.description=="Missing!") rhs.has_description=false;
      else rhs.has_description=true;

      if (node["modules"].IsDefined())
      {
         for(YAML::const_iterator it=node["modules"].begin();
          it!=node["modules"].end(); ++it)
         {
           rhs.modset.insert((*it).as<std::string>());
         }
      }
      else
      {
        std::ostringstream errmsg;
        errmsg << "Error decoding capability_info struct from YAML file. Could not find key 'modules'";
        Gambit::utils_error().raise(LOCAL_INFO,errmsg.str());
      }

      if (node["backends"].IsDefined())
      {
         for(YAML::const_iterator it=node["backends"].begin();
          it!=node["backends"].end(); ++it)
         {
           rhs.beset.insert((*it).as<std::string>());
         }
      }
      else
      {
        std::ostringstream errmsg;
        errmsg << "Error decoding capability_info struct from YAML file. Could not find key 'backends'";
        Gambit::utils_error().raise(LOCAL_INFO,errmsg.str());
      }
     
      return true;
    }
  };
}


#endif //defined __yaml_description_database_hpp__
