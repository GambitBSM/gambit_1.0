//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Base functions objects for use in GAMBIT.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Gregory Martinez
///           (gregory.david.martinez@gmail.com)
///  \date 2014 MAY
///
///  *********************************************

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include "function_plugin.hpp"

function_plugin(uniform)
{
        double plugin_main (const std::vector<double> &vec)
        {
                std::vector<std::string> &keys     = get_keys();
                
                return 0;
        }
}
