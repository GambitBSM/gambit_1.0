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

#include <map>
#include <vector>
#include <string>
#include <unordered_map>
#include <sstream>

#include "scanner_utils.hpp"
#include "scan.hpp"
#include "scanner_factory.hpp"

#include "yaml_options.hpp"


#define LOAD_TEST_FUNCTOR(tag, ...) REGISTER( __test_functor_map__, tag, __VA_ARGS__ )

namespace Gambit
{
        namespace Scanner_Testing
        {
                registry
                {
                        typedef Scanner::Function_Base *func_type(const Options &);
                        reg_elem <func_type> __test_functor_map__;
                }
                
                class Test_Function_Factory : public Scanner::Factory_Base
                {
                private:
                        Scanner::Function_Base *func;
                        std::vector<std::string> keys;
                        
                public:
                        Test_Function_Factory(const Options &);
                        
                        const std::vector<std::string> & getKeys() const {return keys;}
                        
                        unsigned int getDim() const {return keys.size();}
                        
                        void * operator() (const std::string &in, const std::string &purpose) const
                        {
                                return func;
                        }
                        
                        void remove(void *a) const
                        {
                        }

                        //~Test_Function_Factory() noexcept //If we move to demanding C++11 noexcept to be supported
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
