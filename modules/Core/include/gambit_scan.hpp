//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
/// \file
///  Master Likelihood container
///
///  *********************************************
///
///  Authors
///  =======
///
///  (add name and date if you modify)
///
///  \author Christoph Weniger (c.weniger@uva.nl)
///  \date May 20 2013
///  \date June 03 2013
///
///
///  *********************************************

#ifndef __gambit_scan_hpp__
#define __gambit_scan_hpp__

#include <vector>
#include <unordered_map>
#include <string>
#include <functors.hpp>
#include <graphs.hpp>
#include <functors.hpp>

namespace GAMBIT
{
	namespace Scanner
	{
		using namespace GAMBIT;
		
		class Gambit_Scanner
		{
			
		protected:
			vector <double> upper_limits;
			vector <double> lower_limits;
			vector <std::string> keys;
			vector <std::string> functions;
			Graphs::DependencyResolver *dependencyResolver;
                        std::vector <primary_model_functor *> functors;
                        std::vector <std::string> functorsMembers;
			std::string name;
                        bool isFuncFull;
			
		public:
			Gambit_Scanner (Graphs::DependencyResolver &a, std::map<std::string, primary_model_functor *> &activemodelFunctorMap, IniParser::IniFile &iniFile, std::string name) 
					: dependencyResolver(&a), name(name), ifFuncFull(true)
			{
				functions = iniFile.getValue<std::vector<std::string>>(name, "functions");
				
                                std::unordered_map <std::string, std::pair<std::string, primary_model_functor *>> tempMap;
				for(std::map<std::string, primary_model_functor *>::iterator it = activemodelFunctorMap.begin(); it != activemodelFunctorMap.end(); it++) 
				{
					//it->first = model name, it->second = functor pointer
					std::vector <std::string> paramkeys = it->second->getcontentsPtr()->getKeys();
					for (std::vector<std::string>::iterator it2 = paramkeys.begin(); it2 != paramkeys.end(); ++it2)
					{
						string name = it->first + string("::") + *it2;
						tempMap[name].first = *it2;
						tempMap[name].second = it->second;
					}
				}
				
				keys = iniFile.getParameterList();
				lower_limits.resize(keys.size());
				upper_limits.resize(keys.size());
                                functors.resize(keys.size());
                                functorsMembers.resize(keys.size());
                                
				std::vector<double>::iterator it_l = lower_limits.begin(), it_u = upper_limits.begin();
                                std::vector<primary_model_functor *>::iterator functors_it = functors.begin();
                                int funcSize = 0;
                                
				for (std::vector<std::string>::iterator it = keys.begin(), funcMem_it = functorsMembers.begin(); it != keys.end(); ++it, ++it_l, ++it_u)
				{
					std::pair<double, double> range = iniFile.getParameterEntry< std::pair<double, double> >(*it, "range");
					std::string modelname = iniFile.getParameterEntry<std::string>(*it, "model");
					*it = modelname + string("::") + *it;
					if (range.first > range.second)
					{
						double temp = range.first;
						range.first = range.second;
						range.second = temp;
					}
					*it_l = range.first;
					*it_u = range.second;
                                        std::unordered_map <std::string, std::pair<std::string, primary_model_functor *>> mit = tempMap.find(*it);
                                        if (mit != unordered_map::end)
                                        {
                                                *(functors_it++) = mit->second;
                                                *(funcMem_it++) = mit->first;
                                                funcSize++;
                                        }
				}
				
				if (funcSize != keys.size())
                                {
                                        funcFull = false;
                                        functors.resize(funcSize);
                                        functorsMembers.resize(funcSize);
                                }
				
			}
			
			void InputParameters (std::vector<double> &vec) 
			{
				std::vector<double>::iterator it2 = vec.begin();
                                std::vector<std:string>::iterator it3 = functersMembers.begin();
				for (std::vector<primary_model_functor *>::iterator it = keys.begin(); it != keys.end(); ++it, ++it2 ,++it3)
					it->getcontentsPtr()->setValue(*it3, *it2);
			}
			
			void CalcPropose(Graphs::VertexID &it) {dependencyResolver->calcObsLike(it);}
			double GetPropose(Graphs::VertexID &it) {return dependencyResolver->getObsLike(it);}
			
			const std::string Name() const {return name;}
			
			void Reset() {dependencyResolver->resetAll();}
			
			bool IniHaveAllParameters(){return isFuncFull;}
			
			virtual int Run() = 0;
			
			friend class Scanner_Function_Base;
		};
		
		class Scanner_Function_Base
		{
		protected:
			std::vector<Graphs::VertexID> vertices;
			Gambit_Scanner *parent;
			
		public:
			Scanner_Function_Base(Gambit_Scanner *a, int funcNum) : parent(a)
			{
				vertices = parent->dependencyResolver->getObsLikeOrder();
                                
				int size = 0;
				for (std::vector<Graphs::VertexID>::iterator it = vertices.begin(), it2 = vertices.begin(); it != vertices.end(); ++it)
				{
					if (parent->dependencyResolver->getIniEntry(*it)->purpose == parent->functions[funcNum])
					{
						*it2 = *it;
						it2++;
						size++;
					}
				}
				vertices.resize(size);
			}
		};
		
		template <class output, class input>
		class Scanner_Function : public Scanner_Function_Base
		{
		public:
			Scanner_Function (Gambit_Scanner *a, int funcNum) : Scanner_Function_Base (a, funcNum) {}
			
			virtual output & operator () (input in)
			{
				//Ben stuff
				//std::vector<Graphs::VertexID> OL = dependencyResolver.getObsLikeOrder();
			}
		};
		
		template <>
		class Scanner_Function <double, std::vector<double>> : public Scanner_Function_Base
		{
		public:
			Scanner_Function (Gambit_Scanner *a, int funcNum) : Scanner_Function_Base (a, funcNum) {}
			
			virtual double operator () (std::vector<double> &in)
			{
				parent->InputParameters(in);

				//std::vector<Graphs::VertexID> OL = dependencyResolver.getObsLikeOrder();
				double ret = 0;

				for (std::vector<Graphs::VertexID>::iterator it = vertices.begin(); it != vertices.end(); ++it)
				{
					parent->CalcPropose(*it);
					//dependencyResolver.notifyOfInvalidation(*it);
					ret += parent->GetPropose(*it);
				}
				
				parent->Reset();
				
				return ret;
			}
		};
		

	};
};

#endif
