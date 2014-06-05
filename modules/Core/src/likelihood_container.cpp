//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Likelihood container implementations.
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

#include "likelihood_container.hpp"


namespace Gambit
{

  Likelihood_Container_Base::Likelihood_Container_Base(const std::map<std::string, primary_model_functor *> &functorMap, 
   DRes::DependencyResolver &dependencyResolver, Priors::CompositePrior &prior, const std::string &purpose) 
  : dependencyResolver(dependencyResolver), 
    realParameters(prior.getShownParameters().size()), 
    prior(prior), functorMap(functorMap)
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
			
  inline void Likelihood_Container_Base::calcObsLike(DRes::VertexID &it)
  {
    dependencyResolver.calcObsLike(it);
  }

  inline double Likelihood_Container_Base::getObsLike(DRes::VertexID &it)
  {
    return dependencyResolver.getObsLike(it);
  }
    
  void Likelihood_Container_Base::setParameters (const std::vector<double> &vec) 
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
    
  void Likelihood_Container_Base::resetAll() 
  {
    dependencyResolver.resetAll();
  }
    
  const std::vector<double>& Likelihood_Container_Base::getParameters() const  {return realParameters;} 
  const std::vector<std::string>& Likelihood_Container_Base::getKeys() const {return prior.getShownParameters();}

  void Likelihood_Container_Base::print(double in, const std::string &type) const
  {
    //stuff here;
  }
		
  Likelihood_Container::Likelihood_Container (const std::map<std::string, primary_model_functor *> &functorMap, 
   DRes::DependencyResolver &dependencyResolver, Priors::CompositePrior &prior, const std::string &purpose)
  : Likelihood_Container_Base (functorMap, dependencyResolver, prior, purpose)
  {}
  
  double Likelihood_Container::operator() (const std::vector<double> &in)
  {
    double ret = 0;
      
    Scanner::outputHandler::out.defout();
      
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
      
    Scanner::outputHandler::out.redir("scanner");
				
    return ret;
  }
  

  Likelihood_Container_Minimal::Likelihood_Container_Minimal (const std::map<std::string, primary_model_functor *> &functorMap, 
   DRes::DependencyResolver &dependencyResolver, Priors::CompositePrior &prior, const std::string &purpose)
  : Likelihood_Container_Base (functorMap, dependencyResolver, prior, purpose)
  {}

  double Likelihood_Container_Minimal::operator() (const std::vector<double> &in)
  {
    double ret = 0;
      
    Scanner::outputHandler::out.defout();
      
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
      
    Scanner::outputHandler::out.redir("scanner");
      
    return ret;
  }

}

