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

#include "gambit/ScannerBit/priors.hpp"


namespace Gambit
{
    namespace Priors
    {
        class Dummy : public BasePrior
        {
        private:
                
        public: 
            // Constructor
            Dummy(const std::vector<std::string>& param, const Options&) : BasePrior(param, param.size())
            { 
            }
            
            void transform(const std::vector<double> &unitpars, std::unordered_map<std::string, double> &outputMap) const
            {
                auto it_vec = unitpars.begin();
                for (auto it = param_names.begin(), end = param_names.end(); it != end; it++)
                {
                    outputMap[*it] = *(it_vec++);
                }
            }
        };
        
        class None : public BasePrior
        {
        private:
                
        public: 
            None(const std::vector<std::string>& param, const Options&) : BasePrior(param)
            { 
            }
            
            void transform(const std::vector<double> &, std::unordered_map<std::string, double> &outputMap) const
            {
                for (auto it = param_names.begin(), end = param_names.end(); it != end; it++)
                {
                    if (outputMap.find(*it) == outputMap.end())
                    {
                        scan_err << "Parameter " << *it << " prior is specified as 'none'"
                                 << " and the scanner has not inputed a value for it." 
                                 << scan_end;
                    }
                    else if (outputMap[*it] == 3.14)
                    {
                        std::cout << "\nCongratulations, you entered '3.14'.  \e[31mYOU WIN A COOKIE!\e[0m  "
                                    << "Please send the GAMBIT Collaboration your full name "
                                    << "and address to send you your cookie.\n"
                                    << "\e[31mDisclaimer:\e[0m  The gambit collaboration "
                                    << "is not responsible for the result of ingestion of said "
                                    << "cookie and is unaware of its ingredients.  " 
                                    << "(press enter to continue)" << std::endl;
                                    
                        getchar();
                    }
                }
            }
        };
        
        LOAD_PRIOR(dummy, Dummy)
        LOAD_PRIOR(none, None)
    }
}

#endif
