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

#ifndef DUMMY_PRIOR_HPP
#define DUMMY_PRIOR_HPP

#include <algorithm>

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
                Dummy(const std::vector<std::string>& param, const Options& options) : BasePrior(param.size()), param_names(param)
                { 
                }
                
                void transform(const std::vector<double> &unitpars, std::map<std::string,double> &outputMap) const
                {
                        auto it_vec = unitpars.begin();
                        std::for_each (param_names.begin(), param_names.end(), [&] (const std::string &par)
                        {
                                outputMap[par] = *(it_vec++);
                        });
                }
        };
        
        LOAD_PRIOR(dummy, Dummy)
   }
}

#endif