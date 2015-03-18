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
                
                /*****************************/
                /****** func_ptr_type ********/
                /*****************************/
                
                template <typename T> struct func_ptr_type;
                
                template <typename... args>
                struct func_ptr_type <void (args...)>
                {
                        typedef void (*type) (args...);
                };
                
                /*************************************/
                /****** input_variadic_vector ********/
                /*************************************/
                
                inline void input_variadic_vector(std::vector<void *> &){}
                
                template <typename T, typename... args>
                inline void input_variadic_vector(std::vector<void *> &input, const T& value, const args&... params)
                {
                        input.push_back((void *)&value);
                        input_variadic_vector(input, params...);
                }
                
                /*****************************/
                /****** String to Int ********/
                /*****************************/
                
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
                
                /********************************/
                /********* pi function **********/
                /********************************/
                
                inline double pi() {return 3.14159265358979323846;}
                
                /********************************/
                /******** pow function **********/
                /********************************/
                
                template <int i>
                inline double pow(const double &a)
                {
                        return a*pow<i-1>(a);
                };
                
                template <>
                inline double pow<0>(const double &)
                {
                        return 1.0;
                };
                
                template <>
                inline double pow<1>(const double &a)
                {
                        return a;
                };
                
                template <int i>
                inline int pow(const int &a)
                {
                        return a*pow<i-1>(a);
                };
                
                template <>
                inline int pow<0>(const int &)
                {
                        return 1;
                };
                
                template <>
                inline int pow<1>(const int &a)
                {
                        return a;
                };
                
                /********************************/
                /****** Remove All Func *********/
                /********************************/
                
                template <typename T>
                struct remove_all_func;
                
                template <typename ret, typename... args>
                struct remove_all_func <ret (args...)>
                {
                        typedef ret type(typename remove_all<args>::type...);
                };
                
                /**********************************/
                /****** find_variadic_type ********/
                /**********************************/

                template <typename... T>
                struct __find_variadic_type__;
                
                template <typename T1, typename T2, typename... T>
                struct _find_variadic_type_
                {
                        typedef typename __find_variadic_type__ <typename remove_all_func<T1>::type, typename remove_all_func<T2>::type, T2, T...>::ret_type ret_type;
                        typedef typename __find_variadic_type__ <typename remove_all_func<T1>::type, typename remove_all_func<T2>::type, T2, T...>::func_type func_type;
                        static const bool value = __find_variadic_type__ <typename remove_all_func<T1>::type, typename remove_all_func<T2>::type, T2, T...>::value;
                };
                
                template <typename... T>
                struct find_variadic_type
                {
                        typedef typename _find_variadic_type_ <T...>::ret_type ret_type;
                        typedef typename _find_variadic_type_ <T...>::func_type func_type;
                        static const bool value = _find_variadic_type_ <T...>::value;
                };
                
                template <typename... args>
                struct find_variadic_type <void (args...)>
                {
                        typedef int ret_type;
                        typedef void func_type;
                        static const bool value = false;
                };
                
                template <typename ret, typename... args, typename T1, typename... T>
                struct __find_variadic_type__ <void (args...), ret (args...), T1, T...>
                {
                        typedef ret ret_type;
                        typedef T1 func_type;
                        static const bool value = true;
                };
                
                template <typename ret, typename... args, typename... args2, typename T1, typename... T>
                struct __find_variadic_type__ <void (args...), ret (args2...), T1, T...>
                {
                        typedef typename find_variadic_type <void (args...), T...>::ret_type ret_type;
                        typedef typename find_variadic_type <void (args...), T...>::func_type func_type;
                        static const bool value = find_variadic_type <void (args...), T...>::value;
                };
                
                
                /****************************************/
                /****** find_variadic_type_exact ********/
                /****************************************/               
                
                template <typename... T>
                struct find_variadic_type_exact;

                template <typename ret, typename... args, typename... args2, typename... T>
                struct find_variadic_type_exact<void (args...), ret (args2...), T...>
                {
                        typedef typename find_variadic_type_exact<void (args...), T...>::ret_type ret_type;
                        typedef typename find_variadic_type_exact<void (args...), T...>::func_type func_type;
                        static const bool value = find_variadic_type_exact<void (args...), T...>::value;
                };

                template <typename ret, typename... args, typename... T>
                struct find_variadic_type_exact<void (args...), ret (args...), T...>
                {
                        typedef ret ret_type;
                        typedef ret func_type(args...);
                        static const bool value = true;
                };

                template <typename... args>
                struct find_variadic_type_exact<void (args...)>
                {
                        typedef int ret_type;
                        typedef void func_type;
                        static const bool value = false;
                };
                
                /********************************/
                /****** Stream Operators ********/
                /********************************/
                
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
