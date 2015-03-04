//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Utility classes and functions for scanner plugins
///
///  *********************************************
///
///  Authors (add name and date if you modify):
//
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 August
///  \date 2014 Feb
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)   
///  \date 2014 Dec
///
///  *********************************************

#ifndef __PLUGIN_UTILITIES_HPP
#define __PLUGIN_UTILITIES_HPP

#include <vector>
#include <string>
#include <sstream>

#include "gambit/ScannerBit/scanner_utils.hpp"

namespace Gambit
{

        namespace Scanner
        {

                namespace Plugins
                {
                        
                        inline std::string stringify_variadic_inputs()
                        {
                                return "";
                        }
                        
                        inline std::string stringify_variadic_inputs(const std::string &in)
                        {
                                return in;
                        }
                        
                        template <typename... args>
                        inline std::string stringify_variadic_inputs(const std::string &in, const args&... params)
                        {
                                return in + ", " + stringify_variadic_inputs(params...);
                        }
                        
                        inline void input_variadic_vector(std::vector<void *> &){}
                        
                        template <typename T, typename... args>
                        inline void input_variadic_vector(std::vector<void *> &input, const T& value, const args&... params)
                        {
                                input.push_back((void *)&value);
                                input_variadic_vector(input, params...);
                        }
                        
                        inline int StringToInt(const std::string &str)
                        {
                                int ret;
                                std::stringstream ss(str);
                                if (ss >> ret)
                                        return ret;
                                else
                                        return 0;
                        }
                        
                        inline std::string IntToString(const int &in)
                        {
                                std::stringstream ss;
                                ss << in;
                                return ss.str();
                        }
                }

        }

}

#endif
