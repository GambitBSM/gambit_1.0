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

#ifndef __inifile_interface_hpp__
#define __inifile_interface_hpp__

#include <vector>
#include <string>
#include <algorithm>

#include "scanner_utils.hpp"
#include "scan.hpp"
#include "yaml_options.hpp"
#include "plugin_details.hpp"

namespace Gambit
{
        namespace Scanner
        {
                class IniFileInterface : public IniFileInterface_Base
                {
                private:
                        Options options;
                        Plugin::Plugin_Details plugin;
                        std::string tag;
                        
                public:
                        IniFileInterface(const std::string &tag, const Plugin::Plugin_Details &, const Options &);
                        
                        const std::string pluginName() const {return plugin.full_string;}
                        
                        const std::string fileName() const {return plugin.library_path;}
                        
                        const std::string getTag() const {return tag;} 
                        
                        const std::string getValue(const std::string &in) const
                        {
                                if (options.hasKey(in.c_str()))
                                {
                                        return options.getValue<std::string>(in.c_str());
                                }
                                else
                                {
                                        return std::string("");
                                }
                        }
                        
                        YAML::Node getNode(const std::string &str) const {return options.getNode(str);}
                        
                        ~IniFileInterface(){}
                };
        }
}

#endif
