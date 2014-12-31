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

// File generated at Wed 3 Dec 2014 13:12:10

#include "CMSSMNoFV_two_scale_soft_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT soft_traces

/**
 * Calculates the one-loop beta function of me2.
 *
 * @return one-loop beta function
 */
Eigen::Matrix<double,3,3> CMSSMNoFV_soft_parameters::calc_beta_me2_one_loop(const Soft_traces& soft_traces) const
{
   const double Tr11 = TRACE_STRUCT.Tr11;


   Eigen::Matrix<double,3,3> beta_me2;

   beta_me2 = oneOver16PiSqr*(2*(2*mHd2*(Ye*Ye.adjoint()) + 2*(TYe*(TYe)
      .adjoint()) + me2*Ye*Ye.adjoint() + 2*(Ye*ml2*Ye.adjoint()) + Ye*
      Ye.adjoint()*me2) + 1.5491933384829668*g1*Tr11*UNITMATRIX(3) - 4.8*AbsSqr
      (MassB)*Sqr(g1)*UNITMATRIX(3));


   return beta_me2;
}

/**
 * Calculates the two-loop beta function of me2.
 *
 * @return two-loop beta function
 */
Eigen::Matrix<double,3,3> CMSSMNoFV_soft_parameters::calc_beta_me2_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceconjTYdTpTYd = TRACE_STRUCT.traceconjTYdTpTYd;
   const double traceconjTYeTpTYe = TRACE_STRUCT.traceconjTYeTpTYe;
   const double tracemd2YdAdjYd = TRACE_STRUCT.tracemd2YdAdjYd;
   const double traceme2YeAdjYe = TRACE_STRUCT.traceme2YeAdjYe;
   const double traceml2AdjYeYe = TRACE_STRUCT.traceml2AdjYeYe;
   const double tracemq2AdjYdYd = TRACE_STRUCT.tracemq2AdjYdYd;
   const double traceAdjYdTYd = TRACE_STRUCT.traceAdjYdTYd;
   const double traceAdjYeTYe = TRACE_STRUCT.traceAdjYeTYe;
   const double traceconjTYdTpYd = TRACE_STRUCT.traceconjTYdTpYd;
   const double traceconjTYeTpYe = TRACE_STRUCT.traceconjTYeTpYe;
   const double Tr2U111 = TRACE_STRUCT.Tr2U111;
   const double Tr31 = TRACE_STRUCT.Tr31;


   Eigen::Matrix<double,3,3> beta_me2;

   beta_me2 = 0.08*twoLoop*(-5*(2*(15*traceconjTYdTpTYd + 5*
      traceconjTYeTpTYe + 15*tracemd2YdAdjYd + 5*traceme2YeAdjYe + 5*
      traceml2AdjYeYe + 15*tracemq2AdjYdYd + 30*mHd2*traceYdAdjYd + 10*mHd2*
      traceYeAdjYe + 3*mHd2*Sqr(g1) - 15*mHd2*Sqr(g2) - 30*AbsSqr(MassWB)*Sqr(
      g2))*(Ye*Ye.adjoint()) + (30*traceAdjYdTYd + 10*traceAdjYeTYe - 6*MassB*
      Sqr(g1) + 30*MassWB*Sqr(g2))*(Ye*(TYe).adjoint()) + 30*traceconjTYdTpYd*(
      TYe*Ye.adjoint()) + 10*traceconjTYeTpYe*(TYe*Ye.adjoint()) + 30*Conj(
      MassWB)*Sqr(g2)*(TYe*Ye.adjoint()) + 30*traceYdAdjYd*(TYe*(TYe).adjoint()
      ) + 10*traceYeAdjYe*(TYe*(TYe).adjoint()) + 6*Sqr(g1)*(TYe*(TYe).adjoint(
      )) - 30*Sqr(g2)*(TYe*(TYe).adjoint()) + 15*traceYdAdjYd*(me2*Ye*
      Ye.adjoint()) + 5*traceYeAdjYe*(me2*Ye*Ye.adjoint()) + 3*Sqr(g1)*(me2*Ye*
      Ye.adjoint()) - 15*Sqr(g2)*(me2*Ye*Ye.adjoint()) + 30*traceYdAdjYd*(Ye*
      ml2*Ye.adjoint()) + 10*traceYeAdjYe*(Ye*ml2*Ye.adjoint()) + 6*Sqr(g1)*(Ye
      *ml2*Ye.adjoint()) - 30*Sqr(g2)*(Ye*ml2*Ye.adjoint()) + 15*traceYdAdjYd*(
      Ye*Ye.adjoint()*me2) + 5*traceYeAdjYe*(Ye*Ye.adjoint()*me2) + 3*Sqr(g1)*(
      Ye*Ye.adjoint()*me2) - 15*Sqr(g2)*(Ye*Ye.adjoint()*me2) + 20*mHd2*(Ye*
      Ye.adjoint()*Ye*Ye.adjoint()) + 10*(Ye*Ye.adjoint()*TYe*(TYe).adjoint())
      + 10*(Ye*(TYe).adjoint()*TYe*Ye.adjoint()) + 10*(TYe*Ye.adjoint()*Ye*(TYe
      ).adjoint()) + 10*(TYe*(TYe).adjoint()*Ye*Ye.adjoint()) + 5*(me2*Ye*
      Ye.adjoint()*Ye*Ye.adjoint()) + 10*(Ye*ml2*Ye.adjoint()*Ye*Ye.adjoint())
      + 10*(Ye*Ye.adjoint()*me2*Ye*Ye.adjoint()) + 10*(Ye*Ye.adjoint()*Ye*ml2*
      Ye.adjoint()) + 5*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*me2)) + 20*g1*(3*g1*
      Tr2U111 + 3.872983346207417*Tr31)*UNITMATRIX(3) + 6*Conj(MassB)*Sqr(g1)*(
      5*(-2*MassB*(Ye*Ye.adjoint()) + TYe*Ye.adjoint()) + 234*MassB*Sqr(g1)*
      UNITMATRIX(3)));


   return beta_me2;
}

} // namespace flexiblesusy
