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

// File generated at Sat 27 Aug 2016 12:48:05

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
 * Calculates the one-loop beta function of me2.
 *
 * @return one-loop beta function
 */
Eigen::Matrix<double,3,3> CMSSMNoFV_soft_parameters::calc_beta_me2_one_loop(const Soft_traces& soft_traces) const
{
   const double Tr11 = TRACE_STRUCT.Tr11;


   Eigen::Matrix<double,3,3> beta_me2;

   beta_me2 = (oneOver16PiSqr*(2*(2*mHd2*(Ye*Ye.adjoint()) + 2*(TYe*(TYe)
      .adjoint()) + me2*Ye*Ye.adjoint() + 2*(Ye*ml2*Ye.adjoint()) + Ye*
      Ye.adjoint()*me2) + 1.5491933384829668*g1*Tr11*UNITMATRIX(3) - 4.8*AbsSqr
      (MassB)*Sqr(g1)*UNITMATRIX(3))).real();


   return beta_me2;
}

/**
 * Calculates the two-loop beta function of me2.
 *
 * @return two-loop beta function
 */
Eigen::Matrix<double,3,3> CMSSMNoFV_soft_parameters::calc_beta_me2_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceconjTYdTpTYd = TRACE_STRUCT.traceconjTYdTpTYd;
   const double traceconjTYeTpTYe = TRACE_STRUCT.traceconjTYeTpTYe;
   const double tracemd2YdAdjYd = TRACE_STRUCT.tracemd2YdAdjYd;
   const double traceme2YeAdjYe = TRACE_STRUCT.traceme2YeAdjYe;
   const double traceml2AdjYeYe = TRACE_STRUCT.traceml2AdjYeYe;
   const double tracemq2AdjYdYd = TRACE_STRUCT.tracemq2AdjYdYd;
   const double traceAdjYdTYd = TRACE_STRUCT.traceAdjYdTYd;
   const double traceAdjYeTYe = TRACE_STRUCT.traceAdjYeTYe;
   const double traceconjTYdTpYd = TRACE_STRUCT.traceconjTYdTpYd;
   const double traceconjTYeTpYe = TRACE_STRUCT.traceconjTYeTpYe;
   const double Tr2U111 = TRACE_STRUCT.Tr2U111;
   const double Tr31 = TRACE_STRUCT.Tr31;


   Eigen::Matrix<double,3,3> beta_me2;

   beta_me2 = (0.08*twoLoop*(-5*(2*(15*traceconjTYdTpTYd + 5*
      traceconjTYeTpTYe + 15*tracemd2YdAdjYd + 5*traceme2YeAdjYe + 5*
      traceml2AdjYeYe + 15*tracemq2AdjYdYd + 30*mHd2*traceYdAdjYd + 10*mHd2*
      traceYeAdjYe + 3*mHd2*Sqr(g1) - 15*mHd2*Sqr(g2) - 30*AbsSqr(MassWB)*Sqr(
      g2))*(Ye*Ye.adjoint()) + (30*traceAdjYdTYd + 10*traceAdjYeTYe - 6*MassB*
      Sqr(g1) + 30*MassWB*Sqr(g2))*(Ye*(TYe).adjoint()) + 30*traceconjTYdTpYd*(
      TYe*Ye.adjoint()) + 10*traceconjTYeTpYe*(TYe*Ye.adjoint()) + 30*Conj(
      MassWB)*Sqr(g2)*(TYe*Ye.adjoint()) + 30*traceYdAdjYd*(TYe*(TYe).adjoint()
      ) + 10*traceYeAdjYe*(TYe*(TYe).adjoint()) + 6*Sqr(g1)*(TYe*(TYe).adjoint(
      )) - 30*Sqr(g2)*(TYe*(TYe).adjoint()) + 15*traceYdAdjYd*(me2*Ye*
      Ye.adjoint()) + 5*traceYeAdjYe*(me2*Ye*Ye.adjoint()) + 3*Sqr(g1)*(me2*Ye*
      Ye.adjoint()) - 15*Sqr(g2)*(me2*Ye*Ye.adjoint()) + 30*traceYdAdjYd*(Ye*
      ml2*Ye.adjoint()) + 10*traceYeAdjYe*(Ye*ml2*Ye.adjoint()) + 6*Sqr(g1)*(Ye
      *ml2*Ye.adjoint()) - 30*Sqr(g2)*(Ye*ml2*Ye.adjoint()) + 15*traceYdAdjYd*(
      Ye*Ye.adjoint()*me2) + 5*traceYeAdjYe*(Ye*Ye.adjoint()*me2) + 3*Sqr(g1)*(
      Ye*Ye.adjoint()*me2) - 15*Sqr(g2)*(Ye*Ye.adjoint()*me2) + 20*mHd2*(Ye*
      Ye.adjoint()*Ye*Ye.adjoint()) + 10*(Ye*Ye.adjoint()*TYe*(TYe).adjoint())
      + 10*(Ye*(TYe).adjoint()*TYe*Ye.adjoint()) + 10*(TYe*Ye.adjoint()*Ye*(TYe
      ).adjoint()) + 10*(TYe*(TYe).adjoint()*Ye*Ye.adjoint()) + 5*(me2*Ye*
      Ye.adjoint()*Ye*Ye.adjoint()) + 10*(Ye*ml2*Ye.adjoint()*Ye*Ye.adjoint())
      + 10*(Ye*Ye.adjoint()*me2*Ye*Ye.adjoint()) + 10*(Ye*Ye.adjoint()*Ye*ml2*
      Ye.adjoint()) + 5*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*me2)) + 20*g1*(3*g1*
      Tr2U111 + 3.872983346207417*Tr31)*UNITMATRIX(3) + 6*Conj(MassB)*Sqr(g1)*(
      5*(-2*MassB*(Ye*Ye.adjoint()) + TYe*Ye.adjoint()) + 234*MassB*Sqr(g1)*
      UNITMATRIX(3)))).real();


   return beta_me2;
}

/**
 * Calculates the three-loop beta function of me2.
 *
 * @return three-loop beta function
 */
Eigen::Matrix<double,3,3> CMSSMNoFV_soft_parameters::calc_beta_me2_three_loop(const Soft_traces& soft_traces) const
{
   DEFINE_PROJECTOR(3,3,3,3)

   const double tracemd2 = TRACE_STRUCT.tracemd2;
   const double traceme2 = TRACE_STRUCT.traceme2;
   const double traceml2 = TRACE_STRUCT.traceml2;
   const double tracemq2 = TRACE_STRUCT.tracemq2;
   const double tracemu2 = TRACE_STRUCT.tracemu2;
   const double traceAdjYdYd = TRACE_STRUCT.traceAdjYdYd;
   const double traceAdjYeYe = TRACE_STRUCT.traceAdjYeYe;
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
   const double traceAdjYeYeAdjYeYe = TRACE_STRUCT.traceAdjYeYeAdjYeYe;
   const double traceAdjYeYeAdjTYeYe = TRACE_STRUCT.traceAdjYeYeAdjTYeYe;
   const double traceAdjYuYuAdjYdYd = TRACE_STRUCT.traceAdjYuYuAdjYdYd;
   const double traceAdjYuYuAdjTYdYd = TRACE_STRUCT.traceAdjYuYuAdjTYdYd;
   const double traceAdjTYuYuAdjYdYd = TRACE_STRUCT.traceAdjTYuYuAdjYdYd;
   const double traceAdjYdTYdAdjYdYd = TRACE_STRUCT.traceAdjYdTYdAdjYdYd;
   const double traceAdjYeTYeAdjYeYe = TRACE_STRUCT.traceAdjYeTYeAdjYeYe;
   const double traceAdjYuTYuAdjYdYd = TRACE_STRUCT.traceAdjYuTYuAdjYdYd;
   const double traceTYdAdjYuYuAdjYd = TRACE_STRUCT.traceTYdAdjYuYuAdjYd;
   const double traceAdjYdTYdAdjTYdYd =
      TRACE_STRUCT.traceAdjYdTYdAdjTYdYd;
   const double traceAdjYeTYeAdjTYeYe =
      TRACE_STRUCT.traceAdjYeTYeAdjTYeYe;
   const double traceAdjYuTYuAdjTYdYd =
      TRACE_STRUCT.traceAdjYuTYuAdjTYdYd;
   const double traceAdjTYdTYdAdjYdYd =
      TRACE_STRUCT.traceAdjTYdTYdAdjYdYd;
   const double traceAdjTYdTYdAdjYuYu =
      TRACE_STRUCT.traceAdjTYdTYdAdjYuYu;
   const double traceAdjTYeTYeAdjYeYe =
      TRACE_STRUCT.traceAdjTYeTYeAdjYeYe;
   const double traceAdjTYuTYuAdjYdYd =
      TRACE_STRUCT.traceAdjTYuTYuAdjYdYd;
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


   Eigen::Matrix<double,3,3> beta_me2;

   const Eigen::Matrix<double,3,3> beta_me2_1 = (threeLoop*(Power(g1,4)*(
      33.6*MassB*traceAdjTYdYd + 43.2*MassB*traceAdjTYeYe + 62.39999999999999*
      MassB*traceAdjTYuYu - 20.16*mHd2*traceAdjYdYd - 20.16*traceAdjYdYdmq2 -
      25.92*mHd2*traceAdjYeYe - 25.92*traceAdjYeYeml2 - 37.44*mHu2*traceAdjYuYu
      - 37.44*traceAdjYuYumq2 - 20.16*traceTYdAdjTYd + 33.6*MassB*
      traceTYdAdjYd - 25.92*traceTYeAdjTYe + 43.2*MassB*traceTYeAdjYe - 37.44*
      traceTYuAdjTYu + 62.39999999999999*MassB*traceTYuAdjYu - 20.16*
      traceYdAdjYdmd2 - 25.92*traceYeAdjYeme2 - 37.44*traceYuAdjYumu2 -
      186.89860307353513*MassB*MassG*Sqr(g3) - 100.8*traceAdjYdYd*Sqr(MassB) -
      129.6*traceAdjYeYe*Sqr(MassB) - 187.2*traceAdjYuYu*Sqr(MassB) -
      280.34790461030275*Sqr(g3)*Sqr(MassB) + Sqr(g1)*(-22.464*mHd2 - 22.464*
      mHu2 - 14.976*tracemd2 - 44.928*traceme2 - 22.464*traceml2 - 7.488*
      tracemq2 - 59.904*tracemu2 + 709.004577193408*Sqr(MassB)) -
      51.209301536767555*Sqr(g3)*Sqr(MassG) + Sqr(g2)*(-57.34388957938012*MassB
      *MassWB - 86.01583436907012*Sqr(MassB) - 15.711944789690051*Sqr(MassWB)))
      + (144.*traceAdjTYdTYdAdjYdYd + 24.*traceAdjTYdTYdAdjYuYu + 48.*
      traceAdjTYeTYeAdjYeYe + 24.*traceAdjTYuTYuAdjYdYd + 144.*
      traceAdjYdTYdAdjTYdYd + 216.*mHd2*traceAdjYdYdAdjYdYd + 144.*
      traceAdjYdYdAdjYdYdmq2 + 24.*traceAdjYdYdAdjYuYumq2 - 72.*traceAdjYdYd*
      traceAdjYdYdmq2 + 48.*traceAdjYeTYeAdjTYeYe - 72.*mHd2*traceAdjYdYd*
      traceAdjYeYe - 24.*traceAdjYdYdmq2*traceAdjYeYe + 72.*mHd2*
      traceAdjYeYeAdjYeYe + 48.*traceAdjYeYeAdjYeYeml2 - 24.*traceAdjYdYd*
      traceAdjYeYeml2 - 8.*traceAdjYeYe*traceAdjYeYeml2 + 24.*
      traceAdjYuTYuAdjTYdYd + 48.*mHd2*traceAdjYuYuAdjYdYd + 24.*mHu2*
      traceAdjYuYuAdjYdYd + 24.*traceAdjYuYuAdjYdYdmq2 - 72.*traceAdjYdYd*
      traceTYdAdjTYd - 24.*traceAdjYeYe*traceTYdAdjTYd + 24.*
      traceTYdAdjTYuYuAdjYd + 128.*MassG*traceAdjTYdYd*Sqr(g3) - 256.*mHd2*
      traceAdjYdYd*Sqr(g3) - 128.*traceAdjYdYdmq2*Sqr(g3) - 128.*traceTYdAdjTYd
      *Sqr(g3) + Power(g1,4)*(-58.68*mHd2 + 1.44*mHu2 + 0.96*tracemd2 + 2.88*
      traceme2 + 1.44*traceml2 + 0.48*tracemq2 + 3.84*tracemu2 -
      360.7200000000001*Sqr(MassB)) - 256.*traceAdjYdYd*Sqr(g3)*Sqr(MassG) +
      Sqr(g1)*(-42.8*MassB*traceAdjTYdYd - 3.6*MassB*traceAdjTYeYe + 85.6*mHd2*
      traceAdjYdYd + 42.8*traceAdjYdYdmq2 + 7.2*mHd2*traceAdjYeYe + 3.6*
      traceAdjYeYeml2 + 42.8*traceTYdAdjTYd + 85.6*traceAdjYdYd*Sqr(MassB) +
      7.2*traceAdjYeYe*Sqr(MassB) + Sqr(g2)*(-108.*MassB*MassWB - 54.*mHd2 -
      108.*Sqr(MassB) - 108.*Sqr(MassWB))) + Power(g2,4)*(-99.*mHd2 - 12.*mHu2
      - 12.*traceml2 - 36.*tracemq2 - 474.00000000000006*Sqr(MassWB)) + Sqr(g2)
      *(-54.*MassWB*traceAdjTYdYd - 18.*MassWB*traceAdjTYeYe + 108.*mHd2*
      traceAdjYdYd + 54.*traceAdjYdYdmq2 + 36.*mHd2*traceAdjYeYe + 18.*
      traceAdjYeYeml2 + 54.*traceTYdAdjTYd + 108.*traceAdjYdYd*Sqr(MassWB) +
      36.*traceAdjYeYe*Sqr(MassWB)) - 108.*mHd2*Sqr(traceAdjYdYd) - 12.*mHd2*
      Sqr(traceAdjYeYe))*(Ye*Ye.adjoint()))*UNITMATRIX(3)).real();
   const Eigen::Matrix<double,3,3> beta_me2_2 = (threeLoop*((-72.*
      traceAdjTYdYd*traceTYdAdjYd - 24.*traceAdjTYeYe*traceTYdAdjYd - 24.*
      traceAdjYdYd*traceTYeAdjTYe - 8.*traceAdjYeYe*traceTYeAdjTYe - 24.*
      traceAdjTYdYd*traceTYeAdjYe - 8.*traceAdjTYeYe*traceTYeAdjYe - 72.*
      traceAdjYdYd*traceYdAdjYdmd2 - 24.*traceAdjYeYe*traceYdAdjYdmd2 + 144.*
      traceYdAdjYdYdAdjYdmd2 + 24.*traceYdAdjYuYuAdjYdmd2 - 24.*traceAdjYdYd*
      traceYeAdjYeme2 - 8.*traceAdjYeYe*traceYeAdjYeme2 + 48.*
      traceYeAdjYeYeAdjYeme2 + 24.*traceYuAdjYdYdAdjYumu2 + (-42.8*MassB*
      traceTYdAdjYd + 3.6*traceTYeAdjTYe - 3.6*MassB*traceTYeAdjYe + 42.8*
      traceYdAdjYdmd2 + 3.6*traceYeAdjYeme2)*Sqr(g1) - 54.*MassWB*traceTYdAdjYd
      *Sqr(g2) + 18.*traceTYeAdjTYe*Sqr(g2) - 18.*MassWB*traceTYeAdjYe*Sqr(g2)
      + 54.*traceYdAdjYdmd2*Sqr(g2) + 18.*traceYeAdjYeme2*Sqr(g2) + (128.*MassG
      *traceTYdAdjYd - 128.*traceYdAdjYdmd2)*Sqr(g3))*(Ye*Ye.adjoint()) + (
      120.24*Power(g1,4)*MassB + 174.*Power(g2,4)*MassWB + 144.*
      traceAdjYdTYdAdjYdYd + 48.*traceAdjYeTYeAdjYeYe + 24.*
      traceAdjYuTYuAdjYdYd - 72.*traceAdjYdYd*traceTYdAdjYd - 24.*traceAdjYeYe*
      traceTYdAdjYd + 24.*traceTYdAdjYuYuAdjYd - 24.*traceAdjYdYd*traceTYeAdjYe
      - 8.*traceAdjYeYe*traceTYeAdjYe + (-54.*MassWB*traceAdjYdYd - 18.*MassWB
      *traceAdjYeYe + 54.*traceTYdAdjYd + 18.*traceTYeAdjYe)*Sqr(g2) + Sqr(g1)*
      (-42.8*MassB*traceAdjYdYd - 3.6*MassB*traceAdjYeYe + 42.8*traceTYdAdjYd +
      3.6*traceTYeAdjYe + (54.*MassB + 54.*MassWB)*Sqr(g2)) + 128.*MassG*
      traceAdjYdYd*Sqr(g3) - 128.*traceTYdAdjYd*Sqr(g3))*(Ye*(TYe).adjoint()) +
      120.24*Power(g1,4)*MassB*(TYe*Ye.adjoint()) + 174.*Power(g2,4)*MassWB*(
      TYe*Ye.adjoint()) + 24.*traceAdjTYuYuAdjYdYd*(TYe*Ye.adjoint()) - 72.*
      traceAdjTYdYd*traceAdjYdYd*(TYe*Ye.adjoint()) - 24.*traceAdjTYeYe*
      traceAdjYdYd*(TYe*Ye.adjoint()) + 144.*traceAdjYdYdAdjTYdYd*(TYe*
      Ye.adjoint()) - 24.*traceAdjTYdYd*traceAdjYeYe*(TYe*Ye.adjoint()) - 8.*
      traceAdjTYeYe*traceAdjYeYe*(TYe*Ye.adjoint()) + 48.*traceAdjYeYeAdjTYeYe*
      (TYe*Ye.adjoint()) + 24.*traceAdjYuYuAdjTYdYd*(TYe*Ye.adjoint()) + 42.8*
      traceAdjTYdYd*Sqr(g1)*(TYe*Ye.adjoint()) + 3.6*traceAdjTYeYe*Sqr(g1)*(TYe
      *Ye.adjoint()) - 42.8*MassB*traceAdjYdYd*Sqr(g1)*(TYe*Ye.adjoint()) - 3.6
      *MassB*traceAdjYeYe*Sqr(g1)*(TYe*Ye.adjoint()) + 54.*traceAdjTYdYd*Sqr(g2
      )*(TYe*Ye.adjoint()) + 18.*traceAdjTYeYe*Sqr(g2)*(TYe*Ye.adjoint()) - 54.
      *MassWB*traceAdjYdYd*Sqr(g2)*(TYe*Ye.adjoint()) - 18.*MassWB*traceAdjYeYe
      *Sqr(g2)*(TYe*Ye.adjoint()) + 54.*MassB*Sqr(g1)*Sqr(g2)*(TYe*Ye.adjoint()
      ) + 54.*MassWB*Sqr(g1)*Sqr(g2)*(TYe*Ye.adjoint()) - 128.*traceAdjTYdYd*
      Sqr(g3)*(TYe*Ye.adjoint()) + 128.*MassG*traceAdjYdYd*Sqr(g3)*(TYe*
      Ye.adjoint()) - 60.12*Power(g1,4)*(TYe*(TYe).adjoint()) - 87.*Power(g2,4)
      *(TYe*(TYe).adjoint()) + 72.*traceAdjYdYdAdjYdYd*(TYe*(TYe).adjoint()) -
      24.*traceAdjYdYd*traceAdjYeYe*(TYe*(TYe).adjoint()) + 24.*
      traceAdjYeYeAdjYeYe*(TYe*(TYe).adjoint()) + 24.*traceAdjYuYuAdjYdYd*(TYe*
      (TYe).adjoint()) + 42.8*traceAdjYdYd*Sqr(g1)*(TYe*(TYe).adjoint()) + 3.6*
      traceAdjYeYe*Sqr(g1)*(TYe*(TYe).adjoint()) + 54.*traceAdjYdYd*Sqr(g2)*(
      TYe*(TYe).adjoint()) + 18.*traceAdjYeYe*Sqr(g2)*(TYe*(TYe).adjoint()) -
      54.*Sqr(g1)*Sqr(g2)*(TYe*(TYe).adjoint()) - 128.*traceAdjYdYd*Sqr(g3)*(
      TYe*(TYe).adjoint()) - 36.*Sqr(traceAdjYdYd)*(TYe*(TYe).adjoint()) - 4.*
      Sqr(traceAdjYeYe)*(TYe*(TYe).adjoint()) - 30.06*Power(g1,4)*(me2*Ye*
      Ye.adjoint()) - 43.5*Power(g2,4)*(me2*Ye*Ye.adjoint()) + 36.*
      traceAdjYdYdAdjYdYd*(me2*Ye*Ye.adjoint()) - 12.*traceAdjYdYd*traceAdjYeYe
      *(me2*Ye*Ye.adjoint()) + 12.*traceAdjYeYeAdjYeYe*(me2*Ye*Ye.adjoint()) +
      12.*traceAdjYuYuAdjYdYd*(me2*Ye*Ye.adjoint()) + 21.4*traceAdjYdYd*Sqr(g1)
      *(me2*Ye*Ye.adjoint()) + 1.8*traceAdjYeYe*Sqr(g1)*(me2*Ye*Ye.adjoint()) +
      27.*traceAdjYdYd*Sqr(g2)*(me2*Ye*Ye.adjoint()) + 9.*traceAdjYeYe*Sqr(g2)
      *(me2*Ye*Ye.adjoint()) - 27.*Sqr(g1)*Sqr(g2)*(me2*Ye*Ye.adjoint()) - 64.*
      traceAdjYdYd*Sqr(g3)*(me2*Ye*Ye.adjoint()) - 18.*Sqr(traceAdjYdYd)*(me2*
      Ye*Ye.adjoint()) - 2.*Sqr(traceAdjYeYe)*(me2*Ye*Ye.adjoint()) - 60.12*
      Power(g1,4)*(Ye*ml2*Ye.adjoint()) - 54.*Sqr(g1)*Sqr(g2)*(Ye*ml2*
      Ye.adjoint()))*UNITMATRIX(3)).real();
   const Eigen::Matrix<double,3,3> beta_me2_3 = (threeLoop*((-87.*Power(
      g2,4) + 72.*traceAdjYdYdAdjYdYd - 24.*traceAdjYdYd*traceAdjYeYe + 24.*
      traceAdjYeYeAdjYeYe + 24.*traceAdjYuYuAdjYdYd + (42.8*traceAdjYdYd + 3.6*
      traceAdjYeYe)*Sqr(g1) + (54.*traceAdjYdYd + 18.*traceAdjYeYe)*Sqr(g2) -
      128.*traceAdjYdYd*Sqr(g3) - 36.*Sqr(traceAdjYdYd) - 4.*Sqr(traceAdjYeYe))
      *(Ye*ml2*Ye.adjoint()) + (Power(g1,4)*(-32.4*mHd2 - 194.39999999999998*
      Sqr(MassB)) + Sqr(g3)*(-192.*MassG*traceAdjTYdYd + 384.*mHd2*traceAdjYdYd
      + 192.*traceAdjYdYdmq2 + 192.*traceTYdAdjTYd - 192.*MassG*traceTYdAdjYd
      + 192.*traceYdAdjYdmd2 + 384.*traceAdjYdYd*Sqr(MassG)) + Power(g2,4)*(
      -18.*mHd2 - 108.*Sqr(MassWB)) + Sqr(g2)*(-216.*mHd2*traceAdjYdYd - 108.*
      traceAdjYdYdmq2 - 72.*mHd2*traceAdjYeYe - 36.*traceAdjYeYeml2 - 108.*
      traceTYdAdjTYd - 36.*traceTYeAdjTYe + MassWB*(108.*traceAdjTYdYd + 36.*
      traceAdjTYeYe + 108.*traceTYdAdjYd + 36.*traceTYeAdjYe) - 108.*
      traceYdAdjYdmd2 - 36.*traceYeAdjYeme2 + (-216.*traceAdjYdYd - 72.*
      traceAdjYeYe)*Sqr(MassWB)) + Sqr(g1)*(33.6*mHd2*traceAdjYdYd + 16.8*
      traceAdjYdYdmq2 + 43.2*mHd2*traceAdjYeYe + 21.6*traceAdjYeYeml2 + 16.8*
      traceTYdAdjTYd + 21.6*traceTYeAdjTYe + MassB*(-16.8*traceAdjTYdYd - 21.6*
      traceAdjTYeYe - 16.8*traceTYdAdjYd - 21.6*traceTYeAdjYe) + 16.8*
      traceYdAdjYdmd2 + 21.6*traceYeAdjYeme2 + (33.6*traceAdjYdYd + 43.2*
      traceAdjYeYe)*Sqr(MassB) + Sqr(g2)*(129.6*MassB*MassWB + 64.8*mHd2 +
      129.6*Sqr(MassB) + 129.6*Sqr(MassWB))))*(Ye*Ye.adjoint()*
      1.2020569031595942) - 30.06*Power(g1,4)*(Ye*Ye.adjoint()*me2) - 43.5*
      Power(g2,4)*(Ye*Ye.adjoint()*me2) + 36.*traceAdjYdYdAdjYdYd*(Ye*
      Ye.adjoint()*me2) - 12.*traceAdjYdYd*traceAdjYeYe*(Ye*Ye.adjoint()*me2) +
      12.*traceAdjYeYeAdjYeYe*(Ye*Ye.adjoint()*me2) + 12.*traceAdjYuYuAdjYdYd*
      (Ye*Ye.adjoint()*me2) + 21.4*traceAdjYdYd*Sqr(g1)*(Ye*Ye.adjoint()*me2) +
      1.8*traceAdjYeYe*Sqr(g1)*(Ye*Ye.adjoint()*me2) + 27.*traceAdjYdYd*Sqr(g2
      )*(Ye*Ye.adjoint()*me2) + 9.*traceAdjYeYe*Sqr(g2)*(Ye*Ye.adjoint()*me2) -
      27.*Sqr(g1)*Sqr(g2)*(Ye*Ye.adjoint()*me2) - 64.*traceAdjYdYd*Sqr(g3)*(Ye
      *Ye.adjoint()*me2) - 18.*Sqr(traceAdjYdYd)*(Ye*Ye.adjoint()*me2) - 2.*Sqr
      (traceAdjYeYe)*(Ye*Ye.adjoint()*me2) + 64.8*Power(g1,4)*MassB*(Ye*(TYe)
      .adjoint()*1.2020569031595942) + 36.*Power(g2,4)*MassWB*(Ye*(TYe).adjoint
      ()*1.2020569031595942) - 16.8*MassB*traceAdjYdYd*Sqr(g1)*(Ye*(TYe)
      .adjoint()*1.2020569031595942) - 21.6*MassB*traceAdjYeYe*Sqr(g1)*(Ye*(TYe
      ).adjoint()*1.2020569031595942) + 16.8*traceTYdAdjYd*Sqr(g1)*(Ye*(TYe)
      .adjoint()*1.2020569031595942) + 21.6*traceTYeAdjYe*Sqr(g1)*(Ye*(TYe)
      .adjoint()*1.2020569031595942) + 108.*MassWB*traceAdjYdYd*Sqr(g2)*(Ye*(
      TYe).adjoint()*1.2020569031595942) + 36.*MassWB*traceAdjYeYe*Sqr(g2)*(Ye*
      (TYe).adjoint()*1.2020569031595942) - 108.*traceTYdAdjYd*Sqr(g2)*(Ye*(TYe
      ).adjoint()*1.2020569031595942) - 36.*traceTYeAdjYe*Sqr(g2)*(Ye*(TYe)
      .adjoint()*1.2020569031595942) - 64.8*MassB*Sqr(g1)*Sqr(g2)*(Ye*(TYe)
      .adjoint()*1.2020569031595942) - 64.8*MassWB*Sqr(g1)*Sqr(g2)*(Ye*(TYe)
      .adjoint()*1.2020569031595942) - 192.*MassG*traceAdjYdYd*Sqr(g3)*(Ye*(TYe
      ).adjoint()*1.2020569031595942) + 192.*traceTYdAdjYd*Sqr(g3)*(Ye*(TYe)
      .adjoint()*1.2020569031595942) + 64.8*Power(g1,4)*MassB*(TYe*Ye.adjoint()
      *1.2020569031595942) + 36.*Power(g2,4)*MassWB*(TYe*Ye.adjoint()*
      1.2020569031595942) + 16.8*traceAdjTYdYd*Sqr(g1)*(TYe*Ye.adjoint()*
      1.2020569031595942) + 21.6*traceAdjTYeYe*Sqr(g1)*(TYe*Ye.adjoint()*
      1.2020569031595942) - 16.8*MassB*traceAdjYdYd*Sqr(g1)*(TYe*Ye.adjoint()*
      1.2020569031595942) - 21.6*MassB*traceAdjYeYe*Sqr(g1)*(TYe*Ye.adjoint()*
      1.2020569031595942) - 108.*traceAdjTYdYd*Sqr(g2)*(TYe*Ye.adjoint()*
      1.2020569031595942) - 36.*traceAdjTYeYe*Sqr(g2)*(TYe*Ye.adjoint()*
      1.2020569031595942) + 108.*MassWB*traceAdjYdYd*Sqr(g2)*(TYe*Ye.adjoint()*
      1.2020569031595942) + 36.*MassWB*traceAdjYeYe*Sqr(g2)*(TYe*Ye.adjoint()*
      1.2020569031595942) - 64.8*MassB*Sqr(g1)*Sqr(g2)*(TYe*Ye.adjoint()*
      1.2020569031595942) - 64.8*MassWB*Sqr(g1)*Sqr(g2)*(TYe*Ye.adjoint()*
      1.2020569031595942) + 192.*traceAdjTYdYd*Sqr(g3)*(TYe*Ye.adjoint()*
      1.2020569031595942) - 192.*MassG*traceAdjYdYd*Sqr(g3)*(TYe*Ye.adjoint()*
      1.2020569031595942) - 32.4*Power(g1,4)*(TYe*(TYe).adjoint()*
      1.2020569031595942) - 18.*Power(g2,4)*(TYe*(TYe).adjoint()*
      1.2020569031595942) + 64.8*Sqr(g1)*Sqr(g2)*(TYe*(TYe).adjoint()*
      1.2020569031595942))*UNITMATRIX(3)).real();
   const Eigen::Matrix<double,3,3> beta_me2_4 = (threeLoop*(((16.8*
      traceAdjYdYd + 21.6*traceAdjYeYe)*Sqr(g1) + (-108.*traceAdjYdYd - 36.*
      traceAdjYeYe)*Sqr(g2) + 192.*traceAdjYdYd*Sqr(g3))*(TYe*(TYe).adjoint()*
      1.2020569031595942) + (-16.2*Power(g1,4) - 9.*Power(g2,4) + (-54.*
      traceAdjYdYd - 18.*traceAdjYeYe)*Sqr(g2) + Sqr(g1)*(8.4*traceAdjYdYd +
      10.8*traceAdjYeYe + 32.4*Sqr(g2)) + 96.*traceAdjYdYd*Sqr(g3))*(me2*Ye*
      Ye.adjoint()*1.2020569031595942) - 32.4*Power(g1,4)*(Ye*ml2*Ye.adjoint()*
      1.2020569031595942) - 18.*Power(g2,4)*(Ye*ml2*Ye.adjoint()*
      1.2020569031595942) + 16.8*traceAdjYdYd*Sqr(g1)*(Ye*ml2*Ye.adjoint()*
      1.2020569031595942) + 21.6*traceAdjYeYe*Sqr(g1)*(Ye*ml2*Ye.adjoint()*
      1.2020569031595942) - 108.*traceAdjYdYd*Sqr(g2)*(Ye*ml2*Ye.adjoint()*
      1.2020569031595942) - 36.*traceAdjYeYe*Sqr(g2)*(Ye*ml2*Ye.adjoint()*
      1.2020569031595942) + 64.8*Sqr(g1)*Sqr(g2)*(Ye*ml2*Ye.adjoint()*
      1.2020569031595942) + 192.*traceAdjYdYd*Sqr(g3)*(Ye*ml2*Ye.adjoint()*
      1.2020569031595942) - 16.2*Power(g1,4)*(Ye*Ye.adjoint()*me2*
      1.2020569031595942) - 9.*Power(g2,4)*(Ye*Ye.adjoint()*me2*
      1.2020569031595942) + 8.4*traceAdjYdYd*Sqr(g1)*(Ye*Ye.adjoint()*me2*
      1.2020569031595942) + 10.8*traceAdjYeYe*Sqr(g1)*(Ye*Ye.adjoint()*me2*
      1.2020569031595942) - 54.*traceAdjYdYd*Sqr(g2)*(Ye*Ye.adjoint()*me2*
      1.2020569031595942) - 18.*traceAdjYeYe*Sqr(g2)*(Ye*Ye.adjoint()*me2*
      1.2020569031595942) + 32.4*Sqr(g1)*Sqr(g2)*(Ye*Ye.adjoint()*me2*
      1.2020569031595942) + 96.*traceAdjYdYd*Sqr(g3)*(Ye*Ye.adjoint()*me2*
      1.2020569031595942) + 36.*mHd2*traceAdjYdYd*(Ye*Ye.adjoint()*Ye*
      Ye.adjoint()) + 12.*traceAdjYdYdmq2*(Ye*Ye.adjoint()*Ye*Ye.adjoint()) +
      12.*mHd2*traceAdjYeYe*(Ye*Ye.adjoint()*Ye*Ye.adjoint()) + 4.*
      traceAdjYeYeml2*(Ye*Ye.adjoint()*Ye*Ye.adjoint()) + 12.*traceTYdAdjTYd*(
      Ye*Ye.adjoint()*Ye*Ye.adjoint()) + 4.*traceTYeAdjTYe*(Ye*Ye.adjoint()*Ye*
      Ye.adjoint()) + 12.*traceYdAdjYdmd2*(Ye*Ye.adjoint()*Ye*Ye.adjoint()) +
      4.*traceYeAdjYeme2*(Ye*Ye.adjoint()*Ye*Ye.adjoint()) + 7.2*mHd2*Sqr(g1)*(
      Ye*Ye.adjoint()*Ye*Ye.adjoint()) + 36.*mHd2*Sqr(g2)*(Ye*Ye.adjoint()*Ye*
      Ye.adjoint()) + 7.2*Sqr(g1)*Sqr(MassB)*(Ye*Ye.adjoint()*Ye*Ye.adjoint())
      + 36.*Sqr(g2)*Sqr(MassWB)*(Ye*Ye.adjoint()*Ye*Ye.adjoint()) + 12.*
      traceTYdAdjYd*(Ye*Ye.adjoint()*Ye*(TYe).adjoint()) + 4.*traceTYeAdjYe*(Ye
      *Ye.adjoint()*Ye*(TYe).adjoint()) - 3.6*MassB*Sqr(g1)*(Ye*Ye.adjoint()*Ye
      *(TYe).adjoint()) - 18.*MassWB*Sqr(g2)*(Ye*Ye.adjoint()*Ye*(TYe).adjoint(
      )) + 12.*traceAdjTYdYd*(Ye*Ye.adjoint()*TYe*Ye.adjoint()) + 4.*
      traceAdjTYeYe*(Ye*Ye.adjoint()*TYe*Ye.adjoint()) - 3.6*MassB*Sqr(g1)*(Ye*
      Ye.adjoint()*TYe*Ye.adjoint()) - 18.*MassWB*Sqr(g2)*(Ye*Ye.adjoint()*TYe*
      Ye.adjoint()) + 12.*traceAdjYdYd*(Ye*Ye.adjoint()*TYe*(TYe).adjoint()) +
      4.*traceAdjYeYe*(Ye*Ye.adjoint()*TYe*(TYe).adjoint()) + 3.6*Sqr(g1)*(Ye*
      Ye.adjoint()*TYe*(TYe).adjoint()) + 18.*Sqr(g2)*(Ye*Ye.adjoint()*TYe*(TYe
      ).adjoint()) + 12.*traceTYdAdjYd*(Ye*(TYe).adjoint()*Ye*Ye.adjoint()) +
      4.*traceTYeAdjYe*(Ye*(TYe).adjoint()*Ye*Ye.adjoint()) - 3.6*MassB*Sqr(g1)
      *(Ye*(TYe).adjoint()*Ye*Ye.adjoint()) - 18.*MassWB*Sqr(g2)*(Ye*(TYe)
      .adjoint()*Ye*Ye.adjoint()) + 12.*traceAdjYdYd*(Ye*(TYe).adjoint()*TYe*
      Ye.adjoint()) + 4.*traceAdjYeYe*(Ye*(TYe).adjoint()*TYe*Ye.adjoint()) +
      3.6*Sqr(g1)*(Ye*(TYe).adjoint()*TYe*Ye.adjoint()) + 18.*Sqr(g2)*(Ye*(TYe)
      .adjoint()*TYe*Ye.adjoint()) + 12.*traceAdjTYdYd*(TYe*Ye.adjoint()*Ye*
      Ye.adjoint()) + 4.*traceAdjTYeYe*(TYe*Ye.adjoint()*Ye*Ye.adjoint()) - 3.6
      *MassB*Sqr(g1)*(TYe*Ye.adjoint()*Ye*Ye.adjoint()) - 18.*MassWB*Sqr(g2)*(
      TYe*Ye.adjoint()*Ye*Ye.adjoint()) + 12.*traceAdjYdYd*(TYe*Ye.adjoint()*Ye
      *(TYe).adjoint()) + 4.*traceAdjYeYe*(TYe*Ye.adjoint()*Ye*(TYe).adjoint())
      + 3.6*Sqr(g1)*(TYe*Ye.adjoint()*Ye*(TYe).adjoint()) + 18.*Sqr(g2)*(TYe*
      Ye.adjoint()*Ye*(TYe).adjoint()) + 12.*traceAdjYdYd*(TYe*(TYe).adjoint()*
      Ye*Ye.adjoint()) + 4.*traceAdjYeYe*(TYe*(TYe).adjoint()*Ye*Ye.adjoint())
      + 3.6*Sqr(g1)*(TYe*(TYe).adjoint()*Ye*Ye.adjoint()) + 18.*Sqr(g2)*(TYe*(
      TYe).adjoint()*Ye*Ye.adjoint()) + 6.*traceAdjYdYd*(me2*Ye*Ye.adjoint()*Ye
      *Ye.adjoint()) + 2.*traceAdjYeYe*(me2*Ye*Ye.adjoint()*Ye*Ye.adjoint()) +
      1.8*Sqr(g1)*(me2*Ye*Ye.adjoint()*Ye*Ye.adjoint()) + 9.*Sqr(g2)*(me2*Ye*
      Ye.adjoint()*Ye*Ye.adjoint()) + 12.*traceAdjYdYd*(Ye*ml2*Ye.adjoint()*Ye*
      Ye.adjoint()) + 4.*traceAdjYeYe*(Ye*ml2*Ye.adjoint()*Ye*Ye.adjoint()) +
      3.6*Sqr(g1)*(Ye*ml2*Ye.adjoint()*Ye*Ye.adjoint()) + 18.*Sqr(g2)*(Ye*ml2*
      Ye.adjoint()*Ye*Ye.adjoint()) + 12.*traceAdjYdYd*(Ye*Ye.adjoint()*me2*Ye*
      Ye.adjoint()) + 4.*traceAdjYeYe*(Ye*Ye.adjoint()*me2*Ye*Ye.adjoint()) +
      3.6*Sqr(g1)*(Ye*Ye.adjoint()*me2*Ye*Ye.adjoint()) + 18.*Sqr(g2)*(Ye*
      Ye.adjoint()*me2*Ye*Ye.adjoint()) + 12.*traceAdjYdYd*(Ye*Ye.adjoint()*Ye*
      ml2*Ye.adjoint()) + 4.*traceAdjYeYe*(Ye*Ye.adjoint()*Ye*ml2*Ye.adjoint())
      + 3.6*Sqr(g1)*(Ye*Ye.adjoint()*Ye*ml2*Ye.adjoint()) + 18.*Sqr(g2)*(Ye*
      Ye.adjoint()*Ye*ml2*Ye.adjoint()) + 43.2*mHd2*Sqr(g1)*(Ye*Ye.adjoint()*Ye
      *Ye.adjoint()*1.2020569031595942) - 72.*mHd2*Sqr(g2)*(Ye*Ye.adjoint()*Ye*
      Ye.adjoint()*1.2020569031595942) + 43.2*Sqr(g1)*Sqr(MassB)*(Ye*Ye.adjoint
      ()*Ye*Ye.adjoint()*1.2020569031595942) - 72.*Sqr(g2)*Sqr(MassWB)*(Ye*
      Ye.adjoint()*Ye*Ye.adjoint()*1.2020569031595942) + 6.*traceAdjYdYd*(Ye*
      Ye.adjoint()*Ye*Ye.adjoint()*me2) + 2.*traceAdjYeYe*(Ye*Ye.adjoint()*Ye*
      Ye.adjoint()*me2) + 1.8*Sqr(g1)*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*me2) +
      9.*Sqr(g2)*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*me2) - 21.6*MassB*Sqr(g1)*(Ye
      *Ye.adjoint()*Ye*(TYe).adjoint()*1.2020569031595942) + 36.*MassWB*Sqr(g2)
      *(Ye*Ye.adjoint()*Ye*(TYe).adjoint()*1.2020569031595942) - 21.6*MassB*Sqr
      (g1)*(Ye*Ye.adjoint()*TYe*Ye.adjoint()*1.2020569031595942))*UNITMATRIX(3)
      ).real();
   const Eigen::Matrix<double,3,3> beta_me2_5 = (threeLoop*(36.*MassWB*
      Sqr(g2)*(Ye*Ye.adjoint()*TYe*Ye.adjoint()*1.2020569031595942) + (21.6*Sqr
      (g1) - 36.*Sqr(g2))*(Ye*Ye.adjoint()*TYe*(TYe).adjoint()*
      1.2020569031595942) - 21.6*MassB*Sqr(g1)*(Ye*(TYe).adjoint()*Ye*
      Ye.adjoint()*1.2020569031595942) + 36.*MassWB*Sqr(g2)*(Ye*(TYe).adjoint()
      *Ye*Ye.adjoint()*1.2020569031595942) + 21.6*Sqr(g1)*(Ye*(TYe).adjoint()*
      TYe*Ye.adjoint()*1.2020569031595942) - 36.*Sqr(g2)*(Ye*(TYe).adjoint()*
      TYe*Ye.adjoint()*1.2020569031595942) - 21.6*MassB*Sqr(g1)*(TYe*Ye.adjoint
      ()*Ye*Ye.adjoint()*1.2020569031595942) + 36.*MassWB*Sqr(g2)*(TYe*
      Ye.adjoint()*Ye*Ye.adjoint()*1.2020569031595942) + 21.6*Sqr(g1)*(TYe*
      Ye.adjoint()*Ye*(TYe).adjoint()*1.2020569031595942) - 36.*Sqr(g2)*(TYe*
      Ye.adjoint()*Ye*(TYe).adjoint()*1.2020569031595942) + 21.6*Sqr(g1)*(TYe*(
      TYe).adjoint()*Ye*Ye.adjoint()*1.2020569031595942) - 36.*Sqr(g2)*(TYe*(
      TYe).adjoint()*Ye*Ye.adjoint()*1.2020569031595942) + 10.8*Sqr(g1)*(me2*Ye
      *Ye.adjoint()*Ye*Ye.adjoint()*1.2020569031595942) - 18.*Sqr(g2)*(me2*Ye*
      Ye.adjoint()*Ye*Ye.adjoint()*1.2020569031595942) + 21.6*Sqr(g1)*(Ye*ml2*
      Ye.adjoint()*Ye*Ye.adjoint()*1.2020569031595942) - 36.*Sqr(g2)*(Ye*ml2*
      Ye.adjoint()*Ye*Ye.adjoint()*1.2020569031595942) + 21.6*Sqr(g1)*(Ye*
      Ye.adjoint()*me2*Ye*Ye.adjoint()*1.2020569031595942) - 36.*Sqr(g2)*(Ye*
      Ye.adjoint()*me2*Ye*Ye.adjoint()*1.2020569031595942) + 21.6*Sqr(g1)*(Ye*
      Ye.adjoint()*Ye*ml2*Ye.adjoint()*1.2020569031595942) - 36.*Sqr(g2)*(Ye*
      Ye.adjoint()*Ye*ml2*Ye.adjoint()*1.2020569031595942) + 10.8*Sqr(g1)*(Ye*
      Ye.adjoint()*Ye*Ye.adjoint()*me2*1.2020569031595942) - 18.*Sqr(g2)*(Ye*
      Ye.adjoint()*Ye*Ye.adjoint()*me2*1.2020569031595942) + 36.*mHd2*(Ye*
      Ye.adjoint()*Ye*Ye.adjoint()*Ye*Ye.adjoint()) + 12.*(Ye*Ye.adjoint()*Ye*
      Ye.adjoint()*TYe*(TYe).adjoint()) + 12.*(Ye*Ye.adjoint()*Ye*(TYe).adjoint
      ()*TYe*Ye.adjoint()) + 12.*(Ye*Ye.adjoint()*TYe*Ye.adjoint()*Ye*(TYe)
      .adjoint()) + 12.*(Ye*Ye.adjoint()*TYe*(TYe).adjoint()*Ye*Ye.adjoint()) +
      12.*(Ye*(TYe).adjoint()*Ye*Ye.adjoint()*TYe*Ye.adjoint()) + 12.*(Ye*(TYe
      ).adjoint()*TYe*Ye.adjoint()*Ye*Ye.adjoint()) + 12.*(TYe*Ye.adjoint()*Ye*
      Ye.adjoint()*Ye*(TYe).adjoint()) + 12.*(TYe*Ye.adjoint()*Ye*(TYe).adjoint
      ()*Ye*Ye.adjoint()) + 12.*(TYe*(TYe).adjoint()*Ye*Ye.adjoint()*Ye*
      Ye.adjoint()) + 6.*(me2*Ye*Ye.adjoint()*Ye*Ye.adjoint()*Ye*Ye.adjoint())
      + 12.*(Ye*ml2*Ye.adjoint()*Ye*Ye.adjoint()*Ye*Ye.adjoint()) + 12.*(Ye*
      Ye.adjoint()*me2*Ye*Ye.adjoint()*Ye*Ye.adjoint()) + 12.*(Ye*Ye.adjoint()*
      Ye*ml2*Ye.adjoint()*Ye*Ye.adjoint()) + 12.*(Ye*Ye.adjoint()*Ye*Ye.adjoint
      ()*me2*Ye*Ye.adjoint()) + 12.*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*Ye*ml2*
      Ye.adjoint()) + 72.*mHd2*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*Ye*Ye.adjoint()
      *1.2020569031595942) + 6.*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*Ye*Ye.adjoint(
      )*me2) + 24.*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*TYe*(TYe).adjoint()*
      1.2020569031595942) + 24.*(Ye*Ye.adjoint()*Ye*(TYe).adjoint()*TYe*
      Ye.adjoint()*1.2020569031595942) + 24.*(Ye*Ye.adjoint()*TYe*Ye.adjoint()*
      Ye*(TYe).adjoint()*1.2020569031595942) + 24.*(Ye*Ye.adjoint()*TYe*(TYe)
      .adjoint()*Ye*Ye.adjoint()*1.2020569031595942) + 24.*(Ye*(TYe).adjoint()*
      Ye*Ye.adjoint()*TYe*Ye.adjoint()*1.2020569031595942) + 24.*(Ye*(TYe)
      .adjoint()*TYe*Ye.adjoint()*Ye*Ye.adjoint()*1.2020569031595942) + 24.*(
      TYe*Ye.adjoint()*Ye*Ye.adjoint()*Ye*(TYe).adjoint()*1.2020569031595942) +
      24.*(TYe*Ye.adjoint()*Ye*(TYe).adjoint()*Ye*Ye.adjoint()*
      1.2020569031595942) + 24.*(TYe*(TYe).adjoint()*Ye*Ye.adjoint()*Ye*
      Ye.adjoint()*1.2020569031595942) + 12.*(me2*Ye*Ye.adjoint()*Ye*Ye.adjoint
      ()*Ye*Ye.adjoint()*1.2020569031595942) + 24.*(Ye*ml2*Ye.adjoint()*Ye*
      Ye.adjoint()*Ye*Ye.adjoint()*1.2020569031595942) + 24.*(Ye*Ye.adjoint()*
      me2*Ye*Ye.adjoint()*Ye*Ye.adjoint()*1.2020569031595942) + 24.*(Ye*
      Ye.adjoint()*Ye*ml2*Ye.adjoint()*Ye*Ye.adjoint()*1.2020569031595942) +
      24.*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*me2*Ye*Ye.adjoint()*
      1.2020569031595942) + 24.*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*Ye*ml2*
      Ye.adjoint()*1.2020569031595942) + 12.*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*
      Ye*Ye.adjoint()*me2*1.2020569031595942))*UNITMATRIX(3)).real();

   beta_me2 = beta_me2_1 + beta_me2_2 + beta_me2_3 + beta_me2_4 +
      beta_me2_5;


   return beta_me2;
}

} // namespace flexiblesusy
