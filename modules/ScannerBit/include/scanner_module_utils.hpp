//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  declaration for scanner module utilities
///
///  *********************************************
///
///  Authors (add name and date if you modify):
//
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 August 2013
///
///  *********************************************

#ifndef SCANNER_MODULE_UTILS_HPP
#define SCANNER_MODULE_UTILS_HPP

#include <vector>
#include <string>
#include <map>
#include <sstream>
#include <type_traits>

using namespace std;

namespace GAMBIT
{
        namespace Scanner
        {       
                namespace
                {
                        template <typename T> struct is_vector {static const bool value = false;};
                        template <typename T> struct is_vector <std::vector<T>> {static const bool value = true;};
                        
                        template <typename T>
                        typename enable_if<!is_vector<T>::value, void>::type convert(T **a, std::string &in)
                        {                      
                                std::stringstream stuff;                                                                        
                                stuff << in;                                                                                    
                                stuff >> **a;   
                        }
                        
                        template <typename T>
                        typename enable_if<is_vector<T>::value, void>::type convert(T** a, std::string &in)
                        {
                                std::stringstream stuff;
                                stuff << in;
                                typename T::value_type temp;
                                while (stuff >> temp) (*a)->push_back(temp);
                        }
                        
                        template <>
                        void convert <std::vector<char>> (std::vector<char> **a, std::string &in)
                        {
                                (*a)->insert((*a)->begin(), in.begin(), in.end());
                        }
                        
                        template<>
                        void convert <std::string> (std::string **a, std::string &in)
                        {
                                **a = in;
                        }  
                };
        };
};

#endif