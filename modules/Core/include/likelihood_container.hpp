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
                        std::vector<DRes::VertexID> vertices;
                        std::vector<DRes::VertexID> vertices_phantom;
                        DRes::DependencyResolver &dependencyResolver;
                        std::vector<double> realParameters;
                        Priors::CompositePrior &prior;
                        std::map<std::string, double> parameterMap;
                        std::map<std::string, primary_model_functor *> functorMap;
			
                public:
                        Scanner_Function_Base(const std::map<std::string, primary_model_functor *> &functorMap, DRes::DependencyResolver &dependencyResolver, Priors::CompositePrior &prior, const std::string &purpose) : dependencyResolver(dependencyResolver), realParameters(prior.getShownParameters().size()), prior(prior), functorMap(functorMap)
                        {
                                // Find subset of vertices that match requested purpose
                                vertices = dependencyResolver.getObsLikeOrder();
                                int size = 0;
                                auto it = vertices.begin();
                                std::for_each (vertices.begin(), vertices.end(), [&] (DRes::VertexID &vert)
                                {
                                        if (dependencyResolver.getIniEntry(vert)->purpose == purpose)
                                        {
                                                *(it++) = vert;
                                                size++;
                                        }
                                        else
                                        {
                                                vertices_phantom.push_back(vert);
                                        }
                                });

                                vertices.resize(size);
                        }
			
                        inline void calcObsLike(DRes::VertexID &it)
                        {
                                dependencyResolver.calcObsLike(it);
                        }

                        inline double getObsLike(DRes::VertexID &it)
                        {
                                return dependencyResolver.getObsLike(it);
                        }
                        
                        void setParameters (std::vector<double> &vec) 
                        {
                                prior.transform(vec, parameterMap);
                                
                                std::transform (prior.getShownParameters().begin(), prior.getShownParameters().end(), realParameters.begin(), [&] (const std::string &par) -> double
                                {
                                        return parameterMap[par];
                                });
                                
                                std::for_each (functorMap.begin(), functorMap.end(), [&] (std::pair<std::string, primary_model_functor *> act)
                                {
                                        auto paramkeys = act.second->getcontentsPtr()->getKeys();
                                        std::for_each (paramkeys.begin(), paramkeys.end(), [&] (std::string &par)
                                        {
                                                //std::cout << (act_it->first + "::" + *it) << "   " << parameterMap[act_it->first + "::" + *it] << std::endl;
                                                act.second->getcontentsPtr()->setValue(par, parameterMap[act.first + "::" + par]);
                                        });
                                });
                                //getchar();
                        }
                        
                        void resetAll() 
                        {
                                dependencyResolver.resetAll();
                        }
                        
                        const std::vector<double> & getParameters() const {return realParameters;}
                        const std::vector<std::string> & getKeys() const {return prior.getShownParameters();}
                };
		
                class Scanner_Function : public Scanner_Function_Base
                {
                public:
			//#ifndef NO_GCC_4_7
                        Scanner_Function (const std::map<std::string, primary_model_functor *> &functorMap, DRes::DependencyResolver &dependencyResolver, Priors::CompositePrior &prior, const std::string &purpose) : Scanner_Function_Base (functorMap, dependencyResolver, prior, purpose) {}
			//#else                        
                        //using Scanner_Function_Base::Scanner_Function_Base;
			//#endif			

                        double operator () (std::vector<double> &in)
                        {
                                double ret = 0;
                                
                                outputHandler::out.defout();
                                
                                setParameters(in);
                                
                                //std::vector<DRes::VertexID> OL = dependencyResolver.getObsLikeOrder();
                                std::cout << "Number of vertices to calculate: " << (vertices.size() + vertices_phantom.size()) << std::endl;
                                
                                for (auto it = vertices_phantom.begin(), end = vertices_phantom.end(); it != end; ++it)
                                {
                                        std::cout << "__________calculating vertex " << *it << std::endl;
                                        calcObsLike(*it);
                                        std::cout << "----------done " << std::endl;
                                }
                                
                                for (auto it = vertices.begin(), end = vertices.end(); it != end; ++it)
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
                
                class Scanner_Function_Minimal : public Scanner_Function_Base
                {
                public:
                        //#ifndef NO_GCC_4_7
                        Scanner_Function_Minimal (const std::map<std::string, primary_model_functor *> &functorMap, DRes::DependencyResolver &dependencyResolver, Priors::CompositePrior &prior, const std::string &purpose) : Scanner_Function_Base (functorMap, dependencyResolver, prior, purpose) {}
                        //#else                        
                        //using Scanner_Function_Base::Scanner_Function_Base;
                        //#endif                        

                        double operator () (std::vector<double> &in)
                        {
                                double ret = 0;
                                
                                outputHandler::out.defout();
                                
                                setParameters(in);
                                
                                //std::vector<DRes::VertexID> OL = dependencyResolver.getObsLikeOrder();
                                std::cout << "Number of vertices to calculate: " << vertices.size() << std::endl;
                                
                                for (auto it = vertices.begin(), end = vertices.end(); it != end; ++it)
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
                LOAD_SCANNER_FUNCTION(Scanner_Function_Minimal, Scanner_Function_Minimal)
        }
}

#endif
