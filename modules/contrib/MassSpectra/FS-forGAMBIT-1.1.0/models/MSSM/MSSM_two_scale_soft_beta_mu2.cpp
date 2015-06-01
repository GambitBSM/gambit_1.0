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

// File generated at Mon 1 Jun 2015 13:31:54

#include "MSSM_two_scale_soft_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT soft_traces

/**
 * Calculates the one-loop beta function of mu2.
 *
 * @return one-loop beta function
 */
Eigen::Matrix<double,3,3> MSSM_soft_parameters::calc_beta_mu2_one_loop(const Soft_traces& soft_traces) const
{
   const double Tr11 = TRACE_STRUCT.Tr11;


   Eigen::Matrix<double,3,3> beta_mu2;

   beta_mu2 = (oneOver16PiSqr*(4*mHu2*(Yu*Yu.adjoint()) + 4*(TYu*(TYu)
      .adjoint()) + 2*(mu2*Yu*Yu.adjoint()) + 4*(Yu*mq2*Yu.adjoint()) + 2*(Yu*
      Yu.adjoint()*mu2) - 1.0327955589886444*g1*Tr11*UNITMATRIX(3) -
      2.1333333333333333*AbsSqr(MassB)*Sqr(g1)*UNITMATRIX(3) -
      10.666666666666666*AbsSqr(MassG)*Sqr(g3)*UNITMATRIX(3))).real();


   return beta_mu2;
}

/**
 * Calculates the two-loop beta function of mu2.
 *
 * @return two-loop beta function
 */
Eigen::Matrix<double,3,3> MSSM_soft_parameters::calc_beta_mu2_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceconjTYuTpTYu = TRACE_STRUCT.traceconjTYuTpTYu;
   const double tracemq2AdjYuYu = TRACE_STRUCT.tracemq2AdjYuYu;
   const double tracemu2YuAdjYu = TRACE_STRUCT.tracemu2YuAdjYu;
   const double traceAdjYuTYu = TRACE_STRUCT.traceAdjYuTYu;
   const double traceconjTYuTpYu = TRACE_STRUCT.traceconjTYuTpYu;
   const double Tr2U111 = TRACE_STRUCT.Tr2U111;
   const double Tr31 = TRACE_STRUCT.Tr31;
   const double Tr23 = TRACE_STRUCT.Tr23;


   Eigen::Matrix<double,3,3> beta_mu2;

   beta_mu2 = (twoLoop*(-12*traceconjTYuTpTYu*(Yu*Yu.adjoint()) - 12*
      tracemq2AdjYuYu*(Yu*Yu.adjoint()) - 12*tracemu2YuAdjYu*(Yu*Yu.adjoint())
      - 24*mHu2*traceYuAdjYu*(Yu*Yu.adjoint()) - 0.8*mHu2*Sqr(g1)*(Yu*
      Yu.adjoint()) + 12*mHu2*Sqr(g2)*(Yu*Yu.adjoint()) + 24*AbsSqr(MassWB)*Sqr
      (g2)*(Yu*Yu.adjoint()) - 12*traceAdjYuTYu*(Yu*(TYu).adjoint()) + 0.8*
      MassB*Sqr(g1)*(Yu*(TYu).adjoint()) - 12*MassWB*Sqr(g2)*(Yu*(TYu).adjoint(
      )) - 12*traceconjTYuTpYu*(TYu*Yu.adjoint()) - 12*Conj(MassWB)*Sqr(g2)*(
      TYu*Yu.adjoint()) - 12*traceYuAdjYu*(TYu*(TYu).adjoint()) - 0.8*Sqr(g1)*(
      TYu*(TYu).adjoint()) + 12*Sqr(g2)*(TYu*(TYu).adjoint()) - 6*traceYuAdjYu*
      (mu2*Yu*Yu.adjoint()) - 0.4*Sqr(g1)*(mu2*Yu*Yu.adjoint()) + 6*Sqr(g2)*(
      mu2*Yu*Yu.adjoint()) - 12*traceYuAdjYu*(Yu*mq2*Yu.adjoint()) - 0.8*Sqr(g1
      )*(Yu*mq2*Yu.adjoint()) + 12*Sqr(g2)*(Yu*mq2*Yu.adjoint()) - 6*
      traceYuAdjYu*(Yu*Yu.adjoint()*mu2) - 0.4*Sqr(g1)*(Yu*Yu.adjoint()*mu2) +
      6*Sqr(g2)*(Yu*Yu.adjoint()*mu2) - 4*mHd2*(Yu*Yd.adjoint()*Yd*Yu.adjoint()
      ) - 4*mHu2*(Yu*Yd.adjoint()*Yd*Yu.adjoint()) - 4*(Yu*Yd.adjoint()*TYd*(
      TYu).adjoint()) - 8*mHu2*(Yu*Yu.adjoint()*Yu*Yu.adjoint()) - 4*(Yu*
      Yu.adjoint()*TYu*(TYu).adjoint()) - 4*(Yu*(TYd).adjoint()*TYd*Yu.adjoint(
      )) - 4*(Yu*(TYu).adjoint()*TYu*Yu.adjoint()) - 4*(TYu*Yd.adjoint()*Yd*(
      TYu).adjoint()) - 4*(TYu*Yu.adjoint()*Yu*(TYu).adjoint()) - 4*(TYu*(TYd)
      .adjoint()*Yd*Yu.adjoint()) - 4*(TYu*(TYu).adjoint()*Yu*Yu.adjoint()) - 2
      *(mu2*Yu*Yd.adjoint()*Yd*Yu.adjoint()) - 2*(mu2*Yu*Yu.adjoint()*Yu*
      Yu.adjoint()) - 4*(Yu*mq2*Yd.adjoint()*Yd*Yu.adjoint()) - 4*(Yu*mq2*
      Yu.adjoint()*Yu*Yu.adjoint()) - 4*(Yu*Yd.adjoint()*md2*Yd*Yu.adjoint()) -
      4*(Yu*Yd.adjoint()*Yd*mq2*Yu.adjoint()) - 2*(Yu*Yd.adjoint()*Yd*
      Yu.adjoint()*mu2) - 4*(Yu*Yu.adjoint()*mu2*Yu*Yu.adjoint()) - 4*(Yu*
      Yu.adjoint()*Yu*mq2*Yu.adjoint()) - 2*(Yu*Yu.adjoint()*Yu*Yu.adjoint()*
      mu2) + 10.666666666666666*Power(g3,4)*Tr23*UNITMATRIX(3) -
      4.131182235954578*g1*Tr31*UNITMATRIX(3) + 2.1333333333333333*Tr2U111*Sqr(
      g1)*UNITMATRIX(3) - 2.8444444444444446*Conj(MassG)*Sqr(g3)*(-2*(MassB + 2
      *MassG)*Sqr(g1) + 15*MassG*Sqr(g3))*UNITMATRIX(3) + 0.017777777777777778*
      Conj(MassB)*Sqr(g1)*(45*(-2*MassB*(Yu*Yu.adjoint()) + TYu*Yu.adjoint()) +
      8*(321*MassB*Sqr(g1) + 40*(2*MassB + MassG)*Sqr(g3))*UNITMATRIX(3))))
      .real();


   return beta_mu2;
}

} // namespace flexiblesusy
