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
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2014 Feb
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2014 Mar
///
///  *********************************************

#include <vector>

#include "util_types.hpp"
#include "standalone_error_handlers.hpp"

#include <yaml-cpp/yaml.h>

#ifndef __yaml_options_hpp__
#define __yaml_options_hpp__

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
      Options(YAML::Node); 

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
          str errmsg = "No options entry for ";
          errmsg +=     stringifyVariadic(keys...) +
                     "\n(sorry, I can't tell you which likelihood/auxiliary/prior entry this error comes from yet)"
                     "\nFIXME to dump contents of options!!\n";// + options; FIXME
          utils_error().raise(LOCAL_INFO,errmsg);
        }
        return node.as<TYPE>();
      }
      /// @}

      /// Dump contents of YAML::Node to cout
      void dumpcontents() const;
      
      /// Greg:  add a recursive option function for testing purposes.
      const Options getOptions(str key) const;
      
      /// Greg:  another function for recursion
      const std::vector<str> getPriorNames() const;
      
    private:

      YAML::Node options;

  };

}

#endif //#ifndef __yaml_options_hpp__
