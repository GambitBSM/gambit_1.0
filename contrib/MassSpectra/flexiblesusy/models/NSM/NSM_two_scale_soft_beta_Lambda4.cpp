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

// File generated at Sat 27 Aug 2016 12:40:21

#include "NSM_two_scale_soft_parameters.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

#define INPUT(parameter) input.parameter
#define TRACE_STRUCT soft_traces

namespace {

template <typename Derived>
typename Eigen::MatrixBase<Derived>::PlainObject operator+(const Eigen::MatrixBase<Derived>& m, double n)
{
   return m + Eigen::Matrix<double,
                            Eigen::MatrixBase<Derived>::RowsAtCompileTime,
                            Eigen::MatrixBase<Derived>::ColsAtCompileTime>::Identity() * n;
}

template <typename Derived>
typename Eigen::MatrixBase<Derived>::PlainObject operator+(double n, const Eigen::MatrixBase<Derived>& m)
{
   return m + Eigen::Matrix<double,
                            Eigen::MatrixBase<Derived>::RowsAtCompileTime,
                            Eigen::MatrixBase<Derived>::ColsAtCompileTime>::Identity() * n;
}

template <typename Derived>
typename Eigen::MatrixBase<Derived>::PlainObject operator-(const Eigen::MatrixBase<Derived>& m, double n)
{
   return m - Eigen::Matrix<double,
                            Eigen::MatrixBase<Derived>::RowsAtCompileTime,
                            Eigen::MatrixBase<Derived>::ColsAtCompileTime>::Identity() * n;
}

template <typename Derived>
typename Eigen::MatrixBase<Derived>::PlainObject operator-(double n, const Eigen::MatrixBase<Derived>& m)
{
   return - m + Eigen::Matrix<double,
                            Eigen::MatrixBase<Derived>::RowsAtCompileTime,
                            Eigen::MatrixBase<Derived>::ColsAtCompileTime>::Identity() * n;
}

} // anonymous namespace

/**
 * Calculates the one-loop beta function of Lambda4.
 *
 * @return one-loop beta function
 */
double NSM_soft_parameters::calc_beta_Lambda4_one_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_Lambda4;

   beta_Lambda4 = Re(oneOver16PiSqr*(6*traceYdAdjYd*Lambda4 + 2*
      traceYeAdjYe*Lambda4 + 6*traceYuAdjYu*Lambda4 + 12*Lambda1*Lambda4 + 8*
      Lambda3*Lambda4 + 12*Lambda3*Lambda5 - 1.5*Lambda4*Sqr(g1) - 4.5*Lambda4*
      Sqr(g2)));


   return beta_Lambda4;
}

/**
 * Calculates the two-loop beta function of Lambda4.
 *
 * @return two-loop beta function
 */
double NSM_soft_parameters::calc_beta_Lambda4_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   double beta_Lambda4;

   beta_Lambda4 = Re(twoLoop*(11.604166666666666*Power(g1,4)*Lambda4 -
      9.0625*Power(g2,4)*Lambda4 - 13.5*traceYdAdjYdYdAdjYd*Lambda4 - 21*
      traceYdAdjYuYuAdjYd*Lambda4 - 4.5*traceYeAdjYeYeAdjYe*Lambda4 - 13.5*
      traceYuAdjYuYuAdjYu*Lambda4 - 72*traceYuAdjYu*Lambda1*Lambda4 - 24*
      traceYuAdjYu*Lambda3*Lambda4 - 144*Lambda1*Lambda3*Lambda4 - 96*Lambda2*
      Lambda3*Lambda4 - 288*Lambda2*Lambda3*Lambda5 + 7.083333333333333*
      traceYuAdjYu*Lambda4*Sqr(g1) + 24*Lambda1*Lambda4*Sqr(g1) + 2*Lambda3*
      Lambda4*Sqr(g1) + 11.25*traceYuAdjYu*Lambda4*Sqr(g2) + 72*Lambda1*Lambda4
      *Sqr(g2) + 6*Lambda3*Lambda4*Sqr(g2) + 1.875*Lambda4*Sqr(g1)*Sqr(g2) +
      0.25*traceYeAdjYe*Lambda4*(-32*(3*Lambda1 + Lambda3) + 25*Sqr(g1) + 15*
      Sqr(g2)) + 40*traceYuAdjYu*Lambda4*Sqr(g3) + 0.08333333333333333*
      traceYdAdjYd*Lambda4*(25*Sqr(g1) + 3*(45*Sqr(g2) + 32*(-9*Lambda1 - 3*
      Lambda3 + 5*Sqr(g3)))) - 60*Lambda4*Sqr(Lambda1) + 48*Lambda4*Sqr(Lambda2
      ) - 46*Lambda4*Sqr(Lambda3) - 96*Lambda5*Sqr(Lambda3)));


   return beta_Lambda4;
}

/**
 * Calculates the three-loop beta function of Lambda4.
 *
 * @return three-loop beta function
 */
double NSM_soft_parameters::calc_beta_Lambda4_three_loop(const Soft_traces& soft_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)



   double beta_Lambda4;

   beta_Lambda4 = 0;


   return beta_Lambda4;
}

} // namespace flexiblesusy
