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

// File generated at Fri 12 Jun 2015 12:24:05

#include "SSDM_two_scale_soft_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT soft_traces

/**
 * Calculates the one-loop beta function of mH2.
 *
 * @return one-loop beta function
 */
double SSDM_soft_parameters::calc_beta_mH2_one_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_mH2;

   beta_mH2 = Re(oneOver16PiSqr*(6*mH2*traceYdAdjYd + 2*mH2*traceYeAdjYe
      + 6*mH2*traceYuAdjYu + 12*mH2*Lambda1 - 0.9*mH2*Sqr(g1) - 4.5*mH2*Sqr(g2)
      ));


   return beta_mH2;
}

/**
 * Calculates the two-loop beta function of mH2.
 *
 * @return two-loop beta function
 */
double SSDM_soft_parameters::calc_beta_mH2_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   double beta_mH2;

   beta_mH2 = Re(twoLoop*(4.1775*Power(g1,4)*mH2 - 9.0625*Power(g2,4)*mH2
      - 13.5*mH2*traceYdAdjYdYdAdjYd - 21*mH2*traceYdAdjYuYuAdjYd - 4.5*mH2*
      traceYeAdjYeYeAdjYe - 13.5*mH2*traceYuAdjYuYuAdjYu - 72*mH2*traceYuAdjYu*
      Lambda1 + 4.25*mH2*traceYuAdjYu*Sqr(g1) + 14.4*mH2*Lambda1*Sqr(g1) +
      11.25*mH2*traceYuAdjYu*Sqr(g2) + 72*mH2*Lambda1*Sqr(g2) + 1.125*mH2*Sqr(
      g1)*Sqr(g2) + 0.75*mH2*traceYeAdjYe*(-32*Lambda1 + 5*Sqr(g1) + 5*Sqr(g2))
      + 40*mH2*traceYuAdjYu*Sqr(g3) + 0.25*mH2*traceYdAdjYd*(-288*Lambda1 + 5*
      Sqr(g1) + 45*Sqr(g2) + 160*Sqr(g3)) - 60*mH2*Sqr(Lambda1)));


   return beta_mH2;
}

} // namespace flexiblesusy
