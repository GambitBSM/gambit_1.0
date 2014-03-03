//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Variadic utilty functions.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date Feb 2014
///
///  *********************************************

#ifndef VARIADIC_FUNCTIONS_HPP
#define VARIADIC_FUNCTIONS_HPP

#include <iostream>
#include <fstream>
#include <string>

#include <yaml-cpp/yaml.h>

namespace Gambit
{
        //getVariaticNode is used for the variadic versions of hasKey and getValue
        inline const YAML::Node getVariadicNode(const YAML::Node &node, std::string key) 
        {
                return node[key];
        }

        template <typename... args>
        inline const YAML::Node getVariadicNode(const YAML::Node &node, const std::string &key, const args&... keys)
        {
                return getVariadicNode(node[key], keys...);
        }
        
        inline const std::string stringifyVariadic(const std::string &str) {return str;}
        
        template<typename... args>
        inline const std::string stringifyVariadic(const std::string &str, const args&... strs) {return str + ", " + stringifyVariadic(strs...);}
}

#endif
