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

// File generated at Sat 27 Aug 2016 12:47:14

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
 * Calculates the one-loop beta function of mHd2.
 *
 * @return one-loop beta function
 */
double CMSSMNoFV_soft_parameters::calc_beta_mHd2_one_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceconjTYdTpTYd = TRACE_STRUCT.traceconjTYdTpTYd;
   const double traceconjTYeTpTYe = TRACE_STRUCT.traceconjTYeTpTYe;
   const double tracemd2YdAdjYd = TRACE_STRUCT.tracemd2YdAdjYd;
   const double traceme2YeAdjYe = TRACE_STRUCT.traceme2YeAdjYe;
   const double traceml2AdjYeYe = TRACE_STRUCT.traceml2AdjYeYe;
   const double tracemq2AdjYdYd = TRACE_STRUCT.tracemq2AdjYdYd;
   const double Tr11 = TRACE_STRUCT.Tr11;


   double beta_mHd2;

   beta_mHd2 = Re(oneOver16PiSqr*(-0.7745966692414834*g1*Tr11 + 6*
      traceconjTYdTpTYd + 2*traceconjTYeTpTYe + 6*tracemd2YdAdjYd + 2*
      traceme2YeAdjYe + 2*traceml2AdjYeYe + 6*tracemq2AdjYdYd + 6*mHd2*
      traceYdAdjYd + 2*mHd2*traceYeAdjYe - 1.2*AbsSqr(MassB)*Sqr(g1) - 6*AbsSqr
      (MassWB)*Sqr(g2)));


   return beta_mHd2;
}

/**
 * Calculates the two-loop beta function of mHd2.
 *
 * @return two-loop beta function
 */
double CMSSMNoFV_soft_parameters::calc_beta_mHd2_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceAdjYdTYd = TRACE_STRUCT.traceAdjYdTYd;
   const double traceAdjYeTYe = TRACE_STRUCT.traceAdjYeTYe;
   const double traceconjTYdTpYd = TRACE_STRUCT.traceconjTYdTpYd;
   const double traceconjTYdTpTYd = TRACE_STRUCT.traceconjTYdTpTYd;
   const double traceconjTYeTpYe = TRACE_STRUCT.traceconjTYeTpYe;
   const double traceconjTYeTpTYe = TRACE_STRUCT.traceconjTYeTpTYe;
   const double tracemd2YdAdjYd = TRACE_STRUCT.tracemd2YdAdjYd;
   const double traceme2YeAdjYe = TRACE_STRUCT.traceme2YeAdjYe;
   const double traceml2AdjYeYe = TRACE_STRUCT.traceml2AdjYeYe;
   const double tracemq2AdjYdYd = TRACE_STRUCT.tracemq2AdjYdYd;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYdTYdAdjTYd =
      TRACE_STRUCT.traceYdAdjYdTYdAdjTYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYdAdjYuTYuAdjTYd =
      TRACE_STRUCT.traceYdAdjYuTYuAdjTYd;
   const double traceYdAdjTYdTYdAdjYd =
      TRACE_STRUCT.traceYdAdjTYdTYdAdjYd;
   const double traceYdAdjTYuTYuAdjYd =
      TRACE_STRUCT.traceYdAdjTYuTYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;
   const double traceYeAdjYeTYeAdjTYe =
      TRACE_STRUCT.traceYeAdjYeTYeAdjTYe;
   const double traceYeAdjTYeTYeAdjYe =
      TRACE_STRUCT.traceYeAdjTYeTYeAdjYe;
   const double traceYuAdjYdTYdAdjTYu =
      TRACE_STRUCT.traceYuAdjYdTYdAdjTYu;
   const double traceYuAdjTYdTYdAdjYu =
      TRACE_STRUCT.traceYuAdjTYdTYdAdjYu;
   const double tracemd2YdAdjYdYdAdjYd =
      TRACE_STRUCT.tracemd2YdAdjYdYdAdjYd;
   const double tracemd2YdAdjYuYuAdjYd =
      TRACE_STRUCT.tracemd2YdAdjYuYuAdjYd;
   const double traceme2YeAdjYeYeAdjYe =
      TRACE_STRUCT.traceme2YeAdjYeYeAdjYe;
   const double traceml2AdjYeYeAdjYeYe =
      TRACE_STRUCT.traceml2AdjYeYeAdjYeYe;
   const double tracemq2AdjYdYdAdjYdYd =
      TRACE_STRUCT.tracemq2AdjYdYdAdjYdYd;
   const double tracemq2AdjYdYdAdjYuYu =
      TRACE_STRUCT.tracemq2AdjYdYdAdjYuYu;
   const double tracemq2AdjYuYuAdjYdYd =
      TRACE_STRUCT.tracemq2AdjYuYuAdjYdYd;
   const double tracemu2YuAdjYdYdAdjYu =
      TRACE_STRUCT.tracemu2YuAdjYdYdAdjYu;
   const double Tr2U111 = TRACE_STRUCT.Tr2U111;
   const double Tr31 = TRACE_STRUCT.Tr31;
   const double Tr22 = TRACE_STRUCT.Tr22;


   double beta_mHd2;

   beta_mHd2 = Re(0.04*twoLoop*(Conj(MassB)*Sqr(g1)*(20*traceAdjYdTYd -
      60*traceAdjYeTYe - 40*MassB*traceYdAdjYd + 120*MassB*traceYeAdjYe + 621*
      MassB*Sqr(g1) + 90*MassB*Sqr(g2) + 45*MassWB*Sqr(g2)) + 15*Conj(MassWB)*
      Sqr(g2)*(3*(MassB + 2*MassWB)*Sqr(g1) + 55*MassWB*Sqr(g2)) + 10*(15*Power
      (g2,4)*Tr22 - 7.745966692414834*g1*Tr31 - 90*tracemd2YdAdjYdYdAdjYd - 15*
      tracemd2YdAdjYuYuAdjYd - 30*traceme2YeAdjYeYeAdjYe - 30*
      traceml2AdjYeYeAdjYeYe - 90*tracemq2AdjYdYdAdjYdYd - 15*
      tracemq2AdjYdYdAdjYuYu - 15*tracemq2AdjYuYuAdjYdYd - 15*
      tracemu2YuAdjYdYdAdjYu - 90*traceYdAdjTYdTYdAdjYd - 15*
      traceYdAdjTYuTYuAdjYd - 90*traceYdAdjYdTYdAdjTYd - 90*mHd2*
      traceYdAdjYdYdAdjYd - 15*traceYdAdjYuTYuAdjTYd - 15*mHd2*
      traceYdAdjYuYuAdjYd - 15*mHu2*traceYdAdjYuYuAdjYd - 30*
      traceYeAdjTYeTYeAdjYe - 30*traceYeAdjYeTYeAdjTYe - 30*mHd2*
      traceYeAdjYeYeAdjYe - 15*traceYuAdjTYdTYdAdjYu - 15*traceYuAdjYdTYdAdjTYu
      + 3*Tr2U111*Sqr(g1) - 2*traceconjTYdTpTYd*Sqr(g1) + 2*MassB*
      traceconjTYdTpYd*Sqr(g1) + 6*traceconjTYeTpTYe*Sqr(g1) - 6*MassB*
      traceconjTYeTpYe*Sqr(g1) - 2*tracemd2YdAdjYd*Sqr(g1) + 6*traceme2YeAdjYe*
      Sqr(g1) + 6*traceml2AdjYeYe*Sqr(g1) - 2*tracemq2AdjYdYd*Sqr(g1) + 6*mHd2*
      traceYeAdjYe*Sqr(g1) + 80*traceconjTYdTpTYd*Sqr(g3) - 80*MassG*
      traceconjTYdTpYd*Sqr(g3) + 80*tracemd2YdAdjYd*Sqr(g3) + 80*
      tracemq2AdjYdYd*Sqr(g3) - 80*traceAdjYdTYd*Conj(MassG)*Sqr(g3) +
      traceYdAdjYd*(-2*mHd2*Sqr(g1) + 80*mHd2*Sqr(g3) + 160*AbsSqr(MassG)*Sqr(
      g3)))));


   return beta_mHd2;
}

/**
 * Calculates the three-loop beta function of mHd2.
 *
 * @return three-loop beta function
 */
double CMSSMNoFV_soft_parameters::calc_beta_mHd2_three_loop(const Soft_traces& soft_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)

   const double traceml2 = TRACE_STRUCT.traceml2;
   const double tracemq2 = TRACE_STRUCT.tracemq2;
   const double tracemu2 = TRACE_STRUCT.tracemu2;
   const double traceAdjYdYd = TRACE_STRUCT.traceAdjYdYd;
   const double tracemd2 = TRACE_STRUCT.tracemd2;
   const double traceAdjYeYe = TRACE_STRUCT.traceAdjYeYe;
   const double traceme2 = TRACE_STRUCT.traceme2;
   const double traceAdjYuYu = TRACE_STRUCT.traceAdjYuYu;
   const double traceAdjTYdYd = TRACE_STRUCT.traceAdjTYdYd;
   const double traceAdjTYeYe = TRACE_STRUCT.traceAdjTYeYe;
   const double traceAdjTYuYu = TRACE_STRUCT.traceAdjTYuYu;
   const double traceTYdAdjYd = TRACE_STRUCT.traceTYdAdjYd;
   const double traceTYdAdjTYd = TRACE_STRUCT.traceTYdAdjTYd;
   const double traceTYeAdjYe = TRACE_STRUCT.traceTYeAdjYe;
   const double traceTYeAdjTYe = TRACE_STRUCT.traceTYeAdjTYe;
   const double traceTYuAdjYu = TRACE_STRUCT.traceTYuAdjYu;
   const double traceTYuAdjTYu = TRACE_STRUCT.traceTYuAdjTYu;
   const double traceYdAdjYdmd2 = TRACE_STRUCT.traceYdAdjYdmd2;
   const double traceYeAdjYeme2 = TRACE_STRUCT.traceYeAdjYeme2;
   const double traceYuAdjYumu2 = TRACE_STRUCT.traceYuAdjYumu2;
   const double traceAdjYdYdmq2 = TRACE_STRUCT.traceAdjYdYdmq2;
   const double traceAdjYeYeml2 = TRACE_STRUCT.traceAdjYeYeml2;
   const double traceAdjYuYumq2 = TRACE_STRUCT.traceAdjYuYumq2;
   const double traceAdjYdYdAdjYdYd = TRACE_STRUCT.traceAdjYdYdAdjYdYd;
   const double traceAdjYdYdAdjTYdYd = TRACE_STRUCT.traceAdjYdYdAdjTYdYd;
   const double traceAdjYdTYdAdjYdYd = TRACE_STRUCT.traceAdjYdTYdAdjYdYd;
   const double traceAdjYdTYdAdjTYdYd =
      TRACE_STRUCT.traceAdjYdTYdAdjTYdYd;
   const double traceAdjYeYeAdjYeYe = TRACE_STRUCT.traceAdjYeYeAdjYeYe;
   const double traceAdjYeYeAdjTYeYe = TRACE_STRUCT.traceAdjYeYeAdjTYeYe;
   const double traceAdjYeTYeAdjYeYe = TRACE_STRUCT.traceAdjYeTYeAdjYeYe;
   const double traceAdjYeTYeAdjTYeYe =
      TRACE_STRUCT.traceAdjYeTYeAdjTYeYe;
   const double traceAdjYuYuAdjYdYd = TRACE_STRUCT.traceAdjYuYuAdjYdYd;
   const double traceAdjYuYuAdjTYdYd = TRACE_STRUCT.traceAdjYuYuAdjTYdYd;
   const double traceAdjYuTYuAdjYdYd = TRACE_STRUCT.traceAdjYuTYuAdjYdYd;
   const double traceAdjYuTYuAdjTYdYd =
      TRACE_STRUCT.traceAdjYuTYuAdjTYdYd;
   const double traceAdjTYdTYdAdjYdYd =
      TRACE_STRUCT.traceAdjTYdTYdAdjYdYd;
   const double traceAdjTYdTYdAdjYuYu =
      TRACE_STRUCT.traceAdjTYdTYdAdjYuYu;
   const double traceAdjTYeTYeAdjYeYe =
      TRACE_STRUCT.traceAdjTYeTYeAdjYeYe;
   const double traceAdjTYuYuAdjYdYd = TRACE_STRUCT.traceAdjTYuYuAdjYdYd;
   const double traceAdjTYuTYuAdjYdYd =
      TRACE_STRUCT.traceAdjTYuTYuAdjYdYd;
   const double traceTYdAdjYuYuAdjYd = TRACE_STRUCT.traceTYdAdjYuYuAdjYd;
   const double traceTYdAdjTYuYuAdjYd =
      TRACE_STRUCT.traceTYdAdjTYuYuAdjYd;
   const double traceYdAdjYdYdAdjYdmd2 =
      TRACE_STRUCT.traceYdAdjYdYdAdjYdmd2;
   const double traceYdAdjYuYuAdjYdmd2 =
      TRACE_STRUCT.traceYdAdjYuYuAdjYdmd2;
   const double traceYeAdjYeYeAdjYeme2 =
      TRACE_STRUCT.traceYeAdjYeYeAdjYeme2;
   const double traceYuAdjYdYdAdjYumu2 =
      TRACE_STRUCT.traceYuAdjYdYdAdjYumu2;
   const double traceAdjYdYdAdjYdYdmq2 =
      TRACE_STRUCT.traceAdjYdYdAdjYdYdmq2;
   const double traceAdjYdYdAdjYuYumq2 =
      TRACE_STRUCT.traceAdjYdYdAdjYuYumq2;
   const double traceAdjYeYeAdjYeYeml2 =
      TRACE_STRUCT.traceAdjYeYeAdjYeYeml2;
   const double traceAdjYuYuAdjYdYdmq2 =
      TRACE_STRUCT.traceAdjYuYuAdjYdYdmq2;
   const double traceAdjYdYdAdjYdYdAdjYdYd =
      TRACE_STRUCT.traceAdjYdYdAdjYdYdAdjYdYd;
   const double traceAdjYdYdAdjYdTYdAdjTYdYd =
      TRACE_STRUCT.traceAdjYdYdAdjYdTYdAdjTYdYd;
   const double traceAdjYdYdAdjTYdTYdAdjYdYd =
      TRACE_STRUCT.traceAdjYdYdAdjTYdTYdAdjYdYd;
   const double traceAdjYdTYdAdjYdYdAdjTYdYd =
      TRACE_STRUCT.traceAdjYdTYdAdjYdYdAdjTYdYd;
   const double traceAdjYeYeAdjYeYeAdjYeYe =
      TRACE_STRUCT.traceAdjYeYeAdjYeYeAdjYeYe;
   const double traceAdjYeYeAdjYeTYeAdjTYeYe =
      TRACE_STRUCT.traceAdjYeYeAdjYeTYeAdjTYeYe;
   const double traceAdjYeYeAdjTYeTYeAdjYeYe =
      TRACE_STRUCT.traceAdjYeYeAdjTYeTYeAdjYeYe;
   const double traceAdjYeTYeAdjYeYeAdjTYeYe =
      TRACE_STRUCT.traceAdjYeTYeAdjYeYeAdjTYeYe;
   const double traceAdjYuYuAdjYuYuAdjYdYd =
      TRACE_STRUCT.traceAdjYuYuAdjYuYuAdjYdYd;
   const double traceAdjYuYuAdjYuTYuAdjTYdYd =
      TRACE_STRUCT.traceAdjYuYuAdjYuTYuAdjTYdYd;
   const double traceAdjYuYuAdjTYdTYdAdjYuYu =
      TRACE_STRUCT.traceAdjYuYuAdjTYdTYdAdjYuYu;
   const double traceAdjYuYuAdjTYuTYuAdjYdYd =
      TRACE_STRUCT.traceAdjYuYuAdjTYuTYuAdjYdYd;
   const double traceAdjYuTYuAdjYuYuAdjTYdYd =
      TRACE_STRUCT.traceAdjYuTYuAdjYuYuAdjTYdYd;
   const double traceAdjYuTYuAdjTYuYuAdjYdYd =
      TRACE_STRUCT.traceAdjYuTYuAdjTYuYuAdjYdYd;
   const double traceAdjTYuYuAdjYuTYuAdjYdYd =
      TRACE_STRUCT.traceAdjTYuYuAdjYuTYuAdjYdYd;
   const double traceAdjTYuTYuAdjYuYuAdjYdYd =
      TRACE_STRUCT.traceAdjTYuTYuAdjYuYuAdjYdYd;
   const double traceTYdAdjYuYuAdjTYuYuAdjYd =
      TRACE_STRUCT.traceTYdAdjYuYuAdjTYuYuAdjYd;
   const double traceTYdAdjTYuYuAdjYuYuAdjYd =
      TRACE_STRUCT.traceTYdAdjTYuYuAdjYuYuAdjYd;
   const double traceYdAdjYdYdAdjYdYdAdjYdmd2 =
      TRACE_STRUCT.traceYdAdjYdYdAdjYdYdAdjYdmd2;
   const double traceYdAdjYuYuAdjYuYuAdjYdmd2 =
      TRACE_STRUCT.traceYdAdjYuYuAdjYuYuAdjYdmd2;
   const double traceYeAdjYeYeAdjYeYeAdjYeme2 =
      TRACE_STRUCT.traceYeAdjYeYeAdjYeYeAdjYeme2;
   const double traceYuAdjYdYdAdjYuYuAdjYumu2 =
      TRACE_STRUCT.traceYuAdjYdYdAdjYuYuAdjYumu2;
   const double traceYuAdjYuYuAdjYdYdAdjYumu2 =
      TRACE_STRUCT.traceYuAdjYuYuAdjYdYdAdjYumu2;
   const double traceAdjYdYdAdjYdYdAdjYdYdmq2 =
      TRACE_STRUCT.traceAdjYdYdAdjYdYdAdjYdYdmq2;
   const double traceAdjYdYdAdjYuYuAdjYuYumq2 =
      TRACE_STRUCT.traceAdjYdYdAdjYuYuAdjYuYumq2;
   const double traceAdjYeYeAdjYeYeAdjYeYeml2 =
      TRACE_STRUCT.traceAdjYeYeAdjYeYeAdjYeYeml2;
   const double traceAdjYuYuAdjYdYdAdjYuYumq2 =
      TRACE_STRUCT.traceAdjYuYuAdjYdYdAdjYuYumq2;
   const double traceAdjYuYuAdjYuYuAdjYdYdmq2 =
      TRACE_STRUCT.traceAdjYuYuAdjYuYuAdjYdYdmq2;


   double beta_mHd2;

   const double beta_mHd2_1 = Re(threeLoop*(290.2649751355474*Power(g3,4)
      *MassG*traceAdjTYdYd + 18.*traceAdjTYuTYuAdjYuYuAdjYdYd + 18.*
      traceAdjTYuYuAdjYuTYuAdjYdYd + 216.*traceAdjTYdYd*traceAdjYdTYdAdjYdYd +
      72.*traceAdjTYeYe*traceAdjYdTYdAdjYdYd + 147.82214554123618*
      traceAdjYdTYdAdjYdYdAdjTYdYd - 145.1324875677737*Power(g3,4)*mHd2*
      traceAdjYdYd + 216.*traceAdjTYdTYdAdjYdYd*traceAdjYdYd + 72.*
      traceAdjTYeTYeAdjYeYe*traceAdjYdYd + 216.*traceAdjYdTYdAdjTYdYd*
      traceAdjYdYd + 147.82214554123618*traceAdjYdYdAdjTYdTYdAdjYdYd +
      147.82214554123618*traceAdjYdYdAdjYdTYdAdjTYdYd + 324.*mHd2*traceAdjYdYd*
      traceAdjYdYdAdjYdYd + 147.82214554123618*mHd2*traceAdjYdYdAdjYdYdAdjYdYd
      + 147.82214554123618*traceAdjYdYdAdjYdYdAdjYdYdmq2 - 404.38477621992627*
      traceAdjTYdTYdAdjYdYd*Sqr(g3) - 67.39746270332105*traceAdjTYdTYdAdjYuYu*
      Sqr(g3) - 67.39746270332105*traceAdjTYuTYuAdjYdYd*Sqr(g3) +
      67.39746270332105*MassG*traceAdjTYuYuAdjYdYd*Sqr(g3) - 404.38477621992627
      *traceAdjYdTYdAdjTYdYd*Sqr(g3) + 404.38477621992627*MassG*
      traceAdjYdTYdAdjYdYd*Sqr(g3) + 404.38477621992627*MassG*
      traceAdjYdYdAdjTYdYd*Sqr(g3) - 404.38477621992627*mHd2*
      traceAdjYdYdAdjYdYd*Sqr(g3) + Power(g1,6)*(-4.968*mHd2 - 4.968*mHu2 +
      239.45914429835202*Sqr(MassB)) - 678.794925406642*Power(g3,4)*
      traceAdjYdYd*Sqr(MassG) - 404.38477621992627*traceAdjYdYdAdjYdYd*Sqr(g3)*
      Sqr(MassG) + Power(g1,4)*(65.73800385679644*MassB*traceAdjTYdYd +
      112.81067126752582*MassB*traceAdjTYeYe + 15.6*MassB*traceAdjTYuYu -
      33.22900192839822*mHd2*traceAdjYdYd + 0.4799999999999999*mHu2*
      traceAdjYdYd - 197.2140115703893*traceAdjYdYd*Sqr(MassB) + Sqr(g3)*(
      -46.72465076838378*MassB*MassG - 70.08697615257569*Sqr(MassB) -
      12.802325384191889*Sqr(MassG)) + Sqr(g2)*(-44.575972394845024*MassB*
      MassWB - 1.08*mHd2 - 1.08*mHu2 - 66.86395859226754*Sqr(MassB) -
      19.047986197422514*Sqr(MassWB))) + Power(g2,6)*(-3.*mHd2 - 3.*mHu2 +
      6700.775093943266*Sqr(MassWB)) + Power(g2,4)*(MassWB*(679.3775093943266*
      traceAdjTYdYd + 226.45916979810886*traceAdjTYeYe + 90.*traceAdjTYuYu) -
      348.6887546971633*mHd2*traceAdjYdYd + Sqr(g3)*(-318.57716432988946*MassG*
      MassWB - 87.28858216494473*Sqr(MassG) - 477.8657464948342*Sqr(MassWB)) -
      2038.13252818298*traceAdjYdYd*Sqr(MassWB)) + Sqr(g2)*(295.64429108247236*
      traceAdjTYdTYdAdjYdYd + 36.*traceAdjTYdTYdAdjYuYu + 98.54809702749078*
      traceAdjTYeTYeAdjYeYe + 36.*traceAdjTYuTYuAdjYdYd - 36.*MassWB*
      traceAdjTYuYuAdjYdYd + 295.64429108247236*traceAdjYdTYdAdjTYdYd -
      295.64429108247236*MassWB*traceAdjYdTYdAdjYdYd - 295.64429108247236*
      MassWB*traceAdjYdYdAdjTYdYd + 295.64429108247236*mHd2*traceAdjYdYdAdjYdYd
      + 295.64429108247236*traceAdjYdYdAdjYdYdmq2 - 82.19238810996313*MassG*
      traceAdjTYdYd*Sqr(g3) - 82.19238810996313*MassWB*traceAdjTYdYd*Sqr(g3) +
      164.38477621992627*MassG*MassWB*traceAdjYdYd*Sqr(g3) + 82.19238810996313*
      mHd2*traceAdjYdYd*Sqr(g3) + 164.38477621992627*traceAdjYdYd*Sqr(g3)*Sqr(
      MassG) + 295.64429108247236*traceAdjYdYdAdjYdYd*Sqr(MassWB) +
      164.38477621992627*traceAdjYdYd*Sqr(g3)*Sqr(MassWB)) + Sqr(g1)*(
      63.92885821649447*traceAdjTYdTYdAdjYdYd + 15.39455597308118*
      traceAdjTYdTYdAdjYuYu - 15.928858216494477*traceAdjTYeTYeAdjYeYe +
      15.39455597308118*traceAdjTYuTYuAdjYdYd - 15.39455597308118*MassB*
      traceAdjTYuYuAdjYdYd + 63.92885821649447*traceAdjYdTYdAdjTYdYd -
      63.92885821649447*MassB*traceAdjYdTYdAdjYdYd - 63.92885821649447*MassB*
      traceAdjYdYdAdjTYdYd + 63.92885821649447*mHd2*traceAdjYdYdAdjYdYd +
      63.92885821649447*traceAdjYdYdAdjYdYdmq2 - 15.98548259488315*MassB*
      traceAdjTYdYd*Sqr(g3) - 15.98548259488315*MassG*traceAdjTYdYd*Sqr(g3) +
      31.9709651897663*MassB*MassG*traceAdjYdYd*Sqr(g3) + 15.98548259488315*
      mHd2*traceAdjYdYd*Sqr(g3) + 63.92885821649447*traceAdjYdYdAdjYdYd*Sqr(
      MassB) + 31.9709651897663*traceAdjYdYd*Sqr(g3)*Sqr(MassB) +
      31.9709651897663*traceAdjYdYd*Sqr(g3)*Sqr(MassG) + Power(g2,4)*(
      -59.893287324741706*MassB*MassWB - 1.8*mHd2 - 1.8*mHu2 -
      24.546643662370855*Sqr(MassB) - 82.63993098711256*Sqr(MassWB)) + Sqr(g2)*
      (22.237024256872697*MassWB*traceAdjTYdYd - 22.746643662370854*MassWB*
      traceAdjTYeYe - 22.237024256872697*mHd2*traceAdjYdYd + MassB*(
      22.237024256872697*traceAdjTYdYd - 22.746643662370854*traceAdjTYeYe -
      44.474048513745394*MassWB*traceAdjYdYd) - 44.474048513745394*traceAdjYdYd
      *Sqr(MassB) - 44.474048513745394*traceAdjYdYd*Sqr(MassWB)))));
   const double beta_mHd2_2 = Re(threeLoop*(18.*
      traceAdjYdYdAdjYuYuAdjYuYumq2 - 33.709001928398216*Power(g1,4)*
      traceAdjYdYdmq2 - 348.6887546971633*Power(g2,4)*traceAdjYdYdmq2 -
      145.1324875677737*Power(g3,4)*traceAdjYdYdmq2 + 108.*traceAdjYdYdAdjYdYd*
      traceAdjYdYdmq2 + 72.*traceAdjTYdYd*traceAdjYeTYeAdjYeYe + 24.*
      traceAdjTYeYe*traceAdjYeTYeAdjYeYe + 49.27404851374539*
      traceAdjYeTYeAdjYeYeAdjTYeYe - 58.92533563376291*Power(g1,4)*mHd2*
      traceAdjYeYe - 116.22958489905443*Power(g2,4)*mHd2*traceAdjYeYe - 1.44*
      Power(g1,4)*mHu2*traceAdjYeYe + 72.*traceAdjTYdTYdAdjYdYd*traceAdjYeYe +
      24.*traceAdjTYeTYeAdjYeYe*traceAdjYeYe + 72.*traceAdjYdTYdAdjTYdYd*
      traceAdjYeYe + 108.*mHd2*traceAdjYdYdAdjYdYd*traceAdjYeYe + 72.*
      traceAdjYdYdAdjYdYdmq2*traceAdjYeYe + 24.*traceAdjYeTYeAdjTYeYe*
      traceAdjYeYe + 49.27404851374539*traceAdjYeYeAdjTYeTYeAdjYeYe +
      49.27404851374539*traceAdjYeYeAdjYeTYeAdjTYeYe + 36.*traceAdjYdYdmq2*
      traceAdjYeYeAdjYeYe + 36.*mHd2*traceAdjYeYe*traceAdjYeYeAdjYeYe +
      49.27404851374539*mHd2*traceAdjYeYeAdjYeYeAdjYeYe + 49.27404851374539*
      traceAdjYeYeAdjYeYeAdjYeYeml2 + 24.*traceAdjYeYe*traceAdjYeYeAdjYeYeml2 +
      traceAdjYdYd*(216.*traceAdjYdYdAdjYdYdmq2 + 72.*traceAdjYeTYeAdjTYeYe +
      108.*mHd2*traceAdjYeYeAdjYeYe + 72.*traceAdjYeYeAdjYeYeml2) -
      57.485335633762915*Power(g1,4)*traceAdjYeYeml2 - 116.22958489905443*Power
      (g2,4)*traceAdjYeYeml2 + 36.*traceAdjYdYdAdjYdYd*traceAdjYeYeml2 + 12.*
      traceAdjYeYeAdjYeYe*traceAdjYeYeml2 + 18.*traceAdjYuTYuAdjTYuYuAdjYdYd +
      36.*traceAdjTYuYu*traceAdjYuTYuAdjYdYd + 18.*traceAdjYuTYuAdjYuYuAdjTYdYd
      - 9.36*Power(g1,4)*mHu2*traceAdjYuYu - 54.*Power(g2,4)*mHu2*traceAdjYuYu
      + 36.*traceAdjTYdTYdAdjYuYu*traceAdjYuYu + 36.*traceAdjTYuTYuAdjYdYd*
      traceAdjYuYu + 36.*traceAdjYdYdAdjYuYumq2*traceAdjYuYu + 36.*
      traceAdjYuTYuAdjTYdYd*traceAdjYuYu + 18.*traceAdjYuYuAdjTYdTYdAdjYuYu +
      18.*traceAdjYuYuAdjTYuTYuAdjYdYd + 36.*mHd2*traceAdjYuYu*
      traceAdjYuYuAdjYdYd + 72.*mHu2*traceAdjYuYu*traceAdjYuYuAdjYdYd + 18.*
      traceAdjYuYuAdjYdYdAdjYuYumq2 + 36.*traceAdjYuYu*traceAdjYuYuAdjYdYdmq2 +
      18.*traceAdjYuYuAdjYuTYuAdjTYdYd + 18.*mHd2*traceAdjYuYuAdjYuYuAdjYdYd +
      36.*mHu2*traceAdjYuYuAdjYuYuAdjYdYd + 18.*traceAdjYuYuAdjYuYuAdjYdYdmq2
      + 15.39455597308118*traceAdjYdYdAdjYuYumq2*Sqr(g1) - 15.928858216494477*
      traceAdjYeTYeAdjTYeYe*Sqr(g1) + 15.928858216494477*MassB*
      traceAdjYeTYeAdjYeYe*Sqr(g1) + 15.928858216494477*MassB*
      traceAdjYeYeAdjTYeYe*Sqr(g1) - 15.928858216494477*mHd2*
      traceAdjYeYeAdjYeYe*Sqr(g1) - 15.928858216494477*traceAdjYeYeAdjYeYeml2*
      Sqr(g1) + 15.39455597308118*traceAdjYuTYuAdjTYdYd*Sqr(g1) -
      15.39455597308118*MassB*traceAdjYuTYuAdjYdYd*Sqr(g1) - 15.39455597308118*
      MassB*traceAdjYuYuAdjTYdYd*Sqr(g1) + 15.39455597308118*mHd2*
      traceAdjYuYuAdjYdYd*Sqr(g1) + 15.39455597308118*mHu2*traceAdjYuYuAdjYdYd*
      Sqr(g1) + 15.39455597308118*traceAdjYuYuAdjYdYdmq2*Sqr(g1) + 36.*
      traceAdjYdYdAdjYuYumq2*Sqr(g2) + 98.54809702749078*traceAdjYeTYeAdjTYeYe*
      Sqr(g2) - 98.54809702749078*MassWB*traceAdjYeTYeAdjYeYe*Sqr(g2) -
      98.54809702749078*MassWB*traceAdjYeYeAdjTYeYe*Sqr(g2) + 98.54809702749078
      *mHd2*traceAdjYeYeAdjYeYe*Sqr(g2) + 98.54809702749078*
      traceAdjYeYeAdjYeYeml2*Sqr(g2) + 36.*traceAdjYuTYuAdjTYdYd*Sqr(g2) - 36.*
      MassWB*traceAdjYuTYuAdjYdYd*Sqr(g2) - 36.*MassWB*traceAdjYuYuAdjTYdYd*Sqr
      (g2) + 36.*mHd2*traceAdjYuYuAdjYdYd*Sqr(g2) + 36.*mHu2*
      traceAdjYuYuAdjYdYd*Sqr(g2) + 36.*traceAdjYuYuAdjYdYdmq2*Sqr(g2) -
      22.237024256872697*traceAdjYdYdmq2*Sqr(g1)*Sqr(g2) + 45.49328732474171*
      MassB*MassWB*traceAdjYeYe*Sqr(g1)*Sqr(g2) + 22.746643662370854*mHd2*
      traceAdjYeYe*Sqr(g1)*Sqr(g2) + 22.746643662370854*traceAdjYeYeml2*Sqr(g1)
      *Sqr(g2) - 338.4320138025775*Power(g1,4)*traceAdjYeYe*Sqr(MassB) - 46.8*
      Power(g1,4)*traceAdjYuYu*Sqr(MassB) - 15.928858216494477*
      traceAdjYeYeAdjYeYe*Sqr(g1)*Sqr(MassB) + 30.78911194616236*
      traceAdjYuYuAdjYdYd*Sqr(g1)*Sqr(MassB) + 45.49328732474171*traceAdjYeYe*
      Sqr(g1)*Sqr(g2)*Sqr(MassB) + Sqr(g3)*(-404.38477621992627*
      traceAdjYdYdAdjYdYdmq2 - 67.39746270332105*traceAdjYdYdAdjYuYumq2 -
      67.39746270332105*traceAdjYuTYuAdjTYdYd + 67.39746270332105*MassG*
      traceAdjYuTYuAdjYdYd + 67.39746270332105*MassG*traceAdjYuYuAdjTYdYd -
      67.39746270332105*mHd2*traceAdjYuYuAdjYdYd - 67.39746270332105*mHu2*
      traceAdjYuYuAdjYdYd - 67.39746270332105*traceAdjYuYuAdjYdYdmq2 +
      15.98548259488315*traceAdjYdYdmq2*Sqr(g1) + 82.19238810996313*
      traceAdjYdYdmq2*Sqr(g2) - 134.7949254066421*traceAdjYuYuAdjYdYd*Sqr(MassG
      )) - 679.3775093943266*Power(g2,4)*traceAdjYeYe*Sqr(MassWB) - 270.*Power(
      g2,4)*traceAdjYuYu*Sqr(MassWB) + 98.54809702749078*traceAdjYeYeAdjYeYe*
      Sqr(g2)*Sqr(MassWB) + 72.*traceAdjYuYuAdjYdYd*Sqr(g2)*Sqr(MassWB) +
      45.49328732474171*traceAdjYeYe*Sqr(g1)*Sqr(g2)*Sqr(MassWB)));
   const double beta_mHd2_3 = Re(threeLoop*(36.*traceAdjYuYuAdjYdYd*
      traceAdjYuYumq2 - 31.999999999999996*Power(g3,4)*traceAdjYdYd*tracemd2 +
      Power(g2,6)*(-3.*traceml2 - 9.*tracemq2) - 63.99999999999999*Power(g3,4)*
      traceAdjYdYd*tracemq2 + Power(g1,6)*(-3.312*tracemd2 - 9.936*traceme2 -
      4.968*traceml2 - 1.656*tracemq2 - 13.248*tracemu2) - 31.999999999999996*
      Power(g3,4)*traceAdjYdYd*tracemu2 - 145.1324875677737*Power(g3,4)*
      traceTYdAdjTYd + 108.*traceAdjYdYdAdjYdYd*traceTYdAdjTYd + 36.*
      traceAdjYeYeAdjYeYe*traceTYdAdjTYd + 36.*traceAdjYuYu*
      traceTYdAdjTYuYuAdjYd + 18.*traceTYdAdjTYuYuAdjYuYuAdjYd +
      290.2649751355474*Power(g3,4)*MassG*traceTYdAdjYd + 216.*
      traceAdjYdYdAdjTYdYd*traceTYdAdjYd + 72.*traceAdjYeYeAdjTYeYe*
      traceTYdAdjYd + 18.*traceTYdAdjYuYuAdjTYuYuAdjYd + 36.*traceAdjTYuYu*
      traceTYdAdjYuYuAdjYd + 36.*traceAdjYdYdAdjYdYd*traceTYeAdjTYe + 12.*
      traceAdjYeYeAdjYeYe*traceTYeAdjTYe + 72.*traceAdjYdYdAdjTYdYd*
      traceTYeAdjYe + 24.*traceAdjYeYeAdjTYeYe*traceTYeAdjYe + 36.*
      traceAdjYuYuAdjYdYd*traceTYuAdjTYu + 36.*traceAdjTYuYuAdjYdYd*
      traceTYuAdjYu + 36.*traceAdjYuYuAdjTYdYd*traceTYuAdjYu -
      145.1324875677737*Power(g3,4)*traceYdAdjYdmd2 + 108.*traceAdjYdYdAdjYdYd*
      traceYdAdjYdmd2 + 36.*traceAdjYeYeAdjYeYe*traceYdAdjYdmd2 + 216.*
      traceAdjYdYd*traceYdAdjYdYdAdjYdmd2 + 72.*traceAdjYeYe*
      traceYdAdjYdYdAdjYdmd2 + 147.82214554123618*traceYdAdjYdYdAdjYdYdAdjYdmd2
      + 36.*traceAdjYuYu*traceYdAdjYuYuAdjYdmd2 + 18.*
      traceYdAdjYuYuAdjYuYuAdjYdmd2 + Power(g2,4)*(-54.*traceAdjYuYumq2 -
      348.6887546971633*traceTYdAdjTYd + 679.3775093943266*MassWB*traceTYdAdjYd
      - 116.22958489905443*traceTYeAdjTYe + 226.45916979810886*MassWB*
      traceTYeAdjYe - 54.*traceTYuAdjTYu + 90.*MassWB*traceTYuAdjYu -
      348.6887546971633*traceYdAdjYdmd2 - 116.22958489905443*traceYeAdjYeme2) +
      36.*traceAdjYdYdAdjYdYd*traceYeAdjYeme2 + Power(g1,4)*(-9.36*
      traceAdjYuYumq2 + 0.32*traceAdjYdYd*tracemd2 - 0.9599999999999999*
      traceAdjYeYe*tracemd2 + 0.9599999999999999*traceAdjYdYd*traceme2 - 2.88*
      traceAdjYeYe*traceme2 + 0.4799999999999999*traceAdjYdYd*traceml2 - 1.44*
      traceAdjYeYe*traceml2 + 0.16*traceAdjYdYd*tracemq2 - 0.4799999999999999*
      traceAdjYeYe*tracemq2 + 1.28*traceAdjYdYd*tracemu2 - 3.8399999999999994*
      traceAdjYeYe*tracemu2 - 33.709001928398216*traceTYdAdjTYd +
      65.73800385679644*MassB*traceTYdAdjYd - 57.485335633762915*traceTYeAdjTYe
      + 112.81067126752582*MassB*traceTYeAdjYe - 9.36*traceTYuAdjTYu + 15.6*
      MassB*traceTYuAdjYu - 33.709001928398216*traceYdAdjYdmd2 -
      57.485335633762915*traceYeAdjYeme2 + (-0.72*tracemd2 - 2.16*traceme2 -
      1.08*traceml2 - 0.36*tracemq2 - 2.88*tracemu2)*Sqr(g2)) -
      67.39746270332105*traceTYdAdjTYuYuAdjYd*Sqr(g3) + 67.39746270332105*MassG
      *traceTYdAdjYuYuAdjYd*Sqr(g3) - 404.38477621992627*traceYdAdjYdYdAdjYdmd2
      *Sqr(g3) - 67.39746270332105*traceYdAdjYuYuAdjYdmd2*Sqr(g3) + Sqr(g1)*(
      Power(g2,4)*(-1.8*traceml2 - 5.4*tracemq2) + 15.39455597308118*
      traceTYdAdjTYuYuAdjYd - 15.39455597308118*MassB*traceTYdAdjYuYuAdjYd +
      63.92885821649447*traceYdAdjYdYdAdjYdmd2 + 15.39455597308118*
      traceYdAdjYuYuAdjYdmd2 + (-22.237024256872697*traceTYdAdjTYd +
      22.237024256872697*MassB*traceTYdAdjYd + 22.237024256872697*MassWB*
      traceTYdAdjYd + 22.746643662370854*traceTYeAdjTYe - 22.746643662370854*
      MassB*traceTYeAdjYe - 22.746643662370854*MassWB*traceTYeAdjYe -
      22.237024256872697*traceYdAdjYdmd2 + 22.746643662370854*traceYeAdjYeme2)*
      Sqr(g2) + (15.98548259488315*traceTYdAdjTYd - 15.98548259488315*MassB*
      traceTYdAdjYd - 15.98548259488315*MassG*traceTYdAdjYd + 15.98548259488315
      *traceYdAdjYdmd2)*Sqr(g3)) + Sqr(g2)*(36.*traceTYdAdjTYuYuAdjYd - 36.*
      MassWB*traceTYdAdjYuYuAdjYd + 295.64429108247236*traceYdAdjYdYdAdjYdmd2 +
      36.*traceYdAdjYuYuAdjYdmd2 + (82.19238810996313*traceTYdAdjTYd -
      82.19238810996313*MassG*traceTYdAdjYd - 82.19238810996313*MassWB*
      traceTYdAdjYd + 82.19238810996313*traceYdAdjYdmd2)*Sqr(g3))));
   const double beta_mHd2_4 = Re(threeLoop*(12.*traceAdjYeYeAdjYeYe*
      traceYeAdjYeme2 + 72.*traceAdjYdYd*traceYeAdjYeYeAdjYeme2 + 24.*
      traceAdjYeYe*traceYeAdjYeYeAdjYeme2 + 49.27404851374539*
      traceYeAdjYeYeAdjYeYeAdjYeme2 + 36.*traceAdjYuYu*traceYuAdjYdYdAdjYumu2 +
      18.*traceYuAdjYdYdAdjYuYuAdjYumu2 - 9.36*Power(g1,4)*traceYuAdjYumu2 -
      54.*Power(g2,4)*traceYuAdjYumu2 + 36.*traceAdjYuYuAdjYdYd*traceYuAdjYumu2
      + 18.*traceYuAdjYuYuAdjYdYdAdjYumu2 + (-15.928858216494477*
      traceYeAdjYeYeAdjYeme2 + 15.39455597308118*traceYuAdjYdYdAdjYumu2)*Sqr(g1
      ) + 98.54809702749078*traceYeAdjYeYeAdjYeme2*Sqr(g2) + 36.*
      traceYuAdjYdYdAdjYumu2*Sqr(g2) - 67.39746270332105*traceYuAdjYdYdAdjYumu2
      *Sqr(g3)));

   beta_mHd2 = beta_mHd2_1 + beta_mHd2_2 + beta_mHd2_3 + beta_mHd2_4;


   return beta_mHd2;
}

} // namespace flexiblesusy
