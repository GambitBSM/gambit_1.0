//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  test functions implementations.
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

#ifndef __test_factory_hpp__
#define __test_factory_hpp__

#include <vector>
#include <unordered_map>
#include <map>
#include <string>
#include <scanner_utils.hpp>
#include <scanner_function.hpp>
#include <gambit_scan.hpp>
#include <sstream>
#include <yaml_parser.hpp>

#define LOAD_TEST_FUNCTOR(tag, ...) REGISTER( __test_functor_map__, tag, __VA_ARGS__ )                                                                                              \

namespace Gambit
{
        namespace Scanner
        {
                registry
                {
                        typedef Function_Base *func(const IniParser::Options &);
                        std::map<std::string, func*> __test_functor_map__;
                }
                
                class Test_Function_Factory : public Factory_Base
                {
                private:
                        Function_Base *func;
                        
                public:
                        Test_Function_Factory(IniParser::IniFile &iniFile)
                        {

                                if (iniFile.hasKey("test_function"))
                                {
                                        std::string choice = iniFile.getValue<std::string>("test_function");
                                        auto it = __test_functor_map__.find(choice);
                                        if (it != __test_functor_map__.end())
                                        {
                                                IniParser::Options options = iniFile.getOptions(choice);
                                                func = it->second(options);
                                        }
                                        else
                                        {
                                                func = 0;
                                                scanLog::err << "Test function \"" << choice << "\" requested, but not defined in iniFile" << scanLog::endl;
                                        }
                                }
                                else
                                {
                                        scanLog::err << "Test function was not specified (in inifile, use test_function:)." << scanLog::endl;
                                }
                        }
                        
                        std::vector<std::string> & getKeys(){return func->getKeys();}
                        
                        void * operator() (std::string in, std::string purpose)
                        {
                                return func;
                        }
                        
                        void remove(std::string in, void *a)
                        {
                                if (func != 0)
                                {
                                        delete a;
                                        func = 0;
                                }
                        }
                        
                        ~Test_Function_Factory()
                        {
                                if (func != 0)
                                        delete func;
                        }
                };
        }
}

#include <test_functions/test_function_list.hpp>

#endif
