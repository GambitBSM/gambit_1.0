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

// File generated at Sat 27 Aug 2016 12:48:08

#include "CMSSMNoFV_two_scale_soft_parameters.hpp"
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
 * Calculates the one-loop beta function of MassWB.
 *
 * @return one-loop beta function
 */
double CMSSMNoFV_soft_parameters::calc_beta_MassWB_one_loop(const Soft_traces& soft_traces) const
{


   double beta_MassWB;

   beta_MassWB = Re(2*MassWB*oneOver16PiSqr*Sqr(g2));


   return beta_MassWB;
}

/**
 * Calculates the two-loop beta function of MassWB.
 *
 * @return two-loop beta function
 */
double CMSSMNoFV_soft_parameters::calc_beta_MassWB_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceAdjYdTYd = TRACE_STRUCT.traceAdjYdTYd;
   const double traceAdjYeTYe = TRACE_STRUCT.traceAdjYeTYe;
   const double traceAdjYuTYu = TRACE_STRUCT.traceAdjYuTYu;


   double beta_MassWB;

   beta_MassWB = Re(0.4*twoLoop*Sqr(g2)*(30*traceAdjYdTYd + 10*
      traceAdjYeTYe + 30*traceAdjYuTYu - 30*MassWB*traceYdAdjYd - 10*MassWB*
      traceYeAdjYe - 30*MassWB*traceYuAdjYu + 9*MassB*Sqr(g1) + 9*MassWB*Sqr(g1
      ) + 250*MassWB*Sqr(g2) + 120*MassG*Sqr(g3) + 120*MassWB*Sqr(g3)));


   return beta_MassWB;
}

/**
 * Calculates the three-loop beta function of MassWB.
 *
 * @return three-loop beta function
 */
double CMSSMNoFV_soft_parameters::calc_beta_MassWB_three_loop(const Soft_traces& soft_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)

   const double traceAdjYdYd = TRACE_STRUCT.traceAdjYdYd;
   const double traceAdjYeYe = TRACE_STRUCT.traceAdjYeYe;
   const double traceAdjYuYu = TRACE_STRUCT.traceAdjYuYu;
   const double traceTYdAdjYd = TRACE_STRUCT.traceTYdAdjYd;
   const double traceTYeAdjYe = TRACE_STRUCT.traceTYeAdjYe;
   const double traceTYuAdjYu = TRACE_STRUCT.traceTYuAdjYu;
   const double traceAdjYdYdAdjYdYd = TRACE_STRUCT.traceAdjYdYdAdjYdYd;
   const double traceAdjYdTYdAdjYdYd = TRACE_STRUCT.traceAdjYdTYdAdjYdYd;
   const double traceAdjYeYeAdjYeYe = TRACE_STRUCT.traceAdjYeYeAdjYeYe;
   const double traceAdjYeTYeAdjYeYe = TRACE_STRUCT.traceAdjYeTYeAdjYeYe;
   const double traceAdjYuYuAdjYdYd = TRACE_STRUCT.traceAdjYuYuAdjYdYd;
   const double traceAdjYuYuAdjYuYu = TRACE_STRUCT.traceAdjYuYuAdjYuYu;
   const double traceAdjYuTYuAdjYdYd = TRACE_STRUCT.traceAdjYuTYuAdjYdYd;
   const double traceAdjYuTYuAdjYuYu = TRACE_STRUCT.traceAdjYuTYuAdjYuYu;
   const double traceTYdAdjYuYuAdjYd = TRACE_STRUCT.traceTYdAdjYuYuAdjYd;


   double beta_MassWB;

   beta_MassWB = Re(0.08*threeLoop*Sqr(g2)*(-914*Power(g1,4)*MassB + 2200
      *Power(g3,4)*MassG - 457*Power(g1,4)*MassWB + 2625*Power(g2,4)*MassWB +
      1100*Power(g3,4)*MassWB - 1200*traceAdjYdTYdAdjYdYd + 600*MassWB*
      traceAdjYdYdAdjYdYd - 400*traceAdjYeTYeAdjYeYe + 200*MassWB*
      traceAdjYeYeAdjYeYe - 300*traceAdjYuTYuAdjYdYd - 1200*
      traceAdjYuTYuAdjYuYu + 300*MassWB*traceAdjYuYuAdjYdYd + 600*MassWB*
      traceAdjYuYuAdjYuYu - 300*traceTYdAdjYuYuAdjYd - 900*traceAdjYuYu*
      traceTYuAdjYu - 145*MassB*traceAdjYuYu*Sqr(g1) - 145*MassWB*traceAdjYuYu*
      Sqr(g1) + 55*traceTYdAdjYd*Sqr(g1) + 105*traceTYeAdjYe*Sqr(g1) + 145*
      traceTYuAdjYu*Sqr(g1) - 1650*MassWB*traceAdjYuYu*Sqr(g2) + 825*
      traceTYdAdjYd*Sqr(g2) + 275*traceTYeAdjYe*Sqr(g2) + 825*traceTYuAdjYu*Sqr
      (g2) + 45*MassB*Sqr(g1)*Sqr(g2) + 90*MassWB*Sqr(g1)*Sqr(g2) - 5*
      traceAdjYeYe*(60*traceTYdAdjYd + 20*traceTYeAdjYe + 21*MassB*Sqr(g1) + 21
      *MassWB*Sqr(g1) + 110*MassWB*Sqr(g2)) - 800*MassG*traceAdjYuYu*Sqr(g3) -
      800*MassWB*traceAdjYuYu*Sqr(g3) + 800*traceTYdAdjYd*Sqr(g3) + 800*
      traceTYuAdjYu*Sqr(g3) - 40*MassB*Sqr(g1)*Sqr(g3) - 40*MassG*Sqr(g1)*Sqr(
      g3) - 40*MassWB*Sqr(g1)*Sqr(g3) + 600*MassG*Sqr(g2)*Sqr(g3) + 1200*MassWB
      *Sqr(g2)*Sqr(g3) - 5*traceAdjYdYd*(-60*MassWB*traceAdjYeYe + 180*
      traceTYdAdjYd + 60*traceTYeAdjYe + 11*MassB*Sqr(g1) + 11*MassWB*Sqr(g1) +
      330*MassWB*Sqr(g2) + 160*MassG*Sqr(g3) + 160*MassWB*Sqr(g3)) + 450*
      MassWB*Sqr(traceAdjYdYd) + 50*MassWB*Sqr(traceAdjYeYe) + 450*MassWB*Sqr(
      traceAdjYuYu)));


   return beta_MassWB;
}

} // namespace flexiblesusy
