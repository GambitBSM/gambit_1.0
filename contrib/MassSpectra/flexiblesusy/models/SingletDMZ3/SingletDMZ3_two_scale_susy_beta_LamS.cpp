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

// File generated at Sat 27 Aug 2016 12:43:43

#include "SingletDMZ3_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of LamS.
 *
 * @return one-loop beta function
 */
double SingletDMZ3_susy_parameters::calc_beta_LamS_one_loop(const Susy_traces& susy_traces) const
{


   double beta_LamS;

   beta_LamS = Re(oneOver16PiSqr*(5*Sqr(LamS) + 2*Sqr(LamSH)));


   return beta_LamS;
}

/**
 * Calculates the two-loop beta function of LamS.
 *
 * @return two-loop beta function
 */
double SingletDMZ3_susy_parameters::calc_beta_LamS_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_LamS;

   beta_LamS = Re(twoLoop*(-15*Power(LamS,3) - 4*Power(LamSH,3) - 5*LamS*
      Sqr(LamSH) - 12*traceYdAdjYd*Sqr(LamSH) - 4*traceYeAdjYe*Sqr(LamSH) - 12*
      traceYuAdjYu*Sqr(LamSH) + 2.4*Sqr(g1)*Sqr(LamSH) + 12*Sqr(g2)*Sqr(LamSH))
      );


   return beta_LamS;
}

/**
 * Calculates the three-loop beta function of LamS.
 *
 * @return three-loop beta function
 */
double SingletDMZ3_susy_parameters::calc_beta_LamS_three_loop(const Susy_traces& susy_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)



   double beta_LamS;

   beta_LamS = 0;


   return beta_LamS;
}

} // namespace flexiblesusy
