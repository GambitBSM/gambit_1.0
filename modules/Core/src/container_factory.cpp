//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Likelihood container factory implementations.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///    (c.weniger@uva.nl)
///  \date 2013 May, June, July
///
///  \author Gregory Martinez
///    (gregory.david.martinez@gmail.com)
///  \date 2013 July 2013 Feb 2014
///
///  \author Pat Scott
///    (patscott@physics.mcgill.ca)
///  \date 2013 Aug
///  \date 2014 Mar, May
///
///  *********************************************

#include "gambit/Core/likelihood_container.hpp"


namespace Gambit
{

  Likelihood_Container_Factory::Likelihood_Container_Factory(const gambit_core &core, 
   DRes::DependencyResolver &dependencyResolver, IniParser::IniFile &iniFile, Priors::CompositePrior &prior)
  : dependencyResolver(dependencyResolver), 
    prior(prior),
    iniFile(iniFile)
  {
    functorMap = core.getActiveModelFunctors();
    
    std::vector<std::string> priorKeys = prior.getParameters();
    std::vector<std::string> gambitKeys;
    
    for (std::map<std::string, primary_model_functor *>::iterator act_it = functorMap.begin(); act_it != functorMap.end(); act_it++)
    {
      std::vector <std::string> paramkeys = act_it->second->getcontentsPtr()->getKeys();
      for (std::vector<std::string>::iterator it = paramkeys.begin(); it != paramkeys.end(); it++)
      {
        gambitKeys.push_back(act_it->first + "::" + *it);
      }
    }
    
    std::unordered_set<std::string> priorSet(priorKeys.begin(), priorKeys.end());
    std::unordered_set<std::string> gambitSet(gambitKeys.begin(), gambitKeys.end());
    
    for (std::vector<std::string>::const_iterator it = gambitKeys.begin(); it != gambitKeys.end(); it++)
    {
      if (priorSet.find(*it) == priorSet.end())
      {
        std::stringstream err;
        err << "Parameter " << *it << " is required by gambit but is not in the inifile." << std::endl;
        Scanner::scan_error().raise(LOCAL_INFO, err.str());
      }
    }
    
    for (std::vector<std::string>::iterator it = priorKeys.begin(); it != priorKeys.end(); it++)
    {
      if (gambitSet.find(*it) == gambitSet.end())
      {
        std::stringstream err;
        err << "Parameter " << *it << " is in the inifile but is not required by gambit." << std::endl;
        Scanner::scan_error().raise(LOCAL_INFO, err.str());
      }
    }
  }
    
  void * Likelihood_Container_Factory::operator() (const std::string &purpose) const
  {
    return __scanner_factories__["Scanner_Function"](functorMap, dependencyResolver, iniFile, prior, purpose);
  }
}
