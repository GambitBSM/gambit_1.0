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

// File generated at Sat 27 Aug 2016 12:40:15

#include "SSM_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of LambdaS.
 *
 * @return one-loop beta function
 */
double SSM_susy_parameters::calc_beta_LambdaS_one_loop(const Susy_traces& susy_traces) const
{


   double beta_LambdaS;

   beta_LambdaS = Re(oneOver16PiSqr*(Sqr(K2) + 36*Sqr(LambdaS)));


   return beta_LambdaS;
}

/**
 * Calculates the two-loop beta function of LambdaS.
 *
 * @return two-loop beta function
 */
double SSM_susy_parameters::calc_beta_LambdaS_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_LambdaS;

   beta_LambdaS = Re(twoLoop*(-4*Power(K2,3) - 816*Power(LambdaS,3) - 20*
      LambdaS*Sqr(K2) - 6*traceYdAdjYd*Sqr(K2) - 2*traceYeAdjYe*Sqr(K2) - 6*
      traceYuAdjYu*Sqr(K2) + 1.2*Sqr(g1)*Sqr(K2) + 6*Sqr(g2)*Sqr(K2)));


   return beta_LambdaS;
}

/**
 * Calculates the three-loop beta function of LambdaS.
 *
 * @return three-loop beta function
 */
double SSM_susy_parameters::calc_beta_LambdaS_three_loop(const Susy_traces& susy_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)



   double beta_LambdaS;

   beta_LambdaS = 0;


   return beta_LambdaS;
}

} // namespace flexiblesusy
