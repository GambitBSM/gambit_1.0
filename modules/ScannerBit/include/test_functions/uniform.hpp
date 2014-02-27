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

#ifndef __test_uniform_hpp__
#define __test_uniform_hpp__

namespace Gambit
{
        namespace Scanner_Testing
        {
                class Test_Uniform : public Scanner::Function_Base
                {
                private:
                        std::vector<std::string> keys;
                        std::vector<double> params;
                        
                public:
                        Test_Uniform (const IniParser::Options &options)
                        {
                                if (options.hasKey("dim"))
                                {
                                        int dim = options.getValue<int>("dim");
                                        keys.resize(dim);
                                        int i = 0;
                                        for (auto &key : keys)
                                        {
                                                std::stringstream ss;
                                                ss << i++;
                                                ss >> key;
                                        }
                                }
                                else
                                {
                                        scanLog::err << "Test function \"uniform\" needs a dim entry." << scanLog::endl;
                                }
                        }
                        
                        std::vector<std::string> &getKeys(){return keys;}
                        std::vector<double> &getParameters(){return params;}
                        
                        double operator() (std::vector<double> &unit)
                        {
                                params = unit;
                                return 0.0;
                        }
                };
                
                LOAD_TEST_FUNCTOR(uniform, Test_Uniform)
        }
}

#endif
