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

// File generated at Sat 27 Aug 2016 12:50:26

#include "MSSMNoFVatMGUT_effective_couplings.hpp"

#include "effective_couplings.hpp"
#include "standard_model.hpp"
#include "wrappers.hpp"

namespace flexiblesusy {

using namespace effective_couplings;

#define INPUTPARAMETER(parameter) model.get_input().parameter
#define MODELPARAMETER(parameter) model.get_##parameter()
#define DERIVEDPARAMETER(parameter) model.##parameter()
#define PHASE(parameter) model.get_##parameter()
#define PHYSICAL(parameter) model.get_physical().parameter

MSSMNoFVatMGUT_effective_couplings::MSSMNoFVatMGUT_effective_couplings(
   const MSSMNoFVatMGUT_mass_eigenstates& model_,
   const softsusy::QedQcd& qedqcd_,
   const Physical_input& input_)
   : model(model_), qedqcd(qedqcd_), physical_input(input_)
   , rg_improve(true), include_qcd_corrections(true)
   , ZD(MODELPARAMETER(ZD)), ZU(MODELPARAMETER(ZU)), ZE(MODELPARAMETER(ZE)), ZM
      (MODELPARAMETER(ZM)), ZTau(MODELPARAMETER(ZTau)), ZS(MODELPARAMETER(ZS)), ZC
      (MODELPARAMETER(ZC)), ZB(MODELPARAMETER(ZB)), ZT(MODELPARAMETER(ZT)), ZH(
      MODELPARAMETER(ZH)), ZA(MODELPARAMETER(ZA)), ZP(MODELPARAMETER(ZP)), ZN(
      MODELPARAMETER(ZN)), UM(MODELPARAMETER(UM)), UP(MODELPARAMETER(UP)), ZZ(
      MODELPARAMETER(ZZ))

   , eff_CphhVPVP(Eigen::Array<std::complex<double>,2,1>::Zero()), eff_CphhVGVG
      (Eigen::Array<std::complex<double>,2,1>::Zero()), eff_CpAhVPVP(Eigen::Array<
      std::complex<double>,2,1>::Zero()), eff_CpAhVGVG(Eigen::Array<std::complex<
      double>,2,1>::Zero())

{
}

MSSMNoFVatMGUT_effective_couplings::~MSSMNoFVatMGUT_effective_couplings()
{
}

void MSSMNoFVatMGUT_effective_couplings::calculate_effective_couplings()
{
   const double scale = model.get_scale();
   const Eigen::ArrayXd saved_parameters(model.get());

   const double saved_mt = PHYSICAL(MFt);
   PHYSICAL(MFt) = qedqcd.displayPoleMt();

   const auto Mhh = PHYSICAL(Mhh);
   for (unsigned gO1 = 0; gO1 < 2; ++gO1) {
      if (rg_improve && scale > Mhh(gO1)) {
         model.run_to(Mhh(gO1));
      }
      model.calculate_DRbar_masses();
      copy_mixing_matrices_from_model();
      run_SM_strong_coupling_to(0.5 * Mhh(gO1));
      calculate_eff_CphhVPVP(gO1);
      run_SM_strong_coupling_to(Mhh(gO1));
      calculate_eff_CphhVGVG(gO1);
   }

   const auto MAh = PHYSICAL(MAh);
   for (unsigned gO1 = 1; gO1 < 2; ++gO1) {
      if (rg_improve && scale > MAh(gO1)) {
         model.run_to(MAh(gO1));
      }
      model.calculate_DRbar_masses();
      copy_mixing_matrices_from_model();
      run_SM_strong_coupling_to(0.5 * MAh(gO1));
      calculate_eff_CpAhVPVP(gO1);
      run_SM_strong_coupling_to(MAh(gO1));
      calculate_eff_CpAhVGVG(gO1);
   }

   PHYSICAL(MFt) = saved_mt;
   model.set_scale(scale);
   model.set(saved_parameters);

}

void MSSMNoFVatMGUT_effective_couplings::set_model(const MSSMNoFVatMGUT_mass_eigenstates& model_)
{
   model = model_;
   copy_mixing_matrices_from_model();
}

void MSSMNoFVatMGUT_effective_couplings::copy_mixing_matrices_from_model()
{
   ZD = MODELPARAMETER(ZD);
   ZU = MODELPARAMETER(ZU);
   ZE = MODELPARAMETER(ZE);
   ZM = MODELPARAMETER(ZM);
   ZTau = MODELPARAMETER(ZTau);
   ZS = MODELPARAMETER(ZS);
   ZC = MODELPARAMETER(ZC);
   ZB = MODELPARAMETER(ZB);
   ZT = MODELPARAMETER(ZT);
   ZH = MODELPARAMETER(ZH);
   ZA = MODELPARAMETER(ZA);
   ZP = MODELPARAMETER(ZP);
   ZN = MODELPARAMETER(ZN);
   UM = MODELPARAMETER(UM);
   UP = MODELPARAMETER(UP);
   ZZ = MODELPARAMETER(ZZ);

}

void MSSMNoFVatMGUT_effective_couplings::run_SM_strong_coupling_to(double m)
{
   using namespace standard_model;

   Standard_model sm;

   sm.set_loops(2);
   sm.set_thresholds(2);
   sm.set_low_energy_data(qedqcd);
   sm.set_physical_input(physical_input);

   sm.initialise_from_input();
   sm.run_to(m);

   model.set_g3(sm.get_g3());

}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::scalar_scalar_qcd_factor(double m_decay, double m_loop) const
{
   std::complex<double> result(1.0, 0.0);

   if (include_qcd_corrections) {
      const auto g3 = MODELPARAMETER(g3);
      if (m_loop > m_decay) {
         result = 1 + 0.06754745576155852*Sqr(g3);
      }

   }

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::scalar_fermion_qcd_factor(double m_decay, double m_loop) const
{
   std::complex<double> result(1.0, 0.0);

   if (include_qcd_corrections) {
      const auto g3 = MODELPARAMETER(g3);
      result = 1.0 + 0.025330295910584444*Sqr(g3) *
         scalar_diphoton_fermion_loop(m_decay, m_loop);

   }

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::pseudoscalar_fermion_qcd_factor(double m_decay, double m_loop) const
{
   std::complex<double> result(1.0, 0.0);

   if (include_qcd_corrections) {
      const auto g3 = MODELPARAMETER(g3);
      result = 1.0 + 0.025330295910584444*Sqr(g3) *
         pseudoscalar_diphoton_fermion_loop(m_decay, m_loop);

   }

   return result;
}

double MSSMNoFVatMGUT_effective_couplings::number_of_active_flavours(double m) const
{
   if (m < qedqcd.displayMbMb()) {
      return 4.0;
   } else if (m < qedqcd.displayPoleMt()) {
      return 5.0;
   } else {
      return 6.0;
   }
}

double MSSMNoFVatMGUT_effective_couplings::scalar_scaling_factor(double m) const
{
   const double Nf = number_of_active_flavours(m);
   const double mtpole = qedqcd.displayPoleMt();
   const double l = Log(Sqr(m) / Sqr(mtpole));

   const auto g3 = MODELPARAMETER(g3);

   const double nlo_qcd = 0.025330295910584444*(23.75 - 1.1666666666666667*Nf)*
      Sqr(g3);
   const double nnlo_qcd = 0.000641623890917771*Power(g3,4)*(370.1956513893174
      + 2.375*l + (-47.18640261449638 + 0.6666666666666666*l)*Nf +
      0.9017702481178881*Sqr(Nf));
   const double nnnlo_qcd = 0.000016252523020247696*Power(g3,6)*(467.683620788
      + 122.440972222*l + 10.9409722222*Sqr(l));

   return Sqrt(1.0 + nlo_qcd + nnlo_qcd + nnnlo_qcd);
}

double MSSMNoFVatMGUT_effective_couplings::pseudoscalar_scaling_factor(double m) const
{
   const double Nf = number_of_active_flavours(m);
   const double mtpole = qedqcd.displayPoleMt();
   const double l = Log(Sqr(m) / Sqr(mtpole));

   const auto g3 = MODELPARAMETER(g3);

   const double nlo_qcd = 0.025330295910584444*(24.25 - 1.1666666666666667*Nf)*
      Sqr(g3);
   const double nnlo_qcd = 0.000641623890917771*Power(g3,4)*(171.54400563089382
      + 5*l);
   const double nnnlo_qcd = 0;

   return Sqrt(1.0 + nlo_qcd + nnlo_qcd + nnnlo_qcd);
}

double MSSMNoFVatMGUT_effective_couplings::get_hhVPVP_partial_width(unsigned gO1) const
{
   const double mass = PHYSICAL(Mhh)(gO1);
   return 0.0049735919716217296 * Power(mass, 3.0) * AbsSqr(eff_CphhVPVP(gO1));
}

double MSSMNoFVatMGUT_effective_couplings::get_hhVGVG_partial_width(unsigned gO1) const
{
   const double mass = PHYSICAL(Mhh)(gO1);
   return 0.039788735772973836 * Power(mass, 3.0) * AbsSqr(eff_CphhVGVG(gO1));
}

double MSSMNoFVatMGUT_effective_couplings::get_AhVPVP_partial_width(unsigned gO1) const
{
   const double mass = PHYSICAL(MAh)(gO1);
   return 0.0049735919716217296 * Power(mass, 3.0) * AbsSqr(eff_CpAhVPVP(gO1));
}

double MSSMNoFVatMGUT_effective_couplings::get_AhVGVG_partial_width(unsigned gO1) const
{
   const double mass = PHYSICAL(MAh)(gO1);
   return 0.039788735772973836 * Power(mass, 3.0) * AbsSqr(eff_CpAhVGVG(gO1));
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpFdhhbarFdPL(unsigned gt2) const
{
   const auto Yd = MODELPARAMETER(Yd);

   std::complex<double> result;

   result = -0.7071067811865475*Yd(0,0)*ZH(gt2,0);

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpFshhbarFsPL(unsigned gt2) const
{
   const auto Yd = MODELPARAMETER(Yd);

   std::complex<double> result;

   result = -0.7071067811865475*Yd(1,1)*ZH(gt2,0);

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpFbhhbarFbPL(unsigned gt2) const
{
   const auto Yd = MODELPARAMETER(Yd);

   std::complex<double> result;

   result = -0.7071067811865475*Yd(2,2)*ZH(gt2,0);

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpFuhhbarFuPL(unsigned gt2) const
{
   const auto Yu = MODELPARAMETER(Yu);

   std::complex<double> result;

   result = -0.7071067811865475*Yu(0,0)*ZH(gt2,1);

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpFchhbarFcPL(unsigned gt2) const
{
   const auto Yu = MODELPARAMETER(Yu);

   std::complex<double> result;

   result = -0.7071067811865475*Yu(1,1)*ZH(gt2,1);

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpFthhbarFtPL(unsigned gt2) const
{
   const auto Yu = MODELPARAMETER(Yu);

   std::complex<double> result;

   result = -0.7071067811865475*Yu(2,2)*ZH(gt2,1);

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpFehhbarFePL(unsigned gt2) const
{
   const auto Ye = MODELPARAMETER(Ye);

   std::complex<double> result;

   result = -0.7071067811865475*Ye(0,0)*ZH(gt2,0);

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpFmhhbarFmPL(unsigned gt2) const
{
   const auto Ye = MODELPARAMETER(Ye);

   std::complex<double> result;

   result = -0.7071067811865475*Ye(1,1)*ZH(gt2,0);

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpFtauhhbarFtauPL(unsigned gt2) const
{
   const auto Ye = MODELPARAMETER(Ye);

   std::complex<double> result;

   result = -0.7071067811865475*Ye(2,2)*ZH(gt2,0);

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CphhSdconjSd(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYd = MODELPARAMETER(TYd);
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto Yd = MODELPARAMETER(Yd);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   result = 0.05*(-2*Conj(ZD(gt2,1))*(7.0710678118654755*Conj(TYd(0,0))*ZD(gt3,
      0)*ZH(gt1,0) - 7.0710678118654755*Conj(Yd(0,0))*Mu*ZD(gt3,0)*ZH(gt1,1) + ZD(
      gt3,1)*(-(vd*(-10*AbsSqr(Yd(0,0)) + Sqr(g1))*ZH(gt1,0)) + vu*Sqr(g1)*ZH(gt1,
      1))) + Conj(ZD(gt2,0))*(ZD(gt3,0)*(vd*(-20*AbsSqr(Yd(0,0)) + Sqr(g1) + 5*Sqr
      (g2))*ZH(gt1,0) - vu*(Sqr(g1) + 5*Sqr(g2))*ZH(gt1,1)) + 14.142135623730951*
      ZD(gt3,1)*(Conj(Mu)*Yd(0,0)*ZH(gt1,1) - ZH(gt1,0)*TYd(0,0))));

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CphhSuconjSu(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYu = MODELPARAMETER(TYu);
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto Yu = MODELPARAMETER(Yu);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   result = 0.05*(2*Conj(ZU(gt2,1))*(-7.0710678118654755*Conj(TYu(0,0))*ZH(gt1,
      1)*ZU(gt3,0) + 2*Sqr(g1)*(-(vd*ZH(gt1,0)) + vu*ZH(gt1,1))*ZU(gt3,1) + 5*Conj
      (Yu(0,0))*(1.4142135623730951*Mu*ZH(gt1,0)*ZU(gt3,0) - 2*vu*Yu(0,0)*ZH(gt1,1
      )*ZU(gt3,1))) + Conj(ZU(gt2,0))*(ZH(gt1,0)*(vd*(Sqr(g1) - 5*Sqr(g2))*ZU(gt3,
      0) + 14.142135623730951*Conj(Mu)*Yu(0,0)*ZU(gt3,1)) - ZH(gt1,1)*(vu*(20*
      AbsSqr(Yu(0,0)) + Sqr(g1) - 5*Sqr(g2))*ZU(gt3,0) + 14.142135623730951*ZU(gt3
      ,1)*TYu(0,0))));

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CphhSeconjSe(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYe = MODELPARAMETER(TYe);
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto Ye = MODELPARAMETER(Ye);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   result = 0.05*(-2*Conj(ZE(gt2,1))*(7.0710678118654755*Conj(TYe(0,0))*ZE(gt3,
      0)*ZH(gt1,0) - 7.0710678118654755*Conj(Ye(0,0))*Mu*ZE(gt3,0)*ZH(gt1,1) + ZE(
      gt3,1)*((10*vd*AbsSqr(Ye(0,0)) - 3*vd*Sqr(g1))*ZH(gt1,0) + 3*vu*Sqr(g1)*ZH(
      gt1,1))) + Conj(ZE(gt2,0))*(ZE(gt3,0)*(vd*(-20*AbsSqr(Ye(0,0)) - 3*Sqr(g1) +
      5*Sqr(g2))*ZH(gt1,0) + vu*(3*Sqr(g1) - 5*Sqr(g2))*ZH(gt1,1)) +
      14.142135623730951*ZE(gt3,1)*(Conj(Mu)*Ye(0,0)*ZH(gt1,1) - ZH(gt1,0)*TYe(0,0
      ))));

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CphhSmconjSm(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYe = MODELPARAMETER(TYe);
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto Ye = MODELPARAMETER(Ye);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   result = 0.25*(-2*Conj(ZM(gt2,1))*(1.4142135623730951*Conj(TYe(1,1))*ZH(gt1,
      0)*ZM(gt3,0) + 0.6*Sqr(g1)*(-(vd*ZH(gt1,0)) + vu*ZH(gt1,1))*ZM(gt3,1) + Conj
      (Ye(1,1))*(-1.4142135623730951*Mu*ZH(gt1,1)*ZM(gt3,0) + 2*vd*Ye(1,1)*ZH(gt1,
      0)*ZM(gt3,1))) + Conj(ZM(gt2,0))*(ZH(gt1,1)*(vu*(0.6*Sqr(g1) - Sqr(g2))*ZM(
      gt3,0) + 2.8284271247461903*Conj(Mu)*Ye(1,1)*ZM(gt3,1)) - ZH(gt1,0)*(vd*(4*
      AbsSqr(Ye(1,1)) + 0.6*Sqr(g1) - Sqr(g2))*ZM(gt3,0) + 2.8284271247461903*ZM(
      gt3,1)*TYe(1,1))));

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CphhStauconjStau(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYe = MODELPARAMETER(TYe);
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto Ye = MODELPARAMETER(Ye);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   result = 0.25*(-2*Conj(ZTau(gt2,1))*(1.4142135623730951*Conj(TYe(2,2))*ZH(
      gt1,0)*ZTau(gt3,0) + 0.6*Sqr(g1)*(-(vd*ZH(gt1,0)) + vu*ZH(gt1,1))*ZTau(gt3,1
      ) + Conj(Ye(2,2))*(-1.4142135623730951*Mu*ZH(gt1,1)*ZTau(gt3,0) + 2*vd*Ye(2,
      2)*ZH(gt1,0)*ZTau(gt3,1))) + Conj(ZTau(gt2,0))*(ZH(gt1,1)*(vu*(0.6*Sqr(g1) -
      Sqr(g2))*ZTau(gt3,0) + 2.8284271247461903*Conj(Mu)*Ye(2,2)*ZTau(gt3,1)) -
      ZH(gt1,0)*(vd*(4*AbsSqr(Ye(2,2)) + 0.6*Sqr(g1) - Sqr(g2))*ZTau(gt3,0) +
      2.8284271247461903*ZTau(gt3,1)*TYe(2,2))));

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CphhSsconjSs(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYd = MODELPARAMETER(TYd);
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto Yd = MODELPARAMETER(Yd);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   result = 0.05*(-2*Conj(ZS(gt2,1))*(7.0710678118654755*Conj(TYd(1,1))*ZH(gt1,
      0)*ZS(gt3,0) + Sqr(g1)*(-(vd*ZH(gt1,0)) + vu*ZH(gt1,1))*ZS(gt3,1) - 5*Conj(
      Yd(1,1))*(1.4142135623730951*Mu*ZH(gt1,1)*ZS(gt3,0) - 2*vd*Yd(1,1)*ZH(gt1,0)
      *ZS(gt3,1))) + Conj(ZS(gt2,0))*(-(ZH(gt1,1)*(vu*(Sqr(g1) + 5*Sqr(g2))*ZS(gt3
      ,0) - 14.142135623730951*Conj(Mu)*Yd(1,1)*ZS(gt3,1))) + ZH(gt1,0)*(vd*(-20*
      AbsSqr(Yd(1,1)) + Sqr(g1) + 5*Sqr(g2))*ZS(gt3,0) - 14.142135623730951*ZS(gt3
      ,1)*TYd(1,1))));

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CphhScconjSc(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYu = MODELPARAMETER(TYu);
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto Yu = MODELPARAMETER(Yu);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   result = 0.05*(2*Conj(ZC(gt2,1))*(-7.0710678118654755*Conj(TYu(1,1))*ZC(gt3,
      0)*ZH(gt1,1) + 2*Sqr(g1)*ZC(gt3,1)*(-(vd*ZH(gt1,0)) + vu*ZH(gt1,1)) + 5*Conj
      (Yu(1,1))*(1.4142135623730951*Mu*ZC(gt3,0)*ZH(gt1,0) - 2*vu*Yu(1,1)*ZC(gt3,1
      )*ZH(gt1,1))) + Conj(ZC(gt2,0))*(ZC(gt3,0)*(vd*(Sqr(g1) - 5*Sqr(g2))*ZH(gt1,
      0) - vu*(20*AbsSqr(Yu(1,1)) + Sqr(g1) - 5*Sqr(g2))*ZH(gt1,1)) +
      14.142135623730951*ZC(gt3,1)*(Conj(Mu)*Yu(1,1)*ZH(gt1,0) - ZH(gt1,1)*TYu(1,1
      ))));

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CphhSbconjSb(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYd = MODELPARAMETER(TYd);
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto Yd = MODELPARAMETER(Yd);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   result = 0.05*(-2*Conj(ZB(gt2,1))*(7.0710678118654755*Conj(TYd(2,2))*ZB(gt3,
      0)*ZH(gt1,0) - 7.0710678118654755*Conj(Yd(2,2))*Mu*ZB(gt3,0)*ZH(gt1,1) + ZB(
      gt3,1)*(-(vd*(-10*AbsSqr(Yd(2,2)) + Sqr(g1))*ZH(gt1,0)) + vu*Sqr(g1)*ZH(gt1,
      1))) + Conj(ZB(gt2,0))*(ZB(gt3,0)*(vd*(-20*AbsSqr(Yd(2,2)) + Sqr(g1) + 5*Sqr
      (g2))*ZH(gt1,0) - vu*(Sqr(g1) + 5*Sqr(g2))*ZH(gt1,1)) + 14.142135623730951*
      ZB(gt3,1)*(Conj(Mu)*Yd(2,2)*ZH(gt1,1) - ZH(gt1,0)*TYd(2,2))));

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CphhStconjSt(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYu = MODELPARAMETER(TYu);
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto Yu = MODELPARAMETER(Yu);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   result = 0.05*(2*Conj(ZT(gt2,1))*(-7.0710678118654755*Conj(TYu(2,2))*ZH(gt1,
      1)*ZT(gt3,0) + 2*Sqr(g1)*(-(vd*ZH(gt1,0)) + vu*ZH(gt1,1))*ZT(gt3,1) + 5*Conj
      (Yu(2,2))*(1.4142135623730951*Mu*ZH(gt1,0)*ZT(gt3,0) - 2*vu*Yu(2,2)*ZH(gt1,1
      )*ZT(gt3,1))) + Conj(ZT(gt2,0))*(ZH(gt1,0)*(vd*(Sqr(g1) - 5*Sqr(g2))*ZT(gt3,
      0) + 14.142135623730951*Conj(Mu)*Yu(2,2)*ZT(gt3,1)) - ZH(gt1,1)*(vu*(20*
      AbsSqr(Yu(2,2)) + Sqr(g1) - 5*Sqr(g2))*ZT(gt3,0) + 14.142135623730951*ZT(gt3
      ,1)*TYu(2,2))));

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CphhHpmconjHpm(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);

   std::complex<double> result;

   result = 0.25*(-(ZH(gt1,0)*(ZP(gt2,0)*(vd*(0.6*Sqr(g1) + Sqr(g2))*ZP(gt3,0)
      + vu*Sqr(g2)*ZP(gt3,1)) + ZP(gt2,1)*(vu*Sqr(g2)*ZP(gt3,0) + vd*(-0.6*Sqr(g1)
      + Sqr(g2))*ZP(gt3,1)))) + ZH(gt1,1)*(ZP(gt2,0)*(vu*(0.6*Sqr(g1) - Sqr(g2))*
      ZP(gt3,0) - vd*Sqr(g2)*ZP(gt3,1)) - ZP(gt2,1)*(vd*Sqr(g2)*ZP(gt3,0) + vu*(
      0.6*Sqr(g1) + Sqr(g2))*ZP(gt3,1))));

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpChahhbarChaPL(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto g2 = MODELPARAMETER(g2);

   std::complex<double> result;

   result = -0.7071067811865475*g2*(Conj(UM(gt1,1))*Conj(UP(gt3,0))*ZH(gt2,0) +
      Conj(UM(gt1,0))*Conj(UP(gt3,1))*ZH(gt2,1));

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CphhVWmconjVWm(unsigned gt1) const
{
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);

   std::complex<double> result;

   result = 0.5*Sqr(g2)*(vd*ZH(gt1,0) + vu*ZH(gt1,1));

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpAhFdbarFdPL(unsigned gt1) const
{
   const auto Yd = MODELPARAMETER(Yd);

   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*Yd(0,0)*ZA(gt1,0);

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpAhFsbarFsPL(unsigned gt1) const
{
   const auto Yd = MODELPARAMETER(Yd);

   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*Yd(1,1)*ZA(gt1,0);

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpAhFbbarFbPL(unsigned gt1) const
{
   const auto Yd = MODELPARAMETER(Yd);

   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*Yd(2,2)*ZA(gt1,0);

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpAhFubarFuPL(unsigned gt1) const
{
   const auto Yu = MODELPARAMETER(Yu);

   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*Yu(0,0)*ZA(gt1,1);

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpAhFcbarFcPL(unsigned gt1) const
{
   const auto Yu = MODELPARAMETER(Yu);

   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*Yu(1,1)*ZA(gt1,1);

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpAhFtbarFtPL(unsigned gt1) const
{
   const auto Yu = MODELPARAMETER(Yu);

   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*Yu(2,2)*ZA(gt1,1);

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpAhFebarFePL(unsigned gt1) const
{
   const auto Ye = MODELPARAMETER(Ye);

   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*Ye(0,0)*ZA(gt1,0);

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpAhFmbarFmPL(unsigned gt1) const
{
   const auto Ye = MODELPARAMETER(Ye);

   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*Ye(1,1)*ZA(gt1,0);

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpAhFtaubarFtauPL(unsigned gt1) const
{
   const auto Ye = MODELPARAMETER(Ye);

   std::complex<double> result;

   result = std::complex<double>(0.,-0.7071067811865475)*Ye(2,2)*ZA(gt1,0);

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpAhSdconjSd(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYd = MODELPARAMETER(TYd);
   const auto Yd = MODELPARAMETER(Yd);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(ZD(gt2,1))*(Conj(
      TYd(0,0))*ZA(gt1,0) + Conj(Yd(0,0))*Mu*ZA(gt1,1))*ZD(gt3,0) - Conj(ZD(gt2,0)
      )*ZD(gt3,1)*(Conj(Mu)*Yd(0,0)*ZA(gt1,1) + ZA(gt1,0)*TYd(0,0)));

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpAhSuconjSu(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYu = MODELPARAMETER(TYu);
   const auto Yu = MODELPARAMETER(Yu);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(Yu(0,0))*Conj(ZU(
      gt2,1))*Mu*ZA(gt1,0)*ZU(gt3,0) + Conj(ZU(gt2,1))*Conj(TYu(0,0))*ZA(gt1,1)*ZU
      (gt3,0) - Conj(ZU(gt2,0))*ZU(gt3,1)*(Conj(Mu)*Yu(0,0)*ZA(gt1,0) + ZA(gt1,1)*
      TYu(0,0)));

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpAhSeconjSe(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYe = MODELPARAMETER(TYe);
   const auto Ye = MODELPARAMETER(Ye);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(ZE(gt2,1))*(Conj(
      TYe(0,0))*ZA(gt1,0) + Conj(Ye(0,0))*Mu*ZA(gt1,1))*ZE(gt3,0) - Conj(ZE(gt2,0)
      )*ZE(gt3,1)*(Conj(Mu)*Ye(0,0)*ZA(gt1,1) + ZA(gt1,0)*TYe(0,0)));

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpAhSmconjSm(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYe = MODELPARAMETER(TYe);
   const auto Ye = MODELPARAMETER(Ye);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(ZM(gt2,1))*(Conj(
      TYe(1,1))*ZA(gt1,0) + Conj(Ye(1,1))*Mu*ZA(gt1,1))*ZM(gt3,0) - Conj(ZM(gt2,0)
      )*ZM(gt3,1)*(Conj(Mu)*Ye(1,1)*ZA(gt1,1) + ZA(gt1,0)*TYe(1,1)));

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpAhStauconjStau(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYe = MODELPARAMETER(TYe);
   const auto Ye = MODELPARAMETER(Ye);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(ZTau(gt2,1))*(
      Conj(TYe(2,2))*ZA(gt1,0) + Conj(Ye(2,2))*Mu*ZA(gt1,1))*ZTau(gt3,0) - Conj(
      ZTau(gt2,0))*ZTau(gt3,1)*(Conj(Mu)*Ye(2,2)*ZA(gt1,1) + ZA(gt1,0)*TYe(2,2)));

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpAhSsconjSs(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYd = MODELPARAMETER(TYd);
   const auto Yd = MODELPARAMETER(Yd);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(ZS(gt2,1))*(Conj(
      TYd(1,1))*ZA(gt1,0) + Conj(Yd(1,1))*Mu*ZA(gt1,1))*ZS(gt3,0) - Conj(ZS(gt2,0)
      )*ZS(gt3,1)*(Conj(Mu)*Yd(1,1)*ZA(gt1,1) + ZA(gt1,0)*TYd(1,1)));

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpAhScconjSc(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYu = MODELPARAMETER(TYu);
   const auto Yu = MODELPARAMETER(Yu);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(Yu(1,1))*Conj(ZC(
      gt2,1))*Mu*ZA(gt1,0)*ZC(gt3,0) + Conj(ZC(gt2,1))*Conj(TYu(1,1))*ZA(gt1,1)*ZC
      (gt3,0) - Conj(ZC(gt2,0))*ZC(gt3,1)*(Conj(Mu)*Yu(1,1)*ZA(gt1,0) + ZA(gt1,1)*
      TYu(1,1)));

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpAhSbconjSb(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYd = MODELPARAMETER(TYd);
   const auto Yd = MODELPARAMETER(Yd);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(ZB(gt2,1))*(Conj(
      TYd(2,2))*ZA(gt1,0) + Conj(Yd(2,2))*Mu*ZA(gt1,1))*ZB(gt3,0) - Conj(ZB(gt2,0)
      )*ZB(gt3,1)*(Conj(Mu)*Yd(2,2)*ZA(gt1,1) + ZA(gt1,0)*TYd(2,2)));

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpAhStconjSt(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYu = MODELPARAMETER(TYu);
   const auto Yu = MODELPARAMETER(Yu);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*(Conj(Yu(2,2))*Conj(ZT(
      gt2,1))*Mu*ZA(gt1,0)*ZT(gt3,0) + Conj(ZT(gt2,1))*Conj(TYu(2,2))*ZA(gt1,1)*ZT
      (gt3,0) - Conj(ZT(gt2,0))*ZT(gt3,1)*(Conj(Mu)*Yu(2,2)*ZA(gt1,0) + ZA(gt1,1)*
      TYu(2,2)));

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpAhHpmconjHpm(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);

   std::complex<double> result;

   result = std::complex<double>(0,-0.25)*Sqr(g2)*(vu*ZA(gt1,0) + vd*ZA(gt1,1))
      *(ZP(gt2,1)*ZP(gt3,0) - ZP(gt2,0)*ZP(gt3,1));

   return result;
}

std::complex<double> MSSMNoFVatMGUT_effective_couplings::CpAhChabarChaPL(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto g2 = MODELPARAMETER(g2);

   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*g2*(Conj(UM(gt2,1))*
      Conj(UP(gt3,0))*ZA(gt1,0) + Conj(UM(gt2,0))*Conj(UP(gt3,1))*ZA(gt1,1));

   return result;
}

void MSSMNoFVatMGUT_effective_couplings::calculate_eff_CphhVPVP(unsigned gO1)
{
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto MFd = MODELPARAMETER(MFd);
   const auto MFs = MODELPARAMETER(MFs);
   const auto MFb = MODELPARAMETER(MFb);
   const auto MFu = MODELPARAMETER(MFu);
   const auto MFc = MODELPARAMETER(MFc);
   const auto MFt = MODELPARAMETER(MFt);
   const auto MFe = MODELPARAMETER(MFe);
   const auto MFm = MODELPARAMETER(MFm);
   const auto MFtau = MODELPARAMETER(MFtau);
   const auto MSd = MODELPARAMETER(MSd);
   const auto MSu = MODELPARAMETER(MSu);
   const auto MSe = MODELPARAMETER(MSe);
   const auto MSm = MODELPARAMETER(MSm);
   const auto MStau = MODELPARAMETER(MStau);
   const auto MSs = MODELPARAMETER(MSs);
   const auto MSc = MODELPARAMETER(MSc);
   const auto MSb = MODELPARAMETER(MSb);
   const auto MSt = MODELPARAMETER(MSt);
   const auto MHpm = MODELPARAMETER(MHpm);
   const auto MCha = MODELPARAMETER(MCha);
   const auto MVWm = MODELPARAMETER(MVWm);
   const auto decay_mass = PHYSICAL(Mhh)(gO1);
   const auto decay_scale = 0.25 * Sqr(decay_mass);
   const auto saved_ZH = ZH;
   ZH = PHYSICAL(ZH);

   const auto vev = Sqrt(Sqr(vd) + Sqr(vu));

   std::complex<double> result = 0;
   result += 0.3333333333333333 * scalar_fermion_qcd_factor(decay_mass, MFd) *
      CpFdhhbarFdPL(gO1) * vev * AS12(decay_scale / Sqr(MFd)) / MFd;
   result += 0.3333333333333333 * scalar_fermion_qcd_factor(decay_mass, MFs) *
      CpFshhbarFsPL(gO1) * vev * AS12(decay_scale / Sqr(MFs)) / MFs;
   result += 0.3333333333333333 * scalar_fermion_qcd_factor(decay_mass, MFb) *
      CpFbhhbarFbPL(gO1) * vev * AS12(decay_scale / Sqr(MFb)) / MFb;
   result += 1.3333333333333333 * scalar_fermion_qcd_factor(decay_mass, MFu) *
      CpFuhhbarFuPL(gO1) * vev * AS12(decay_scale / Sqr(MFu)) / MFu;
   result += 1.3333333333333333 * scalar_fermion_qcd_factor(decay_mass, MFc) *
      CpFchhbarFcPL(gO1) * vev * AS12(decay_scale / Sqr(MFc)) / MFc;
   result += 1.3333333333333333 * scalar_fermion_qcd_factor(decay_mass, MFt) *
      CpFthhbarFtPL(gO1) * vev * AS12(decay_scale / Sqr(MFt)) / MFt;
   result += CpFehhbarFePL(gO1) * vev * AS12(decay_scale / Sqr(MFe)) / MFe;
   result += CpFmhhbarFmPL(gO1) * vev * AS12(decay_scale / Sqr(MFm)) / MFm;
   result += CpFtauhhbarFtauPL(gO1) * vev * AS12(decay_scale / Sqr(MFtau)) /
      MFtau;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      result += 0.16666666666666666 * scalar_scalar_qcd_factor(decay_mass,
         MSd(gI1)) * CphhSdconjSd(gO1, gI1, gI1) * vev * AS0(decay_scale / Sqr(MSd
         (gI1))) / Sqr(MSd(gI1));
   }
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      result += 0.6666666666666666 * scalar_scalar_qcd_factor(decay_mass,
         MSu(gI1)) * CphhSuconjSu(gO1, gI1, gI1) * vev * AS0(decay_scale / Sqr(MSu
         (gI1))) / Sqr(MSu(gI1));
   }
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      result += 0.5 * CphhSeconjSe(gO1, gI1, gI1) * vev * AS0(decay_scale /
         Sqr(MSe(gI1))) / Sqr(MSe(gI1));
   }
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      result += 0.5 * CphhSmconjSm(gO1, gI1, gI1) * vev * AS0(decay_scale /
         Sqr(MSm(gI1))) / Sqr(MSm(gI1));
   }
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      result += 0.5 * CphhStauconjStau(gO1, gI1, gI1) * vev * AS0(
         decay_scale / Sqr(MStau(gI1))) / Sqr(MStau(gI1));
   }
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      result += 0.16666666666666666 * scalar_scalar_qcd_factor(decay_mass,
         MSs(gI1)) * CphhSsconjSs(gO1, gI1, gI1) * vev * AS0(decay_scale / Sqr(MSs
         (gI1))) / Sqr(MSs(gI1));
   }
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      result += 0.6666666666666666 * scalar_scalar_qcd_factor(decay_mass,
         MSc(gI1)) * CphhScconjSc(gO1, gI1, gI1) * vev * AS0(decay_scale / Sqr(MSc
         (gI1))) / Sqr(MSc(gI1));
   }
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      result += 0.16666666666666666 * scalar_scalar_qcd_factor(decay_mass,
         MSb(gI1)) * CphhSbconjSb(gO1, gI1, gI1) * vev * AS0(decay_scale / Sqr(MSb
         (gI1))) / Sqr(MSb(gI1));
   }
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      result += 0.6666666666666666 * scalar_scalar_qcd_factor(decay_mass,
         MSt(gI1)) * CphhStconjSt(gO1, gI1, gI1) * vev * AS0(decay_scale / Sqr(MSt
         (gI1))) / Sqr(MSt(gI1));
   }
   for (unsigned gI1 = 1; gI1 < 2; ++gI1) {
      result += 0.5 * CphhHpmconjHpm(gO1, gI1, gI1) * vev * AS0(decay_scale
         / Sqr(MHpm(gI1))) / Sqr(MHpm(gI1));
   }
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      result += CpChahhbarChaPL(gI1, gO1, gI1) * vev * AS12(decay_scale /
         Sqr(MCha(gI1))) / MCha(gI1);
   }
   result += -0.5 * CphhVWmconjVWm(gO1) * vev * AS1(decay_scale / Sqr(MVWm)) /
      Sqr(MVWm);

   result *= 0.1892681907127351 * physical_input.get(Physical_input::alpha_em_0
      ) * Sqrt(qedqcd.displayFermiConstant());

   ZH = saved_ZH;
   eff_CphhVPVP(gO1) = result;

}

void MSSMNoFVatMGUT_effective_couplings::calculate_eff_CphhVGVG(unsigned gO1)
{
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto g3 = MODELPARAMETER(g3);
   const auto MFd = MODELPARAMETER(MFd);
   const auto MFs = MODELPARAMETER(MFs);
   const auto MFb = MODELPARAMETER(MFb);
   const auto MFu = MODELPARAMETER(MFu);
   const auto MFc = MODELPARAMETER(MFc);
   const auto MFt = MODELPARAMETER(MFt);
   const auto MSd = MODELPARAMETER(MSd);
   const auto MSu = MODELPARAMETER(MSu);
   const auto MSs = MODELPARAMETER(MSs);
   const auto MSc = MODELPARAMETER(MSc);
   const auto MSb = MODELPARAMETER(MSb);
   const auto MSt = MODELPARAMETER(MSt);
   const double alpha_s = 0.07957747154594767*Sqr(g3);
   const auto decay_mass = PHYSICAL(Mhh)(gO1);
   const auto decay_scale = 0.25 * Sqr(decay_mass);
   const auto saved_ZH = ZH;
   ZH = PHYSICAL(ZH);

   const auto vev = Sqrt(Sqr(vd) + Sqr(vu));

   std::complex<double> result = 0;
   result += CpFdhhbarFdPL(gO1) * vev * AS12(decay_scale / Sqr(MFd)) / MFd;
   result += CpFshhbarFsPL(gO1) * vev * AS12(decay_scale / Sqr(MFs)) / MFs;
   result += CpFbhhbarFbPL(gO1) * vev * AS12(decay_scale / Sqr(MFb)) / MFb;
   result += CpFuhhbarFuPL(gO1) * vev * AS12(decay_scale / Sqr(MFu)) / MFu;
   result += CpFchhbarFcPL(gO1) * vev * AS12(decay_scale / Sqr(MFc)) / MFc;
   result += CpFthhbarFtPL(gO1) * vev * AS12(decay_scale / Sqr(MFt)) / MFt;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      result += 0.5 * CphhSdconjSd(gO1, gI1, gI1) * vev * AS0(decay_scale /
         Sqr(MSd(gI1))) / Sqr(MSd(gI1));
   }
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      result += 0.5 * CphhSuconjSu(gO1, gI1, gI1) * vev * AS0(decay_scale /
         Sqr(MSu(gI1))) / Sqr(MSu(gI1));
   }
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      result += 0.5 * CphhSsconjSs(gO1, gI1, gI1) * vev * AS0(decay_scale /
         Sqr(MSs(gI1))) / Sqr(MSs(gI1));
   }
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      result += 0.5 * CphhScconjSc(gO1, gI1, gI1) * vev * AS0(decay_scale /
         Sqr(MSc(gI1))) / Sqr(MSc(gI1));
   }
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      result += 0.5 * CphhSbconjSb(gO1, gI1, gI1) * vev * AS0(decay_scale /
         Sqr(MSb(gI1))) / Sqr(MSb(gI1));
   }
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      result += 0.5 * CphhStconjSt(gO1, gI1, gI1) * vev * AS0(decay_scale /
         Sqr(MSt(gI1))) / Sqr(MSt(gI1));
   }
   result *= std::complex<double>(0.75,0.);

   if (include_qcd_corrections) {
      result *= scalar_scaling_factor(decay_mass);
   }

   result *= 0.12617879380849006 * alpha_s * Sqrt(qedqcd.displayFermiConstant()
      );

   ZH = saved_ZH;
   eff_CphhVGVG(gO1) = result;

}

void MSSMNoFVatMGUT_effective_couplings::calculate_eff_CpAhVPVP(unsigned gO1)
{
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto MFd = MODELPARAMETER(MFd);
   const auto MFs = MODELPARAMETER(MFs);
   const auto MFb = MODELPARAMETER(MFb);
   const auto MFu = MODELPARAMETER(MFu);
   const auto MFc = MODELPARAMETER(MFc);
   const auto MFt = MODELPARAMETER(MFt);
   const auto MFe = MODELPARAMETER(MFe);
   const auto MFm = MODELPARAMETER(MFm);
   const auto MFtau = MODELPARAMETER(MFtau);
   const auto MCha = MODELPARAMETER(MCha);
   const auto decay_mass = PHYSICAL(MAh)(gO1);
   const auto decay_scale = 0.25 * Sqr(decay_mass);
   const auto saved_ZA = ZA;
   ZA = PHYSICAL(ZA);

   const auto vev = Sqrt(Sqr(vd) + Sqr(vu));

   std::complex<double> result = 0;
   result += 0.3333333333333333 * pseudoscalar_fermion_qcd_factor(decay_mass,
      MFd) * CpAhFdbarFdPL(gO1) * vev * AP12(decay_scale / Sqr(MFd)) / MFd;
   result += 0.3333333333333333 * pseudoscalar_fermion_qcd_factor(decay_mass,
      MFs) * CpAhFsbarFsPL(gO1) * vev * AP12(decay_scale / Sqr(MFs)) / MFs;
   result += 0.3333333333333333 * pseudoscalar_fermion_qcd_factor(decay_mass,
      MFb) * CpAhFbbarFbPL(gO1) * vev * AP12(decay_scale / Sqr(MFb)) / MFb;
   result += 1.3333333333333333 * pseudoscalar_fermion_qcd_factor(decay_mass,
      MFu) * CpAhFubarFuPL(gO1) * vev * AP12(decay_scale / Sqr(MFu)) / MFu;
   result += 1.3333333333333333 * pseudoscalar_fermion_qcd_factor(decay_mass,
      MFc) * CpAhFcbarFcPL(gO1) * vev * AP12(decay_scale / Sqr(MFc)) / MFc;
   result += 1.3333333333333333 * pseudoscalar_fermion_qcd_factor(decay_mass,
      MFt) * CpAhFtbarFtPL(gO1) * vev * AP12(decay_scale / Sqr(MFt)) / MFt;
   result += CpAhFebarFePL(gO1) * vev * AP12(decay_scale / Sqr(MFe)) / MFe;
   result += CpAhFmbarFmPL(gO1) * vev * AP12(decay_scale / Sqr(MFm)) / MFm;
   result += CpAhFtaubarFtauPL(gO1) * vev * AP12(decay_scale / Sqr(MFtau)) /
      MFtau;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      result += CpAhChabarChaPL(gO1, gI1, gI1) * vev * AP12(decay_scale /
         Sqr(MCha(gI1))) / MCha(gI1);
   }
   result *= std::complex<double>(2.0,0.);

   result *= 0.1892681907127351 * physical_input.get(Physical_input::alpha_em_0
      ) * Sqrt(qedqcd.displayFermiConstant());

   ZA = saved_ZA;
   eff_CpAhVPVP(gO1) = result;

}

void MSSMNoFVatMGUT_effective_couplings::calculate_eff_CpAhVGVG(unsigned gO1)
{
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto g3 = MODELPARAMETER(g3);
   const auto MFd = MODELPARAMETER(MFd);
   const auto MFs = MODELPARAMETER(MFs);
   const auto MFb = MODELPARAMETER(MFb);
   const auto MFu = MODELPARAMETER(MFu);
   const auto MFc = MODELPARAMETER(MFc);
   const auto MFt = MODELPARAMETER(MFt);
   const double alpha_s = 0.07957747154594767*Sqr(g3);
   const auto decay_mass = PHYSICAL(MAh)(gO1);
   const auto decay_scale = 0.25 * Sqr(decay_mass);
   const auto saved_ZA = ZA;
   ZA = PHYSICAL(ZA);

   const auto vev = Sqrt(Sqr(vd) + Sqr(vu));

   std::complex<double> result = 0;
   result += CpAhFdbarFdPL(gO1) * vev * AP12(decay_scale / Sqr(MFd)) / MFd;
   result += CpAhFsbarFsPL(gO1) * vev * AP12(decay_scale / Sqr(MFs)) / MFs;
   result += CpAhFbbarFbPL(gO1) * vev * AP12(decay_scale / Sqr(MFb)) / MFb;
   result += CpAhFubarFuPL(gO1) * vev * AP12(decay_scale / Sqr(MFu)) / MFu;
   result += CpAhFcbarFcPL(gO1) * vev * AP12(decay_scale / Sqr(MFc)) / MFc;
   result += CpAhFtbarFtPL(gO1) * vev * AP12(decay_scale / Sqr(MFt)) / MFt;
   result *= std::complex<double>(1.5,0.);

   if (include_qcd_corrections) {
      result *= pseudoscalar_scaling_factor(decay_mass);
   }

   result *= 0.12617879380849006 * alpha_s * Sqrt(qedqcd.displayFermiConstant()
      );

   ZA = saved_ZA;
   eff_CpAhVGVG(gO1) = result;

}


} // namespace flexiblesusy
