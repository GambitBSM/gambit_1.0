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

// File generated at Sat 27 Aug 2016 12:44:42

#include "lowMSSM_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of Yd.
 *
 * @return one-loop beta function
 */
Eigen::Matrix<double,3,3> lowMSSM_susy_parameters::calc_beta_Yd_one_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;


   Eigen::Matrix<double,3,3> beta_Yd;

   beta_Yd = (oneOver16PiSqr*(Yd*(3*traceYdAdjYd + traceYeAdjYe -
      0.4666666666666667*Sqr(g1) - 3*Sqr(g2) - 5.333333333333333*Sqr(g3)) + 3*(
      Yd*Yd.adjoint()*Yd) + Yd*Yu.adjoint()*Yu)).real();


   return beta_Yd;
}

/**
 * Calculates the two-loop beta function of Yd.
 *
 * @return two-loop beta function
 */
Eigen::Matrix<double,3,3> lowMSSM_susy_parameters::calc_beta_Yd_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   Eigen::Matrix<double,3,3> beta_Yd;

   beta_Yd = (twoLoop*(Yd*(3.188888888888889*Power(g1,4) + 7.5*Power(g2,4
      ) - 1.7777777777777777*Power(g3,4) - 9*traceYdAdjYdYdAdjYd - 3*
      traceYdAdjYuYuAdjYd - 3*traceYeAdjYeYeAdjYe + 1.2*traceYeAdjYe*Sqr(g1) +
      Sqr(g1)*Sqr(g2) - 0.4*traceYdAdjYd*(Sqr(g1) - 40*Sqr(g3)) +
      0.8888888888888888*Sqr(g1)*Sqr(g3) + 8*Sqr(g2)*Sqr(g3)) + (-9*
      traceYdAdjYd - 3*traceYeAdjYe + 0.8*Sqr(g1) + 6*Sqr(g2))*(Yd*Yd.adjoint()
      *Yd) - 3*traceYuAdjYu*(Yd*Yu.adjoint()*Yu) + 0.8*Sqr(g1)*(Yd*Yu.adjoint()
      *Yu) - 4*(Yd*Yd.adjoint()*Yd*Yd.adjoint()*Yd) - 2*(Yd*Yu.adjoint()*Yu*
      Yd.adjoint()*Yd) - 2*(Yd*Yu.adjoint()*Yu*Yu.adjoint()*Yu))).real();


   return beta_Yd;
}

/**
 * Calculates the three-loop beta function of Yd.
 *
 * @return three-loop beta function
 */
Eigen::Matrix<double,3,3> lowMSSM_susy_parameters::calc_beta_Yd_three_loop(const Susy_traces& susy_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)

   const double traceAdjYdYd = TRACE_STRUCT.traceAdjYdYd;
   const double traceAdjYeYe = TRACE_STRUCT.traceAdjYeYe;
   const double traceAdjYuYu = TRACE_STRUCT.traceAdjYuYu;
   const double traceAdjYdYdAdjYdYd = TRACE_STRUCT.traceAdjYdYdAdjYdYd;
   const double traceAdjYeYeAdjYeYe = TRACE_STRUCT.traceAdjYeYeAdjYeYe;
   const double traceAdjYuYuAdjYdYd = TRACE_STRUCT.traceAdjYuYuAdjYdYd;
   const double traceAdjYuYuAdjYuYu = TRACE_STRUCT.traceAdjYuYuAdjYuYu;
   const double traceAdjYdYdAdjYdYdAdjYdYd =
      TRACE_STRUCT.traceAdjYdYdAdjYdYdAdjYdYd;
   const double traceAdjYeYeAdjYeYeAdjYeYe =
      TRACE_STRUCT.traceAdjYeYeAdjYeYeAdjYeYe;
   const double traceAdjYuYuAdjYuYuAdjYdYd =
      TRACE_STRUCT.traceAdjYuYuAdjYuYuAdjYdYd;


   Eigen::Matrix<double,3,3> beta_Yd;

   const Eigen::Matrix<double,3,3> beta_Yd_1 = (0.00007407407407407407*
      threeLoop*(389302*Power(g1,6)*Yd + 2328750*Power(g2,6)*Yd + 2720000*Power
      (g3,6)*Yd - 212625*Power(g1,4)*traceAdjYdYd*Yd - 1063125*Power(g2,4)*
      traceAdjYdYd*Yd - 1440000*Power(g3,4)*traceAdjYdYd*Yd + 729000*
      traceAdjYdYd*traceAdjYdYdAdjYdYd*Yd + 40500*traceAdjYdYdAdjYdYdAdjYdYd*Yd
      - 427275*Power(g1,4)*traceAdjYeYe*Yd - 354375*Power(g2,4)*traceAdjYeYe*
      Yd + 243000*traceAdjYdYdAdjYdYd*traceAdjYeYe*Yd + 243000*traceAdjYdYd*
      traceAdjYeYeAdjYeYe*Yd + 81000*traceAdjYeYe*traceAdjYeYeAdjYeYe*Yd +
      13500*traceAdjYeYeAdjYeYeAdjYeYe*Yd - 81900*Power(g1,4)*traceAdjYuYu*Yd -
      607500*Power(g2,4)*traceAdjYuYu*Yd - 720000*Power(g3,4)*traceAdjYuYu*Yd
      + 243000*traceAdjYuYu*traceAdjYuYuAdjYdYd*Yd + 121500*
      traceAdjYuYuAdjYuYuAdjYdYd*Yd + 114750*Power(g2,4)*Yd*Sqr(g1) + 318000*
      Power(g3,4)*Yd*Sqr(g1) + 40500*traceAdjYdYdAdjYdYd*Yd*Sqr(g1) + 121500*
      traceAdjYeYeAdjYeYe*Yd*Sqr(g1) - 32400*traceAdjYuYuAdjYdYd*Yd*Sqr(g1) +
      29430*Power(g1,4)*Yd*Sqr(g2) + 918000*Power(g3,4)*Yd*Sqr(g2) + 121500*
      traceAdjYdYdAdjYdYd*Yd*Sqr(g2) + 40500*traceAdjYeYeAdjYeYe*Yd*Sqr(g2) +
      243000*traceAdjYuYuAdjYdYd*Yd*Sqr(g2) - 4050*traceAdjYdYd*Yd*Sqr(g1)*Sqr(
      g2) - 109350*traceAdjYeYe*Yd*Sqr(g1)*Sqr(g2) + 233520*Power(g1,4)*Yd*Sqr(
      g3) + 1890000*Power(g2,4)*Yd*Sqr(g3) + 972000*traceAdjYdYdAdjYdYd*Yd*Sqr(
      g3) + 324000*traceAdjYuYuAdjYdYd*Yd*Sqr(g3) - 255600*traceAdjYdYd*Yd*Sqr(
      g1)*Sqr(g3) - 1782000*traceAdjYdYd*Yd*Sqr(g2)*Sqr(g3) - 21600*Yd*Sqr(g1)*
      Sqr(g2)*Sqr(g3) - 54*(2786*Power(g1,6) + 5*Power(g1,4)*(77*traceAdjYdYd -
      81*traceAdjYeYe + 378*Sqr(g2) + 1232*Sqr(g3)) + 50*Sqr(g1)*(81*Power(g2,
      4) + 9*(5*traceAdjYdYd - 9*traceAdjYeYe)*Sqr(g2) + 2*(88*Power(g3,4) - 27
      *traceAdjYdYdAdjYdYd + 27*traceAdjYeYeAdjYeYe - 21*traceAdjYuYuAdjYdYd -
      56*traceAdjYdYd*Sqr(g3))) - 125*(630*Power(g2,6) - 9*Power(g2,4)*(7*(3*
      traceAdjYdYd + traceAdjYeYe) + 48*Sqr(g3)) - 36*Sqr(g2)*(8*Power(g3,4) -
      3*traceAdjYdYdAdjYdYd - traceAdjYeYeAdjYeYe - 8*traceAdjYdYd*Sqr(g3)) + 4
      *(320*Power(g3,6) - 8*Power(g3,4)*traceAdjYdYd + 3*(3*
      traceAdjYdYdAdjYdYdAdjYdYd + traceAdjYeYeAdjYeYeAdjYeYe) - 24*(3*
      traceAdjYdYdAdjYdYd + traceAdjYuYuAdjYdYd)*Sqr(g3))))*(Yd*
      1.2020569031595942) - 45*(5269*Power(g1,4) + 10*Sqr(g1)*(-306*
      traceAdjYdYd + 138*traceAdjYeYe + 381*Sqr(g2) + 296*Sqr(g3)) + 75*(219*
      Power(g2,4) + 4*Sqr(g2)*(-15*(3*traceAdjYdYd + traceAdjYeYe) + 92*Sqr(g3)
      ) - 4*(8*Power(g3,4) - 24*(traceAdjYdYd - traceAdjYeYe)*Sqr(g3) - 3*(-18*
      traceAdjYdYdAdjYdYd + 6*traceAdjYdYd*traceAdjYeYe - 6*traceAdjYeYeAdjYeYe
      - 6*traceAdjYuYuAdjYdYd + 9*Sqr(traceAdjYdYd) + Sqr(traceAdjYeYe)))))*(
      Yd*Yd.adjoint()*Yd) - 169515*Power(g1,4)*(Yd*Yu.adjoint()*Yu) - 151875*
      Power(g2,4)*(Yd*Yu.adjoint()*Yu) + 36000*Power(g3,4)*(Yd*Yu.adjoint()*Yu)
      + 81000*traceAdjYuYuAdjYdYd*(Yd*Yu.adjoint()*Yu) + 243000*
      traceAdjYuYuAdjYuYu*(Yd*Yu.adjoint()*Yu) + 27000*traceAdjYuYu*Sqr(g1)*(Yd
      *Yu.adjoint()*Yu) + 243000*traceAdjYuYu*Sqr(g2)*(Yd*Yu.adjoint()*Yu) -
      79650*Sqr(g1)*Sqr(g2)*(Yd*Yu.adjoint()*Yu) - 108000*traceAdjYuYu*Sqr(g3)*
      (Yd*Yu.adjoint()*Yu) - 183600*Sqr(g1)*Sqr(g3)*(Yd*Yu.adjoint()*Yu) -
      54000*Sqr(g2)*Sqr(g3)*(Yd*Yu.adjoint()*Yu) - 121500*Sqr(traceAdjYuYu)*(Yd
      *Yu.adjoint()*Yu) + 1890*Power(g1,4)*(Yd*Yd.adjoint()*Yd*
      1.2020569031595942) - 546750*Power(g2,4)*(Yd*Yd.adjoint()*Yd*
      1.2020569031595942) + 137700*Sqr(g1)*Sqr(g2)*(Yd*Yd.adjoint()*Yd*
      1.2020569031595942) + 259200*Sqr(g1)*Sqr(g3)*(Yd*Yd.adjoint()*Yd*
      1.2020569031595942) + 1296000*Sqr(g2)*Sqr(g3)*(Yd*Yd.adjoint()*Yd*
      1.2020569031595942))*UNITMATRIX(3)).real();
   const Eigen::Matrix<double,3,3> beta_Yd_2 = (-0.006666666666666667*
      threeLoop*(60*(680*Power(g3,4) + 3*((9*traceAdjYdYd - 7*traceAdjYeYe)*Sqr
      (g1) + 15*(3*traceAdjYdYd + traceAdjYeYe)*Sqr(g2)) - 360*traceAdjYdYd*Sqr
      (g3))*(Yd*Yd.adjoint()*Yd*1.2020569031595942) + (-143*Power(g1,4) - 10*
      Sqr(g1)*(-72*traceAdjYuYu + 135*Sqr(g2) + 128*Sqr(g3)) + 25*(189*Power(g2
      ,4) + 544*Power(g3,4) - 288*traceAdjYuYu*Sqr(g3)))*(Yd*Yu.adjoint()*Yu*
      1.2020569031595942) - 10*(2*(Sqr(g1) + 5*(18*traceAdjYdYd + 6*
      traceAdjYeYe + 9*Sqr(g2) + 64*Sqr(g3)))*(Yd*Yd.adjoint()*Yd*Yd.adjoint()*
      Yd) + (-29*Sqr(g1) + 5*(-6*(3*traceAdjYdYd + traceAdjYeYe - 6*
      traceAdjYuYu) + 27*Sqr(g2) + 64*Sqr(g3)))*(Yd*Yu.adjoint()*Yu*Yd.adjoint(
      )*Yd) + 90*traceAdjYuYu*(Yd*Yu.adjoint()*Yu*Yu.adjoint()*Yu) + 55*Sqr(g1)
      *(Yd*Yu.adjoint()*Yu*Yu.adjoint()*Yu) - 45*Sqr(g2)*(Yd*Yu.adjoint()*Yu*
      Yu.adjoint()*Yu) + 320*Sqr(g3)*(Yd*Yu.adjoint()*Yu*Yu.adjoint()*Yu) + 54*
      Sqr(g1)*(Yd*Yu.adjoint()*Yu*Yd.adjoint()*Yd*1.2020569031595942) - 270*Sqr
      (g2)*(Yd*Yu.adjoint()*Yu*Yd.adjoint()*Yd*1.2020569031595942) - 90*Sqr(g1)
      *(Yd*Yu.adjoint()*Yu*Yu.adjoint()*Yu*1.2020569031595942) + 270*Sqr(g2)*(
      Yd*Yu.adjoint()*Yu*Yu.adjoint()*Yu*1.2020569031595942) + 90*(Yd*
      Yd.adjoint()*Yd*Yd.adjoint()*Yd*Yd.adjoint()*Yd) + 30*(Yd*Yd.adjoint()*Yd
      *Yu.adjoint()*Yu*Yd.adjoint()*Yd) - 30*(Yd*Yu.adjoint()*Yu*Yd.adjoint()*
      Yd*Yd.adjoint()*Yd) + 60*(Yd*Yu.adjoint()*Yu*Yd.adjoint()*Yd*Yu.adjoint()
      *Yu) + 90*(Yd*Yu.adjoint()*Yu*Yu.adjoint()*Yu*Yd.adjoint()*Yd) + 270*(Yd*
      Yd.adjoint()*Yd*Yd.adjoint()*Yd*Yd.adjoint()*Yd*1.2020569031595942) + 90*
      (Yd*Yu.adjoint()*Yu*Yu.adjoint()*Yu*Yu.adjoint()*Yu*1.2020569031595942)))
      *UNITMATRIX(3)).real();

   beta_Yd = beta_Yd_1 + beta_Yd_2;


   return beta_Yd;
}

} // namespace flexiblesusy
