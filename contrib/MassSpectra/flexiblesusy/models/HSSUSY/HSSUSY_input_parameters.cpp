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

// File generated at Sat 27 Aug 2016 12:40:16

#include "HSSUSY_input_parameters.hpp"
#include "wrappers.hpp"

#define INPUT(p) input.p

namespace flexiblesusy {

Eigen::ArrayXd HSSUSY_input_parameters::get() const
{
   Eigen::ArrayXd pars(55);

   pars(0) = MSUSY;
   pars(1) = M1Input;
   pars(2) = M2Input;
   pars(3) = M3Input;
   pars(4) = MuInput;
   pars(5) = mAInput;
   pars(6) = MEWSB;
   pars(7) = AtInput;
   pars(8) = TanBeta;
   pars(9) = LambdaLoopOrder;
   pars(10) = msq2(0,0);
   pars(11) = msq2(0,1);
   pars(12) = msq2(0,2);
   pars(13) = msq2(1,0);
   pars(14) = msq2(1,1);
   pars(15) = msq2(1,2);
   pars(16) = msq2(2,0);
   pars(17) = msq2(2,1);
   pars(18) = msq2(2,2);
   pars(19) = msu2(0,0);
   pars(20) = msu2(0,1);
   pars(21) = msu2(0,2);
   pars(22) = msu2(1,0);
   pars(23) = msu2(1,1);
   pars(24) = msu2(1,2);
   pars(25) = msu2(2,0);
   pars(26) = msu2(2,1);
   pars(27) = msu2(2,2);
   pars(28) = msd2(0,0);
   pars(29) = msd2(0,1);
   pars(30) = msd2(0,2);
   pars(31) = msd2(1,0);
   pars(32) = msd2(1,1);
   pars(33) = msd2(1,2);
   pars(34) = msd2(2,0);
   pars(35) = msd2(2,1);
   pars(36) = msd2(2,2);
   pars(37) = msl2(0,0);
   pars(38) = msl2(0,1);
   pars(39) = msl2(0,2);
   pars(40) = msl2(1,0);
   pars(41) = msl2(1,1);
   pars(42) = msl2(1,2);
   pars(43) = msl2(2,0);
   pars(44) = msl2(2,1);
   pars(45) = msl2(2,2);
   pars(46) = mse2(0,0);
   pars(47) = mse2(0,1);
   pars(48) = mse2(0,2);
   pars(49) = mse2(1,0);
   pars(50) = mse2(1,1);
   pars(51) = mse2(1,2);
   pars(52) = mse2(2,0);
   pars(53) = mse2(2,1);
   pars(54) = mse2(2,2);

   return pars;
}

void HSSUSY_input_parameters::set(const Eigen::ArrayXd& pars)
{
   MSUSY = pars(0);
   M1Input = pars(1);
   M2Input = pars(2);
   M3Input = pars(3);
   MuInput = pars(4);
   mAInput = pars(5);
   MEWSB = pars(6);
   AtInput = pars(7);
   TanBeta = pars(8);
   LambdaLoopOrder = pars(9);
   msq2(0,0) = pars(10);
   msq2(0,1) = pars(11);
   msq2(0,2) = pars(12);
   msq2(1,0) = pars(13);
   msq2(1,1) = pars(14);
   msq2(1,2) = pars(15);
   msq2(2,0) = pars(16);
   msq2(2,1) = pars(17);
   msq2(2,2) = pars(18);
   msu2(0,0) = pars(19);
   msu2(0,1) = pars(20);
   msu2(0,2) = pars(21);
   msu2(1,0) = pars(22);
   msu2(1,1) = pars(23);
   msu2(1,2) = pars(24);
   msu2(2,0) = pars(25);
   msu2(2,1) = pars(26);
   msu2(2,2) = pars(27);
   msd2(0,0) = pars(28);
   msd2(0,1) = pars(29);
   msd2(0,2) = pars(30);
   msd2(1,0) = pars(31);
   msd2(1,1) = pars(32);
   msd2(1,2) = pars(33);
   msd2(2,0) = pars(34);
   msd2(2,1) = pars(35);
   msd2(2,2) = pars(36);
   msl2(0,0) = pars(37);
   msl2(0,1) = pars(38);
   msl2(0,2) = pars(39);
   msl2(1,0) = pars(40);
   msl2(1,1) = pars(41);
   msl2(1,2) = pars(42);
   msl2(2,0) = pars(43);
   msl2(2,1) = pars(44);
   msl2(2,2) = pars(45);
   mse2(0,0) = pars(46);
   mse2(0,1) = pars(47);
   mse2(0,2) = pars(48);
   mse2(1,0) = pars(49);
   mse2(1,1) = pars(50);
   mse2(1,2) = pars(51);
   mse2(2,0) = pars(52);
   mse2(2,1) = pars(53);
   mse2(2,2) = pars(54);

}

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
   ostr << "LambdaLoopOrder = " << INPUT(LambdaLoopOrder) << ", ";
   ostr << "msq2 = " << INPUT(msq2) << ", ";
   ostr << "msu2 = " << INPUT(msu2) << ", ";
   ostr << "msd2 = " << INPUT(msd2) << ", ";
   ostr << "msl2 = " << INPUT(msl2) << ", ";
   ostr << "mse2 = " << INPUT(mse2) << ", ";

   return ostr;
}

} // namespace flexiblesusy
