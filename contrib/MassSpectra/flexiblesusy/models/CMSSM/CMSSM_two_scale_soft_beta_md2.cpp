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

// File generated at Sat 27 Aug 2016 12:50:18

#include "CMSSM_two_scale_soft_parameters.hpp"
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
 * Calculates the one-loop beta function of md2.
 *
 * @return one-loop beta function
 */
Eigen::Matrix<double,3,3> CMSSM_soft_parameters::calc_beta_md2_one_loop(const Soft_traces& soft_traces) const
{
   const double Tr11 = TRACE_STRUCT.Tr11;


   Eigen::Matrix<double,3,3> beta_md2;

   beta_md2 = (oneOver16PiSqr*(4*mHd2*(Yd*Yd.adjoint()) + 4*(TYd*(TYd)
      .adjoint()) + 2*(md2*Yd*Yd.adjoint()) + 4*(Yd*mq2*Yd.adjoint()) + 2*(Yd*
      Yd.adjoint()*md2) + 0.5163977794943222*g1*Tr11*UNITMATRIX(3) -
      0.5333333333333333*AbsSqr(MassB)*Sqr(g1)*UNITMATRIX(3) -
      10.666666666666666*AbsSqr(MassG)*Sqr(g3)*UNITMATRIX(3))).real();


   return beta_md2;
}

/**
 * Calculates the two-loop beta function of md2.
 *
 * @return two-loop beta function
 */
Eigen::Matrix<double,3,3> CMSSM_soft_parameters::calc_beta_md2_two_loop(const Soft_traces& soft_traces) const
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
   const double Tr23 = TRACE_STRUCT.Tr23;


   Eigen::Matrix<double,3,3> beta_md2;

   beta_md2 = (twoLoop*(-12*traceconjTYdTpTYd*(Yd*Yd.adjoint()) - 4*
      traceconjTYeTpTYe*(Yd*Yd.adjoint()) - 12*tracemd2YdAdjYd*(Yd*Yd.adjoint()
      ) - 4*traceme2YeAdjYe*(Yd*Yd.adjoint()) - 4*traceml2AdjYeYe*(Yd*
      Yd.adjoint()) - 12*tracemq2AdjYdYd*(Yd*Yd.adjoint()) - 24*mHd2*
      traceYdAdjYd*(Yd*Yd.adjoint()) - 8*mHd2*traceYeAdjYe*(Yd*Yd.adjoint()) +
      0.8*mHd2*Sqr(g1)*(Yd*Yd.adjoint()) + 12*mHd2*Sqr(g2)*(Yd*Yd.adjoint()) +
      24*AbsSqr(MassWB)*Sqr(g2)*(Yd*Yd.adjoint()) - 12*traceAdjYdTYd*(Yd*(TYd)
      .adjoint()) - 4*traceAdjYeTYe*(Yd*(TYd).adjoint()) - 0.8*MassB*Sqr(g1)*(
      Yd*(TYd).adjoint()) - 12*MassWB*Sqr(g2)*(Yd*(TYd).adjoint()) - 12*
      traceconjTYdTpYd*(TYd*Yd.adjoint()) - 4*traceconjTYeTpYe*(TYd*Yd.adjoint(
      )) - 12*Conj(MassWB)*Sqr(g2)*(TYd*Yd.adjoint()) - 12*traceYdAdjYd*(TYd*(
      TYd).adjoint()) - 4*traceYeAdjYe*(TYd*(TYd).adjoint()) + 0.8*Sqr(g1)*(TYd
      *(TYd).adjoint()) + 12*Sqr(g2)*(TYd*(TYd).adjoint()) - 6*traceYdAdjYd*(
      md2*Yd*Yd.adjoint()) - 2*traceYeAdjYe*(md2*Yd*Yd.adjoint()) + 0.4*Sqr(g1)
      *(md2*Yd*Yd.adjoint()) + 6*Sqr(g2)*(md2*Yd*Yd.adjoint()) - 12*
      traceYdAdjYd*(Yd*mq2*Yd.adjoint()) - 4*traceYeAdjYe*(Yd*mq2*Yd.adjoint())
      + 0.8*Sqr(g1)*(Yd*mq2*Yd.adjoint()) + 12*Sqr(g2)*(Yd*mq2*Yd.adjoint()) -
      6*traceYdAdjYd*(Yd*Yd.adjoint()*md2) - 2*traceYeAdjYe*(Yd*Yd.adjoint()*
      md2) + 0.4*Sqr(g1)*(Yd*Yd.adjoint()*md2) + 6*Sqr(g2)*(Yd*Yd.adjoint()*md2
      ) - 8*mHd2*(Yd*Yd.adjoint()*Yd*Yd.adjoint()) - 4*(Yd*Yd.adjoint()*TYd*(
      TYd).adjoint()) - 4*mHd2*(Yd*Yu.adjoint()*Yu*Yd.adjoint()) - 4*mHu2*(Yd*
      Yu.adjoint()*Yu*Yd.adjoint()) - 4*(Yd*Yu.adjoint()*TYu*(TYd).adjoint()) -
      4*(Yd*(TYd).adjoint()*TYd*Yd.adjoint()) - 4*(Yd*(TYu).adjoint()*TYu*
      Yd.adjoint()) - 4*(TYd*Yd.adjoint()*Yd*(TYd).adjoint()) - 4*(TYd*
      Yu.adjoint()*Yu*(TYd).adjoint()) - 4*(TYd*(TYd).adjoint()*Yd*Yd.adjoint()
      ) - 4*(TYd*(TYu).adjoint()*Yu*Yd.adjoint()) - 2*(md2*Yd*Yd.adjoint()*Yd*
      Yd.adjoint()) - 2*(md2*Yd*Yu.adjoint()*Yu*Yd.adjoint()) - 4*(Yd*mq2*
      Yd.adjoint()*Yd*Yd.adjoint()) - 4*(Yd*mq2*Yu.adjoint()*Yu*Yd.adjoint()) -
      4*(Yd*Yd.adjoint()*md2*Yd*Yd.adjoint()) - 4*(Yd*Yd.adjoint()*Yd*mq2*
      Yd.adjoint()) - 2*(Yd*Yd.adjoint()*Yd*Yd.adjoint()*md2) - 4*(Yd*
      Yu.adjoint()*mu2*Yu*Yd.adjoint()) - 4*(Yd*Yu.adjoint()*Yu*mq2*Yd.adjoint(
      )) - 2*(Yd*Yu.adjoint()*Yu*Yd.adjoint()*md2) + 10.666666666666666*Power(
      g3,4)*Tr23*UNITMATRIX(3) + 2.065591117977289*g1*Tr31*UNITMATRIX(3) +
      0.5333333333333333*Tr2U111*Sqr(g1)*UNITMATRIX(3) + 1.4222222222222223*
      Conj(MassG)*Sqr(g3)*((MassB + 2*MassG)*Sqr(g1) - 30*MassG*Sqr(g3))*
      UNITMATRIX(3) + 0.017777777777777778*Conj(MassB)*Sqr(g1)*(90*MassB*(Yd*
      Yd.adjoint()) - 45*(TYd*Yd.adjoint()) + 2*(303*MassB*Sqr(g1) + 40*(2*
      MassB + MassG)*Sqr(g3))*UNITMATRIX(3)))).real();


   return beta_md2;
}

/**
 * Calculates the three-loop beta function of md2.
 *
 * @return three-loop beta function
 */
Eigen::Matrix<double,3,3> CMSSM_soft_parameters::calc_beta_md2_three_loop(const Soft_traces& soft_traces) const
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


   Eigen::Matrix<double,3,3> beta_md2;

   const Eigen::Matrix<double,3,3> beta_md2_1 = (threeLoop*(Power(g1,6)*(
      -2.1546666666666665*mHd2 - 2.1546666666666665*mHu2 - 1.4364444444444444*
      tracemd2 - 4.309333333333333*traceme2 - 2.1546666666666665*traceml2 -
      0.7182222222222222*tracemq2 - 5.745777777777778*tracemu2 +
      110.40850857704534*Sqr(MassB)) + Power(g3,4)*Sqr(g1)*(-88.89405640931534*
      MassB*MassG - 1.4222222222222223*tracemd2 - 2.8444444444444446*tracemq2 -
      1.4222222222222223*tracemu2 - 32.713694871324336*Sqr(MassB) -
      124.80775128063961*Sqr(MassG)) + Power(g3,4)*(106.66666666666667*MassG*
      traceAdjTYdYd + 106.66666666666667*MassG*traceAdjTYuYu - 64.*mHd2*
      traceAdjYdYd - 64.*traceAdjYdYdmq2 - 64.*mHu2*traceAdjYuYu - 64.*
      traceAdjYuYumq2 - 64.*traceTYdAdjTYd + 106.66666666666667*MassG*
      traceTYdAdjYd - 64.*traceTYuAdjTYu + 106.66666666666667*MassG*
      traceTYuAdjYu - 64.*traceYdAdjYdmd2 - 64.*traceYuAdjYumu2 - 320.*
      traceAdjYdYd*Sqr(MassG) - 320.*traceAdjYuYu*Sqr(MassG) + Sqr(g3)*(
      35.55555555555556*tracemd2 + 71.11111111111111*tracemq2 +
      35.55555555555556*tracemu2 + 11510.908127376795*Sqr(MassG)) + Sqr(g2)*(
      -212.38477621992627*MassG*MassWB - 318.57716432988946*Sqr(MassG) -
      58.192388109963126*Sqr(MassWB))) + Power(g1,4)*(3.7333333333333334*MassB*
      traceAdjTYdYd + 4.8*MassB*traceAdjTYeYe + 6.933333333333334*MassB*
      traceAdjTYuYu - 2.24*mHd2*traceAdjYdYd - 2.24*traceAdjYdYdmq2 - 2.88*mHd2
      *traceAdjYeYe - 2.88*traceAdjYeYeml2 - 4.16*mHu2*traceAdjYuYu - 4.16*
      traceAdjYuYumq2 - 2.24*traceTYdAdjTYd + 3.7333333333333334*MassB*
      traceTYdAdjYd - 2.88*traceTYeAdjTYe + 4.8*MassB*traceTYeAdjYe - 4.16*
      traceTYuAdjTYu + 6.933333333333334*MassB*traceTYuAdjYu - 2.24*
      traceYdAdjYdmd2 - 2.88*traceYeAdjYeme2 - 4.16*traceYuAdjYumu2 - 11.2*
      traceAdjYdYd*Sqr(MassB) - 14.400000000000002*traceAdjYeYe*Sqr(MassB) -
      20.8*traceAdjYuYu*Sqr(MassB) + Sqr(g3)*(-41.8154003415039*MassB*MassG -
      0.8533333333333334*mHd2 - 0.8533333333333334*mHu2 - 0.5688888888888889*
      tracemd2 - 1.7066666666666668*traceme2 - 0.8533333333333334*traceml2 -
      0.28444444444444444*tracemq2 - 2.2755555555555556*tracemu2 -
      62.723100512255854*Sqr(MassB) - 16.214366837418616*Sqr(MassG)) + Sqr(g2)*
      (-6.37154328659779*MassB*MassWB - 9.557314929896684*Sqr(MassB) -
      1.7457716432988948*Sqr(MassWB))) + (10.666666666666666*Power(g3,4)*mHd2 +
      144.*traceAdjTYdTYdAdjYdYd + 24.*traceAdjTYdTYdAdjYuYu + 48.*
      traceAdjTYeTYeAdjYeYe + 24.*traceAdjTYuTYuAdjYdYd + 144.*
      traceAdjYdTYdAdjTYdYd + 32.*MassG*traceAdjTYdYd*Sqr(g3) - 32.*MassG*
      traceAdjTYeYe*Sqr(g3) + Power(g1,4)*(-22.946666666666665*mHd2 - 0.48*mHu2
      - 134.8*Sqr(MassB)) + 64.*Power(g3,4)*Sqr(MassG) + Sqr(g2)*(-54.*MassWB*
      traceAdjTYdYd - 18.*MassWB*traceAdjTYeYe + Sqr(g3)*(-352.*MassG*MassWB -
      176.*mHd2 - 352.*Sqr(MassG) - 352.*Sqr(MassWB))) + Sqr(g1)*(-14.*MassB*
      traceAdjTYdYd + 6.*MassB*traceAdjTYeYe + Sqr(g3)*(-19.2*MassB*MassG - 9.6
      *mHd2 - 19.2*Sqr(MassB) - 19.2*Sqr(MassG)) + Sqr(g2)*(-34.4*MassB*MassWB
      - 17.2*mHd2 - 34.4*Sqr(MassB) - 34.4*Sqr(MassWB))) + Power(g2,4)*(-99.*
      mHd2 - 12.*mHu2 - 474.*Sqr(MassWB)))*(Yd*Yd.adjoint()))*UNITMATRIX(3))
      .real();
   const Eigen::Matrix<double,3,3> beta_md2_2 = (threeLoop*((216.*mHd2*
      traceAdjYdYdAdjYdYd + 144.*traceAdjYdYdAdjYdYdmq2 + 24.*
      traceAdjYdYdAdjYuYumq2 - 72.*traceAdjYdYd*traceAdjYdYdmq2 + 48.*
      traceAdjYeTYeAdjTYeYe - 72.*mHd2*traceAdjYdYd*traceAdjYeYe - 24.*
      traceAdjYdYdmq2*traceAdjYeYe + 72.*mHd2*traceAdjYeYeAdjYeYe + 48.*
      traceAdjYeYeAdjYeYeml2 - 24.*traceAdjYdYd*traceAdjYeYeml2 - 8.*
      traceAdjYeYe*traceAdjYeYeml2 + 24.*traceAdjYuTYuAdjTYdYd + 48.*mHd2*
      traceAdjYuYuAdjYdYd + 24.*mHu2*traceAdjYuYuAdjYdYd + 24.*
      traceAdjYuYuAdjYdYdmq2 - 12.*Power(g2,4)*traceml2 - 36.*Power(g2,4)*
      tracemq2 + Power(g1,4)*(-0.32*tracemd2 - 0.96*traceme2 - 0.48*traceml2 -
      0.16*tracemq2 - 1.28*tracemu2) - 72.*traceAdjYdYd*traceTYdAdjTYd - 24.*
      traceAdjYeYe*traceTYdAdjTYd + 24.*traceTYdAdjTYuYuAdjYd - 72.*
      traceAdjTYdYd*traceTYdAdjYd - 24.*traceAdjTYeYe*traceTYdAdjYd - 24.*
      traceAdjYdYd*traceTYeAdjTYe - 8.*traceAdjYeYe*traceTYeAdjTYe - 24.*
      traceAdjTYdYd*traceTYeAdjYe - 8.*traceAdjTYeYe*traceTYeAdjYe - 72.*
      traceAdjYdYd*traceYdAdjYdmd2 - 24.*traceAdjYeYe*traceYdAdjYdmd2 + 144.*
      traceYdAdjYdYdAdjYdmd2 + 24.*traceYdAdjYuYuAdjYdmd2 - 24.*traceAdjYdYd*
      traceYeAdjYeme2 - 8.*traceAdjYeYe*traceYeAdjYeme2 + 48.*
      traceYeAdjYeYeAdjYeme2 + 24.*traceYuAdjYdYdAdjYumu2 + 108.*mHd2*
      traceAdjYdYd*Sqr(g2) + 54.*traceAdjYdYdmq2*Sqr(g2) + 36.*mHd2*
      traceAdjYeYe*Sqr(g2) + 18.*traceAdjYeYeml2*Sqr(g2) + 54.*traceTYdAdjTYd*
      Sqr(g2) - 54.*MassWB*traceTYdAdjYd*Sqr(g2) + 18.*traceTYeAdjTYe*Sqr(g2) -
      18.*MassWB*traceTYeAdjYe*Sqr(g2) + 54.*traceYdAdjYdmd2*Sqr(g2) + 18.*
      traceYeAdjYeme2*Sqr(g2) + Sqr(g1)*(28.*mHd2*traceAdjYdYd + 14.*
      traceAdjYdYdmq2 - 12.*mHd2*traceAdjYeYe - 6.*traceAdjYeYeml2 + 14.*
      traceTYdAdjTYd - 6.*traceTYeAdjTYe + MassB*(-14.*traceTYdAdjYd + 6.*
      traceTYeAdjYe) + 14.*traceYdAdjYdmd2 - 6.*traceYeAdjYeme2 + (28.*
      traceAdjYdYd - 12.*traceAdjYeYe)*Sqr(MassB)) + Sqr(g3)*(-64.*mHd2*
      traceAdjYdYd - 32.*traceAdjYdYdmq2 + 64.*mHd2*traceAdjYeYe + 32.*
      traceAdjYeYeml2 - 32.*traceTYdAdjTYd + 32.*MassG*traceTYdAdjYd + 32.*
      traceTYeAdjTYe - 32.*MassG*traceTYeAdjYe - 32.*traceYdAdjYdmd2 + 32.*
      traceYeAdjYeme2 - 64.*traceAdjYdYd*Sqr(MassG) + 64.*traceAdjYeYe*Sqr(
      MassG)) + 108.*traceAdjYdYd*Sqr(g2)*Sqr(MassWB) + 36.*traceAdjYeYe*Sqr(g2
      )*Sqr(MassWB) - 108.*mHd2*Sqr(traceAdjYdYd) - 12.*mHd2*Sqr(traceAdjYeYe))
      *(Yd*Yd.adjoint()) + (44.93333333333333*Power(g1,4)*MassB -
      21.333333333333332*Power(g3,4)*MassG + 174.*Power(g2,4)*MassWB + 144.*
      traceAdjYdTYdAdjYdYd + 48.*traceAdjYeTYeAdjYeYe + 24.*
      traceAdjYuTYuAdjYdYd - 72.*traceAdjYdYd*traceTYdAdjYd - 24.*traceAdjYeYe*
      traceTYdAdjYd + 32.*MassG*traceAdjYdYd*Sqr(g3) - 32.*MassG*traceAdjYeYe*
      Sqr(g3) - 32.*traceTYdAdjYd*Sqr(g3) + Sqr(g1)*(-14.*MassB*traceAdjYdYd +
      6.*MassB*traceAdjYeYe + 14.*traceTYdAdjYd + (17.2*MassB + 17.2*MassWB)*
      Sqr(g2) + (9.6*MassB + 9.6*MassG)*Sqr(g3)) + Sqr(g2)*(-54.*MassWB*
      traceAdjYdYd - 18.*MassWB*traceAdjYeYe + 54.*traceTYdAdjYd + (176.*MassG
      + 176.*MassWB)*Sqr(g3)))*(Yd*(TYd).adjoint()))*UNITMATRIX(3)).real();
   const Eigen::Matrix<double,3,3> beta_md2_3 = (threeLoop*((24.*
      traceTYdAdjYuYuAdjYd + traceTYeAdjYe*(-24.*traceAdjYdYd - 8.*traceAdjYeYe
      - 6.*Sqr(g1) + 18.*Sqr(g2) + 32.*Sqr(g3)))*(Yd*(TYd).adjoint()) + (
      44.93333333333333*Power(g1,4)*MassB - 21.333333333333332*Power(g3,4)*
      MassG + 174.*Power(g2,4)*MassWB + 24.*traceAdjTYuYuAdjYdYd - 72.*
      traceAdjTYdYd*traceAdjYdYd - 24.*traceAdjTYeYe*traceAdjYdYd + 144.*
      traceAdjYdYdAdjTYdYd - 24.*traceAdjTYdYd*traceAdjYeYe - 8.*traceAdjTYeYe*
      traceAdjYeYe + 48.*traceAdjYeYeAdjTYeYe + 24.*traceAdjYuYuAdjTYdYd - 32.*
      traceAdjTYdYd*Sqr(g3) + 32.*traceAdjTYeYe*Sqr(g3) + 32.*MassG*
      traceAdjYdYd*Sqr(g3) - 32.*MassG*traceAdjYeYe*Sqr(g3) + Sqr(g1)*(14.*
      traceAdjTYdYd - 6.*traceAdjTYeYe - 14.*MassB*traceAdjYdYd + 6.*MassB*
      traceAdjYeYe + (17.2*MassB + 17.2*MassWB)*Sqr(g2) + (9.6*MassB + 9.6*
      MassG)*Sqr(g3)) + Sqr(g2)*(54.*traceAdjTYdYd + 18.*traceAdjTYeYe - 54.*
      MassWB*traceAdjYdYd - 18.*MassWB*traceAdjYeYe + (176.*MassG + 176.*MassWB
      )*Sqr(g3)))*(TYd*Yd.adjoint()) - 22.466666666666665*Power(g1,4)*(TYd*(TYd
      ).adjoint()) - 87.*Power(g2,4)*(TYd*(TYd).adjoint()) + 10.666666666666666
      *Power(g3,4)*(TYd*(TYd).adjoint()) + 72.*traceAdjYdYdAdjYdYd*(TYd*(TYd)
      .adjoint()) - 24.*traceAdjYdYd*traceAdjYeYe*(TYd*(TYd).adjoint()) + 24.*
      traceAdjYeYeAdjYeYe*(TYd*(TYd).adjoint()) + 24.*traceAdjYuYuAdjYdYd*(TYd*
      (TYd).adjoint()) + 14.*traceAdjYdYd*Sqr(g1)*(TYd*(TYd).adjoint()) - 6.*
      traceAdjYeYe*Sqr(g1)*(TYd*(TYd).adjoint()) + 54.*traceAdjYdYd*Sqr(g2)*(
      TYd*(TYd).adjoint()) + 18.*traceAdjYeYe*Sqr(g2)*(TYd*(TYd).adjoint()) -
      17.2*Sqr(g1)*Sqr(g2)*(TYd*(TYd).adjoint()) - 32.*traceAdjYdYd*Sqr(g3)*(
      TYd*(TYd).adjoint()) + 32.*traceAdjYeYe*Sqr(g3)*(TYd*(TYd).adjoint()) -
      9.6*Sqr(g1)*Sqr(g3)*(TYd*(TYd).adjoint()) - 176.*Sqr(g2)*Sqr(g3)*(TYd*(
      TYd).adjoint()) - 36.*Sqr(traceAdjYdYd)*(TYd*(TYd).adjoint()) - 4.*Sqr(
      traceAdjYeYe)*(TYd*(TYd).adjoint()) - 11.233333333333333*Power(g1,4)*(md2
      *Yd*Yd.adjoint()) - 43.5*Power(g2,4)*(md2*Yd*Yd.adjoint()) +
      5.333333333333333*Power(g3,4)*(md2*Yd*Yd.adjoint()) + 36.*
      traceAdjYdYdAdjYdYd*(md2*Yd*Yd.adjoint()) - 12.*traceAdjYdYd*traceAdjYeYe
      *(md2*Yd*Yd.adjoint()) + 12.*traceAdjYeYeAdjYeYe*(md2*Yd*Yd.adjoint()) +
      12.*traceAdjYuYuAdjYdYd*(md2*Yd*Yd.adjoint()) + 7.*traceAdjYdYd*Sqr(g1)*(
      md2*Yd*Yd.adjoint()) - 3.*traceAdjYeYe*Sqr(g1)*(md2*Yd*Yd.adjoint()) +
      27.*traceAdjYdYd*Sqr(g2)*(md2*Yd*Yd.adjoint()) + 9.*traceAdjYeYe*Sqr(g2)*
      (md2*Yd*Yd.adjoint()) - 8.6*Sqr(g1)*Sqr(g2)*(md2*Yd*Yd.adjoint()) - 16.*
      traceAdjYdYd*Sqr(g3)*(md2*Yd*Yd.adjoint()) + 16.*traceAdjYeYe*Sqr(g3)*(
      md2*Yd*Yd.adjoint()) - 4.8*Sqr(g1)*Sqr(g3)*(md2*Yd*Yd.adjoint()) - 88.*
      Sqr(g2)*Sqr(g3)*(md2*Yd*Yd.adjoint()) - 18.*Sqr(traceAdjYdYd)*(md2*Yd*
      Yd.adjoint()) - 2.*Sqr(traceAdjYeYe)*(md2*Yd*Yd.adjoint()) -
      22.466666666666665*Power(g1,4)*(Yd*mq2*Yd.adjoint()) - 87.*Power(g2,4)*(
      Yd*mq2*Yd.adjoint()) + 10.666666666666666*Power(g3,4)*(Yd*mq2*Yd.adjoint(
      )) + 72.*traceAdjYdYdAdjYdYd*(Yd*mq2*Yd.adjoint()) - 24.*traceAdjYdYd*
      traceAdjYeYe*(Yd*mq2*Yd.adjoint()) + 24.*traceAdjYeYeAdjYeYe*(Yd*mq2*
      Yd.adjoint()) + 24.*traceAdjYuYuAdjYdYd*(Yd*mq2*Yd.adjoint()) + 14.*
      traceAdjYdYd*Sqr(g1)*(Yd*mq2*Yd.adjoint()) - 6.*traceAdjYeYe*Sqr(g1)*(Yd*
      mq2*Yd.adjoint()) + 54.*traceAdjYdYd*Sqr(g2)*(Yd*mq2*Yd.adjoint()) + 18.*
      traceAdjYeYe*Sqr(g2)*(Yd*mq2*Yd.adjoint()) - 17.2*Sqr(g1)*Sqr(g2)*(Yd*mq2
      *Yd.adjoint()) - 32.*traceAdjYdYd*Sqr(g3)*(Yd*mq2*Yd.adjoint()) + 32.*
      traceAdjYeYe*Sqr(g3)*(Yd*mq2*Yd.adjoint()) - 9.6*Sqr(g1)*Sqr(g3)*(Yd*mq2*
      Yd.adjoint()) - 176.*Sqr(g2)*Sqr(g3)*(Yd*mq2*Yd.adjoint()) - 36.*Sqr(
      traceAdjYdYd)*(Yd*mq2*Yd.adjoint()) - 4.*Sqr(traceAdjYeYe)*(Yd*mq2*
      Yd.adjoint()) + 33.6*MassB*MassWB*Sqr(g1)*Sqr(g2)*(Yd*Yd.adjoint()*
      1.2020569031595942) + 42.666666666666664*MassB*MassG*Sqr(g1)*Sqr(g3)*(Yd*
      Yd.adjoint()*1.2020569031595942) + 384.*MassG*MassWB*Sqr(g2)*Sqr(g3)*(Yd*
      Yd.adjoint()*1.2020569031595942) - 1.12*Power(g1,4)*Sqr(MassB)*(Yd*
      Yd.adjoint()*1.2020569031595942) + 33.6*Sqr(g1)*Sqr(g2)*Sqr(MassB)*(Yd*
      Yd.adjoint()*1.2020569031595942) + 42.666666666666664*Sqr(g1)*Sqr(g3)*Sqr
      (MassB)*(Yd*Yd.adjoint()*1.2020569031595942) - 2176.*Power(g3,4)*Sqr(
      MassG)*(Yd*Yd.adjoint()*1.2020569031595942) + 42.666666666666664*Sqr(g1)*
      Sqr(g3)*Sqr(MassG)*(Yd*Yd.adjoint()*1.2020569031595942) + 384.*Sqr(g2)*
      Sqr(g3)*Sqr(MassG)*(Yd*Yd.adjoint()*1.2020569031595942) - 108.*Power(g2,4
      )*Sqr(MassWB)*(Yd*Yd.adjoint()*1.2020569031595942) + 33.6*Sqr(g1)*Sqr(g2)
      *Sqr(MassWB)*(Yd*Yd.adjoint()*1.2020569031595942))*UNITMATRIX(3)).real();
   const Eigen::Matrix<double,3,3> beta_md2_4 = (threeLoop*((
      -0.18666666666666668*Power(g1,4)*mHd2 - 18.*Power(g2,4)*mHd2 + Sqr(g1)*(
      -24.*mHd2*traceAdjYdYd - 12.*traceAdjYdYdmq2 + 24.*mHd2*traceAdjYeYe +
      12.*traceAdjYeYeml2 - 12.*traceTYdAdjTYd + 12.*traceTYeAdjTYe + MassB*(
      12.*traceAdjTYdYd - 12.*traceAdjTYeYe + 12.*traceTYdAdjYd - 12.*
      traceTYeAdjYe) - 12.*traceYdAdjYdmd2 + 12.*traceYeAdjYeme2 +
      21.333333333333332*mHd2*Sqr(g3) + (-24.*traceAdjYdYd + 24.*traceAdjYeYe)*
      Sqr(MassB)) + Sqr(g3)*(-192.*MassG*traceAdjTYdYd + 384.*mHd2*traceAdjYdYd
      + 192.*traceAdjYdYdmq2 + 192.*traceTYdAdjTYd - 192.*MassG*traceTYdAdjYd
      + 192.*traceYdAdjYdmd2 - 362.6666666666667*mHd2*Sqr(g3) + 384.*
      traceAdjYdYd*Sqr(MassG)) + Sqr(g2)*(108.*MassWB*traceAdjTYdYd + 36.*
      MassWB*traceAdjTYeYe - 216.*mHd2*traceAdjYdYd - 108.*traceAdjYdYdmq2 -
      72.*mHd2*traceAdjYeYe - 36.*traceAdjYeYeml2 - 108.*traceTYdAdjTYd + 108.*
      MassWB*traceTYdAdjYd - 36.*traceTYeAdjTYe + 36.*MassWB*traceTYeAdjYe -
      108.*traceYdAdjYdmd2 - 36.*traceYeAdjYeme2 + 16.8*mHd2*Sqr(g1) - 216.*
      traceAdjYdYd*Sqr(MassWB) - 72.*traceAdjYeYe*Sqr(MassWB) + Sqr(g3)*(192.*
      mHd2 + 384.*Sqr(MassWB))))*(Yd*Yd.adjoint()*1.2020569031595942) + (
      -11.233333333333333*Power(g1,4) - 43.5*Power(g2,4) + 5.333333333333333*
      Power(g3,4) + 36.*traceAdjYdYdAdjYdYd - 12.*traceAdjYdYd*traceAdjYeYe +
      12.*traceAdjYeYeAdjYeYe + 12.*traceAdjYuYuAdjYdYd + Sqr(g2)*(27.*
      traceAdjYdYd + 9.*traceAdjYeYe - 88.*Sqr(g3)) + Sqr(g1)*(7.*traceAdjYdYd
      - 3.*traceAdjYeYe - 8.6*Sqr(g2) - 4.8*Sqr(g3)) - 16.*traceAdjYdYd*Sqr(g3)
      + 16.*traceAdjYeYe*Sqr(g3) - 18.*Sqr(traceAdjYdYd) - 2.*Sqr(traceAdjYeYe
      ))*(Yd*Yd.adjoint()*md2) + 0.37333333333333335*Power(g1,4)*MassB*(Yd*(TYd
      ).adjoint()*1.2020569031595942) + 725.3333333333334*Power(g3,4)*MassG*(Yd
      *(TYd).adjoint()*1.2020569031595942) + 36.*Power(g2,4)*MassWB*(Yd*(TYd)
      .adjoint()*1.2020569031595942) + 12.*MassB*traceAdjYdYd*Sqr(g1)*(Yd*(TYd)
      .adjoint()*1.2020569031595942) - 12.*MassB*traceAdjYeYe*Sqr(g1)*(Yd*(TYd)
      .adjoint()*1.2020569031595942) - 12.*traceTYdAdjYd*Sqr(g1)*(Yd*(TYd)
      .adjoint()*1.2020569031595942) + 12.*traceTYeAdjYe*Sqr(g1)*(Yd*(TYd)
      .adjoint()*1.2020569031595942) + 108.*MassWB*traceAdjYdYd*Sqr(g2)*(Yd*(
      TYd).adjoint()*1.2020569031595942) + 36.*MassWB*traceAdjYeYe*Sqr(g2)*(Yd*
      (TYd).adjoint()*1.2020569031595942) - 108.*traceTYdAdjYd*Sqr(g2)*(Yd*(TYd
      ).adjoint()*1.2020569031595942) - 36.*traceTYeAdjYe*Sqr(g2)*(Yd*(TYd)
      .adjoint()*1.2020569031595942) - 16.8*MassB*Sqr(g1)*Sqr(g2)*(Yd*(TYd)
      .adjoint()*1.2020569031595942) - 16.8*MassWB*Sqr(g1)*Sqr(g2)*(Yd*(TYd)
      .adjoint()*1.2020569031595942) - 192.*MassG*traceAdjYdYd*Sqr(g3)*(Yd*(TYd
      ).adjoint()*1.2020569031595942) + 192.*traceTYdAdjYd*Sqr(g3)*(Yd*(TYd)
      .adjoint()*1.2020569031595942) - 21.333333333333332*MassB*Sqr(g1)*Sqr(g3)
      *(Yd*(TYd).adjoint()*1.2020569031595942) - 21.333333333333332*MassG*Sqr(
      g1)*Sqr(g3)*(Yd*(TYd).adjoint()*1.2020569031595942) - 192.*MassG*Sqr(g2)*
      Sqr(g3)*(Yd*(TYd).adjoint()*1.2020569031595942) - 192.*MassWB*Sqr(g2)*Sqr
      (g3)*(Yd*(TYd).adjoint()*1.2020569031595942) + 0.37333333333333335*Power(
      g1,4)*MassB*(TYd*Yd.adjoint()*1.2020569031595942) + 725.3333333333334*
      Power(g3,4)*MassG*(TYd*Yd.adjoint()*1.2020569031595942) + 36.*Power(g2,4)
      *MassWB*(TYd*Yd.adjoint()*1.2020569031595942) - 12.*traceAdjTYdYd*Sqr(g1)
      *(TYd*Yd.adjoint()*1.2020569031595942) + 12.*traceAdjTYeYe*Sqr(g1)*(TYd*
      Yd.adjoint()*1.2020569031595942) + 12.*MassB*traceAdjYdYd*Sqr(g1)*(TYd*
      Yd.adjoint()*1.2020569031595942) - 12.*MassB*traceAdjYeYe*Sqr(g1)*(TYd*
      Yd.adjoint()*1.2020569031595942) - 108.*traceAdjTYdYd*Sqr(g2)*(TYd*
      Yd.adjoint()*1.2020569031595942) - 36.*traceAdjTYeYe*Sqr(g2)*(TYd*
      Yd.adjoint()*1.2020569031595942) + 108.*MassWB*traceAdjYdYd*Sqr(g2)*(TYd*
      Yd.adjoint()*1.2020569031595942) + 36.*MassWB*traceAdjYeYe*Sqr(g2)*(TYd*
      Yd.adjoint()*1.2020569031595942) - 16.8*MassB*Sqr(g1)*Sqr(g2)*(TYd*
      Yd.adjoint()*1.2020569031595942) - 16.8*MassWB*Sqr(g1)*Sqr(g2)*(TYd*
      Yd.adjoint()*1.2020569031595942) + 192.*traceAdjTYdYd*Sqr(g3)*(TYd*
      Yd.adjoint()*1.2020569031595942) - 192.*MassG*traceAdjYdYd*Sqr(g3)*(TYd*
      Yd.adjoint()*1.2020569031595942) - 21.333333333333332*MassB*Sqr(g1)*Sqr(
      g3)*(TYd*Yd.adjoint()*1.2020569031595942) - 21.333333333333332*MassG*Sqr(
      g1)*Sqr(g3)*(TYd*Yd.adjoint()*1.2020569031595942) - 192.*MassG*Sqr(g2)*
      Sqr(g3)*(TYd*Yd.adjoint()*1.2020569031595942) - 192.*MassWB*Sqr(g2)*Sqr(
      g3)*(TYd*Yd.adjoint()*1.2020569031595942) - 0.18666666666666668*Power(g1,
      4)*(TYd*(TYd).adjoint()*1.2020569031595942) + 16.8*Sqr(g1)*Sqr(g2)*(TYd*(
      TYd).adjoint()*1.2020569031595942))*UNITMATRIX(3)).real();
   const Eigen::Matrix<double,3,3> beta_md2_5 = (threeLoop*((-18.*Power(
      g2,4) - 362.6666666666667*Power(g3,4) + 192.*traceAdjYdYd*Sqr(g3) + Sqr(
      g1)*(-12.*traceAdjYdYd + 12.*traceAdjYeYe + 21.333333333333332*Sqr(g3)) +
      Sqr(g2)*(-108.*traceAdjYdYd - 36.*traceAdjYeYe + 192.*Sqr(g3)))*(TYd*(
      TYd).adjoint()*1.2020569031595942) + (-0.09333333333333334*Power(g1,4) -
      9.*Power(g2,4) - 181.33333333333334*Power(g3,4) + 96.*traceAdjYdYd*Sqr(g3
      ) + Sqr(g1)*(-6.*traceAdjYdYd + 6.*traceAdjYeYe + 8.4*Sqr(g2) +
      10.666666666666666*Sqr(g3)) + Sqr(g2)*(-54.*traceAdjYdYd - 18.*
      traceAdjYeYe + 96.*Sqr(g3)))*(md2*Yd*Yd.adjoint()*1.2020569031595942) -
      0.18666666666666668*Power(g1,4)*(Yd*mq2*Yd.adjoint()*1.2020569031595942)
      - 18.*Power(g2,4)*(Yd*mq2*Yd.adjoint()*1.2020569031595942) -
      362.6666666666667*Power(g3,4)*(Yd*mq2*Yd.adjoint()*1.2020569031595942) -
      12.*traceAdjYdYd*Sqr(g1)*(Yd*mq2*Yd.adjoint()*1.2020569031595942) + 12.*
      traceAdjYeYe*Sqr(g1)*(Yd*mq2*Yd.adjoint()*1.2020569031595942) - 108.*
      traceAdjYdYd*Sqr(g2)*(Yd*mq2*Yd.adjoint()*1.2020569031595942) - 36.*
      traceAdjYeYe*Sqr(g2)*(Yd*mq2*Yd.adjoint()*1.2020569031595942) + 16.8*Sqr(
      g1)*Sqr(g2)*(Yd*mq2*Yd.adjoint()*1.2020569031595942) + 192.*traceAdjYdYd*
      Sqr(g3)*(Yd*mq2*Yd.adjoint()*1.2020569031595942) + 21.333333333333332*Sqr
      (g1)*Sqr(g3)*(Yd*mq2*Yd.adjoint()*1.2020569031595942) + 192.*Sqr(g2)*Sqr(
      g3)*(Yd*mq2*Yd.adjoint()*1.2020569031595942) - 0.09333333333333334*Power(
      g1,4)*(Yd*Yd.adjoint()*md2*1.2020569031595942) - 9.*Power(g2,4)*(Yd*
      Yd.adjoint()*md2*1.2020569031595942) - 181.33333333333334*Power(g3,4)*(Yd
      *Yd.adjoint()*md2*1.2020569031595942) - 6.*traceAdjYdYd*Sqr(g1)*(Yd*
      Yd.adjoint()*md2*1.2020569031595942) + 6.*traceAdjYeYe*Sqr(g1)*(Yd*
      Yd.adjoint()*md2*1.2020569031595942) - 54.*traceAdjYdYd*Sqr(g2)*(Yd*
      Yd.adjoint()*md2*1.2020569031595942) - 18.*traceAdjYeYe*Sqr(g2)*(Yd*
      Yd.adjoint()*md2*1.2020569031595942) + 8.4*Sqr(g1)*Sqr(g2)*(Yd*Yd.adjoint
      ()*md2*1.2020569031595942) + 96.*traceAdjYdYd*Sqr(g3)*(Yd*Yd.adjoint()*
      md2*1.2020569031595942) + 10.666666666666666*Sqr(g1)*Sqr(g3)*(Yd*
      Yd.adjoint()*md2*1.2020569031595942) + 96.*Sqr(g2)*Sqr(g3)*(Yd*Yd.adjoint
      ()*md2*1.2020569031595942) + 36.*mHd2*traceAdjYdYd*(Yd*Yd.adjoint()*Yd*
      Yd.adjoint()) + 12.*traceAdjYdYdmq2*(Yd*Yd.adjoint()*Yd*Yd.adjoint()) +
      12.*mHd2*traceAdjYeYe*(Yd*Yd.adjoint()*Yd*Yd.adjoint()) + 4.*
      traceAdjYeYeml2*(Yd*Yd.adjoint()*Yd*Yd.adjoint()) + 12.*traceTYdAdjTYd*(
      Yd*Yd.adjoint()*Yd*Yd.adjoint()) + 4.*traceTYeAdjTYe*(Yd*Yd.adjoint()*Yd*
      Yd.adjoint()) + 12.*traceYdAdjYdmd2*(Yd*Yd.adjoint()*Yd*Yd.adjoint()) +
      4.*traceYeAdjYeme2*(Yd*Yd.adjoint()*Yd*Yd.adjoint()) - 1.3333333333333333
      *mHd2*Sqr(g1)*(Yd*Yd.adjoint()*Yd*Yd.adjoint()) + 36.*mHd2*Sqr(g2)*(Yd*
      Yd.adjoint()*Yd*Yd.adjoint()) + 85.33333333333333*mHd2*Sqr(g3)*(Yd*
      Yd.adjoint()*Yd*Yd.adjoint()) - 1.3333333333333333*Sqr(g1)*Sqr(MassB)*(Yd
      *Yd.adjoint()*Yd*Yd.adjoint()) + 85.33333333333333*Sqr(g3)*Sqr(MassG)*(Yd
      *Yd.adjoint()*Yd*Yd.adjoint()) + 36.*Sqr(g2)*Sqr(MassWB)*(Yd*Yd.adjoint()
      *Yd*Yd.adjoint()) + 12.*traceTYdAdjYd*(Yd*Yd.adjoint()*Yd*(TYd).adjoint()
      ) + 4.*traceTYeAdjYe*(Yd*Yd.adjoint()*Yd*(TYd).adjoint()) +
      0.6666666666666666*MassB*Sqr(g1)*(Yd*Yd.adjoint()*Yd*(TYd).adjoint()) -
      18.*MassWB*Sqr(g2)*(Yd*Yd.adjoint()*Yd*(TYd).adjoint()) -
      42.666666666666664*MassG*Sqr(g3)*(Yd*Yd.adjoint()*Yd*(TYd).adjoint()) +
      12.*traceAdjTYdYd*(Yd*Yd.adjoint()*TYd*Yd.adjoint()) + 4.*traceAdjTYeYe*(
      Yd*Yd.adjoint()*TYd*Yd.adjoint()) + 0.6666666666666666*MassB*Sqr(g1)*(Yd*
      Yd.adjoint()*TYd*Yd.adjoint()) - 18.*MassWB*Sqr(g2)*(Yd*Yd.adjoint()*TYd*
      Yd.adjoint()) - 42.666666666666664*MassG*Sqr(g3)*(Yd*Yd.adjoint()*TYd*
      Yd.adjoint()) + 12.*traceAdjYdYd*(Yd*Yd.adjoint()*TYd*(TYd).adjoint()) +
      4.*traceAdjYeYe*(Yd*Yd.adjoint()*TYd*(TYd).adjoint()) -
      0.6666666666666666*Sqr(g1)*(Yd*Yd.adjoint()*TYd*(TYd).adjoint()) + 18.*
      Sqr(g2)*(Yd*Yd.adjoint()*TYd*(TYd).adjoint()) + 42.666666666666664*Sqr(g3
      )*(Yd*Yd.adjoint()*TYd*(TYd).adjoint()) - 24.*mHd2*traceAdjYdYd*(Yd*
      Yu.adjoint()*Yu*Yd.adjoint()) - 12.*mHu2*traceAdjYdYd*(Yd*Yu.adjoint()*Yu
      *Yd.adjoint()) - 12.*traceAdjYdYdmq2*(Yd*Yu.adjoint()*Yu*Yd.adjoint()) -
      8.*mHd2*traceAdjYeYe*(Yd*Yu.adjoint()*Yu*Yd.adjoint()) - 4.*mHu2*
      traceAdjYeYe*(Yd*Yu.adjoint()*Yu*Yd.adjoint()) - 4.*traceAdjYeYeml2*(Yd*
      Yu.adjoint()*Yu*Yd.adjoint()) + 24.*mHd2*traceAdjYuYu*(Yd*Yu.adjoint()*Yu
      *Yd.adjoint()) + 48.*mHu2*traceAdjYuYu*(Yd*Yu.adjoint()*Yu*Yd.adjoint())
      + 24.*traceAdjYuYumq2*(Yd*Yu.adjoint()*Yu*Yd.adjoint()) - 12.*
      traceTYdAdjTYd*(Yd*Yu.adjoint()*Yu*Yd.adjoint()) - 4.*traceTYeAdjTYe*(Yd*
      Yu.adjoint()*Yu*Yd.adjoint()) + 24.*traceTYuAdjTYu*(Yd*Yu.adjoint()*Yu*
      Yd.adjoint()) - 12.*traceYdAdjYdmd2*(Yd*Yu.adjoint()*Yu*Yd.adjoint()) -
      4.*traceYeAdjYeme2*(Yd*Yu.adjoint()*Yu*Yd.adjoint()) + 24.*
      traceYuAdjYumu2*(Yd*Yu.adjoint()*Yu*Yd.adjoint()) - 3.8666666666666663*
      mHd2*Sqr(g1)*(Yd*Yu.adjoint()*Yu*Yd.adjoint()) - 3.8666666666666663*mHu2*
      Sqr(g1)*(Yd*Yu.adjoint()*Yu*Yd.adjoint()) + 18.*mHd2*Sqr(g2)*(Yd*
      Yu.adjoint()*Yu*Yd.adjoint()) + 18.*mHu2*Sqr(g2)*(Yd*Yu.adjoint()*Yu*
      Yd.adjoint()) + 42.666666666666664*mHd2*Sqr(g3)*(Yd*Yu.adjoint()*Yu*
      Yd.adjoint()) + 42.666666666666664*mHu2*Sqr(g3)*(Yd*Yu.adjoint()*Yu*
      Yd.adjoint()) - 7.7333333333333325*Sqr(g1)*Sqr(MassB)*(Yd*Yu.adjoint()*Yu
      *Yd.adjoint()) + 85.33333333333333*Sqr(g3)*Sqr(MassG)*(Yd*Yu.adjoint()*Yu
      *Yd.adjoint()) + 36.*Sqr(g2)*Sqr(MassWB)*(Yd*Yu.adjoint()*Yu*Yd.adjoint()
      ) - 12.*traceTYdAdjYd*(Yd*Yu.adjoint()*Yu*(TYd).adjoint()) - 4.*
      traceTYeAdjYe*(Yd*Yu.adjoint()*Yu*(TYd).adjoint()) + 3.8666666666666663*
      MassB*Sqr(g1)*(Yd*Yu.adjoint()*Yu*(TYd).adjoint()) - 18.*MassWB*Sqr(g2)*(
      Yd*Yu.adjoint()*Yu*(TYd).adjoint()) - 42.666666666666664*MassG*Sqr(g3)*(
      Yd*Yu.adjoint()*Yu*(TYd).adjoint()))*UNITMATRIX(3)).real();
   const Eigen::Matrix<double,3,3> beta_md2_6 = (threeLoop*(24.*
      traceTYuAdjYu*(Yd*Yu.adjoint()*Yu*(TYd).adjoint()) + (-12.*traceAdjTYdYd
      - 4.*traceAdjTYeYe + 24.*traceAdjTYuYu + 3.8666666666666663*MassB*Sqr(g1)
      - 18.*MassWB*Sqr(g2) - 42.666666666666664*MassG*Sqr(g3))*(Yd*Yu.adjoint(
      )*TYu*Yd.adjoint()) - 12.*traceAdjYdYd*(Yd*Yu.adjoint()*TYu*(TYd).adjoint
      ()) - 4.*traceAdjYeYe*(Yd*Yu.adjoint()*TYu*(TYd).adjoint()) + 24.*
      traceAdjYuYu*(Yd*Yu.adjoint()*TYu*(TYd).adjoint()) - 3.8666666666666663*
      Sqr(g1)*(Yd*Yu.adjoint()*TYu*(TYd).adjoint()) + 18.*Sqr(g2)*(Yd*
      Yu.adjoint()*TYu*(TYd).adjoint()) + 42.666666666666664*Sqr(g3)*(Yd*
      Yu.adjoint()*TYu*(TYd).adjoint()) + 12.*traceTYdAdjYd*(Yd*(TYd).adjoint()
      *Yd*Yd.adjoint()) + 4.*traceTYeAdjYe*(Yd*(TYd).adjoint()*Yd*Yd.adjoint())
      + 0.6666666666666666*MassB*Sqr(g1)*(Yd*(TYd).adjoint()*Yd*Yd.adjoint())
      - 18.*MassWB*Sqr(g2)*(Yd*(TYd).adjoint()*Yd*Yd.adjoint()) -
      42.666666666666664*MassG*Sqr(g3)*(Yd*(TYd).adjoint()*Yd*Yd.adjoint()) +
      12.*traceAdjYdYd*(Yd*(TYd).adjoint()*TYd*Yd.adjoint()) + 4.*traceAdjYeYe*
      (Yd*(TYd).adjoint()*TYd*Yd.adjoint()) - 0.6666666666666666*Sqr(g1)*(Yd*(
      TYd).adjoint()*TYd*Yd.adjoint()) + 18.*Sqr(g2)*(Yd*(TYd).adjoint()*TYd*
      Yd.adjoint()) + 42.666666666666664*Sqr(g3)*(Yd*(TYd).adjoint()*TYd*
      Yd.adjoint()) - 12.*traceTYdAdjYd*(Yd*(TYu).adjoint()*Yu*Yd.adjoint()) -
      4.*traceTYeAdjYe*(Yd*(TYu).adjoint()*Yu*Yd.adjoint()) + 24.*traceTYuAdjYu
      *(Yd*(TYu).adjoint()*Yu*Yd.adjoint()) + 3.8666666666666663*MassB*Sqr(g1)*
      (Yd*(TYu).adjoint()*Yu*Yd.adjoint()) - 18.*MassWB*Sqr(g2)*(Yd*(TYu)
      .adjoint()*Yu*Yd.adjoint()) - 42.666666666666664*MassG*Sqr(g3)*(Yd*(TYu)
      .adjoint()*Yu*Yd.adjoint()) - 12.*traceAdjYdYd*(Yd*(TYu).adjoint()*TYu*
      Yd.adjoint()) - 4.*traceAdjYeYe*(Yd*(TYu).adjoint()*TYu*Yd.adjoint()) +
      24.*traceAdjYuYu*(Yd*(TYu).adjoint()*TYu*Yd.adjoint()) -
      3.8666666666666663*Sqr(g1)*(Yd*(TYu).adjoint()*TYu*Yd.adjoint()) + 18.*
      Sqr(g2)*(Yd*(TYu).adjoint()*TYu*Yd.adjoint()) + 42.666666666666664*Sqr(g3
      )*(Yd*(TYu).adjoint()*TYu*Yd.adjoint()) + 12.*traceAdjTYdYd*(TYd*
      Yd.adjoint()*Yd*Yd.adjoint()) + 4.*traceAdjTYeYe*(TYd*Yd.adjoint()*Yd*
      Yd.adjoint()) + 0.6666666666666666*MassB*Sqr(g1)*(TYd*Yd.adjoint()*Yd*
      Yd.adjoint()) - 18.*MassWB*Sqr(g2)*(TYd*Yd.adjoint()*Yd*Yd.adjoint()) -
      42.666666666666664*MassG*Sqr(g3)*(TYd*Yd.adjoint()*Yd*Yd.adjoint()) + 12.
      *traceAdjYdYd*(TYd*Yd.adjoint()*Yd*(TYd).adjoint()) + 4.*traceAdjYeYe*(
      TYd*Yd.adjoint()*Yd*(TYd).adjoint()) - 0.6666666666666666*Sqr(g1)*(TYd*
      Yd.adjoint()*Yd*(TYd).adjoint()) + 18.*Sqr(g2)*(TYd*Yd.adjoint()*Yd*(TYd)
      .adjoint()) + 42.666666666666664*Sqr(g3)*(TYd*Yd.adjoint()*Yd*(TYd)
      .adjoint()) - 12.*traceAdjTYdYd*(TYd*Yu.adjoint()*Yu*Yd.adjoint()) - 4.*
      traceAdjTYeYe*(TYd*Yu.adjoint()*Yu*Yd.adjoint()) + 24.*traceAdjTYuYu*(TYd
      *Yu.adjoint()*Yu*Yd.adjoint()) + 3.8666666666666663*MassB*Sqr(g1)*(TYd*
      Yu.adjoint()*Yu*Yd.adjoint()) - 18.*MassWB*Sqr(g2)*(TYd*Yu.adjoint()*Yu*
      Yd.adjoint()) - 42.666666666666664*MassG*Sqr(g3)*(TYd*Yu.adjoint()*Yu*
      Yd.adjoint()) - 12.*traceAdjYdYd*(TYd*Yu.adjoint()*Yu*(TYd).adjoint()) -
      4.*traceAdjYeYe*(TYd*Yu.adjoint()*Yu*(TYd).adjoint()) + 24.*traceAdjYuYu*
      (TYd*Yu.adjoint()*Yu*(TYd).adjoint()) - 3.8666666666666663*Sqr(g1)*(TYd*
      Yu.adjoint()*Yu*(TYd).adjoint()) + 18.*Sqr(g2)*(TYd*Yu.adjoint()*Yu*(TYd)
      .adjoint()) + 42.666666666666664*Sqr(g3)*(TYd*Yu.adjoint()*Yu*(TYd)
      .adjoint()) + 12.*traceAdjYdYd*(TYd*(TYd).adjoint()*Yd*Yd.adjoint()) + 4.
      *traceAdjYeYe*(TYd*(TYd).adjoint()*Yd*Yd.adjoint()) - 0.6666666666666666*
      Sqr(g1)*(TYd*(TYd).adjoint()*Yd*Yd.adjoint()) + 18.*Sqr(g2)*(TYd*(TYd)
      .adjoint()*Yd*Yd.adjoint()) + 42.666666666666664*Sqr(g3)*(TYd*(TYd)
      .adjoint()*Yd*Yd.adjoint()) - 12.*traceAdjYdYd*(TYd*(TYu).adjoint()*Yu*
      Yd.adjoint()) - 4.*traceAdjYeYe*(TYd*(TYu).adjoint()*Yu*Yd.adjoint()) +
      24.*traceAdjYuYu*(TYd*(TYu).adjoint()*Yu*Yd.adjoint()) -
      3.8666666666666663*Sqr(g1)*(TYd*(TYu).adjoint()*Yu*Yd.adjoint()) + 18.*
      Sqr(g2)*(TYd*(TYu).adjoint()*Yu*Yd.adjoint()) + 42.666666666666664*Sqr(g3
      )*(TYd*(TYu).adjoint()*Yu*Yd.adjoint()) + 6.*traceAdjYdYd*(md2*Yd*
      Yd.adjoint()*Yd*Yd.adjoint()) + 2.*traceAdjYeYe*(md2*Yd*Yd.adjoint()*Yd*
      Yd.adjoint()) - 0.3333333333333333*Sqr(g1)*(md2*Yd*Yd.adjoint()*Yd*
      Yd.adjoint()) + 9.*Sqr(g2)*(md2*Yd*Yd.adjoint()*Yd*Yd.adjoint()) +
      21.333333333333332*Sqr(g3)*(md2*Yd*Yd.adjoint()*Yd*Yd.adjoint()) - 6.*
      traceAdjYdYd*(md2*Yd*Yu.adjoint()*Yu*Yd.adjoint()) - 2.*traceAdjYeYe*(md2
      *Yd*Yu.adjoint()*Yu*Yd.adjoint()) + 12.*traceAdjYuYu*(md2*Yd*Yu.adjoint()
      *Yu*Yd.adjoint()) - 1.9333333333333331*Sqr(g1)*(md2*Yd*Yu.adjoint()*Yu*
      Yd.adjoint()) + 9.*Sqr(g2)*(md2*Yd*Yu.adjoint()*Yu*Yd.adjoint()) +
      21.333333333333332*Sqr(g3)*(md2*Yd*Yu.adjoint()*Yu*Yd.adjoint()) + 12.*
      traceAdjYdYd*(Yd*mq2*Yd.adjoint()*Yd*Yd.adjoint()) + 4.*traceAdjYeYe*(Yd*
      mq2*Yd.adjoint()*Yd*Yd.adjoint()) - 0.6666666666666666*Sqr(g1)*(Yd*mq2*
      Yd.adjoint()*Yd*Yd.adjoint()) + 18.*Sqr(g2)*(Yd*mq2*Yd.adjoint()*Yd*
      Yd.adjoint()) + 42.666666666666664*Sqr(g3)*(Yd*mq2*Yd.adjoint()*Yd*
      Yd.adjoint()) - 12.*traceAdjYdYd*(Yd*mq2*Yu.adjoint()*Yu*Yd.adjoint()) -
      4.*traceAdjYeYe*(Yd*mq2*Yu.adjoint()*Yu*Yd.adjoint()) + 24.*traceAdjYuYu*
      (Yd*mq2*Yu.adjoint()*Yu*Yd.adjoint()) - 3.8666666666666663*Sqr(g1)*(Yd*
      mq2*Yu.adjoint()*Yu*Yd.adjoint()) + 18.*Sqr(g2)*(Yd*mq2*Yu.adjoint()*Yu*
      Yd.adjoint()) + 42.666666666666664*Sqr(g3)*(Yd*mq2*Yu.adjoint()*Yu*
      Yd.adjoint()) + 12.*traceAdjYdYd*(Yd*Yd.adjoint()*md2*Yd*Yd.adjoint()) +
      4.*traceAdjYeYe*(Yd*Yd.adjoint()*md2*Yd*Yd.adjoint()) -
      0.6666666666666666*Sqr(g1)*(Yd*Yd.adjoint()*md2*Yd*Yd.adjoint()) + 18.*
      Sqr(g2)*(Yd*Yd.adjoint()*md2*Yd*Yd.adjoint()) + 42.666666666666664*Sqr(g3
      )*(Yd*Yd.adjoint()*md2*Yd*Yd.adjoint()) + 12.*traceAdjYdYd*(Yd*Yd.adjoint
      ()*Yd*mq2*Yd.adjoint()) + 4.*traceAdjYeYe*(Yd*Yd.adjoint()*Yd*mq2*
      Yd.adjoint()) - 0.6666666666666666*Sqr(g1)*(Yd*Yd.adjoint()*Yd*mq2*
      Yd.adjoint()) + 18.*Sqr(g2)*(Yd*Yd.adjoint()*Yd*mq2*Yd.adjoint()) +
      42.666666666666664*Sqr(g3)*(Yd*Yd.adjoint()*Yd*mq2*Yd.adjoint()))*
      UNITMATRIX(3)).real();
   const Eigen::Matrix<double,3,3> beta_md2_7 = (threeLoop*((Sqr(g1)*(4.8
      *mHd2 + 4.8*Sqr(MassB)) + Sqr(g2)*(-72.*mHd2 - 72.*Sqr(MassWB)))*(Yd*
      Yd.adjoint()*Yd*Yd.adjoint()*1.2020569031595942) + (6.*traceAdjYdYd + 2.*
      traceAdjYeYe - 0.3333333333333333*Sqr(g1) + 9.*Sqr(g2) +
      21.333333333333332*Sqr(g3))*(Yd*Yd.adjoint()*Yd*Yd.adjoint()*md2) - 2.4*
      MassB*Sqr(g1)*(Yd*Yd.adjoint()*Yd*(TYd).adjoint()*1.2020569031595942) +
      36.*MassWB*Sqr(g2)*(Yd*Yd.adjoint()*Yd*(TYd).adjoint()*1.2020569031595942
      ) - 2.4*MassB*Sqr(g1)*(Yd*Yd.adjoint()*TYd*Yd.adjoint()*
      1.2020569031595942) + 36.*MassWB*Sqr(g2)*(Yd*Yd.adjoint()*TYd*Yd.adjoint(
      )*1.2020569031595942) + 2.4*Sqr(g1)*(Yd*Yd.adjoint()*TYd*(TYd).adjoint()*
      1.2020569031595942) - 36.*Sqr(g2)*(Yd*Yd.adjoint()*TYd*(TYd).adjoint()*
      1.2020569031595942) - 12.*traceAdjYdYd*(Yd*Yu.adjoint()*mu2*Yu*Yd.adjoint
      ()) - 4.*traceAdjYeYe*(Yd*Yu.adjoint()*mu2*Yu*Yd.adjoint()) + 24.*
      traceAdjYuYu*(Yd*Yu.adjoint()*mu2*Yu*Yd.adjoint()) - 3.8666666666666663*
      Sqr(g1)*(Yd*Yu.adjoint()*mu2*Yu*Yd.adjoint()) + 18.*Sqr(g2)*(Yd*
      Yu.adjoint()*mu2*Yu*Yd.adjoint()) + 42.666666666666664*Sqr(g3)*(Yd*
      Yu.adjoint()*mu2*Yu*Yd.adjoint()) - 12.*traceAdjYdYd*(Yd*Yu.adjoint()*Yu*
      mq2*Yd.adjoint()) - 4.*traceAdjYeYe*(Yd*Yu.adjoint()*Yu*mq2*Yd.adjoint())
      + 24.*traceAdjYuYu*(Yd*Yu.adjoint()*Yu*mq2*Yd.adjoint()) -
      3.8666666666666663*Sqr(g1)*(Yd*Yu.adjoint()*Yu*mq2*Yd.adjoint()) + 18.*
      Sqr(g2)*(Yd*Yu.adjoint()*Yu*mq2*Yd.adjoint()) + 42.666666666666664*Sqr(g3
      )*(Yd*Yu.adjoint()*Yu*mq2*Yd.adjoint()) + 7.200000000000001*mHd2*Sqr(g1)*
      (Yd*Yu.adjoint()*Yu*Yd.adjoint()*1.2020569031595942) + 7.200000000000001*
      mHu2*Sqr(g1)*(Yd*Yu.adjoint()*Yu*Yd.adjoint()*1.2020569031595942) - 36.*
      mHd2*Sqr(g2)*(Yd*Yu.adjoint()*Yu*Yd.adjoint()*1.2020569031595942) - 36.*
      mHu2*Sqr(g2)*(Yd*Yu.adjoint()*Yu*Yd.adjoint()*1.2020569031595942) +
      14.400000000000002*Sqr(g1)*Sqr(MassB)*(Yd*Yu.adjoint()*Yu*Yd.adjoint()*
      1.2020569031595942) - 72.*Sqr(g2)*Sqr(MassWB)*(Yd*Yu.adjoint()*Yu*
      Yd.adjoint()*1.2020569031595942) - 6.*traceAdjYdYd*(Yd*Yu.adjoint()*Yu*
      Yd.adjoint()*md2) - 2.*traceAdjYeYe*(Yd*Yu.adjoint()*Yu*Yd.adjoint()*md2)
      + 12.*traceAdjYuYu*(Yd*Yu.adjoint()*Yu*Yd.adjoint()*md2) -
      1.9333333333333331*Sqr(g1)*(Yd*Yu.adjoint()*Yu*Yd.adjoint()*md2) + 9.*Sqr
      (g2)*(Yd*Yu.adjoint()*Yu*Yd.adjoint()*md2) + 21.333333333333332*Sqr(g3)*(
      Yd*Yu.adjoint()*Yu*Yd.adjoint()*md2) - 7.200000000000001*MassB*Sqr(g1)*(
      Yd*Yu.adjoint()*Yu*(TYd).adjoint()*1.2020569031595942) + 36.*MassWB*Sqr(
      g2)*(Yd*Yu.adjoint()*Yu*(TYd).adjoint()*1.2020569031595942) -
      7.200000000000001*MassB*Sqr(g1)*(Yd*Yu.adjoint()*TYu*Yd.adjoint()*
      1.2020569031595942) + 36.*MassWB*Sqr(g2)*(Yd*Yu.adjoint()*TYu*Yd.adjoint(
      )*1.2020569031595942) + 7.200000000000001*Sqr(g1)*(Yd*Yu.adjoint()*TYu*(
      TYd).adjoint()*1.2020569031595942) - 36.*Sqr(g2)*(Yd*Yu.adjoint()*TYu*(
      TYd).adjoint()*1.2020569031595942) - 2.4*MassB*Sqr(g1)*(Yd*(TYd).adjoint(
      )*Yd*Yd.adjoint()*1.2020569031595942) + 36.*MassWB*Sqr(g2)*(Yd*(TYd)
      .adjoint()*Yd*Yd.adjoint()*1.2020569031595942) + 2.4*Sqr(g1)*(Yd*(TYd)
      .adjoint()*TYd*Yd.adjoint()*1.2020569031595942) - 36.*Sqr(g2)*(Yd*(TYd)
      .adjoint()*TYd*Yd.adjoint()*1.2020569031595942) - 7.200000000000001*MassB
      *Sqr(g1)*(Yd*(TYu).adjoint()*Yu*Yd.adjoint()*1.2020569031595942) + 36.*
      MassWB*Sqr(g2)*(Yd*(TYu).adjoint()*Yu*Yd.adjoint()*1.2020569031595942) +
      7.200000000000001*Sqr(g1)*(Yd*(TYu).adjoint()*TYu*Yd.adjoint()*
      1.2020569031595942) - 36.*Sqr(g2)*(Yd*(TYu).adjoint()*TYu*Yd.adjoint()*
      1.2020569031595942) - 2.4*MassB*Sqr(g1)*(TYd*Yd.adjoint()*Yd*Yd.adjoint()
      *1.2020569031595942) + 36.*MassWB*Sqr(g2)*(TYd*Yd.adjoint()*Yd*Yd.adjoint
      ()*1.2020569031595942) + 2.4*Sqr(g1)*(TYd*Yd.adjoint()*Yd*(TYd).adjoint()
      *1.2020569031595942) - 36.*Sqr(g2)*(TYd*Yd.adjoint()*Yd*(TYd).adjoint()*
      1.2020569031595942) - 7.200000000000001*MassB*Sqr(g1)*(TYd*Yu.adjoint()*
      Yu*Yd.adjoint()*1.2020569031595942) + 36.*MassWB*Sqr(g2)*(TYd*Yu.adjoint(
      )*Yu*Yd.adjoint()*1.2020569031595942) + 7.200000000000001*Sqr(g1)*(TYd*
      Yu.adjoint()*Yu*(TYd).adjoint()*1.2020569031595942) - 36.*Sqr(g2)*(TYd*
      Yu.adjoint()*Yu*(TYd).adjoint()*1.2020569031595942) + 2.4*Sqr(g1)*(TYd*(
      TYd).adjoint()*Yd*Yd.adjoint()*1.2020569031595942) - 36.*Sqr(g2)*(TYd*(
      TYd).adjoint()*Yd*Yd.adjoint()*1.2020569031595942) + 7.200000000000001*
      Sqr(g1)*(TYd*(TYu).adjoint()*Yu*Yd.adjoint()*1.2020569031595942) - 36.*
      Sqr(g2)*(TYd*(TYu).adjoint()*Yu*Yd.adjoint()*1.2020569031595942) + 1.2*
      Sqr(g1)*(md2*Yd*Yd.adjoint()*Yd*Yd.adjoint()*1.2020569031595942) - 18.*
      Sqr(g2)*(md2*Yd*Yd.adjoint()*Yd*Yd.adjoint()*1.2020569031595942) +
      3.6000000000000005*Sqr(g1)*(md2*Yd*Yu.adjoint()*Yu*Yd.adjoint()*
      1.2020569031595942) - 18.*Sqr(g2)*(md2*Yd*Yu.adjoint()*Yu*Yd.adjoint()*
      1.2020569031595942) + 2.4*Sqr(g1)*(Yd*mq2*Yd.adjoint()*Yd*Yd.adjoint()*
      1.2020569031595942) - 36.*Sqr(g2)*(Yd*mq2*Yd.adjoint()*Yd*Yd.adjoint()*
      1.2020569031595942) + 7.200000000000001*Sqr(g1)*(Yd*mq2*Yu.adjoint()*Yu*
      Yd.adjoint()*1.2020569031595942) - 36.*Sqr(g2)*(Yd*mq2*Yu.adjoint()*Yu*
      Yd.adjoint()*1.2020569031595942) + 2.4*Sqr(g1)*(Yd*Yd.adjoint()*md2*Yd*
      Yd.adjoint()*1.2020569031595942) - 36.*Sqr(g2)*(Yd*Yd.adjoint()*md2*Yd*
      Yd.adjoint()*1.2020569031595942) + 2.4*Sqr(g1)*(Yd*Yd.adjoint()*Yd*mq2*
      Yd.adjoint()*1.2020569031595942) - 36.*Sqr(g2)*(Yd*Yd.adjoint()*Yd*mq2*
      Yd.adjoint()*1.2020569031595942) + 1.2*Sqr(g1)*(Yd*Yd.adjoint()*Yd*
      Yd.adjoint()*md2*1.2020569031595942) - 18.*Sqr(g2)*(Yd*Yd.adjoint()*Yd*
      Yd.adjoint()*md2*1.2020569031595942) + 36.*mHd2*(Yd*Yd.adjoint()*Yd*
      Yd.adjoint()*Yd*Yd.adjoint()) + 12.*(Yd*Yd.adjoint()*Yd*Yd.adjoint()*TYd*
      (TYd).adjoint()) - 8.*mHd2*(Yd*Yd.adjoint()*Yd*Yu.adjoint()*Yu*Yd.adjoint
      ()) - 4.*mHu2*(Yd*Yd.adjoint()*Yd*Yu.adjoint()*Yu*Yd.adjoint()) - 4.*(Yd*
      Yd.adjoint()*Yd*Yu.adjoint()*TYu*(TYd).adjoint()) + 12.*(Yd*Yd.adjoint()*
      Yd*(TYd).adjoint()*TYd*Yd.adjoint()) - 4.*(Yd*Yd.adjoint()*Yd*(TYu)
      .adjoint()*TYu*Yd.adjoint()) + 12.*(Yd*Yd.adjoint()*TYd*Yd.adjoint()*Yd*(
      TYd).adjoint()) - 4.*(Yd*Yd.adjoint()*TYd*Yu.adjoint()*Yu*(TYd).adjoint()
      ) + 12.*(Yd*Yd.adjoint()*TYd*(TYd).adjoint()*Yd*Yd.adjoint()) - 4.*(Yd*
      Yd.adjoint()*TYd*(TYu).adjoint()*Yu*Yd.adjoint()) + 7.200000000000001*Sqr
      (g1)*(Yd*Yu.adjoint()*mu2*Yu*Yd.adjoint()*1.2020569031595942) - 36.*Sqr(
      g2)*(Yd*Yu.adjoint()*mu2*Yu*Yd.adjoint()*1.2020569031595942) +
      7.200000000000001*Sqr(g1)*(Yd*Yu.adjoint()*Yu*mq2*Yd.adjoint()*
      1.2020569031595942) - 36.*Sqr(g2)*(Yd*Yu.adjoint()*Yu*mq2*Yd.adjoint()*
      1.2020569031595942) + 3.6000000000000005*Sqr(g1)*(Yd*Yu.adjoint()*Yu*
      Yd.adjoint()*md2*1.2020569031595942) - 18.*Sqr(g2)*(Yd*Yu.adjoint()*Yu*
      Yd.adjoint()*md2*1.2020569031595942) - 8.*mHd2*(Yd*Yu.adjoint()*Yu*
      Yd.adjoint()*Yd*Yd.adjoint()) - 4.*mHu2*(Yd*Yu.adjoint()*Yu*Yd.adjoint()*
      Yd*Yd.adjoint()) - 4.*(Yd*Yu.adjoint()*Yu*Yd.adjoint()*TYd*(TYd).adjoint(
      )) + 12.*mHd2*(Yd*Yu.adjoint()*Yu*Yu.adjoint()*Yu*Yd.adjoint()))*
      UNITMATRIX(3)).real();
   const Eigen::Matrix<double,3,3> beta_md2_8 = (threeLoop*(24.*mHu2*(Yd*
      Yu.adjoint()*Yu*Yu.adjoint()*Yu*Yd.adjoint()) + 12.*(Yd*Yu.adjoint()*Yu*
      Yu.adjoint()*TYu*(TYd).adjoint()) - 4.*(Yd*Yu.adjoint()*Yu*(TYd).adjoint(
      )*TYd*Yd.adjoint()) + 12.*(Yd*Yu.adjoint()*Yu*(TYu).adjoint()*TYu*
      Yd.adjoint()) - 4.*(Yd*Yu.adjoint()*TYu*Yd.adjoint()*Yd*(TYd).adjoint())
      + 12.*(Yd*Yu.adjoint()*TYu*Yu.adjoint()*Yu*(TYd).adjoint()) - 4.*(Yd*
      Yu.adjoint()*TYu*(TYd).adjoint()*Yd*Yd.adjoint()) + 12.*(Yd*Yu.adjoint()*
      TYu*(TYu).adjoint()*Yu*Yd.adjoint()) + 12.*(Yd*(TYd).adjoint()*Yd*
      Yd.adjoint()*TYd*Yd.adjoint()) - 4.*(Yd*(TYd).adjoint()*Yd*Yu.adjoint()*
      TYu*Yd.adjoint()) + 12.*(Yd*(TYd).adjoint()*TYd*Yd.adjoint()*Yd*
      Yd.adjoint()) - 4.*(Yd*(TYd).adjoint()*TYd*Yu.adjoint()*Yu*Yd.adjoint())
      - 4.*(Yd*(TYu).adjoint()*Yu*Yd.adjoint()*TYd*Yd.adjoint()) + 12.*(Yd*(TYu
      ).adjoint()*Yu*Yu.adjoint()*TYu*Yd.adjoint()) - 4.*(Yd*(TYu).adjoint()*
      TYu*Yd.adjoint()*Yd*Yd.adjoint()) + 12.*(Yd*(TYu).adjoint()*TYu*
      Yu.adjoint()*Yu*Yd.adjoint()) + 12.*(TYd*Yd.adjoint()*Yd*Yd.adjoint()*Yd*
      (TYd).adjoint()) - 4.*(TYd*Yd.adjoint()*Yd*Yu.adjoint()*Yu*(TYd).adjoint(
      )) + 12.*(TYd*Yd.adjoint()*Yd*(TYd).adjoint()*Yd*Yd.adjoint()) - 4.*(TYd*
      Yd.adjoint()*Yd*(TYu).adjoint()*Yu*Yd.adjoint()) - 4.*(TYd*Yu.adjoint()*
      Yu*Yd.adjoint()*Yd*(TYd).adjoint()) + 12.*(TYd*Yu.adjoint()*Yu*Yu.adjoint
      ()*Yu*(TYd).adjoint()) - 4.*(TYd*Yu.adjoint()*Yu*(TYd).adjoint()*Yd*
      Yd.adjoint()) + 12.*(TYd*Yu.adjoint()*Yu*(TYu).adjoint()*Yu*Yd.adjoint())
      + 12.*(TYd*(TYd).adjoint()*Yd*Yd.adjoint()*Yd*Yd.adjoint()) - 4.*(TYd*(
      TYd).adjoint()*Yd*Yu.adjoint()*Yu*Yd.adjoint()) - 4.*(TYd*(TYu).adjoint()
      *Yu*Yd.adjoint()*Yd*Yd.adjoint()) + 12.*(TYd*(TYu).adjoint()*Yu*
      Yu.adjoint()*Yu*Yd.adjoint()) + 6.*(md2*Yd*Yd.adjoint()*Yd*Yd.adjoint()*
      Yd*Yd.adjoint()) - 2.*(md2*Yd*Yd.adjoint()*Yd*Yu.adjoint()*Yu*Yd.adjoint(
      )) - 2.*(md2*Yd*Yu.adjoint()*Yu*Yd.adjoint()*Yd*Yd.adjoint()) + 6.*(md2*
      Yd*Yu.adjoint()*Yu*Yu.adjoint()*Yu*Yd.adjoint()) + 12.*(Yd*mq2*Yd.adjoint
      ()*Yd*Yd.adjoint()*Yd*Yd.adjoint()) - 4.*(Yd*mq2*Yd.adjoint()*Yd*
      Yu.adjoint()*Yu*Yd.adjoint()) - 4.*(Yd*mq2*Yu.adjoint()*Yu*Yd.adjoint()*
      Yd*Yd.adjoint()) + 12.*(Yd*mq2*Yu.adjoint()*Yu*Yu.adjoint()*Yu*Yd.adjoint
      ()) + 12.*(Yd*Yd.adjoint()*md2*Yd*Yd.adjoint()*Yd*Yd.adjoint()) - 4.*(Yd*
      Yd.adjoint()*md2*Yd*Yu.adjoint()*Yu*Yd.adjoint()) + 12.*(Yd*Yd.adjoint()*
      Yd*mq2*Yd.adjoint()*Yd*Yd.adjoint()) - 4.*(Yd*Yd.adjoint()*Yd*mq2*
      Yu.adjoint()*Yu*Yd.adjoint()) + 12.*(Yd*Yd.adjoint()*Yd*Yd.adjoint()*md2*
      Yd*Yd.adjoint()) + 12.*(Yd*Yd.adjoint()*Yd*Yd.adjoint()*Yd*mq2*Yd.adjoint
      ()) + 72.*mHd2*(Yd*Yd.adjoint()*Yd*Yd.adjoint()*Yd*Yd.adjoint()*
      1.2020569031595942) + 6.*(Yd*Yd.adjoint()*Yd*Yd.adjoint()*Yd*Yd.adjoint()
      *md2) + 24.*(Yd*Yd.adjoint()*Yd*Yd.adjoint()*TYd*(TYd).adjoint()*
      1.2020569031595942) - 4.*(Yd*Yd.adjoint()*Yd*Yu.adjoint()*mu2*Yu*
      Yd.adjoint()) - 4.*(Yd*Yd.adjoint()*Yd*Yu.adjoint()*Yu*mq2*Yd.adjoint())
      - 2.*(Yd*Yd.adjoint()*Yd*Yu.adjoint()*Yu*Yd.adjoint()*md2) + 24.*(Yd*
      Yd.adjoint()*Yd*(TYd).adjoint()*TYd*Yd.adjoint()*1.2020569031595942) +
      24.*(Yd*Yd.adjoint()*TYd*Yd.adjoint()*Yd*(TYd).adjoint()*
      1.2020569031595942) + 24.*(Yd*Yd.adjoint()*TYd*(TYd).adjoint()*Yd*
      Yd.adjoint()*1.2020569031595942) - 4.*(Yd*Yu.adjoint()*mu2*Yu*Yd.adjoint(
      )*Yd*Yd.adjoint()) + 12.*(Yd*Yu.adjoint()*mu2*Yu*Yu.adjoint()*Yu*
      Yd.adjoint()) - 4.*(Yd*Yu.adjoint()*Yu*mq2*Yd.adjoint()*Yd*Yd.adjoint())
      + 12.*(Yd*Yu.adjoint()*Yu*mq2*Yu.adjoint()*Yu*Yd.adjoint()) - 4.*(Yd*
      Yu.adjoint()*Yu*Yd.adjoint()*md2*Yd*Yd.adjoint()) - 4.*(Yd*Yu.adjoint()*
      Yu*Yd.adjoint()*Yd*mq2*Yd.adjoint()) - 2.*(Yd*Yu.adjoint()*Yu*Yd.adjoint(
      )*Yd*Yd.adjoint()*md2) + 12.*(Yd*Yu.adjoint()*Yu*Yu.adjoint()*mu2*Yu*
      Yd.adjoint()) + 12.*(Yd*Yu.adjoint()*Yu*Yu.adjoint()*Yu*mq2*Yd.adjoint())
      + 6.*(Yd*Yu.adjoint()*Yu*Yu.adjoint()*Yu*Yd.adjoint()*md2) + 24.*(Yd*(
      TYd).adjoint()*Yd*Yd.adjoint()*TYd*Yd.adjoint()*1.2020569031595942) + 24.
      *(Yd*(TYd).adjoint()*TYd*Yd.adjoint()*Yd*Yd.adjoint()*1.2020569031595942)
      + 24.*(TYd*Yd.adjoint()*Yd*Yd.adjoint()*Yd*(TYd).adjoint()*
      1.2020569031595942) + 24.*(TYd*Yd.adjoint()*Yd*(TYd).adjoint()*Yd*
      Yd.adjoint()*1.2020569031595942) + 24.*(TYd*(TYd).adjoint()*Yd*Yd.adjoint
      ()*Yd*Yd.adjoint()*1.2020569031595942) + 12.*(md2*Yd*Yd.adjoint()*Yd*
      Yd.adjoint()*Yd*Yd.adjoint()*1.2020569031595942) + 24.*(Yd*mq2*Yd.adjoint
      ()*Yd*Yd.adjoint()*Yd*Yd.adjoint()*1.2020569031595942) + 24.*(Yd*
      Yd.adjoint()*md2*Yd*Yd.adjoint()*Yd*Yd.adjoint()*1.2020569031595942) +
      24.*(Yd*Yd.adjoint()*Yd*mq2*Yd.adjoint()*Yd*Yd.adjoint()*
      1.2020569031595942) + 24.*(Yd*Yd.adjoint()*Yd*Yd.adjoint()*md2*Yd*
      Yd.adjoint()*1.2020569031595942) + 24.*(Yd*Yd.adjoint()*Yd*Yd.adjoint()*
      Yd*mq2*Yd.adjoint()*1.2020569031595942) + 12.*(Yd*Yd.adjoint()*Yd*
      Yd.adjoint()*Yd*Yd.adjoint()*md2*1.2020569031595942))*UNITMATRIX(3)).real
      ();

   beta_md2 = beta_md2_1 + beta_md2_2 + beta_md2_3 + beta_md2_4 +
      beta_md2_5 + beta_md2_6 + beta_md2_7 + beta_md2_8;


   return beta_md2;
}

} // namespace flexiblesusy
