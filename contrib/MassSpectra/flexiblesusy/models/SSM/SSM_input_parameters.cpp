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

// File generated at Wed 28 Oct 2015 11:35:50

#include "SSM_input_parameters.hpp"

#define INPUT(p) input.p

namespace flexiblesusy {

std::ostream& operator<<(std::ostream& ostr, const SSM_input_parameters& input)
{
   ostr << "Qin = " << INPUT(Qin) << ", ";
   ostr << "QEWSB = " << INPUT(QEWSB) << ", ";
   ostr << "Lambdainput = " << INPUT(Lambdainput) << ", ";
   ostr << "LambdaSinput = " << INPUT(LambdaSinput) << ", ";
   ostr << "MSinput = " << INPUT(MSinput) << ", ";
   ostr << "K1input = " << INPUT(K1input) << ", ";
   ostr << "K2input = " << INPUT(K2input) << ", ";

   return ostr;
}

} // namespace flexiblesusy
