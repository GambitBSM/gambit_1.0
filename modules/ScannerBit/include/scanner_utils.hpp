//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
/// \file
///  Utility Functions for the Gambit Scanner
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
///  \author Gregory Martinez (gregory.david.martinez@gmail.com)
///  \date July 2013/feb 2014
//
//  *********************************************

#ifndef __scanner_utils_hpp__
#define __scanner_utils_hpp__

#include <scanlog.hpp>
#include <outputhandler.hpp>
#include <type_traits>
#include <utility>
#include <ostream>
#include <sstream>
#include <unordered_map>

#define REGISTER(reg_map, tag, ...)                                                                             \
namespace __gambit_registry__                                                                                   \
{                                                                                                               \
        namespace                                                                                               \
        {                                                                                                       \
                template<>                                                                                      \
                class __create_class__ < __VA_ARGS__ >                                                          \
                {                                                                                               \
                public:                                                                                         \
                        __create_class__(decltype(reg_map) &creators)                                           \
                        {                                                                                       \
                                creators[ #tag ] = __create_class__< __VA_ARGS__ >::init;                       \
                        }                                                                                       \
                                                                                                                \
                        template<typename T, typename... args>                                                  \
                        static T *init(args&&... params)                                                        \
                        {                                                                                       \
                                return static_cast<T *>(new __VA_ARGS__ (std::forward<args>(params)...));       \
                        }                                                                                       \
                };                                                                                              \
                                                                                                                \
                template <>                                                                                     \
                __create_class__ < __VA_ARGS__ > __reg_init__ < __VA_ARGS__ >::reg(reg_map);                    \
        }                                                                                                       \
}                                                                                                               \

#define registry                                                \
namespace __gambit_registry__                                   \
{                                                               \
        namespace                                               \
        {                                                       \
                template <class T>                              \
                class __create_class__ {};                      \
                                                                \
                template <class T>                              \
                struct __reg_init__                             \
                {                                               \
                        static __create_class__ <T> reg;        \
                };                                              \
        }                                                       \
}                                                               \
                                                                \
namespace                                                       \

namespace Gambit
{
        template <typename T>
        class reg_elem : public std::unordered_map<std::string, T *>
        {
        private:
                
        public:
                std::string print()
                {
                        std::ostringstream out;
                        
                        out << "The options are:  \n";
                        std::for_each (this->begin(), this->end(), [&] (std::pair<std::string, T*> elem)
                        {
                                out << "\t" << elem.first << "\n";
                        });
                        
                        return out.str();
                }
        };
        
        namespace Scanner
        {       
                namespace outputHandler
                {
                        extern OutputHandler out;
                }
        }
        
        namespace scanLog
        {
                extern ErrorLog err;
        }
}

#endif