//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Scanner inifile interface implementations.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 July 2013 Feb 2014
///
///  *********************************************

#include <test_factory.hpp>

namespace Gambit
{
        namespace Scanner_Testing
        {
                Test_Function_Factory::Test_Function_Factory(const Options &test_options)
                {

                        if (test_options.hasKey("test_function"))
                        {
                                std::string choice = test_options.getValue<std::string>("test_function");
                                auto it = __test_functor_map__.find(choice);
                                if (it != __test_functor_map__.end())
                                {
                                        Options options = test_options.getOptions(choice);
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
        }
}