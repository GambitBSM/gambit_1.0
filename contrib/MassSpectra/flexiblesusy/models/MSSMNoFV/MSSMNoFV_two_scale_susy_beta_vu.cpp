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

// File generated at Mon 1 Jun 2015 13:04:26

#include "MSSMNoFV_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of vu.
 *
 * @return one-loop beta function
 */
double MSSMNoFV_susy_parameters::calc_beta_vu_one_loop(const Susy_traces& susy_traces) const
{
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_vu;

   beta_vu = Re(0.3*oneOver16PiSqr*vu*(-10*traceYuAdjYu + Sqr(g1) + 5*Sqr
      (g2)));


   return beta_vu;
}

/**
 * Calculates the two-loop beta function of vu.
 *
 * @return two-loop beta function
 */
double MSSMNoFV_susy_parameters::calc_beta_vu_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   double beta_vu;

   beta_vu = Re(-0.005*twoLoop*vu*(207*Power(g1,4) + 275*Power(g2,4) -
      600*traceYdAdjYuYuAdjYd - 1800*traceYuAdjYuYuAdjYu + 90*Sqr(g1)*Sqr(g2) +
      20*traceYuAdjYu*(17*Sqr(g1) + 45*Sqr(g2) + 160*Sqr(g3))));


   return beta_vu;
}

} // namespace flexiblesusy
