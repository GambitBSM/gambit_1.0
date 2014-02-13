//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Functions for use in constructing priors for
//  models.
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Ben Farmer
//  May, Oct, Dec 2013
//
//  *********************************************

/// TODO: change transform functions to work with maps rather than vectors, so that scannerbit can deal with whatever order of parameters that you like.

#ifndef __priors_hpp__
#define __priors_hpp__

#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <yaml_parser.hpp> // for the Options class

namespace Gambit {
 namespace Priors {

   //
   // Prior classes
   //

   /// Virtual base class for priors
   class BasePrior
   {
      private:
         std::vector<std::string> param_names;
         
      public:
         BasePrior() {}
         
         BasePrior(std::vector<std::string> param_names) : param_names(param_names)
         {
            
         }
              
         virtual std::map<std::string, double> transform(std::vector<double> &, std::map<std::string, double> &) const = 0;

         /// Function to check the parameter ranges supplied in the input
         inline size{return param_names.size();}
         void checkunit(const std::string&, double) const;
   };

   /// Special "build-a-prior" class
   /// This is the class to use for setting simple 1D priors (from the library above) on individual parameters.
   /// It actually also allows for any combination of MD priors to be set on any combination of subspaces of
   /// the full prior.
   
   class CompositePrior: public BasePrior
   {
                    
      private:
         // References to component prior objects
         typedef std::vector<BasePrior*>::const_iterator subpriors_it;
         const IniParser::IniFile* boundIniFile;
         std::vector<BasePrior*> my_subpriors;
         
      public:
      
         // Constructor
         CompositePrior(const IniParser::IniFile& iniFile);
         
         // Transformation from unit hypercube to my_ranges
         void transform(const std::vector<double> &unitPars, std::map<std::string,double> &outputMap)
         {
            std::vector<double>::iterator unit_it = unitPars.begin(), unit_next;
            for (subpriors_it subprior=my_subpriors.begin(); subprior!=my_subpriors.end(); ++subprior)
            {
               unitNext = unit_it + subprior->size();
               std::vector<double> subUnit(unit_it, unitNext);
               unit_it = unitNext;
               subprior->transform(subUnit, outputMap);
            }
         }
         
         void check(std::vector<std::string> &keys)
         {
                for(std::vector<std::string>::iterator it = keys.begin(); it != keys.end(); it++)
                {
                        int pos = it->rfind("+");
                                
                        std::string name = it->substr((pos == 0) ? 0: pos+1);
                        if(param_names.count(name) != 1)
                        {
                                std::cout << "The priors keys and Gambit keys do not match." << std::endl;
                                exit(1);
                        }
                }
                 
                if (keys.size() != param_names.size())
                {
                        std::cout << "The priors keys and Gambit keys do not match." << std::endl;
                        exit(1);
                }
         }
         
         ~CompositePrior();
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
        }; 
 
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
                create_prior()                                                                                  \
                {                                                                                               \
                        prior_creators[ #tag ] = create_prior< __VA_ARGS__ >::init;                             \
                }                                                                                               \
                                                                                                                \
                static BasePrior* void init(std::vector<std::string> params, IniParser::Options options)        \
                {                                                                                               \
                        return new __VA_ARGS__ (params, options);                                               \
                }                                                                                               \
        };                                                                                                      \
                                                                                                                \
        template <>                                                                                             \
        create_prior < __VA_ARGS__ > reg_init <name>::reg();                                                    \
};                                                                                                              \

#include<dummy_prior.hpp>
#include<prior_defs.hpp>

#endif /* defined(__priors_hpp__) */

