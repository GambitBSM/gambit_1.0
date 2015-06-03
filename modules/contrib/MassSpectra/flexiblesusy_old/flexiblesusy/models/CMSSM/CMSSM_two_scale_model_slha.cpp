// ====================================================================
// This file is part of FlexibleSUSY.
//
// FlexibleSUSY is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License,
// or (at your option) any later version.
//
// FlexibleSUSY is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with FlexibleSUSY.  If not, see
// <http://www.gnu.org/licenses/>.
// ====================================================================

// File generated at Fri 16 Jan 2015 13:09:46

/**
 * @file CMSSM_two_scale_model_slha.cpp
 * @brief CMSSM model class wrapper for SLHA conversion
 */

#include "CMSSM_two_scale_model_slha.hpp"
#include "CMSSM_slha_io.hpp"

namespace flexiblesusy {

#define CLASSNAME CMSSM_slha<Two_scale>

CLASSNAME::CMSSM_slha(const CMSSM_input_parameters& input_)
   : CMSSM<Two_scale>(input_)
   , physical_slha()
{
}

/**
 * Copy constructor.  Copies from base class (two-scale model class in
 * BPMZ convention) and converts parameters to SLHA.
 *
 * @param model_ model class in BPMZ convention
 */
CLASSNAME::CMSSM_slha(const CMSSM<Two_scale>& model_)
   : CMSSM<Two_scale>(model_)
{
   convert_to_slha();
}

CLASSNAME::~CMSSM_slha()
{
}

void CLASSNAME::clear()
{
   CMSSM<Two_scale>::clear();
   physical_slha.clear();
}

void CLASSNAME::calculate_spectrum()
{
   CMSSM<Two_scale>::calculate_spectrum();
   convert_to_slha();
}

void CLASSNAME::convert_to_slha()
{
   physical_slha = get_physical();
   CMSSM_slha_io::convert_to_slha_convention(physical_slha);
}

const CMSSM_physical& CLASSNAME::get_physical_slha() const
{
   return physical_slha;
}

CMSSM_physical& CLASSNAME::get_physical_slha()
{
   return physical_slha;
}

void CLASSNAME::print(std::ostream& ostr) const
{
   CMSSM<Two_scale>::print(ostr);

   ostr << "----------------------------------------\n"
           "SLHA convention:\n"
           "----------------------------------------\n";
   physical_slha.print(ostr);
}

} // namespace flexiblesusy
