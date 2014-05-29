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

#include <algorithm>
#include <cmath>

#include "priors.hpp"
#include "test_factory.hpp"


namespace Gambit
{
        namespace Scanner
        {
                class Test_Uniform : public Function_Base
                {
                private:
                        std::vector<std::string> keys;
                        std::vector<double> params;
                        Priors::BasePrior * prior;
                        std::map<std::string, double> param_map;
                        
                public:
                        Test_Uniform (const Options &options) : prior(nullptr)
                        {
                                if (options.hasKey("dim"))
                                {
                                        int dim = options.getValue<int>("dim");
                                        keys.resize(dim);
                                        int i = 0;
                                        std::for_each (keys.begin(), keys.end(), [&] (std::string &key)
                                        {
                                                std::stringstream ss;
                                                ss << i++;
                                                ss >> key;
                                        });
                                        
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
                        
                        const std::vector<std::string> &getKeys() const {return keys;}
                        const std::vector<double> &getParameters() const {return params;}
                        
                        double operator() (const std::vector<double> &unit)
                        {
                                if (prior == nullptr)
                                {
                                        params = unit;
                                }
                                else
                                {
                                        prior->transform(unit, param_map);
                                        
                                        std::transform (keys.begin(), keys.end(), params.begin(), [&] (std::string &key) -> double
                                        {
                                                return param_map[key];
                                        });
                                }
                                
                                return 0.0;
                        }

                        void print(double in, const std::string & type, const int ID) const {}
                        
                        //~Test_Uniform() noexcept
                        ~Test_Uniform()
                        {
                                if (prior != nullptr)
                                        delete prior;
                        }
                };
                
                //LOAD_TEST_FUNCTOR(uniform, Test_Uniform)
        }
}

#endif
