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

// File generated at Sat 27 Aug 2016 12:46:03

#include "MSSMNoFVatMGUT_two_scale_soft_parameters.hpp"
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
 * Calculates the one-loop beta function of TYe.
 *
 * @return one-loop beta function
 */
Eigen::Matrix<double,3,3> MSSMNoFVatMGUT_soft_parameters::calc_beta_TYe_one_loop(const Soft_traces& soft_traces) const
{
   const double traceAdjYdTYd = TRACE_STRUCT.traceAdjYdTYd;
   const double traceAdjYeTYe = TRACE_STRUCT.traceAdjYeTYe;
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;


   Eigen::Matrix<double,3,3> beta_TYe;

   beta_TYe = (oneOver16PiSqr*(Ye*(6*traceAdjYdTYd + 2*traceAdjYeTYe +
      3.6*MassB*Sqr(g1) + 6*MassWB*Sqr(g2)) + 3*traceYdAdjYd*TYe + traceYeAdjYe
      *TYe - 1.8*Sqr(g1)*TYe - 3*Sqr(g2)*TYe + 4*(Ye*Ye.adjoint()*TYe) + 5*(TYe
      *Ye.adjoint()*Ye))).real();


   return beta_TYe;
}

/**
 * Calculates the two-loop beta function of TYe.
 *
 * @return two-loop beta function
 */
Eigen::Matrix<double,3,3> MSSMNoFVatMGUT_soft_parameters::calc_beta_TYe_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceAdjYdTYd = TRACE_STRUCT.traceAdjYdTYd;
   const double traceAdjYeTYe = TRACE_STRUCT.traceAdjYeTYe;
   const double traceYdAdjYdTYdAdjYd = TRACE_STRUCT.traceYdAdjYdTYdAdjYd;
   const double traceYdAdjYuTYuAdjYd = TRACE_STRUCT.traceYdAdjYuTYuAdjYd;
   const double traceYeAdjYeTYeAdjYe = TRACE_STRUCT.traceYeAdjYeTYeAdjYe;
   const double traceYuAdjYdTYdAdjYu = TRACE_STRUCT.traceYuAdjYdTYdAdjYu;
   const double traceYdAdjYdYdAdjYd = TRACE_STRUCT.traceYdAdjYdYdAdjYd;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYeAdjYeYeAdjYe = TRACE_STRUCT.traceYeAdjYeYeAdjYe;


   Eigen::Matrix<double,3,3> beta_TYe;

   beta_TYe = (twoLoop*(-0.4*Ye*(135*Power(g1,4)*MassB + 75*Power(g2,4)*
      MassWB + 90*traceYdAdjYdTYdAdjYd + 15*traceYdAdjYuTYuAdjYd + 30*
      traceYeAdjYeTYeAdjYe + 15*traceYuAdjYdTYdAdjYu + 2*traceAdjYdTYd*Sqr(g1)
      - 6*traceAdjYeTYe*Sqr(g1) + 6*MassB*traceYeAdjYe*Sqr(g1) + 9*MassB*Sqr(g1
      )*Sqr(g2) + 9*MassWB*Sqr(g1)*Sqr(g2) - 80*traceAdjYdTYd*Sqr(g3) +
      traceYdAdjYd*(-2*MassB*Sqr(g1) + 80*MassG*Sqr(g3))) + 13.5*Power(g1,4)*
      TYe + 7.5*Power(g2,4)*TYe - 9*traceYdAdjYdYdAdjYd*TYe - 3*
      traceYdAdjYuYuAdjYd*TYe - 3*traceYeAdjYeYeAdjYe*TYe - 0.4*traceYdAdjYd*
      Sqr(g1)*TYe + 1.2*traceYeAdjYe*Sqr(g1)*TYe + 1.8*Sqr(g1)*Sqr(g2)*TYe + 16
      *traceYdAdjYd*Sqr(g3)*TYe - 6*(3*traceAdjYdTYd + traceAdjYeTYe + 2*MassWB
      *Sqr(g2))*(Ye*Ye.adjoint()*Ye) - 12*traceYdAdjYd*(Ye*Ye.adjoint()*TYe) -
      4*traceYeAdjYe*(Ye*Ye.adjoint()*TYe) + 1.2*Sqr(g1)*(Ye*Ye.adjoint()*TYe)
      + 6*Sqr(g2)*(Ye*Ye.adjoint()*TYe) - 15*traceYdAdjYd*(TYe*Ye.adjoint()*Ye)
      - 5*traceYeAdjYe*(TYe*Ye.adjoint()*Ye) - 1.2*Sqr(g1)*(TYe*Ye.adjoint()*
      Ye) + 12*Sqr(g2)*(TYe*Ye.adjoint()*Ye) - 6*(Ye*Ye.adjoint()*Ye*Ye.adjoint
      ()*TYe) - 8*(Ye*Ye.adjoint()*TYe*Ye.adjoint()*Ye) - 6*(TYe*Ye.adjoint()*
      Ye*Ye.adjoint()*Ye))).real();


   return beta_TYe;
}

/**
 * Calculates the three-loop beta function of TYe.
 *
 * @return three-loop beta function
 */
Eigen::Matrix<double,3,3> MSSMNoFVatMGUT_soft_parameters::calc_beta_TYe_three_loop(const Soft_traces& soft_traces) const
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
   const double traceAdjYuTYuAdjYdYd = TRACE_STRUCT.traceAdjYuTYuAdjYdYd;
   const double traceTYdAdjYuYuAdjYd = TRACE_STRUCT.traceTYdAdjYuYuAdjYd;
   const double traceAdjYdYdAdjYdYdAdjYdYd =
      TRACE_STRUCT.traceAdjYdYdAdjYdYdAdjYdYd;
   const double traceAdjYdYdAdjYdTYdAdjYdYd =
      TRACE_STRUCT.traceAdjYdYdAdjYdTYdAdjYdYd;
   const double traceAdjYeYeAdjYeYeAdjYeYe =
      TRACE_STRUCT.traceAdjYeYeAdjYeYeAdjYeYe;
   const double traceAdjYeYeAdjYeTYeAdjYeYe =
      TRACE_STRUCT.traceAdjYeYeAdjYeTYeAdjYeYe;
   const double traceAdjYuYuAdjYuYuAdjYdYd =
      TRACE_STRUCT.traceAdjYuYuAdjYuYuAdjYdYd;
   const double traceAdjYuYuAdjYuTYuAdjYdYd =
      TRACE_STRUCT.traceAdjYuYuAdjYuTYuAdjYdYd;
   const double traceAdjYuTYuAdjYuYuAdjYdYd =
      TRACE_STRUCT.traceAdjYuTYuAdjYuYuAdjYdYd;
   const double traceTYdAdjYuYuAdjYuYuAdjYd =
      TRACE_STRUCT.traceTYdAdjYuYuAdjYuYuAdjYd;


   Eigen::Matrix<double,3,3> beta_TYe;

   const Eigen::Matrix<double,3,3> beta_TYe_1 = (-0.0013333333333333333*
      threeLoop*(Ye*(449874*Power(g1,6)*MassB + 50*Sqr(g1)*(135*Power(g2,4)*(
      MassB + 2*MassWB) - 180*traceAdjYdTYdAdjYdYd + 90*MassB*
      traceAdjYdYdAdjYdYd - 540*traceAdjYeTYeAdjYeYe + 270*MassB*
      traceAdjYeYeAdjYeYe + 72*traceAdjYuTYuAdjYdYd - 72*MassB*
      traceAdjYuYuAdjYdYd + 72*traceTYdAdjYuYuAdjYd - 9*(MassWB*traceAdjYdYd +
      27*MassWB*traceAdjYeYe + MassB*(traceAdjYdYd + 27*traceAdjYeYe) -
      traceTYdAdjYd - 27*traceTYeAdjYe)*Sqr(g2) - 568*MassB*traceAdjYdYd*Sqr(g3
      ) - 568*MassG*traceAdjYdYd*Sqr(g3) + 568*traceTYdAdjYd*Sqr(g3)) + 5*Power
      (g1,4)*(5022*(2*MassB + MassWB)*Sqr(g2) + 5*(-2*MassB*(1505*traceAdjYdYd
      + 2619*traceAdjYeYe + 1404*traceAdjYuYu) + 1505*traceTYdAdjYd + 2619*
      traceTYeAdjYe + 1404*traceTYuAdjYu + 4752*(2*MassB + MassG)*Sqr(g3))) +
      125*(6210*Power(g2,6)*MassWB + 45*Power(g2,4)*(-2*MassWB*(21*traceAdjYdYd
      + 7*traceAdjYeYe + 12*traceAdjYuYu) + 21*traceTYdAdjYd + 7*traceTYeAdjYe
      + 12*traceTYuAdjYu + 48*(MassG + 2*MassWB)*Sqr(g3)) - 36*Sqr(g2)*(6*
      traceAdjYdTYdAdjYdYd - 3*MassWB*traceAdjYdYdAdjYdYd + 2*
      traceAdjYeTYeAdjYeYe - MassWB*traceAdjYeYeAdjYeYe + 6*
      traceAdjYuTYuAdjYdYd - 6*MassWB*traceAdjYuYuAdjYdYd + 6*
      traceTYdAdjYuYuAdjYd + 44*(MassG*traceAdjYdYd + MassWB*traceAdjYdYd -
      traceTYdAdjYd)*Sqr(g3)) - 4*(160*Power(g3,4)*(2*MassG*traceAdjYdYd -
      traceTYdAdjYd) + 9*(3*traceAdjYdYdAdjYdTYdAdjYdYd + 12*traceAdjYdYd*
      traceAdjYeTYeAdjYeYe + 4*traceAdjYeTYeAdjYeYe*traceAdjYeYe + 12*
      traceAdjYdTYdAdjYdYd*(3*traceAdjYdYd + traceAdjYeYe) +
      traceAdjYeYeAdjYeTYeAdjYeYe + 3*traceAdjYuTYuAdjYuYuAdjYdYd + 6*
      traceAdjYuTYuAdjYdYd*traceAdjYuYu + 3*traceAdjYuYuAdjYuTYuAdjYdYd + 18*
      traceAdjYdYdAdjYdYd*traceTYdAdjYd + 6*traceAdjYeYeAdjYeYe*traceTYdAdjYd +
      6*traceAdjYuYu*traceTYdAdjYuYuAdjYd + 3*traceTYdAdjYuYuAdjYuYuAdjYd + 6*
      traceAdjYdYdAdjYdYd*traceTYeAdjYe + 2*traceAdjYeYeAdjYeYe*traceTYeAdjYe +
      6*traceAdjYuYuAdjYdYd*traceTYuAdjYu) + 72*(6*traceAdjYdTYdAdjYdYd +
      traceAdjYuTYuAdjYdYd - MassG*(3*traceAdjYdYdAdjYdYd + traceAdjYuYuAdjYdYd
      ) + traceTYdAdjYuYuAdjYd)*Sqr(g3)))) - 12*(16119*Power(g1,6)*MassB + 5*
      Power(g1,4)*(MassB*(77*traceAdjYdYd - 81*traceAdjYeYe) + 729*(2*MassB +
      MassWB)*Sqr(g2) + 2376*(2*MassB + MassG)*Sqr(g3)) + 25*Sqr(g1)*(81*Power(
      g2,4)*(MassB + 2*MassWB) + 45*(MassB + MassWB)*traceAdjYdYd*Sqr(g2) - 2*(
      -54*traceAdjYdTYdAdjYdYd + 27*(MassB*traceAdjYdYdAdjYdYd + 2*
      traceAdjYeTYeAdjYeYe) + 56*(MassB + MassG)*traceAdjYdYd*Sqr(g3))) - 125*(
      945*Power(g2,6)*MassWB - 27*Power(g2,4)*(7*MassWB*traceAdjYdYd + 8*(MassG
      + 2*MassWB)*Sqr(g3)) - 18*Sqr(g2)*(6*traceAdjYdTYdAdjYdYd - 3*MassWB*
      traceAdjYdYdAdjYdYd + 2*traceAdjYeTYeAdjYeYe - 8*(MassG + MassWB)*
      traceAdjYdYd*Sqr(g3)) - 2*(16*Power(g3,4)*MassG*traceAdjYdYd + 27*
      traceAdjYdYdAdjYdTYdAdjYdYd - 72*(2*traceAdjYdTYdAdjYdYd - MassG*
      traceAdjYdYdAdjYdYd)*Sqr(g3))))*(Ye*1.2020569031595942))*UNITMATRIX(3))
      .real();
   const Eigen::Matrix<double,3,3> beta_TYe_2 = (-0.002*threeLoop*(20*(
      Power(g1,4)*(77*traceTYdAdjYd - 81*traceTYeAdjYe) - 25*(63*Power(g2,4)*(2
      *MassWB*traceAdjYeYe - 3*traceTYdAdjYd - traceTYeAdjYe) - 36*Sqr(g2)*(
      MassWB*traceAdjYeYeAdjYeYe - 8*traceTYdAdjYd*Sqr(g3)) + 4*(9*
      traceAdjYeYeAdjYeTYeAdjYeYe - 8*Sqr(g3)*(3*traceAdjYuTYuAdjYdYd - 3*MassG
      *traceAdjYuYuAdjYdYd + 3*traceTYdAdjYuYuAdjYd + traceTYdAdjYd*Sqr(g3))))
      + 10*Sqr(g1)*(9*(9*MassB*traceAdjYeYe + 9*MassWB*traceAdjYeYe + 5*
      traceTYdAdjYd - 9*traceTYeAdjYe)*Sqr(g2) - 2*(3*MassB*(9*
      traceAdjYeYeAdjYeYe - 7*traceAdjYuYuAdjYdYd) + 7*(3*traceAdjYuTYuAdjYdYd
      + 3*traceTYdAdjYuYuAdjYd + 8*traceTYdAdjYd*Sqr(g3)))))*(Ye*
      1.2020569031595942) + 2*(10746*Power(g1,6) + 5*Power(g1,4)*(77*
      traceAdjYdYd - 81*traceAdjYeYe + 1458*Sqr(g2) + 4752*Sqr(g3)) + 50*Sqr(g1
      )*(81*Power(g2,4) + 9*(5*traceAdjYdYd - 9*traceAdjYeYe)*Sqr(g2) - 2*(27*
      traceAdjYdYdAdjYdYd - 27*traceAdjYeYeAdjYeYe + 21*traceAdjYuYuAdjYdYd +
      56*traceAdjYdYd*Sqr(g3))) - 125*(630*Power(g2,6) - 9*Power(g2,4)*(7*(3*
      traceAdjYdYd + traceAdjYeYe) + 48*Sqr(g3)) + 36*Sqr(g2)*(3*
      traceAdjYdYdAdjYdYd + traceAdjYeYeAdjYeYe + 8*traceAdjYdYd*Sqr(g3)) - 4*(
      8*Power(g3,4)*traceAdjYdYd - 3*(3*traceAdjYdYdAdjYdYdAdjYdYd +
      traceAdjYeYeAdjYeYeAdjYeYe) + 24*(3*traceAdjYdYdAdjYdYd +
      traceAdjYuYuAdjYdYd)*Sqr(g3))))*(TYe*1.2020569031595942) - 5*(12*(1917*
      Power(g1,4)*MassB + 5*Sqr(g1)*(-98*MassB*traceAdjYdYd - 6*MassB*
      traceAdjYeYe + 98*traceTYdAdjYd + 6*traceTYeAdjYe + 117*(MassB + MassWB)*
      Sqr(g2)) + 25*(73*Power(g2,4)*MassWB - 10*(MassWB*(3*traceAdjYdYd +
      traceAdjYeYe) - 3*traceTYdAdjYd - traceTYeAdjYe)*Sqr(g2) + 4*(18*
      traceAdjYdTYdAdjYdYd + 6*traceAdjYeTYeAdjYeYe + 3*traceAdjYuTYuAdjYdYd -
      9*traceAdjYdYd*traceTYdAdjYd - 3*traceAdjYeYe*traceTYdAdjYd + 3*
      traceTYdAdjYuYuAdjYd - 3*traceAdjYdYd*traceTYeAdjYe - traceAdjYeYe*
      traceTYeAdjYe + 16*(MassG*traceAdjYdYd - traceTYdAdjYd)*Sqr(g3))))*(Ye*
      Ye.adjoint()*Ye) - 4*(2124*Power(g1,4) + 5*Sqr(g1)*(-187*traceAdjYdYd - 9
      *traceAdjYeYe + 216*Sqr(g2)) + 25*(66*Power(g2,4) - 21*(3*traceAdjYdYd +
      traceAdjYeYe)*Sqr(g2) + 4*(-18*traceAdjYdYdAdjYdYd + 6*traceAdjYdYd*
      traceAdjYeYe - 6*traceAdjYeYeAdjYeYe - 6*traceAdjYuYuAdjYdYd + 32*
      traceAdjYdYd*Sqr(g3) + 9*Sqr(traceAdjYdYd) + Sqr(traceAdjYeYe))))*(Ye*
      Ye.adjoint()*TYe) - 8757*Power(g1,4)*(TYe*Ye.adjoint()*Ye) - 9825*Power(
      g2,4)*(TYe*Ye.adjoint()*Ye) + 9000*traceAdjYdYdAdjYdYd*(TYe*Ye.adjoint()*
      Ye) - 3000*traceAdjYdYd*traceAdjYeYe*(TYe*Ye.adjoint()*Ye) + 3000*
      traceAdjYeYeAdjYeYe*(TYe*Ye.adjoint()*Ye) + 3000*traceAdjYuYuAdjYdYd*(TYe
      *Ye.adjoint()*Ye) + 5080*traceAdjYdYd*Sqr(g1)*(TYe*Ye.adjoint()*Ye) + 360
      *traceAdjYeYe*Sqr(g1)*(TYe*Ye.adjoint()*Ye) + 7200*traceAdjYdYd*Sqr(g2)*(
      TYe*Ye.adjoint()*Ye) + 2400*traceAdjYeYe*Sqr(g2)*(TYe*Ye.adjoint()*Ye) -
      6210*Sqr(g1)*Sqr(g2)*(TYe*Ye.adjoint()*Ye) - 16000*traceAdjYdYd*Sqr(g3)*(
      TYe*Ye.adjoint()*Ye) - 4500*Sqr(traceAdjYdYd)*(TYe*Ye.adjoint()*Ye) - 500
      *Sqr(traceAdjYeYe)*(TYe*Ye.adjoint()*Ye) + 5832*Power(g1,4)*MassB*(Ye*
      Ye.adjoint()*Ye*1.2020569031595942) + 16200*Power(g2,4)*MassWB*(Ye*
      Ye.adjoint()*Ye*1.2020569031595942) + 720*MassB*traceAdjYdYd*Sqr(g1)*(Ye*
      Ye.adjoint()*Ye*1.2020569031595942) - 9720*MassB*Sqr(g1)*Sqr(g2)*(Ye*
      Ye.adjoint()*Ye*1.2020569031595942) - 9720*MassWB*Sqr(g1)*Sqr(g2)*(Ye*
      Ye.adjoint()*Ye*1.2020569031595942)))*UNITMATRIX(3)).real();
   const Eigen::Matrix<double,3,3> beta_TYe_3 = (threeLoop*(99.972*Power(
      g1,6)*TYe + 172.5*Power(g2,6)*TYe - 25.083333333333332*Power(g1,4)*
      traceAdjYdYd*TYe - 78.75*Power(g2,4)*traceAdjYdYd*TYe -
      53.333333333333336*Power(g3,4)*traceAdjYdYd*TYe + 54*traceAdjYdYd*
      traceAdjYdYdAdjYdYd*TYe + 3*traceAdjYdYdAdjYdYdAdjYdYd*TYe - 43.65*Power(
      g1,4)*traceAdjYeYe*TYe - 26.25*Power(g2,4)*traceAdjYeYe*TYe + 18*
      traceAdjYdYdAdjYdYd*traceAdjYeYe*TYe + 18*traceAdjYdYd*
      traceAdjYeYeAdjYeYe*TYe + 6*traceAdjYeYe*traceAdjYeYeAdjYeYe*TYe +
      traceAdjYeYeAdjYeYeAdjYeYe*TYe - 23.4*Power(g1,4)*traceAdjYuYu*TYe - 45*
      Power(g2,4)*traceAdjYuYu*TYe + 18*traceAdjYuYu*traceAdjYuYuAdjYdYd*TYe +
      9*traceAdjYuYuAdjYuYuAdjYdYd*TYe + 4.5*Power(g2,4)*Sqr(g1)*TYe + 3*
      traceAdjYdYdAdjYdYd*Sqr(g1)*TYe + 9*traceAdjYeYeAdjYeYe*Sqr(g1)*TYe - 2.4
      *traceAdjYuYuAdjYdYd*Sqr(g1)*TYe + 16.74*Power(g1,4)*Sqr(g2)*TYe + 9*
      traceAdjYdYdAdjYdYd*Sqr(g2)*TYe + 3*traceAdjYeYeAdjYeYe*Sqr(g2)*TYe + 18*
      traceAdjYuYuAdjYdYd*Sqr(g2)*TYe - 0.3*traceAdjYdYd*Sqr(g1)*Sqr(g2)*TYe -
      8.1*traceAdjYeYe*Sqr(g1)*Sqr(g2)*TYe + 79.2*Power(g1,4)*Sqr(g3)*TYe + 180
      *Power(g2,4)*Sqr(g3)*TYe + 72*traceAdjYdYdAdjYdYd*Sqr(g3)*TYe + 24*
      traceAdjYuYuAdjYdYd*Sqr(g3)*TYe - 18.933333333333334*traceAdjYdYd*Sqr(g1)
      *Sqr(g3)*TYe - 132*traceAdjYdYd*Sqr(g2)*Sqr(g3)*TYe - 7.2*((3*MassB*
      traceAdjYeYe + traceTYdAdjYd - 3*traceTYeAdjYe)*Sqr(g1) - 5*(3*MassWB*
      traceAdjYdYd + MassWB*traceAdjYeYe - 3*traceTYdAdjYd - traceTYeAdjYe)*Sqr
      (g2) + 40*(MassG*traceAdjYdYd - traceTYdAdjYd)*Sqr(g3))*(Ye*Ye.adjoint()*
      Ye*1.2020569031595942) - 0.24*(54*Power(g1,4) - 5*Sqr(g1)*(-13*
      traceAdjYdYd + 9*traceAdjYeYe + 54*Sqr(g2)) + 25*(12*Power(g2,4) + 3*(3*
      traceAdjYdYd + traceAdjYeYe)*Sqr(g2) - 32*traceAdjYdYd*Sqr(g3)))*(Ye*
      Ye.adjoint()*TYe*1.2020569031595942) - 30.78*Power(g1,4)*(TYe*Ye.adjoint(
      )*Ye*1.2020569031595942) - 49.5*Power(g2,4)*(TYe*Ye.adjoint()*Ye*
      1.2020569031595942) + 4.8*traceAdjYdYd*Sqr(g1)*(TYe*Ye.adjoint()*Ye*
      1.2020569031595942) + 21.6*traceAdjYeYe*Sqr(g1)*(TYe*Ye.adjoint()*Ye*
      1.2020569031595942) - 108*traceAdjYdYd*Sqr(g2)*(TYe*Ye.adjoint()*Ye*
      1.2020569031595942) - 36*traceAdjYeYe*Sqr(g2)*(TYe*Ye.adjoint()*Ye*
      1.2020569031595942) + 81*Sqr(g1)*Sqr(g2)*(TYe*Ye.adjoint()*Ye*
      1.2020569031595942) + 240*traceAdjYdYd*Sqr(g3)*(TYe*Ye.adjoint()*Ye*
      1.2020569031595942) + 24*traceTYdAdjYd*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*
      Ye) + 8*traceTYeAdjYe*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*Ye) - 21.6*MassB*
      Sqr(g1)*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*Ye) - 12*MassWB*Sqr(g2)*(Ye*
      Ye.adjoint()*Ye*Ye.adjoint()*Ye) + 18*traceAdjYdYd*(Ye*Ye.adjoint()*Ye*
      Ye.adjoint()*TYe) + 6*traceAdjYeYe*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*TYe)
      + 19.8*Sqr(g1)*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*TYe) + 3*Sqr(g2)*(Ye*
      Ye.adjoint()*Ye*Ye.adjoint()*TYe) + 24*traceAdjYdYd*(Ye*Ye.adjoint()*TYe*
      Ye.adjoint()*Ye) + 8*traceAdjYeYe*(Ye*Ye.adjoint()*TYe*Ye.adjoint()*Ye) +
      21.6*Sqr(g1)*(Ye*Ye.adjoint()*TYe*Ye.adjoint()*Ye) + 12*Sqr(g2)*(Ye*
      Ye.adjoint()*TYe*Ye.adjoint()*Ye) + 18*traceAdjYdYd*(TYe*Ye.adjoint()*Ye*
      Ye.adjoint()*Ye) + 6*traceAdjYeYe*(TYe*Ye.adjoint()*Ye*Ye.adjoint()*Ye) +
      12.6*Sqr(g1)*(TYe*Ye.adjoint()*Ye*Ye.adjoint()*Ye) + 15*Sqr(g2)*(TYe*
      Ye.adjoint()*Ye*Ye.adjoint()*Ye) - 10.8*Sqr(g1)*(Ye*Ye.adjoint()*Ye*
      Ye.adjoint()*TYe*1.2020569031595942) + 18*Sqr(g2)*(Ye*Ye.adjoint()*Ye*
      Ye.adjoint()*TYe*1.2020569031595942) + 10.8*Sqr(g1)*(TYe*Ye.adjoint()*Ye*
      Ye.adjoint()*Ye*1.2020569031595942) - 18*Sqr(g2)*(TYe*Ye.adjoint()*Ye*
      Ye.adjoint()*Ye*1.2020569031595942) + 6*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*
      Ye*Ye.adjoint()*TYe) + 12*(Ye*Ye.adjoint()*Ye*Ye.adjoint()*TYe*Ye.adjoint
      ()*Ye) + 12*(Ye*Ye.adjoint()*TYe*Ye.adjoint()*Ye*Ye.adjoint()*Ye) + 12*(
      TYe*Ye.adjoint()*Ye*Ye.adjoint()*Ye*Ye.adjoint()*Ye) + 24*(Ye*Ye.adjoint(
      )*Ye*Ye.adjoint()*Ye*Ye.adjoint()*TYe*1.2020569031595942) + 36*(Ye*
      Ye.adjoint()*Ye*Ye.adjoint()*TYe*Ye.adjoint()*Ye*1.2020569031595942) + 36
      *(Ye*Ye.adjoint()*TYe*Ye.adjoint()*Ye*Ye.adjoint()*Ye*1.2020569031595942)
      + 30*(TYe*Ye.adjoint()*Ye*Ye.adjoint()*Ye*Ye.adjoint()*Ye*
      1.2020569031595942))*UNITMATRIX(3)).real();

   beta_TYe = beta_TYe_1 + beta_TYe_2 + beta_TYe_3;


   return beta_TYe;
}

} // namespace flexiblesusy
