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
#include <unordered_set>
#include <set>
#include <string>
#include <cfloat>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <functors.hpp>
#include <graphs.hpp>
#include <priors.hpp>
#include <scanner_utils.hpp>
#include <scanner_function.hpp>
#include <dlfcn.h>

#define INPUT_SCANNER_FUNCTION(map, func) \
map[ #func ].first = factory_template <func>::factory; \
map[ #func ].second = factory_template <func>::remove; \

namespace Gambit
{
        namespace Scanner
        {
                template <class T>
                struct factory_template
                {
                        static void *factory(std::map<std::string, primary_model_functor *> &a, Graphs::DependencyResolver *b, Priors::CompositePrior *c, std::string purpose){return new T(a, b, c, purpose);}
                        static void remove(void *a){delete (T *)a;}
                };
                
                class Factory_Base
                {
                public:
                        virtual std::vector<std::string> & getKeys() = 0;
                        
                        virtual void * operator() (std::string in, std::string purpose) = 0;
                        
                        virtual void remove(std::string in, void *a) = 0;
                        
                        virtual ~Factory_Base(){};
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
                                
                                INPUT_SCANNER_FUNCTION (factoryMap, Scanner_Function);
                                
                                //scanLog::err.print();
                        }
                        
                        std::vector<std::string> & getKeys(){return prior->getShownParameters();}
                        
                        void * operator() (std::string in, std::string purpose)
                        {
                                return (*factoryMap[in].first)(functorMap, dependencyResolver, prior, purpose);
                        }
                        
                        void remove(std::string in, void *a)
                        {
                                (*factoryMap[in].second)(a);
                        }
                        
                        ~Scanner_Function_Factory(){}
                };
        }
}

#endif
