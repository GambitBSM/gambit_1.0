//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Likelihood container factory declarations.
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

#ifndef __container_factory_hpp__
#define __container_factory_hpp__

#include <vector>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <set>
#include <string>

#include "functors.hpp"
#include "depresolver.hpp"
#include "priors_rollcall.hpp"
#include "scanner_utils.hpp"
#include "scan.hpp"

#define LOAD_SCANNER_FUNCTION(tag, ...) REGISTER(__scanner_factories__, tag, __VA_ARGS__)

namespace Gambit
{

  registry
  {
    typedef void* factory_type(const std::map<std::string, primary_model_functor *> &, 
     DRes::DependencyResolver &b, Priors::CompositePrior &c, const std::string &purpose);
    reg_elem <factory_type> __scanner_factories__;
  }
  
  class Likelihood_Container_Factory : public Scanner::Factory_Base
  {
    private:
      DRes::DependencyResolver &dependencyResolver;
      Priors::CompositePrior &prior;
      std::map<std::string, primary_model_functor *> functorMap;   

    public:
      Likelihood_Container_Factory(const gambit_core &core, DRes::DependencyResolver &dependencyResolver, Priors::CompositePrior &prior);
      ~Likelihood_Container_Factory(){}
      const std::vector<std::string> & getKeys() const;
      unsigned int getDim() const;    
      void * operator() (const std::string &in, const std::string &purpose) const;   
      void remove(void *a) const;
  };

}

#endif
