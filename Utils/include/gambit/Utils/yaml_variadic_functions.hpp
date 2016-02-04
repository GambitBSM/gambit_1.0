//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Variadic utilty functions which work with
///  YAML objects.
///
///  Separated from variadic_functions.hpp to
///  avoid having the YAML headers included
///  everywhere.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date Feb 2014
//
///  \author Christoph Weniger
///          <c.weniger@uva.nl>
///  \date Dec 2014
///
///  \author Ben Farmer
///          <benjamin.farmer@fysik.su.se>
///  \date Jan 2016
///
///  *********************************************

#ifndef YAML_VARIADIC_FUNCTIONS_HPP
#define YAML_VARIADIC_FUNCTIONS_HPP

#include <string>

#include "yaml-cpp/yaml.h"

namespace Gambit
{       
        //////////////////////////////////////
        //Variadic Node functions
        //////////////////////////////////////
        
        inline const YAML::Node getVariadicNode(const YAML::Node &node)
        {
                return node;
        }
        
        inline const YAML::Node getVariadicNode(const YAML::Node &node, std::string key) 
        {
                return node[key];
        }

        template <typename... args>
        inline const YAML::Node getVariadicNode(const YAML::Node &node, const std::string &key, const args&... keys)
        {
                if(not node[key]) return node[key];
                else return getVariadicNode(node[key], keys...);
        }
        
}

#endif
