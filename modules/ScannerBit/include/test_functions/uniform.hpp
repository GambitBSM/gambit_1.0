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

#include <priors.hpp>

namespace Gambit
{
        namespace Scanner_Testing
        {
                class Test_Uniform : public Scanner::Function_Base
                {
                private:
                        std::vector<std::string> keys;
                        std::vector<double> params;
                        Priors::BasePrior * prior;
                        std::map<std::string, double> param_map;
                        
                public:
                        Test_Uniform (const IniParser::Options &options) : prior(0)
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
                                        
                                        if (options.hasKey("priors"))
                                        {
                                                prior = Priors::prior_creators["composite"](keys, options.getOptions("priors"));
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
                                if (prior == 0)
                                {
                                        params = unit;
                                }
                                else
                                {
                                        prior->transform(unit, param_map);
                                        
                                        auto it = params.begin();
                                        for (auto &key : keys)
                                        {
                                                *(it++) = param_map[key];
                                        }
                                }
                                
                                return 0.0;
                        }
                        
                        ~Test_Uniform()
                        {
                                if (prior != 0)
                                        delete prior;
                        }
                };
                
                LOAD_TEST_FUNCTOR(uniform, Test_Uniform)
        }
}

#endif
