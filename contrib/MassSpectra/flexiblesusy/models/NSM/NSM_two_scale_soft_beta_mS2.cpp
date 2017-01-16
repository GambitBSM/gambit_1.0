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
 * Calculates the one-loop beta function of mS2.
 *
 * @return one-loop beta function
 */
double NSM_soft_parameters::calc_beta_mS2_one_loop(const Soft_traces& soft_traces) const
{


   double beta_mS2;

   beta_mS2 = Re(oneOver16PiSqr*(24*mS2*Lambda2 + 4*mH2*Lambda3 - 2*(Sqr(
      Lambda4) + 9*Sqr(Lambda5))));


   return beta_mS2;
}

/**
 * Calculates the two-loop beta function of mS2.
 *
 * @return two-loop beta function
 */
double NSM_soft_parameters::calc_beta_mS2_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_mS2;

   beta_mS2 = Re(4*twoLoop*(-6*mH2*traceYuAdjYu*Lambda3 + 12*Lambda3*
      Lambda4*Lambda5 + 2*mH2*Lambda3*Sqr(g1) + 6*mH2*Lambda3*Sqr(g2) - 120*mS2
      *Sqr(Lambda2) - 4*mH2*Sqr(Lambda3) - 2*mS2*Sqr(Lambda3) + 3*traceYuAdjYu*
      Sqr(Lambda4) + 6*Lambda2*Sqr(Lambda4) + 5*Lambda3*Sqr(Lambda4) - Sqr(g1)*
      Sqr(Lambda4) - 3*Sqr(g2)*Sqr(Lambda4) + traceYeAdjYe*(-2*mH2*Lambda3 +
      Sqr(Lambda4)) + traceYdAdjYd*(-6*mH2*Lambda3 + 3*Sqr(Lambda4)) + 270*
      Lambda2*Sqr(Lambda5)));


   return beta_mS2;
}

/**
 * Calculates the three-loop beta function of mS2.
 *
 * @return three-loop beta function
 */
double NSM_soft_parameters::calc_beta_mS2_three_loop(const Soft_traces& soft_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)



   double beta_mS2;

   beta_mS2 = 0;


   return beta_mS2;
}

} // namespace flexiblesusy
