//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Likelihood container declarations.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///    (c.weniger@uva.nl)
///  \date 2013 May, June, July
//
///  \author Gregory Martinez
///    (gregory.david.martinez@gmail.com)
///  \date 2013 July 2013 Feb 2014
///
///  \author Pat Scott
///    (patscott@physics.mcgill.ca)
///  \date 2013 Aug
///  \date 2014 May
///
///  *********************************************

#ifndef __likelihood_container_hpp__
#define __likelihood_container_hpp__

#include "container_factory.hpp"


namespace Gambit
{

  class Likelihood_Container_Base : public Scanner::Function_Base
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
      Likelihood_Container_Base(const std::map<std::string, primary_model_functor *> &functorMap, 
       DRes::DependencyResolver &dependencyResolver, Priors::CompositePrior &prior, const std::string &purpose); 
      inline void calcObsLike(DRes::VertexID &it);
      inline double getObsLike(DRes::VertexID &it);
      void setParameters (std::vector<double> &vec); 
      void resetAll();
      const std::vector<double> & getParameters() const;
      const std::vector<std::string> & getKeys() const;
  };
		
  class Likelihood_Container : public Likelihood_Container_Base
  {
    public:
      Likelihood_Container (const std::map<std::string, primary_model_functor *> &functorMap, 
       DRes::DependencyResolver &dependencyResolver, Priors::CompositePrior &prior, const std::string &purpose);
      double operator() (std::vector<double> &in);
  };
  
  class Likelihood_Container_Minimal : public Likelihood_Container_Base
  {
    public:
      Likelihood_Container_Minimal (const std::map<std::string, primary_model_functor *> &functorMap, 
       DRes::DependencyResolver &dependencyResolver, Priors::CompositePrior &prior, const std::string &purpose);
      double operator () (std::vector<double> &in);
  };
  
  LOAD_SCANNER_FUNCTION(Scanner_Function, Likelihood_Container)
  LOAD_SCANNER_FUNCTION(Scanner_Function_Minimal, Likelihood_Container_Minimal)

}

#endif
