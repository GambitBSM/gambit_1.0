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
///  \date July 2013
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
			Graphs::DependencyResolver *dependencyResolver;
			std::unordered_map <std::string, std::pair<std::string, primary_model_functor *>> parameterFunctorMap;
			std::string name; // Sampler name
			
		public:
			Gambit_Scanner (Graphs::DependencyResolver &a, std::map<std::string, primary_model_functor *> &activemodelFunctorMap, IniParser::IniFile &iniFile, std::string name) 
					: dependencyResolver(&a), name(name)
			{
        cout << "Setting up Gambit Scanner" << endl;
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
						parameterFunctorMap[name].first = *it2;
						parameterFunctorMap[name].second = it->second;
					}
				}

        cout << "- Total number of model parameters: " << parameterFunctorMap.size() << endl;

        // Get model parameters from the inifile
			  vector <std::string> modelNames = iniFile.getModelNames();

        // Set keys to MODEL::PARAMETER values, order like in the inifile
        // Set lower_limits, upper_limits
				lower_limits.resize(parameterFunctorMap.size());
				upper_limits.resize(parameterFunctorMap.size());
        int size = 0;
				std::vector<double>::iterator it_l = lower_limits.begin(), it_u = upper_limits.begin();
        for (std::vector<std::string>::iterator it = modelNames.begin(); it != modelNames.end(); ++it)
        {
          vector <std::string> parameterNames = iniFile.getModelParameters(*it);
          for (std::vector<std::string>::iterator it2 = parameterNames.begin(); it2 != parameterNames.end(); ++it2, ++it_l, ++it_u, ++size)
          {
            if (not iniFile.hasModelParameterEntry(*it, *it2, "range"))
            {
              cout << "ERROR: No scan range specified for parameter " << *it2 << " of model " << *it << endl;
              exit(1);
            }
            std::pair<double, double> range = iniFile.getModelParameterEntry< std::pair<double, double> >(*it, *it2, "range");
            // Is this parameter required by the selected models?
            if ( parameterFunctorMap.find(*it + string("::") + *it2) == parameterFunctorMap.end() )
            {
              cout << "ERROR: " << *it2 << " not required for model " << *it << endl;
              exit(1);
            }
            keys.push_back(*it + string("::") + *it2);
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

        // Check that all parameters are present in inifile
        if ( size != parameterFunctorMap.size() )
        {
          cout << "ERROR: not all model parameters specified in inifile." << endl;
          cout << "Required parameters:" << endl;
          for (
              std::unordered_map <std::string, std::pair<std::string, primary_model_functor *>>::iterator it = parameterFunctorMap.begin();
              it != parameterFunctorMap.end(); ++it)
          {
              cout << it->first << endl;
          }
          exit(1);
        }
			}
			
			void setParameters (std::vector<double> &vec) 
			{
				std::vector<double>::iterator it2 = vec.begin();
				for (std::vector<std::string>::iterator it = keys.begin(); it != keys.end(); ++it, ++it2)
        {
          cout << "Setting variable " << parameterFunctorMap[*it].first;
          cout << " with " << *it2 << endl;
					parameterFunctorMap[*it].second->getcontentsPtr()->setValue(parameterFunctorMap[*it].first, *it2);
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
			Scanner_Function_Base(Gambit_Scanner *a, std::string purpose) : parent(a)
			{
        // Find subset of vertices that match requested purpose
				vertices = parent->dependencyResolver->getObsLikeOrder();
				int size = 0;
				for (std::vector<Graphs::VertexID>::iterator it = vertices.begin(), it2 = vertices.begin(); it != vertices.end(); ++it)
				{
					if (parent->dependencyResolver->getIniEntry(*it)->purpose == purpose)
					{
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
			Scanner_Function (Gambit_Scanner *a, std::string purpose) : Scanner_Function_Base (a, purpose) {}
			
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
			Scanner_Function (Gambit_Scanner *a, std::string purpose) : Scanner_Function_Base (a, purpose) {}
			
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
