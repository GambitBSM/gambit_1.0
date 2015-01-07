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
    for (auto vert_it = target_vertices.begin(), vert_end = target_vertices.end(); vert_it != vert_end; vert_it++)
    {
      if (dependencyResolver.getIniEntry(*vert_it)->purpose == purpose)
      {
        *(it++) = *vert_it;
        size++;
      }
      else
      {
        aux_vertices.push_back(*vert_it);
      }
    }

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
    
    auto real_it = realParameters.begin();
    for (auto par_it = prior.getShownParameters().begin(), par_end = prior.getShownParameters().end(); par_it != par_end; par_it++, real_it++)
    {
      *real_it = parameterMap[*par_it];
    }
      
    for (auto act_it = functorMap.begin(), act_end = functorMap.end(); act_it != act_end; act_it++)
    {
      auto paramkeys = act_it->second->getcontentsPtr()->getKeys();
      for (auto par_it = paramkeys.begin(), par_end = paramkeys.end(); par_it != par_end; par_it++)
      {
        //std::cout << (act_it->first + "::" + *it) << "   " << parameterMap[act_it->first + "::" + *it] << std::endl;
        act_it->second->getcontentsPtr()->setValue(*par_it, parameterMap[act_it->first + "::" + *par_it]);
      }
    }
    //getchar();
  }
    
  void Likelihood_Container_Base::resetAll() 
  {
    dependencyResolver.resetAll();
  }

  void Likelihood_Container_Base::print(double in, const str &type) const
  {
    //real stuff here to replace what is below;
    double tmp = in; tmp++; str tmp2 = type;
  }
		

// Methods for Likelihood_Container class.

  /// Constructor
  Likelihood_Container::Likelihood_Container (const std::map<str, primary_model_functor *> &functorMap, 
   DRes::DependencyResolver &dependencyResolver, IniParser::IniFile &iniFile, Priors::CompositePrior &prior, const str &purpose) :
   Likelihood_Container_Base (functorMap, dependencyResolver, prior, purpose),
   min_valid_lnlike (iniFile.getValue<double>("likelihood", "model_invalid_for_lnlike_below"))
  {}
   
  /// Evaluate total likelihood function
  // TODO sort out print statements for invalid points and invalid observables associated with otherwise valid points (ie ones with valid like calculations).				
  double Likelihood_Container::main (const std::vector<double> &in)
  {
    double lnlike = 0;
    bool compute_aux = true;     
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

    // If none of the likelihood calculations have invalidated the point, calculate the additional auxiliary observables.
    if (compute_aux)
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
    return lnlike;
  }

  
}

