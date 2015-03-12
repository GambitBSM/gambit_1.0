//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
/// \file
///  Utility Functions for the Gambit Scanner
///
///  *********************************************
///
///  Authors
///  =======
///
///  (add name and date if you modify)
///
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 July
///  \date 2014 Feb
///
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2014 Mar, Dec
///
///  *********************************************

#ifndef __scanner_utils_hpp__
#define __scanner_utils_hpp__

#include <type_traits>
#include <utility>
#include <ostream>
#include <sstream>
#include <unordered_map>
#include <algorithm>
#ifdef __GNUG__
  #include <cstdlib>
  #include <memory.h>
  #include <cxxabi.h>
#endif

#include "gambit/Utils/exceptions.hpp"
#include "gambit/Logs/log.hpp"
#include "gambit/Utils/factory_registry.hpp"
#include "gambit/Utils/variadic_functions.hpp"

#define scan_err        SCAN_ERR
#define scan_warn       SCAN_WARN
#define scan_end        SCAN_END
#define scan_flush      SCAN_FLUSH

#define SCAN_ERR                                                \
Gambit::Scanner::Errors::_bool_() = true,                       \
Gambit::Scanner::Errors::_err_()                                \

#define SCAN_WARN                                               \
Gambit::Scanner::Errors::_bool_() = false,                      \
Gambit::Scanner::Errors::_warn_()                               \

#define SCAN_END_INTERNAL                                       \
(Gambit::Scanner::Errors::_bool_()) ?                           \
(                                                               \
        Gambit::Scanner::scan_error().raise(LOCAL_INFO,         \
         Gambit::Scanner::Errors::_err_().str()),               \
        Gambit::Scanner::Errors::_err_().str("")                \
)                                                               \
:                                                               \
(                                                               \
        Gambit::Scanner::scan_warning().raise(LOCAL_INFO,       \
         Gambit::Scanner::Errors::_warn_().str()),              \
        Gambit::Scanner::Errors::_warn_().str("")               \
)                                                               \

#define SCAN_END std::endl, SCAN_END_INTERNAL

#define SCAN_FLUSH std::flush, SCAN_END_INTERNAL

namespace Gambit
{
        namespace Scanner
        {       
                namespace Errors
                {
                        inline std::stringstream &_err_()
                        {
                                static std::stringstream error;
                                return error;
                        }
                        
                        inline std::stringstream &_warn_()
                        {
                                static std::stringstream warn;
                                return warn;
                        }
                        
                        inline bool &_bool_()
                        {
                                static bool error;
                                return error;
                        }
                }
                /// Scanner errors
                error& scan_error();
                /// Scanner warnings
                warning& scan_warning();
                
                inline std::string demangle(const std::string &in)
                {
#ifdef __GNUG__
                        int status = -4;
                        char *result = abi::__cxa_demangle (in.c_str(), NULL, NULL, &status);       

                        if (status)
                        {
                                scan_err << "Error demangling \"" << in << "\" status code:  " << status << scan_end;
                                return in;
                        }
                        
                        std::string ret(result);
                        std::free(result);
                        return ret;
#else
                        return in;
#endif
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
                
                template <typename T>
                inline typename std::enable_if <is_container<T>::value, std::ostream &>::type
                operator << (std::ostream &out, const T &in)
                {
                        if (in.size() == 0)
                                return out << "[]";
                        
                        out << "[";
                        auto it = in.begin(), end = in.end();
                        end--;
                        for (; it != end; it++)
                        {
                                out << *it << ", ";
                        }
                        
                        return out << *it << "]";
                }
                
                template <typename T>
                inline typename std::enable_if <is_pair<T>::value, std::ostream &>::type
                operator << (std::ostream &out, const T &in)
                {
                        return out << "{" << in.first << " : " << in.second << "}";
                }
        }
}

#endif
