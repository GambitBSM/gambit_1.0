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

// File generated at Sat 27 Aug 2016 12:40:20

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
 * Calculates the one-loop beta function of Lambda5.
 *
 * @return one-loop beta function
 */
double NSM_soft_parameters::calc_beta_Lambda5_one_loop(const Soft_traces& soft_traces) const
{


   double beta_Lambda5;

   beta_Lambda5 = Re(oneOver16PiSqr*(4*Lambda3*Lambda4 + 72*Lambda2*
      Lambda5));


   return beta_Lambda5;
}

/**
 * Calculates the two-loop beta function of Lambda5.
 *
 * @return two-loop beta function
 */
double NSM_soft_parameters::calc_beta_Lambda5_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_Lambda5;

   beta_Lambda5 = Re(4*twoLoop*(-6*traceYdAdjYd*Lambda3*Lambda4 - 2*
      traceYeAdjYe*Lambda3*Lambda4 - 6*traceYuAdjYu*Lambda3*Lambda4 - 24*
      Lambda2*Lambda3*Lambda4 + 2*Lambda3*Lambda4*Sqr(g1) + 6*Lambda3*Lambda4*
      Sqr(g2) - 828*Lambda5*Sqr(Lambda2) - 8*Lambda4*Sqr(Lambda3) - 9*Lambda5*
      Sqr(Lambda3)));


   return beta_Lambda5;
}

/**
 * Calculates the three-loop beta function of Lambda5.
 *
 * @return three-loop beta function
 */
double NSM_soft_parameters::calc_beta_Lambda5_three_loop(const Soft_traces& soft_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)



   double beta_Lambda5;

   beta_Lambda5 = 0;


   return beta_Lambda5;
}

} // namespace flexiblesusy
