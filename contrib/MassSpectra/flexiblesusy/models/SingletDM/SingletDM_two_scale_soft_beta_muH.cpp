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

// File generated at Sat 27 Aug 2016 12:42:59

#include "SingletDM_two_scale_soft_parameters.hpp"
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
 * Calculates the one-loop beta function of muH.
 *
 * @return one-loop beta function
 */
double SingletDM_soft_parameters::calc_beta_muH_one_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   double beta_muH;

   beta_muH = Re(oneOver16PiSqr*(6*LamH*muH + LamSH*muS + 6*muH*
      traceYdAdjYd + 2*muH*traceYeAdjYe + 6*muH*traceYuAdjYu - 0.9*muH*Sqr(g1)
      - 4.5*muH*Sqr(g2)));


   return beta_muH;
}

/**
 * Calculates the two-loop beta function of muH.
 *
 * @return two-loop beta function
 */
double SingletDM_soft_parameters::calc_beta_muH_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   double beta_muH;

   beta_muH = Re(twoLoop*(4.1775*Power(g1,4)*muH - 9.0625*Power(g2,4)*muH
      - 13.5*muH*traceYdAdjYdYdAdjYd - 21*muH*traceYdAdjYuYuAdjYd - 4.5*muH*
      traceYeAdjYeYeAdjYe - 36*LamH*muH*traceYuAdjYu - 13.5*muH*
      traceYuAdjYuYuAdjYu + 7.2*LamH*muH*Sqr(g1) + 4.25*muH*traceYuAdjYu*Sqr(g1
      ) + 36*LamH*muH*Sqr(g2) + 11.25*muH*traceYuAdjYu*Sqr(g2) + 1.125*muH*Sqr(
      g1)*Sqr(g2) + 0.75*muH*traceYeAdjYe*(-16*LamH + 5*Sqr(g1) + 5*Sqr(g2)) +
      40*muH*traceYuAdjYu*Sqr(g3) + 0.25*muH*traceYdAdjYd*(-144*LamH + 5*Sqr(g1
      ) + 45*Sqr(g2) + 160*Sqr(g3)) - 15*muH*Sqr(LamH) - 0.5*muH*Sqr(LamSH) - 2
      *muS*Sqr(LamSH)));


   return beta_muH;
}

/**
 * Calculates the three-loop beta function of muH.
 *
 * @return three-loop beta function
 */
double SingletDM_soft_parameters::calc_beta_muH_three_loop(const Soft_traces& soft_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)



   double beta_muH;

   beta_muH = 0;


   return beta_muH;
}

} // namespace flexiblesusy
