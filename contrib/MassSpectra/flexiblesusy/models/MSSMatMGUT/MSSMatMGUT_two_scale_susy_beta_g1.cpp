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

// File generated at Sat 27 Aug 2016 12:44:53

#include "MSSMatMGUT_two_scale_susy_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT susy_traces

/**
 * Calculates the one-loop beta function of g1.
 *
 * @return one-loop beta function
 */
double MSSMatMGUT_susy_parameters::calc_beta_g1_one_loop(const Susy_traces& susy_traces) const
{


   double beta_g1;

   beta_g1 = Re(6.6*Power(g1,3)*oneOver16PiSqr);


   return beta_g1;
}

/**
 * Calculates the two-loop beta function of g1.
 *
 * @return two-loop beta function
 */
double MSSMatMGUT_susy_parameters::calc_beta_g1_two_loop(const Susy_traces& susy_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_g1;

   beta_g1 = Re(0.04*Power(g1,3)*twoLoop*(-70*traceYdAdjYd - 90*
      traceYeAdjYe - 130*traceYuAdjYu + 199*Sqr(g1) + 135*Sqr(g2) + 440*Sqr(g3)
      ));


   return beta_g1;
}

/**
 * Calculates the three-loop beta function of g1.
 *
 * @return three-loop beta function
 */
double MSSMatMGUT_susy_parameters::calc_beta_g1_three_loop(const Susy_traces& susy_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)

   const double traceAdjYdYd = TRACE_STRUCT.traceAdjYdYd;
   const double traceAdjYeYe = TRACE_STRUCT.traceAdjYeYe;
   const double traceAdjYuYu = TRACE_STRUCT.traceAdjYuYu;
   const double traceAdjYdYdAdjYdYd = TRACE_STRUCT.traceAdjYdYdAdjYdYd;
   const double traceAdjYeYeAdjYeYe = TRACE_STRUCT.traceAdjYeYeAdjYeYe;
   const double traceAdjYuYuAdjYdYd = TRACE_STRUCT.traceAdjYuYuAdjYdYd;
   const double traceAdjYuYuAdjYuYu = TRACE_STRUCT.traceAdjYuYuAdjYuYu;


   double beta_g1;

   beta_g1 = Re(-0.0026666666666666666*Power(g1,3)*threeLoop*(32117*Power
      (g1,4) + 6075*Power(g2,4) - 12100*Power(g3,4) - 4050*traceAdjYdYdAdjYdYd
      - 4050*traceAdjYeYeAdjYeYe - 4350*traceAdjYuYuAdjYdYd - 6300*
      traceAdjYuYuAdjYuYu + 845*traceAdjYuYu*Sqr(g1) + 6525*traceAdjYuYu*Sqr(g2
      ) + 1035*Sqr(g1)*Sqr(g2) + 135*traceAdjYeYe*(9*Sqr(g1) + 35*Sqr(g2)) +
      8800*traceAdjYuYu*Sqr(g3) + 5480*Sqr(g1)*Sqr(g3) + 1800*Sqr(g2)*Sqr(g3) +
      5*traceAdjYdYd*(-1260*traceAdjYeYe + 49*Sqr(g1) + 495*Sqr(g2) + 1280*Sqr
      (g3)) - 2700*Sqr(traceAdjYdYd) - 1800*Sqr(traceAdjYeYe) - 6750*Sqr(
      traceAdjYuYu)));


   return beta_g1;
}

} // namespace flexiblesusy
