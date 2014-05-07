//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Scanner factory implementations.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 May, June, July
//
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 July 2013 Feb 2014
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2013 Aug
///
///  *********************************************

#ifndef __scanner_factory_hpp__
#define __scanner_factory_hpp__

#include <vector>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <set>
#include <string>

#include "functors.hpp"
#include "depresolver.hpp"
#include "priors.hpp"
#include "scanner_utils.hpp"
#include "scan.hpp"

#define LOAD_SCANNER_FUNCTION(tag, ...) REGISTER(__scanner_factories__, tag, __VA_ARGS__)

namespace Gambit
{
                registry
                {
                        typedef void* factory_type(const std::map<std::string, primary_model_functor *> &, DRes::DependencyResolver &b, Priors::CompositePrior &c, const std::string &purpose);
                        reg_elem <factory_type> __scanner_factories__;
                }
                
                class Scanner_Function_Factory : public Scanner::Factory_Base
                {
                private:
                        DRes::DependencyResolver &dependencyResolver;
                        Priors::CompositePrior &prior;
                        std::map<std::string, primary_model_functor *> functorMap;
                        
                public:
                        Scanner_Function_Factory(const gambit_core &core, DRes::DependencyResolver &dependencyResolver, Priors::CompositePrior &prior);
                        
                        const std::vector<std::string> & getKeys() const {return prior.getShownParameters();}
                        
                        unsigned int getDim() const {return prior.size();}
                        
                        void * operator() (const std::string &in, const std::string &purpose) const
                        {
                                return __scanner_factories__[in](functorMap, dependencyResolver, prior, purpose);
                        }
                        
                        void remove(void *a) const
                        {
                                delete (Scanner::Function_Base *)a;
                        }

                        ~Scanner_Function_Factory(){}
                };
}

#include <likelihood_container.hpp>

#endif
