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
                protected:
                        unsigned int param_size;
                        
                public:
                        BasePrior() : param_size(0) {}
                        
                        BasePrior(const int param_size) : param_size(param_size) {}
                        
                        virtual void transform(std::vector<double> &, std::map<std::string, double> &) const = 0;

                        /// Function to check the parameter ranges supplied in the input
                        inline int size() const {return param_size;}
                        
                        virtual ~BasePrior(){}
                };

                /// Special "build-a-prior" class
                /// This is the class to use for setting simple 1D priors (from the library above) on individual parameters.
                /// It actually also allows for any combination of MD priors to be set on any combination of subspaces of
                /// the full prior.
   
                class CompositePrior : public BasePrior
                {
                                
                private:
                        // References to component prior objects
                        typedef std::vector<BasePrior*>::const_iterator subpriors_it;
                        const IniParser::IniFile* boundIniFile;
                        std::vector<BasePrior*> my_subpriors;
                        std::vector<std::string> shown_param_names;
                        std::vector<std::string> param_names;
                        
                public:
                
                        // Constructor
                        CompositePrior(const IniParser::IniFile& iniFile);
                        
                        inline std::vector<std::string> & getShownParameters() {return shown_param_names;}
                        
                        inline std::vector<std::string> &getParameters() {return param_names;}
                        
                        // Transformation from unit hypercube to my_ranges
                        void transform(std::vector<double> &unitPars, std::map<std::string,double> &outputMap) const
                        {
                                std::vector<double>::const_iterator unit_it = unitPars.begin(), unit_next;
                                for (auto &subprior : my_subpriors)
                                {
                                        unit_next = unit_it + subprior->size();
                                        std::vector<double> subUnit(unit_it, unit_next);
                                        unit_it = unit_next;
                                        subprior->transform(subUnit, outputMap);
                                }
                        }
                        
                        ~CompositePrior();
                };
                
                /// Map in which to keep factory functions for the priors (prior_creators)
                // (defined in priors.cpp)
        
                registry
                { 
                        typedef BasePrior* create_prior_function(const std::vector<std::string> &, IniParser::Options &);
                        std::map<std::string, create_prior_function*> prior_creators;
                }
        } // end namespace Priors
} // end namespace Gambit

// This macro registers each prior.
#define LOAD_PRIOR(tag, ...) REGISTER(prior_creators, tag, __VA_ARGS__)

#include<priors/prior_list.hpp>

#endif /* defined(__priors_hpp__) */

