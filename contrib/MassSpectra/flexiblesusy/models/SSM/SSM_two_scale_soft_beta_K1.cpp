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
 * Calculates the one-loop beta function of K1.
 *
 * @return one-loop beta function
 */
double SSM_soft_parameters::calc_beta_K1_one_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_K1;

   beta_K1 = Re(oneOver16PiSqr*(4*K1*K2 + 6*K1*traceYdAdjYd + 2*K1*
      traceYeAdjYe + 6*K1*traceYuAdjYu + 2*K2*Kappa + 6*K1*Lambdax - 0.9*K1*Sqr
      (g1) - 4.5*K1*Sqr(g2)));


   return beta_K1;
}

/**
 * Calculates the two-loop beta function of K1.
 *
 * @return two-loop beta function
 */
double SSM_soft_parameters::calc_beta_K1_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   double beta_K1;

   beta_K1 = Re(twoLoop*(4.1775*Power(g1,4)*K1 - 9.0625*Power(g2,4)*K1 -
      24*K1*K2*LambdaS - 13.5*K1*traceYdAdjYdYdAdjYd - 21*K1*
      traceYdAdjYuYuAdjYd - 4.5*K1*traceYeAdjYeYeAdjYe - 12*K1*K2*traceYuAdjYu
      - 13.5*K1*traceYuAdjYuYuAdjYu - 24*K2*LambdaS*Kappa - 36*K1*K2*Lambdax -
      36*K1*traceYuAdjYu*Lambdax + 0.6*K1*K2*Sqr(g1) + 4.25*K1*traceYuAdjYu*Sqr
      (g1) + 7.2*K1*Lambdax*Sqr(g1) + 3*K1*K2*Sqr(g2) + 11.25*K1*traceYuAdjYu*
      Sqr(g2) + 36*K1*Lambdax*Sqr(g2) + 1.125*K1*Sqr(g1)*Sqr(g2) + 0.25*K1*
      traceYeAdjYe*(-16*(K2 + 3*Lambdax) + 15*Sqr(g1) + 15*Sqr(g2)) + 40*K1*
      traceYuAdjYu*Sqr(g3) + 0.25*K1*traceYdAdjYd*(5*Sqr(g1) + 45*Sqr(g2) + 16*
      (-3*K2 - 9*Lambdax + 10*Sqr(g3))) - 11.5*K1*Sqr(K2) - 8*Kappa*Sqr(K2) +
      12*K1*Sqr(LambdaS) - 15*K1*Sqr(Lambdax)));


   return beta_K1;
}

/**
 * Calculates the three-loop beta function of K1.
 *
 * @return three-loop beta function
 */
double SSM_soft_parameters::calc_beta_K1_three_loop(const Soft_traces& soft_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)



   double beta_K1;

   beta_K1 = 0;


   return beta_K1;
}

} // namespace flexiblesusy
