//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  declaration for scanner module
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 August
///        2014 Feb
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)   
///  \date 2014 Dec
///
///  *********************************************

#ifndef SCANNER_PLUGIN_HPP
#define SCANNER_PLUGIN_HPP

#include "scanner_utils.hpp"
#include "plugin_defs.hpp"
#include "plugin_macros.hpp"
#include "plugin_details.hpp"

#include <yaml-cpp/yaml.h>

namespace Gambit
{
        /*ScannerBit specific stuff.*/
        namespace Scanner
        {       
                /*Prior Transform*/
                class PriorTransform
                {
                public:
                        virtual void transform(const std::vector<double> &, std::map<std::string, double> &) const = 0;
                };
                
                /*Inifile Interface*/
                class IniFileInterface
                {
                public:
                        virtual const std::string pluginName() const = 0;
                        virtual const std::string fileName() const = 0;
                        virtual const std::string getValue(const std::string &in) const = 0;
                        virtual YAML::Node getNode(const std::string &str) const = 0;
                        virtual ~IniFileInterface() = 0;
                };
                
                /*Generic Functor*/
                class Function_Base
                {
                public:
                        virtual double operator () (const std::vector<double> &) = 0;
                        virtual void print(double, const std::string &) const = 0;
                        virtual ~Function_Base() = 0;
                };
                
                /*Factory imported by ScannerBit*/
                class Function_Factory_Base
                {
                public:
                        virtual const std::vector<std::string> & getKeys() const = 0;
                        virtual unsigned int getDim() const = 0;
                        virtual void * operator() (const std::string &, const std::string &) const = 0;
                        virtual void remove(void *) const = 0;
                        virtual ~Function_Factory_Base() = 0;
                };
        }
}

//#include "scan_file.hpp"

#define init_inifile_value(exp, ...)    INIT_INIFILE_VALUE(exp, __VA_ARGS__) enum{}
#define init_dimension(exp)             INIT_DIMENSION(exp) enum{}
#define init_functor(exp, ...)          INIT_FUNCTOR(exp, __VA_ARGS__) enum{}
#define get_dimension()                 GET_DIMENSION()
#define get_functor(...)                GET_FUNCTOR( __VA_ARGS__ )
#define scanner_plugin(...)             SCANNER_PLUGIN( __VA_ARGS__ )

#define INIT_INIFILE_VALUE(exp, ...)    INITIALIZE(exp, get_inifile_value<decltype(exp)>( __VA_ARGS__ ))
#define INIT_DIMENSION(exp)             INITIALIZE(exp, GET_DIMENSION())
#define INIT_FUNCTOR(exp, ...)          INITIALIZE(exp, GET_FUNCTOR(__VA_ARGS__))

#define GET_DIMENSION()                 get_input_value<unsigned int>(0)
#define GET_FUNCTOR(...)                (Function_Base *)(get_input_value<Function_Factory_Base>(1))(__VA_ARGS__)

#define SCANNER_SETUP                                                                                                   \
using namespace Gambit::Scanner;                                                                                        \
template <typename T>                                                                                                   \
T get_inifile_value(std::string in)                                                                                     \
{                                                                                                                       \
        YAML::Node conv = (get_input_value<IniFileInterface>(2)).getNode(in);                                           \
        if (conv.IsNull())                                                                                              \
        {                                                                                                               \
                scan_err << "Missing iniFile entry needed by a gambit plugin \n"                                        \
                        << Gambit::Scanner::Plugins::Plugin_Details(__gambit_plugin_namespace__::myData.name).printMin()\
                        << scan_end;                                                                                    \
        }                                                                                                               \
                                                                                                                        \
        return conv.as<T>();                                                                                            \
}                                                                                                                       \
                                                                                                                        \
template <typename T>                                                                                                   \
T get_inifile_value(std::string in, T defaults)                                                                         \
{                                                                                                                       \
        YAML::Node conv = (get_input_value<IniFileInterface>(2)).getNode(in);                                           \
        if (conv.IsNull())                                                                                              \
        {                                                                                                               \
                return defaults;                                                                                        \
        }                                                                                                               \
                                                                                                                        \
        return conv.as<T>();                                                                                            \
}                                                                                                                       \
//Gambit::Scanner::scan::ScanFileOutput scan_ios(get_keys(), &get_input_value<PriorTransform>(2));                      \

//#define SET_SCAN_IOS(file) \
//scan_ios.setOutput((get_input_value<IniFileInterface>(3)).getNode(#file)); \

#define SCANNER_PLUGIN(mod_name, mod_version)                                                                           \
GAMBIT_PLUGIN(mod_name, scan, mod_version)                                                                              \
{                                                                                                                       \
        SCANNER_SETUP                                                                                                   \
}                                                                                                                       \
namespace __gambit_plugin_ ## mod_name ## __t__scan__v__ ## mod_version ##  _namespace__                                

#endif
