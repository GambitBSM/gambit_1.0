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

#ifndef __gambit_scan_hpp__
#define __gambit_scan_hpp__

#include <scanner_factory.hpp>
#include <yaml_parser.hpp>

namespace Gambit
{
        namespace Scanner
        {       
                class Gambit_Scanner
                {
                private:
                        Factory_Base *factory;
                        IniFileInterface_Base *interface;
			
                public:
                        Gambit_Scanner (Factory_Base *, IniFileInterface_Base *);

                        int Run();
                        
                        ~Gambit_Scanner();
                };             
        }
}

#endif
