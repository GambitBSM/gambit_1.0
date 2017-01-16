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

#include "SSM_two_scale_soft_parameters.hpp"
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
 * Calculates the one-loop beta function of MS.
 *
 * @return one-loop beta function
 */
double SSM_soft_parameters::calc_beta_MS_one_loop(const Soft_traces& soft_traces) const
{


   double beta_MS;

   beta_MS = Re(4*oneOver16PiSqr*(3*LambdaS*MS + K2*mu2 + Sqr(K1) + Sqr(
      Kappa)));


   return beta_MS;
}

/**
 * Calculates the two-loop beta function of MS.
 *
 * @return two-loop beta function
 */
double SSM_soft_parameters::calc_beta_MS_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_MS;

   beta_MS = Re(twoLoop*(-24*K2*mu2*traceYuAdjYu - 16*K1*K2*Kappa + 4.8*
      K2*mu2*Sqr(g1) + 24*K2*mu2*Sqr(g2) - 20*K2*Sqr(K1) - 24*LambdaS*Sqr(K1) -
      24*traceYuAdjYu*Sqr(K1) + 4.8*Sqr(g1)*Sqr(K1) + 24*Sqr(g2)*Sqr(K1) - 24*
      traceYdAdjYd*(K2*mu2 + Sqr(K1)) - 8*traceYeAdjYe*(K2*mu2 + Sqr(K1)) - 2*
      MS*Sqr(K2) - 8*mu2*Sqr(K2) - 120*MS*Sqr(LambdaS) - 120*LambdaS*Sqr(Kappa)
      ));


   return beta_MS;
}

/**
 * Calculates the three-loop beta function of MS.
 *
 * @return three-loop beta function
 */
double SSM_soft_parameters::calc_beta_MS_three_loop(const Soft_traces& soft_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)



   double beta_MS;

   beta_MS = 0;


   return beta_MS;
}

} // namespace flexiblesusy
