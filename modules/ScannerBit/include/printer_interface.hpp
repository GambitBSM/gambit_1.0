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

#ifndef SCANNER_PLUGIN_HPP
#define SCANNER_PLUGIN_HPP

#include "plugin_defs.hpp"
#include "plugin_macros.hpp"
#include <yaml-cpp/yaml.h>

using namespace std;

namespace Gambit
{
        namespace Scanner
        {
                class printer_interface
                {
                        virtual void inputValue() = 0;
                        virtual void inputValue(int thread, int tag, const std::string &, double a);
                        virtual void inputValue(int thread, int tag, const std::string &, const std::vector<double> &);
                        template<typename T> void inputValue(int, int, const std::string &, T) {/*do nothing*/}
                };
        }
}

#endif
