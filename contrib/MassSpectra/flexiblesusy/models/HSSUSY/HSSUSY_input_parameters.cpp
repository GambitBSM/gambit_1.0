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

// File generated at Wed 28 Oct 2015 11:12:29

#include "HSSUSY_input_parameters.hpp"

#define INPUT(p) input.p

namespace flexiblesusy {

std::ostream& operator<<(std::ostream& ostr, const HSSUSY_input_parameters& input)
{
   ostr << "MSUSY = " << INPUT(MSUSY) << ", ";
   ostr << "M1Input = " << INPUT(M1Input) << ", ";
   ostr << "M2Input = " << INPUT(M2Input) << ", ";
   ostr << "M3Input = " << INPUT(M3Input) << ", ";
   ostr << "MuInput = " << INPUT(MuInput) << ", ";
   ostr << "mAInput = " << INPUT(mAInput) << ", ";
   ostr << "MEWSB = " << INPUT(MEWSB) << ", ";
   ostr << "AtInput = " << INPUT(AtInput) << ", ";
   ostr << "TanBeta = " << INPUT(TanBeta) << ", ";
   ostr << "msq2 = " << INPUT(msq2) << ", ";
   ostr << "msu2 = " << INPUT(msu2) << ", ";
   ostr << "msd2 = " << INPUT(msd2) << ", ";
   ostr << "msl2 = " << INPUT(msl2) << ", ";
   ostr << "mse2 = " << INPUT(mse2) << ", ";

   return ostr;
}

} // namespace flexiblesusy
