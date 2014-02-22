//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  declaration for scanner module
///
///  *********************************************
///
///  Authors (add name and date if you modify):
//
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 August 2013 Feb 2014
///
///  *********************************************

#ifndef SCANNER_PLUGIN_HPP
#define SCANNER_PLUGIN_HPP

#include <plugin/gambit_plugin.hpp>
#include <yaml-cpp/yaml.h>

using namespace std;

namespace Gambit
{
        /*ScannerBit specific stuff.*/
        namespace Scanner
        {       
                /*Inifile Interface*/
                class IniFileInterface
                {
                public:
                        virtual const std::string pluginName() const = 0;
                        virtual const std::string fileName() const = 0;
                        virtual const std::string getValue(std::string in) const = 0;
                        virtual ~IniFileInterface() = 0;
                };
                
                /*Generic Functor*/
                class Function_Base
                {
                public:
                        typedef Function_Base type;
                        virtual std::vector<double> & getParameters() = 0;
                        virtual std::vector<std::string> & getKeys() = 0;
                        virtual double operator () (std::vector<double> &) = 0;
                        virtual ~Function_Base() = 0;
                };
                
                /*Factory imported by ScannerBit*/
                class Function_Factory_Base
                {
                public:
                        virtual std::vector<std::string> & getKeys() = 0;
                        virtual void * operator() (std::string, std::string) = 0;
                        virtual void remove(std::string, void *) = 0;
                        virtual ~Function_Factory_Base() = 0;
                };
        }
}

#define GETKEYS() get_input_value<std::vector<std::string>>(0);
#define GETFUNCTOR(str1, str2) (Function_Base *)(get_input_value<Function_Factory_Base>(1))(str1, str2);

#define SCANNER_SETUP                                                                                                   \
using namespace Gambit::Scanner;                                                                                        \
template <typename T>                                                                                                   \
T get_inifile_value(std::string in)                                                                                     \
{                                                                                                                       \
        std::string temp = (get_input_value<IniFileInterface>(2)).getValue(in);                                         \
        if (temp != "")                                                                                                 \
        {                                                                                                               \
                YAML::Node conv = YAML::Load(temp);                                                                     \
                return conv.as<T>();                                                                                    \
        }                                                                                                               \
        else                                                                                                            \
        {                                                                                                               \
                std::cout << "\e[00;31mERROR:\e[00m  Missing iniFile entry needed by plugin \""                         \
                                << ((get_input_value<IniFileInterface>(2)).pluginName()) << "\":  " << in << std::endl; \
                exit(-1);                                                                                               \
        }                                                                                                               \
};                                                                                                                      \
                                                                                                                        \
template <typename T>                                                                                                   \
T get_inifile_value(std::string in, T defaults)                                                                         \
{                                                                                                                       \
        std::string temp = (get_input_value<IniFileInterface>(2)).getValue(in);                                         \
        if (temp != "")                                                                                                 \
        {                                                                                                               \
                YAML::Node conv = YAML::Load(temp);                                                                     \
                return conv.as<T>();                                                                                    \
        }                                                                                                               \
        else                                                                                                            \
        {                                                                                                               \
                return defaults;                                                                                        \
        }                                                                                                               \
};                                                                                                                      \

#define SCANNER_PLUGIN(mod_name)                                                                                        \
GAMBIT_PLUGIN(mod_name)                                                                                                 \
{                                                                                                                       \
        SCANNER_SETUP                                                                                                   \
}                                                                                                                       \
namespace __gambit_plugin_ ## mod_name ##  _namespace__                                                                 \

#endif