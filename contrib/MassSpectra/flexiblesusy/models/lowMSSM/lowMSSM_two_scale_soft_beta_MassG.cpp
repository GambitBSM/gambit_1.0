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

// File generated at Sat 27 Aug 2016 12:47:55

#include "lowMSSM_two_scale_soft_parameters.hpp"
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
 * Calculates the one-loop beta function of MassG.
 *
 * @return one-loop beta function
 */
double lowMSSM_soft_parameters::calc_beta_MassG_one_loop(const Soft_traces& soft_traces) const
{


   double beta_MassG;

   beta_MassG = Re(-6*MassG*oneOver16PiSqr*Sqr(g3));


   return beta_MassG;
}

/**
 * Calculates the two-loop beta function of MassG.
 *
 * @return two-loop beta function
 */
double lowMSSM_soft_parameters::calc_beta_MassG_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceAdjYdTYd = TRACE_STRUCT.traceAdjYdTYd;
   const double traceAdjYuTYu = TRACE_STRUCT.traceAdjYuTYu;


   double beta_MassG;

   beta_MassG = Re(0.4*twoLoop*Sqr(g3)*(20*traceAdjYdTYd + 20*
      traceAdjYuTYu - 20*MassG*traceYdAdjYd - 20*MassG*traceYuAdjYu + 11*MassB*
      Sqr(g1) + 11*MassG*Sqr(g1) + 45*MassG*Sqr(g2) + 45*MassWB*Sqr(g2) + 140*
      MassG*Sqr(g3)));


   return beta_MassG;
}

/**
 * Calculates the three-loop beta function of MassG.
 *
 * @return three-loop beta function
 */
double lowMSSM_soft_parameters::calc_beta_MassG_three_loop(const Soft_traces& soft_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)

   const double traceAdjYdYd = TRACE_STRUCT.traceAdjYdYd;
   const double traceAdjYuYu = TRACE_STRUCT.traceAdjYuYu;
   const double traceTYdAdjYd = TRACE_STRUCT.traceTYdAdjYd;
   const double traceAdjYeYe = TRACE_STRUCT.traceAdjYeYe;
   const double traceTYeAdjYe = TRACE_STRUCT.traceTYeAdjYe;
   const double traceTYuAdjYu = TRACE_STRUCT.traceTYuAdjYu;
   const double traceAdjYdYdAdjYdYd = TRACE_STRUCT.traceAdjYdYdAdjYdYd;
   const double traceAdjYdTYdAdjYdYd = TRACE_STRUCT.traceAdjYdTYdAdjYdYd;
   const double traceAdjYuYuAdjYdYd = TRACE_STRUCT.traceAdjYuYuAdjYdYd;
   const double traceAdjYuYuAdjYuYu = TRACE_STRUCT.traceAdjYuYuAdjYuYu;
   const double traceAdjYuTYuAdjYdYd = TRACE_STRUCT.traceAdjYuTYuAdjYdYd;
   const double traceAdjYuTYuAdjYuYu = TRACE_STRUCT.traceAdjYuTYuAdjYuYu;
   const double traceTYdAdjYuYuAdjYd = TRACE_STRUCT.traceTYdAdjYuYuAdjYd;


   double beta_MassG;

   beta_MassG = Re(0.02666666666666667*threeLoop*Sqr(g3)*(-3404*Power(g1,
      4)*MassB - 1702*Power(g1,4)*MassG - 2025*Power(g2,4)*MassG + 26025*Power(
      g3,4)*MassG - 4050*Power(g2,4)*MassWB - 1800*traceAdjYdTYdAdjYdYd + 900*
      MassG*traceAdjYdYdAdjYdYd - 600*traceAdjYuTYuAdjYdYd - 1800*
      traceAdjYuTYuAdjYuYu + 600*MassG*traceAdjYuYuAdjYdYd + 900*MassG*
      traceAdjYuYuAdjYuYu - 450*traceAdjYeYe*traceTYdAdjYd - 600*
      traceTYdAdjYuYuAdjYd + 160*traceTYdAdjYd*Sqr(g1) + 220*traceTYuAdjYu*Sqr(
      g1) + 900*traceTYdAdjYd*Sqr(g2) + 900*traceTYuAdjYu*Sqr(g2) - 45*MassB*
      Sqr(g1)*Sqr(g2) - 45*MassG*Sqr(g1)*Sqr(g2) - 45*MassWB*Sqr(g1)*Sqr(g2) +
      2600*traceTYdAdjYd*Sqr(g3) + 2600*traceTYuAdjYu*Sqr(g3) + 110*MassB*Sqr(
      g1)*Sqr(g3) + 220*MassG*Sqr(g1)*Sqr(g3) + 900*MassG*Sqr(g2)*Sqr(g3) + 450
      *MassWB*Sqr(g2)*Sqr(g3) - 10*traceAdjYdYd*(-45*MassG*traceAdjYeYe + 270*
      traceTYdAdjYd + 45*traceTYeAdjYe + 16*MassB*Sqr(g1) + 16*MassG*Sqr(g1) +
      90*MassG*Sqr(g2) + 90*MassWB*Sqr(g2) + 520*MassG*Sqr(g3)) - 20*
      traceAdjYuYu*(135*traceTYuAdjYu + 11*(MassB + MassG)*Sqr(g1) + 5*(9*(
      MassG + MassWB)*Sqr(g2) + 52*MassG*Sqr(g3))) + 1350*MassG*Sqr(
      traceAdjYdYd) + 1350*MassG*Sqr(traceAdjYuYu)));


   return beta_MassG;
}

} // namespace flexiblesusy
