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

// File generated at Mon 1 Jun 2015 13:26:34

#include "CMSSM_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of Mu.
 *
 * @return one-loop beta function
 */
double CMSSM_susy_parameters::calc_beta_Mu_one_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_Mu;

   beta_Mu = Re(oneOver16PiSqr*(3*traceYdAdjYd*Mu + traceYeAdjYe*Mu - 0.6
      *Mu*(-5*traceYuAdjYu + Sqr(g1) + 5*Sqr(g2))));


   return beta_Mu;
}

/**
 * Calculates the two-loop beta function of Mu.
 *
 * @return two-loop beta function
 */
double CMSSM_susy_parameters::calc_beta_Mu_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   double beta_Mu;

   beta_Mu = Re(0.02*twoLoop*Mu*(207*Power(g1,4) + 375*Power(g2,4) - 450*
      traceYdAdjYdYdAdjYd - 300*traceYdAdjYuYuAdjYd - 150*traceYeAdjYeYeAdjYe -
      450*traceYuAdjYuYuAdjYu + 60*traceYeAdjYe*Sqr(g1) + 40*traceYuAdjYu*Sqr(
      g1) + 90*Sqr(g1)*Sqr(g2) - 20*traceYdAdjYd*(Sqr(g1) - 40*Sqr(g3)) + 800*
      traceYuAdjYu*Sqr(g3)));


   return beta_Mu;
}

} // namespace flexiblesusy
