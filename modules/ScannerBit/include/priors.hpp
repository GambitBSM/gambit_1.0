//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Prior object construction routines
///  
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@monash.edu.au)
///  \date 2013 Dec
///
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2014 Feb
///
///  *********************************************

#ifndef PRIORS_HPP
#define PRIORS_HPP

#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <yaml_parser.hpp> // for the Options class
#include <scanner_utils.hpp>

// This macro registers each prior.
#define LOAD_PRIOR(tag, ...) REGISTER(prior_creators, tag, __VA_ARGS__)

namespace Gambit 
{
        namespace Priors 
        {

                //
                // Prior classes
                //

                /// Virtual base class for priors
                class BasePrior
                {
                private:
#ifndef NO_GCC_4_7
                        unsigned int param_size = 0;
#else
                        unsigned int param_size;
#endif
                public:
#ifndef NO_GCC_4_7
                        BasePrior() = default;
#else
                        BasePrior() : param_size(0) {}
#endif
                        BasePrior(const int param_size) : param_size(param_size) {}
                        
                        virtual void transform(const std::vector<double> &, std::map<std::string, double> &) const = 0;

                        /// Function to check the parameter ranges supplied in the input
                        inline unsigned int size() const {return param_size;}
                        
                        inline void setSize(const unsigned int size){param_size = size;}
                        
                        virtual ~BasePrior() = default;
                };
   
                /// Map in which to keep factory functions for the priors (prior_creators)
                registry
                { 
                        typedef BasePrior* create_prior_function(const std::vector<std::string> &, const IniParser::Options &);
                        reg_elem <create_prior_function> prior_creators;
                }
        } // end namespace Priors
} // end namespace Gambit

#include<priors/prior_list.hpp>

#endif /* defined(__priors_hpp__) */

