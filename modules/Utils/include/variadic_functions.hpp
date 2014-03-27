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
#include <type_traits>

#include <yaml-cpp/yaml.h>

namespace Gambit
{       
        /////////////////////
        //is_vector
        /////////////////////
        
        template <typename T>
        struct is_vector
        {
                static const bool value = false;
                typedef T type;
        };
        
        template <typename T>
        struct is_vector<std::vector<T>>
        {
                static const bool value = true;
                typedef T type;
        };
        
        //////////////////////////////////////
        //Variadic Node functions
        //////////////////////////////////////
        
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
        
//         template <typename T>
//         struct getVariadicNumber_internal;
// 
//         template <>
//         struct getVariadicNumber_internal<void()>
//         {
//                 enum{N = 0};
//         };
// 
//         template <typename T, typename... args>
//         struct getVariadicNumber_internal<void (T, args...)>
//         {
//                 enum{N = 1 + getVariadicNumber_internal<void (args...)>::N};
//         };
// 
//         template <typename... args>
//         struct getVariadicNumber
//         {
//                 enum{N = getVariadicNumber_internal<void (args...)>::N};
//         };
        
        ///////////////////////////////////////////////
        //Input and Output Variadic functions
        ///////////////////////////////////////////////
        
        inline int getVariadicMaxVector(){return 0;}
        
        template <typename T, typename... args>
        inline int getVariadicMaxVector (T &in, args... params)
        {
                int N0 = getVariadicMaxVector(params...);
                int N = (is_vector<T>::value) ? in.size() : N0;
                
                return (N > N0) ? N0 : N;
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
        
        ///////////////////////////
        //is_one_member
        ///////////////////////////
        
        template <typename type, typename T>
        struct is_one_member_internal;
        
        template <typename type>
        struct is_one_member_internal <type, void ()>
        {
                static const bool value = false;
        };
        
        template <typename T, typename... args>
        struct is_one_member_internal <T, void (T, args...)>
        {
                static const bool value = true;
        };
        
        template <typename type, typename T, typename... args>
        struct is_one_member_internal <type, void (T, args...)>
        {
                static const bool value = is_one_member_internal<type, void (args...)>::value;
        };
        
        template <typename type, typename... args>
        struct is_one_member
        {
                static const bool value = is_one_member_internal<type, void (args...)>::value;
        };
        
        //////////////////////////////
        //is_all_member
        //////////////////////////////
        
        template <typename type, typename T>
        struct is_all_member_internal;
        
        template <typename type>
        struct is_all_member_internal <type, void ()>
        {
                static const bool value = true;
        };
        
        template <typename T, typename... args>
        struct is_all_member_internal <T, void (T, args...)>
        {
                static const bool value = is_all_member_internal<T, void (args...)>::value;
        };
        
        template <typename type, typename T, typename... args>
        struct is_all_member_internal <type, void (T, args...)>
        {
                static const bool value = false;
        };
        
        template <typename type, typename... args>
        struct is_all_member
        {
                static const bool value = is_all_member_internal<type, void (args...)>::value;
        };
        
        ///////////////////////////////////
        //is_one_member_vector
        ///////////////////////////////////
        
        template <typename T>
        struct is_one_member_vector_internal;
        
        template <>
        struct is_one_member_vector_internal < void ()>
        {
                static const bool value = false;
        };
        
        template <typename T, typename... args>
        struct is_one_member_vector_internal <void (std::vector<T>, args...)>
        {
                static const bool value = true;
        };
        
        template <typename T, typename... args>
        struct is_one_member_vector_internal <void (T, args...)>
        {
                static const bool value = is_one_member_vector_internal<void (args...)>::value;
        };
        
        template <typename... args>
        struct is_one_member_vector
        {
                static const bool value = is_one_member_vector_internal<void (args...)>::value;
        };
                
        //////////////////////////////
        //is_all_member_vector
        //////////////////////////////
        
        template <typename T>
        struct is_all_member_vector_internal;
        
        template <>
        struct is_all_member_vector_internal <void ()>
        {
                static const bool value = true;
        };
        
        template <typename T, typename... args>
        struct is_all_member_vector_internal <void (std::vector<T>, args...)>
        {
                static const bool value = is_all_member_vector_internal<void (args...)>::value;
        };
        
        template <typename T, typename... args>
        struct is_all_member_vector_internal <void (T, args...)>
        {
                static const bool value = false;
        };
        
        template <typename... args>
        struct is_all_member_vector
        {
                static const bool value = is_all_member_vector_internal<void (args...)>::value;
        };
        
        /////////////////////////////
        //enable_if's
        /////////////////////////////
        
        template <typename T, typename ret, typename... args>
        struct enable_if_one_member
        {
                typedef typename std::enable_if<is_one_member<T, args...>::value, ret>::type type;
        };
        
        template <typename T, typename ret, typename... args>
        struct enable_if_all_member
        {
                typedef typename std::enable_if<is_all_member<T, args...>::value, ret>::type type;
        };
        
        template <typename ret, typename... args>
        struct enable_if_one_member_vector
        {
                typedef typename std::enable_if<is_one_member_vector<args...>::value, ret>::type type;
        };
        
        template <typename ret, typename... args>
        struct enable_if_all_member_vector
        {
                typedef typename std::enable_if<is_all_member_vector<args...>::value, ret>::type type;
        };
        
        //////////////////////////////////////
        //enable_if_not's
        //////////////////////////////////////
        
        template <typename T, typename ret, typename... args>
        struct enable_if_not_one_member
        {
                typedef typename std::enable_if<!is_one_member<T, args...>::value, ret>::type type;
        };
        
        template <typename T, typename ret, typename... args>
        struct enable_if_not_all_member
        {
                typedef typename std::enable_if<!is_all_member<T, args...>::value, ret>::type type;
        };
        
        template <typename ret, typename... args>
        struct enable_if_not_one_member_vector
        {
                typedef typename std::enable_if<!is_one_member_vector<args...>::value, ret>::type type;
        };
        
        template <typename ret, typename... args>
        struct enable_if_not_all_member_vector
        {
                typedef typename std::enable_if<!is_all_member_vector<args...>::value, ret>::type type;
        };
}

#endif
