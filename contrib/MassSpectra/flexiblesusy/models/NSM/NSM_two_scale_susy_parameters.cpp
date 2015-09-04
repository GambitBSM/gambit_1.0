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

// File generated at Mon 1 Jun 2015 12:42:17

#include "NSM_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"
#include "functors.hpp"

#include <iostream>

namespace flexiblesusy {

#define CLASSNAME NSM_susy_parameters
#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

NSM_susy_parameters::NSM_susy_parameters(const NSM_input_parameters& input_)
   : Beta_function()
   , g1(0), g2(0), g3(0), Lambda2(0), Lambda3(0), Lambda1(0), Yu(Eigen::Matrix<
   double,3,3>::Zero()), Yd(Eigen::Matrix<double,3,3>::Zero()), Ye(
   Eigen::Matrix<double,3,3>::Zero())

   , input(input_)
{
   set_number_of_parameters(numberOfParameters);
}

NSM_susy_parameters::NSM_susy_parameters(
   double scale_, double loops_, double thresholds_,
   const NSM_input_parameters& input_
   , double g1_, double g2_, double g3_, double Lambda2_, double Lambda3_,
   double Lambda1_, const Eigen::Matrix<double,3,3>& Yu_, const Eigen::Matrix<
   double,3,3>& Yd_, const Eigen::Matrix<double,3,3>& Ye_

)
   : Beta_function()
   , g1(g1_), g2(g2_), g3(g3_), Lambda2(Lambda2_), Lambda3(Lambda3_), Lambda1(
   Lambda1_), Yu(Yu_), Yd(Yd_), Ye(Ye_)

   , input(input_)
{
   set_number_of_parameters(numberOfParameters);
   set_scale(scale_);
   set_loops(loops_);
   set_thresholds(thresholds_);
}

Eigen::ArrayXd NSM_susy_parameters::beta() const
{
   return calc_beta().get().unaryExpr(Chop<double>(get_zero_threshold()));
}

NSM_susy_parameters NSM_susy_parameters::calc_beta() const
{
   Susy_traces susy_traces;
   calc_susy_traces(susy_traces);

   double beta_g1(calc_beta_g1_one_loop(TRACE_STRUCT));
   double beta_g2(calc_beta_g2_one_loop(TRACE_STRUCT));
   double beta_g3(calc_beta_g3_one_loop(TRACE_STRUCT));
   double beta_Lambda2(calc_beta_Lambda2_one_loop(TRACE_STRUCT));
   double beta_Lambda3(calc_beta_Lambda3_one_loop(TRACE_STRUCT));
   double beta_Lambda1(calc_beta_Lambda1_one_loop(TRACE_STRUCT));
   Eigen::Matrix<double,3,3> beta_Yu(calc_beta_Yu_one_loop(TRACE_STRUCT));
   Eigen::Matrix<double,3,3> beta_Yd(calc_beta_Yd_one_loop(TRACE_STRUCT));
   Eigen::Matrix<double,3,3> beta_Ye(calc_beta_Ye_one_loop(TRACE_STRUCT));

   if (get_loops() > 1) {
      beta_g1 += calc_beta_g1_two_loop(TRACE_STRUCT);
      beta_g2 += calc_beta_g2_two_loop(TRACE_STRUCT);
      beta_g3 += calc_beta_g3_two_loop(TRACE_STRUCT);
      beta_Lambda2 += calc_beta_Lambda2_two_loop(TRACE_STRUCT);
      beta_Lambda3 += calc_beta_Lambda3_two_loop(TRACE_STRUCT);
      beta_Lambda1 += calc_beta_Lambda1_two_loop(TRACE_STRUCT);
      beta_Yu += calc_beta_Yu_two_loop(TRACE_STRUCT);
      beta_Yd += calc_beta_Yd_two_loop(TRACE_STRUCT);
      beta_Ye += calc_beta_Ye_two_loop(TRACE_STRUCT);

   }


   return NSM_susy_parameters(get_scale(), get_loops(), get_thresholds(), input,
                    beta_g1, beta_g2, beta_g3, beta_Lambda2, beta_Lambda3, beta_Lambda1, beta_Yu, beta_Yd, beta_Ye);
}

void NSM_susy_parameters::clear()
{
   reset();
   g1 = 0.;
   g2 = 0.;
   g3 = 0.;
   Lambda2 = 0.;
   Lambda3 = 0.;
   Lambda1 = 0.;
   Yu = Eigen::Matrix<double,3,3>::Zero();
   Yd = Eigen::Matrix<double,3,3>::Zero();
   Ye = Eigen::Matrix<double,3,3>::Zero();

}



const Eigen::ArrayXd NSM_susy_parameters::get() const
{
   Eigen::ArrayXd pars(numberOfParameters);

   pars(0) = g1;
   pars(1) = g2;
   pars(2) = g3;
   pars(3) = Lambda2;
   pars(4) = Lambda3;
   pars(5) = Lambda1;
   pars(6) = Yu(0,0);
   pars(7) = Yu(0,1);
   pars(8) = Yu(0,2);
   pars(9) = Yu(1,0);
   pars(10) = Yu(1,1);
   pars(11) = Yu(1,2);
   pars(12) = Yu(2,0);
   pars(13) = Yu(2,1);
   pars(14) = Yu(2,2);
   pars(15) = Yd(0,0);
   pars(16) = Yd(0,1);
   pars(17) = Yd(0,2);
   pars(18) = Yd(1,0);
   pars(19) = Yd(1,1);
   pars(20) = Yd(1,2);
   pars(21) = Yd(2,0);
   pars(22) = Yd(2,1);
   pars(23) = Yd(2,2);
   pars(24) = Ye(0,0);
   pars(25) = Ye(0,1);
   pars(26) = Ye(0,2);
   pars(27) = Ye(1,0);
   pars(28) = Ye(1,1);
   pars(29) = Ye(1,2);
   pars(30) = Ye(2,0);
   pars(31) = Ye(2,1);
   pars(32) = Ye(2,2);


   return pars;
}

void NSM_susy_parameters::print(std::ostream& ostr) const
{
   ostr << "susy parameters:\n";
   ostr << "g1 = " << g1 << '\n';
   ostr << "g2 = " << g2 << '\n';
   ostr << "g3 = " << g3 << '\n';
   ostr << "Lambda2 = " << Lambda2 << '\n';
   ostr << "Lambda3 = " << Lambda3 << '\n';
   ostr << "Lambda1 = " << Lambda1 << '\n';
   ostr << "Yu = " << Yu << '\n';
   ostr << "Yd = " << Yd << '\n';
   ostr << "Ye = " << Ye << '\n';

}

void NSM_susy_parameters::set(const Eigen::ArrayXd& pars)
{
   g1 = pars(0);
   g2 = pars(1);
   g3 = pars(2);
   Lambda2 = pars(3);
   Lambda3 = pars(4);
   Lambda1 = pars(5);
   Yu(0,0) = pars(6);
   Yu(0,1) = pars(7);
   Yu(0,2) = pars(8);
   Yu(1,0) = pars(9);
   Yu(1,1) = pars(10);
   Yu(1,2) = pars(11);
   Yu(2,0) = pars(12);
   Yu(2,1) = pars(13);
   Yu(2,2) = pars(14);
   Yd(0,0) = pars(15);
   Yd(0,1) = pars(16);
   Yd(0,2) = pars(17);
   Yd(1,0) = pars(18);
   Yd(1,1) = pars(19);
   Yd(1,2) = pars(20);
   Yd(2,0) = pars(21);
   Yd(2,1) = pars(22);
   Yd(2,2) = pars(23);
   Ye(0,0) = pars(24);
   Ye(0,1) = pars(25);
   Ye(0,2) = pars(26);
   Ye(1,0) = pars(27);
   Ye(1,1) = pars(28);
   Ye(1,2) = pars(29);
   Ye(2,0) = pars(30);
   Ye(2,1) = pars(31);
   Ye(2,2) = pars(32);

}

const NSM_input_parameters& NSM_susy_parameters::get_input() const
{
   return input;
}

NSM_input_parameters& NSM_susy_parameters::get_input()
{
   return input;
}

void NSM_susy_parameters::set_input_parameters(const NSM_input_parameters& input_)
{
   input = input_;
}

void NSM_susy_parameters::calc_susy_traces(Susy_traces& susy_traces) const
{
   TRACE_STRUCT.traceYdAdjYd = Re((Yd*Yd.adjoint()).trace());
   TRACE_STRUCT.traceYeAdjYe = Re((Ye*Ye.adjoint()).trace());
   TRACE_STRUCT.traceYuAdjYu = Re((Yu*Yu.adjoint()).trace());
   TRACE_STRUCT.traceYdAdjYdYdAdjYd = Re((Yd*Yd.adjoint()*Yd*Yd.adjoint())
      .trace());
   TRACE_STRUCT.traceYdAdjYuYuAdjYd = Re((Yd*Yu.adjoint()*Yu*Yd.adjoint())
      .trace());
   TRACE_STRUCT.traceYeAdjYeYeAdjYe = Re((Ye*Ye.adjoint()*Ye*Ye.adjoint())
      .trace());
   TRACE_STRUCT.traceYuAdjYuYuAdjYu = Re((Yu*Yu.adjoint()*Yu*Yu.adjoint())
      .trace());
   TRACE_STRUCT.traceYdAdjYdYdAdjYdYdAdjYd = Re((Yd*Yd.adjoint()*Yd*Yd.adjoint(
      )*Yd*Yd.adjoint()).trace());
   TRACE_STRUCT.traceYdAdjYdYdAdjYuYuAdjYd = Re((Yd*Yd.adjoint()*Yd*Yu.adjoint(
      )*Yu*Yd.adjoint()).trace());
   TRACE_STRUCT.traceYdAdjYuYuAdjYdYdAdjYd = Re((Yd*Yu.adjoint()*Yu*Yd.adjoint(
      )*Yd*Yd.adjoint()).trace());
   TRACE_STRUCT.traceYdAdjYuYuAdjYuYuAdjYd = Re((Yd*Yu.adjoint()*Yu*Yu.adjoint(
      )*Yu*Yd.adjoint()).trace());
   TRACE_STRUCT.traceYeAdjYeYeAdjYeYeAdjYe = Re((Ye*Ye.adjoint()*Ye*Ye.adjoint(
      )*Ye*Ye.adjoint()).trace());
   TRACE_STRUCT.traceYuAdjYuYuAdjYuYuAdjYu = Re((Yu*Yu.adjoint()*Yu*Yu.adjoint(
      )*Yu*Yu.adjoint()).trace());

}

std::ostream& operator<<(std::ostream& ostr, const NSM_susy_parameters& susy_pars)
{
   susy_pars.print(std::cout);
   return ostr;
}

} // namespace flexiblesusy
