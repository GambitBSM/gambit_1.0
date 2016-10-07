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
 * Calculates the one-loop beta function of mu2.
 *
 * @return one-loop beta function
 */
double SSM_soft_parameters::calc_beta_mu2_one_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_mu2;

   beta_mu2 = Re(oneOver16PiSqr*(K2*MS + 6*mu2*traceYdAdjYd + 2*mu2*
      traceYeAdjYe + 6*mu2*traceYuAdjYu + 6*mu2*Lambdax - 0.9*mu2*Sqr(g1) - 4.5
      *mu2*Sqr(g2) + 2*Sqr(K1)));


   return beta_mu2;
}

/**
 * Calculates the two-loop beta function of mu2.
 *
 * @return two-loop beta function
 */
double SSM_soft_parameters::calc_beta_mu2_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   double beta_mu2;

   beta_mu2 = Re(twoLoop*(4.1775*Power(g1,4)*mu2 - 9.0625*Power(g2,4)*mu2
      - 13.5*mu2*traceYdAdjYdYdAdjYd - 21*mu2*traceYdAdjYuYuAdjYd - 4.5*mu2*
      traceYeAdjYeYeAdjYe - 13.5*mu2*traceYuAdjYuYuAdjYu - 4*K1*K2*Kappa - 36*
      mu2*traceYuAdjYu*Lambdax + 4.25*mu2*traceYuAdjYu*Sqr(g1) + 7.2*mu2*
      Lambdax*Sqr(g1) + 11.25*mu2*traceYuAdjYu*Sqr(g2) + 36*mu2*Lambdax*Sqr(g2)
      + 1.125*mu2*Sqr(g1)*Sqr(g2) + 40*mu2*traceYuAdjYu*Sqr(g3) + traceYdAdjYd
      *(0.25*mu2*(-144*Lambdax + 5*Sqr(g1) + 45*Sqr(g2) + 160*Sqr(g3)) - 6*Sqr(
      K1)) - 6*K2*Sqr(K1) - 6*traceYuAdjYu*Sqr(K1) - 18*Lambdax*Sqr(K1) + 0.3*
      Sqr(g1)*Sqr(K1) + 1.5*Sqr(g2)*Sqr(K1) - 0.25*traceYeAdjYe*(-3*mu2*(-16*
      Lambdax + 5*Sqr(g1) + 5*Sqr(g2)) + 8*Sqr(K1)) - 2*MS*Sqr(K2) - 0.5*mu2*
      Sqr(K2) - 2*K2*Sqr(Kappa) - 15*mu2*Sqr(Lambdax)));


   return beta_mu2;
}

/**
 * Calculates the three-loop beta function of mu2.
 *
 * @return three-loop beta function
 */
double SSM_soft_parameters::calc_beta_mu2_three_loop(const Soft_traces& soft_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)



   double beta_mu2;

   beta_mu2 = 0;


   return beta_mu2;
}

} // namespace flexiblesusy
