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

// File generated at Sat 27 Aug 2016 12:50:00

#include "MSSM_two_scale_soft_parameters.hpp"
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
 * Calculates the one-loop beta function of TYu.
 *
 * @return one-loop beta function
 */
Eigen::Matrix<double,3,3> MSSM_soft_parameters::calc_beta_TYu_one_loop(const Soft_traces& soft_traces) const
{
   const double traceAdjYuTYu = TRACE_STRUCT.traceAdjYuTYu;
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;


   Eigen::Matrix<double,3,3> beta_TYu;

   beta_TYu = (oneOver16PiSqr*(Yu*(6*traceAdjYuTYu + 1.7333333333333334*
      MassB*Sqr(g1) + 6*MassWB*Sqr(g2) + 10.666666666666666*MassG*Sqr(g3)) + 3*
      traceYuAdjYu*TYu - 0.8666666666666667*Sqr(g1)*TYu - 3*Sqr(g2)*TYu -
      5.333333333333333*Sqr(g3)*TYu + 2*(Yu*Yd.adjoint()*TYd) + 4*(Yu*
      Yu.adjoint()*TYu) + TYu*Yd.adjoint()*Yd + 5*(TYu*Yu.adjoint()*Yu))).real(
      );


   return beta_TYu;
}

/**
 * Calculates the two-loop beta function of TYu.
 *
 * @return two-loop beta function
 */
Eigen::Matrix<double,3,3> MSSM_soft_parameters::calc_beta_TYu_two_loop(const Soft_traces& soft_traces) const
{
   const double traceYuAdjYu = TRACE_STRUCT.traceYuAdjYu;
   const double traceAdjYuTYu = TRACE_STRUCT.traceAdjYuTYu;
   const double traceYdAdjYuTYuAdjYd = TRACE_STRUCT.traceYdAdjYuTYuAdjYd;
   const double traceYuAdjYdTYdAdjYu = TRACE_STRUCT.traceYuAdjYdTYdAdjYu;
   const double traceYuAdjYuTYuAdjYu = TRACE_STRUCT.traceYuAdjYuTYuAdjYu;
   const double traceAdjYdTYd = TRACE_STRUCT.traceAdjYdTYd;
   const double traceAdjYeTYe = TRACE_STRUCT.traceAdjYeTYe;
   const double traceYdAdjYd = TRACE_STRUCT.traceYdAdjYd;
   const double traceYeAdjYe = TRACE_STRUCT.traceYeAdjYe;
   const double traceYdAdjYuYuAdjYd = TRACE_STRUCT.traceYdAdjYuYuAdjYd;
   const double traceYuAdjYuYuAdjYu = TRACE_STRUCT.traceYuAdjYuYuAdjYu;


   Eigen::Matrix<double,3,3> beta_TYu;

   beta_TYu = (twoLoop*(-0.008888888888888889*Yu*(2743*Power(g1,4)*MassB
      - 800*Power(g3,4)*MassG + 3375*Power(g2,4)*MassWB + 675*
      traceYdAdjYuTYuAdjYd + 675*traceYuAdjYdTYdAdjYu + 4050*
      traceYuAdjYuTYuAdjYu + 225*MassB*Sqr(g1)*Sqr(g2) + 225*MassWB*Sqr(g1)*Sqr
      (g2) + 680*MassB*Sqr(g1)*Sqr(g3) + 680*MassG*Sqr(g1)*Sqr(g3) + 1800*MassG
      *Sqr(g2)*Sqr(g3) + 1800*MassWB*Sqr(g2)*Sqr(g3) - 180*traceAdjYuTYu*(Sqr(
      g1) + 20*Sqr(g3)) + 180*traceYuAdjYu*(MassB*Sqr(g1) + 20*MassG*Sqr(g3)))
      + 6.095555555555555*Power(g1,4)*TYu + 7.5*Power(g2,4)*TYu -
      1.7777777777777777*Power(g3,4)*TYu - 3*traceYdAdjYuYuAdjYd*TYu - 9*
      traceYuAdjYuYuAdjYu*TYu + 0.8*traceYuAdjYu*Sqr(g1)*TYu + Sqr(g1)*Sqr(g2)*
      TYu + 16*traceYuAdjYu*Sqr(g3)*TYu + 3.022222222222222*Sqr(g1)*Sqr(g3)*TYu
      + 8*Sqr(g2)*Sqr(g3)*TYu - 0.4*(15*traceAdjYdTYd + 5*traceAdjYeTYe + 2*
      MassB*Sqr(g1))*(Yu*Yd.adjoint()*Yd) - 6*traceYdAdjYd*(Yu*Yd.adjoint()*TYd
      ) - 2*traceYeAdjYe*(Yu*Yd.adjoint()*TYd) + 0.8*Sqr(g1)*(Yu*Yd.adjoint()*
      TYd) - 18*traceAdjYuTYu*(Yu*Yu.adjoint()*Yu) - 0.8*MassB*Sqr(g1)*(Yu*
      Yu.adjoint()*Yu) - 12*MassWB*Sqr(g2)*(Yu*Yu.adjoint()*Yu) - 12*
      traceYuAdjYu*(Yu*Yu.adjoint()*TYu) + 1.2*Sqr(g1)*(Yu*Yu.adjoint()*TYu) +
      6*Sqr(g2)*(Yu*Yu.adjoint()*TYu) - 3*traceYdAdjYd*(TYu*Yd.adjoint()*Yd) -
      traceYeAdjYe*(TYu*Yd.adjoint()*Yd) + 0.4*Sqr(g1)*(TYu*Yd.adjoint()*Yd) -
      15*traceYuAdjYu*(TYu*Yu.adjoint()*Yu) + 12*Sqr(g2)*(TYu*Yu.adjoint()*Yu)
      - 4*(Yu*Yd.adjoint()*Yd*Yd.adjoint()*TYd) - 2*(Yu*Yd.adjoint()*Yd*
      Yu.adjoint()*TYu) - 4*(Yu*Yd.adjoint()*TYd*Yd.adjoint()*Yd) - 4*(Yu*
      Yd.adjoint()*TYd*Yu.adjoint()*Yu) - 6*(Yu*Yu.adjoint()*Yu*Yu.adjoint()*
      TYu) - 8*(Yu*Yu.adjoint()*TYu*Yu.adjoint()*Yu) - 2*(TYu*Yd.adjoint()*Yd*
      Yd.adjoint()*Yd) - 4*(TYu*Yd.adjoint()*Yd*Yu.adjoint()*Yu) - 6*(TYu*
      Yu.adjoint()*Yu*Yu.adjoint()*Yu))).real();


   return beta_TYu;
}

/**
 * Calculates the three-loop beta function of TYu.
 *
 * @return three-loop beta function
 */
Eigen::Matrix<double,3,3> MSSM_soft_parameters::calc_beta_TYu_three_loop(const Soft_traces& soft_traces) const
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
   const double traceAdjYdYdAdjYuYuAdjYdYd =
      TRACE_STRUCT.traceAdjYdYdAdjYuYuAdjYdYd;
   const double traceAdjYdYdAdjYuTYuAdjYdYd =
      TRACE_STRUCT.traceAdjYdYdAdjYuTYuAdjYdYd;
   const double traceAdjYdTYdAdjYuYuAdjYdYd =
      TRACE_STRUCT.traceAdjYdTYdAdjYuYuAdjYdYd;
   const double traceAdjYuYuAdjYdTYdAdjYdYd =
      TRACE_STRUCT.traceAdjYuYuAdjYdTYdAdjYdYd;
   const double traceAdjYuYuAdjYuYuAdjYuYu =
      TRACE_STRUCT.traceAdjYuYuAdjYuYuAdjYuYu;
   const double traceAdjYuYuAdjYuTYuAdjYuYu =
      TRACE_STRUCT.traceAdjYuYuAdjYuTYuAdjYuYu;


   Eigen::Matrix<double,3,3> beta_TYu;

   const Eigen::Matrix<double,3,3> beta_TYu_1 = (-0.00044444444444444447*
      threeLoop*(Yu*(704194*Power(g1,6)*MassB + 5*Power(g1,4)*(-15*(728*MassB*
      traceAdjYdYd + 936*MassB*traceAdjYeYe + 5130*MassB*traceAdjYuYu - 364*
      traceTYdAdjYd - 468*traceTYeAdjYe - 2565*traceTYuAdjYu) + 6822*(2*MassB +
      MassWB)*Sqr(g2) + 21232*(2*MassB + MassG)*Sqr(g3)) + 50*Sqr(g1)*(765*
      Power(g2,4)*(MassB + 2*MassWB) - 9*Sqr(g2)*(57*(MassB*traceAdjYuYu +
      MassWB*traceAdjYuYu - traceTYuAdjYu) + 16*(MassB + MassG + MassWB)*Sqr(g3
      )) + 2*(436*Power(g3,4)*(MassB + 2*MassG) + 27*(-2*traceAdjYuTYuAdjYdYd -
      38*traceAdjYuTYuAdjYuYu + 2*MassB*traceAdjYuYuAdjYdYd + 19*MassB*
      traceAdjYuYuAdjYuYu - 2*traceTYdAdjYuYuAdjYd) - 1860*(MassB*traceAdjYuYu
      + MassG*traceAdjYuYu - traceTYuAdjYu)*Sqr(g3))) + 125*(18630*Power(g2,6)*
      MassWB + 45*Power(g2,4)*(3*(-2*MassWB*(12*traceAdjYdYd + 4*traceAdjYeYe +
      21*traceAdjYuYu) + 12*traceTYdAdjYd + 4*traceTYeAdjYe + 21*traceTYuAdjYu
      ) + 112*(MassG + 2*MassWB)*Sqr(g3)) + 4*(5440*Power(g3,6)*MassG - 480*
      Power(g3,4)*(2*MassG*traceAdjYdYd + 4*MassG*traceAdjYuYu - traceTYdAdjYd
      - 2*traceTYuAdjYu) - 27*(3*traceAdjYdTYdAdjYuYuAdjYdYd + 3*
      traceAdjYdYdAdjYuTYuAdjYdYd + 6*traceAdjYdYd*traceAdjYuTYuAdjYdYd + 2*
      traceAdjYeYe*traceAdjYuTYuAdjYdYd + 36*traceAdjYuTYuAdjYuYu*traceAdjYuYu
      + 3*traceAdjYuYuAdjYdTYdAdjYdYd + 3*traceAdjYuYuAdjYuTYuAdjYuYu + 6*
      traceAdjYuYuAdjYdYd*traceTYdAdjYd + 6*traceAdjYdYd*traceTYdAdjYuYuAdjYd +
      2*traceAdjYeYe*traceTYdAdjYuYuAdjYd + 2*traceAdjYuYuAdjYdYd*
      traceTYeAdjYe + 18*traceAdjYuYuAdjYuYu*traceTYuAdjYu) - 216*(
      traceAdjYuTYuAdjYdYd + 6*traceAdjYuTYuAdjYuYu - MassG*traceAdjYuYuAdjYdYd
      - 3*MassG*traceAdjYuYuAdjYuYu + traceTYdAdjYuYuAdjYd)*Sqr(g3)) + 36*Sqr(
      g2)*(68*Power(g3,4)*(2*MassG + MassWB) + 9*(-2*traceAdjYuTYuAdjYdYd - 2*
      traceAdjYuTYuAdjYuYu + 2*MassWB*traceAdjYuYuAdjYdYd + MassWB*
      traceAdjYuYuAdjYuYu - 2*traceTYdAdjYuYuAdjYd) - 132*(MassG*traceAdjYuYu +
      MassWB*traceAdjYuYu - traceTYuAdjYu)*Sqr(g3)))) - 36*(7761*Power(g1,6)*
      MassB + 65*Power(g1,4)*(5*MassB*traceAdjYuYu + 27*(2*MassB + MassWB)*Sqr(
      g2) + 88*(2*MassB + MassG)*Sqr(g3)) + 25*Sqr(g1)*(176*Power(g3,4)*(MassB
      + 2*MassG) + 81*Power(g2,4)*(MassB + 2*MassWB) + 6*(traceAdjYuTYuAdjYdYd
      - 6*traceAdjYuTYuAdjYuYu - MassB*traceAdjYuYuAdjYdYd) - 63*(MassB +
      MassWB)*traceAdjYuYu*Sqr(g2) - 208*(MassB + MassG)*traceAdjYuYu*Sqr(g3))
      - 125*(945*Power(g2,6)*MassWB - 27*Power(g2,4)*(7*MassWB*traceAdjYuYu + 8
      *(MassG + 2*MassWB)*Sqr(g3)) + 16*Sqr(g3)*(120*Power(g3,4)*MassG + 3*(
      traceAdjYuTYuAdjYdYd + 6*traceAdjYuTYuAdjYuYu) - 2*MassG*traceAdjYuYu*Sqr
      (g3)) - 36*Sqr(g2)*(4*Power(g3,4)*(2*MassG + MassWB) + 3*
      traceAdjYuTYuAdjYuYu - 4*(MassG + MassWB)*traceAdjYuYu*Sqr(g3))))*(Yu*
      1.2020569031595942))*UNITMATRIX(3)).real();
   const Eigen::Matrix<double,3,3> beta_TYu_2 = (0.0013333333333333333*
      threeLoop*(-150*(-540*traceAdjYuYuAdjYuTYuAdjYuYu + 13*Power(g1,4)*
      traceTYuAdjYu + 945*Power(g2,4)*traceTYuAdjYu + 160*Power(g3,4)*
      traceTYuAdjYu - 36*MassB*traceAdjYuYuAdjYuYu*Sqr(g1) - 12*
      traceTYdAdjYuYuAdjYd*Sqr(g1) + 540*MassWB*traceAdjYuYuAdjYuYu*Sqr(g2) -
      126*traceTYuAdjYu*Sqr(g1)*Sqr(g2) - 32*(15*MassG*(traceAdjYuYuAdjYdYd + 3
      *traceAdjYuYuAdjYuYu) - 15*traceTYdAdjYuYuAdjYd + 13*traceTYuAdjYu*Sqr(g1
      ) + 45*traceTYuAdjYu*Sqr(g2))*Sqr(g3))*(Yu*1.2020569031595942) - 3*(5174*
      Power(g1,6) + 65*Power(g1,4)*(5*traceAdjYuYu + 54*Sqr(g2) + 176*Sqr(g3))
      + 50*Sqr(g1)*(81*Power(g2,4) + 176*Power(g3,4) - 6*traceAdjYuYuAdjYdYd +
      18*traceAdjYuYuAdjYuYu - 63*traceAdjYuYu*Sqr(g2) - 208*traceAdjYuYu*Sqr(
      g3)) - 125*(630*Power(g2,6) - 27*Power(g2,4)*(7*traceAdjYuYu + 16*Sqr(g3)
      ) - 36*Sqr(g2)*(8*Power(g3,4) - 3*traceAdjYuYuAdjYuYu - 8*traceAdjYuYu*
      Sqr(g3)) + 4*(320*Power(g3,6) - 8*Power(g3,4)*traceAdjYuYu + 9*
      traceAdjYuYuAdjYuYuAdjYuYu - 24*(traceAdjYuYuAdjYdYd + 3*
      traceAdjYuYuAdjYuYu)*Sqr(g3))))*(TYu*1.2020569031595942) + 5*(2*(1899*
      Power(g1,4)*MassB + 5*Sqr(g1)*(123*(MassB + MassWB)*Sqr(g2) + 8*(-6*(2*
      MassB*traceAdjYdYd - MassB*traceAdjYeYe - 2*traceTYdAdjYd + traceTYeAdjYe
      ) + 19*(MassB + MassG)*Sqr(g3))) + 25*(135*Power(g2,4)*MassWB + 12*Sqr(g2
      )*(-9*MassWB*traceAdjYdYd - 3*MassWB*traceAdjYeYe + 9*traceTYdAdjYd + 3*
      traceTYeAdjYe + 2*(MassG + MassWB)*Sqr(g3)) - 4*(8*Power(g3,4)*MassG + 3*
      (-18*traceAdjYdTYdAdjYdYd - 6*traceAdjYeTYeAdjYeYe - 3*
      traceAdjYuTYuAdjYdYd + 9*traceAdjYdYd*traceTYdAdjYd + 3*traceAdjYeYe*
      traceTYdAdjYd - 3*traceTYdAdjYuYuAdjYd + 3*traceAdjYdYd*traceTYeAdjYe +
      traceAdjYeYe*traceTYeAdjYe) - 12*(MassG*traceAdjYdYd - MassG*traceAdjYeYe
      - traceTYdAdjYd + traceTYeAdjYe)*Sqr(g3))))*(Yu*Yd.adjoint()*Yd) - (1899
      *Power(g1,4) + 10*Sqr(g1)*(-96*traceAdjYdYd + 48*traceAdjYeYe + 123*Sqr(
      g2) + 152*Sqr(g3)) + 25*(135*Power(g2,4) + 24*Sqr(g2)*(-3*(3*traceAdjYdYd
      + traceAdjYeYe) + 2*Sqr(g3)) - 4*(8*Power(g3,4) - 24*(traceAdjYdYd -
      traceAdjYeYe)*Sqr(g3) - 3*(-18*traceAdjYdYdAdjYdYd + 6*traceAdjYdYd*
      traceAdjYeYe - 6*traceAdjYeYeAdjYeYe - 6*traceAdjYuYuAdjYdYd + 9*Sqr(
      traceAdjYdYd) + Sqr(traceAdjYeYe)))))*(Yu*Yd.adjoint()*TYd) + 2*(8561*
      Power(g1,4)*MassB + 5*Sqr(g1)*(270*(-(MassB*traceAdjYuYu) + traceTYuAdjYu
      ) + 579*(MassB + MassWB)*Sqr(g2) + 424*(MassB + MassG)*Sqr(g3)) + 75*(219
      *Power(g2,4)*MassWB + 2*Sqr(g2)*(45*(-(MassWB*traceAdjYuYu) +
      traceTYuAdjYu) + 92*(MassG + MassWB)*Sqr(g3)) - 4*(8*Power(g3,4)*MassG -
      9*(traceAdjYuTYuAdjYdYd + 6*traceAdjYuTYuAdjYuYu + traceTYdAdjYuYuAdjYd -
      3*traceAdjYuYu*traceTYuAdjYu) - 12*(MassG*traceAdjYuYu - traceTYuAdjYu)*
      Sqr(g3))))*(Yu*Yu.adjoint()*Yu)))*UNITMATRIX(3)).real();
   const Eigen::Matrix<double,3,3> beta_TYu_3 = (-0.0033333333333333335*
      threeLoop*(4*(3082*Power(g1,4) + 5*Sqr(g1)*(-165*traceAdjYuYu + 378*Sqr(
      g2) + 416*Sqr(g3)) + 25*(198*Power(g2,4) + 9*Sqr(g2)*(-21*traceAdjYuYu +
      32*Sqr(g3)) - 4*(8*Power(g3,4) + 18*traceAdjYuYuAdjYdYd + 54*
      traceAdjYuYuAdjYuYu - 24*traceAdjYuYu*Sqr(g3) - 27*Sqr(traceAdjYuYu))))*(
      Yu*Yu.adjoint()*TYu) + (1899*Power(g1,4) + 10*Sqr(g1)*(-96*traceAdjYdYd +
      48*traceAdjYeYe + 123*Sqr(g2) + 152*Sqr(g3)) + 25*(135*Power(g2,4) + 24*
      Sqr(g2)*(-3*(3*traceAdjYdYd + traceAdjYeYe) + 2*Sqr(g3)) - 4*(8*Power(g3,
      4) - 24*(traceAdjYdYd - traceAdjYeYe)*Sqr(g3) - 3*(-18*
      traceAdjYdYdAdjYdYd + 6*traceAdjYdYd*traceAdjYeYe - 6*traceAdjYeYeAdjYeYe
      - 6*traceAdjYuYuAdjYdYd + 9*Sqr(traceAdjYdYd) + Sqr(traceAdjYeYe)))))*(
      TYu*Yd.adjoint()*Yd) + 13355*Power(g1,4)*(TYu*Yu.adjoint()*Yu) + 29475*
      Power(g2,4)*(TYu*Yu.adjoint()*Yu) - 4000*Power(g3,4)*(TYu*Yu.adjoint()*Yu
      ) - 9000*traceAdjYuYuAdjYdYd*(TYu*Yu.adjoint()*Yu) - 27000*
      traceAdjYuYuAdjYuYu*(TYu*Yu.adjoint()*Yu) - 4800*traceAdjYuYu*Sqr(g1)*(
      TYu*Yu.adjoint()*Yu) - 21600*traceAdjYuYu*Sqr(g2)*(TYu*Yu.adjoint()*Yu) +
      9810*Sqr(g1)*Sqr(g2)*(TYu*Yu.adjoint()*Yu) + 12000*traceAdjYuYu*Sqr(g3)*
      (TYu*Yu.adjoint()*Yu) + 4400*Sqr(g1)*Sqr(g3)*(TYu*Yu.adjoint()*Yu) +
      54000*Sqr(g2)*Sqr(g3)*(TYu*Yu.adjoint()*Yu) + 13500*Sqr(traceAdjYuYu)*(
      TYu*Yu.adjoint()*Yu) + 280*Power(g1,4)*MassB*(Yu*Yd.adjoint()*Yd*
      1.2020569031595942) - 108800*Power(g3,4)*MassG*(Yu*Yd.adjoint()*Yd*
      1.2020569031595942) - 37800*Power(g2,4)*MassWB*(Yu*Yd.adjoint()*Yd*
      1.2020569031595942) - 2880*MassB*traceAdjYdYd*Sqr(g1)*(Yu*Yd.adjoint()*Yd
      *1.2020569031595942) + 1440*MassB*traceAdjYeYe*Sqr(g1)*(Yu*Yd.adjoint()*
      Yd*1.2020569031595942) + 2880*traceTYdAdjYd*Sqr(g1)*(Yu*Yd.adjoint()*Yd*
      1.2020569031595942) - 1440*traceTYeAdjYe*Sqr(g1)*(Yu*Yd.adjoint()*Yd*
      1.2020569031595942) + 1080*MassB*Sqr(g1)*Sqr(g2)*(Yu*Yd.adjoint()*Yd*
      1.2020569031595942) + 1080*MassWB*Sqr(g1)*Sqr(g2)*(Yu*Yd.adjoint()*Yd*
      1.2020569031595942) + 28800*MassG*traceAdjYdYd*Sqr(g3)*(Yu*Yd.adjoint()*
      Yd*1.2020569031595942) - 28800*traceTYdAdjYd*Sqr(g3)*(Yu*Yd.adjoint()*Yd*
      1.2020569031595942) + 5120*MassB*Sqr(g1)*Sqr(g3)*(Yu*Yd.adjoint()*Yd*
      1.2020569031595942) + 5120*MassG*Sqr(g1)*Sqr(g3)*(Yu*Yd.adjoint()*Yd*
      1.2020569031595942) - 140*Power(g1,4)*(Yu*Yd.adjoint()*TYd*
      1.2020569031595942) + 18900*Power(g2,4)*(Yu*Yd.adjoint()*TYd*
      1.2020569031595942) + 54400*Power(g3,4)*(Yu*Yd.adjoint()*TYd*
      1.2020569031595942) + 2880*traceAdjYdYd*Sqr(g1)*(Yu*Yd.adjoint()*TYd*
      1.2020569031595942) - 1440*traceAdjYeYe*Sqr(g1)*(Yu*Yd.adjoint()*TYd*
      1.2020569031595942) - 1080*Sqr(g1)*Sqr(g2)*(Yu*Yd.adjoint()*TYd*
      1.2020569031595942) - 28800*traceAdjYdYd*Sqr(g3)*(Yu*Yd.adjoint()*TYd*
      1.2020569031595942) - 5120*Sqr(g1)*Sqr(g3)*(Yu*Yd.adjoint()*TYd*
      1.2020569031595942) - 2808*Power(g1,4)*MassB*(Yu*Yu.adjoint()*Yu*
      1.2020569031595942) - 326400*Power(g3,4)*MassG*(Yu*Yu.adjoint()*Yu*
      1.2020569031595942) - 48600*Power(g2,4)*MassWB*(Yu*Yu.adjoint()*Yu*
      1.2020569031595942) + 2160*MassB*traceAdjYuYu*Sqr(g1)*(Yu*Yu.adjoint()*Yu
      *1.2020569031595942) - 2160*traceTYuAdjYu*Sqr(g1)*(Yu*Yu.adjoint()*Yu*
      1.2020569031595942) - 32400*MassWB*traceAdjYuYu*Sqr(g2)*(Yu*Yu.adjoint()*
      Yu*1.2020569031595942) + 32400*traceTYuAdjYu*Sqr(g2)*(Yu*Yu.adjoint()*Yu*
      1.2020569031595942) + 14760*MassB*Sqr(g1)*Sqr(g2)*(Yu*Yu.adjoint()*Yu*
      1.2020569031595942) + 14760*MassWB*Sqr(g1)*Sqr(g2)*(Yu*Yu.adjoint()*Yu*
      1.2020569031595942) + 86400*MassG*traceAdjYuYu*Sqr(g3)*(Yu*Yu.adjoint()*
      Yu*1.2020569031595942) - 86400*traceTYuAdjYu*Sqr(g3)*(Yu*Yu.adjoint()*Yu*
      1.2020569031595942) - 3840*MassB*Sqr(g1)*Sqr(g3)*(Yu*Yu.adjoint()*Yu*
      1.2020569031595942) - 3840*MassG*Sqr(g1)*Sqr(g3)*(Yu*Yu.adjoint()*Yu*
      1.2020569031595942) + 57600*MassG*Sqr(g2)*Sqr(g3)*(Yu*Yu.adjoint()*Yu*
      1.2020569031595942) + 57600*MassWB*Sqr(g2)*Sqr(g3)*(Yu*Yu.adjoint()*Yu*
      1.2020569031595942) + 416*Power(g1,4)*(Yu*Yu.adjoint()*TYu*
      1.2020569031595942) + 21600*Power(g2,4)*(Yu*Yu.adjoint()*TYu*
      1.2020569031595942) + 108800*Power(g3,4)*(Yu*Yu.adjoint()*TYu*
      1.2020569031595942) + 360*traceAdjYuYu*Sqr(g1)*(Yu*Yu.adjoint()*TYu*
      1.2020569031595942) + 16200*traceAdjYuYu*Sqr(g2)*(Yu*Yu.adjoint()*TYu*
      1.2020569031595942) - 10080*Sqr(g1)*Sqr(g2)*(Yu*Yu.adjoint()*TYu*
      1.2020569031595942) - 57600*traceAdjYuYu*Sqr(g3)*(Yu*Yu.adjoint()*TYu*
      1.2020569031595942) - 640*Sqr(g1)*Sqr(g3)*(Yu*Yu.adjoint()*TYu*
      1.2020569031595942) - 28800*Sqr(g2)*Sqr(g3)*(Yu*Yu.adjoint()*TYu*
      1.2020569031595942) - 70*Power(g1,4)*(TYu*Yd.adjoint()*Yd*
      1.2020569031595942) + 9450*Power(g2,4)*(TYu*Yd.adjoint()*Yd*
      1.2020569031595942) + 27200*Power(g3,4)*(TYu*Yd.adjoint()*Yd*
      1.2020569031595942) + 1440*traceAdjYdYd*Sqr(g1)*(TYu*Yd.adjoint()*Yd*
      1.2020569031595942) - 720*traceAdjYeYe*Sqr(g1)*(TYu*Yd.adjoint()*Yd*
      1.2020569031595942) - 540*Sqr(g1)*Sqr(g2)*(TYu*Yd.adjoint()*Yd*
      1.2020569031595942) - 14400*traceAdjYdYd*Sqr(g3)*(TYu*Yd.adjoint()*Yd*
      1.2020569031595942) - 2560*Sqr(g1)*Sqr(g3)*(TYu*Yd.adjoint()*Yd*
      1.2020569031595942) + 1690*Power(g1,4)*(TYu*Yu.adjoint()*Yu*
      1.2020569031595942) + 14850*Power(g2,4)*(TYu*Yu.adjoint()*Yu*
      1.2020569031595942) - 12060*Sqr(g1)*Sqr(g2)*(TYu*Yu.adjoint()*Yu*
      1.2020569031595942) + 6400*Sqr(g1)*Sqr(g3)*(TYu*Yu.adjoint()*Yu*
      1.2020569031595942) - 57600*Sqr(g2)*Sqr(g3)*(TYu*Yu.adjoint()*Yu*
      1.2020569031595942))*UNITMATRIX(3)).real();
   const Eigen::Matrix<double,3,3> beta_TYu_4 = (threeLoop*(
      -1.3333333333333333*(340*Power(g3,4) - 9*traceAdjYuYu*(Sqr(g1) - 9*Sqr(g2
      )) - 180*traceAdjYuYu*Sqr(g3))*(TYu*Yu.adjoint()*Yu*1.2020569031595942) +
      (12*traceTYdAdjYd + 4*traceTYeAdjYe - 0.9333333333333333*MassB*Sqr(g1) +
      6*MassWB*Sqr(g2) - 42.666666666666664*MassG*Sqr(g3))*(Yu*Yd.adjoint()*Yd
      *Yd.adjoint()*Yd) + 12*traceAdjYdYd*(Yu*Yd.adjoint()*Yd*Yd.adjoint()*TYd)
      + 4*traceAdjYeYe*(Yu*Yd.adjoint()*Yd*Yd.adjoint()*TYd) +
      0.9333333333333333*Sqr(g1)*(Yu*Yd.adjoint()*Yd*Yd.adjoint()*TYd) - 6*Sqr(
      g2)*(Yu*Yd.adjoint()*Yd*Yd.adjoint()*TYd) + 42.666666666666664*Sqr(g3)*(
      Yu*Yd.adjoint()*Yd*Yd.adjoint()*TYd) + 24*traceTYdAdjYd*(Yu*Yd.adjoint()*
      Yd*Yu.adjoint()*Yu) + 8*traceTYeAdjYe*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*Yu
      ) - 12*traceTYuAdjYu*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*Yu) -
      2.533333333333333*MassB*Sqr(g1)*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*Yu) - 18
      *MassWB*Sqr(g2)*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*Yu) - 42.666666666666664
      *MassG*Sqr(g3)*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*Yu) + 12*traceAdjYdYd*(Yu
      *Yd.adjoint()*Yd*Yu.adjoint()*TYu) + 4*traceAdjYeYe*(Yu*Yd.adjoint()*Yd*
      Yu.adjoint()*TYu) - 6*traceAdjYuYu*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*TYu)
      + 1.2666666666666666*Sqr(g1)*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*TYu) + 9*
      Sqr(g2)*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*TYu) + 21.333333333333332*Sqr(g3
      )*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*TYu) + 12*traceAdjYdYd*(Yu*Yd.adjoint(
      )*TYd*Yd.adjoint()*Yd) + 4*traceAdjYeYe*(Yu*Yd.adjoint()*TYd*Yd.adjoint()
      *Yd) + 0.9333333333333333*Sqr(g1)*(Yu*Yd.adjoint()*TYd*Yd.adjoint()*Yd) -
      6*Sqr(g2)*(Yu*Yd.adjoint()*TYd*Yd.adjoint()*Yd) + 42.666666666666664*Sqr
      (g3)*(Yu*Yd.adjoint()*TYd*Yd.adjoint()*Yd) + 24*traceAdjYdYd*(Yu*
      Yd.adjoint()*TYd*Yu.adjoint()*Yu) + 8*traceAdjYeYe*(Yu*Yd.adjoint()*TYd*
      Yu.adjoint()*Yu) - 12*traceAdjYuYu*(Yu*Yd.adjoint()*TYd*Yu.adjoint()*Yu)
      + 2.533333333333333*Sqr(g1)*(Yu*Yd.adjoint()*TYd*Yu.adjoint()*Yu) + 18*
      Sqr(g2)*(Yu*Yd.adjoint()*TYd*Yu.adjoint()*Yu) + 42.666666666666664*Sqr(g3
      )*(Yu*Yd.adjoint()*TYd*Yu.adjoint()*Yu) + 24*traceTYuAdjYu*(Yu*Yu.adjoint
      ()*Yu*Yu.adjoint()*Yu) - 6.666666666666667*MassB*Sqr(g1)*(Yu*Yu.adjoint()
      *Yu*Yu.adjoint()*Yu) - 12*MassWB*Sqr(g2)*(Yu*Yu.adjoint()*Yu*Yu.adjoint()
      *Yu) - 85.33333333333333*MassG*Sqr(g3)*(Yu*Yu.adjoint()*Yu*Yu.adjoint()*
      Yu) + 18*traceAdjYuYu*(Yu*Yu.adjoint()*Yu*Yu.adjoint()*TYu) + 7*Sqr(g1)*(
      Yu*Yu.adjoint()*Yu*Yu.adjoint()*TYu) + 3*Sqr(g2)*(Yu*Yu.adjoint()*Yu*
      Yu.adjoint()*TYu) + 64*Sqr(g3)*(Yu*Yu.adjoint()*Yu*Yu.adjoint()*TYu) + 24
      *traceAdjYuYu*(Yu*Yu.adjoint()*TYu*Yu.adjoint()*Yu) + 6.666666666666667*
      Sqr(g1)*(Yu*Yu.adjoint()*TYu*Yu.adjoint()*Yu) + 12*Sqr(g2)*(Yu*Yu.adjoint
      ()*TYu*Yu.adjoint()*Yu) + 85.33333333333333*Sqr(g3)*(Yu*Yu.adjoint()*TYu*
      Yu.adjoint()*Yu) + 6*traceAdjYdYd*(TYu*Yd.adjoint()*Yd*Yd.adjoint()*Yd) +
      2*traceAdjYeYe*(TYu*Yd.adjoint()*Yd*Yd.adjoint()*Yd) +
      0.4666666666666667*Sqr(g1)*(TYu*Yd.adjoint()*Yd*Yd.adjoint()*Yd) - 3*Sqr(
      g2)*(TYu*Yd.adjoint()*Yd*Yd.adjoint()*Yd) + 21.333333333333332*Sqr(g3)*(
      TYu*Yd.adjoint()*Yd*Yd.adjoint()*Yd) + 24*traceAdjYdYd*(TYu*Yd.adjoint()*
      Yd*Yu.adjoint()*Yu) + 8*traceAdjYeYe*(TYu*Yd.adjoint()*Yd*Yu.adjoint()*Yu
      ) - 12*traceAdjYuYu*(TYu*Yd.adjoint()*Yd*Yu.adjoint()*Yu) +
      2.533333333333333*Sqr(g1)*(TYu*Yd.adjoint()*Yd*Yu.adjoint()*Yu) + 18*Sqr(
      g2)*(TYu*Yd.adjoint()*Yd*Yu.adjoint()*Yu) + 42.666666666666664*Sqr(g3)*(
      TYu*Yd.adjoint()*Yd*Yu.adjoint()*Yu) + 18*traceAdjYuYu*(TYu*Yu.adjoint()*
      Yu*Yu.adjoint()*Yu) + 3*Sqr(g1)*(TYu*Yu.adjoint()*Yu*Yu.adjoint()*Yu) +
      15*Sqr(g2)*(TYu*Yu.adjoint()*Yu*Yu.adjoint()*Yu) + 64*Sqr(g3)*(TYu*
      Yu.adjoint()*Yu*Yu.adjoint()*Yu) + 2.4*MassB*Sqr(g1)*(Yu*Yd.adjoint()*Yd*
      Yd.adjoint()*Yd*1.2020569031595942) - 36*MassWB*Sqr(g2)*(Yu*Yd.adjoint()*
      Yd*Yd.adjoint()*Yd*1.2020569031595942) - 2.4*Sqr(g1)*(Yu*Yd.adjoint()*Yd*
      Yd.adjoint()*TYd*1.2020569031595942) + 36*Sqr(g2)*(Yu*Yd.adjoint()*Yd*
      Yd.adjoint()*TYd*1.2020569031595942) - 7.2*MassB*Sqr(g1)*(Yu*Yd.adjoint()
      *Yd*Yu.adjoint()*Yu*1.2020569031595942) + 36*MassWB*Sqr(g2)*(Yu*
      Yd.adjoint()*Yd*Yu.adjoint()*Yu*1.2020569031595942) + 3.6*Sqr(g1)*(Yu*
      Yd.adjoint()*Yd*Yu.adjoint()*TYu*1.2020569031595942) - 18*Sqr(g2)*(Yu*
      Yd.adjoint()*Yd*Yu.adjoint()*TYu*1.2020569031595942) - 2.4*Sqr(g1)*(Yu*
      Yd.adjoint()*TYd*Yd.adjoint()*Yd*1.2020569031595942) + 36*Sqr(g2)*(Yu*
      Yd.adjoint()*TYd*Yd.adjoint()*Yd*1.2020569031595942) + 7.2*Sqr(g1)*(Yu*
      Yd.adjoint()*TYd*Yu.adjoint()*Yu*1.2020569031595942) - 36*Sqr(g2)*(Yu*
      Yd.adjoint()*TYd*Yu.adjoint()*Yu*1.2020569031595942) - 6*Sqr(g1)*(Yu*
      Yu.adjoint()*Yu*Yu.adjoint()*TYu*1.2020569031595942) + 18*Sqr(g2)*(Yu*
      Yu.adjoint()*Yu*Yu.adjoint()*TYu*1.2020569031595942) - 1.2*Sqr(g1)*(TYu*
      Yd.adjoint()*Yd*Yd.adjoint()*Yd*1.2020569031595942) + 18*Sqr(g2)*(TYu*
      Yd.adjoint()*Yd*Yd.adjoint()*Yd*1.2020569031595942) + 7.2*Sqr(g1)*(TYu*
      Yd.adjoint()*Yd*Yu.adjoint()*Yu*1.2020569031595942) - 36*Sqr(g2)*(TYu*
      Yd.adjoint()*Yd*Yu.adjoint()*Yu*1.2020569031595942) + 6*Sqr(g1)*(TYu*
      Yu.adjoint()*Yu*Yu.adjoint()*Yu*1.2020569031595942) - 18*Sqr(g2)*(TYu*
      Yu.adjoint()*Yu*Yu.adjoint()*Yu*1.2020569031595942) + 6*(Yu*Yd.adjoint()*
      Yd*Yd.adjoint()*Yd*Yu.adjoint()*TYu) + 12*(Yu*Yd.adjoint()*Yd*Yd.adjoint(
      )*TYd*Yu.adjoint()*Yu) + 8*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*Yu*Yd.adjoint
      ()*TYd) - 2*(Yu*Yd.adjoint()*Yd*Yu.adjoint()*Yu*Yu.adjoint()*TYu) + 8*(Yu
      *Yd.adjoint()*Yd*Yu.adjoint()*TYu*Yd.adjoint()*Yd) - 4*(Yu*Yd.adjoint()*
      Yd*Yu.adjoint()*TYu*Yu.adjoint()*Yu) + 12*(Yu*Yd.adjoint()*TYd*Yd.adjoint
      ()*Yd*Yu.adjoint()*Yu) + 8*(Yu*Yd.adjoint()*TYd*Yu.adjoint()*Yu*
      Yd.adjoint()*Yd) - 4*(Yu*Yd.adjoint()*TYd*Yu.adjoint()*Yu*Yu.adjoint()*Yu
      ) + 6*(Yu*Yu.adjoint()*Yu*Yd.adjoint()*Yd*Yu.adjoint()*TYu) + 4*(Yu*
      Yu.adjoint()*Yu*Yd.adjoint()*TYd*Yu.adjoint()*Yu) + 6*(Yu*Yu.adjoint()*Yu
      *Yu.adjoint()*Yu*Yu.adjoint()*TYu) + 12*(Yu*Yu.adjoint()*Yu*Yu.adjoint()*
      TYu*Yu.adjoint()*Yu) + 4*(Yu*Yu.adjoint()*TYu*Yd.adjoint()*Yd*Yu.adjoint(
      )*Yu) + 12*(Yu*Yu.adjoint()*TYu*Yu.adjoint()*Yu*Yu.adjoint()*Yu) + 12*(
      TYu*Yd.adjoint()*Yd*Yd.adjoint()*Yd*Yu.adjoint()*Yu))*UNITMATRIX(3)).real
      ();
   const Eigen::Matrix<double,3,3> beta_TYu_5 = (threeLoop*(
      52.16251851851852*Power(g1,6)*TYu + 172.5*Power(g2,6)*TYu +
      201.4814814814815*Power(g3,6)*TYu - 6.066666666666666*Power(g1,4)*
      traceAdjYdYd*TYu - 45*Power(g2,4)*traceAdjYdYd*TYu - 53.333333333333336*
      Power(g3,4)*traceAdjYdYd*TYu + 9*traceAdjYdYdAdjYuYuAdjYdYd*TYu - 7.8*
      Power(g1,4)*traceAdjYeYe*TYu - 15*Power(g2,4)*traceAdjYeYe*TYu - 42.75*
      Power(g1,4)*traceAdjYuYu*TYu - 78.75*Power(g2,4)*traceAdjYuYu*TYu -
      106.66666666666667*Power(g3,4)*traceAdjYuYu*TYu + 18*traceAdjYdYd*
      traceAdjYuYuAdjYdYd*TYu + 6*traceAdjYeYe*traceAdjYuYuAdjYdYd*TYu + 54*
      traceAdjYuYu*traceAdjYuYuAdjYuYu*TYu + 3*traceAdjYuYuAdjYuYuAdjYuYu*TYu +
      8.5*Power(g2,4)*Sqr(g1)*TYu + 9.688888888888888*Power(g3,4)*Sqr(g1)*TYu
      + 1.2*traceAdjYuYuAdjYdYd*Sqr(g1)*TYu + 11.4*traceAdjYuYuAdjYuYu*Sqr(g1)*
      TYu + 7.58*Power(g1,4)*Sqr(g2)*TYu + 68*Power(g3,4)*Sqr(g2)*TYu + 18*
      traceAdjYuYuAdjYdYd*Sqr(g2)*TYu + 9*traceAdjYuYuAdjYuYu*Sqr(g2)*TYu - 5.7
      *traceAdjYuYu*Sqr(g1)*Sqr(g2)*TYu + 23.59111111111111*Power(g1,4)*Sqr(g3)
      *TYu + 140*Power(g2,4)*Sqr(g3)*TYu + 24*traceAdjYuYuAdjYdYd*Sqr(g3)*TYu +
      72*traceAdjYuYuAdjYuYu*Sqr(g3)*TYu - 41.333333333333336*traceAdjYuYu*Sqr
      (g1)*Sqr(g3)*TYu - 132*traceAdjYuYu*Sqr(g2)*Sqr(g3)*TYu - 1.6*Sqr(g1)*Sqr
      (g2)*Sqr(g3)*TYu + 4*(TYu*Yd.adjoint()*Yd*Yu.adjoint()*Yu*Yd.adjoint()*Yd
      ) - 4*(TYu*Yd.adjoint()*Yd*Yu.adjoint()*Yu*Yu.adjoint()*Yu) + 12*(TYu*
      Yu.adjoint()*Yu*Yu.adjoint()*Yu*Yu.adjoint()*Yu) + 12*(Yu*Yd.adjoint()*Yd
      *Yd.adjoint()*Yd*Yd.adjoint()*TYd*1.2020569031595942) + 12*(Yu*Yd.adjoint
      ()*Yd*Yd.adjoint()*TYd*Yd.adjoint()*Yd*1.2020569031595942) + 12*(Yu*
      Yd.adjoint()*TYd*Yd.adjoint()*Yd*Yd.adjoint()*Yd*1.2020569031595942) + 24
      *(Yu*Yu.adjoint()*Yu*Yu.adjoint()*Yu*Yu.adjoint()*TYu*1.2020569031595942)
      + 36*(Yu*Yu.adjoint()*Yu*Yu.adjoint()*TYu*Yu.adjoint()*Yu*
      1.2020569031595942) + 36*(Yu*Yu.adjoint()*TYu*Yu.adjoint()*Yu*Yu.adjoint(
      )*Yu*1.2020569031595942) + 6*(TYu*Yd.adjoint()*Yd*Yd.adjoint()*Yd*
      Yd.adjoint()*Yd*1.2020569031595942) + 30*(TYu*Yu.adjoint()*Yu*Yu.adjoint(
      )*Yu*Yu.adjoint()*Yu*1.2020569031595942))*UNITMATRIX(3)).real();

   beta_TYu = beta_TYu_1 + beta_TYu_2 + beta_TYu_3 + beta_TYu_4 +
      beta_TYu_5;


   return beta_TYu;
}

} // namespace flexiblesusy
