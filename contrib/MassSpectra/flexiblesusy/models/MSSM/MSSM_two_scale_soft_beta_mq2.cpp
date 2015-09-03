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

// File generated at Mon 1 Jun 2015 13:31:43

#include "MSSM_two_scale_soft_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT soft_traces

/**
 * Calculates the one-loop beta function of mq2.
 *
 * @return one-loop beta function
 */
Eigen::Matrix<double,3,3> MSSM_soft_parameters::calc_beta_mq2_one_loop(const Soft_traces& soft_traces) const
{
   const double Tr11 = TRACE_STRUCT.Tr11;


   Eigen::Matrix<double,3,3> beta_mq2;

   beta_mq2 = (oneOver16PiSqr*(2*mHd2*(Yd.adjoint()*Yd) + 2*mHu2*(
      Yu.adjoint()*Yu) + 2*((TYd).adjoint()*TYd) + 2*((TYu).adjoint()*TYu) +
      mq2*Yd.adjoint()*Yd + mq2*Yu.adjoint()*Yu + 2*(Yd.adjoint()*md2*Yd) +
      Yd.adjoint()*Yd*mq2 + 2*(Yu.adjoint()*mu2*Yu) + Yu.adjoint()*Yu*mq2 +
      0.2581988897471611*g1*Tr11*UNITMATRIX(3) - 0.13333333333333333*AbsSqr(
      MassB)*Sqr(g1)*UNITMATRIX(3) - 6*AbsSqr(MassWB)*Sqr(g2)*UNITMATRIX(3) -
      10.666666666666666*AbsSqr(MassG)*Sqr(g3)*UNITMATRIX(3))).real();


   return beta_mq2;
}

/**
 * Calculates the two-loop beta function of mq2.
 *
 * @return two-loop beta function
 */
Eigen::Matrix<double,3,3> MSSM_soft_parameters::calc_beta_mq2_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceconjTYdTpTYd = TRACE_STRUCT.traceconjTYdTpTYd;
   const double traceconjTYeTpTYe = TRACE_STRUCT.traceconjTYeTpTYe;
   const double tracemd2YdAdjYd = TRACE_STRUCT.tracemd2YdAdjYd;
   const double traceme2YeAdjYe = TRACE_STRUCT.traceme2YeAdjYe;
   const double traceml2AdjYeYe = TRACE_STRUCT.traceml2AdjYeYe;
   const double tracemq2AdjYdYd = TRACE_STRUCT.tracemq2AdjYdYd;
   const double traceconjTYdTpYd = TRACE_STRUCT.traceconjTYdTpYd;
   const double traceconjTYeTpYe = TRACE_STRUCT.traceconjTYeTpYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceconjTYuTpTYu = TRACE_STRUCT.traceconjTYuTpTYu;
   const double tracemq2AdjYuYu = TRACE_STRUCT.tracemq2AdjYuYu;
   const double tracemu2YuAdjYu = TRACE_STRUCT.tracemu2YuAdjYu;
   const double traceconjTYuTpYu = TRACE_STRUCT.traceconjTYuTpYu;
   const double traceAdjYdTYd = TRACE_STRUCT.traceAdjYdTYd;
   const double traceAdjYeTYe = TRACE_STRUCT.traceAdjYeTYe;
   const double traceAdjYuTYu = TRACE_STRUCT.traceAdjYuTYu;
   const double Tr2U111 = TRACE_STRUCT.Tr2U111;
   const double Tr31 = TRACE_STRUCT.Tr31;
   const double Tr22 = TRACE_STRUCT.Tr22;
   const double Tr23 = TRACE_STRUCT.Tr23;


   Eigen::Matrix<double,3,3> beta_mq2;

   beta_mq2 = (twoLoop*(-6*traceconjTYdTpTYd*(Yd.adjoint()*Yd) - 2*
      traceconjTYeTpTYe*(Yd.adjoint()*Yd) - 6*tracemd2YdAdjYd*(Yd.adjoint()*Yd)
      - 2*traceme2YeAdjYe*(Yd.adjoint()*Yd) - 2*traceml2AdjYeYe*(Yd.adjoint()*
      Yd) - 6*tracemq2AdjYdYd*(Yd.adjoint()*Yd) - 12*mHd2*traceYdAdjYd*(
      Yd.adjoint()*Yd) - 4*mHd2*traceYeAdjYe*(Yd.adjoint()*Yd) + 0.8*mHd2*Sqr(
      g1)*(Yd.adjoint()*Yd) - 6*traceconjTYdTpYd*(Yd.adjoint()*TYd) - 2*
      traceconjTYeTpYe*(Yd.adjoint()*TYd) - 6*traceconjTYuTpTYu*(Yu.adjoint()*
      Yu) - 6*tracemq2AdjYuYu*(Yu.adjoint()*Yu) - 6*tracemu2YuAdjYu*(Yu.adjoint
      ()*Yu) - 12*mHu2*traceYuAdjYu*(Yu.adjoint()*Yu) + 1.6*mHu2*Sqr(g1)*(
      Yu.adjoint()*Yu) - 6*traceconjTYuTpYu*(Yu.adjoint()*TYu) - 6*
      traceAdjYdTYd*((TYd).adjoint()*Yd) - 2*traceAdjYeTYe*((TYd).adjoint()*Yd)
      - 0.8*MassB*Sqr(g1)*((TYd).adjoint()*Yd) - 6*traceYdAdjYd*((TYd).adjoint
      ()*TYd) - 2*traceYeAdjYe*((TYd).adjoint()*TYd) + 0.8*Sqr(g1)*((TYd)
      .adjoint()*TYd) - 6*traceAdjYuTYu*((TYu).adjoint()*Yu) - 1.6*MassB*Sqr(g1
      )*((TYu).adjoint()*Yu) - 6*traceYuAdjYu*((TYu).adjoint()*TYu) + 1.6*Sqr(
      g1)*((TYu).adjoint()*TYu) - 3*traceYdAdjYd*(mq2*Yd.adjoint()*Yd) -
      traceYeAdjYe*(mq2*Yd.adjoint()*Yd) + 0.4*Sqr(g1)*(mq2*Yd.adjoint()*Yd) -
      3*traceYuAdjYu*(mq2*Yu.adjoint()*Yu) + 0.8*Sqr(g1)*(mq2*Yu.adjoint()*Yu)
      - 6*traceYdAdjYd*(Yd.adjoint()*md2*Yd) - 2*traceYeAdjYe*(Yd.adjoint()*md2
      *Yd) + 0.8*Sqr(g1)*(Yd.adjoint()*md2*Yd) - 3*traceYdAdjYd*(Yd.adjoint()*
      Yd*mq2) - traceYeAdjYe*(Yd.adjoint()*Yd*mq2) + 0.4*Sqr(g1)*(Yd.adjoint()*
      Yd*mq2) - 6*traceYuAdjYu*(Yu.adjoint()*mu2*Yu) + 1.6*Sqr(g1)*(Yu.adjoint(
      )*mu2*Yu) - 3*traceYuAdjYu*(Yu.adjoint()*Yu*mq2) + 0.8*Sqr(g1)*(
      Yu.adjoint()*Yu*mq2) - 8*mHd2*(Yd.adjoint()*Yd*Yd.adjoint()*Yd) - 4*(
      Yd.adjoint()*Yd*(TYd).adjoint()*TYd) - 4*(Yd.adjoint()*TYd*(TYd).adjoint(
      )*Yd) - 8*mHu2*(Yu.adjoint()*Yu*Yu.adjoint()*Yu) - 4*(Yu.adjoint()*Yu*(
      TYu).adjoint()*TYu) - 4*(Yu.adjoint()*TYu*(TYu).adjoint()*Yu) - 4*((TYd)
      .adjoint()*Yd*Yd.adjoint()*TYd) - 4*((TYd).adjoint()*TYd*Yd.adjoint()*Yd)
      - 4*((TYu).adjoint()*Yu*Yu.adjoint()*TYu) - 4*((TYu).adjoint()*TYu*
      Yu.adjoint()*Yu) - 2*(mq2*Yd.adjoint()*Yd*Yd.adjoint()*Yd) - 2*(mq2*
      Yu.adjoint()*Yu*Yu.adjoint()*Yu) - 4*(Yd.adjoint()*md2*Yd*Yd.adjoint()*Yd
      ) - 4*(Yd.adjoint()*Yd*mq2*Yd.adjoint()*Yd) - 4*(Yd.adjoint()*Yd*
      Yd.adjoint()*md2*Yd) - 2*(Yd.adjoint()*Yd*Yd.adjoint()*Yd*mq2) - 4*(
      Yu.adjoint()*mu2*Yu*Yu.adjoint()*Yu) - 4*(Yu.adjoint()*Yu*mq2*Yu.adjoint(
      )*Yu) - 4*(Yu.adjoint()*Yu*Yu.adjoint()*mu2*Yu) - 2*(Yu.adjoint()*Yu*
      Yu.adjoint()*Yu*mq2) + 6*Power(g2,4)*Tr22*UNITMATRIX(3) +
      10.666666666666666*Power(g3,4)*Tr23*UNITMATRIX(3) + 1.0327955589886444*g1
      *Tr31*UNITMATRIX(3) + 33*Power(g2,4)*AbsSqr(MassWB)*UNITMATRIX(3) +
      0.13333333333333333*Tr2U111*Sqr(g1)*UNITMATRIX(3) + 0.4*AbsSqr(MassWB)*
      Sqr(g1)*Sqr(g2)*UNITMATRIX(3) + 0.2*MassB*Conj(MassWB)*Sqr(g1)*Sqr(g2)*
      UNITMATRIX(3) + 32*AbsSqr(MassWB)*Sqr(g2)*Sqr(g3)*UNITMATRIX(3) + 16*
      MassG*Conj(MassWB)*Sqr(g2)*Sqr(g3)*UNITMATRIX(3) + 0.35555555555555557*
      Conj(MassG)*Sqr(g3)*((MassB + 2*MassG)*Sqr(g1) + 15*(3*(2*MassG + MassWB)
      *Sqr(g2) - 8*MassG*Sqr(g3)))*UNITMATRIX(3) + 0.0044444444444444444*Conj(
      MassB)*Sqr(g1)*(180*(2*MassB*(Yd.adjoint()*Yd) - Yd.adjoint()*TYd + 4*
      MassB*(Yu.adjoint()*Yu) - 2*(Yu.adjoint()*TYu)) + (597*MassB*Sqr(g1) + 5*
      (9*(2*MassB + MassWB)*Sqr(g2) + 16*(2*MassB + MassG)*Sqr(g3)))*UNITMATRIX
      (3)))).real();


   return beta_mq2;
}

} // namespace flexiblesusy
