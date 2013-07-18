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
#include <functors.hpp>
#include <graphs.hpp>
#include <functors.hpp>

namespace Gambit
{
	namespace Scanner
	{
		class Gambit_Scanner
		{
		protected:
			vector <double> upper_limit;
			vector <double> lower_limit;
			vector <std::string> param_names;
			Graphs::DependencyResolver *dependencyResolver;
			vector <primary_model_functor *> functors;
			
			Gambit_Scanner (Graphs::DependencyResolver &a, IniParser::IniFile &inifile, std::string name) : dependencyResolver(&a)
			{
				param_names = iniFile.getParameterList();
				for (vector<std::string>::iterator it = param_names.begin(); it != param_names.end(); ++it)
				{
					std::pair<double, double> range = iniFile.getParameterEntry< std::pair<double, double> >(*it, "range");
					if (range.first > range.second)
					{
						double temp = range.first;
						range.first = range.second;
						range.second = temp;
					}
					lower_limit.push_back(range.first);
					upper_limit.push_back(range.second);
				}
			}
			
			virtual int Run() = 0;
		}
		
		class Scanner_Function_Base
		{
		protected:
			// Storage
			std::vector<Graphs::VertexID> vertices;
			Gambit::Scanner::Gambit_Scanner *parent
			
			
		public:
			// Construct MasterLike from Graphs Output and inifile
			Scanner_Function_Base(Gambit::Scanner::Gambit_Scanner *a, int funcNum) : parent(a)
			{
				vertices = dependencyResolver.getObsLikeOrder();
				int size = 0;
				for (std::vector<Graphs::VertexID>::iterator it = vertices.begin(), it2 = vertices.begin; it != vertices.end(); ++it)
				{
					if (dependencyResolver->getIniEntry(*it)).obsType == key)
					{
						*(++it2) = *it;
						size++;
					}
				}
				vertices.resize(size);
			}
			
			void Reset() {dependencyResolver.resetAll();}
			
			std::vector <std:string> GetParameterValues(){}
		};
		
		template <class output, class input>
		class Scanner_Function : public Scanner_Function_Base
		{
		public:
			Scanner_Function (Graphs::DependencyResolver &a, std::string key) : Scanner_Function_Base (a, key) {}
			
			virtual output & operator () (input in)
			{
				//Ben stuff
				//std::vector<Graphs::VertexID> OL = dependencyResolver.getObsLikeOrder();
				output ret = 0;
				for (std::vector<Graphs::VertexID>::iterator it = vertices.begin(); it != vertices.end(); ++it)
				{
					dependencyResolver.calcObsLike(*it);
					//dependencyResolver.notifyOfInvalidation(*it);
					output ret += dependencyResolver.getObsLike(*it);
				}
				dependencyResolver.resetAll();
			}
		};
		
		template <>
		class Scanner_Function <double *, double *> : public Scanner_Function_Base
		{
		public:
			Scanner_Function (Graphs::DependencyResolver &a, std::string key) : Scanner_Function_Base (a, key) {}
			
			virtual output & operator () (input in)
			{
				//Ben stuff
				//std::vector<Graphs::VertexID> OL = dependencyResolver.getObsLikeOrder();
				output ret = 0;
				for (std::vector<Graphs::VertexID>::iterator it = vertices.begin(); it != vertices.end(); ++it)
				{
					dependencyResolver.calcObsLike(*it);
					//dependencyResolver.notifyOfInvalidation(*it);
					output ret += dependencyResolver.getObsLike(*it);
				}
				dependencyResolver.resetAll();
			}
		};
		

	};
};

#endif
