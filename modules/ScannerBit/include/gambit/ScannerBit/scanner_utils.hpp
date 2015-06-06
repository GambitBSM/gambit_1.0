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
#define scan_for        SCAN_FOR

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

#define SCAN_FOR(arg, vec)                                                                                      \
for(auto it = Gambit::Scanner::__scan_for__<decltype(vec.begin())>(vec.begin(), vec.end()); it.notDone(); ++it) \
for(auto &arg = *it(); it.isDone(); it.setTrue())                                                               \

namespace Gambit
{
        namespace Scanner
        {       
                /**********************************/
                /****** error and warnings ********/
                /**********************************/
                
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
                
                /*****************************************/
                /****** scan range for loop class ********/
                /*****************************************/
                
                template <typename T>
                class __scan_for__
                {
                private:
                        T it;
                        T end;
                        bool done;
                public:
                        __scan_for__ (const T& it, const T& end) : it(it), end(end), done(true) {}
                        
                        T operator()() {done = false; return it;}
                        
                        bool notDone() const {return (it != end)&&done;}
                        bool isDone() const {return !done;}
                        void setTrue() {done = true;}
                        
                        void operator ++ () {it++;}
                        void operator ++ (int) {++it;}
                };
                
                /*********************************/
                /****** demangle function ********/
                /*********************************/
                
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
                
                /***************************/
                /****** return type ********/
                /***************************/ 
                
                template <typename...>
                struct return_type;
                
                template <typename ret, typename... args>
                struct return_type <ret (args...)>
                {
                        typedef ret type;
                };
                
                /***********************************/
                /****** is_args_convertible ********/
                /***********************************/  
                
                template <typename... T>
                struct is_args_convertible
                {
                        static const bool value = false;
                };
                
                template <bool, typename T1, typename T2>
                struct __is_args_convertible__
                {
                        static const bool value = is_args_convertible<T1, T2>::value;
                };
                
                template <typename T1, typename T2>
                struct __is_args_convertible__<false, T1, T2>
                {
                        static const bool value = false;
                };
                
                template <typename ret1, typename ret2, typename arg1, typename arg2, typename... args1, typename... args2>
                struct is_args_convertible <ret1 (arg1, args1...), ret2 (arg2, args2...)>
                {
                        static const bool value = __is_args_convertible__<std::is_convertible<arg1, arg2>::value, ret1 (args1...), ret2 (args2...)>::value;
                };
                
                template <typename ret1, typename ret2>
                struct is_args_convertible <ret1(), ret2()>
                {
                        static const bool value = true;
                };
                
                /********************************************/
                /****** find_variadic_type_not_exact ********/
                /********************************************/

                template <typename... T>
                struct __find_variadic_type_not_exact__;
                
                template <typename... T>
                struct _find_variadic_type_not_exact_;
                
                template <typename T1, typename T2, typename... T>
                struct _find_variadic_type_not_exact_<T1, T2, T...>
                {
                        typedef typename __find_variadic_type_not_exact__ <typename remove_all_func<T1>::type, typename remove_all_func<T2>::type, T2, T...>::ret_type ret_type;
                        typedef typename __find_variadic_type_not_exact__ <typename remove_all_func<T1>::type, typename remove_all_func<T2>::type, T2, T...>::func_type func_type;
                        static const bool value = __find_variadic_type_not_exact__ <typename remove_all_func<T1>::type, typename remove_all_func<T2>::type, T2, T...>::value;
                };
                
                template <typename... T>
                struct find_variadic_type_not_exact
                {
                        typedef typename _find_variadic_type_not_exact_ <T...>::ret_type ret_type;
                        typedef typename _find_variadic_type_not_exact_ <T...>::func_type func_type;
                        static const bool value = _find_variadic_type_not_exact_ <T...>::value;
                };
                
                template <typename... args>
                struct find_variadic_type_not_exact <void (args...)>
                {
                        typedef int ret_type;
                        typedef void func_type;
                        static const bool value = false;
                };
                
                template <typename ret, typename... args, typename T1, typename... T>
                struct __find_variadic_type_not_exact__ <void (args...), ret (args...), T1, T...>
                {
                        typedef ret ret_type;
                        typedef T1 func_type;
                        static const bool value = true;
                };
                
                template <typename ret, typename... args, typename... args2, typename T1, typename... T>
                struct __find_variadic_type_not_exact__ <void (args...), ret (args2...), T1, T...>
                {
                        typedef typename find_variadic_type_not_exact <void (args...), T...>::ret_type ret_type;
                        typedef typename find_variadic_type_not_exact <void (args...), T...>::func_type func_type;
                        static const bool value = find_variadic_type_not_exact <void (args...), T...>::value;
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
                
                /******************************************/
                /****** find_variadic_type_convert ********/
                /******************************************/  
                
                template<bool, typename... T>
                struct __find_variadic_type_convert__;
                
                template<typename... T>
                struct _find_variadic_type_convert_;
                
                template<typename Tc, typename T1, typename... T>
                struct _find_variadic_type_convert_<Tc, T1, T...>
                {
                        typedef typename __find_variadic_type_convert__<is_args_convertible<Tc, T1>::value, T1, T...>::ret_type ret_type;
                        typedef typename __find_variadic_type_convert__<is_args_convertible<Tc, T1>::value, T1, T...>::func_type func_type;
                        static const bool value = __find_variadic_type_convert__<is_args_convertible<Tc, T1>::value, T1, T...>::value;
                };
                
                template <typename... T>
                struct find_variadic_type_convert
                {
                        typedef typename _find_variadic_type_convert_<T...>::ret_type ret_type;
                        typedef typename _find_variadic_type_convert_<T...>::func_type func_type;
                        static const bool value = _find_variadic_type_convert_<T...>::value;
                };
                
                template <typename ret, typename... args>
                struct find_variadic_type_convert<ret (args...)>
                {
                        typedef int ret_type;
                        typedef void func_type;
                        static const bool value = false;
                };
                
                template <bool b, typename Tc, typename T1, typename... T>
                struct __find_variadic_type_convert__<b, Tc, T1, T...>
                {
                        typedef typename find_variadic_type_convert<Tc, T...>::ret_type ret_type;
                        typedef typename find_variadic_type_convert<Tc, T...>::func_type func_type;
                        static const bool value = find_variadic_type_convert<Tc, T...>::value;
                };
                
                template <typename Tc, typename T1, typename... T>
                struct __find_variadic_type_convert__<true, Tc, T1, T...>
                {
                        typedef typename return_type<T1>::type ret_type;
                        typedef T1 func_type;
                        static const bool value = true;
                };
                
                /**********************************/
                /****** find_variadic_type ********/
                /**********************************/
                
                template <bool, bool, bool, typename...>
                struct __find_variadic_type__
                {
                        typedef int ret_type;
                        typedef void func_type;
                        static const bool value = false;
                };
                
                template <typename... T>
                struct find_variadic_type
                {
                        typedef typename __find_variadic_type__<find_variadic_type_exact<T...>::value,find_variadic_type_not_exact<T...>::value,find_variadic_type_convert<T...>::value, T...>::ret_type ret_type;
                        typedef typename __find_variadic_type__<find_variadic_type_exact<T...>::value,find_variadic_type_not_exact<T...>::value,find_variadic_type_convert<T...>::value, T...>::func_type func_type;
                        static const bool value = __find_variadic_type__<find_variadic_type_exact<T...>::value,find_variadic_type_not_exact<T...>::value,find_variadic_type_convert<T...>::value, T...>::value;
                };
                
                template <bool b1, bool b2, typename... T>
                struct __find_variadic_type__<true, b1, b2, T...>
                {
                        typedef typename find_variadic_type_exact<T...>::ret_type ret_type;
                        typedef typename find_variadic_type_exact<T...>::func_type func_type;
                        static const bool value = true;
                };
                
                template <bool b2, typename... T>
                struct __find_variadic_type__<false, true, b2, T...>
                {
                        typedef typename find_variadic_type_not_exact<T...>::ret_type ret_type;
                        typedef typename find_variadic_type_not_exact<T...>::func_type func_type;
                        static const bool value = true;
                };
                
                template <typename... T>
                struct __find_variadic_type__<false, false, true, T...>
                {
                        typedef typename find_variadic_type_convert<T...>::ret_type ret_type;
                        typedef typename find_variadic_type_convert<T...>::func_type func_type;
                        static const bool value = true;
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
