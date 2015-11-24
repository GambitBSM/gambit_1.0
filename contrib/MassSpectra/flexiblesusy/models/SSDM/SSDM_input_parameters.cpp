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

// File generated at Tue 24 Nov 2015 14:29:51

#include "SSDM_input_parameters.hpp"
#include "wrappers.hpp"

#define INPUT(p) input.p

namespace flexiblesusy {

Eigen::ArrayXd SSDM_input_parameters::get() const
{
   Eigen::ArrayXd pars(6);

   pars(0) = HiggsIN;
   pars(1) = Lambda2Input;
   pars(2) = Lambda3Input;
   pars(3) = mS2Input;
   pars(4) = QEWSB;
   pars(5) = Qin;

   return pars;
}

void SSDM_input_parameters::set(const Eigen::ArrayXd& pars)
{
   HiggsIN = pars(0);
   Lambda2Input = pars(1);
   Lambda3Input = pars(2);
   mS2Input = pars(3);
   QEWSB = pars(4);
   Qin = pars(5);

}

std::ostream& operator<<(std::ostream& ostr, const SSDM_input_parameters& input)
{
   ostr << "HiggsIN = " << INPUT(HiggsIN) << ", ";
   ostr << "Lambda2Input = " << INPUT(Lambda2Input) << ", ";
   ostr << "Lambda3Input = " << INPUT(Lambda3Input) << ", ";
   ostr << "mS2Input = " << INPUT(mS2Input) << ", ";
   ostr << "QEWSB = " << INPUT(QEWSB) << ", ";
   ostr << "Qin = " << INPUT(Qin) << ", ";

   return ostr;
}

} // namespace flexiblesusy
