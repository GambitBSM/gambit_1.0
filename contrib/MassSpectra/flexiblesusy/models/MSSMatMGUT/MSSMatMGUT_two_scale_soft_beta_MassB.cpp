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

// File generated at Sat 27 Aug 2016 12:47:57

#include "MSSMatMGUT_two_scale_soft_parameters.hpp"
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
 * Calculates the one-loop beta function of MassB.
 *
 * @return one-loop beta function
 */
double MSSMatMGUT_soft_parameters::calc_beta_MassB_one_loop(const Soft_traces& soft_traces) const
{


   double beta_MassB;

   beta_MassB = Re(13.2*MassB*oneOver16PiSqr*Sqr(g1));


   return beta_MassB;
}

/**
 * Calculates the two-loop beta function of MassB.
 *
 * @return two-loop beta function
 */
double MSSMatMGUT_soft_parameters::calc_beta_MassB_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceAdjYdTYd = TRACE_STRUCT.traceAdjYdTYd;
   const double traceAdjYeTYe = TRACE_STRUCT.traceAdjYeTYe;
   const double traceAdjYuTYu = TRACE_STRUCT.traceAdjYuTYu;


   double beta_MassB;

   beta_MassB = Re(0.08*twoLoop*Sqr(g1)*(70*traceAdjYdTYd + 90*
      traceAdjYeTYe + 130*traceAdjYuTYu - 70*MassB*traceYdAdjYd - 90*MassB*
      traceYeAdjYe - 130*MassB*traceYuAdjYu + 398*MassB*Sqr(g1) + 135*MassB*Sqr
      (g2) + 135*MassWB*Sqr(g2) + 440*MassB*Sqr(g3) + 440*MassG*Sqr(g3)));


   return beta_MassB;
}

/**
 * Calculates the three-loop beta function of MassB.
 *
 * @return three-loop beta function
 */
double MSSMatMGUT_soft_parameters::calc_beta_MassB_three_loop(const Soft_traces& soft_traces) const
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


   double beta_MassB;

   beta_MassB = Re(-0.005333333333333333*threeLoop*Sqr(g1)*(96351*Power(
      g1,4)*MassB + 6075*Power(g2,4)*MassB - 12100*Power(g3,4)*MassB - 24200*
      Power(g3,4)*MassG + 12150*Power(g2,4)*MassWB + 8100*traceAdjYdTYdAdjYdYd
      - 4050*MassB*traceAdjYdYdAdjYdYd + 8100*traceAdjYeTYeAdjYeYe - 4050*MassB
      *traceAdjYeYeAdjYeYe + 4350*traceAdjYuTYuAdjYdYd + 12600*
      traceAdjYuTYuAdjYuYu - 4350*MassB*traceAdjYuYuAdjYdYd - 6300*MassB*
      traceAdjYuYuAdjYuYu + 4350*traceTYdAdjYuYuAdjYd + 13500*traceAdjYuYu*
      traceTYuAdjYu + 1690*MassB*traceAdjYuYu*Sqr(g1) - 245*traceTYdAdjYd*Sqr(
      g1) - 1215*traceTYeAdjYe*Sqr(g1) - 845*traceTYuAdjYu*Sqr(g1) + 6525*MassB
      *traceAdjYuYu*Sqr(g2) + 6525*MassWB*traceAdjYuYu*Sqr(g2) - 2475*
      traceTYdAdjYd*Sqr(g2) - 4725*traceTYeAdjYe*Sqr(g2) - 6525*traceTYuAdjYu*
      Sqr(g2) + 2070*MassB*Sqr(g1)*Sqr(g2) + 1035*MassWB*Sqr(g1)*Sqr(g2) + 45*
      traceAdjYeYe*(140*traceTYdAdjYd + 80*traceTYeAdjYe + 54*MassB*Sqr(g1) +
      105*MassB*Sqr(g2) + 105*MassWB*Sqr(g2)) + 8800*MassB*traceAdjYuYu*Sqr(g3)
      + 8800*MassG*traceAdjYuYu*Sqr(g3) - 6400*traceTYdAdjYd*Sqr(g3) - 8800*
      traceTYuAdjYu*Sqr(g3) + 10960*MassB*Sqr(g1)*Sqr(g3) + 5480*MassG*Sqr(g1)*
      Sqr(g3) + 1800*MassB*Sqr(g2)*Sqr(g3) + 1800*MassG*Sqr(g2)*Sqr(g3) + 1800*
      MassWB*Sqr(g2)*Sqr(g3) + 5*traceAdjYdYd*(-1260*MassB*traceAdjYeYe + 1080*
      traceTYdAdjYd + 1260*traceTYeAdjYe + 98*MassB*Sqr(g1) + 495*MassB*Sqr(g2)
      + 495*MassWB*Sqr(g2) + 1280*MassB*Sqr(g3) + 1280*MassG*Sqr(g3)) - 2700*
      MassB*Sqr(traceAdjYdYd) - 1800*MassB*Sqr(traceAdjYeYe) - 6750*MassB*Sqr(
      traceAdjYuYu)));


   return beta_MassB;
}

} // namespace flexiblesusy
