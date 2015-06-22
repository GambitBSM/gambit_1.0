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

// File generated at Fri 16 Jan 2015 12:36:12

#include "MSSMNoFVatMGUT_input_parameters.hpp"

#define INPUT(p) input.p

namespace flexiblesusy {

std::ostream& operator<<(std::ostream& ostr, const MSSMNoFVatMGUT_input_parameters& input)
{
   ostr << "TanBeta = " << INPUT(TanBeta) << ", ";
   ostr << "SignMu = " << INPUT(SignMu) << ", ";
   ostr << "M1 = " << INPUT(M1) << ", ";
   ostr << "M2 = " << INPUT(M2) << ", ";
   ostr << "M3 = " << INPUT(M3) << ", ";
   ostr << "AtIN = " << INPUT(AtIN) << ", ";
   ostr << "AbIN = " << INPUT(AbIN) << ", ";
   ostr << "AtauIN = " << INPUT(AtauIN) << ", ";
   ostr << "AcIN = " << INPUT(AcIN) << ", ";
   ostr << "AsIN = " << INPUT(AsIN) << ", ";
   ostr << "AmuonIN = " << INPUT(AmuonIN) << ", ";
   ostr << "AuIN = " << INPUT(AuIN) << ", ";
   ostr << "AdIN = " << INPUT(AdIN) << ", ";
   ostr << "AeIN = " << INPUT(AeIN) << ", ";
   ostr << "mHd2IN = " << INPUT(mHd2IN) << ", ";
   ostr << "mHu2IN = " << INPUT(mHu2IN) << ", ";
   ostr << "ml11IN = " << INPUT(ml11IN) << ", ";
   ostr << "ml22IN = " << INPUT(ml22IN) << ", ";
   ostr << "ml33IN = " << INPUT(ml33IN) << ", ";
   ostr << "me11IN = " << INPUT(me11IN) << ", ";
   ostr << "me22IN = " << INPUT(me22IN) << ", ";
   ostr << "me33IN = " << INPUT(me33IN) << ", ";
   ostr << "mq11IN = " << INPUT(mq11IN) << ", ";
   ostr << "mq22IN = " << INPUT(mq22IN) << ", ";
   ostr << "mq33IN = " << INPUT(mq33IN) << ", ";
   ostr << "mu11IN = " << INPUT(mu11IN) << ", ";
   ostr << "mu22IN = " << INPUT(mu22IN) << ", ";
   ostr << "mu33IN = " << INPUT(mu33IN) << ", ";
   ostr << "md11IN = " << INPUT(md11IN) << ", ";
   ostr << "md22IN = " << INPUT(md22IN) << ", ";
   ostr << "md33IN = " << INPUT(md33IN) << ", ";

   return ostr;
}

} // namespace flexiblesusy
