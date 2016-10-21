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

// File generated at Sat 27 Aug 2016 12:40:23

#include "SSM_input_parameters.hpp"
#include "wrappers.hpp"

#define INPUT(p) input.p

namespace flexiblesusy {

Eigen::ArrayXd SSM_input_parameters::get() const
{
   Eigen::ArrayXd pars(7);

   pars(0) = Qin;
   pars(1) = QEWSB;
   pars(2) = Lambdainput;
   pars(3) = LambdaSinput;
   pars(4) = MSinput;
   pars(5) = K1input;
   pars(6) = K2input;

   return pars;
}

void SSM_input_parameters::set(const Eigen::ArrayXd& pars)
{
   Qin = pars(0);
   QEWSB = pars(1);
   Lambdainput = pars(2);
   LambdaSinput = pars(3);
   MSinput = pars(4);
   K1input = pars(5);
   K2input = pars(6);

}

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
