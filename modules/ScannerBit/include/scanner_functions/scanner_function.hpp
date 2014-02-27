//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Scanner function implementations.
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

#ifndef __scanner_function_hpp__
#define __scanner_function_hpp__

namespace Gambit
{
        namespace Scanner
        {       
                class Scanner_Function_Base : public Function_Base
                {
                protected:
                        std::vector<Graphs::VertexID> vertices;
                        Graphs::DependencyResolver *dependencyResolver;
                        std::vector<double> realParameters;
                        Priors::CompositePrior *prior;
                        std::map<std::string, double> parameterMap;
                        std::map<std::string, primary_model_functor *> functorMap;
			
                public:
                        Scanner_Function_Base(std::map<std::string, primary_model_functor *> &functorMap, Graphs::DependencyResolver &dependencyResolver, Priors::CompositePrior &prior, std::string &purpose) : functorMap(functorMap), dependencyResolver(&dependencyResolver), prior(&prior)
                        {
                                // Find subset of vertices that match requested purpose
                                vertices = dependencyResolver.getObsLikeOrder();
                                int size = 0;
                                for (std::vector<Graphs::VertexID>::iterator it = vertices.begin(), it2 = vertices.begin(); it != vertices.end(); ++it)
                                {
                                        if (dependencyResolver.getIniEntry(*it)->purpose == purpose)
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
                        
                        std::vector<double> & getParameters(){return realParameters;}
                        std::vector<std::string> & getKeys(){return prior->getShownParameters();}
                };
		
                class Scanner_Function : public Scanner_Function_Base
                {
                public:
                        Scanner_Function (std::map<std::string, primary_model_functor *> &functorMap, Graphs::DependencyResolver &dependencyResolver, Priors::CompositePrior &prior, std::string &purpose) : Scanner_Function_Base (functorMap, dependencyResolver, prior, purpose) 
                        {
                        }
			
                        double operator () (std::vector<double> &in)
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
                
                LOAD_SCANNER_FUNCTION(Scanner_Function, Scanner_Function)
        }
}

#endif
