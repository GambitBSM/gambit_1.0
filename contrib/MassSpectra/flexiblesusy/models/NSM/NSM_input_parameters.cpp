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

// File generated at Mon 1 Jun 2015 12:42:30

#include "NSM_input_parameters.hpp"

#define INPUT(p) input.p

namespace flexiblesusy {

std::ostream& operator<<(std::ostream& ostr, const NSM_input_parameters& input)
{
   ostr << "Lambda1Input = " << INPUT(Lambda1Input) << ", ";
   ostr << "Lambda2Input = " << INPUT(Lambda2Input) << ", ";
   ostr << "Lambda3Input = " << INPUT(Lambda3Input) << ", ";
   ostr << "Lambda4Input = " << INPUT(Lambda4Input) << ", ";
   ostr << "Lambda5Input = " << INPUT(Lambda5Input) << ", ";
   ostr << "vSInput = " << INPUT(vSInput) << ", ";
   ostr << "Qin = " << INPUT(Qin) << ", ";

   return ostr;
}

} // namespace flexiblesusy
