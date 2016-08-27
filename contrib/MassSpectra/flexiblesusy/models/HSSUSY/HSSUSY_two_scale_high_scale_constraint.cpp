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

// File generated at Sat 27 Aug 2016 12:40:37

#include "HSSUSY_two_scale_high_scale_constraint.hpp"
#include "HSSUSY_two_scale_model.hpp"
#include "wrappers.hpp"
#include "logger.hpp"
#include "ew_input.hpp"
#include "gsl_utils.hpp"
#include "minimizer.hpp"
#include "root_finder.hpp"
#include "threshold_loop_functions.hpp"
#include "numerics2.hpp"

#include <cassert>
#include <cmath>
#include <cerrno>
#include <cstring>

namespace flexiblesusy {

#define DERIVEDPARAMETER(p) model->p()
#define INPUTPARAMETER(p) model->get_input().p
#define MODELPARAMETER(p) model->get_##p()
#define PHASE(p) model->get_##p()
#define BETAPARAMETER(p) beta_functions.get_##p()
#define BETA(p) beta_##p
#define LowEnergyConstant(p) Electroweak_constants::p
#define MZPole Electroweak_constants::MZ
#define STANDARDDEVIATION(p) Electroweak_constants::Error_##p
#define Pole(p) model->get_physical().p
#define SCALE model->get_scale()
#define THRESHOLD static_cast<int>(model->get_thresholds())
#define MODEL model
#define MODELCLASSNAME HSSUSY<Two_scale>

HSSUSY_high_scale_constraint<Two_scale>::HSSUSY_high_scale_constraint()
   : Constraint<Two_scale>()
   , scale(0.)
   , initial_scale_guess(0.)
   , model(0)
{
}

HSSUSY_high_scale_constraint<Two_scale>::HSSUSY_high_scale_constraint(
   HSSUSY<Two_scale>* model_)
   : Constraint<Two_scale>()
   , model(model_)
{
   initialize();
}

HSSUSY_high_scale_constraint<Two_scale>::~HSSUSY_high_scale_constraint()
{
}

void HSSUSY_high_scale_constraint<Two_scale>::apply()
{
   assert(model && "Error: HSSUSY_high_scale_constraint::apply():"
          " model pointer must not be zero");



   update_scale();

   const auto TanBeta = INPUTPARAMETER(TanBeta);
   const auto LambdaLoopOrder = INPUTPARAMETER(LambdaLoopOrder);
   const auto M3Input = INPUTPARAMETER(M3Input);
   const auto AtInput = INPUTPARAMETER(AtInput);
   const auto MuInput = INPUTPARAMETER(MuInput);
   const auto M2Input = INPUTPARAMETER(M2Input);
   const auto M1Input = INPUTPARAMETER(M1Input);
   const auto mAInput = INPUTPARAMETER(mAInput);
   const auto msq2 = INPUTPARAMETER(msq2);
   const auto msu2 = INPUTPARAMETER(msu2);
   const auto mse2 = INPUTPARAMETER(mse2);
   const auto msl2 = INPUTPARAMETER(msl2);
   const auto msd2 = INPUTPARAMETER(msd2);
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto g3 = MODELPARAMETER(g3);
   const auto Yu = MODELPARAMETER(Yu);
   const auto Ye = MODELPARAMETER(Ye);
   const auto Yd = MODELPARAMETER(Yd);

   MODEL->set_Lambdax(Re(0.25*(0.6*Sqr(g1) + Sqr(g2))*Sqr(Cos(2*ArcTan(TanBeta)
      )) + UnitStep(-2 + LambdaLoopOrder)*UnitStep(-2 + THRESHOLD)*(Which(
      IsCloseRel(Sqr(SCALE),msq2(2,2),0.01) && IsCloseRel(Sqr(SCALE),msu2(2,2),
      0.01) && IsCloseRel(SCALE,M3Input,0.01), 0.00010693731515296183*Sqr(g3)*((
      -12*(AtInput - MuInput/TanBeta))/SCALE + (14*Power(AtInput - MuInput/TanBeta
      ,3))/Power(SCALE,3) + (0.5*Power(AtInput - MuInput/TanBeta,4))/Power(SCALE,4
      ) - Power(AtInput - MuInput/TanBeta,5)/Power(SCALE,5) - (6*Sqr(AtInput -
      MuInput/TanBeta))/Sqr(SCALE))*Power(Yu(2,2),4), IsCloseRel(Sqr(M3Input),msq2
      (2,2),0.01) && IsCloseRel(Sqr(M3Input),msu2(2,2),0.01),
      -0.000053468657576480914*Sqr(g3)*(((AtInput - MuInput/TanBeta)*(24 + (12*(
      AtInput - MuInput/TanBeta))/M3Input - Power(AtInput - MuInput/TanBeta,3)
      /Power(M3Input,3) + (2*Power(AtInput - MuInput/TanBeta,4))/Power(M3Input,4)
      - (28*Sqr(AtInput - MuInput/TanBeta))/Sqr(M3Input)))/M3Input - (2*(AtInput -
      MuInput/TanBeta)*Log(Sqr(M3Input)/Sqr(SCALE))*(24 - (24*(AtInput -
      MuInput/TanBeta))/M3Input + Power(AtInput - MuInput/TanBeta,3)/Power(M3Input
      ,3) - (4*Sqr(AtInput - MuInput/TanBeta))/Sqr(M3Input)))/M3Input + 36*Sqr(Log
      (Power(M3Input,2)/Sqr(SCALE))))*Power(Yu(2,2),4), IsCloseRel(Sqr(M3Input),
      msq2(2,2),0.01), (-0.00016040597272944275*Sqr(g3)*Sqr(M3Input)*(4 + (4*Power
      (AtInput - MuInput/TanBeta,4))/Power(M3Input,4) - (32*(AtInput -
      MuInput/TanBeta)*msu2(2,2))/Power(M3Input,3) - (64*Power(AtInput -
      MuInput/TanBeta,3)*msu2(2,2))/Power(M3Input,5) + (14*Power(AtInput -
      MuInput/TanBeta,4)*msu2(2,2))/Power(M3Input,6) + (16*Power(AtInput -
      MuInput/TanBeta,5)*msu2(2,2))/Power(M3Input,7) + (24*(AtInput -
      MuInput/TanBeta)*Log(msu2(2,2)/Sqr(M3Input))*msu2(2,2))/Power(M3Input,3) - (
      32*Power(AtInput - MuInput/TanBeta,3)*Log(msu2(2,2)/Sqr(M3Input))*msu2(2,2))
      /Power(M3Input,5) + (19*Power(AtInput - MuInput/TanBeta,4)*Log(msu2(2,2)/Sqr
      (M3Input))*msu2(2,2))/Power(M3Input,6) + (8*Power(AtInput - MuInput/TanBeta,
      5)*Log(msu2(2,2)/Sqr(M3Input))*msu2(2,2))/Power(M3Input,7) - (82*Power(msu2(
      2,2),3))/Power(M3Input,6) - (192*(AtInput - MuInput/TanBeta)*Power(msu2(2,2)
      ,3))/Power(M3Input,7) - (192*Power(AtInput - MuInput/TanBeta,3)*Power(msu2(2
      ,2),3))/Power(M3Input,9) + (66*Power(AtInput - MuInput/TanBeta,4)*Power(msu2
      (2,2),3))/Power(M3Input,10) + (16*Power(AtInput - MuInput/TanBeta,5)*Power(
      msu2(2,2),3))/Power(M3Input,11) + (60*Log(msu2(2,2)/Sqr(M3Input))*Power(msu2
      (2,2),3))/Power(M3Input,6) + (144*(AtInput - MuInput/TanBeta)*Log(msu2(2,2)
      /Sqr(M3Input))*Power(msu2(2,2),3))/Power(M3Input,7) + (32*Power(AtInput -
      MuInput/TanBeta,3)*Log(msu2(2,2)/Sqr(M3Input))*Power(msu2(2,2),3))/Power(
      M3Input,9) - (47*Power(AtInput - MuInput/TanBeta,4)*Log(msu2(2,2)/Sqr(
      M3Input))*Power(msu2(2,2),3))/Power(M3Input,10) - (24*Power(AtInput -
      MuInput/TanBeta,5)*Log(msu2(2,2)/Sqr(M3Input))*Power(msu2(2,2),3))/Power(
      M3Input,11) + (58*Power(msu2(2,2),4))/Power(M3Input,8) + (128*(AtInput -
      MuInput/TanBeta)*Power(msu2(2,2),4))/Power(M3Input,9) + (64*Power(AtInput -
      MuInput/TanBeta,3)*Power(msu2(2,2),4))/Power(M3Input,11) - (22*Power(AtInput
      - MuInput/TanBeta,4)*Power(msu2(2,2),4))/Power(M3Input,12) - (44*Log(msu2(2
      ,2)/Sqr(M3Input))*Power(msu2(2,2),4))/Power(M3Input,8) - (96*(AtInput -
      MuInput/TanBeta)*Log(msu2(2,2)/Sqr(M3Input))*Power(msu2(2,2),4))/Power(
      M3Input,9) - (32*Power(AtInput - MuInput/TanBeta,3)*Log(msu2(2,2)/Sqr(
      M3Input))*Power(msu2(2,2),4))/Power(M3Input,11) + (29*Power(AtInput -
      MuInput/TanBeta,4)*Log(msu2(2,2)/Sqr(M3Input))*Power(msu2(2,2),4))/Power(
      M3Input,12) - (21*Power(msu2(2,2),5))/Power(M3Input,10) - (32*(AtInput -
      MuInput/TanBeta)*Power(msu2(2,2),5))/Power(M3Input,11) + (17*Log(msu2(2,2)
      /Sqr(M3Input))*Power(msu2(2,2),5))/Power(M3Input,10) + (24*(AtInput -
      MuInput/TanBeta)*Log(msu2(2,2)/Sqr(M3Input))*Power(msu2(2,2),5))/Power(
      M3Input,11) + (3*Power(msu2(2,2),6))/Power(M3Input,12) - (3*Log(msu2(2,2)
      /Sqr(M3Input))*Power(msu2(2,2),6))/Power(M3Input,12) - (25*msu2(2,2))/Sqr(
      M3Input) + (11*Log(msu2(2,2)/Sqr(M3Input))*msu2(2,2))/Sqr(M3Input) + (4*(2 +
      (8*(AtInput - MuInput/TanBeta))/M3Input + (4*Power(AtInput -
      MuInput/TanBeta,3))/Power(M3Input,3) + Power(AtInput - MuInput/TanBeta,4)
      /Power(M3Input,4))*msu2(2,2)*PolyLog(2,((-1 + msu2(2,2)/Sqr(M3Input))*Sqr(
      M3Input))/msu2(2,2))*Power(-1 + msu2(2,2)/Sqr(M3Input),3))/Sqr(M3Input) + (
      32*msu2(2,2)*Sqr(AtInput - MuInput/TanBeta))/Power(M3Input,4) - (22*Log(msu2
      (2,2)/Sqr(M3Input))*msu2(2,2)*Sqr(AtInput - MuInput/TanBeta))/Power(M3Input,
      4) + (32*Power(msu2(2,2),3)*Sqr(AtInput - MuInput/TanBeta))/Power(M3Input,8)
      - (96*Log(msu2(2,2)/Sqr(M3Input))*Power(msu2(2,2),3)*Sqr(AtInput -
      MuInput/TanBeta))/Power(M3Input,8) - (8*Power(msu2(2,2),4)*Sqr(AtInput -
      MuInput/TanBeta))/Power(M3Input,10) + (52*Log(msu2(2,2)/Sqr(M3Input))*Power(
      msu2(2,2),4)*Sqr(AtInput - MuInput/TanBeta))/Power(M3Input,10) - (10*Log(
      msu2(2,2)/Sqr(M3Input))*Power(msu2(2,2),5)*Sqr(AtInput - MuInput/TanBeta))
      /Power(M3Input,12) - (8*Sqr(AtInput - MuInput/TanBeta))/Sqr(M3Input) - (16*(
      AtInput - MuInput/TanBeta)*msu2(2,2)*Sqr(Log(msu2(2,2)/Sqr(M3Input))))/Power
      (M3Input,3) - (8*Power(AtInput - MuInput/TanBeta,3)*msu2(2,2)*Sqr(Log(msu2(2
      ,2)/Sqr(M3Input))))/Power(M3Input,5) - (4*Power(AtInput - MuInput/TanBeta,4)
      *msu2(2,2)*Sqr(Log(msu2(2,2)/Sqr(M3Input))))/Power(M3Input,6) - (46*Power(
      msu2(2,2),3)*Sqr(Log(msu2(2,2)/Sqr(M3Input))))/Power(M3Input,6) - (72*(
      AtInput - MuInput/TanBeta)*Power(msu2(2,2),3)*Sqr(Log(msu2(2,2)/Sqr(M3Input)
      )))/Power(M3Input,7) + (8*Power(AtInput - MuInput/TanBeta,3)*Power(msu2(2,2)
      ,3)*Sqr(Log(msu2(2,2)/Sqr(M3Input))))/Power(M3Input,9) - (2*Power(AtInput -
      MuInput/TanBeta,4)*Power(msu2(2,2),3)*Sqr(Log(msu2(2,2)/Sqr(M3Input))))
      /Power(M3Input,10) + (8*Power(AtInput - MuInput/TanBeta,5)*Power(msu2(2,2),3
      )*Sqr(Log(msu2(2,2)/Sqr(M3Input))))/Power(M3Input,11) + (42*Power(msu2(2,2),
      4)*Sqr(Log(msu2(2,2)/Sqr(M3Input))))/Power(M3Input,8) + (40*(AtInput -
      MuInput/TanBeta)*Power(msu2(2,2),4)*Sqr(Log(msu2(2,2)/Sqr(M3Input))))/Power(
      M3Input,9) - (8*Power(AtInput - MuInput/TanBeta,3)*Power(msu2(2,2),4)*Sqr(
      Log(msu2(2,2)/Sqr(M3Input))))/Power(M3Input,11) - (10*Power(AtInput -
      MuInput/TanBeta,4)*Power(msu2(2,2),4)*Sqr(Log(msu2(2,2)/Sqr(M3Input))))
      /Power(M3Input,12) - (20*Power(msu2(2,2),5)*Sqr(Log(msu2(2,2)/Sqr(M3Input)))
      )/Power(M3Input,10) - (8*(AtInput - MuInput/TanBeta)*Power(msu2(2,2),5)*Sqr(
      Log(msu2(2,2)/Sqr(M3Input))))/Power(M3Input,11) + (4*Power(msu2(2,2),6)*Sqr(
      Log(msu2(2,2)/Sqr(M3Input))))/Power(M3Input,12) - (6*msu2(2,2)*Sqr(Log(msu2(
      2,2)/Sqr(M3Input))))/Sqr(M3Input) + (4*msu2(2,2)*Sqr(AtInput -
      MuInput/TanBeta)*Sqr(Log(msu2(2,2)/Sqr(M3Input))))/Power(M3Input,4) + (68*
      Power(msu2(2,2),3)*Sqr(AtInput - MuInput/TanBeta)*Sqr(Log(msu2(2,2)/Sqr(
      M3Input))))/Power(M3Input,8) - (56*Power(msu2(2,2),4)*Sqr(AtInput -
      MuInput/TanBeta)*Sqr(Log(msu2(2,2)/Sqr(M3Input))))/Power(M3Input,10) + (16*
      Power(msu2(2,2),5)*Sqr(AtInput - MuInput/TanBeta)*Sqr(Log(msu2(2,2)/Sqr(
      M3Input))))/Power(M3Input,12) + (12*msu2(2,2)*Power(-1 + msu2(2,2)/Sqr(
      M3Input),5)*Sqr(Log(Power(M3Input,2)/Sqr(SCALE))))/Sqr(M3Input) + (63*Sqr(
      msu2(2,2)))/Power(M3Input,4) + (128*(AtInput - MuInput/TanBeta)*Sqr(msu2(2,2
      )))/Power(M3Input,5) + (192*Power(AtInput - MuInput/TanBeta,3)*Sqr(msu2(2,2)
      ))/Power(M3Input,7) - (62*Power(AtInput - MuInput/TanBeta,4)*Sqr(msu2(2,2)))
      /Power(M3Input,8) - (32*Power(AtInput - MuInput/TanBeta,5)*Sqr(msu2(2,2)))
      /Power(M3Input,9) - (41*Log(msu2(2,2)/Sqr(M3Input))*Sqr(msu2(2,2)))/Power(
      M3Input,4) - (96*(AtInput - MuInput/TanBeta)*Log(msu2(2,2)/Sqr(M3Input))*Sqr
      (msu2(2,2)))/Power(M3Input,5) + (32*Power(AtInput - MuInput/TanBeta,3)*Log(
      msu2(2,2)/Sqr(M3Input))*Sqr(msu2(2,2)))/Power(M3Input,7) - (Power(AtInput -
      MuInput/TanBeta,4)*Log(msu2(2,2)/Sqr(M3Input))*Sqr(msu2(2,2)))/Power(M3Input
      ,8) + (16*Power(AtInput - MuInput/TanBeta,5)*Log(msu2(2,2)/Sqr(M3Input))*Sqr
      (msu2(2,2)))/Power(M3Input,9) - (48*Sqr(AtInput - MuInput/TanBeta)*Sqr(msu2(
      2,2)))/Power(M3Input,6) + (76*Log(msu2(2,2)/Sqr(M3Input))*Sqr(AtInput -
      MuInput/TanBeta)*Sqr(msu2(2,2)))/Power(M3Input,6) + (26*Sqr(Log(msu2(2,2)
      /Sqr(M3Input)))*Sqr(msu2(2,2)))/Power(M3Input,4) + (56*(AtInput -
      MuInput/TanBeta)*Sqr(Log(msu2(2,2)/Sqr(M3Input)))*Sqr(msu2(2,2)))/Power(
      M3Input,5) + (8*Power(AtInput - MuInput/TanBeta,3)*Sqr(Log(msu2(2,2)/Sqr(
      M3Input)))*Sqr(msu2(2,2)))/Power(M3Input,7) + (20*Power(AtInput -
      MuInput/TanBeta,4)*Sqr(Log(msu2(2,2)/Sqr(M3Input)))*Sqr(msu2(2,2)))/Power(
      M3Input,8) + (8*Power(AtInput - MuInput/TanBeta,5)*Sqr(Log(msu2(2,2)/Sqr(
      M3Input)))*Sqr(msu2(2,2)))/Power(M3Input,9) - (32*Sqr(AtInput -
      MuInput/TanBeta)*Sqr(Log(msu2(2,2)/Sqr(M3Input)))*Sqr(msu2(2,2)))/Power(
      M3Input,6) + 4*Log(Sqr(M3Input)/Sqr(SCALE))*(-(Power(msu2(2,2),4)/Power(
      M3Input,8)) + (msu2(2,2)*(4 + (8*Power(AtInput - MuInput/TanBeta,3))/Power(
      M3Input,3) - (6*Power(AtInput - MuInput/TanBeta,4))/Power(M3Input,4) - (6*
      Sqr(AtInput - MuInput/TanBeta))/Sqr(M3Input)))/Sqr(M3Input) - (2*Power(msu2(
      2,2),3)*(-2 + Sqr(AtInput - MuInput/TanBeta)/Sqr(M3Input)))/Power(M3Input,6)
      + ((-6 - (8*Power(AtInput - MuInput/TanBeta,3))/Power(M3Input,3) + (7*Power
      (AtInput - MuInput/TanBeta,4))/Power(M3Input,4) + (6*Sqr(AtInput -
      MuInput/TanBeta))/Sqr(M3Input))*Sqr(msu2(2,2)))/Power(M3Input,4) + (Log(msu2
      (2,2)/Sqr(M3Input))*msu2(2,2)*(-3 - (4*(AtInput - MuInput/TanBeta))/M3Input
      + (4*Power(AtInput - MuInput/TanBeta,3))/Power(M3Input,3) - (5*Power(AtInput
      - MuInput/TanBeta,4))/Power(M3Input,4) + (3*Power(msu2(2,2),3))/Power(
      M3Input,6) + (6*Sqr(AtInput - MuInput/TanBeta))/Sqr(M3Input) + (msu2(2,2)*(9
      + (8*(AtInput - MuInput/TanBeta))/M3Input + (4*Power(AtInput -
      MuInput/TanBeta,3))/Power(M3Input,3) - (3*Power(AtInput - MuInput/TanBeta,4)
      )/Power(M3Input,4) - (12*Sqr(AtInput - MuInput/TanBeta))/Sqr(M3Input)))/Sqr(
      M3Input) + ((-9 - (4*(AtInput - MuInput/TanBeta))/M3Input + (6*Sqr(AtInput -
      MuInput/TanBeta))/Sqr(M3Input))*Sqr(msu2(2,2)))/Power(M3Input,4)))/Sqr(
      M3Input) - Sqr(-1 + Power(AtInput - MuInput/TanBeta,2)/Sqr(M3Input)))*Sqr(-1
      + msu2(2,2)/Sqr(M3Input)))*Power(Yu(2,2),4))/(msu2(2,2)*Power(-1 + msu2(2,2
      )/Sqr(M3Input),5)), IsCloseRel(Sqr(M3Input),msu2(2,2),0.01), (
      -0.00016040597272944275*Sqr(g3)*Sqr(M3Input)*(4 + (4*Power(AtInput -
      MuInput/TanBeta,4))/Power(M3Input,4) - (32*(AtInput - MuInput/TanBeta)*msq2(
      2,2))/Power(M3Input,3) - (64*Power(AtInput - MuInput/TanBeta,3)*msq2(2,2))
      /Power(M3Input,5) + (14*Power(AtInput - MuInput/TanBeta,4)*msq2(2,2))/Power(
      M3Input,6) + (16*Power(AtInput - MuInput/TanBeta,5)*msq2(2,2))/Power(M3Input
      ,7) + (24*(AtInput - MuInput/TanBeta)*Log(msq2(2,2)/Sqr(M3Input))*msq2(2,2))
      /Power(M3Input,3) - (32*Power(AtInput - MuInput/TanBeta,3)*Log(msq2(2,2)/Sqr
      (M3Input))*msq2(2,2))/Power(M3Input,5) + (19*Power(AtInput - MuInput/TanBeta
      ,4)*Log(msq2(2,2)/Sqr(M3Input))*msq2(2,2))/Power(M3Input,6) + (8*Power(
      AtInput - MuInput/TanBeta,5)*Log(msq2(2,2)/Sqr(M3Input))*msq2(2,2))/Power(
      M3Input,7) - (82*Power(msq2(2,2),3))/Power(M3Input,6) - (192*(AtInput -
      MuInput/TanBeta)*Power(msq2(2,2),3))/Power(M3Input,7) - (192*Power(AtInput -
      MuInput/TanBeta,3)*Power(msq2(2,2),3))/Power(M3Input,9) + (66*Power(AtInput
      - MuInput/TanBeta,4)*Power(msq2(2,2),3))/Power(M3Input,10) + (16*Power(
      AtInput - MuInput/TanBeta,5)*Power(msq2(2,2),3))/Power(M3Input,11) + (60*Log
      (msq2(2,2)/Sqr(M3Input))*Power(msq2(2,2),3))/Power(M3Input,6) + (144*(
      AtInput - MuInput/TanBeta)*Log(msq2(2,2)/Sqr(M3Input))*Power(msq2(2,2),3))
      /Power(M3Input,7) + (32*Power(AtInput - MuInput/TanBeta,3)*Log(msq2(2,2)/Sqr
      (M3Input))*Power(msq2(2,2),3))/Power(M3Input,9) - (47*Power(AtInput -
      MuInput/TanBeta,4)*Log(msq2(2,2)/Sqr(M3Input))*Power(msq2(2,2),3))/Power(
      M3Input,10) - (24*Power(AtInput - MuInput/TanBeta,5)*Log(msq2(2,2)/Sqr(
      M3Input))*Power(msq2(2,2),3))/Power(M3Input,11) + (58*Power(msq2(2,2),4))
      /Power(M3Input,8) + (128*(AtInput - MuInput/TanBeta)*Power(msq2(2,2),4))
      /Power(M3Input,9) + (64*Power(AtInput - MuInput/TanBeta,3)*Power(msq2(2,2),4
      ))/Power(M3Input,11) - (22*Power(AtInput - MuInput/TanBeta,4)*Power(msq2(2,2
      ),4))/Power(M3Input,12) - (44*Log(msq2(2,2)/Sqr(M3Input))*Power(msq2(2,2),4)
      )/Power(M3Input,8) - (96*(AtInput - MuInput/TanBeta)*Log(msq2(2,2)/Sqr(
      M3Input))*Power(msq2(2,2),4))/Power(M3Input,9) - (32*Power(AtInput -
      MuInput/TanBeta,3)*Log(msq2(2,2)/Sqr(M3Input))*Power(msq2(2,2),4))/Power(
      M3Input,11) + (29*Power(AtInput - MuInput/TanBeta,4)*Log(msq2(2,2)/Sqr(
      M3Input))*Power(msq2(2,2),4))/Power(M3Input,12) - (21*Power(msq2(2,2),5))
      /Power(M3Input,10) - (32*(AtInput - MuInput/TanBeta)*Power(msq2(2,2),5))
      /Power(M3Input,11) + (17*Log(msq2(2,2)/Sqr(M3Input))*Power(msq2(2,2),5))
      /Power(M3Input,10) + (24*(AtInput - MuInput/TanBeta)*Log(msq2(2,2)/Sqr(
      M3Input))*Power(msq2(2,2),5))/Power(M3Input,11) + (3*Power(msq2(2,2),6))
      /Power(M3Input,12) - (3*Log(msq2(2,2)/Sqr(M3Input))*Power(msq2(2,2),6))
      /Power(M3Input,12) - (25*msq2(2,2))/Sqr(M3Input) + (11*Log(msq2(2,2)/Sqr(
      M3Input))*msq2(2,2))/Sqr(M3Input) + (4*(2 + (8*(AtInput - MuInput/TanBeta))
      /M3Input + (4*Power(AtInput - MuInput/TanBeta,3))/Power(M3Input,3) + Power(
      AtInput - MuInput/TanBeta,4)/Power(M3Input,4))*msq2(2,2)*PolyLog(2,((-1 +
      msq2(2,2)/Sqr(M3Input))*Sqr(M3Input))/msq2(2,2))*Power(-1 + msq2(2,2)/Sqr(
      M3Input),3))/Sqr(M3Input) + (32*msq2(2,2)*Sqr(AtInput - MuInput/TanBeta))
      /Power(M3Input,4) - (22*Log(msq2(2,2)/Sqr(M3Input))*msq2(2,2)*Sqr(AtInput -
      MuInput/TanBeta))/Power(M3Input,4) + (32*Power(msq2(2,2),3)*Sqr(AtInput -
      MuInput/TanBeta))/Power(M3Input,8) - (96*Log(msq2(2,2)/Sqr(M3Input))*Power(
      msq2(2,2),3)*Sqr(AtInput - MuInput/TanBeta))/Power(M3Input,8) - (8*Power(
      msq2(2,2),4)*Sqr(AtInput - MuInput/TanBeta))/Power(M3Input,10) + (52*Log(
      msq2(2,2)/Sqr(M3Input))*Power(msq2(2,2),4)*Sqr(AtInput - MuInput/TanBeta))
      /Power(M3Input,10) - (10*Log(msq2(2,2)/Sqr(M3Input))*Power(msq2(2,2),5)*Sqr(
      AtInput - MuInput/TanBeta))/Power(M3Input,12) - (8*Sqr(AtInput -
      MuInput/TanBeta))/Sqr(M3Input) - (16*(AtInput - MuInput/TanBeta)*msq2(2,2)*
      Sqr(Log(msq2(2,2)/Sqr(M3Input))))/Power(M3Input,3) - (8*Power(AtInput -
      MuInput/TanBeta,3)*msq2(2,2)*Sqr(Log(msq2(2,2)/Sqr(M3Input))))/Power(M3Input
      ,5) - (4*Power(AtInput - MuInput/TanBeta,4)*msq2(2,2)*Sqr(Log(msq2(2,2)/Sqr(
      M3Input))))/Power(M3Input,6) - (46*Power(msq2(2,2),3)*Sqr(Log(msq2(2,2)/Sqr(
      M3Input))))/Power(M3Input,6) - (72*(AtInput - MuInput/TanBeta)*Power(msq2(2,
      2),3)*Sqr(Log(msq2(2,2)/Sqr(M3Input))))/Power(M3Input,7) + (8*Power(AtInput
      - MuInput/TanBeta,3)*Power(msq2(2,2),3)*Sqr(Log(msq2(2,2)/Sqr(M3Input))))
      /Power(M3Input,9) - (2*Power(AtInput - MuInput/TanBeta,4)*Power(msq2(2,2),3)
      *Sqr(Log(msq2(2,2)/Sqr(M3Input))))/Power(M3Input,10) + (8*Power(AtInput -
      MuInput/TanBeta,5)*Power(msq2(2,2),3)*Sqr(Log(msq2(2,2)/Sqr(M3Input))))
      /Power(M3Input,11) + (42*Power(msq2(2,2),4)*Sqr(Log(msq2(2,2)/Sqr(M3Input)))
      )/Power(M3Input,8) + (40*(AtInput - MuInput/TanBeta)*Power(msq2(2,2),4)*Sqr(
      Log(msq2(2,2)/Sqr(M3Input))))/Power(M3Input,9) - (8*Power(AtInput -
      MuInput/TanBeta,3)*Power(msq2(2,2),4)*Sqr(Log(msq2(2,2)/Sqr(M3Input))))
      /Power(M3Input,11) - (10*Power(AtInput - MuInput/TanBeta,4)*Power(msq2(2,2),
      4)*Sqr(Log(msq2(2,2)/Sqr(M3Input))))/Power(M3Input,12) - (20*Power(msq2(2,2)
      ,5)*Sqr(Log(msq2(2,2)/Sqr(M3Input))))/Power(M3Input,10) - (8*(AtInput -
      MuInput/TanBeta)*Power(msq2(2,2),5)*Sqr(Log(msq2(2,2)/Sqr(M3Input))))/Power(
      M3Input,11) + (4*Power(msq2(2,2),6)*Sqr(Log(msq2(2,2)/Sqr(M3Input))))/Power(
      M3Input,12) - (6*msq2(2,2)*Sqr(Log(msq2(2,2)/Sqr(M3Input))))/Sqr(M3Input) +
      (4*msq2(2,2)*Sqr(AtInput - MuInput/TanBeta)*Sqr(Log(msq2(2,2)/Sqr(M3Input)))
      )/Power(M3Input,4) + (68*Power(msq2(2,2),3)*Sqr(AtInput - MuInput/TanBeta)*
      Sqr(Log(msq2(2,2)/Sqr(M3Input))))/Power(M3Input,8) - (56*Power(msq2(2,2),4)*
      Sqr(AtInput - MuInput/TanBeta)*Sqr(Log(msq2(2,2)/Sqr(M3Input))))/Power(
      M3Input,10) + (16*Power(msq2(2,2),5)*Sqr(AtInput - MuInput/TanBeta)*Sqr(Log(
      msq2(2,2)/Sqr(M3Input))))/Power(M3Input,12) + (12*msq2(2,2)*Power(-1 + msq2(
      2,2)/Sqr(M3Input),5)*Sqr(Log(Power(M3Input,2)/Sqr(SCALE))))/Sqr(M3Input) + (
      63*Sqr(msq2(2,2)))/Power(M3Input,4) + (128*(AtInput - MuInput/TanBeta)*Sqr(
      msq2(2,2)))/Power(M3Input,5) + (192*Power(AtInput - MuInput/TanBeta,3)*Sqr(
      msq2(2,2)))/Power(M3Input,7) - (62*Power(AtInput - MuInput/TanBeta,4)*Sqr(
      msq2(2,2)))/Power(M3Input,8) - (32*Power(AtInput - MuInput/TanBeta,5)*Sqr(
      msq2(2,2)))/Power(M3Input,9) - (41*Log(msq2(2,2)/Sqr(M3Input))*Sqr(msq2(2,2)
      ))/Power(M3Input,4) - (96*(AtInput - MuInput/TanBeta)*Log(msq2(2,2)/Sqr(
      M3Input))*Sqr(msq2(2,2)))/Power(M3Input,5) + (32*Power(AtInput -
      MuInput/TanBeta,3)*Log(msq2(2,2)/Sqr(M3Input))*Sqr(msq2(2,2)))/Power(M3Input
      ,7) - (Power(AtInput - MuInput/TanBeta,4)*Log(msq2(2,2)/Sqr(M3Input))*Sqr(
      msq2(2,2)))/Power(M3Input,8) + (16*Power(AtInput - MuInput/TanBeta,5)*Log(
      msq2(2,2)/Sqr(M3Input))*Sqr(msq2(2,2)))/Power(M3Input,9) - (48*Sqr(AtInput -
      MuInput/TanBeta)*Sqr(msq2(2,2)))/Power(M3Input,6) + (76*Log(msq2(2,2)/Sqr(
      M3Input))*Sqr(AtInput - MuInput/TanBeta)*Sqr(msq2(2,2)))/Power(M3Input,6) +
      (26*Sqr(Log(msq2(2,2)/Sqr(M3Input)))*Sqr(msq2(2,2)))/Power(M3Input,4) + (56*
      (AtInput - MuInput/TanBeta)*Sqr(Log(msq2(2,2)/Sqr(M3Input)))*Sqr(msq2(2,2)))
      /Power(M3Input,5) + (8*Power(AtInput - MuInput/TanBeta,3)*Sqr(Log(msq2(2,2)
      /Sqr(M3Input)))*Sqr(msq2(2,2)))/Power(M3Input,7) + (20*Power(AtInput -
      MuInput/TanBeta,4)*Sqr(Log(msq2(2,2)/Sqr(M3Input)))*Sqr(msq2(2,2)))/Power(
      M3Input,8) + (8*Power(AtInput - MuInput/TanBeta,5)*Sqr(Log(msq2(2,2)/Sqr(
      M3Input)))*Sqr(msq2(2,2)))/Power(M3Input,9) - (32*Sqr(AtInput -
      MuInput/TanBeta)*Sqr(Log(msq2(2,2)/Sqr(M3Input)))*Sqr(msq2(2,2)))/Power(
      M3Input,6) + 4*Log(Sqr(M3Input)/Sqr(SCALE))*(-(Power(msq2(2,2),4)/Power(
      M3Input,8)) + (msq2(2,2)*(4 + (8*Power(AtInput - MuInput/TanBeta,3))/Power(
      M3Input,3) - (6*Power(AtInput - MuInput/TanBeta,4))/Power(M3Input,4) - (6*
      Sqr(AtInput - MuInput/TanBeta))/Sqr(M3Input)))/Sqr(M3Input) - (2*Power(msq2(
      2,2),3)*(-2 + Sqr(AtInput - MuInput/TanBeta)/Sqr(M3Input)))/Power(M3Input,6)
      + ((-6 - (8*Power(AtInput - MuInput/TanBeta,3))/Power(M3Input,3) + (7*Power
      (AtInput - MuInput/TanBeta,4))/Power(M3Input,4) + (6*Sqr(AtInput -
      MuInput/TanBeta))/Sqr(M3Input))*Sqr(msq2(2,2)))/Power(M3Input,4) + (Log(msq2
      (2,2)/Sqr(M3Input))*msq2(2,2)*(-3 - (4*(AtInput - MuInput/TanBeta))/M3Input
      + (4*Power(AtInput - MuInput/TanBeta,3))/Power(M3Input,3) - (5*Power(AtInput
      - MuInput/TanBeta,4))/Power(M3Input,4) + (3*Power(msq2(2,2),3))/Power(
      M3Input,6) + (6*Sqr(AtInput - MuInput/TanBeta))/Sqr(M3Input) + (msq2(2,2)*(9
      + (8*(AtInput - MuInput/TanBeta))/M3Input + (4*Power(AtInput -
      MuInput/TanBeta,3))/Power(M3Input,3) - (3*Power(AtInput - MuInput/TanBeta,4)
      )/Power(M3Input,4) - (12*Sqr(AtInput - MuInput/TanBeta))/Sqr(M3Input)))/Sqr(
      M3Input) + ((-9 - (4*(AtInput - MuInput/TanBeta))/M3Input + (6*Sqr(AtInput -
      MuInput/TanBeta))/Sqr(M3Input))*Sqr(msq2(2,2)))/Power(M3Input,4)))/Sqr(
      M3Input) - Sqr(-1 + Power(AtInput - MuInput/TanBeta,2)/Sqr(M3Input)))*Sqr(-1
      + msq2(2,2)/Sqr(M3Input)))*Power(Yu(2,2),4))/(msq2(2,2)*Power(-1 + msq2(2,2
      )/Sqr(M3Input),5)), !IsClose(Sqr(M3Input),0) && IsCloseRel(msu2(2,2)/Sqr(
      M3Input),msq2(2,2)/Sqr(M3Input),0.01), (0.000053468657576480914*Power(
      M3Input,6)*Sqr(g3)*((4*Power(AtInput - MuInput/TanBeta,4))/Power(M3Input,4)
      + (32*Power(AtInput - MuInput/TanBeta,3)*Log(msu2(2,2)/Sqr(M3Input)))/Power(
      M3Input,3) + (8*Power(AtInput - MuInput/TanBeta,4)*Log(msu2(2,2)/Sqr(M3Input
      )))/Power(M3Input,4) - (4*Power(AtInput - MuInput/TanBeta,4)*Log(Sqr(M3Input
      )))/Power(M3Input,4) + (32*Power(AtInput - MuInput/TanBeta,3)*Log(1 - ((-1 +
      msu2(2,2)/Sqr(M3Input))*Sqr(M3Input))/msu2(2,2)))/Power(M3Input,3) + (8*
      Power(AtInput - MuInput/TanBeta,4)*Log(1 - ((-1 + msu2(2,2)/Sqr(M3Input))*
      Sqr(M3Input))/msu2(2,2)))/Power(M3Input,4) + (4*Power(AtInput -
      MuInput/TanBeta,4)*Log(Sqr(SCALE)))/Power(M3Input,4) + (8*Power(AtInput -
      MuInput/TanBeta,3)*msu2(2,2))/Power(M3Input,5) - (13*Power(AtInput -
      MuInput/TanBeta,4)*msu2(2,2))/Power(M3Input,6) + (4*Power(AtInput -
      MuInput/TanBeta,5)*msu2(2,2))/Power(M3Input,7) - (72*Power(AtInput -
      MuInput/TanBeta,3)*Log(msu2(2,2)/Sqr(M3Input))*msu2(2,2))/Power(M3Input,5) -
      (12*Power(AtInput - MuInput/TanBeta,4)*Log(msu2(2,2)/Sqr(M3Input))*msu2(2,2
      ))/Power(M3Input,6) + (4*Power(AtInput - MuInput/TanBeta,5)*Log(msu2(2,2)
      /Sqr(M3Input))*msu2(2,2))/Power(M3Input,7) - (8*Power(AtInput -
      MuInput/TanBeta,3)*Log(Sqr(M3Input))*msu2(2,2))/Power(M3Input,5) + (14*Power
      (AtInput - MuInput/TanBeta,4)*Log(Sqr(M3Input))*msu2(2,2))/Power(M3Input,6)
      - (72*Power(AtInput - MuInput/TanBeta,3)*Log(1 - ((-1 + msu2(2,2)/Sqr(
      M3Input))*Sqr(M3Input))/msu2(2,2))*msu2(2,2))/Power(M3Input,5) - (18*Power(
      AtInput - MuInput/TanBeta,4)*Log(1 - ((-1 + msu2(2,2)/Sqr(M3Input))*Sqr(
      M3Input))/msu2(2,2))*msu2(2,2))/Power(M3Input,6) + (8*Power(AtInput -
      MuInput/TanBeta,3)*Log(Sqr(SCALE))*msu2(2,2))/Power(M3Input,5) - (14*Power(
      AtInput - MuInput/TanBeta,4)*Log(Sqr(SCALE))*msu2(2,2))/Power(M3Input,6) - (
      78*Power(msu2(2,2),3))/Power(M3Input,6) + (96*(AtInput - MuInput/TanBeta)*
      Power(msu2(2,2),3))/Power(M3Input,7) + (64*Power(AtInput - MuInput/TanBeta,3
      )*Power(msu2(2,2),3))/Power(M3Input,9) - (Power(AtInput - MuInput/TanBeta,4)
      *Power(msu2(2,2),3))/Power(M3Input,10) + (84*Log(msu2(2,2)/Sqr(M3Input))*
      Power(msu2(2,2),3))/Power(M3Input,6) - (144*(AtInput - MuInput/TanBeta)*Log(
      msu2(2,2)/Sqr(M3Input))*Power(msu2(2,2),3))/Power(M3Input,7) - (8*Power(
      AtInput - MuInput/TanBeta,3)*Log(msu2(2,2)/Sqr(M3Input))*Power(msu2(2,2),3))
      /Power(M3Input,9) + (6*Power(AtInput - MuInput/TanBeta,4)*Log(msu2(2,2)/Sqr(
      M3Input))*Power(msu2(2,2),3))/Power(M3Input,10) + (72*Log(Sqr(M3Input))*
      Power(msu2(2,2),3))/Power(M3Input,6) - (96*(AtInput - MuInput/TanBeta)*Log(
      Sqr(M3Input))*Power(msu2(2,2),3))/Power(M3Input,7) - (8*Power(AtInput -
      MuInput/TanBeta,3)*Log(Sqr(M3Input))*Power(msu2(2,2),3))/Power(M3Input,9) +
      (6*Power(AtInput - MuInput/TanBeta,4)*Log(Sqr(M3Input))*Power(msu2(2,2),3))
      /Power(M3Input,10) - (72*Log(msu2(2,2)/Sqr(M3Input))*Log(Sqr(M3Input))*Power
      (msu2(2,2),3))/Power(M3Input,6) - (72*Log(Sqr(SCALE))*Power(msu2(2,2),3))
      /Power(M3Input,6) + (96*(AtInput - MuInput/TanBeta)*Log(Sqr(SCALE))*Power(
      msu2(2,2),3))/Power(M3Input,7) + (8*Power(AtInput - MuInput/TanBeta,3)*Log(
      Sqr(SCALE))*Power(msu2(2,2),3))/Power(M3Input,9) - (6*Power(AtInput -
      MuInput/TanBeta,4)*Log(Sqr(SCALE))*Power(msu2(2,2),3))/Power(M3Input,10) + (
      72*Log(msu2(2,2)/Sqr(M3Input))*Log(Sqr(SCALE))*Power(msu2(2,2),3))/Power(
      M3Input,6) + (72*Log(Sqr(M3Input))*Log(Sqr(SCALE))*Power(msu2(2,2),3))/Power
      (M3Input,6) + (72*Power(msu2(2,2),4))/Power(M3Input,8) - (48*(AtInput -
      MuInput/TanBeta)*Power(msu2(2,2),4))/Power(M3Input,9) - (72*Log(msu2(2,2)
      /Sqr(M3Input))*Power(msu2(2,2),4))/Power(M3Input,8) + (48*(AtInput -
      MuInput/TanBeta)*Log(msu2(2,2)/Sqr(M3Input))*Power(msu2(2,2),4))/Power(
      M3Input,9) - (72*Log(Sqr(M3Input))*Power(msu2(2,2),4))/Power(M3Input,8) + (
      48*(AtInput - MuInput/TanBeta)*Log(Sqr(M3Input))*Power(msu2(2,2),4))/Power(
      M3Input,9) + (144*Log(msu2(2,2)/Sqr(M3Input))*Log(Sqr(M3Input))*Power(msu2(2
      ,2),4))/Power(M3Input,8) + (72*Log(Sqr(SCALE))*Power(msu2(2,2),4))/Power(
      M3Input,8) - (48*(AtInput - MuInput/TanBeta)*Log(Sqr(SCALE))*Power(msu2(2,2)
      ,4))/Power(M3Input,9) - (144*Log(msu2(2,2)/Sqr(M3Input))*Log(Sqr(SCALE))*
      Power(msu2(2,2),4))/Power(M3Input,8) - (144*Log(Sqr(M3Input))*Log(Sqr(SCALE)
      )*Power(msu2(2,2),4))/Power(M3Input,8) - (18*Power(msu2(2,2),5))/Power(
      M3Input,10) + (24*Log(msu2(2,2)/Sqr(M3Input))*Power(msu2(2,2),5))/Power(
      M3Input,10) + (24*Log(Sqr(M3Input))*Power(msu2(2,2),5))/Power(M3Input,10) -
      (72*Log(msu2(2,2)/Sqr(M3Input))*Log(Sqr(M3Input))*Power(msu2(2,2),5))/Power(
      M3Input,10) - (24*Log(Sqr(SCALE))*Power(msu2(2,2),5))/Power(M3Input,10) + (
      72*Log(msu2(2,2)/Sqr(M3Input))*Log(Sqr(SCALE))*Power(msu2(2,2),5))/Power(
      M3Input,10) + (72*Log(Sqr(M3Input))*Log(Sqr(SCALE))*Power(msu2(2,2),5))
      /Power(M3Input,10) - (48*Power(msu2(2,2),3)*PolyLog(2,((-1 + msu2(2,2)/Sqr(
      M3Input))*Sqr(M3Input))/msu2(2,2)))/Power(M3Input,6) + (96*(AtInput -
      MuInput/TanBeta)*Power(msu2(2,2),3)*PolyLog(2,((-1 + msu2(2,2)/Sqr(M3Input))
      *Sqr(M3Input))/msu2(2,2)))/Power(M3Input,7) - (24*msu2(2,2)*Sqr(AtInput -
      MuInput/TanBeta))/Power(M3Input,4) + (24*Log(Sqr(M3Input))*msu2(2,2)*Sqr(
      AtInput - MuInput/TanBeta))/Power(M3Input,4) - (24*Log(Sqr(SCALE))*msu2(2,2)
      *Sqr(AtInput - MuInput/TanBeta))/Power(M3Input,4) - (96*Power(msu2(2,2),3)*
      Sqr(AtInput - MuInput/TanBeta))/Power(M3Input,8) + (168*Log(msu2(2,2)/Sqr(
      M3Input))*Power(msu2(2,2),3)*Sqr(AtInput - MuInput/TanBeta))/Power(M3Input,8
      ) + (168*Log(Sqr(M3Input))*Power(msu2(2,2),3)*Sqr(AtInput - MuInput/TanBeta)
      )/Power(M3Input,8) - (168*Log(Sqr(SCALE))*Power(msu2(2,2),3)*Sqr(AtInput -
      MuInput/TanBeta))/Power(M3Input,8) + (12*Power(msu2(2,2),4)*Sqr(AtInput -
      MuInput/TanBeta))/Power(M3Input,10) - (72*Log(msu2(2,2)/Sqr(M3Input))*Power(
      msu2(2,2),4)*Sqr(AtInput - MuInput/TanBeta))/Power(M3Input,10) - (72*Log(Sqr
      (M3Input))*Power(msu2(2,2),4)*Sqr(AtInput - MuInput/TanBeta))/Power(M3Input,
      10) + (72*Log(Sqr(SCALE))*Power(msu2(2,2),4)*Sqr(AtInput - MuInput/TanBeta))
      /Power(M3Input,10) - (36*Power(msu2(2,2),3)*Sqr(Log(Power(M3Input,2))))
      /Power(M3Input,6) + (72*Power(msu2(2,2),4)*Sqr(Log(Power(M3Input,2))))/Power
      (M3Input,8) - (36*Power(msu2(2,2),5)*Sqr(Log(Power(M3Input,2))))/Power(
      M3Input,10) - (36*Power(msu2(2,2),3)*Sqr(Log(Power(SCALE,2))))/Power(M3Input
      ,6) + (72*Power(msu2(2,2),4)*Sqr(Log(Power(SCALE,2))))/Power(M3Input,8) - (
      36*Power(msu2(2,2),5)*Sqr(Log(Power(SCALE,2))))/Power(M3Input,10) - (36*
      Power(msu2(2,2),3)*Sqr(Log(msu2(2,2)/Sqr(M3Input))))/Power(M3Input,6) + (72*
      Power(msu2(2,2),4)*Sqr(Log(msu2(2,2)/Sqr(M3Input))))/Power(M3Input,8) - (36*
      Power(msu2(2,2),5)*Sqr(Log(msu2(2,2)/Sqr(M3Input))))/Power(M3Input,10) + (24
      *Sqr(msu2(2,2)))/Power(M3Input,4) - (48*(AtInput - MuInput/TanBeta)*Sqr(msu2
      (2,2)))/Power(M3Input,5) - (72*Power(AtInput - MuInput/TanBeta,3)*Sqr(msu2(2
      ,2)))/Power(M3Input,7) + (10*Power(AtInput - MuInput/TanBeta,4)*Sqr(msu2(2,2
      )))/Power(M3Input,8) - (4*Power(AtInput - MuInput/TanBeta,5)*Sqr(msu2(2,2)))
      /Power(M3Input,9) + (96*(AtInput - MuInput/TanBeta)*Log(msu2(2,2)/Sqr(
      M3Input))*Sqr(msu2(2,2)))/Power(M3Input,5) - (4*Power(AtInput -
      MuInput/TanBeta,4)*Log(msu2(2,2)/Sqr(M3Input))*Sqr(msu2(2,2)))/Power(M3Input
      ,8) - (24*Log(Sqr(M3Input))*Sqr(msu2(2,2)))/Power(M3Input,4) + (48*(AtInput
      - MuInput/TanBeta)*Log(Sqr(M3Input))*Sqr(msu2(2,2)))/Power(M3Input,5) + (16*
      Power(AtInput - MuInput/TanBeta,3)*Log(Sqr(M3Input))*Sqr(msu2(2,2)))/Power(
      M3Input,7) - (16*Power(AtInput - MuInput/TanBeta,4)*Log(Sqr(M3Input))*Sqr(
      msu2(2,2)))/Power(M3Input,8) + (96*(AtInput - MuInput/TanBeta)*Log(1 - ((-1
      + msu2(2,2)/Sqr(M3Input))*Sqr(M3Input))/msu2(2,2))*Sqr(msu2(2,2)))/Power(
      M3Input,5) + (48*Power(AtInput - MuInput/TanBeta,3)*Log(1 - ((-1 + msu2(2,2)
      /Sqr(M3Input))*Sqr(M3Input))/msu2(2,2))*Sqr(msu2(2,2)))/Power(M3Input,7) + (
      12*Power(AtInput - MuInput/TanBeta,4)*Log(1 - ((-1 + msu2(2,2)/Sqr(M3Input))
      *Sqr(M3Input))/msu2(2,2))*Sqr(msu2(2,2)))/Power(M3Input,8) + (24*Log(Sqr(
      SCALE))*Sqr(msu2(2,2)))/Power(M3Input,4) - (48*(AtInput - MuInput/TanBeta)*
      Log(Sqr(SCALE))*Sqr(msu2(2,2)))/Power(M3Input,5) - (16*Power(AtInput -
      MuInput/TanBeta,3)*Log(Sqr(SCALE))*Sqr(msu2(2,2)))/Power(M3Input,7) + (16*
      Power(AtInput - MuInput/TanBeta,4)*Log(Sqr(SCALE))*Sqr(msu2(2,2)))/Power(
      M3Input,8) + (108*Sqr(AtInput - MuInput/TanBeta)*Sqr(msu2(2,2)))/Power(
      M3Input,6) - (48*Log(msu2(2,2)/Sqr(M3Input))*Sqr(AtInput - MuInput/TanBeta)*
      Sqr(msu2(2,2)))/Power(M3Input,6) - (120*Log(Sqr(M3Input))*Sqr(AtInput -
      MuInput/TanBeta)*Sqr(msu2(2,2)))/Power(M3Input,6) + (120*Log(Sqr(SCALE))*Sqr
      (AtInput - MuInput/TanBeta)*Sqr(msu2(2,2)))/Power(M3Input,6))*Power(Yu(2,2),
      4))/(Power(msu2(2,2),3)*Sqr(-1 + msu2(2,2)/Power(M3Input,2))), True,
      0.00016040597272944275*Sqr(g3)*(Log(Sqr(M3Input)/Sqr(SCALE))*(8 - 12*Log(
      msq2(2,2)/Sqr(M3Input)) - 12*Log(msu2(2,2)/Sqr(M3Input)) - (4*Sqr(M3Input))
      /msq2(2,2) - (4*Sqr(M3Input))/msu2(2,2)) + ((AtInput - MuInput/TanBeta)*(Log
      (Sqr(M3Input)/Sqr(SCALE))*((16*Log(msq2(2,2)/Sqr(M3Input)))/(msq2(2,2)/Sqr(
      M3Input) - msu2(2,2)/Sqr(M3Input)) - (16*Log(msu2(2,2)/Sqr(M3Input)))/(msq2(
      2,2)/Sqr(M3Input) - msu2(2,2)/Sqr(M3Input))) + Log(msq2(2,2)/Sqr(M3Input))*(
      -16/(msq2(2,2)/Sqr(M3Input) - msu2(2,2)/Sqr(M3Input)) - (8*Log(msu2(2,2)/Sqr
      (M3Input)))/((-1 + msq2(2,2)/Sqr(M3Input))*(-1 + msu2(2,2)/Sqr(M3Input)))) +
      (16*Log(msu2(2,2)/Sqr(M3Input)))/(msq2(2,2)/Sqr(M3Input) - msu2(2,2)/Sqr(
      M3Input)) + (32*(PolyLog(2,((-1 + msu2(2,2)/Sqr(M3Input))*Sqr(M3Input))/msu2
      (2,2))*(-1 + msq2(2,2)/Sqr(M3Input)) - PolyLog(2,((-1 + msq2(2,2)/Sqr(
      M3Input))*Sqr(M3Input))/msq2(2,2))*(-1 + msu2(2,2)/Sqr(M3Input))))/((-1 +
      msq2(2,2)/Sqr(M3Input))*(msq2(2,2)/Sqr(M3Input) - msu2(2,2)/Sqr(M3Input))*(
      -1 + msu2(2,2)/Sqr(M3Input))) + (8*(-2 + msq2(2,2)/Sqr(M3Input))*Sqr(Log(
      msq2(2,2)/Sqr(M3Input))))/((-1 + msq2(2,2)/Sqr(M3Input))*(msq2(2,2)/Sqr(
      M3Input) - msu2(2,2)/Sqr(M3Input))) - (8*(-2 + msu2(2,2)/Sqr(M3Input))*Sqr(
      Log(msu2(2,2)/Sqr(M3Input))))/((msq2(2,2)/Sqr(M3Input) - msu2(2,2)/Sqr(
      M3Input))*(-1 + msu2(2,2)/Sqr(M3Input)))))/M3Input + (Power(AtInput -
      MuInput/TanBeta,5)*(Log(msq2(2,2)/Sqr(M3Input))*((8*Log(msu2(2,2)/Sqr(
      M3Input))*(msq2(2,2)/Sqr(M3Input) + msu2(2,2)/Sqr(M3Input))*(-(msu2(2,2)/Sqr
      (M3Input)) + (msq2(2,2)*(-1 + (2*msu2(2,2))/Sqr(M3Input)))/Sqr(M3Input)))/((
      -1 + msq2(2,2)/Sqr(M3Input))*Power(msq2(2,2)/Sqr(M3Input) - msu2(2,2)/Sqr(
      M3Input),4)*(-1 + msu2(2,2)/Sqr(M3Input))) + (16*msq2(2,2))/((-1 + msq2(2,2)
      /Sqr(M3Input))*Power(msq2(2,2)/Sqr(M3Input) - msu2(2,2)/Sqr(M3Input),3)*Sqr(
      M3Input))) + (16*Log(msu2(2,2)/Sqr(M3Input))*msu2(2,2))/((-1 + msu2(2,2)/Sqr
      (M3Input))*Power(-(msq2(2,2)/Sqr(M3Input)) + msu2(2,2)/Sqr(M3Input),3)*Sqr(
      M3Input)) - (8*msq2(2,2)*(msq2(2,2)/Sqr(M3Input) + msu2(2,2)/Sqr(M3Input))*
      Sqr(Log(msq2(2,2)/Sqr(M3Input))))/((-1 + msq2(2,2)/Sqr(M3Input))*Power(msq2(
      2,2)/Sqr(M3Input) - msu2(2,2)/Sqr(M3Input),4)*Sqr(M3Input)) - (8*msu2(2,2)*(
      msq2(2,2)/Sqr(M3Input) + msu2(2,2)/Sqr(M3Input))*Sqr(Log(msu2(2,2)/Sqr(
      M3Input))))/(Power(msq2(2,2)/Sqr(M3Input) - msu2(2,2)/Sqr(M3Input),4)*(-1 +
      msu2(2,2)/Sqr(M3Input))*Sqr(M3Input))))/Power(M3Input,5) - 12*Sqr(Log(Power(
      M3Input,2)/Sqr(SCALE))) + (Sqr(Log(msq2(2,2)/Sqr(M3Input)))*(-6 + (8*msq2(2,
      2))/Sqr(M3Input) - (4*Sqr(msq2(2,2)))/Power(M3Input,4)))/Sqr(-1 + msq2(2,2)
      /Power(M3Input,2)) + (Power(AtInput - MuInput/TanBeta,3)*((-16*(4*(msq2(2,2)
      /Sqr(M3Input) - msu2(2,2)/Sqr(M3Input)) + PolyLog(2,((-1 + msq2(2,2)/Sqr(
      M3Input))*Sqr(M3Input))/msq2(2,2))*(-2 + msq2(2,2)/Sqr(M3Input) + msu2(2,2)
      /Sqr(M3Input)) - PolyLog(2,((-1 + msu2(2,2)/Sqr(M3Input))*Sqr(M3Input))/msu2
      (2,2))*(-2 + msq2(2,2)/Sqr(M3Input) + msu2(2,2)/Sqr(M3Input))))/Power(msq2(2
      ,2)/Sqr(M3Input) - msu2(2,2)/Sqr(M3Input),3) - (16*Log(msu2(2,2)/Sqr(M3Input
      ))*(msq2(2,2)/Sqr(M3Input) + (3*msu2(2,2))/Sqr(M3Input)))/Power(msq2(2,2)
      /Sqr(M3Input) - msu2(2,2)/Sqr(M3Input),3) + (8*Sqr(Log(msq2(2,2)/Sqr(M3Input
      )))*(-2 + msu2(2,2)/Sqr(M3Input) - (3*msq2(2,2)*(-1 + msu2(2,2)/Sqr(M3Input)
      ))/Sqr(M3Input) + Sqr(msq2(2,2))/Power(M3Input,4)))/((-1 + msq2(2,2)/Sqr(
      M3Input))*Power(msq2(2,2)/Sqr(M3Input) - msu2(2,2)/Sqr(M3Input),3)) + (8*Sqr
      (Log(msu2(2,2)/Sqr(M3Input)))*(-2 - (3*msq2(2,2)*msu2(2,2))/Power(M3Input,4)
      + msq2(2,2)/Sqr(M3Input) + (3*msu2(2,2))/Sqr(M3Input) + Sqr(msu2(2,2))
      /Power(M3Input,4)))/((-1 + msu2(2,2)/Sqr(M3Input))*Power(-(msq2(2,2)/Sqr(
      M3Input)) + msu2(2,2)/Sqr(M3Input),3)) + Log(Sqr(M3Input)/Sqr(SCALE))*((-16*
      Log(msq2(2,2)/Sqr(M3Input))*(msq2(2,2)/Sqr(M3Input) + msu2(2,2)/Sqr(M3Input)
      ))/Power(msq2(2,2)/Sqr(M3Input) - msu2(2,2)/Sqr(M3Input),3) + (16*Log(msu2(2
      ,2)/Sqr(M3Input))*(msq2(2,2)/Sqr(M3Input) + msu2(2,2)/Sqr(M3Input)))/Power(
      msq2(2,2)/Sqr(M3Input) - msu2(2,2)/Sqr(M3Input),3) + 32/Sqr(msq2(2,2)/Power(
      M3Input,2) - msu2(2,2)/Power(M3Input,2))) + Log(msq2(2,2)/Sqr(M3Input))*((16
      *((3*msq2(2,2))/Sqr(M3Input) + msu2(2,2)/Sqr(M3Input)))/Power(msq2(2,2)/Sqr(
      M3Input) - msu2(2,2)/Sqr(M3Input),3) + (16*Log(msu2(2,2)/Sqr(M3Input))*((-2*
      msq2(2,2)*msu2(2,2))/Power(M3Input,4) + msq2(2,2)/Sqr(M3Input) + msu2(2,2)
      /Sqr(M3Input)))/((-1 + msq2(2,2)/Sqr(M3Input))*(-1 + msu2(2,2)/Sqr(M3Input))
      *Sqr(msq2(2,2)/Power(M3Input,2) - msu2(2,2)/Power(M3Input,2))))))/Power(
      M3Input,3) + Log(msq2(2,2)/Sqr(M3Input))*((2*(-7 + (6*msu2(2,2))/Sqr(M3Input
      ) + (msq2(2,2)*(7 - (5*msu2(2,2))/Sqr(M3Input)))/Sqr(M3Input) + ((-3 + (2*
      msu2(2,2))/Sqr(M3Input))*Sqr(msq2(2,2)))/Power(M3Input,4)))/((-1 + msu2(2,2)
      /Sqr(M3Input))*Sqr(-1 + msq2(2,2)/Power(M3Input,2))) - (2*Log(msu2(2,2)/Sqr(
      M3Input))*((msu2(2,2)*(-2 + msu2(2,2)/Sqr(M3Input)))/Sqr(M3Input) + (msq2(2,
      2)*(-2 + (8*msu2(2,2))/Sqr(M3Input) - (4*Sqr(msu2(2,2)))/Power(M3Input,4)))
      /Sqr(M3Input) + (Sqr(msq2(2,2))*(1 - (4*msu2(2,2))/Sqr(M3Input) + (2*Sqr(
      msu2(2,2)))/Power(M3Input,4)))/Power(M3Input,4)))/(Sqr(-1 + msq2(2,2)/Power(
      M3Input,2))*Sqr(-1 + msu2(2,2)/Power(M3Input,2)))) + (Sqr(AtInput -
      MuInput/TanBeta)*((-8*Power(M3Input,4))/(msq2(2,2)*msu2(2,2)) + Log(Sqr(
      M3Input)/Sqr(SCALE))*((8*Power(M3Input,4))/(msq2(2,2)*msu2(2,2)) - (24*Log(
      msq2(2,2)/Sqr(M3Input)))/(msq2(2,2)/Sqr(M3Input) - msu2(2,2)/Sqr(M3Input)) +
      (24*Log(msu2(2,2)/Sqr(M3Input)))/(msq2(2,2)/Sqr(M3Input) - msu2(2,2)/Sqr(
      M3Input))) - (4*Log(msu2(2,2)/Sqr(M3Input))*(7 - (4*msu2(2,2))/Sqr(M3Input)
      + (3*msq2(2,2)*(-2 + msu2(2,2)/Sqr(M3Input)))/Sqr(M3Input)))/((-1 + msq2(2,2
      )/Sqr(M3Input))*(msq2(2,2)/Sqr(M3Input) - msu2(2,2)/Sqr(M3Input))*(-1 + msu2
      (2,2)/Sqr(M3Input))) - (4*Sqr(Log(msq2(2,2)/Sqr(M3Input)))*((4*Power(msq2(2,
      2),3))/Power(M3Input,6) - msu2(2,2)/Sqr(M3Input) + (msq2(2,2)*(3 + (4*msu2(2
      ,2))/Sqr(M3Input)))/Sqr(M3Input) - (2*(4 + msu2(2,2)/Sqr(M3Input))*Sqr(msq2(
      2,2)))/Power(M3Input,4)))/(Sqr(-1 + msq2(2,2)/Power(M3Input,2))*Sqr(msq2(2,2
      )/Power(M3Input,2) - msu2(2,2)/Power(M3Input,2))) + Log(msq2(2,2)/Sqr(
      M3Input))*((4*(7 - (6*msu2(2,2))/Sqr(M3Input) + (msq2(2,2)*(-4 + (3*msu2(2,2
      ))/Sqr(M3Input)))/Sqr(M3Input)))/((-1 + msq2(2,2)/Sqr(M3Input))*(msq2(2,2)
      /Sqr(M3Input) - msu2(2,2)/Sqr(M3Input))*(-1 + msu2(2,2)/Sqr(M3Input))) + (4*
      Log(msu2(2,2)/Sqr(M3Input))*(2*(msq2(2,2)/Sqr(M3Input) + msu2(2,2)/Sqr(
      M3Input)) + (msq2(2,2)*(-2 + msq2(2,2)/Sqr(M3Input))*(msq2(2,2)/Sqr(M3Input)
      - msu2(2,2)/Sqr(M3Input)))/(Sqr(M3Input)*Sqr(-1 + msq2(2,2)/Power(M3Input,2
      ))) + (msu2(2,2)*(-2 + msu2(2,2)/Sqr(M3Input))*(-(msq2(2,2)/Sqr(M3Input)) +
      msu2(2,2)/Sqr(M3Input)))/(Sqr(M3Input)*Sqr(-1 + msu2(2,2)/Power(M3Input,2)))
      ))/Sqr(msq2(2,2)/Power(M3Input,2) - msu2(2,2)/Power(M3Input,2))) + (4*Sqr(
      Log(msu2(2,2)/Sqr(M3Input)))*((msu2(2,2)*(-3 + (8*msu2(2,2))/Sqr(M3Input) -
      (4*Sqr(msu2(2,2)))/Power(M3Input,4)))/Sqr(M3Input) + (msq2(2,2)*(1 - (4*msu2
      (2,2))/Sqr(M3Input) + (2*Sqr(msu2(2,2)))/Power(M3Input,4)))/Sqr(M3Input)))/(
      Sqr(msq2(2,2)/Power(M3Input,2) - msu2(2,2)/Power(M3Input,2))*Sqr(-1 + msu2(2
      ,2)/Power(M3Input,2)))))/Sqr(M3Input) + (Sqr(Log(msu2(2,2)/Sqr(M3Input)))*(
      -6 + (8*msu2(2,2))/Sqr(M3Input) - (4*Sqr(msu2(2,2)))/Power(M3Input,4)))/Sqr(
      -1 + msu2(2,2)/Power(M3Input,2)) + (2*Log(msu2(2,2)/Sqr(M3Input))*(-7 + (7*
      msu2(2,2))/Sqr(M3Input) - (3*Sqr(msu2(2,2)))/Power(M3Input,4) + (msq2(2,2)*(
      6 - (5*msu2(2,2))/Sqr(M3Input) + (2*Sqr(msu2(2,2)))/Power(M3Input,4)))/Sqr(
      M3Input)))/((-1 + msq2(2,2)/Sqr(M3Input))*Sqr(-1 + msu2(2,2)/Power(M3Input,2
      ))) - (2*Power(M3Input,4)*((-1 + msq2(2,2)/Sqr(M3Input))*((4*msq2(2,2)*msu2(
      2,2)*PolyLog(2,((-1 + msu2(2,2)/Sqr(M3Input))*Sqr(M3Input))/msu2(2,2))*(-1 +
      msq2(2,2)/Sqr(M3Input)))/Power(M3Input,4) + (-1 + msu2(2,2)/Sqr(M3Input))*(
      (2*msu2(2,2)*(-1 + msu2(2,2)/Sqr(M3Input)))/Sqr(M3Input) + (msq2(2,2)*(-2 +
      (9*msu2(2,2))/Sqr(M3Input) - (6*Sqr(msu2(2,2)))/Power(M3Input,4)))/Sqr(
      M3Input) + (Sqr(msq2(2,2))*(2 - (6*msu2(2,2))/Sqr(M3Input) + (3*Sqr(msu2(2,2
      )))/Power(M3Input,4)))/Power(M3Input,4))) + (4*msq2(2,2)*msu2(2,2)*PolyLog(2
      ,((-1 + msq2(2,2)/Sqr(M3Input))*Sqr(M3Input))/msq2(2,2))*Sqr(-1 + msu2(2,2)
      /Sqr(M3Input)))/Power(M3Input,4)))/(msq2(2,2)*msu2(2,2)*Sqr(-1 + msq2(2,2)
      /Power(M3Input,2))*Sqr(-1 + msu2(2,2)/Power(M3Input,2))) + (Power(AtInput -
      MuInput/TanBeta,4)*((-4*Power(M3Input,4)*(Power(msq2(2,2),3)/Power(M3Input,6
      ) + (5*Power(msq2(2,2),3)*msu2(2,2))/Power(M3Input,8) - Power(msu2(2,2),3)
      /Power(M3Input,6) - (5*msq2(2,2)*Power(msu2(2,2),3))/Power(M3Input,8) + (
      msq2(2,2)*msu2(2,2)*PolyLog(2,((-1 + msq2(2,2)/Sqr(M3Input))*Sqr(M3Input))
      /msq2(2,2))*(-1 + msq2(2,2)/Sqr(M3Input))*(-1 + msu2(2,2)/Sqr(M3Input))*(-2
      + msq2(2,2)/Sqr(M3Input) + msu2(2,2)/Sqr(M3Input)))/Power(M3Input,4) - (msq2
      (2,2)*msu2(2,2)*PolyLog(2,((-1 + msu2(2,2)/Sqr(M3Input))*Sqr(M3Input))/msu2(
      2,2))*(-1 + msq2(2,2)/Sqr(M3Input))*(-1 + msu2(2,2)/Sqr(M3Input))*(-2 + msq2
      (2,2)/Sqr(M3Input) + msu2(2,2)/Sqr(M3Input)))/Power(M3Input,4) - Sqr(msq2(2,
      2))/Power(M3Input,4) - (6*msu2(2,2)*Sqr(msq2(2,2)))/Power(M3Input,6) + (5*
      Power(msu2(2,2),3)*Sqr(msq2(2,2)))/Power(M3Input,10) + Sqr(msu2(2,2))/Power(
      M3Input,4) + (6*msq2(2,2)*Sqr(msu2(2,2)))/Power(M3Input,6) - (5*Power(msq2(2
      ,2),3)*Sqr(msu2(2,2)))/Power(M3Input,10)))/(msq2(2,2)*msu2(2,2)*(-1 + msq2(2
      ,2)/Sqr(M3Input))*Power(msq2(2,2)/Sqr(M3Input) - msu2(2,2)/Sqr(M3Input),3)*(
      -1 + msu2(2,2)/Sqr(M3Input))) + (2*Sqr(Log(msq2(2,2)/Sqr(M3Input)))*((5*
      Power(msq2(2,2),4))/Power(M3Input,8) + (4*Power(msq2(2,2),3)*(-2 + msu2(2,2)
      /Sqr(M3Input)))/Power(M3Input,6) - (2*msu2(2,2))/Sqr(M3Input) - (msu2(2,2)*(
      10 + msu2(2,2)/Sqr(M3Input))*Sqr(msq2(2,2)))/Power(M3Input,6) + (2*msq2(2,2)
      *(1 + (4*msu2(2,2))/Sqr(M3Input) + Sqr(msu2(2,2))/Power(M3Input,4)))/Sqr(
      M3Input)))/(Power(msq2(2,2)/Sqr(M3Input) - msu2(2,2)/Sqr(M3Input),4)*Sqr(-1
      + msq2(2,2)/Power(M3Input,2))) + Log(Sqr(M3Input)/Sqr(SCALE))*((4*Log(msq2(2
      ,2)/Sqr(M3Input))*(2 + (3*msq2(2,2))/Sqr(M3Input) + (3*msu2(2,2))/Sqr(
      M3Input)))/Power(msq2(2,2)/Sqr(M3Input) - msu2(2,2)/Sqr(M3Input),3) - (4*Log
      (msu2(2,2)/Sqr(M3Input))*(2 + (3*msq2(2,2))/Sqr(M3Input) + (3*msu2(2,2))/Sqr
      (M3Input)))/Power(msq2(2,2)/Sqr(M3Input) - msu2(2,2)/Sqr(M3Input),3) - (4*
      Power(M3Input,4)*((6*msq2(2,2)*msu2(2,2))/Power(M3Input,4) + msq2(2,2)/Sqr(
      M3Input) + msu2(2,2)/Sqr(M3Input)))/(msq2(2,2)*msu2(2,2)*Sqr(msq2(2,2)/Power
      (M3Input,2) - msu2(2,2)/Power(M3Input,2)))) + Log(msq2(2,2)/Sqr(M3Input))*((
      2*(4 + (Power(msq2(2,2),3)*(16 - (15*msu2(2,2))/Sqr(M3Input)))/Power(M3Input
      ,6) + (3*msu2(2,2))/Sqr(M3Input) - (6*Sqr(msu2(2,2)))/Power(M3Input,4) + (
      Sqr(msq2(2,2))*(-29 + (31*msu2(2,2))/Sqr(M3Input) - (3*Sqr(msu2(2,2)))/Power
      (M3Input,4)))/Power(M3Input,4) + (msq2(2,2)*(7 - (15*msu2(2,2))/Sqr(M3Input)
      + (7*Sqr(msu2(2,2)))/Power(M3Input,4)))/Sqr(M3Input)))/(Power(msq2(2,2)/Sqr
      (M3Input) - msu2(2,2)/Sqr(M3Input),3)*(-1 + msu2(2,2)/Sqr(M3Input))*Sqr(-1 +
      msq2(2,2)/Power(M3Input,2))) + (2*Log(msu2(2,2)/Sqr(M3Input))*((-8*msq2(2,2
      )*msu2(2,2))/Power(M3Input,4) - (4*Sqr(msq2(2,2)))/Power(M3Input,4) - (msq2(
      2,2)*(-2 + msq2(2,2)/Sqr(M3Input))*(msq2(2,2)/Sqr(M3Input) - msu2(2,2)/Sqr(
      M3Input))*(msq2(2,2)/Sqr(M3Input) + msu2(2,2)/Sqr(M3Input)))/(Sqr(M3Input)*
      Sqr(-1 + msq2(2,2)/Power(M3Input,2))) - (4*Sqr(msu2(2,2)))/Power(M3Input,4)
      - (msu2(2,2)*(-2 + msu2(2,2)/Sqr(M3Input))*(-(msq2(2,2)/Sqr(M3Input)) + msu2
      (2,2)/Sqr(M3Input))*(msq2(2,2)/Sqr(M3Input) + msu2(2,2)/Sqr(M3Input)))/(Sqr(
      M3Input)*Sqr(-1 + msu2(2,2)/Power(M3Input,2)))))/Power(msq2(2,2)/Sqr(M3Input
      ) - msu2(2,2)/Sqr(M3Input),4)) + (2*Log(msu2(2,2)/Sqr(M3Input))*(-4 - (16*
      Power(msu2(2,2),3))/Power(M3Input,6) - (7*msu2(2,2))/Sqr(M3Input) + (29*Sqr(
      msu2(2,2)))/Power(M3Input,4) + (msq2(2,2)*(-3 + (15*Power(msu2(2,2),3))
      /Power(M3Input,6) + (15*msu2(2,2))/Sqr(M3Input) - (31*Sqr(msu2(2,2)))/Power(
      M3Input,4)))/Sqr(M3Input) + (Sqr(msq2(2,2))*(6 - (7*msu2(2,2))/Sqr(M3Input)
      + (3*Sqr(msu2(2,2)))/Power(M3Input,4)))/Power(M3Input,4)))/((-1 + msq2(2,2)
      /Sqr(M3Input))*Power(msq2(2,2)/Sqr(M3Input) - msu2(2,2)/Sqr(M3Input),3)*Sqr(
      -1 + msu2(2,2)/Power(M3Input,2))) - (2*Sqr(Log(msu2(2,2)/Sqr(M3Input)))*((8*
      Power(msu2(2,2),3))/Power(M3Input,6) - (5*Power(msu2(2,2),4))/Power(M3Input,
      8) - (2*msu2(2,2))/Sqr(M3Input) + (msu2(2,2)*(-2 + msu2(2,2)/Sqr(M3Input))*
      Sqr(msq2(2,2)))/Power(M3Input,6) - (2*msq2(2,2)*(-1 + (2*msu2(2,2))/Sqr(
      M3Input))*Sqr(-1 + msu2(2,2)/Sqr(M3Input)))/Sqr(M3Input)))/(Power(msq2(2,2)
      /Sqr(M3Input) - msu2(2,2)/Sqr(M3Input),4)*Sqr(-1 + msu2(2,2)/Power(M3Input,2
      )))))/Power(M3Input,4))*Power(Yu(2,2),4)) + (0.00012030447954708206*(1 + Sqr
      (TanBeta))*(0.5 - 8*If(Abs(-1 + Sqr(MuInput)/msq2(2,2)) < 0.00001, -1, (Log(
      Sqr(MuInput)/msq2(2,2))*Sqr(MuInput))/(msq2(2,2)*(1 - Sqr(MuInput)/msq2(2,2)
      ))) + 4*If(Abs(-1 + Sqr(MuInput)/msq2(2,2)) < 0.00001, -2.25, Re(((Log(Abs(1
      - Sqr(MuInput)/msq2(2,2)))*Log(Sqr(MuInput)/msq2(2,2)) + PolyLog(2,Sqr(
      MuInput)/msq2(2,2)) - 0.16666666666666666*Sqr(3.141592653589793) - (Log(Sqr(
      MuInput)/msq2(2,2))*Sqr(MuInput))/msq2(2,2))*(-1 + (2*Sqr(MuInput))/msq2(2,2
      ) + (2*Power(MuInput,4))/Sqr(msq2(2,2))))/Sqr(Abs(1 - Sqr(MuInput)/msq2(2,2)
      )))) - 4*Log(msq2(2,2)/Sqr(SCALE)) + (6*Sqr(MuInput))/msq2(2,2) - (2*If(Abs(
      -1 + Sqr(MuInput)/msq2(2,2)) < 0.00001, -1, (Log(Sqr(MuInput)/msq2(2,2))*Sqr
      (MuInput))/(msq2(2,2)*(1 - Sqr(MuInput)/msq2(2,2))))*Sqr(MuInput))/msq2(2,2)
      + (3*If(Abs(-1 + Sqr(MuInput)/msq2(2,2)) < 0.00001, 0.5, (1 + (Log(Sqr(
      MuInput)/msq2(2,2))*Sqr(MuInput))/(msq2(2,2)*(1 - Sqr(MuInput)/msq2(2,2))))/
      (1 - Sqr(MuInput)/msq2(2,2)))*Sqr(MuInput))/msq2(2,2) - (6*Log(msq2(2,2)/Sqr
      (SCALE))*Sqr(MuInput))/msq2(2,2) - 8.34993159891064/(1 + Sqr(TanBeta)) + (13
      *Log(msq2(2,2)/Sqr(SCALE)))/(1 + Sqr(TanBeta)) + (Power(AtInput -
      MuInput/TanBeta,6)*(-0.5 + 0.5*Log(msq2(2,2)/Sqr(SCALE)) + (0.5 - 0.5*Log(
      msq2(2,2)/Sqr(SCALE)))/(1 + Sqr(TanBeta))))/Power(msq2(2,2),3) + (Power(
      AtInput - MuInput/TanBeta,3)*((AtInput - MuInput/TanBeta)/Sqrt(msq2(2,2)) +
      (2*MuInput*Csc(2*ArcTan(TanBeta)))/Sqrt(msq2(2,2)))*(0.8747904000000002/(1 +
      Sqr(TanBeta)) - (2*Log(msq2(2,2)/Sqr(SCALE)))/(1 + Sqr(TanBeta))))/Power(
      msq2(2,2),1.5) + ((AtInput - MuInput/TanBeta)*((AtInput - MuInput/TanBeta)
      /Sqrt(msq2(2,2)) + (2*MuInput*Csc(2*ArcTan(TanBeta)))/Sqrt(msq2(2,2)))*(
      0.5008383999999992/(1 + Sqr(TanBeta)) + (12*Log(msq2(2,2)/Sqr(SCALE)))/(1 +
      Sqr(TanBeta))))/Sqrt(msq2(2,2)) + 3*Sqr(Log(msq2(2,2)/Sqr(SCALE))) - (3*Sqr(
      Log(msq2(2,2)/Sqr(SCALE))))/(1 + Sqr(TanBeta)) + (0.1252095999999998/(1 +
      Sqr(TanBeta)) + (3*Log(msq2(2,2)/Sqr(SCALE)))/(1 + Sqr(TanBeta)))*Sqr((
      AtInput - MuInput/TanBeta)/Sqrt(msq2(2,2)) + (2*MuInput*Csc(2*ArcTan(TanBeta
      )))/Sqrt(msq2(2,2))) + (Sqr(AtInput - MuInput/TanBeta)*(-7 + 4*If(Abs(-1 +
      Sqr(MuInput)/msq2(2,2)) < 0.00001, -1, (Log(Sqr(MuInput)/msq2(2,2))*Sqr(
      MuInput))/(msq2(2,2)*(1 - Sqr(MuInput)/msq2(2,2)))) - 4*If(Abs(-1 + Sqr(
      MuInput)/msq2(2,2)) < 0.00001, 0.5, (1 + (Log(Sqr(MuInput)/msq2(2,2))*Sqr(
      MuInput))/(msq2(2,2)*(1 - Sqr(MuInput)/msq2(2,2))))/(1 - Sqr(MuInput)/msq2(2
      ,2))) + 27*Log(msq2(2,2)/Sqr(SCALE)) - (6*Sqr(MuInput))/msq2(2,2) - (6*If(
      Abs(-1 + Sqr(MuInput)/msq2(2,2)) < 0.00001, -1, (Log(Sqr(MuInput)/msq2(2,2))
      *Sqr(MuInput))/(msq2(2,2)*(1 - Sqr(MuInput)/msq2(2,2))))*Sqr(MuInput))/msq2(
      2,2) - (6*If(Abs(-1 + Sqr(MuInput)/msq2(2,2)) < 0.00001, 0.5, (1 + (Log(Sqr(
      MuInput)/msq2(2,2))*Sqr(MuInput))/(msq2(2,2)*(1 - Sqr(MuInput)/msq2(2,2))))/
      (1 - Sqr(MuInput)/msq2(2,2)))*Sqr(MuInput))/msq2(2,2) + (6*Log(msq2(2,2)/Sqr
      (SCALE))*Sqr(MuInput))/msq2(2,2) + 19.6878144/(1 + Sqr(TanBeta)) - (24*Log(
      msq2(2,2)/Sqr(SCALE)))/(1 + Sqr(TanBeta)) + (-0.021147733333332752/(1 + Sqr(
      TanBeta)) - (3*Log(msq2(2,2)/Sqr(SCALE)))/(1 + Sqr(TanBeta)))*Sqr((AtInput -
      MuInput/TanBeta)/Sqrt(msq2(2,2)) + (2*MuInput*Csc(2*ArcTan(TanBeta)))/Sqrt(
      msq2(2,2)))))/msq2(2,2) + (Power(AtInput - MuInput/TanBeta,4)*(5.5 - 0.5*If(
      Abs(-1 + Sqr(MuInput)/msq2(2,2)) < 0.00001, -1, (Log(Sqr(MuInput)/msq2(2,2))
      *Sqr(MuInput))/(msq2(2,2)*(1 - Sqr(MuInput)/msq2(2,2)))) + 0.5*If(Abs(-1 +
      Sqr(MuInput)/msq2(2,2)) < 0.00001, 0.5, (1 + (Log(Sqr(MuInput)/msq2(2,2))*
      Sqr(MuInput))/(msq2(2,2)*(1 - Sqr(MuInput)/msq2(2,2))))/(1 - Sqr(MuInput)
      /msq2(2,2))) - 6.5*Log(msq2(2,2)/Sqr(SCALE)) + Sqr(MuInput)/msq2(2,2) + (If(
      Abs(-1 + Sqr(MuInput)/msq2(2,2)) < 0.00001, -1, (Log(Sqr(MuInput)/msq2(2,2))
      *Sqr(MuInput))/(msq2(2,2)*(1 - Sqr(MuInput)/msq2(2,2))))*Sqr(MuInput))/msq2(
      2,2) + (0.5*If(Abs(-1 + Sqr(MuInput)/msq2(2,2)) < 0.00001, 0.5, (1 + (Log(
      Sqr(MuInput)/msq2(2,2))*Sqr(MuInput))/(msq2(2,2)*(1 - Sqr(MuInput)/msq2(2,2)
      )))/(1 - Sqr(MuInput)/msq2(2,2)))*Sqr(MuInput))/msq2(2,2) - (Log(msq2(2,2)
      /Sqr(SCALE))*Sqr(MuInput))/msq2(2,2) - 6.25/(1 + Sqr(TanBeta)) + (6*Log(msq2
      (2,2)/Sqr(SCALE)))/(1 + Sqr(TanBeta)) + (-0.020728533333333354/(1 + Sqr(
      TanBeta)) + (0.5*Log(msq2(2,2)/Sqr(SCALE)))/(1 + Sqr(TanBeta)))*Sqr((AtInput
      - MuInput/TanBeta)/Sqrt(msq2(2,2)) + (2*MuInput*Csc(2*ArcTan(TanBeta)))
      /Sqrt(msq2(2,2)))))/Sqr(msq2(2,2)))*Power(Yu(2,2),6))/Sqr(TanBeta)) +
      UnitStep(-1 + LambdaLoopOrder)*UnitStep(-1 + THRESHOLD)*(
      0.006332573977646111*(-0.09*Power(g1,4) - 0.3*Sqr(g1)*Sqr(g2) - Power(g2,4)*
      (0.75 - 0.16666666666666666*Sqr(Cos(2*ArcTan(TanBeta))))) -
      0.0010554289962743518*(2*Power(g2,4)*Log(Sqr(M2Input)/Sqr(SCALE)) + (0.36*
      Power(g1,4) + Power(g2,4))*Log(Sqr(MuInput)/Sqr(SCALE)))*Sqr(Cos(2*ArcTan(
      TanBeta))) + 0.006332573977646111*(0.5*Log(Sqr(MuInput)/Sqr(SCALE))*(-2*(Sqr
      (g2)/(1 + Sqr(TanBeta)) + (0.6*Sqr(g1)*Sqr(TanBeta))/(1 + Sqr(TanBeta)))*((
      0.6*Sqr(g1))/(1 + Sqr(TanBeta)) + (Sqr(g2)*Sqr(TanBeta))/(1 + Sqr(TanBeta)))
      + 0.5*(0.6*Sqr(g1) + Sqr(g2))*((0.6*Sqr(g1))/(1 + Sqr(TanBeta)) + (3*Sqr(g2
      ))/(1 + Sqr(TanBeta)) + (0.6*Sqr(g1)*Sqr(TanBeta))/(1 + Sqr(TanBeta)) + (3*
      Sqr(g2)*Sqr(TanBeta))/(1 + Sqr(TanBeta)))*Sqr(Cos(2*ArcTan(TanBeta))) - (
      0.36*Power(g1,4))/Sqr(1 + Sqr(TanBeta)) - (5*Power(g2,4))/Sqr(1 + Sqr(
      TanBeta)) - (0.36*Power(g1,4)*Power(TanBeta,4))/Sqr(1 + Sqr(TanBeta)) - (5*
      Power(g2,4)*Power(TanBeta,4))/Sqr(1 + Sqr(TanBeta)) - (2.4*Sqr(g1)*Sqr(g2)*
      Sqr(TanBeta))/Sqr(1 + Sqr(TanBeta))) + (0.4*TanBeta*Sqr(g1)*(-2*((0.6*Sqr(g1
      ))/(1 + Sqr(TanBeta)) + (0.6*Sqr(g1)*Sqr(TanBeta))/(1 + Sqr(TanBeta))) +
      0.25*(0.6*Sqr(g1) + Sqr(g2))*Sqr(Cos(2*ArcTan(TanBeta))))*TCf0(
      M1Input/MuInput))/(1 + Sqr(TanBeta)) + (2*TanBeta*Sqr(g2)*(-2*(Sqr(g2)/(1 +
      Sqr(TanBeta)) + (Sqr(g2)*Sqr(TanBeta))/(1 + Sqr(TanBeta))) + 0.25*(0.6*Sqr(
      g1) + Sqr(g2))*Sqr(Cos(2*ArcTan(TanBeta))))*TCf0(M2Input/MuInput))/(1 + Sqr(
      TanBeta)) + 0.08333333333333333*(0.6*Sqr(g1) + Sqr(g2))*((0.6*Sqr(g1))/(1 +
      Sqr(TanBeta)) + (0.6*Sqr(g1)*Sqr(TanBeta))/(1 + Sqr(TanBeta)))*Sqr(Cos(2*
      ArcTan(TanBeta)))*TCg0(M1Input/MuInput) + 0.25*(0.6*Sqr(g1) + Sqr(g2))*(Sqr(
      g2)/(1 + Sqr(TanBeta)) + (Sqr(g2)*Sqr(TanBeta))/(1 + Sqr(TanBeta)))*Sqr(Cos(
      2*ArcTan(TanBeta)))*TCg0(M2Input/MuInput) - 0.5833333333333334*((0.36*Power(
      g1,4))/Sqr(1 + Sqr(TanBeta)) + (0.36*Power(g1,4)*Power(TanBeta,4))/Sqr(1 +
      Sqr(TanBeta)))*TCf(1)(M1Input/MuInput) - 2.25*(Power(g2,4)/Sqr(1 + Sqr(
      TanBeta)) + (Power(g2,4)*Power(TanBeta,4))/Sqr(1 + Sqr(TanBeta)))*TCf(2)(
      M2Input/MuInput) - (0.54*Power(g1,4)*Sqr(TanBeta)*TCf(3)(M1Input/MuInput))
      /Sqr(1 + Sqr(TanBeta)) - (3.5*Power(g2,4)*Sqr(TanBeta)*TCf(4)(
      M2Input/MuInput))/Sqr(1 + Sqr(TanBeta)) - (1.6*Sqr(g1)*Sqr(g2)*Sqr(TanBeta)*
      TCf(5)(M1Input/MuInput,M2Input/MuInput))/Sqr(1 + Sqr(TanBeta)) -
      1.1666666666666667*((0.6*Sqr(g1)*Sqr(g2))/Sqr(1 + Sqr(TanBeta)) + (0.6*Power
      (TanBeta,4)*Sqr(g1)*Sqr(g2))/Sqr(1 + Sqr(TanBeta)))*TCf(6)(M1Input/MuInput,
      M2Input/MuInput) - (0.2*Sqr(g1)*Sqr(g2)*Sqr(TanBeta)*TCf(7)(M1Input/MuInput,
      M2Input/MuInput))/Sqr(1 + Sqr(TanBeta)) - (2.065591117977289*g1*g2*TanBeta*(
      (0.7745966692414834*g1*g2)/(1 + Sqr(TanBeta)) + (0.7745966692414834*g1*g2*
      Sqr(TanBeta))/(1 + Sqr(TanBeta)))*TCf(8)(M1Input/MuInput,M2Input/MuInput))/(
      1 + Sqr(TanBeta))) + (0.012665147955292222*Sqr(MuInput)*Sqr(TanBeta)*Power(
      Ye(2,2),4)*(TCF(1)(Sqrt(msl2(2,2)/mse2(2,2))) - (0.08333333333333333*Sqr(
      MuInput)*Sqr(TanBeta)*TCF(2)(Sqrt(msl2(2,2)/mse2(2,2))))/(Sqrt(mse2(2,2))*
      Sqrt(msl2(2,2)))))/(Sqrt(mse2(2,2))*Sqrt(msl2(2,2))*Power(1 -
      0.006332573977646111*TanBeta*(1.5*M2Input*MuInput*Sqr(g2)*TCIabc(Sqrt(msl2(2
      ,2)),M2Input,MuInput) - 0.6*M1Input*Sqr(g1)*(-(MuInput*TCIabc(Sqrt(mse2(2,2)
      ),M1Input,MuInput)) + 0.5*MuInput*TCIabc(Sqrt(msl2(2,2)),M1Input,MuInput) -
      MuInput*TCIabc(Sqrt(msl2(2,2)),Sqrt(mse2(2,2)),M1Input))),4)) + (
      0.037995443865876666*Sqr(MuInput)*Sqr(TanBeta)*Power(Yd(2,2),4)*(TCF(1)(Sqrt
      (msq2(2,2)/msd2(2,2))) - (0.08333333333333333*Sqr(MuInput)*Sqr(TanBeta)*TCF(
      2)(Sqrt(msq2(2,2)/msd2(2,2))))/(Sqrt(msd2(2,2))*Sqrt(msq2(2,2)))))/(Sqrt(
      msd2(2,2))*Sqrt(msq2(2,2))*Power(1 - 0.006332573977646111*(
      -2.6666666666666665*M3Input*MuInput*TanBeta*Sqr(g3)*TCIabc(Sqrt(msq2(2,2)),
      Sqrt(msd2(2,2)),M3Input) - (MuInput*(AtInput - MuInput/TanBeta)*(1 + Sqr(
      TanBeta))*Sqr(Yu(2,2))*TCIabc(Sqrt(msq2(2,2)),Sqrt(msu2(2,2)),MuInput))
      /TanBeta),4)) + 0.006332573977646111*(0.00020833333333333335*Log(Sqr(mAInput
      )/Sqr(SCALE))*(261*Power(g1,4) + 1325*Power(g2,4) + 630*Sqr(g1)*Sqr(g2) - 4*
      Cos(4*ArcTan(TanBeta))*(9*Power(g1,4) + 175*Power(g2,4) + 90*Sqr(g1)*Sqr(g2)
      ) - 9*Cos(8*ArcTan(TanBeta))*Sqr(3*Power(g1,2) + 5*Power(g2,2))) +
      0.0033333333333333335*(6*Power(g1,4)*(Log(msd2(0,0)/Sqr(SCALE)) + Log(msd2(1
      ,1)/Sqr(SCALE)) + Log(msd2(2,2)/Sqr(SCALE))) + 18*Power(g1,4)*(Log(mse2(0,0)
      /Sqr(SCALE)) + Log(mse2(1,1)/Sqr(SCALE)) + Log(mse2(2,2)/Sqr(SCALE))) + (9*
      Power(g1,4) + 25*Power(g2,4))*(Log(msl2(0,0)/Sqr(SCALE)) + Log(msl2(1,1)/Sqr
      (SCALE)) + Log(msl2(2,2)/Sqr(SCALE))) + 3*(Power(g1,4) + 25*Power(g2,4))*(
      Log(msq2(0,0)/Sqr(SCALE)) + Log(msq2(1,1)/Sqr(SCALE)) + Log(msq2(2,2)/Sqr(
      SCALE))) + 24*Power(g1,4)*(Log(msu2(0,0)/Sqr(SCALE)) + Log(msu2(1,1)/Sqr(
      SCALE)) + Log(msu2(2,2)/Sqr(SCALE))))*Sqr(Cos(2*ArcTan(TanBeta))) - 0.1875*
      Sqr(0.6*Power(g1,2) + Power(g2,2))*Sqr(Sin(4*ArcTan(TanBeta))) + 3*Log(msu2(
      2,2)/Sqr(SCALE))*Sqr(Yu(2,2))*(0.4*Cos(2*ArcTan(TanBeta))*Sqr(g1) + Sqr(Yu(2
      ,2))) + 3*Log(msq2(2,2)/Sqr(SCALE))*Sqr(Yu(2,2))*(0.5*Cos(2*ArcTan(TanBeta))
      *(-0.2*Sqr(g1) + Sqr(g2)) + Sqr(Yu(2,2))) + (6*Sqr(AtInput - MuInput/TanBeta
      )*Power(Yu(2,2),4)*(TCF(1)(Sqrt(Abs(msq2(2,2)/msu2(2,2)))) - (
      0.08333333333333333*Sqr(AtInput - MuInput/TanBeta)*TCF(2)(Sqrt(Abs(msq2(2,2)
      /msu2(2,2)))))/Sqrt(Abs(msq2(2,2)*msu2(2,2)))))/Sqrt(Abs(msq2(2,2)*msu2(2,2)
      )) + (0.75*Cos(2*ArcTan(TanBeta))*Sqr(AtInput - MuInput/TanBeta)*Sqr(Yu(2,2)
      )*(0.6*Sqr(g1)*TCF(3)(Sqrt(Abs(msq2(2,2)/msu2(2,2)))) + Sqr(g2)*TCF(4)(Sqrt(
      Abs(msq2(2,2)/msu2(2,2))))))/Sqrt(Abs(msq2(2,2)*msu2(2,2))) - (0.25*(0.6*Sqr
      (g1) + Sqr(g2))*Sqr(AtInput - MuInput/TanBeta)*Sqr(Cos(2*ArcTan(TanBeta)))*
      Sqr(Yu(2,2))*TCF(5)(Sqrt(Abs(msq2(2,2)/msu2(2,2)))))/Sqrt(Abs(msq2(2,2)*msu2
      (2,2)))))));


   check_non_perturbative();


}

bool HSSUSY_high_scale_constraint<Two_scale>::check_non_perturbative()
{
   bool problem = false;

   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto g3 = MODELPARAMETER(g3);
   const auto Lambdax = MODELPARAMETER(Lambdax);
   const auto Yu = MODELPARAMETER(Yu);
   const auto Yd = MODELPARAMETER(Yd);
   const auto Ye = MODELPARAMETER(Ye);

   if (MaxAbsValue(g1) > 3.5449077018110318) {
      problem = true;
      model->get_problems().flag_non_perturbative_parameter("g1", MaxAbsValue(g1), model->get_scale(), 3.5449077018110318);
   } else {
      model->get_problems().unflag_non_perturbative_parameter("g1");
   }
   if (MaxAbsValue(g2) > 3.5449077018110318) {
      problem = true;
      model->get_problems().flag_non_perturbative_parameter("g2", MaxAbsValue(g2), model->get_scale(), 3.5449077018110318);
   } else {
      model->get_problems().unflag_non_perturbative_parameter("g2");
   }
   if (MaxAbsValue(g3) > 3.5449077018110318) {
      problem = true;
      model->get_problems().flag_non_perturbative_parameter("g3", MaxAbsValue(g3), model->get_scale(), 3.5449077018110318);
   } else {
      model->get_problems().unflag_non_perturbative_parameter("g3");
   }
   if (MaxAbsValue(Lambdax) > 3.5449077018110318) {
      problem = true;
      model->get_problems().flag_non_perturbative_parameter("Lambdax", MaxAbsValue(Lambdax), model->get_scale(), 3.5449077018110318);
   } else {
      model->get_problems().unflag_non_perturbative_parameter("Lambdax");
   }
   if (MaxAbsValue(Yu) > 3.5449077018110318) {
      problem = true;
      model->get_problems().flag_non_perturbative_parameter("Yu", MaxAbsValue(Yu), model->get_scale(), 3.5449077018110318);
   } else {
      model->get_problems().unflag_non_perturbative_parameter("Yu");
   }
   if (MaxAbsValue(Yd) > 3.5449077018110318) {
      problem = true;
      model->get_problems().flag_non_perturbative_parameter("Yd", MaxAbsValue(Yd), model->get_scale(), 3.5449077018110318);
   } else {
      model->get_problems().unflag_non_perturbative_parameter("Yd");
   }
   if (MaxAbsValue(Ye) > 3.5449077018110318) {
      problem = true;
      model->get_problems().flag_non_perturbative_parameter("Ye", MaxAbsValue(Ye), model->get_scale(), 3.5449077018110318);
   } else {
      model->get_problems().unflag_non_perturbative_parameter("Ye");
   }


   return problem;
}

double HSSUSY_high_scale_constraint<Two_scale>::get_scale() const
{
   return scale;
}

double HSSUSY_high_scale_constraint<Two_scale>::get_initial_scale_guess() const
{
   return initial_scale_guess;
}

const HSSUSY_input_parameters& HSSUSY_high_scale_constraint<Two_scale>::get_input_parameters() const
{
   return model->get_input();
}

HSSUSY<Two_scale>* HSSUSY_high_scale_constraint<Two_scale>::get_model() const
{
   return model;
}

void HSSUSY_high_scale_constraint<Two_scale>::set_model(Two_scale_model* model_)
{
   model = cast_model<HSSUSY<Two_scale>*>(model_);
}

void HSSUSY_high_scale_constraint<Two_scale>::set_scale(double s)
{
   scale = s;
}

void HSSUSY_high_scale_constraint<Two_scale>::clear()
{
   scale = 0.;
   initial_scale_guess = 0.;
   model = NULL;
}

void HSSUSY_high_scale_constraint<Two_scale>::initialize()
{
   assert(model && "HSSUSY_high_scale_constraint<Two_scale>::"
          "initialize(): model pointer is zero.");

   const auto MSUSY = INPUTPARAMETER(MSUSY);

   initial_scale_guess = MSUSY;

   scale = initial_scale_guess;
}

void HSSUSY_high_scale_constraint<Two_scale>::update_scale()
{
   assert(model && "HSSUSY_high_scale_constraint<Two_scale>::"
          "update_scale(): model pointer is zero.");

   const double currentScale = model->get_scale();
   const HSSUSY_soft_parameters beta_functions(model->calc_beta());

   const auto MSUSY = INPUTPARAMETER(MSUSY);

   scale = MSUSY;


   if (errno == ERANGE) {
#ifdef ENABLE_VERBOSE
      ERROR("HSSUSY_high_scale_constraint<Two_scale>: Overflow error"
            " during calculation of high scale: " << strerror(errno) << '\n'
            << "   current scale = " << currentScale << '\n'
            << "   new scale = " << scale << '\n'
            << "   resetting scale to " << get_initial_scale_guess());
#endif
      scale = get_initial_scale_guess();
      errno = 0;
   }


}

} // namespace flexiblesusy
