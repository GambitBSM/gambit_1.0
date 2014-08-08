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
///  \date Feb 2014
///
///  *********************************************

#ifndef FIXED_SAME_AS_PRIOR_HPP
#define FIXED_SAME_AS_PRIOR_HPP

#include <algorithm>

#include "priors.hpp"


namespace Gambit
{
        namespace Priors
        {
                //if the parameter has a fixed value
                class FixedPrior : public BasePrior
                {
                private:
                        double value;
                        std::vector<std::string> names;
                        
                public:
                        FixedPrior(const std::vector<std::string>& param, const Options& options) : names(param)
                        {
                                if (options.hasKey("fixed_value"))
                                {
                                        value = options.getValue<double>("fixed_value");
                                }
                                else
                                {
                                        scanLog::err << "Did not give fixed_value for parameter " << names[0] << "..." << scanLog::endl;
                                }
                        }
                        
                        FixedPrior(std::string name, double value) : value(value), names(1, name) {}
                        
                        void transform(const std::vector<double> &unitPars, std::map<std::string, double> &outputMap) const
                        {
                                for (auto it = names.begin(), end = names.end(); it != end; it++)
                                {
                                        outputMap[*it] = value;
                                }
                        }
                };
                
                //if the parameter shares multiple different parameters
                class MultiPriors : public BasePrior
                {
                private:
                        std::string name;
                        std::vector <std::string> names;
                        
                public:
                        MultiPriors(const std::vector<std::string>& param, const Options& options)
                        {
                                if (options.hasKey("same_as"))
                                {
                                        name = options.getValue<std::string>("same_as");
                                }
                                else
                                {
                                        scanLog::err << "Did not give same_as parameters for parameter " << name << scanLog::endl;
                                }
                                
                                names = param;
                        }
                        
                        MultiPriors(std::string name_in)
                        {
                                std::string::size_type pos_old = 0;
                                std::string::size_type pos = name_in.find("+");
                                while (pos != std::string::npos)
                                {
                                        names.push_back(name_in.substr(pos_old, (pos-pos_old)));
                                        pos_old = pos + 1;
                                        pos = name_in.find("+", pos_old);
                                }
                                
                                name = name_in.substr(pos_old);
                                names.push_back(name_in);
                        }
                        
                        void transform (const std::vector<double> &unitPars, std::map<std::string, double> &outputMap) const
                        {
                                double value = outputMap[name];
                                
                                for (auto it = names.begin(), end = names.end(); it != end; it++)
                                {
                                        outputMap[*it] = value;
                                }
                        }
                };
                
                LOAD_PRIOR(fixed, FixedPrior)
                LOAD_PRIOR(same_as, MultiPriors)
        }
}

#endif
