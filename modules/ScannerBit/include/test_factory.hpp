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
#include <gambit_scan.hpp>
#include <scanner_factory.hpp>
#include <sstream>
#include <yaml_parser.hpp>

#define LOAD_TEST_FUNCTOR(tag, ...) REGISTER( __test_functor_map__, tag, __VA_ARGS__ )                                                                                              \

namespace Gambit
{
        namespace Scanner_Testing
        {
                registry
                {
                        typedef Scanner::Function_Base *func(const IniParser::Options &);
                        reg_elem <func> __test_functor_map__;
                }
                
                class Test_Function_Factory : public Scanner::Factory_Base
                {
                private:
                        Scanner::Function_Base *func;
                        
                public:
                        Test_Function_Factory(IniParser::IniFile &iniFile);
                        
                        const std::vector<std::string> & getKeys() const {return func->getKeys();}
                        
                        unsigned int getDim() const {return func->getKeys().size();}
                        
                        void * operator() (const std::string &in, const std::string &purpose) const
                        {
                                return func;
                        }
                        
                        void remove(void *a) const
                        {
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
