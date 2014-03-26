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
        
        template <typename T>
        struct getVariadicNumber_internal;

        template <>
        struct getVariadicNumber_internal<void()>
        {
                enum{N = 0};
        };

        template <typename T, typename... args>
        struct getVariadicNumber_internal<void (T, args...)>
        {
                enum{N = 1 + getVariadicNumber_internal<void (args...)>::N};
        };

        template <typename... args>
        struct getVariadicNumber
        {
                enum{N = getVariadicNumber_internal<void (args...)>::N};
        };
        
        inline void inputVariadicVector(std::vector<double> &vec){}
        
        template <typename... args>
        inline void inputVariadicVector(std::vector<double> &vec, double val, args... params)
        {
                vec.push_back(val); inputVariadicVector(vec, params...);
        }
        
        inline void outputVariadicVector(std::vector<double>::const_iterator vec) {}
        
        template <typename... args>
        inline void outputVariadicVector(std::vector<double>::const_iterator vec, double &val, args&... params)
        {
                val = *vec;
                outputVariadicVector(vec+1, params...);
        }
}

#endif
