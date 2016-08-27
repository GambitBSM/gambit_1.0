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

// File generated at Sat 27 Aug 2016 12:40:22

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
 * Calculates the one-loop beta function of mH2.
 *
 * @return one-loop beta function
 */
double NSM_soft_parameters::calc_beta_mH2_one_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_mH2;

   beta_mH2 = Re(oneOver16PiSqr*(6*mH2*traceYdAdjYd + 2*mH2*traceYeAdjYe
      + 6*mH2*traceYuAdjYu + 12*mH2*Lambda1 + 4*mS2*Lambda3 - 1.5*mH2*Sqr(g1) -
      4.5*mH2*Sqr(g2) - 2*Sqr(Lambda4)));


   return beta_mH2;
}

/**
 * Calculates the two-loop beta function of mH2.
 *
 * @return two-loop beta function
 */
double NSM_soft_parameters::calc_beta_mH2_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   double beta_mH2;

   beta_mH2 = Re(twoLoop*(11.604166666666666*Power(g1,4)*mH2 - 9.0625*
      Power(g2,4)*mH2 - 13.5*mH2*traceYdAdjYdYdAdjYd - 21*mH2*
      traceYdAdjYuYuAdjYd - 4.5*mH2*traceYeAdjYeYeAdjYe - 13.5*mH2*
      traceYuAdjYuYuAdjYu - 72*mH2*traceYuAdjYu*Lambda1 + 24*Lambda3*Lambda4*
      Lambda5 + 7.083333333333333*mH2*traceYuAdjYu*Sqr(g1) + 24*mH2*Lambda1*Sqr
      (g1) + 11.25*mH2*traceYuAdjYu*Sqr(g2) + 72*mH2*Lambda1*Sqr(g2) + 1.875*
      mH2*Sqr(g1)*Sqr(g2) + 40*mH2*traceYuAdjYu*Sqr(g3) - 60*mH2*Sqr(Lambda1) -
      2*mH2*Sqr(Lambda3) - 16*mS2*Sqr(Lambda3) + 6*traceYuAdjYu*Sqr(Lambda4) +
      36*Lambda1*Sqr(Lambda4) + 12*Lambda3*Sqr(Lambda4) - 0.5*Sqr(g1)*Sqr(
      Lambda4) - 1.5*Sqr(g2)*Sqr(Lambda4) + traceYdAdjYd*(-72*mH2*Lambda1 +
      2.0833333333333335*mH2*Sqr(g1) + 11.25*mH2*Sqr(g2) + 40*mH2*Sqr(g3) + 6*
      Sqr(Lambda4)) + 0.25*traceYeAdjYe*(-96*mH2*Lambda1 + 25*mH2*Sqr(g1) + 15*
      mH2*Sqr(g2) + 8*Sqr(Lambda4)) + 36*Lambda3*Sqr(Lambda5)));


   return beta_mH2;
}

/**
 * Calculates the three-loop beta function of mH2.
 *
 * @return three-loop beta function
 */
double NSM_soft_parameters::calc_beta_mH2_three_loop(const Soft_traces& soft_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)



   double beta_mH2;

   beta_mH2 = 0;


   return beta_mH2;
}

} // namespace flexiblesusy
