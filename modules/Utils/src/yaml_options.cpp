//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Implementations for the YAML options class.
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


#include "yaml_options.hpp"

namespace Gambit
{

  // Public method implementations for Options class

    /// Preferred constructor
    Options::Options(YAML::Node optionsIN) : options(optionsIN) {} 
    
    /// Dump contents of YAML::Node to cout
    void Options::dumpcontents() const
    {
        cout<<options<<endl;
    }
    
    /// Greg:  add a recursive option function for testing purposes.
    const Options Options::getOptions(str key) const
    {
      if (options[key]["options"])
      {
        return Options(options[key]["options"]);
      }
      else
      {
        return Options(options[key]);
      }
    }
    
    /// Greg:  another function for recursion
    const std::vector<str> Options::getPriorNames() const
    {
      std::vector<str> result;
      //C++11 version; unsuported with gcc 4.5.
      //for (auto &node : options)
      //{
      //  result.push_back( node.first.as<str>() );
      //}
      for (auto it = options.begin(), end = options.end(); it != end; ++it)
      {
        result.push_back( it->first.as<str>() );
      }
      return result;
    }
    
}

