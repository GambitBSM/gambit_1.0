//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  declaration for scanner module
///
///  *********************************************
///
///  Authors (add name and date if you modify):
//
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 August 2013 Feb 2014
///
///  *********************************************

#ifndef PLUGIN_EXCEPTION_HPP
#define PLUGIN_EXCEPTION_HPP

#include <iostream>
#include <string>

using namespace std;

namespace Gambit
{
        namespace Plugin
        {
                class PluginException
                {
                private:
                        std::string mssg;
                        
                public:
                        PluginException(const std::string &in) : mssg(in) {}
                        
                        std::string Print(){return mssg;}
                };
        }
}

#endif
