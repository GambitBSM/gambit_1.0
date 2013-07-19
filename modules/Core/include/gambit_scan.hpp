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
			vector <std::string> functions; // TODO: functions to scan over, this is scanner specific --> move to crapsampler
			Graphs::DependencyResolver *dependencyResolver;
			std::unordered_map <std::string, std::pair<std::string, primary_model_functor *>> functors; // Rename to parameterFunctorMap
			std::string name; // Sampler name
			
		public:
			Gambit_Scanner (Graphs::DependencyResolver &a, std::map<std::string, primary_model_functor *> &activemodelFunctorMap, IniParser::IniFile &iniFile, std::string name) 
					: dependencyResolver(&a), name(name)
			{
				functions = iniFile.getValue<std::vector<std::string>>(name, "functions"); // TODO: Remove
				
        // Loop over active models
				for(std::map<std::string, primary_model_functor *>::iterator it = activemodelFunctorMap.begin(); it != activemodelFunctorMap.end(); it++) 
				{
          // Loop over model parameters
					std::vector <std::string> paramkeys = it->second->getcontentsPtr()->getKeys();
					for (std::vector<std::string>::iterator it2 = paramkeys.begin(); it2 != paramkeys.end(); ++it2)
					{
            // Constrcut map
            // MODEL::PARAMETER -> (PARAMETER, POINTER_TO_MODEL)
						string name = it->first + string("::") + *it2;
						functors[name].first = *it2;
						functors[name].second = it->second;
					}
				}
				
        // Get model parameters from the inifile
				keys = iniFile.getParameterList();

        // Set lower_limits, upper_limits
        // Set keys to composite keys
				lower_limits.resize(keys.size());
				upper_limits.resize(keys.size());
				std::vector<double>::iterator it_l = lower_limits.begin(), it_u = upper_limits.begin();
				for (std::vector<std::string>::iterator it = keys.begin(); it != keys.end(); ++it, ++it_l, ++it_u)
				{
					std::pair<double, double> range = iniFile.getParameterEntry< std::pair<double, double> >(*it, "range");
					std::string modelname = iniFile.getParameterEntry<std::string>(*it, "model");
          // Replace short PARAMETER key by MODEL::PARAMETER key
					*it = modelname + string("::") + *it;
					if (range.first > range.second)
					{
						double temp = range.first;
						range.first = range.second;
						range.second = temp;
					}
					*it_l = range.first;
					*it_u = range.second;
				}
			}
			
			void setParameters (std::vector<double> &vec) 
			{
				std::vector<double>::iterator it2 = vec.begin();
				for (std::vector<std::string>::iterator it = keys.begin(); it != keys.end(); ++it, ++it2)
        {
          cout << "Setting variable " << functors[*it].first;
          cout << " with " << *it2 << endl;
					functors[*it].second->getcontentsPtr()->setValue(functors[*it].first, *it2);
        }
			}
			
			void calcObsLike(Graphs::VertexID &it) 
      {
        dependencyResolver->calcObsLike(it);
      }

			double getObsLike(Graphs::VertexID &it) 
      {
        return dependencyResolver->getObsLike(it);
      }
			
			const std::string getName() const 
      {
        return name;
      }
			
			void resetAll() 
      {
        dependencyResolver->resetAll();
      }
			
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
        // Find subset of vertices that match requested funcNum
				vertices = parent->dependencyResolver->getObsLikeOrder();
				int size = 0;
				for (std::vector<Graphs::VertexID>::iterator it = vertices.begin(), it2 = vertices.begin(); it != vertices.end(); ++it)
				{
          cout << parent->functions[funcNum] << endl;
					cout << parent->dependencyResolver->getIniEntry(*it)->purpose << endl;
					if (parent->dependencyResolver->getIniEntry(*it)->purpose == parent->functions[funcNum])
					{
            cout << parent->functions[funcNum] << endl;
						*it2 = *it;
						it2++;
						size++;
					}
				}
        cout << size << endl;
				vertices.resize(size);
        cout << vertices << endl;
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
				double ret = 0;
				parent->setParameters(in);
				//std::vector<Graphs::VertexID> OL = dependencyResolver.getObsLikeOrder();
        std::cout << "Number of vertices to calculate: " << vertices.size() << std::endl;
				for (std::vector<Graphs::VertexID>::iterator it = vertices.begin(); it != vertices.end(); ++it)
				{
          std::cout << "__________calculating vertex " << *it << std::endl;
					parent->calcObsLike(*it);
          std::cout << "----------done " << std::endl;
					//dependencyResolver.notifyOfInvalidation(*it);
					ret += parent->getObsLike(*it);
          std::cout << "...collected double" << endl;
				}
				
				parent->resetAll();
				
				return ret;
			}
		};
	};
};

#endif
