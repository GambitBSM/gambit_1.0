//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Scanner factory implementations.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 May, June, July
//
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 July 2013 Feb 2014
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2013 Aug
///
///  *********************************************

#ifndef __scanner_factory_hpp__
#define __scanner_factory_hpp__

#include <vector>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <set>
#include <string>
#include <functors.hpp>
#include <graphs.hpp>
#include <priors.hpp>
#include <scanner_utils.hpp>
#include <gambit_scan.hpp>

#define LOAD_SCANNER_FUNCTION(tag, ...) REGISTER(__scanner_factories__, tag, __VA_ARGS__)

namespace Gambit
{
        namespace Scanner
        {
                registry
                {
                        typedef void* factory_def(const std::map<std::string, primary_model_functor *> &, Graphs::DependencyResolver &b, Priors::CompositePrior &c, const std::string &purpose);
                        reg_elem <factory_def> __scanner_factories__;
                }
                
                class Function_Base
                {
                public:
                        virtual const std::vector<double> & getParameters() const = 0;
                        virtual const std::vector<std::string> & getKeys() const = 0;
                        virtual double operator () (std::vector<double> &) = 0;
                        virtual ~Function_Base(){}
                };
                
                class Scanner_Function_Factory : public Factory_Base
                {
                private:
                        Graphs::DependencyResolver *dependencyResolver;
                        Priors::CompositePrior *prior;
                        std::map<std::string, primary_model_functor *> functorMap;
                        std::map<std::string, std::pair<void *(*)(std::map<std::string, primary_model_functor *> &, Graphs::DependencyResolver *, Priors::CompositePrior *, std::string), void (*)(void *)>> factoryMap;
                       
                public:
                        Scanner_Function_Factory(const gambit_core &core, Graphs::DependencyResolver &dependencyResolver, Priors::CompositePrior &prior) : dependencyResolver(&dependencyResolver), prior(&prior)
                        {
                                functorMap = *core.getActiveModelFunctors();
                                
                                std::vector<std::string> priorKeys = prior.getParameters();
                                std::vector<std::string> gambitKeys;
                                
                                for (std::map<std::string, primary_model_functor *>::iterator act_it = functorMap.begin(); act_it != functorMap.end(); act_it++)
                                {
                                        std::vector <std::string> paramkeys = act_it->second->getcontentsPtr()->getKeys();
                                        for (std::vector<std::string>::iterator it = paramkeys.begin(); it != paramkeys.end(); it++)
                                        {
                                                gambitKeys.push_back(act_it->first + "::" + *it);
                                        }
                                }
                                
                                std::unordered_set<std::string> priorSet(priorKeys.begin(), priorKeys.end());
                                std::unordered_set<std::string> gambitSet(gambitKeys.begin(), gambitKeys.end());
                                
                                for (std::vector<std::string>::const_iterator it = gambitKeys.begin(); it != gambitKeys.end(); it++)
                                {
                                        if (priorSet.find(*it) == priorSet.end())
                                        {
                                                scanLog::err << "Parameter " << *it << " is required by gambit but is not in the inifile." << scanLog::endl;
                                        }
                                }
                                
                                for (std::vector<std::string>::iterator it = priorKeys.begin(); it != priorKeys.end(); it++)
                                {
                                        if (gambitSet.find(*it) == gambitSet.end())
                                        {
                                                scanLog::err << "Parameter " << *it << " is in the inifile but is not required by gambit." << scanLog::endl;
                                        }
                                }
                        }
                        
                        const std::vector<std::string> & getKeys() const {return prior->getShownParameters();}
                        
                        unsigned int getDim() const {return prior->size();}
                        
                        void * operator() (const std::string &in, const std::string &purpose) const
                        {
                                return __scanner_factories__[in](functorMap, *dependencyResolver, *prior, purpose);
                        }
                        
                        void remove(void *a) const
                        {
                                delete (Function_Base *)a;
                        }
                        
                        ~Scanner_Function_Factory(){}
                };
        }
}

#include <scanner_functions/scanner_function_list.hpp>

#endif
