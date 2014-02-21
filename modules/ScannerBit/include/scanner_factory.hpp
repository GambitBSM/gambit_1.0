//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Scanner method implementations.
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
///  \date 2013 July 2013
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
#include <dlfcn.h>

#define INPUT_SCANNER_FUNCTION(map, func) \
map[ #func ].first = factory_template <func>::factory; \
map[ #func ].second = factory_template <func>::remove; \

namespace Gambit
{
        namespace Scanner
        {
                class Scanner_Function_Base
                {
                protected:
                        std::vector<Graphs::VertexID> vertices;
                        Graphs::DependencyResolver *dependencyResolver;
                        std::vector<double> realParameters;
                        Priors::CompositePrior *prior;
                        std::map<std::string, double> parameterMap;
                        std::map<std::string, primary_model_functor *> functorMap;
			
                public:
                        Scanner_Function_Base(std::map<std::string, primary_model_functor *> &functorMap, Graphs::DependencyResolver *dependencyResolver, Priors::CompositePrior *prior, std::string purpose) : functorMap(functorMap), dependencyResolver(dependencyResolver), prior(prior)
                        {
                                // Find subset of vertices that match requested purpose
                                vertices = dependencyResolver->getObsLikeOrder();
                                int size = 0;
                                for (std::vector<Graphs::VertexID>::iterator it = vertices.begin(), it2 = vertices.begin(); it != vertices.end(); ++it)
                                {
                                        if (dependencyResolver->getIniEntry(*it)->purpose == purpose)
                                        {
                                                *it2 = *it;
                                                it2++;
                                                size++;
                                        }
                                }

                                vertices.resize(size);
                        }
			
                        inline void calcObsLike(Graphs::VertexID &it) 
                        {
                                dependencyResolver->calcObsLike(it);
                        }

                        inline double getObsLike(Graphs::VertexID &it) 
                        {
                                return dependencyResolver->getObsLike(it);
                        }
                        
                        void setParameters (std::vector<double> &vec) 
                        {
                                prior->transform(vec, parameterMap);
                                std::vector<std::string>::iterator itKey = prior->getParameters().begin();
                                for (std::vector<double>::iterator it  = realParameters.begin(); it != realParameters.end(); ++it, ++itKey)
                                {
                                        *it = parameterMap[*itKey];
                                }
                                
                                for (std::map<std::string, primary_model_functor *>::iterator act_it = functorMap.begin(); act_it != functorMap.end(); act_it++)
                                {
                                        std::vector <std::string> paramkeys = act_it->second->getcontentsPtr()->getKeys();
                                        for (std::vector<std::string>::iterator it = paramkeys.begin(); it != paramkeys.end(); it++)
                                        {
                                                //std::cout << (act_it->first + "::" + *it) << "   " << parameterMap[act_it->first + "::" + *it] << std::endl;
                                                act_it->second->getcontentsPtr()->setValue(*it, parameterMap[act_it->first + "::" + *it]);
                                        }
                                }
                                //getchar();
                        }
                        
                        void resetAll() 
                        {
                                dependencyResolver->resetAll();
                        }
			
                        virtual std::vector<double> & getParameters(){return realParameters;}
                        virtual std::vector<std::string> & getKeys(){return prior->getShownParameters();}
                        virtual double operator () (std::vector<double> &) = 0;
                        virtual ~Scanner_Function_Base(){}
                };
		
                class Scanner_Function : public Scanner_Function_Base
                {
                public:
                        Scanner_Function (std::map<std::string, primary_model_functor *> &functorMap, Graphs::DependencyResolver *dependencyResolver, Priors::CompositePrior *prior, std::string purpose) : Scanner_Function_Base (functorMap, dependencyResolver, prior, purpose) 
                        {
                        }
			
                        virtual double operator () (std::vector<double> &in)
                        {
                                double ret = 0;
                                
                                outputHandler::out.defout();
                                
                                setParameters(in);
                                
                                //std::vector<Graphs::VertexID> OL = dependencyResolver.getObsLikeOrder();
                                std::cout << "Number of vertices to calculate: " << vertices.size() << std::endl;
                                for (std::vector<Graphs::VertexID>::iterator it = vertices.begin(); it != vertices.end(); ++it)
                                {
                                        std::cout << "__________calculating vertex " << *it << std::endl;
                                        calcObsLike(*it);
                                        std::cout << "----------done " << std::endl;
                                        //dependencyResolver.notifyOfInvalidation(*it);
                                        ret += getObsLike(*it);
                                        std::cout << "...collected double" << endl;
                                }
				
                                resetAll();
                                
                                outputHandler::out.redir("scanner");
				
                                return ret;
                        }
                };
                
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
                
                class IniFileInterface_Base
                {
                public:
                        virtual std::string pluginName() = 0;
                        virtual std::string fileName() = 0;
                        virtual std::string getValue(std::string in) = 0;
                        virtual ~IniFileInterface_Base(){};
                };
                
                class IniFileInterface : public IniFileInterface_Base
                {
                private:
                        const IniParser::IniFile *boundIniFile;
                        std::string file;
                        std::string name;
                        
                public:
                        IniFileInterface(const IniParser::IniFile &iniFile) : boundIniFile(&iniFile)
                        {       
                                bool redirect = false;
                                if (iniFile.hasKey("enable_redirect"))
                                {
                                        redirect = iniFile.getValue<bool>("enable_redirect");
                                }

                                if (redirect)
                                {
                                        if (iniFile.hasKey("redirect_output", "scanner"))
                                        {
                                                std::string file = iniFile.getValue<std::string>("redirect_output", "scanner");
                                                
                                                outputHandler::out.set("scanner", file);
                                        }
                                }
                                
                                if (iniFile.hasKey("scanner", "file_path"))
                                {
                                        file = iniFile.getValue<std::string>("scanner", "file_path");

                                        if (boundIniFile->hasKey("scanner", "module")) 
                                        {
                                                name = iniFile.getValue<std::string>("scanner", "module");
                                        }
                                        else
                                        {
                                                name = "";
                                        }
                                }
                                else
                                {
                                        file = "";
                                        name = "";
                                }
                        }
                        
                        std::string pluginName(){return name;};
                        
                        std::string fileName(){return file;};
                        
                        std::string getValue(std::string in)
                        {
                                if (boundIniFile->hasKey(name.c_str(), in.c_str()))
                                {
                                        return boundIniFile->getValue<std::string>(name.c_str(), in.c_str());
                                }
                                else
                                {
                                        return std::string("");
                                }
                        }
                        
                        ~IniFileInterface(){}
                };
        }
}

#endif
