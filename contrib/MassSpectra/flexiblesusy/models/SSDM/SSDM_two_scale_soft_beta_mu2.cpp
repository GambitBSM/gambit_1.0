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

// File generated at Fri 28 Aug 2015 18:02:20

#include "SSDM_two_scale_soft_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT soft_traces

/**
 * Calculates the one-loop beta function of mu2.
 *
 * @return one-loop beta function
 */
double SSDM_soft_parameters::calc_beta_mu2_one_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_mu2;

   beta_mu2 = Re(oneOver16PiSqr*(2*Lambda2*mS2 + 12*Lambda1*mu2 + 6*mu2*
      traceYdAdjYd + 2*mu2*traceYeAdjYe + 6*mu2*traceYuAdjYu - 0.9*mu2*Sqr(g1)
      - 4.5*mu2*Sqr(g2)));


   return beta_mu2;
}

/**
 * Calculates the two-loop beta function of mu2.
 *
 * @return two-loop beta function
 */
double SSDM_soft_parameters::calc_beta_mu2_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   double beta_mu2;

   beta_mu2 = Re(twoLoop*(4.1775*Power(g1,4)*mu2 - 9.0625*Power(g2,4)*mu2
      - 13.5*mu2*traceYdAdjYdYdAdjYd - 21*mu2*traceYdAdjYuYuAdjYd - 4.5*mu2*
      traceYeAdjYeYeAdjYe - 72*Lambda1*mu2*traceYuAdjYu - 13.5*mu2*
      traceYuAdjYuYuAdjYu + 14.4*Lambda1*mu2*Sqr(g1) + 4.25*mu2*traceYuAdjYu*
      Sqr(g1) + 72*Lambda1*mu2*Sqr(g2) + 11.25*mu2*traceYuAdjYu*Sqr(g2) + 1.125
      *mu2*Sqr(g1)*Sqr(g2) + 0.75*mu2*traceYeAdjYe*(-32*Lambda1 + 5*Sqr(g1) + 5
      *Sqr(g2)) + 40*mu2*traceYuAdjYu*Sqr(g3) + 0.25*mu2*traceYdAdjYd*(-288*
      Lambda1 + 5*Sqr(g1) + 45*Sqr(g2) + 160*Sqr(g3)) - 60*mu2*Sqr(Lambda1) - 8
      *mS2*Sqr(Lambda2) - 2*mu2*Sqr(Lambda2)));


   return beta_mu2;
}

} // namespace flexiblesusy
