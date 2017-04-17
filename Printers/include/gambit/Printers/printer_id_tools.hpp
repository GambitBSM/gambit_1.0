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
        /// Global flag to indicate if auto-incrementing of the PointID by the likelihood container is allowed
        bool &auto_increment();

        /// Returns unigue pointid;
        unsigned long long int &get_point_id();
 
        /// Consolidated 'get id' function, for both main and aux
        int get_param_id(const std::string& name, bool& is_new);
        int get_param_id(const std::string& name);
        /// Get names of all parameters known to printer system (vector index corresponds to ID number)
        std::vector<std::string> get_all_params();

        /// Returns unique postive parameter id (UPDATE! Now just a thin wrapper for get_param_id)
        int get_main_param_id(const std::string &);
        /// Extra argument returns true if new ID was assigned
        int get_main_param_id(const std::string &, bool& is_new);
        
        /// Returns unique negative parameter id (UPDATE! Now just a thin wrapper for get_param_id)
        int get_aux_param_id(const std::string &);
        /// Extra argument returns true if new ID was assigned
        int get_aux_param_id(const std::string &, bool& is_new);
    }
}

#endif
