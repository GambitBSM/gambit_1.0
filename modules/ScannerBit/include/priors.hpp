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

#ifndef __priors_hpp__
#define __priors_hpp__

#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <yaml_parser.hpp> // for the Options class
#include <scanner_utils.hpp>

namespace Gambit {
 namespace Priors {

   //
   // Prior classes
   //

   /// Virtual base class for priors
   class BasePrior
   {
      protected:
         std::vector<std::string> param_names;
         
      public:
         BasePrior() {}
         
         BasePrior(std::vector<std::string> param_names) : param_names(param_names){}
         
         BasePrior(std::string name) : param_names(std::vector<std::string>(1, name)) {}
              
         virtual void transform(std::vector<double> &, std::map<std::string, double> &) const = 0;

         /// Function to check the parameter ranges supplied in the input
         inline size{return param_names.size();}
         inline std::vector<std::string> &getParameters(){return param_names;}
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
         std::vector<std::string> shown_param_names;
         
      public:
      
         // Constructor
         CompositePrior(const IniParser::IniFile& iniFile);
         
         inline std::vector<std::string> &getShownParameters(){return shown_param_names;}
         
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
                                scanLog::err << "The priors keys and Gambit keys do not match." << scanLog::endl;
                                exit(1);
                        }
                }
                 
                if (keys.size() != param_names.size())
                {
                        scanLog::err << "The priors keys and Gambit keys do not match." << scanLog::endl;
                        exit(1);
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
                        FixedPrior(std::string name, double value) : name(name), value(value) {}
                        void transform(std::vector<double> &unitPars, std::map<std::string, double> &outputMap)
                        {
                                outputMap[name] = value;
                        }
                };
                
                //if the parameter shares multiple different parameters
                class MultiPriors: public BasicPrior
                {
                protected:
                        std::string name;
                        std::vector <std::string> names;
                        
                public:
                        MultiParameter(std::string name_in)
                        {
                                int pos_old = 0;
                                int pos = name_in.find("+");
                                while (pos != std::string::npos)
                                {
                                        names.push_back(name_in.substr(pos_old, (pos-pos_old)));
                                        pos_old = pos + 1;
                                        pos = name_in.find("+");
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
        }; 
 
 }; // end namespace Priors
}; // end namespace Gambit

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

