#ifndef DUMMY_PRIOR_HPP
#define DUMMY_PRIOR_HPP

namespace Gambit
{
   namespace Priors
   {
        class Dummy : public BasePrior
        {
        private:
                std::vector<std::string> param_names;
        public: 
                // Constructor
                Dummy(std::vector<std::string>& param, IniParser::Options& options) : BasePrior(param.size()), param_names(param)
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