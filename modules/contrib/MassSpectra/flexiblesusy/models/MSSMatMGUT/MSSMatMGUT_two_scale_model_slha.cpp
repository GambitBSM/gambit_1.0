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

// File generated at Fri 16 Jan 2015 13:05:07

/**
 * @file MSSMatMGUT_two_scale_model_slha.cpp
 * @brief MSSMatMGUT model class wrapper for SLHA conversion
 */

#include "MSSMatMGUT_two_scale_model_slha.hpp"
#include "MSSMatMGUT_slha_io.hpp"

namespace flexiblesusy {

#define CLASSNAME MSSMatMGUT_slha<Two_scale>

CLASSNAME::MSSMatMGUT_slha(const MSSMatMGUT_input_parameters& input_)
   : MSSMatMGUT<Two_scale>(input_)
   , physical_slha()
{
}

/**
 * Copy constructor.  Copies from base class (two-scale model class in
 * BPMZ convention) and converts parameters to SLHA.
 *
 * @param model_ model class in BPMZ convention
 */
CLASSNAME::MSSMatMGUT_slha(const MSSMatMGUT<Two_scale>& model_)
   : MSSMatMGUT<Two_scale>(model_)
{
   convert_to_slha();
}

CLASSNAME::~MSSMatMGUT_slha()
{
}

void CLASSNAME::clear()
{
   MSSMatMGUT<Two_scale>::clear();
   physical_slha.clear();
}

void CLASSNAME::calculate_spectrum()
{
   MSSMatMGUT<Two_scale>::calculate_spectrum();
   convert_to_slha();
}

void CLASSNAME::convert_to_slha()
{
   physical_slha = get_physical();
   MSSMatMGUT_slha_io::convert_to_slha_convention(physical_slha);
}

const MSSMatMGUT_physical& CLASSNAME::get_physical_slha() const
{
   return physical_slha;
}

MSSMatMGUT_physical& CLASSNAME::get_physical_slha()
{
   return physical_slha;
}

void CLASSNAME::print(std::ostream& ostr) const
{
   MSSMatMGUT<Two_scale>::print(ostr);

   ostr << "----------------------------------------\n"
           "SLHA convention:\n"
           "----------------------------------------\n";
   physical_slha.print(ostr);
}

} // namespace flexiblesusy
