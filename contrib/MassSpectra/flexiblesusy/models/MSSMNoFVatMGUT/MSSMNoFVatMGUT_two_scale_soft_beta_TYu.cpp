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

// File generated at Mon 1 Jun 2015 12:47:28

#include "MSSMNoFVatMGUT_two_scale_soft_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT soft_traces

/**
 * Calculates the one-loop beta function of TYu.
 *
 * @return one-loop beta function
 */
Eigen::Matrix<double,3,3> MSSMNoFVatMGUT_soft_parameters::calc_beta_TYu_one_loop(const Soft_traces& soft_traces) const
{
   const double traceAdjYuTYu = TRACE_STRUCT.traceAdjYuTYu;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   Eigen::Matrix<double,3,3> beta_TYu;

   beta_TYu = (oneOver16PiSqr*(Yu*(6*traceAdjYuTYu + 1.7333333333333334*
      MassB*Sqr(g1) + 6*MassWB*Sqr(g2) + 10.666666666666666*MassG*Sqr(g3)) + 3*
      traceYuAdjYu*TYu - 0.8666666666666667*Sqr(g1)*TYu - 3*Sqr(g2)*TYu -
      5.333333333333333*Sqr(g3)*TYu + 2*(Yu*Yd.adjoint()*TYd) + 4*(Yu*
      Yu.adjoint()*TYu) + TYu*Yd.adjoint()*Yd + 5*(TYu*Yu.adjoint()*Yu))).real(
      );


   return beta_TYu;
}

/**
 * Calculates the two-loop beta function of TYu.
 *
 * @return two-loop beta function
 */
Eigen::Matrix<double,3,3> MSSMNoFVatMGUT_soft_parameters::calc_beta_TYu_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceAdjYuTYu = TRACE_STRUCT.traceAdjYuTYu;
   const double traceYdAdjYuTYuAdjYd = TRACE_STRUCT.traceYdAdjYuTYuAdjYd;
   const double traceYuAdjYdTYdAdjYu = TRACE_STRUCT.traceYuAdjYdTYdAdjYu;
   const double traceYuAdjYuTYuAdjYu = TRACE_STRUCT.traceYuAdjYuTYuAdjYu;
   const double traceAdjYdTYd = TRACE_STRUCT.traceAdjYdTYd;
   const double traceAdjYeTYe = TRACE_STRUCT.traceAdjYeTYe;
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   Eigen::Matrix<double,3,3> beta_TYu;

   beta_TYu = (twoLoop*(-0.008888888888888889*Yu*(2743*Power(g1,4)*MassB
      - 800*Power(g3,4)*MassG + 3375*Power(g2,4)*MassWB + 675*
      traceYdAdjYuTYuAdjYd + 675*traceYuAdjYdTYdAdjYu + 4050*
      traceYuAdjYuTYuAdjYu + 225*MassB*Sqr(g1)*Sqr(g2) + 225*MassWB*Sqr(g1)*Sqr
      (g2) + 680*MassB*Sqr(g1)*Sqr(g3) + 680*MassG*Sqr(g1)*Sqr(g3) + 1800*MassG
      *Sqr(g2)*Sqr(g3) + 1800*MassWB*Sqr(g2)*Sqr(g3) - 180*traceAdjYuTYu*(Sqr(
      g1) + 20*Sqr(g3)) + 180*traceYuAdjYu*(MassB*Sqr(g1) + 20*MassG*Sqr(g3)))
      + 6.095555555555555*Power(g1,4)*TYu + 7.5*Power(g2,4)*TYu -
      1.7777777777777777*Power(g3,4)*TYu - 3*traceYdAdjYuYuAdjYd*TYu - 9*
      traceYuAdjYuYuAdjYu*TYu + 0.8*traceYuAdjYu*Sqr(g1)*TYu + Sqr(g1)*Sqr(g2)*
      TYu + 16*traceYuAdjYu*Sqr(g3)*TYu + 3.022222222222222*Sqr(g1)*Sqr(g3)*TYu
      + 8*Sqr(g2)*Sqr(g3)*TYu - 0.4*(15*traceAdjYdTYd + 5*traceAdjYeTYe + 2*
      MassB*Sqr(g1))*(Yu*Yd.adjoint()*Yd) - 6*traceYdAdjYd*(Yu*Yd.adjoint()*TYd
      ) - 2*traceYeAdjYe*(Yu*Yd.adjoint()*TYd) + 0.8*Sqr(g1)*(Yu*Yd.adjoint()*
      TYd) - 18*traceAdjYuTYu*(Yu*Yu.adjoint()*Yu) - 0.8*MassB*Sqr(g1)*(Yu*
      Yu.adjoint()*Yu) - 12*MassWB*Sqr(g2)*(Yu*Yu.adjoint()*Yu) - 12*
      traceYuAdjYu*(Yu*Yu.adjoint()*TYu) + 1.2*Sqr(g1)*(Yu*Yu.adjoint()*TYu) +
      6*Sqr(g2)*(Yu*Yu.adjoint()*TYu) - 3*traceYdAdjYd*(TYu*Yd.adjoint()*Yd) -
      traceYeAdjYe*(TYu*Yd.adjoint()*Yd) + 0.4*Sqr(g1)*(TYu*Yd.adjoint()*Yd) -
      15*traceYuAdjYu*(TYu*Yu.adjoint()*Yu) + 12*Sqr(g2)*(TYu*Yu.adjoint()*Yu)
      - 4*(Yu*Yd.adjoint()*Yd*Yd.adjoint()*TYd) - 2*(Yu*Yd.adjoint()*Yd*
      Yu.adjoint()*TYu) - 4*(Yu*Yd.adjoint()*TYd*Yd.adjoint()*Yd) - 4*(Yu*
      Yd.adjoint()*TYd*Yu.adjoint()*Yu) - 6*(Yu*Yu.adjoint()*Yu*Yu.adjoint()*
      TYu) - 8*(Yu*Yu.adjoint()*TYu*Yu.adjoint()*Yu) - 2*(TYu*Yd.adjoint()*Yd*
      Yd.adjoint()*Yd) - 4*(TYu*Yd.adjoint()*Yd*Yu.adjoint()*Yu) - 6*(TYu*
      Yu.adjoint()*Yu*Yu.adjoint()*Yu))).real();


   return beta_TYu;
}

} // namespace flexiblesusy
