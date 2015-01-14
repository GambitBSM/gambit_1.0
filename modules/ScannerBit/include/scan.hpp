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
#include "printer_interface.hpp"
#include "plugin_interface.hpp"
#include "plugin_loader.hpp"
#include "priors/composite.hpp"
#include "factory_defs.hpp"

namespace Gambit
{
        namespace Scanner
        {       
                class Scan_Manager
                {
                private:
                        const Factory_Base *factory;
                        const Options *options;
                        const Priors::CompositePrior *prior;
                        printer_interface *printerInterface;

                public:
                        Scan_Manager (const Factory_Base&, const Options&, const Priors::CompositePrior&, printer_interface* = 0);
                        ~Scan_Manager();
                        int Run();                       
                };             

        }
}

#endif
