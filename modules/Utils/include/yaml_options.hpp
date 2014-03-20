//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Declarations for the YAML options class.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 June 2013
///
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2013 Dec
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

#ifndef __yaml_options_hpp__
#define __yaml_options_hpp__

#include <vector>
#include <sstream>

#include "util_types.hpp"
#include "standalone_error_handlers.hpp"
#include "variadic_functions.hpp"

namespace Gambit
{

  ///  A small wrapper object for 'options' nodes.
  ///  These can be extracted from the prior, likelihood and auxiliaries section of the 
  ///  inifile, or set by hand in module standalone mode.
  class Options
  {

    public:

      /// Default constructor
      Options() {}

      /// Preferred constructor
      Options(YAML::Node optionsIN) : options(optionsIN) {} 

      /// Getters for key/value pairs (which is all the options node should contain)
      /// @{
      template <typename... args>
      bool hasKey(args... keys) const
      {
        return getVariadicNode(options, keys...);
      }

      template<typename TYPE, typename... args>
      TYPE getValue(args... keys) const
      {
        const YAML::Node node = getVariadicNode(options, keys...);
        if (not node)
        {
          std::ostringstream os;
          os << "No options entry for [" << stringifyVariadic(keys...) << "]\n Node contents:  " << options;
          utils_error().raise(LOCAL_INFO,os.str());
        }
        return node.as<TYPE>();
      }
      /// @}

      /// Retrieve values from key-value pairs in options node.
      /// Works for an arbitrary set of input keys (of any type), and returns
      /// all values as strings.
      template<typename... args>
      const std::vector<str> getNames(const args&... keys) const
      {
        std::vector<str> result;
        const YAML::Node node = getVariadicNode(options, keys...);

        if (node)
        {
          for (auto it = node.begin(), end = node.end(); it != end; ++it)
          {
            result.push_back( it->first.as<str>() );
          }
        }

        return result;
      }

      /// Retrieve values from all key-value pairs in options node.
      /// Returns all values are as strings.
      const std::vector<str> getNames() const
      {
        std::vector<str> result;

        for (auto it = options.begin(), end = options.end(); it != end; ++it)
        {
          result.push_back( it->first.as<str>() );
        }

        return result;
      }

      /// Recursive options retrieval
      template<typename... args>
      const Options getOptions(const args&... keys) const
      {
        const YAML::Node node = getVariadicNode(options, keys...);
        if (node["options"])
        {
          return Options(node["options"]);
        }
        else
        {
          return Options(node);
        }
      }
                                
      
    private:

      YAML::Node options;

  };

}

#endif //#ifndef __yaml_options_hpp__
