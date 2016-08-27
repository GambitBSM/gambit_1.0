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

// File generated at Sat 27 Aug 2016 12:45:06

#include "MSSMNoFV_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of Yu.
 *
 * @return one-loop beta function
 */
Eigen::Matrix<double,3,3> MSSMNoFV_susy_parameters::calc_beta_Yu_one_loop(const Susy_traces& susy_traces) const
{
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   Eigen::Matrix<double,3,3> beta_Yu;

   beta_Yu = (oneOver16PiSqr*(-0.06666666666666667*Yu*(-45*traceYuAdjYu +
      13*Sqr(g1) + 45*Sqr(g2) + 80*Sqr(g3)) + Yu*Yd.adjoint()*Yd + 3*(Yu*
      Yu.adjoint()*Yu))).real();


   return beta_Yu;
}

/**
 * Calculates the two-loop beta function of Yu.
 *
 * @return two-loop beta function
 */
Eigen::Matrix<double,3,3> MSSMNoFV_susy_parameters::calc_beta_Yu_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;


   Eigen::Matrix<double,3,3> beta_Yu;

   beta_Yu = (twoLoop*(Yu*(6.095555555555555*Power(g1,4) + 7.5*Power(g2,4
      ) - 1.7777777777777777*Power(g3,4) - 3*traceYdAdjYuYuAdjYd - 9*
      traceYuAdjYuYuAdjYu + Sqr(g1)*Sqr(g2) + 3.022222222222222*Sqr(g1)*Sqr(g3)
      + 8*Sqr(g2)*Sqr(g3) + 0.8*traceYuAdjYu*(Sqr(g1) + 20*Sqr(g3))) + (-3*
      traceYdAdjYd - traceYeAdjYe + 0.4*Sqr(g1))*(Yu*Yd.adjoint()*Yd) - 9*
      traceYuAdjYu*(Yu*Yu.adjoint()*Yu) + 0.4*Sqr(g1)*(Yu*Yu.adjoint()*Yu) + 6*
      Sqr(g2)*(Yu*Yu.adjoint()*Yu) - 2*(Yu*Yd.adjoint()*Yd*Yd.adjoint()*Yd) - 2
      *(Yu*Yd.adjoint()*Yd*Yu.adjoint()*Yu) - 4*(Yu*Yu.adjoint()*Yu*Yu.adjoint(
      )*Yu))).real();


   return beta_Yu;
}

/**
 * Calculates the three-loop beta function of Yu.
 *
 * @return three-loop beta function
 */
Eigen::Matrix<double,3,3> MSSMNoFV_susy_parameters::calc_beta_Yu_three_loop(const Susy_traces& susy_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)

   const double traceAdjYdYd = TRACE_STRUCT.traceAdjYdYd;
   const double traceAdjYeYe = TRACE_STRUCT.traceAdjYeYe;
   const double traceAdjYuYu = TRACE_STRUCT.traceAdjYuYu;
   const double traceAdjYuYuAdjYdYd = TRACE_STRUCT.traceAdjYuYuAdjYdYd;
   const double traceAdjYdYdAdjYdYd = TRACE_STRUCT.traceAdjYdYdAdjYdYd;
   const double traceAdjYeYeAdjYeYe = TRACE_STRUCT.traceAdjYeYeAdjYeYe;
   const double traceAdjYuYuAdjYuYu = TRACE_STRUCT.traceAdjYuYuAdjYuYu;
   const double traceAdjYdYdAdjYuYuAdjYdYd =
      TRACE_STRUCT.traceAdjYdYdAdjYuYuAdjYdYd;
   const double traceAdjYuYuAdjYuYuAdjYuYu =
      TRACE_STRUCT.traceAdjYuYuAdjYuYuAdjYuYu;


   Eigen::Matrix<double,3,3> beta_Yu;

   const Eigen::Matrix<double,3,3> beta_Yu_1 = (0.00007407407407407407*
      threeLoop*(704194*Power(g1,6)*Yu + 2328750*Power(g2,6)*Yu + 2720000*Power
      (g3,6)*Yu - 81900*Power(g1,4)*traceAdjYdYd*Yu - 607500*Power(g2,4)*
      traceAdjYdYd*Yu - 720000*Power(g3,4)*traceAdjYdYd*Yu + 121500*
      traceAdjYdYdAdjYuYuAdjYdYd*Yu - 105300*Power(g1,4)*traceAdjYeYe*Yu -
      202500*Power(g2,4)*traceAdjYeYe*Yu - 577125*Power(g1,4)*traceAdjYuYu*Yu -
      1063125*Power(g2,4)*traceAdjYuYu*Yu - 1440000*Power(g3,4)*traceAdjYuYu*
      Yu + 243000*traceAdjYdYd*traceAdjYuYuAdjYdYd*Yu + 81000*traceAdjYeYe*
      traceAdjYuYuAdjYdYd*Yu + 729000*traceAdjYuYu*traceAdjYuYuAdjYuYu*Yu +
      40500*traceAdjYuYuAdjYuYuAdjYuYu*Yu + 114750*Power(g2,4)*Yu*Sqr(g1) +
      130800*Power(g3,4)*Yu*Sqr(g1) + 16200*traceAdjYuYuAdjYdYd*Yu*Sqr(g1) +
      153900*traceAdjYuYuAdjYuYu*Yu*Sqr(g1) + 102330*Power(g1,4)*Yu*Sqr(g2) +
      918000*Power(g3,4)*Yu*Sqr(g2) + 243000*traceAdjYuYuAdjYdYd*Yu*Sqr(g2) +
      121500*traceAdjYuYuAdjYuYu*Yu*Sqr(g2) - 76950*traceAdjYuYu*Yu*Sqr(g1)*Sqr
      (g2) + 318480*Power(g1,4)*Yu*Sqr(g3) + 1890000*Power(g2,4)*Yu*Sqr(g3) +
      324000*traceAdjYuYuAdjYdYd*Yu*Sqr(g3) + 972000*traceAdjYuYuAdjYuYu*Yu*Sqr
      (g3) - 558000*traceAdjYuYu*Yu*Sqr(g1)*Sqr(g3) - 1782000*traceAdjYuYu*Yu*
      Sqr(g2)*Sqr(g3) - 21600*Yu*Sqr(g1)*Sqr(g2)*Sqr(g3) - 54*(5174*Power(g1,6)
      + 65*Power(g1,4)*(5*traceAdjYuYu + 54*Sqr(g2) + 176*Sqr(g3)) + 50*Sqr(g1
      )*(81*Power(g2,4) + 176*Power(g3,4) - 6*traceAdjYuYuAdjYdYd + 18*
      traceAdjYuYuAdjYuYu - 63*traceAdjYuYu*Sqr(g2) - 208*traceAdjYuYu*Sqr(g3))
      - 125*(630*Power(g2,6) - 27*Power(g2,4)*(7*traceAdjYuYu + 16*Sqr(g3)) -
      36*Sqr(g2)*(8*Power(g3,4) - 3*traceAdjYuYuAdjYuYu - 8*traceAdjYuYu*Sqr(g3
      )) + 4*(320*Power(g3,6) - 8*Power(g3,4)*traceAdjYuYu + 9*
      traceAdjYuYuAdjYuYuAdjYuYu - 24*(traceAdjYuYuAdjYdYd + 3*
      traceAdjYuYuAdjYuYu)*Sqr(g3))))*(Yu*1.2020569031595942) - 45*(1899*Power(
      g1,4) + 10*Sqr(g1)*(-96*traceAdjYdYd + 48*traceAdjYeYe + 123*Sqr(g2) +
      152*Sqr(g3)) + 25*(135*Power(g2,4) + 24*Sqr(g2)*(-3*(3*traceAdjYdYd +
      traceAdjYeYe) + 2*Sqr(g3)) - 4*(8*Power(g3,4) - 24*(traceAdjYdYd -
      traceAdjYeYe)*Sqr(g3) - 3*(-18*traceAdjYdYdAdjYdYd + 6*traceAdjYdYd*
      traceAdjYeYe - 6*traceAdjYeYeAdjYeYe - 6*traceAdjYuYuAdjYdYd + 9*Sqr(
      traceAdjYdYd) + Sqr(traceAdjYeYe)))))*(Yu*Yd.adjoint()*Yd) - 385245*Power
      (g1,4)*(Yu*Yu.adjoint()*Yu) - 739125*Power(g2,4)*(Yu*Yu.adjoint()*Yu) +
      108000*Power(g3,4)*(Yu*Yu.adjoint()*Yu) + 243000*traceAdjYuYuAdjYdYd*(Yu*
      Yu.adjoint()*Yu) + 729000*traceAdjYuYuAdjYuYu*(Yu*Yu.adjoint()*Yu) +
      121500*traceAdjYuYu*Sqr(g1)*(Yu*Yu.adjoint()*Yu) + 607500*traceAdjYuYu*
      Sqr(g2)*(Yu*Yu.adjoint()*Yu) - 260550*Sqr(g1)*Sqr(g2)*(Yu*Yu.adjoint()*Yu
      ) - 324000*traceAdjYuYu*Sqr(g3)*(Yu*Yu.adjoint()*Yu) - 190800*Sqr(g1)*Sqr
      (g3)*(Yu*Yu.adjoint()*Yu) - 1242000*Sqr(g2)*Sqr(g3)*(Yu*Yu.adjoint()*Yu)
      - 364500*Sqr(traceAdjYuYu)*(Yu*Yu.adjoint()*Yu) + 3150*Power(g1,4)*(Yu*
      Yd.adjoint()*Yd*1.2020569031595942) - 425250*Power(g2,4)*(Yu*Yd.adjoint()
      *Yd*1.2020569031595942) - 1224000*Power(g3,4)*(Yu*Yd.adjoint()*Yd*
      1.2020569031595942) - 64800*traceAdjYdYd*Sqr(g1)*(Yu*Yd.adjoint()*Yd*
      1.2020569031595942) + 32400*traceAdjYeYe*Sqr(g1)*(Yu*Yd.adjoint()*Yd*
      1.2020569031595942) + 24300*Sqr(g1)*Sqr(g2)*(Yu*Yd.adjoint()*Yd*
      1.2020569031595942) + 648000*traceAdjYdYd*Sqr(g3)*(Yu*Yd.adjoint()*Yd*
      1.2020569031595942) + 115200*Sqr(g1)*Sqr(g3)*(Yu*Yd.adjoint()*Yd*
      1.2020569031595942) - 31590*Power(g1,4)*(Yu*Yu.adjoint()*Yu*
      1.2020569031595942) - 546750*Power(g2,4)*(Yu*Yu.adjoint()*Yu*
      1.2020569031595942) - 3672000*Power(g3,4)*(Yu*Yu.adjoint()*Yu*
      1.2020569031595942) + 48600*traceAdjYuYu*Sqr(g1)*(Yu*Yu.adjoint()*Yu*
      1.2020569031595942) - 729000*traceAdjYuYu*Sqr(g2)*(Yu*Yu.adjoint()*Yu*
      1.2020569031595942) + 332100*Sqr(g1)*Sqr(g2)*(Yu*Yu.adjoint()*Yu*
      1.2020569031595942) + 1944000*traceAdjYuYu*Sqr(g3)*(Yu*Yu.adjoint()*Yu*
      1.2020569031595942) - 86400*Sqr(g1)*Sqr(g3)*(Yu*Yu.adjoint()*Yu*
      1.2020569031595942) + 1296000*Sqr(g2)*Sqr(g3)*(Yu*Yu.adjoint()*Yu*
      1.2020569031595942))*UNITMATRIX(3)).real();
   const Eigen::Matrix<double,3,3> beta_Yu_2 = (0.06666666666666667*
      threeLoop*((7*Sqr(g1) + 5*(18*traceAdjYdYd + 6*traceAdjYeYe - 9*Sqr(g2) +
      64*Sqr(g3)))*(Yu*Yd.adjoint()*Yd*Yd.adjoint()*Yd) + (19*Sqr(g1) + 5*(36*
      traceAdjYdYd + 12*traceAdjYeYe - 18*traceAdjYuYu + 27*Sqr(g2) + 64*Sqr(g3
      )))*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*Yu) + 2*(5*(18*traceAdjYuYu + 5*Sqr(
      g1) + 9*Sqr(g2) + 64*Sqr(g3))*(Yu*Yu.adjoint()*Yu*Yu.adjoint()*Yu) + 3*(
      -3*(Sqr(g1) - 15*Sqr(g2))*(Yu*Yd.adjoint()*Yd*Yd.adjoint()*Yd*
      1.2020569031595942) + 9*(Sqr(g1) - 5*Sqr(g2))*(Yu*Yd.adjoint()*Yd*
      Yu.adjoint()*Yu*1.2020569031595942) + 5*(3*(Yu*Yd.adjoint()*Yd*Yd.adjoint
      ()*Yd*Yu.adjoint()*Yu) + 2*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*Yu*Yd.adjoint
      ()*Yd) - Yu*Yd.adjoint()*Yd*Yu.adjoint()*Yu*Yu.adjoint()*Yu + Yu*
      Yu.adjoint()*Yu*Yd.adjoint()*Yd*Yu.adjoint()*Yu + 3*(Yu*Yu.adjoint()*Yu*
      Yu.adjoint()*Yu*Yu.adjoint()*Yu) + 3*(Yu*Yd.adjoint()*Yd*Yd.adjoint()*Yd*
      Yd.adjoint()*Yd*1.2020569031595942) + 9*(Yu*Yu.adjoint()*Yu*Yu.adjoint()*
      Yu*Yu.adjoint()*Yu*1.2020569031595942)))))*UNITMATRIX(3)).real();

   beta_Yu = beta_Yu_1 + beta_Yu_2;


   return beta_Yu;
}

} // namespace flexiblesusy
