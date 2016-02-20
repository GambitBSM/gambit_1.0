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

// File generated at Sat 20 Feb 2016 22:40:00

/**
 * @file SingletDMZ3_two_scale_model.cpp
 * @brief implementation of the SingletDMZ3 model class
 *
 * Contains the definition of the SingletDMZ3 model class methods
 * which solve EWSB and calculate pole masses and mixings from DRbar
 * parameters.
 *
 * This file was generated at Sat 20 Feb 2016 22:40:00 with FlexibleSUSY
 * 1.2.4 (git commit: unknown) and SARAH 4.5.8 .
 */

#include "SingletDMZ3_two_scale_model.hpp"

namespace flexiblesusy {

using namespace SingletDMZ3_info;

#define CLASSNAME SingletDMZ3<Two_scale>

CLASSNAME::SingletDMZ3(const SingletDMZ3_input_parameters& input_)
   : Two_scale_model()
   , SingletDMZ3_mass_eigenstates(input_)
{
}

CLASSNAME::~SingletDMZ3()
{
}

void CLASSNAME::calculate_spectrum()
{
   SingletDMZ3_mass_eigenstates::calculate_spectrum();
}

void CLASSNAME::clear_problems()
{
   SingletDMZ3_mass_eigenstates::clear_problems();
}

std::string CLASSNAME::name() const
{
   return SingletDMZ3_mass_eigenstates::name();
}

void CLASSNAME::run_to(double scale, double eps)
{
   SingletDMZ3_mass_eigenstates::run_to(scale, eps);
}

void CLASSNAME::print(std::ostream& out) const
{
   SingletDMZ3_mass_eigenstates::print(out);
}

void CLASSNAME::set_precision(double p)
{
   SingletDMZ3_mass_eigenstates::set_precision(p);
}

} // namespace flexiblesusy
