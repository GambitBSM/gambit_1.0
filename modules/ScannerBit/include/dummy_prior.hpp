#ifndef DUMMY_PRIOR_HPP
#define DUMMY_PRIOR_HPP

#include <priors.hpp>
#include <yaml_parser.hpp>

namespace Gambit
{
   namespace Priors
   {
        class Dummy : public BasePrior
        {
        private:
                
        public: 
                // Constructor
                Dummy(std::vector<std::string>& param, IniParser::Options& options) : BasePrior(param)
                { 
                }
                
                void transform(std::vector<double>&unitpars, std::map<std::string,double>&outputMap)
                {
                        std::vector<double>::iterator it_vec = unitpars.begin();
                        for (std::vector<std::string>::iterator it = param_names.begin(); it != param_names.end(); it++, it_vec++)
                        {
                                outputMap[*it] = *it_vec;
                        }
                }
        };
        
        LOAD_PRIOR(dummy, Dummy)
   }
}

#endif