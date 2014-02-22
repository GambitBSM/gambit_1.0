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

namespace Gambit
{
        namespace Priors
        {
                //if the parameter has a fixed value
                class FixedPrior : public BasePrior
                {
                private:
                        double value;
                        std::string name;
                        
                public:
                        FixedPrior(std::vector<std::string>& param, IniParser::Options& options) : name(param[0])
                        {
                                if (options.hasKey("fixed_value"))
                                {
                                        value = options.getValue<double>("fixed_value");
                                }
                                else
                                {
                                        scanLog::err << "Did not give fixed_value for parameter " << name << scanLog::endl;
                                }
                                
                                if (param.size() != 1)
                                {
                                        scanLog::err << "Can not fix one value at a time: [";
                                        std::vector<std::string>::iterator it = param.begin();
                                        scanLog::err << *(it++);
                                        for (; it < param.end(); it++)
                                        {
                                                scanLog::err << ", " << *it;
                                        }
                                        scanLog::err << "]" << scanLog::endl;
                                }
                        }
                        
                        FixedPrior(std::string name, double value) : value(value), name(name) {}
                        
                        void transform(std::vector<double> &unitPars, std::map<std::string, double> &outputMap) const
                        {
                                outputMap[name] = value;
                        }
                };
                
                //if the parameter shares multiple different parameters
                class MultiPriors : public BasePrior
                {
                private:
                        std::string name;
                        std::vector <std::string> names;
                        
                public:
                        MultiPriors(std::vector<std::string>& param, IniParser::Options& options)
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
                        
                        void transform (std::vector<double> &unitPars, std::map<std::string, double> &outputMap) const
                        {
                                double value = outputMap[name];
                                
                                for (std::vector<std::string>::const_iterator it = names.begin(); it != names.end(); ++it)
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