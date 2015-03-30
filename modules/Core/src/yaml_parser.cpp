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
///  \date 2015 Mar
///
///  *********************************************

#include "gambit/Core/yaml_parser.hpp"

namespace Gambit
{

  namespace IniParser
  {

    // Implementations of main inifile class

    void IniFile::readFile(std::string filename)
    {

      // Perform the basic read and parse operations defined by the parent.
      YAML::Node root = filename_to_node(filename);
      basicParse(root);
      
      // Get the observables and auxiliaries sections
      YAML::Node outputNode = root["ObsLikes"];
      YAML::Node auxNode = root["Auxiliaries"];

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

  }

}
