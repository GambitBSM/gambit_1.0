//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  Scanner inifile interface implementations.
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

#include "inifile_interface.hpp"

namespace Gambit
{
        namespace Scanner
        {       
                IniFileInterface::IniFileInterface(const std::string &tag, const Plugin::Plugin_Details &plugin, const Options &options) 
                        : tag(tag), plugin(plugin), options(options)
                {       
                }
        }
}
