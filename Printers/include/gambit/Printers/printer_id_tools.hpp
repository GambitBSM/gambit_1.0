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

#include "gambit/Printers/baseprintermanager.hpp"
#include "gambit/Printers/basebaseprinter.hpp"

#ifndef PRINTER_ID_TOOLS_HPP
#define PRINTER_ID_TOOLS_HPP

#include <string>
#include <vector>

namespace Gambit
{
    namespace Printers
    { 
        /// Returns unigue pointid;
        unsigned long long int &get_point_id();
        
        /// Returns unique postive parameter id
        int get_main_param_id(const std::string &);
        
        /// Returns unique negative parameter id
        int get_aux_param_id(const std::string &);
    }
}

#endif
