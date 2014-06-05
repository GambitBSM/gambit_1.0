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
///  \date 2013 July
///  \date 2014 Feb
///
///  \author Pat Scott
///    (patscott@physics.mcgill.ca)
///  \date 2013 Aug
///  \date 2014 May, June
///
///  *********************************************

#include "likelihood_container.hpp"


namespace Gambit
{

  Likelihood_Container_Base::Likelihood_Container_Base(const std::map<str, primary_model_functor *> &functorMap, 
   DRes::DependencyResolver &dependencyResolver, Priors::CompositePrior &prior, const str &purpose) 
  : dependencyResolver(dependencyResolver), 
    realParameters(prior.getShownParameters().size()), 
    prior(prior),
    functorMap(functorMap)
  {
    // Find subset of vertices that match requested purpose
    target_vertices = dependencyResolver.getObsLikeOrder();
    int size = 0;
    auto it = target_vertices.begin();
    std::for_each (target_vertices.begin(), target_vertices.end(), [&] (DRes::VertexID &vert)
    {
      if (dependencyResolver.getIniEntry(vert)->purpose == purpose)
      {
        *(it++) = vert;
        size++;
      }
      else
      {
        aux_vertices.push_back(vert);
      }
    });

    target_vertices.resize(size);
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
    
    std::transform (prior.getShownParameters().begin(), prior.getShownParameters().end(), realParameters.begin(), [&] (const str &par) -> double
    {
      return parameterMap[par];
    });
      
    std::for_each (functorMap.begin(), functorMap.end(), [&] (std::pair<str, primary_model_functor *> act)
    {
      auto paramkeys = act.second->getcontentsPtr()->getKeys();
      std::for_each (paramkeys.begin(), paramkeys.end(), [&] (str &par)
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
  const std::vector<str>& Likelihood_Container_Base::getKeys() const {return prior.getShownParameters();}

  void Likelihood_Container_Base::print(double in, const str &type) const
  {
    //stuff here;
  }
		

// Methods for Likelihood_Container class.

  /// Constructor
  Likelihood_Container::Likelihood_Container (const std::map<str, primary_model_functor *> &functorMap, 
   DRes::DependencyResolver &dependencyResolver, IniParser::IniFile &iniFile, Priors::CompositePrior &prior, const str &purpose) :
   min_valid_lnlike (iniFile.getValue<double>("likelihood", "model_invalid_for_lnlike_below")),
   Likelihood_Container_Base (functorMap, dependencyResolver, prior, purpose)
  {}
<<<<<<< HEAD
  
  double Likelihood_Container::operator() (const std::vector<double> &in)
=======
    
  /// Evaluate total likelihood function
  // TODO sort out print statements for invalid points and invalid observables associated with otherwise valid points (ie ones with valid like calculations).				
  double Likelihood_Container::operator() (std::vector<double> &in)
>>>>>>> 792a7e7f2bacafa62624d748cc004f07421880e8
  {
    double lnlike = 0;
    bool compute_aux = true;     
    Scanner::outputHandler::out.defout();
    setParameters(in);      
    logger() << LogTags::core << "Number of vertices to calculate: " << (target_vertices.size() + aux_vertices.size()) << EOM;
      
    // First work through the target functors, i.e. the ones contributing to the likelihood.
    for (auto it = target_vertices.begin(), end = target_vertices.end(); it != end; ++it)
    {
      logger() << LogTags::core << "Calculating likelihood vertex " << *it << EOM;
      try
      {
        calcObsLike(*it);
        lnlike += getObsLike(*it);
        if (lnlike <= min_valid_lnlike) dependencyResolver.invalidatePointAt(*it);
        logger() << LogTags::core << "done with likelihood vertex " << *it << EOM;
      }
      // Catch points that are invalid, either due to low like or pathology.  Skip the rest of the vertices if a point is invalid.
      catch(Gambit::invalid_point_exception& e)
      {
        lnlike = min_valid_lnlike;
        logger() << LogTags::core << "Point invalidated by " << e.thrower()->origin() << "::" << e.thrower()->name() << "." << EOM;
        compute_aux = false;
        break;
      }
    }

<<<<<<< HEAD
  double Likelihood_Container_Minimal::operator() (const std::vector<double> &in)
  {
    double ret = 0;
      
    Scanner::outputHandler::out.defout();
      
    setParameters(in);
      
    //std::vector<DRes::VertexID> OL = dependencyResolver.getObsLikeOrder();
    std::cout << "Number of vertices to calculate: " << vertices.size() << std::endl;
      
    for (auto it = vertices.begin(), end = vertices.end(); it != end; ++it)
=======
    // If none of the likelihood calculations have invalidated the point, calculate the additional auxiliary observables.
    if (compute_aux)
>>>>>>> 792a7e7f2bacafa62624d748cc004f07421880e8
    {
      for (auto it = aux_vertices.begin(), end = aux_vertices.end(); it != end; ++it)
      {
        logger() << LogTags::core << "Calculating auxiliary vertex " << *it << EOM;
        try
        {
          calcObsLike(*it);
          logger() << LogTags::core << "done with auxiliary vertex " << *it << EOM;;
        }
        catch(Gambit::invalid_point_exception& e)
        {
          logger() << LogTags::core << "The calculation was declared invalid by " << e.thrower()->origin() << "::" << e.thrower()->name() << ".  *Shrug*." << EOM;
          // FIXME Pat: not sure what else to do here exactly when a calculation of an auxiliary quantity fails but the likelihood is ok.
        }
      }
    }
      
    resetAll();     
    Scanner::outputHandler::out.redir("scanner");				
    return lnlike;
  }

  
}

