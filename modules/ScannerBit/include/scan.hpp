//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Scanner method implementations.
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
///  \date 2013 July 2013/Feb 2014
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2013 Aug
///
///  *********************************************

#ifndef __scan_hpp__
#define __scan_hpp__

#include "yaml_parser.hpp"
#include "priors.hpp"

namespace Gambit
{
        namespace Scanner
        {       
                class Factory_Base
                {
                public:
                        virtual const std::vector<std::string> & getKeys() const = 0;
                        virtual unsigned int getDim() const = 0;
                        virtual void * operator() (const std::string &in, const std::string &purpose) const = 0;
                        virtual void remove(void *a) const = 0;
                        virtual ~Factory_Base() {};
                };
                
                class Function_Base
                {
                public:
                        virtual double operator () (const std::vector<double> &) = 0;
                        virtual void print(double, const std::string &) const = 0;
                        virtual ~Function_Base(){} 
                };

                class IniFileInterface_Base
                {
                public:
                        virtual const std::string pluginName() const = 0;
                        virtual const std::string fileName() const = 0;
                        virtual const std::string getValue(const std::string &in) const = 0;
                        virtual ~IniFileInterface_Base() {};
                };
                
                class Gambit_Scanner
                {
                private:
                        const Factory_Base &factory;
                        const IniFileInterface_Base &interface;
                        const Priors::BasePrior &prior;

                public:
                        Gambit_Scanner (const Factory_Base &factory, const IniFileInterface_Base &interface, const Priors::BasePrior &prior) : factory(factory), interface(interface), prior(prior)
                        {       
                        }

                        int Run();
                        
                        ~Gambit_Scanner();
                };             

        }
}

#endif
