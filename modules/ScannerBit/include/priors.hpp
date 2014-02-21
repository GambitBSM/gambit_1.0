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
                        
                        virtual void transform(std::vector<double> &, std::map<std::string, double> &) = 0;

                        /// Function to check the parameter ranges supplied in the input
                        inline int size(){return param_size;}
                        
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
                        
                        inline std::vector<std::string> &getShownParameters(){return shown_param_names;}
                        
                        inline std::vector<std::string> &getParameters(){return param_names;}
                        
                        // Transformation from unit hypercube to my_ranges
                        void transform(std::vector<double> &unitPars, std::map<std::string,double> &outputMap)
                        {
                                std::vector<double>::const_iterator unit_it = unitPars.begin(), unit_next;
                                for (subpriors_it subprior = my_subpriors.begin(); subprior != my_subpriors.end(); ++subprior)
                                {
                                        unit_next = unit_it + (*subprior)->size();
                                        std::vector<double> subUnit(unit_it, unit_next);
                                        unit_it = unit_next;
                                        (*subprior)->transform(subUnit, outputMap);
                                }
                        }
                        
                        ~CompositePrior();
                };

                //if the parameter has a fixed value
                class FixedPrior : public BasePrior
                {
                private:
                        double value;
                        std::string name;
                        
                public:
                        FixedPrior(std::string name, double value) : value(value), name(name) {}
                        void transform(std::vector<double> &unitPars, std::map<std::string, double> &outputMap)
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
                        
                        void transform (std::vector<double> &unitPars, std::map<std::string, double> &outputMap)
                        {
                                double value = outputMap[name];
                                
                                for (std::vector<std::string>::iterator it = names.begin(); it != names.end(); ++it)
                                {
                                        outputMap[*it] = value;
                                }
                        }
                };
                
                /// Map in which to keep factory functions for the priors (prior_creators)
                // (defined in priors.cpp)
        
                namespace
                { 
                        typedef BasePrior* create_prior_function(std::vector<std::string>, IniParser::Options);
                        std::map<std::string, create_prior_function*> prior_creators;
                        
                        template <class T>  
                        class create_prior {}; 
                        
                        template <class T>
                        struct reg_init
                        {
                                static create_prior <T> reg; 
                        };
                }
 
        } // end namespace Priors
} // end namespace Gambit

// This macro registers each prior.
#define LOAD_PRIOR(tag, ...)                                                                                    \
namespace                                                                                                       \
{                                                                                                               \
        template<>                                                                                              \
        class create_prior < __VA_ARGS__ >                                                                      \
        {                                                                                                       \
        public:                                                                                                 \
                create_prior(int i)                                                                             \
                {                                                                                               \
                        prior_creators[ #tag ] = create_prior< __VA_ARGS__ >::init;                             \
                }                                                                                               \
                                                                                                                \
                static BasePrior* init(std::vector<std::string> params, IniParser::Options options)             \
                {                                                                                               \
                        return new __VA_ARGS__ (params, options);                                               \
                }                                                                                               \
        };                                                                                                      \
                                                                                                                \
        template <>                                                                                             \
        create_prior < __VA_ARGS__ > reg_init < __VA_ARGS__ >::reg(0);                                          \
}                                                                                                               \

#include<priors/prior_list.hpp>

#endif /* defined(__priors_hpp__) */

