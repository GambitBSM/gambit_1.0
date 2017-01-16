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

// File generated at Sat 27 Aug 2016 12:47:39

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
 * Calculates the one-loop beta function of mu2.
 *
 * @return one-loop beta function
 */
Eigen::Matrix<double,3,3> lowMSSM_soft_parameters::calc_beta_mu2_one_loop(const Soft_traces& soft_traces) const
{
   const double Tr11 = TRACE_STRUCT.Tr11;


   Eigen::Matrix<double,3,3> beta_mu2;

   beta_mu2 = (oneOver16PiSqr*(4*mHu2*(Yu*Yu.adjoint()) + 4*(TYu*(TYu)
      .adjoint()) + 2*(mu2*Yu*Yu.adjoint()) + 4*(Yu*mq2*Yu.adjoint()) + 2*(Yu*
      Yu.adjoint()*mu2) - 1.0327955589886444*g1*Tr11*UNITMATRIX(3) -
      2.1333333333333333*AbsSqr(MassB)*Sqr(g1)*UNITMATRIX(3) -
      10.666666666666666*AbsSqr(MassG)*Sqr(g3)*UNITMATRIX(3))).real();


   return beta_mu2;
}

/**
 * Calculates the two-loop beta function of mu2.
 *
 * @return two-loop beta function
 */
Eigen::Matrix<double,3,3> lowMSSM_soft_parameters::calc_beta_mu2_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceconjTYuTpTYu = TRACE_STRUCT.traceconjTYuTpTYu;
   const double tracemq2AdjYuYu = TRACE_STRUCT.tracemq2AdjYuYu;
   const double tracemu2YuAdjYu = TRACE_STRUCT.tracemu2YuAdjYu;
   const double traceAdjYuTYu = TRACE_STRUCT.traceAdjYuTYu;
   const double traceconjTYuTpYu = TRACE_STRUCT.traceconjTYuTpYu;
   const double Tr2U111 = TRACE_STRUCT.Tr2U111;
   const double Tr31 = TRACE_STRUCT.Tr31;
   const double Tr23 = TRACE_STRUCT.Tr23;


   Eigen::Matrix<double,3,3> beta_mu2;

   beta_mu2 = (twoLoop*(-12*traceconjTYuTpTYu*(Yu*Yu.adjoint()) - 12*
      tracemq2AdjYuYu*(Yu*Yu.adjoint()) - 12*tracemu2YuAdjYu*(Yu*Yu.adjoint())
      - 24*mHu2*traceYuAdjYu*(Yu*Yu.adjoint()) - 0.8*mHu2*Sqr(g1)*(Yu*
      Yu.adjoint()) + 12*mHu2*Sqr(g2)*(Yu*Yu.adjoint()) + 24*AbsSqr(MassWB)*Sqr
      (g2)*(Yu*Yu.adjoint()) - 12*traceAdjYuTYu*(Yu*(TYu).adjoint()) + 0.8*
      MassB*Sqr(g1)*(Yu*(TYu).adjoint()) - 12*MassWB*Sqr(g2)*(Yu*(TYu).adjoint(
      )) - 12*traceconjTYuTpYu*(TYu*Yu.adjoint()) - 12*Conj(MassWB)*Sqr(g2)*(
      TYu*Yu.adjoint()) - 12*traceYuAdjYu*(TYu*(TYu).adjoint()) - 0.8*Sqr(g1)*(
      TYu*(TYu).adjoint()) + 12*Sqr(g2)*(TYu*(TYu).adjoint()) - 6*traceYuAdjYu*
      (mu2*Yu*Yu.adjoint()) - 0.4*Sqr(g1)*(mu2*Yu*Yu.adjoint()) + 6*Sqr(g2)*(
      mu2*Yu*Yu.adjoint()) - 12*traceYuAdjYu*(Yu*mq2*Yu.adjoint()) - 0.8*Sqr(g1
      )*(Yu*mq2*Yu.adjoint()) + 12*Sqr(g2)*(Yu*mq2*Yu.adjoint()) - 6*
      traceYuAdjYu*(Yu*Yu.adjoint()*mu2) - 0.4*Sqr(g1)*(Yu*Yu.adjoint()*mu2) +
      6*Sqr(g2)*(Yu*Yu.adjoint()*mu2) - 4*mHd2*(Yu*Yd.adjoint()*Yd*Yu.adjoint()
      ) - 4*mHu2*(Yu*Yd.adjoint()*Yd*Yu.adjoint()) - 4*(Yu*Yd.adjoint()*TYd*(
      TYu).adjoint()) - 8*mHu2*(Yu*Yu.adjoint()*Yu*Yu.adjoint()) - 4*(Yu*
      Yu.adjoint()*TYu*(TYu).adjoint()) - 4*(Yu*(TYd).adjoint()*TYd*Yu.adjoint(
      )) - 4*(Yu*(TYu).adjoint()*TYu*Yu.adjoint()) - 4*(TYu*Yd.adjoint()*Yd*(
      TYu).adjoint()) - 4*(TYu*Yu.adjoint()*Yu*(TYu).adjoint()) - 4*(TYu*(TYd)
      .adjoint()*Yd*Yu.adjoint()) - 4*(TYu*(TYu).adjoint()*Yu*Yu.adjoint()) - 2
      *(mu2*Yu*Yd.adjoint()*Yd*Yu.adjoint()) - 2*(mu2*Yu*Yu.adjoint()*Yu*
      Yu.adjoint()) - 4*(Yu*mq2*Yd.adjoint()*Yd*Yu.adjoint()) - 4*(Yu*mq2*
      Yu.adjoint()*Yu*Yu.adjoint()) - 4*(Yu*Yd.adjoint()*md2*Yd*Yu.adjoint()) -
      4*(Yu*Yd.adjoint()*Yd*mq2*Yu.adjoint()) - 2*(Yu*Yd.adjoint()*Yd*
      Yu.adjoint()*mu2) - 4*(Yu*Yu.adjoint()*mu2*Yu*Yu.adjoint()) - 4*(Yu*
      Yu.adjoint()*Yu*mq2*Yu.adjoint()) - 2*(Yu*Yu.adjoint()*Yu*Yu.adjoint()*
      mu2) + 10.666666666666666*Power(g3,4)*Tr23*UNITMATRIX(3) -
      4.131182235954578*g1*Tr31*UNITMATRIX(3) + 2.1333333333333333*Tr2U111*Sqr(
      g1)*UNITMATRIX(3) - 2.8444444444444446*Conj(MassG)*Sqr(g3)*(-2*(MassB + 2
      *MassG)*Sqr(g1) + 15*MassG*Sqr(g3))*UNITMATRIX(3) + 0.017777777777777778*
      Conj(MassB)*Sqr(g1)*(45*(-2*MassB*(Yu*Yu.adjoint()) + TYu*Yu.adjoint()) +
      8*(321*MassB*Sqr(g1) + 40*(2*MassB + MassG)*Sqr(g3))*UNITMATRIX(3))))
      .real();


   return beta_mu2;
}

/**
 * Calculates the three-loop beta function of mu2.
 *
 * @return three-loop beta function
 */
Eigen::Matrix<double,3,3> lowMSSM_soft_parameters::calc_beta_mu2_three_loop(const Soft_traces& soft_traces) const
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
   const double traceAdjYuYuAdjYdYd = TRACE_STRUCT.traceAdjYuYuAdjYdYd;
   const double traceAdjYuYuAdjYuYu = TRACE_STRUCT.traceAdjYuYuAdjYuYu;
   const double traceAdjYuYuAdjTYdYd = TRACE_STRUCT.traceAdjYuYuAdjTYdYd;
   const double traceAdjYuYuAdjTYuYu = TRACE_STRUCT.traceAdjYuYuAdjTYuYu;
   const double traceAdjTYuYuAdjYdYd = TRACE_STRUCT.traceAdjTYuYuAdjYdYd;
   const double traceAdjYuTYuAdjYdYd = TRACE_STRUCT.traceAdjYuTYuAdjYdYd;
   const double traceAdjYuTYuAdjYuYu = TRACE_STRUCT.traceAdjYuTYuAdjYuYu;
   const double traceTYdAdjYuYuAdjYd = TRACE_STRUCT.traceTYdAdjYuYuAdjYd;
   const double traceAdjYuTYuAdjTYdYd =
      TRACE_STRUCT.traceAdjYuTYuAdjTYdYd;
   const double traceAdjYuTYuAdjTYuYu =
      TRACE_STRUCT.traceAdjYuTYuAdjTYuYu;
   const double traceAdjTYdTYdAdjYuYu =
      TRACE_STRUCT.traceAdjTYdTYdAdjYuYu;
   const double traceAdjTYuTYuAdjYdYd =
      TRACE_STRUCT.traceAdjTYuTYuAdjYdYd;
   const double traceAdjTYuTYuAdjYuYu =
      TRACE_STRUCT.traceAdjTYuTYuAdjYuYu;
   const double traceTYdAdjTYuYuAdjYd =
      TRACE_STRUCT.traceTYdAdjTYuYuAdjYd;
   const double traceYdAdjYuYuAdjYdmd2 =
      TRACE_STRUCT.traceYdAdjYuYuAdjYdmd2;
   const double traceYuAdjYdYdAdjYumu2 =
      TRACE_STRUCT.traceYuAdjYdYdAdjYumu2;
   const double traceYuAdjYuYuAdjYumu2 =
      TRACE_STRUCT.traceYuAdjYuYuAdjYumu2;
   const double traceAdjYdYdAdjYuYumq2 =
      TRACE_STRUCT.traceAdjYdYdAdjYuYumq2;
   const double traceAdjYuYuAdjYdYdmq2 =
      TRACE_STRUCT.traceAdjYuYuAdjYdYdmq2;
   const double traceAdjYuYuAdjYuYumq2 =
      TRACE_STRUCT.traceAdjYuYuAdjYuYumq2;


   Eigen::Matrix<double,3,3> beta_mu2;

   const Eigen::Matrix<double,3,3> beta_mu2_1 = (threeLoop*(Power(g1,6)*(
      -9.130666666666666*mHd2 - 9.130666666666666*mHu2 - 6.087111111111111*
      tracemd2 - 18.261333333333333*traceme2 - 9.130666666666666*traceml2 -
      3.0435555555555553*tracemq2 - 24.348444444444443*tracemu2 +
      401.01536764151473*Sqr(MassB)) + Power(g3,4)*Sqr(g1)*(-199.82738974264868
      *MassB*MassG - 5.688888888888889*tracemd2 - 11.377777777777778*tracemq2 -
      5.688888888888889*tracemu2 - 88.180361537991*Sqr(MassB) -
      265.6077512806396*Sqr(MassG)) + Power(g3,4)*(106.66666666666666*MassG*
      traceAdjTYdYd + 106.66666666666666*MassG*traceAdjTYuYu - 64.*mHd2*
      traceAdjYdYd - 64.*traceAdjYdYdmq2 - 64.*mHu2*traceAdjYuYu - 64.*
      traceAdjYuYumq2 - 64.*traceTYdAdjTYd + 106.66666666666666*MassG*
      traceTYdAdjYd - 64.*traceTYuAdjTYu + 106.66666666666666*MassG*
      traceTYuAdjYu - 64.*traceYdAdjYdmd2 - 64.*traceYuAdjYumu2 - 320.*
      traceAdjYdYd*Sqr(MassG) - 320.*traceAdjYuYu*Sqr(MassG) + Sqr(g3)*(
      35.55555555555556*tracemd2 + 71.11111111111111*tracemq2 +
      35.55555555555556*tracemu2 + 11510.908127376795*Sqr(MassG)) + Sqr(g2)*(
      -212.38477621992624*MassG*MassWB - 318.57716432988946*Sqr(MassG) -
      58.192388109963126*Sqr(MassWB))) + Power(g1,4)*(14.933333333333334*MassB*
      traceAdjTYdYd + 19.2*MassB*traceAdjTYeYe + 27.733333333333334*MassB*
      traceAdjTYuYu - 8.96*mHd2*traceAdjYdYd - 8.96*traceAdjYdYdmq2 - 11.52*
      mHd2*traceAdjYeYe - 11.52*traceAdjYeYeml2 - 16.64*mHu2*traceAdjYuYu -
      16.64*traceAdjYuYumq2 - 8.96*traceTYdAdjTYd + 14.933333333333334*MassB*
      traceTYdAdjYd - 11.52*traceTYeAdjTYe + 19.2*MassB*traceTYeAdjYe - 16.64*
      traceTYuAdjTYu + 27.733333333333334*MassB*traceTYuAdjYu - 8.96*
      traceYdAdjYdmd2 - 11.52*traceYeAdjYeme2 - 16.64*traceYuAdjYumu2 - 44.8*
      traceAdjYdYd*Sqr(MassB) - 57.599999999999994*traceAdjYeYe*Sqr(MassB) -
      83.2*traceAdjYuYu*Sqr(MassB) + Sqr(g3)*(-194.56826803268228*MassB*MassG -
      3.4133333333333336*mHd2 - 3.4133333333333336*mHu2 - 2.2755555555555556*
      tracemd2 - 6.826666666666667*traceme2 - 3.4133333333333336*traceml2 -
      1.1377777777777778*tracemq2 - 9.102222222222222*tracemu2 -
      291.85240204902345*Sqr(MassB) - 78.5108006830078*Sqr(MassG)) + Sqr(g2)*(
      -25.48617314639116*MassB*MassWB - 38.229259719586736*Sqr(MassB) -
      6.983086573195578*Sqr(MassWB))) + (10.666666666666666*Power(g3,4)*mHu2 +
      24.*traceAdjTYdTYdAdjYuYu + 24.*traceAdjTYuTYuAdjYdYd + 144.*
      traceAdjTYuTYuAdjYuYu + 24.*traceAdjYdYdAdjYuYumq2 + 24.*
      traceAdjYuTYuAdjTYdYd + 144.*traceAdjYuTYuAdjTYuYu + 32.*MassG*
      traceAdjTYuYu*Sqr(g3) + Power(g1,4)*(0.48*mHd2 - 31.480000000000004*mHu2
      - 191.76*Sqr(MassB)) + 64.*Power(g3,4)*Sqr(MassG) - 64.*traceAdjYuYu*Sqr(
      g3)*Sqr(MassG) + Sqr(g2)*(-53.99999999999999*MassWB*traceAdjTYuYu + Sqr(
      g3)*(-352.*MassG*MassWB - 176.*mHu2 - 352.*Sqr(MassG) - 352.*Sqr(MassWB))
      ) + Sqr(g1)*(MassB*(-14.*traceAdjTYuYu + 28.*MassB*traceAdjYuYu) + Sqr(g3
      )*(-2.1333333333333333*MassB*MassG - 1.0666666666666667*mHu2 -
      2.1333333333333333*Sqr(MassB) - 2.1333333333333333*Sqr(MassG)) + Sqr(g2)*
      (-53.6*MassB*MassWB - 26.8*mHu2 - 53.6*Sqr(MassB) - 53.6*Sqr(MassWB))) +
      Power(g2,4)*(-12.*mHd2 - 99.*mHu2 - 474.*Sqr(MassWB)))*(Yu*Yu.adjoint()))
      *UNITMATRIX(3)).real();
   const Eigen::Matrix<double,3,3> beta_mu2_2 = (threeLoop*((24.*mHd2*
      traceAdjYuYuAdjYdYd + 48.*mHu2*traceAdjYuYuAdjYdYd + 24.*
      traceAdjYuYuAdjYdYdmq2 + 215.99999999999997*mHu2*traceAdjYuYuAdjYuYu +
      144.*traceAdjYuYuAdjYuYumq2 - 72.*traceAdjYuYu*traceAdjYuYumq2 + Power(g2
      ,4)*(-12.*traceml2 - 36.*tracemq2) + Power(g1,4)*(0.32*tracemd2 + 0.96*
      traceme2 + 0.48*traceml2 + 0.16*tracemq2 + 1.28*tracemu2) + 24.*
      traceTYdAdjTYuYuAdjYd - 72.*traceAdjYuYu*traceTYuAdjTYu - 72.*
      traceAdjTYuYu*traceTYuAdjYu + 24.*traceYdAdjYuYuAdjYdmd2 + 24.*
      traceYuAdjYdYdAdjYumu2 - 72.*traceAdjYuYu*traceYuAdjYumu2 + 144.*
      traceYuAdjYuYuAdjYumu2 + (28.*mHu2*traceAdjYuYu + 14.*traceAdjYuYumq2 +
      14.*traceTYuAdjTYu - 14.*MassB*traceTYuAdjYu + 14.*traceYuAdjYumu2)*Sqr(
      g1) - 64.*mHu2*traceAdjYuYu*Sqr(g3) - 32.*traceAdjYuYumq2*Sqr(g3) - 32.*
      traceTYuAdjTYu*Sqr(g3) + 32.*MassG*traceTYuAdjYu*Sqr(g3) - 32.*
      traceYuAdjYumu2*Sqr(g3) + Sqr(g2)*(107.99999999999999*mHu2*traceAdjYuYu +
      53.99999999999999*traceAdjYuYumq2 + 53.99999999999999*traceTYuAdjTYu -
      53.99999999999999*MassWB*traceTYuAdjYu + 53.99999999999999*
      traceYuAdjYumu2 + 107.99999999999999*traceAdjYuYu*Sqr(MassWB)) -
      107.99999999999999*mHu2*Sqr(traceAdjYuYu))*(Yu*Yu.adjoint()) + (63.92*
      Power(g1,4)*MassB - 21.333333333333332*Power(g3,4)*MassG + 174.*Power(g2,
      4)*MassWB + 24.*traceAdjYuTYuAdjYdYd + 144.*traceAdjYuTYuAdjYuYu + 24.*
      traceTYdAdjYuYuAdjYd - 72.*traceAdjYuYu*traceTYuAdjYu + 32.*MassG*
      traceAdjYuYu*Sqr(g3) - 32.*traceTYuAdjYu*Sqr(g3) + Sqr(g1)*(-14.*MassB*
      traceAdjYuYu + 14.*traceTYuAdjYu + (26.8*MassB + 26.8*MassWB)*Sqr(g2) + (
      1.0666666666666667*MassB + 1.0666666666666667*MassG)*Sqr(g3)) + Sqr(g2)*(
      -53.99999999999999*MassWB*traceAdjYuYu + 53.99999999999999*traceTYuAdjYu
      + (176.*MassG + 176.*MassWB)*Sqr(g3)))*(Yu*(TYu).adjoint()) + 63.92*Power
      (g1,4)*MassB*(TYu*Yu.adjoint()) - 21.333333333333332*Power(g3,4)*MassG*(
      TYu*Yu.adjoint()) + 174.*Power(g2,4)*MassWB*(TYu*Yu.adjoint()) + 24.*
      traceAdjTYuYuAdjYdYd*(TYu*Yu.adjoint()) - 72.*traceAdjTYuYu*traceAdjYuYu*
      (TYu*Yu.adjoint()) + 24.*traceAdjYuYuAdjTYdYd*(TYu*Yu.adjoint()) + 144.*
      traceAdjYuYuAdjTYuYu*(TYu*Yu.adjoint()) + 14.*traceAdjTYuYu*Sqr(g1)*(TYu*
      Yu.adjoint()) - 14.*MassB*traceAdjYuYu*Sqr(g1)*(TYu*Yu.adjoint()) +
      53.99999999999999*traceAdjTYuYu*Sqr(g2)*(TYu*Yu.adjoint()) -
      53.99999999999999*MassWB*traceAdjYuYu*Sqr(g2)*(TYu*Yu.adjoint()) + 26.8*
      MassB*Sqr(g1)*Sqr(g2)*(TYu*Yu.adjoint()) + 26.8*MassWB*Sqr(g1)*Sqr(g2)*(
      TYu*Yu.adjoint()) - 32.*traceAdjTYuYu*Sqr(g3)*(TYu*Yu.adjoint()) + 32.*
      MassG*traceAdjYuYu*Sqr(g3)*(TYu*Yu.adjoint()) + 1.0666666666666667*MassB*
      Sqr(g1)*Sqr(g3)*(TYu*Yu.adjoint()) + 1.0666666666666667*MassG*Sqr(g1)*Sqr
      (g3)*(TYu*Yu.adjoint()) + 176.*MassG*Sqr(g2)*Sqr(g3)*(TYu*Yu.adjoint()) +
      176.*MassWB*Sqr(g2)*Sqr(g3)*(TYu*Yu.adjoint()) - 31.96*Power(g1,4)*(TYu*
      (TYu).adjoint()) - 87.*Power(g2,4)*(TYu*(TYu).adjoint()) +
      10.666666666666666*Power(g3,4)*(TYu*(TYu).adjoint()) + 24.*
      traceAdjYuYuAdjYdYd*(TYu*(TYu).adjoint()) + 72.*traceAdjYuYuAdjYuYu*(TYu*
      (TYu).adjoint()) + 14.*traceAdjYuYu*Sqr(g1)*(TYu*(TYu).adjoint()) +
      53.99999999999999*traceAdjYuYu*Sqr(g2)*(TYu*(TYu).adjoint()) - 26.8*Sqr(
      g1)*Sqr(g2)*(TYu*(TYu).adjoint()) - 32.*traceAdjYuYu*Sqr(g3)*(TYu*(TYu)
      .adjoint()) - 1.0666666666666667*Sqr(g1)*Sqr(g3)*(TYu*(TYu).adjoint()) -
      176.*Sqr(g2)*Sqr(g3)*(TYu*(TYu).adjoint()) - 36.*Sqr(traceAdjYuYu)*(TYu*(
      TYu).adjoint()) - 15.98*Power(g1,4)*(mu2*Yu*Yu.adjoint()) - 43.5*Power(g2
      ,4)*(mu2*Yu*Yu.adjoint()) + 5.333333333333333*Power(g3,4)*(mu2*Yu*
      Yu.adjoint()) + 12.*traceAdjYuYuAdjYdYd*(mu2*Yu*Yu.adjoint()) + 36.*
      traceAdjYuYuAdjYuYu*(mu2*Yu*Yu.adjoint()) + 7.*traceAdjYuYu*Sqr(g1)*(mu2*
      Yu*Yu.adjoint()) + 26.999999999999996*traceAdjYuYu*Sqr(g2)*(mu2*Yu*
      Yu.adjoint()) - 13.4*Sqr(g1)*Sqr(g2)*(mu2*Yu*Yu.adjoint()) - 16.*
      traceAdjYuYu*Sqr(g3)*(mu2*Yu*Yu.adjoint()) - 0.5333333333333333*Sqr(g1)*
      Sqr(g3)*(mu2*Yu*Yu.adjoint()) - 88.*Sqr(g2)*Sqr(g3)*(mu2*Yu*Yu.adjoint())
      - 18.*Sqr(traceAdjYuYu)*(mu2*Yu*Yu.adjoint()) - 31.96*Power(g1,4)*(Yu*
      mq2*Yu.adjoint()))*UNITMATRIX(3)).real();
   const Eigen::Matrix<double,3,3> beta_mu2_3 = (threeLoop*((-87.*Power(
      g2,4) + 10.666666666666666*Power(g3,4) + 24.*traceAdjYuYuAdjYdYd + 72.*
      traceAdjYuYuAdjYuYu + Sqr(g2)*(53.99999999999999*traceAdjYuYu - 176.*Sqr(
      g3)) + Sqr(g1)*(14.*traceAdjYuYu - 26.8*Sqr(g2) - 1.0666666666666667*Sqr(
      g3)) - 32.*traceAdjYuYu*Sqr(g3) - 36.*Sqr(traceAdjYuYu))*(Yu*mq2*
      Yu.adjoint()) + (Power(g1,4)*(-6.586666666666667*mHu2 - 39.52*Sqr(MassB))
      + Sqr(g3)*(-192.*MassG*traceAdjTYuYu + 384.*mHu2*traceAdjYuYu + 192.*
      traceAdjYuYumq2 + 192.*traceTYuAdjTYu - 192.*MassG*traceTYuAdjYu + 192.*
      traceYuAdjYumu2 + Sqr(g3)*(-362.6666666666667*mHu2 - 2176.*Sqr(MassG)) +
      384.*traceAdjYuYu*Sqr(MassG)) + Power(g2,4)*(-18.*mHu2 -
      107.99999999999999*Sqr(MassWB)) + Sqr(g1)*(-16.8*MassB*traceAdjTYuYu +
      33.6*mHu2*traceAdjYuYu + 16.8*traceAdjYuYumq2 + 16.8*traceTYuAdjTYu -
      16.8*MassB*traceTYuAdjYu + 16.8*traceYuAdjYumu2 + 33.6*traceAdjYuYu*Sqr(
      MassB) + Sqr(g3)*(-59.733333333333334*MassB*MassG - 29.866666666666667*
      mHu2 - 59.733333333333334*Sqr(MassB) - 59.733333333333334*Sqr(MassG)) +
      Sqr(g2)*(62.39999999999999*MassB*MassWB + 31.199999999999996*mHu2 +
      62.39999999999999*Sqr(MassB) + 62.39999999999999*Sqr(MassWB))) + Sqr(g2)*
      (107.99999999999999*MassWB*traceAdjTYuYu - 215.99999999999997*mHu2*
      traceAdjYuYu - 107.99999999999999*traceAdjYuYumq2 - 107.99999999999999*
      traceTYuAdjTYu + 107.99999999999999*MassWB*traceTYuAdjYu -
      107.99999999999999*traceYuAdjYumu2 - 215.99999999999997*traceAdjYuYu*Sqr(
      MassWB) + Sqr(g3)*(384.*MassG*MassWB + 192.*mHu2 + 384.*Sqr(MassG) + 384.
      *Sqr(MassWB))))*(Yu*Yu.adjoint()*1.2020569031595942) - 15.98*Power(g1,4)*
      (Yu*Yu.adjoint()*mu2) - 43.5*Power(g2,4)*(Yu*Yu.adjoint()*mu2) +
      5.333333333333333*Power(g3,4)*(Yu*Yu.adjoint()*mu2) + 12.*
      traceAdjYuYuAdjYdYd*(Yu*Yu.adjoint()*mu2) + 36.*traceAdjYuYuAdjYuYu*(Yu*
      Yu.adjoint()*mu2) + 7.*traceAdjYuYu*Sqr(g1)*(Yu*Yu.adjoint()*mu2) +
      26.999999999999996*traceAdjYuYu*Sqr(g2)*(Yu*Yu.adjoint()*mu2) - 13.4*Sqr(
      g1)*Sqr(g2)*(Yu*Yu.adjoint()*mu2) - 16.*traceAdjYuYu*Sqr(g3)*(Yu*
      Yu.adjoint()*mu2) - 0.5333333333333333*Sqr(g1)*Sqr(g3)*(Yu*Yu.adjoint()*
      mu2) - 88.*Sqr(g2)*Sqr(g3)*(Yu*Yu.adjoint()*mu2) - 18.*Sqr(traceAdjYuYu)*
      (Yu*Yu.adjoint()*mu2) + 13.173333333333334*Power(g1,4)*MassB*(Yu*(TYu)
      .adjoint()*1.2020569031595942) + 725.3333333333334*Power(g3,4)*MassG*(Yu*
      (TYu).adjoint()*1.2020569031595942) + 36.*Power(g2,4)*MassWB*(Yu*(TYu)
      .adjoint()*1.2020569031595942) - 16.8*MassB*traceAdjYuYu*Sqr(g1)*(Yu*(TYu
      ).adjoint()*1.2020569031595942) + 16.8*traceTYuAdjYu*Sqr(g1)*(Yu*(TYu)
      .adjoint()*1.2020569031595942) + 107.99999999999999*MassWB*traceAdjYuYu*
      Sqr(g2)*(Yu*(TYu).adjoint()*1.2020569031595942) - 107.99999999999999*
      traceTYuAdjYu*Sqr(g2)*(Yu*(TYu).adjoint()*1.2020569031595942) -
      31.199999999999996*MassB*Sqr(g1)*Sqr(g2)*(Yu*(TYu).adjoint()*
      1.2020569031595942) - 31.199999999999996*MassWB*Sqr(g1)*Sqr(g2)*(Yu*(TYu)
      .adjoint()*1.2020569031595942) - 192.*MassG*traceAdjYuYu*Sqr(g3)*(Yu*(TYu
      ).adjoint()*1.2020569031595942) + 192.*traceTYuAdjYu*Sqr(g3)*(Yu*(TYu)
      .adjoint()*1.2020569031595942) + 29.866666666666667*MassB*Sqr(g1)*Sqr(g3)
      *(Yu*(TYu).adjoint()*1.2020569031595942) + 29.866666666666667*MassG*Sqr(
      g1)*Sqr(g3)*(Yu*(TYu).adjoint()*1.2020569031595942) - 192.*MassG*Sqr(g2)*
      Sqr(g3)*(Yu*(TYu).adjoint()*1.2020569031595942) - 192.*MassWB*Sqr(g2)*Sqr
      (g3)*(Yu*(TYu).adjoint()*1.2020569031595942) + 13.173333333333334*Power(
      g1,4)*MassB*(TYu*Yu.adjoint()*1.2020569031595942) + 725.3333333333334*
      Power(g3,4)*MassG*(TYu*Yu.adjoint()*1.2020569031595942) + 36.*Power(g2,4)
      *MassWB*(TYu*Yu.adjoint()*1.2020569031595942) + 16.8*traceAdjTYuYu*Sqr(g1
      )*(TYu*Yu.adjoint()*1.2020569031595942) - 16.8*MassB*traceAdjYuYu*Sqr(g1)
      *(TYu*Yu.adjoint()*1.2020569031595942) - 107.99999999999999*traceAdjTYuYu
      *Sqr(g2)*(TYu*Yu.adjoint()*1.2020569031595942) + 107.99999999999999*
      MassWB*traceAdjYuYu*Sqr(g2)*(TYu*Yu.adjoint()*1.2020569031595942) -
      31.199999999999996*MassB*Sqr(g1)*Sqr(g2)*(TYu*Yu.adjoint()*
      1.2020569031595942) - 31.199999999999996*MassWB*Sqr(g1)*Sqr(g2)*(TYu*
      Yu.adjoint()*1.2020569031595942) + 192.*traceAdjTYuYu*Sqr(g3)*(TYu*
      Yu.adjoint()*1.2020569031595942) - 192.*MassG*traceAdjYuYu*Sqr(g3)*(TYu*
      Yu.adjoint()*1.2020569031595942) + 29.866666666666667*MassB*Sqr(g1)*Sqr(
      g3)*(TYu*Yu.adjoint()*1.2020569031595942) + 29.866666666666667*MassG*Sqr(
      g1)*Sqr(g3)*(TYu*Yu.adjoint()*1.2020569031595942) - 192.*MassG*Sqr(g2)*
      Sqr(g3)*(TYu*Yu.adjoint()*1.2020569031595942) - 192.*MassWB*Sqr(g2)*Sqr(
      g3)*(TYu*Yu.adjoint()*1.2020569031595942) - 6.586666666666667*Power(g1,4)
      *(TYu*(TYu).adjoint()*1.2020569031595942) - 18.*Power(g2,4)*(TYu*(TYu)
      .adjoint()*1.2020569031595942) - 362.6666666666667*Power(g3,4)*(TYu*(TYu)
      .adjoint()*1.2020569031595942) + 16.8*traceAdjYuYu*Sqr(g1)*(TYu*(TYu)
      .adjoint()*1.2020569031595942) - 107.99999999999999*traceAdjYuYu*Sqr(g2)*
      (TYu*(TYu).adjoint()*1.2020569031595942) + 31.199999999999996*Sqr(g1)*Sqr
      (g2)*(TYu*(TYu).adjoint()*1.2020569031595942) - 29.866666666666667*Sqr(g1
      )*Sqr(g3)*(TYu*(TYu).adjoint()*1.2020569031595942) + 192.*Sqr(g2)*Sqr(g3)
      *(TYu*(TYu).adjoint()*1.2020569031595942))*UNITMATRIX(3)).real();
   const Eigen::Matrix<double,3,3> beta_mu2_4 = (threeLoop*(192.*
      traceAdjYuYu*Sqr(g3)*(TYu*(TYu).adjoint()*1.2020569031595942) + (
      -3.2933333333333334*Power(g1,4) - 9.*Power(g2,4) - 181.33333333333334*
      Power(g3,4) + Sqr(g1)*(8.4*traceAdjYuYu + 15.599999999999998*Sqr(g2) -
      14.933333333333334*Sqr(g3)) + 96.*traceAdjYuYu*Sqr(g3) + Sqr(g2)*(
      -53.99999999999999*traceAdjYuYu + 96.*Sqr(g3)))*(mu2*Yu*Yu.adjoint()*
      1.2020569031595942) - 6.586666666666667*Power(g1,4)*(Yu*mq2*Yu.adjoint()*
      1.2020569031595942) - 18.*Power(g2,4)*(Yu*mq2*Yu.adjoint()*
      1.2020569031595942) - 362.6666666666667*Power(g3,4)*(Yu*mq2*Yu.adjoint()*
      1.2020569031595942) + 16.8*traceAdjYuYu*Sqr(g1)*(Yu*mq2*Yu.adjoint()*
      1.2020569031595942) - 107.99999999999999*traceAdjYuYu*Sqr(g2)*(Yu*mq2*
      Yu.adjoint()*1.2020569031595942) + 31.199999999999996*Sqr(g1)*Sqr(g2)*(Yu
      *mq2*Yu.adjoint()*1.2020569031595942) + 192.*traceAdjYuYu*Sqr(g3)*(Yu*mq2
      *Yu.adjoint()*1.2020569031595942) - 29.866666666666667*Sqr(g1)*Sqr(g3)*(
      Yu*mq2*Yu.adjoint()*1.2020569031595942) + 192.*Sqr(g2)*Sqr(g3)*(Yu*mq2*
      Yu.adjoint()*1.2020569031595942) + 48.*mHd2*traceAdjYdYd*(Yu*Yd.adjoint()
      *Yd*Yu.adjoint()) + 24.*mHu2*traceAdjYdYd*(Yu*Yd.adjoint()*Yd*Yu.adjoint(
      )) + 24.*traceAdjYdYdmq2*(Yu*Yd.adjoint()*Yd*Yu.adjoint()) + 16.*mHd2*
      traceAdjYeYe*(Yu*Yd.adjoint()*Yd*Yu.adjoint()) + 8.*mHu2*traceAdjYeYe*(Yu
      *Yd.adjoint()*Yd*Yu.adjoint()) + 8.*traceAdjYeYeml2*(Yu*Yd.adjoint()*Yd*
      Yu.adjoint()) - 12.*mHd2*traceAdjYuYu*(Yu*Yd.adjoint()*Yd*Yu.adjoint()) -
      24.*mHu2*traceAdjYuYu*(Yu*Yd.adjoint()*Yd*Yu.adjoint()) - 12.*
      traceAdjYuYumq2*(Yu*Yd.adjoint()*Yd*Yu.adjoint()) + 24.*traceTYdAdjTYd*(
      Yu*Yd.adjoint()*Yd*Yu.adjoint()) + 8.*traceTYeAdjTYe*(Yu*Yd.adjoint()*Yd*
      Yu.adjoint()) - 12.*traceTYuAdjTYu*(Yu*Yd.adjoint()*Yd*Yu.adjoint()) +
      24.*traceYdAdjYdmd2*(Yu*Yd.adjoint()*Yd*Yu.adjoint()) + 8.*
      traceYeAdjYeme2*(Yu*Yd.adjoint()*Yd*Yu.adjoint()) - 12.*traceYuAdjYumu2*(
      Yu*Yd.adjoint()*Yd*Yu.adjoint()) + 2.533333333333333*mHd2*Sqr(g1)*(Yu*
      Yd.adjoint()*Yd*Yu.adjoint()) + 2.533333333333333*mHu2*Sqr(g1)*(Yu*
      Yd.adjoint()*Yd*Yu.adjoint()) + 18.*mHd2*Sqr(g2)*(Yu*Yd.adjoint()*Yd*
      Yu.adjoint()) + 18.*mHu2*Sqr(g2)*(Yu*Yd.adjoint()*Yd*Yu.adjoint()) +
      42.666666666666664*mHd2*Sqr(g3)*(Yu*Yd.adjoint()*Yd*Yu.adjoint()) +
      42.666666666666664*mHu2*Sqr(g3)*(Yu*Yd.adjoint()*Yd*Yu.adjoint()) +
      5.066666666666666*Sqr(g1)*Sqr(MassB)*(Yu*Yd.adjoint()*Yd*Yu.adjoint()) +
      85.33333333333333*Sqr(g3)*Sqr(MassG)*(Yu*Yd.adjoint()*Yd*Yu.adjoint()) +
      36.*Sqr(g2)*Sqr(MassWB)*(Yu*Yd.adjoint()*Yd*Yu.adjoint()) + 24.*
      traceTYdAdjYd*(Yu*Yd.adjoint()*Yd*(TYu).adjoint()) + 8.*traceTYeAdjYe*(Yu
      *Yd.adjoint()*Yd*(TYu).adjoint()) - 12.*traceTYuAdjYu*(Yu*Yd.adjoint()*Yd
      *(TYu).adjoint()) - 2.533333333333333*MassB*Sqr(g1)*(Yu*Yd.adjoint()*Yd*(
      TYu).adjoint()) - 18.*MassWB*Sqr(g2)*(Yu*Yd.adjoint()*Yd*(TYu).adjoint())
      - 42.666666666666664*MassG*Sqr(g3)*(Yu*Yd.adjoint()*Yd*(TYu).adjoint())
      + 24.*traceAdjTYdYd*(Yu*Yd.adjoint()*TYd*Yu.adjoint()) + 8.*traceAdjTYeYe
      *(Yu*Yd.adjoint()*TYd*Yu.adjoint()) - 12.*traceAdjTYuYu*(Yu*Yd.adjoint()*
      TYd*Yu.adjoint()) - 2.533333333333333*MassB*Sqr(g1)*(Yu*Yd.adjoint()*TYd*
      Yu.adjoint()) - 18.*MassWB*Sqr(g2)*(Yu*Yd.adjoint()*TYd*Yu.adjoint()) -
      42.666666666666664*MassG*Sqr(g3)*(Yu*Yd.adjoint()*TYd*Yu.adjoint()) + 24.
      *traceAdjYdYd*(Yu*Yd.adjoint()*TYd*(TYu).adjoint()) + 8.*traceAdjYeYe*(Yu
      *Yd.adjoint()*TYd*(TYu).adjoint()) - 12.*traceAdjYuYu*(Yu*Yd.adjoint()*
      TYd*(TYu).adjoint()) + 2.533333333333333*Sqr(g1)*(Yu*Yd.adjoint()*TYd*(
      TYu).adjoint()) + 18.*Sqr(g2)*(Yu*Yd.adjoint()*TYd*(TYu).adjoint()) +
      42.666666666666664*Sqr(g3)*(Yu*Yd.adjoint()*TYd*(TYu).adjoint()) -
      3.2933333333333334*Power(g1,4)*(Yu*Yu.adjoint()*mu2*1.2020569031595942) -
      9.*Power(g2,4)*(Yu*Yu.adjoint()*mu2*1.2020569031595942) -
      181.33333333333334*Power(g3,4)*(Yu*Yu.adjoint()*mu2*1.2020569031595942) +
      8.4*traceAdjYuYu*Sqr(g1)*(Yu*Yu.adjoint()*mu2*1.2020569031595942) -
      53.99999999999999*traceAdjYuYu*Sqr(g2)*(Yu*Yu.adjoint()*mu2*
      1.2020569031595942) + 15.599999999999998*Sqr(g1)*Sqr(g2)*(Yu*Yu.adjoint()
      *mu2*1.2020569031595942) + 96.*traceAdjYuYu*Sqr(g3)*(Yu*Yu.adjoint()*mu2*
      1.2020569031595942) - 14.933333333333334*Sqr(g1)*Sqr(g3)*(Yu*Yu.adjoint()
      *mu2*1.2020569031595942) + 96.*Sqr(g2)*Sqr(g3)*(Yu*Yu.adjoint()*mu2*
      1.2020569031595942) + 36.*mHu2*traceAdjYuYu*(Yu*Yu.adjoint()*Yu*
      Yu.adjoint()) + 12.*traceAdjYuYumq2*(Yu*Yu.adjoint()*Yu*Yu.adjoint()) +
      12.*traceTYuAdjTYu*(Yu*Yu.adjoint()*Yu*Yu.adjoint()) + 12.*
      traceYuAdjYumu2*(Yu*Yu.adjoint()*Yu*Yu.adjoint()) - 1.3333333333333333*
      mHu2*Sqr(g1)*(Yu*Yu.adjoint()*Yu*Yu.adjoint()) + 36.*mHu2*Sqr(g2)*(Yu*
      Yu.adjoint()*Yu*Yu.adjoint()) + 85.33333333333333*mHu2*Sqr(g3)*(Yu*
      Yu.adjoint()*Yu*Yu.adjoint()) - 1.3333333333333333*Sqr(g1)*Sqr(MassB)*(Yu
      *Yu.adjoint()*Yu*Yu.adjoint()) + 85.33333333333333*Sqr(g3)*Sqr(MassG)*(Yu
      *Yu.adjoint()*Yu*Yu.adjoint()) + 36.*Sqr(g2)*Sqr(MassWB)*(Yu*Yu.adjoint()
      *Yu*Yu.adjoint()) + 12.*traceTYuAdjYu*(Yu*Yu.adjoint()*Yu*(TYu).adjoint()
      ) + 0.6666666666666666*MassB*Sqr(g1)*(Yu*Yu.adjoint()*Yu*(TYu).adjoint())
      - 18.*MassWB*Sqr(g2)*(Yu*Yu.adjoint()*Yu*(TYu).adjoint()) -
      42.666666666666664*MassG*Sqr(g3)*(Yu*Yu.adjoint()*Yu*(TYu).adjoint()) +
      12.*traceAdjTYuYu*(Yu*Yu.adjoint()*TYu*Yu.adjoint()) + 0.6666666666666666
      *MassB*Sqr(g1)*(Yu*Yu.adjoint()*TYu*Yu.adjoint()) - 18.*MassWB*Sqr(g2)*(
      Yu*Yu.adjoint()*TYu*Yu.adjoint()) - 42.666666666666664*MassG*Sqr(g3)*(Yu*
      Yu.adjoint()*TYu*Yu.adjoint()) + 12.*traceAdjYuYu*(Yu*Yu.adjoint()*TYu*(
      TYu).adjoint()) - 0.6666666666666666*Sqr(g1)*(Yu*Yu.adjoint()*TYu*(TYu)
      .adjoint()) + 18.*Sqr(g2)*(Yu*Yu.adjoint()*TYu*(TYu).adjoint()) +
      42.666666666666664*Sqr(g3)*(Yu*Yu.adjoint()*TYu*(TYu).adjoint()) + 24.*
      traceTYdAdjYd*(Yu*(TYd).adjoint()*Yd*Yu.adjoint()) + 8.*traceTYeAdjYe*(Yu
      *(TYd).adjoint()*Yd*Yu.adjoint()) - 12.*traceTYuAdjYu*(Yu*(TYd).adjoint()
      *Yd*Yu.adjoint()) - 2.533333333333333*MassB*Sqr(g1)*(Yu*(TYd).adjoint()*
      Yd*Yu.adjoint()) - 18.*MassWB*Sqr(g2)*(Yu*(TYd).adjoint()*Yd*Yu.adjoint()
      ) - 42.666666666666664*MassG*Sqr(g3)*(Yu*(TYd).adjoint()*Yd*Yu.adjoint())
      + 2.533333333333333*Sqr(g1)*(Yu*(TYd).adjoint()*TYd*Yu.adjoint()) + 18.*
      Sqr(g2)*(Yu*(TYd).adjoint()*TYd*Yu.adjoint()))*UNITMATRIX(3)).real();
   const Eigen::Matrix<double,3,3> beta_mu2_5 = (threeLoop*((24.*
      traceAdjYdYd + 8.*traceAdjYeYe - 12.*traceAdjYuYu + 42.666666666666664*
      Sqr(g3))*(Yu*(TYd).adjoint()*TYd*Yu.adjoint()) + (12.*traceTYuAdjYu +
      0.6666666666666666*MassB*Sqr(g1) - 18.*MassWB*Sqr(g2) -
      42.666666666666664*MassG*Sqr(g3))*(Yu*(TYu).adjoint()*Yu*Yu.adjoint()) +
      12.*traceAdjYuYu*(Yu*(TYu).adjoint()*TYu*Yu.adjoint()) -
      0.6666666666666666*Sqr(g1)*(Yu*(TYu).adjoint()*TYu*Yu.adjoint()) + 18.*
      Sqr(g2)*(Yu*(TYu).adjoint()*TYu*Yu.adjoint()) + 42.666666666666664*Sqr(g3
      )*(Yu*(TYu).adjoint()*TYu*Yu.adjoint()) + 24.*traceAdjTYdYd*(TYu*
      Yd.adjoint()*Yd*Yu.adjoint()) + 8.*traceAdjTYeYe*(TYu*Yd.adjoint()*Yd*
      Yu.adjoint()) - 12.*traceAdjTYuYu*(TYu*Yd.adjoint()*Yd*Yu.adjoint()) -
      2.533333333333333*MassB*Sqr(g1)*(TYu*Yd.adjoint()*Yd*Yu.adjoint()) - 18.*
      MassWB*Sqr(g2)*(TYu*Yd.adjoint()*Yd*Yu.adjoint()) - 42.666666666666664*
      MassG*Sqr(g3)*(TYu*Yd.adjoint()*Yd*Yu.adjoint()) + 24.*traceAdjYdYd*(TYu*
      Yd.adjoint()*Yd*(TYu).adjoint()) + 8.*traceAdjYeYe*(TYu*Yd.adjoint()*Yd*(
      TYu).adjoint()) - 12.*traceAdjYuYu*(TYu*Yd.adjoint()*Yd*(TYu).adjoint())
      + 2.533333333333333*Sqr(g1)*(TYu*Yd.adjoint()*Yd*(TYu).adjoint()) + 18.*
      Sqr(g2)*(TYu*Yd.adjoint()*Yd*(TYu).adjoint()) + 42.666666666666664*Sqr(g3
      )*(TYu*Yd.adjoint()*Yd*(TYu).adjoint()) + 12.*traceAdjTYuYu*(TYu*
      Yu.adjoint()*Yu*Yu.adjoint()) + 0.6666666666666666*MassB*Sqr(g1)*(TYu*
      Yu.adjoint()*Yu*Yu.adjoint()) - 18.*MassWB*Sqr(g2)*(TYu*Yu.adjoint()*Yu*
      Yu.adjoint()) - 42.666666666666664*MassG*Sqr(g3)*(TYu*Yu.adjoint()*Yu*
      Yu.adjoint()) + 12.*traceAdjYuYu*(TYu*Yu.adjoint()*Yu*(TYu).adjoint()) -
      0.6666666666666666*Sqr(g1)*(TYu*Yu.adjoint()*Yu*(TYu).adjoint()) + 18.*
      Sqr(g2)*(TYu*Yu.adjoint()*Yu*(TYu).adjoint()) + 42.666666666666664*Sqr(g3
      )*(TYu*Yu.adjoint()*Yu*(TYu).adjoint()) + 24.*traceAdjYdYd*(TYu*(TYd)
      .adjoint()*Yd*Yu.adjoint()) + 8.*traceAdjYeYe*(TYu*(TYd).adjoint()*Yd*
      Yu.adjoint()) - 12.*traceAdjYuYu*(TYu*(TYd).adjoint()*Yd*Yu.adjoint()) +
      2.533333333333333*Sqr(g1)*(TYu*(TYd).adjoint()*Yd*Yu.adjoint()) + 18.*Sqr
      (g2)*(TYu*(TYd).adjoint()*Yd*Yu.adjoint()) + 42.666666666666664*Sqr(g3)*(
      TYu*(TYd).adjoint()*Yd*Yu.adjoint()) + 12.*traceAdjYuYu*(TYu*(TYu)
      .adjoint()*Yu*Yu.adjoint()) - 0.6666666666666666*Sqr(g1)*(TYu*(TYu)
      .adjoint()*Yu*Yu.adjoint()) + 18.*Sqr(g2)*(TYu*(TYu).adjoint()*Yu*
      Yu.adjoint()) + 42.666666666666664*Sqr(g3)*(TYu*(TYu).adjoint()*Yu*
      Yu.adjoint()) + 12.*traceAdjYdYd*(mu2*Yu*Yd.adjoint()*Yd*Yu.adjoint()) +
      4.*traceAdjYeYe*(mu2*Yu*Yd.adjoint()*Yd*Yu.adjoint()) - 6.*traceAdjYuYu*(
      mu2*Yu*Yd.adjoint()*Yd*Yu.adjoint()) + 1.2666666666666666*Sqr(g1)*(mu2*Yu
      *Yd.adjoint()*Yd*Yu.adjoint()) + 9.*Sqr(g2)*(mu2*Yu*Yd.adjoint()*Yd*
      Yu.adjoint()) + 21.333333333333332*Sqr(g3)*(mu2*Yu*Yd.adjoint()*Yd*
      Yu.adjoint()) + 6.*traceAdjYuYu*(mu2*Yu*Yu.adjoint()*Yu*Yu.adjoint()) -
      0.3333333333333333*Sqr(g1)*(mu2*Yu*Yu.adjoint()*Yu*Yu.adjoint()) + 9.*Sqr
      (g2)*(mu2*Yu*Yu.adjoint()*Yu*Yu.adjoint()) + 21.333333333333332*Sqr(g3)*(
      mu2*Yu*Yu.adjoint()*Yu*Yu.adjoint()) + 24.*traceAdjYdYd*(Yu*mq2*
      Yd.adjoint()*Yd*Yu.adjoint()) + 8.*traceAdjYeYe*(Yu*mq2*Yd.adjoint()*Yd*
      Yu.adjoint()) - 12.*traceAdjYuYu*(Yu*mq2*Yd.adjoint()*Yd*Yu.adjoint()) +
      2.533333333333333*Sqr(g1)*(Yu*mq2*Yd.adjoint()*Yd*Yu.adjoint()) + 18.*Sqr
      (g2)*(Yu*mq2*Yd.adjoint()*Yd*Yu.adjoint()) + 42.666666666666664*Sqr(g3)*(
      Yu*mq2*Yd.adjoint()*Yd*Yu.adjoint()) + 12.*traceAdjYuYu*(Yu*mq2*
      Yu.adjoint()*Yu*Yu.adjoint()) - 0.6666666666666666*Sqr(g1)*(Yu*mq2*
      Yu.adjoint()*Yu*Yu.adjoint()) + 18.*Sqr(g2)*(Yu*mq2*Yu.adjoint()*Yu*
      Yu.adjoint()) + 42.666666666666664*Sqr(g3)*(Yu*mq2*Yu.adjoint()*Yu*
      Yu.adjoint()) + 24.*traceAdjYdYd*(Yu*Yd.adjoint()*md2*Yd*Yu.adjoint()) +
      8.*traceAdjYeYe*(Yu*Yd.adjoint()*md2*Yd*Yu.adjoint()) - 12.*traceAdjYuYu*
      (Yu*Yd.adjoint()*md2*Yd*Yu.adjoint()) + 2.533333333333333*Sqr(g1)*(Yu*
      Yd.adjoint()*md2*Yd*Yu.adjoint()) + 18.*Sqr(g2)*(Yu*Yd.adjoint()*md2*Yd*
      Yu.adjoint()) + 42.666666666666664*Sqr(g3)*(Yu*Yd.adjoint()*md2*Yd*
      Yu.adjoint()) + 24.*traceAdjYdYd*(Yu*Yd.adjoint()*Yd*mq2*Yu.adjoint()) +
      8.*traceAdjYeYe*(Yu*Yd.adjoint()*Yd*mq2*Yu.adjoint()) - 12.*traceAdjYuYu*
      (Yu*Yd.adjoint()*Yd*mq2*Yu.adjoint()) + 2.533333333333333*Sqr(g1)*(Yu*
      Yd.adjoint()*Yd*mq2*Yu.adjoint()) + 18.*Sqr(g2)*(Yu*Yd.adjoint()*Yd*mq2*
      Yu.adjoint()) + 42.666666666666664*Sqr(g3)*(Yu*Yd.adjoint()*Yd*mq2*
      Yu.adjoint()) + 7.199999999999999*mHd2*Sqr(g1)*(Yu*Yd.adjoint()*Yd*
      Yu.adjoint()*1.2020569031595942) + 7.199999999999999*mHu2*Sqr(g1)*(Yu*
      Yd.adjoint()*Yd*Yu.adjoint()*1.2020569031595942) - 36.*mHd2*Sqr(g2)*(Yu*
      Yd.adjoint()*Yd*Yu.adjoint()*1.2020569031595942) - 36.*mHu2*Sqr(g2)*(Yu*
      Yd.adjoint()*Yd*Yu.adjoint()*1.2020569031595942) + 14.399999999999999*Sqr
      (g1)*Sqr(MassB)*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*1.2020569031595942) -
      72.*Sqr(g2)*Sqr(MassWB)*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*
      1.2020569031595942) + 12.*traceAdjYdYd*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*
      mu2) + 4.*traceAdjYeYe*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*mu2) - 6.*
      traceAdjYuYu*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*mu2) + 1.2666666666666666*
      Sqr(g1)*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*mu2) + 9.*Sqr(g2)*(Yu*Yd.adjoint
      ()*Yd*Yu.adjoint()*mu2) + 21.333333333333332*Sqr(g3)*(Yu*Yd.adjoint()*Yd*
      Yu.adjoint()*mu2) - 7.199999999999999*MassB*Sqr(g1)*(Yu*Yd.adjoint()*Yd*(
      TYu).adjoint()*1.2020569031595942) + 36.*MassWB*Sqr(g2)*(Yu*Yd.adjoint()*
      Yd*(TYu).adjoint()*1.2020569031595942) - 7.199999999999999*MassB*Sqr(g1)*
      (Yu*Yd.adjoint()*TYd*Yu.adjoint()*1.2020569031595942) + 36.*MassWB*Sqr(g2
      )*(Yu*Yd.adjoint()*TYd*Yu.adjoint()*1.2020569031595942) +
      7.199999999999999*Sqr(g1)*(Yu*Yd.adjoint()*TYd*(TYu).adjoint()*
      1.2020569031595942) - 36.*Sqr(g2)*(Yu*Yd.adjoint()*TYd*(TYu).adjoint()*
      1.2020569031595942) + 12.*traceAdjYuYu*(Yu*Yu.adjoint()*mu2*Yu*Yu.adjoint
      ()) - 0.6666666666666666*Sqr(g1)*(Yu*Yu.adjoint()*mu2*Yu*Yu.adjoint()) +
      18.*Sqr(g2)*(Yu*Yu.adjoint()*mu2*Yu*Yu.adjoint()) + 42.666666666666664*
      Sqr(g3)*(Yu*Yu.adjoint()*mu2*Yu*Yu.adjoint()) + 12.*traceAdjYuYu*(Yu*
      Yu.adjoint()*Yu*mq2*Yu.adjoint()) - 0.6666666666666666*Sqr(g1)*(Yu*
      Yu.adjoint()*Yu*mq2*Yu.adjoint()) + 18.*Sqr(g2)*(Yu*Yu.adjoint()*Yu*mq2*
      Yu.adjoint()) + 42.666666666666664*Sqr(g3)*(Yu*Yu.adjoint()*Yu*mq2*
      Yu.adjoint()))*UNITMATRIX(3)).real();
   const Eigen::Matrix<double,3,3> beta_mu2_6 = (threeLoop*((Sqr(g1)*(24.
      *mHu2 + 24.*Sqr(MassB)) + Sqr(g2)*(-72.*mHu2 - 72.*Sqr(MassWB)))*(Yu*
      Yu.adjoint()*Yu*Yu.adjoint()*1.2020569031595942) + (6.*traceAdjYuYu -
      0.3333333333333333*Sqr(g1) + 9.*Sqr(g2) + 21.333333333333332*Sqr(g3))*(Yu
      *Yu.adjoint()*Yu*Yu.adjoint()*mu2) - 12.*MassB*Sqr(g1)*(Yu*Yu.adjoint()*
      Yu*(TYu).adjoint()*1.2020569031595942) + 36.*MassWB*Sqr(g2)*(Yu*
      Yu.adjoint()*Yu*(TYu).adjoint()*1.2020569031595942) - 12.*MassB*Sqr(g1)*(
      Yu*Yu.adjoint()*TYu*Yu.adjoint()*1.2020569031595942) + 36.*MassWB*Sqr(g2)
      *(Yu*Yu.adjoint()*TYu*Yu.adjoint()*1.2020569031595942) + 12.*Sqr(g1)*(Yu*
      Yu.adjoint()*TYu*(TYu).adjoint()*1.2020569031595942) - 36.*Sqr(g2)*(Yu*
      Yu.adjoint()*TYu*(TYu).adjoint()*1.2020569031595942) - 7.199999999999999*
      MassB*Sqr(g1)*(Yu*(TYd).adjoint()*Yd*Yu.adjoint()*1.2020569031595942) +
      36.*MassWB*Sqr(g2)*(Yu*(TYd).adjoint()*Yd*Yu.adjoint()*1.2020569031595942
      ) + 7.199999999999999*Sqr(g1)*(Yu*(TYd).adjoint()*TYd*Yu.adjoint()*
      1.2020569031595942) - 36.*Sqr(g2)*(Yu*(TYd).adjoint()*TYd*Yu.adjoint()*
      1.2020569031595942) - 12.*MassB*Sqr(g1)*(Yu*(TYu).adjoint()*Yu*Yu.adjoint
      ()*1.2020569031595942) + 36.*MassWB*Sqr(g2)*(Yu*(TYu).adjoint()*Yu*
      Yu.adjoint()*1.2020569031595942) + 12.*Sqr(g1)*(Yu*(TYu).adjoint()*TYu*
      Yu.adjoint()*1.2020569031595942) - 36.*Sqr(g2)*(Yu*(TYu).adjoint()*TYu*
      Yu.adjoint()*1.2020569031595942) - 7.199999999999999*MassB*Sqr(g1)*(TYu*
      Yd.adjoint()*Yd*Yu.adjoint()*1.2020569031595942) + 36.*MassWB*Sqr(g2)*(
      TYu*Yd.adjoint()*Yd*Yu.adjoint()*1.2020569031595942) + 7.199999999999999*
      Sqr(g1)*(TYu*Yd.adjoint()*Yd*(TYu).adjoint()*1.2020569031595942) - 36.*
      Sqr(g2)*(TYu*Yd.adjoint()*Yd*(TYu).adjoint()*1.2020569031595942) - 12.*
      MassB*Sqr(g1)*(TYu*Yu.adjoint()*Yu*Yu.adjoint()*1.2020569031595942) + 36.
      *MassWB*Sqr(g2)*(TYu*Yu.adjoint()*Yu*Yu.adjoint()*1.2020569031595942) +
      12.*Sqr(g1)*(TYu*Yu.adjoint()*Yu*(TYu).adjoint()*1.2020569031595942) -
      36.*Sqr(g2)*(TYu*Yu.adjoint()*Yu*(TYu).adjoint()*1.2020569031595942) +
      7.199999999999999*Sqr(g1)*(TYu*(TYd).adjoint()*Yd*Yu.adjoint()*
      1.2020569031595942) - 36.*Sqr(g2)*(TYu*(TYd).adjoint()*Yd*Yu.adjoint()*
      1.2020569031595942) + 12.*Sqr(g1)*(TYu*(TYu).adjoint()*Yu*Yu.adjoint()*
      1.2020569031595942) - 36.*Sqr(g2)*(TYu*(TYu).adjoint()*Yu*Yu.adjoint()*
      1.2020569031595942) + 3.5999999999999996*Sqr(g1)*(mu2*Yu*Yd.adjoint()*Yd*
      Yu.adjoint()*1.2020569031595942) - 18.*Sqr(g2)*(mu2*Yu*Yd.adjoint()*Yd*
      Yu.adjoint()*1.2020569031595942) + 6.*Sqr(g1)*(mu2*Yu*Yu.adjoint()*Yu*
      Yu.adjoint()*1.2020569031595942) - 18.*Sqr(g2)*(mu2*Yu*Yu.adjoint()*Yu*
      Yu.adjoint()*1.2020569031595942) + 7.199999999999999*Sqr(g1)*(Yu*mq2*
      Yd.adjoint()*Yd*Yu.adjoint()*1.2020569031595942) - 36.*Sqr(g2)*(Yu*mq2*
      Yd.adjoint()*Yd*Yu.adjoint()*1.2020569031595942) + 12.*Sqr(g1)*(Yu*mq2*
      Yu.adjoint()*Yu*Yu.adjoint()*1.2020569031595942) - 36.*Sqr(g2)*(Yu*mq2*
      Yu.adjoint()*Yu*Yu.adjoint()*1.2020569031595942) + 7.199999999999999*Sqr(
      g1)*(Yu*Yd.adjoint()*md2*Yd*Yu.adjoint()*1.2020569031595942) - 36.*Sqr(g2
      )*(Yu*Yd.adjoint()*md2*Yd*Yu.adjoint()*1.2020569031595942) +
      7.199999999999999*Sqr(g1)*(Yu*Yd.adjoint()*Yd*mq2*Yu.adjoint()*
      1.2020569031595942) - 36.*Sqr(g2)*(Yu*Yd.adjoint()*Yd*mq2*Yu.adjoint()*
      1.2020569031595942) + 24.*mHd2*(Yu*Yd.adjoint()*Yd*Yd.adjoint()*Yd*
      Yu.adjoint()) + 12.*mHu2*(Yu*Yd.adjoint()*Yd*Yd.adjoint()*Yd*Yu.adjoint()
      ) + 12.*(Yu*Yd.adjoint()*Yd*Yd.adjoint()*TYd*(TYu).adjoint()) +
      3.5999999999999996*Sqr(g1)*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*mu2*
      1.2020569031595942) - 18.*Sqr(g2)*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*mu2*
      1.2020569031595942) - 4.*mHd2*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*Yu*
      Yu.adjoint()) - 8.*mHu2*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*Yu*Yu.adjoint())
      - 4.*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*TYu*(TYu).adjoint()) + 12.*(Yu*
      Yd.adjoint()*Yd*(TYd).adjoint()*TYd*Yu.adjoint()) - 4.*(Yu*Yd.adjoint()*
      Yd*(TYu).adjoint()*TYu*Yu.adjoint()) + 12.*(Yu*Yd.adjoint()*TYd*
      Yd.adjoint()*Yd*(TYu).adjoint()) - 4.*(Yu*Yd.adjoint()*TYd*Yu.adjoint()*
      Yu*(TYu).adjoint()) + 12.*(Yu*Yd.adjoint()*TYd*(TYd).adjoint()*Yd*
      Yu.adjoint()) - 4.*(Yu*Yd.adjoint()*TYd*(TYu).adjoint()*Yu*Yu.adjoint())
      + 12.*Sqr(g1)*(Yu*Yu.adjoint()*mu2*Yu*Yu.adjoint()*1.2020569031595942) -
      36.*Sqr(g2)*(Yu*Yu.adjoint()*mu2*Yu*Yu.adjoint()*1.2020569031595942) +
      12.*Sqr(g1)*(Yu*Yu.adjoint()*Yu*mq2*Yu.adjoint()*1.2020569031595942) -
      36.*Sqr(g2)*(Yu*Yu.adjoint()*Yu*mq2*Yu.adjoint()*1.2020569031595942) - 4.
      *mHd2*(Yu*Yu.adjoint()*Yu*Yd.adjoint()*Yd*Yu.adjoint()) - 8.*mHu2*(Yu*
      Yu.adjoint()*Yu*Yd.adjoint()*Yd*Yu.adjoint()) - 4.*(Yu*Yu.adjoint()*Yu*
      Yd.adjoint()*TYd*(TYu).adjoint()) + 6.*Sqr(g1)*(Yu*Yu.adjoint()*Yu*
      Yu.adjoint()*mu2*1.2020569031595942) - 18.*Sqr(g2)*(Yu*Yu.adjoint()*Yu*
      Yu.adjoint()*mu2*1.2020569031595942) + 36.*mHu2*(Yu*Yu.adjoint()*Yu*
      Yu.adjoint()*Yu*Yu.adjoint()) + 12.*(Yu*Yu.adjoint()*Yu*Yu.adjoint()*TYu*
      (TYu).adjoint()) - 4.*(Yu*Yu.adjoint()*Yu*(TYd).adjoint()*TYd*Yu.adjoint(
      )) + 12.*(Yu*Yu.adjoint()*Yu*(TYu).adjoint()*TYu*Yu.adjoint()) - 4.*(Yu*
      Yu.adjoint()*TYu*Yd.adjoint()*Yd*(TYu).adjoint()) + 12.*(Yu*Yu.adjoint()*
      TYu*Yu.adjoint()*Yu*(TYu).adjoint()) - 4.*(Yu*Yu.adjoint()*TYu*(TYd)
      .adjoint()*Yd*Yu.adjoint()) + 12.*(Yu*Yu.adjoint()*TYu*(TYu).adjoint()*Yu
      *Yu.adjoint()) + 12.*(Yu*(TYd).adjoint()*Yd*Yd.adjoint()*TYd*Yu.adjoint()
      ) - 4.*(Yu*(TYd).adjoint()*Yd*Yu.adjoint()*TYu*Yu.adjoint()) + 12.*(Yu*(
      TYd).adjoint()*TYd*Yd.adjoint()*Yd*Yu.adjoint()) - 4.*(Yu*(TYd).adjoint()
      *TYd*Yu.adjoint()*Yu*Yu.adjoint()) - 4.*(Yu*(TYu).adjoint()*Yu*Yd.adjoint
      ()*TYd*Yu.adjoint()) + 12.*(Yu*(TYu).adjoint()*Yu*Yu.adjoint()*TYu*
      Yu.adjoint()) - 4.*(Yu*(TYu).adjoint()*TYu*Yd.adjoint()*Yd*Yu.adjoint())
      + 12.*(Yu*(TYu).adjoint()*TYu*Yu.adjoint()*Yu*Yu.adjoint()) + 12.*(TYu*
      Yd.adjoint()*Yd*Yd.adjoint()*Yd*(TYu).adjoint()) - 4.*(TYu*Yd.adjoint()*
      Yd*Yu.adjoint()*Yu*(TYu).adjoint()) + 12.*(TYu*Yd.adjoint()*Yd*(TYd)
      .adjoint()*Yd*Yu.adjoint()) - 4.*(TYu*Yd.adjoint()*Yd*(TYu).adjoint()*Yu*
      Yu.adjoint()) - 4.*(TYu*Yu.adjoint()*Yu*Yd.adjoint()*Yd*(TYu).adjoint())
      + 12.*(TYu*Yu.adjoint()*Yu*Yu.adjoint()*Yu*(TYu).adjoint()) - 4.*(TYu*
      Yu.adjoint()*Yu*(TYd).adjoint()*Yd*Yu.adjoint()) + 12.*(TYu*Yu.adjoint()*
      Yu*(TYu).adjoint()*Yu*Yu.adjoint()) + 12.*(TYu*(TYd).adjoint()*Yd*
      Yd.adjoint()*Yd*Yu.adjoint()) - 4.*(TYu*(TYd).adjoint()*Yd*Yu.adjoint()*
      Yu*Yu.adjoint()) - 4.*(TYu*(TYu).adjoint()*Yu*Yd.adjoint()*Yd*Yu.adjoint(
      )) + 12.*(TYu*(TYu).adjoint()*Yu*Yu.adjoint()*Yu*Yu.adjoint()) + 6.*(mu2*
      Yu*Yd.adjoint()*Yd*Yd.adjoint()*Yd*Yu.adjoint()) - 2.*(mu2*Yu*Yd.adjoint(
      )*Yd*Yu.adjoint()*Yu*Yu.adjoint()) - 2.*(mu2*Yu*Yu.adjoint()*Yu*
      Yd.adjoint()*Yd*Yu.adjoint()))*UNITMATRIX(3)).real();
   const Eigen::Matrix<double,3,3> beta_mu2_7 = (threeLoop*(6.*(mu2*Yu*
      Yu.adjoint()*Yu*Yu.adjoint()*Yu*Yu.adjoint()) + 12.*(Yu*mq2*Yd.adjoint()*
      Yd*Yd.adjoint()*Yd*Yu.adjoint()) - 4.*(Yu*mq2*Yd.adjoint()*Yd*Yu.adjoint(
      )*Yu*Yu.adjoint()) - 4.*(Yu*mq2*Yu.adjoint()*Yu*Yd.adjoint()*Yd*
      Yu.adjoint()) + 12.*(Yu*mq2*Yu.adjoint()*Yu*Yu.adjoint()*Yu*Yu.adjoint())
      + 12.*(Yu*Yd.adjoint()*md2*Yd*Yd.adjoint()*Yd*Yu.adjoint()) - 4.*(Yu*
      Yd.adjoint()*md2*Yd*Yu.adjoint()*Yu*Yu.adjoint()) + 12.*(Yu*Yd.adjoint()*
      Yd*mq2*Yd.adjoint()*Yd*Yu.adjoint()) - 4.*(Yu*Yd.adjoint()*Yd*mq2*
      Yu.adjoint()*Yu*Yu.adjoint()) + 12.*(Yu*Yd.adjoint()*Yd*Yd.adjoint()*md2*
      Yd*Yu.adjoint()) + 12.*(Yu*Yd.adjoint()*Yd*Yd.adjoint()*Yd*mq2*Yu.adjoint
      ()) + 6.*(Yu*Yd.adjoint()*Yd*Yd.adjoint()*Yd*Yu.adjoint()*mu2) - 4.*(Yu*
      Yd.adjoint()*Yd*Yu.adjoint()*mu2*Yu*Yu.adjoint()) - 4.*(Yu*Yd.adjoint()*
      Yd*Yu.adjoint()*Yu*mq2*Yu.adjoint()) - 2.*(Yu*Yd.adjoint()*Yd*Yu.adjoint(
      )*Yu*Yu.adjoint()*mu2) - 4.*(Yu*Yu.adjoint()*mu2*Yu*Yd.adjoint()*Yd*
      Yu.adjoint()) + 12.*(Yu*Yu.adjoint()*mu2*Yu*Yu.adjoint()*Yu*Yu.adjoint())
      - 4.*(Yu*Yu.adjoint()*Yu*mq2*Yd.adjoint()*Yd*Yu.adjoint()) + 12.*(Yu*
      Yu.adjoint()*Yu*mq2*Yu.adjoint()*Yu*Yu.adjoint()) - 4.*(Yu*Yu.adjoint()*
      Yu*Yd.adjoint()*md2*Yd*Yu.adjoint()) - 4.*(Yu*Yu.adjoint()*Yu*Yd.adjoint(
      )*Yd*mq2*Yu.adjoint()) - 2.*(Yu*Yu.adjoint()*Yu*Yd.adjoint()*Yd*
      Yu.adjoint()*mu2) + 12.*(Yu*Yu.adjoint()*Yu*Yu.adjoint()*mu2*Yu*
      Yu.adjoint()) + 12.*(Yu*Yu.adjoint()*Yu*Yu.adjoint()*Yu*mq2*Yu.adjoint())
      + 72.*mHu2*(Yu*Yu.adjoint()*Yu*Yu.adjoint()*Yu*Yu.adjoint()*
      1.2020569031595942) + 6.*(Yu*Yu.adjoint()*Yu*Yu.adjoint()*Yu*Yu.adjoint()
      *mu2) + 24.*(Yu*Yu.adjoint()*Yu*Yu.adjoint()*TYu*(TYu).adjoint()*
      1.2020569031595942) + 24.*(Yu*Yu.adjoint()*Yu*(TYu).adjoint()*TYu*
      Yu.adjoint()*1.2020569031595942) + 24.*(Yu*Yu.adjoint()*TYu*Yu.adjoint()*
      Yu*(TYu).adjoint()*1.2020569031595942) + 24.*(Yu*Yu.adjoint()*TYu*(TYu)
      .adjoint()*Yu*Yu.adjoint()*1.2020569031595942) + 24.*(Yu*(TYu).adjoint()*
      Yu*Yu.adjoint()*TYu*Yu.adjoint()*1.2020569031595942) + 24.*(Yu*(TYu)
      .adjoint()*TYu*Yu.adjoint()*Yu*Yu.adjoint()*1.2020569031595942) + 24.*(
      TYu*Yu.adjoint()*Yu*Yu.adjoint()*Yu*(TYu).adjoint()*1.2020569031595942) +
      24.*(TYu*Yu.adjoint()*Yu*(TYu).adjoint()*Yu*Yu.adjoint()*
      1.2020569031595942) + 24.*(TYu*(TYu).adjoint()*Yu*Yu.adjoint()*Yu*
      Yu.adjoint()*1.2020569031595942) + 12.*(mu2*Yu*Yu.adjoint()*Yu*Yu.adjoint
      ()*Yu*Yu.adjoint()*1.2020569031595942) + 24.*(Yu*mq2*Yu.adjoint()*Yu*
      Yu.adjoint()*Yu*Yu.adjoint()*1.2020569031595942) + 24.*(Yu*Yu.adjoint()*
      mu2*Yu*Yu.adjoint()*Yu*Yu.adjoint()*1.2020569031595942) + 24.*(Yu*
      Yu.adjoint()*Yu*mq2*Yu.adjoint()*Yu*Yu.adjoint()*1.2020569031595942) +
      24.*(Yu*Yu.adjoint()*Yu*Yu.adjoint()*mu2*Yu*Yu.adjoint()*
      1.2020569031595942) + 24.*(Yu*Yu.adjoint()*Yu*Yu.adjoint()*Yu*mq2*
      Yu.adjoint()*1.2020569031595942) + 12.*(Yu*Yu.adjoint()*Yu*Yu.adjoint()*
      Yu*Yu.adjoint()*mu2*1.2020569031595942))*UNITMATRIX(3)).real();

   beta_mu2 = beta_mu2_1 + beta_mu2_2 + beta_mu2_3 + beta_mu2_4 +
      beta_mu2_5 + beta_mu2_6 + beta_mu2_7;


   return beta_mu2;
}

} // namespace flexiblesusy
