//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Scanner factory method implementations.
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
///  \date 2013 July, Aug
///  \date 2014 Feb
///
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2013 Aug
///  \date 2014 Mar
///
///  *********************************************

#include "scan.hpp"
#include "plugin/plugin_interface.hpp"

namespace Gambit
{
        namespace Scanner
        { 
                int Gambit_Scanner::Run()
                {
                        if (interface.fileName() == "")
                        {
                                scanLog::err << "Did not specify module library path." << scanLog::endl;
                        }
                        
                        unsigned int dim = factory.getDim();
                        auto keys = factory.getKeys();
                        
                        scanLog::err.check();
                        outputHandler::out.redir("scanner");
                        try
                        {
                                Plugin::Plugin_Interface<int ()> plugin_interface(interface.fileName(), interface.pluginName(), dim, keys, factory, interface);
                                plugin_interface();
                        }
                        catch (std::exception &exception)
                        {
                                scanLog::err << exception.what() << scanLog::endl;
                        }
                        outputHandler::out.defout();
                        scanLog::err.check();
                        
                        return 0;
                }
                
                Gambit_Scanner::~Gambit_Scanner(){}
        }
}
