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

// File generated at Sat 27 Aug 2016 12:51:21

#include "MSSM_effective_couplings.hpp"

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

MSSM_effective_couplings::MSSM_effective_couplings(
   const MSSM_mass_eigenstates& model_,
   const softsusy::QedQcd& qedqcd_,
   const Physical_input& input_)
   : model(model_), qedqcd(qedqcd_), physical_input(input_)
   , rg_improve(true), include_qcd_corrections(true)
   , ZD(MODELPARAMETER(ZD)), ZV(MODELPARAMETER(ZV)), ZU(MODELPARAMETER(ZU)), ZE
      (MODELPARAMETER(ZE)), ZH(MODELPARAMETER(ZH)), ZA(MODELPARAMETER(ZA)), ZP(
      MODELPARAMETER(ZP)), ZN(MODELPARAMETER(ZN)), UM(MODELPARAMETER(UM)), UP(
      MODELPARAMETER(UP)), ZEL(MODELPARAMETER(ZEL)), ZER(MODELPARAMETER(ZER)), ZDL
      (MODELPARAMETER(ZDL)), ZDR(MODELPARAMETER(ZDR)), ZUL(MODELPARAMETER(ZUL)),
      ZUR(MODELPARAMETER(ZUR)), ZZ(MODELPARAMETER(ZZ))

   , eff_CphhVPVP(Eigen::Array<std::complex<double>,2,1>::Zero()), eff_CphhVGVG
      (Eigen::Array<std::complex<double>,2,1>::Zero()), eff_CpAhVPVP(Eigen::Array<
      std::complex<double>,2,1>::Zero()), eff_CpAhVGVG(Eigen::Array<std::complex<
      double>,2,1>::Zero())

{
}

MSSM_effective_couplings::~MSSM_effective_couplings()
{
}

void MSSM_effective_couplings::calculate_effective_couplings()
{
   const double scale = model.get_scale();
   const Eigen::ArrayXd saved_parameters(model.get());

   const double saved_mt = PHYSICAL(MFu(2));
   PHYSICAL(MFu(2)) = qedqcd.displayPoleMt();

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

   PHYSICAL(MFu(2)) = saved_mt;
   model.set_scale(scale);
   model.set(saved_parameters);

}

void MSSM_effective_couplings::set_model(const MSSM_mass_eigenstates& model_)
{
   model = model_;
   copy_mixing_matrices_from_model();
}

void MSSM_effective_couplings::copy_mixing_matrices_from_model()
{
   ZD = MODELPARAMETER(ZD);
   ZV = MODELPARAMETER(ZV);
   ZU = MODELPARAMETER(ZU);
   ZE = MODELPARAMETER(ZE);
   ZH = MODELPARAMETER(ZH);
   ZA = MODELPARAMETER(ZA);
   ZP = MODELPARAMETER(ZP);
   ZN = MODELPARAMETER(ZN);
   UM = MODELPARAMETER(UM);
   UP = MODELPARAMETER(UP);
   ZEL = MODELPARAMETER(ZEL);
   ZER = MODELPARAMETER(ZER);
   ZDL = MODELPARAMETER(ZDL);
   ZDR = MODELPARAMETER(ZDR);
   ZUL = MODELPARAMETER(ZUL);
   ZUR = MODELPARAMETER(ZUR);
   ZZ = MODELPARAMETER(ZZ);

}

void MSSM_effective_couplings::run_SM_strong_coupling_to(double m)
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

std::complex<double> MSSM_effective_couplings::scalar_scalar_qcd_factor(double m_decay, double m_loop) const
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

std::complex<double> MSSM_effective_couplings::scalar_fermion_qcd_factor(double m_decay, double m_loop) const
{
   std::complex<double> result(1.0, 0.0);

   if (include_qcd_corrections) {
      const auto g3 = MODELPARAMETER(g3);
      result = 1.0 + 0.025330295910584444*Sqr(g3) *
         scalar_diphoton_fermion_loop(m_decay, m_loop);

   }

   return result;
}

std::complex<double> MSSM_effective_couplings::pseudoscalar_fermion_qcd_factor(double m_decay, double m_loop) const
{
   std::complex<double> result(1.0, 0.0);

   if (include_qcd_corrections) {
      const auto g3 = MODELPARAMETER(g3);
      result = 1.0 + 0.025330295910584444*Sqr(g3) *
         pseudoscalar_diphoton_fermion_loop(m_decay, m_loop);

   }

   return result;
}

double MSSM_effective_couplings::number_of_active_flavours(double m) const
{
   if (m < qedqcd.displayMbMb()) {
      return 4.0;
   } else if (m < qedqcd.displayPoleMt()) {
      return 5.0;
   } else {
      return 6.0;
   }
}

double MSSM_effective_couplings::scalar_scaling_factor(double m) const
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

double MSSM_effective_couplings::pseudoscalar_scaling_factor(double m) const
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

double MSSM_effective_couplings::get_hhVPVP_partial_width(unsigned gO1) const
{
   const double mass = PHYSICAL(Mhh)(gO1);
   return 0.0049735919716217296 * Power(mass, 3.0) * AbsSqr(eff_CphhVPVP(gO1));
}

double MSSM_effective_couplings::get_hhVGVG_partial_width(unsigned gO1) const
{
   const double mass = PHYSICAL(Mhh)(gO1);
   return 0.039788735772973836 * Power(mass, 3.0) * AbsSqr(eff_CphhVGVG(gO1));
}

double MSSM_effective_couplings::get_AhVPVP_partial_width(unsigned gO1) const
{
   const double mass = PHYSICAL(MAh)(gO1);
   return 0.0049735919716217296 * Power(mass, 3.0) * AbsSqr(eff_CpAhVPVP(gO1));
}

double MSSM_effective_couplings::get_AhVGVG_partial_width(unsigned gO1) const
{
   const double mass = PHYSICAL(MAh)(gO1);
   return 0.039788735772973836 * Power(mass, 3.0) * AbsSqr(eff_CpAhVGVG(gO1));
}

std::complex<double> MSSM_effective_couplings::CphhSdconjSd(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYd = MODELPARAMETER(TYd);
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto Yd = MODELPARAMETER(Yd);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   std::complex<double> tmp_2808;
   std::complex<double> tmp_2809;
   std::complex<double> tmp_2810;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_2810 += Conj(ZD(gt2,j1))*ZD(gt3,j1);
   }
   tmp_2809 += tmp_2810;
   tmp_2808 += ((0.6*Sqr(g1) + 3*Sqr(g2))*(vd*ZH(gt1,0) - vu*ZH(gt1,1))) *
      tmp_2809;
   std::complex<double> tmp_2811;
   std::complex<double> tmp_2812;
   std::complex<double> tmp_2813;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_2813 += Conj(ZD(gt2,3 + j1))*ZD(gt3,3 + j1);
   }
   tmp_2812 += tmp_2813;
   tmp_2811 += (0.6*Sqr(g1)*(vd*ZH(gt1,0) - vu*ZH(gt1,1))) * tmp_2812;
   std::complex<double> tmp_2814;
   std::complex<double> tmp_2815;
   std::complex<double> tmp_2816;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2817;
      std::complex<double> tmp_2818;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2818 += ZD(gt3,3 + j1)*TYd(j1,j2);
      }
      tmp_2817 += tmp_2818;
      tmp_2816 += (Conj(ZD(gt2,j2))) * tmp_2817;
   }
   tmp_2815 += tmp_2816;
   tmp_2814 += (1.4142135623730951*ZH(gt1,0)) * tmp_2815;
   std::complex<double> tmp_2819;
   std::complex<double> tmp_2820;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2821;
      std::complex<double> tmp_2822;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2822 += Conj(ZD(gt2,3 + j1))*Conj(TYd(j1,j2));
      }
      tmp_2821 += tmp_2822;
      tmp_2820 += (ZD(gt3,j2)) * tmp_2821;
   }
   tmp_2819 += tmp_2820;
   tmp_2814 += (1.4142135623730951*ZH(gt1,0)) * tmp_2819;
   std::complex<double> tmp_2823;
   std::complex<double> tmp_2824;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_2825;
      std::complex<double> tmp_2826;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_2827;
         std::complex<double> tmp_2828;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_2828 += Conj(Yd(j3,j1))*Yd(j2,j1);
         }
         tmp_2827 += tmp_2828;
         tmp_2826 += (ZD(gt3,3 + j2)) * tmp_2827;
      }
      tmp_2825 += tmp_2826;
      tmp_2824 += (Conj(ZD(gt2,3 + j3))) * tmp_2825;
   }
   tmp_2823 += tmp_2824;
   tmp_2814 += (2*vd*ZH(gt1,0)) * tmp_2823;
   std::complex<double> tmp_2829;
   std::complex<double> tmp_2830;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_2831;
      std::complex<double> tmp_2832;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_2833;
         std::complex<double> tmp_2834;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_2834 += Conj(Yd(j1,j3))*Yd(j1,j2);
         }
         tmp_2833 += tmp_2834;
         tmp_2832 += (Conj(ZD(gt2,j2))) * tmp_2833;
      }
      tmp_2831 += tmp_2832;
      tmp_2830 += (ZD(gt3,j3)) * tmp_2831;
   }
   tmp_2829 += tmp_2830;
   tmp_2814 += (2*vd*ZH(gt1,0)) * tmp_2829;
   std::complex<double> tmp_2835;
   std::complex<double> tmp_2836;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2837;
      std::complex<double> tmp_2838;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2838 += Yd(j1,j2)*ZD(gt3,3 + j1);
      }
      tmp_2837 += tmp_2838;
      tmp_2836 += (Conj(ZD(gt2,j2))) * tmp_2837;
   }
   tmp_2835 += tmp_2836;
   tmp_2814 += (-1.4142135623730951*Conj(Mu)*ZH(gt1,1)) * tmp_2835;
   std::complex<double> tmp_2839;
   std::complex<double> tmp_2840;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2841;
      std::complex<double> tmp_2842;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2842 += Conj(Yd(j1,j2))*Conj(ZD(gt2,3 + j1));
      }
      tmp_2841 += tmp_2842;
      tmp_2840 += (ZD(gt3,j2)) * tmp_2841;
   }
   tmp_2839 += tmp_2840;
   tmp_2814 += (-1.4142135623730951*Mu*ZH(gt1,1)) * tmp_2839;
   tmp_2811 += (-3) * tmp_2814;
   tmp_2808 += (2) * tmp_2811;
   result += (0.08333333333333333) * tmp_2808;

   return result;
}

std::complex<double> MSSM_effective_couplings::CphhSuconjSu(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYu = MODELPARAMETER(TYu);
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto Yu = MODELPARAMETER(Yu);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   std::complex<double> tmp_2843;
   std::complex<double> tmp_2844;
   std::complex<double> tmp_2845;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_2845 += Conj(ZU(gt2,j1))*ZU(gt3,j1);
   }
   tmp_2844 += tmp_2845;
   tmp_2843 += ((0.6*Sqr(g1) - 3*Sqr(g2))*(vd*ZH(gt1,0) - vu*ZH(gt1,1))) *
      tmp_2844;
   std::complex<double> tmp_2846;
   std::complex<double> tmp_2847;
   std::complex<double> tmp_2848;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2849;
      std::complex<double> tmp_2850;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2850 += Yu(j1,j2)*ZU(gt3,3 + j1);
      }
      tmp_2849 += tmp_2850;
      tmp_2848 += (Conj(ZU(gt2,j2))) * tmp_2849;
   }
   tmp_2847 += tmp_2848;
   tmp_2846 += (-4.242640687119286*Conj(Mu)*ZH(gt1,0)) * tmp_2847;
   std::complex<double> tmp_2851;
   std::complex<double> tmp_2852;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2853;
      std::complex<double> tmp_2854;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2854 += Conj(Yu(j1,j2))*Conj(ZU(gt2,3 + j1));
      }
      tmp_2853 += tmp_2854;
      tmp_2852 += (ZU(gt3,j2)) * tmp_2853;
   }
   tmp_2851 += tmp_2852;
   tmp_2846 += (-4.242640687119286*Mu*ZH(gt1,0)) * tmp_2851;
   std::complex<double> tmp_2855;
   std::complex<double> tmp_2856;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2857;
      std::complex<double> tmp_2858;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2858 += ZU(gt3,3 + j1)*TYu(j1,j2);
      }
      tmp_2857 += tmp_2858;
      tmp_2856 += (Conj(ZU(gt2,j2))) * tmp_2857;
   }
   tmp_2855 += tmp_2856;
   tmp_2846 += (4.242640687119286*ZH(gt1,1)) * tmp_2855;
   std::complex<double> tmp_2859;
   std::complex<double> tmp_2860;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2861;
      std::complex<double> tmp_2862;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2862 += Conj(ZU(gt2,3 + j1))*Conj(TYu(j1,j2));
      }
      tmp_2861 += tmp_2862;
      tmp_2860 += (ZU(gt3,j2)) * tmp_2861;
   }
   tmp_2859 += tmp_2860;
   tmp_2846 += (4.242640687119286*ZH(gt1,1)) * tmp_2859;
   std::complex<double> tmp_2863;
   std::complex<double> tmp_2864;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_2865;
      std::complex<double> tmp_2866;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_2867;
         std::complex<double> tmp_2868;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_2868 += Conj(Yu(j3,j1))*Yu(j2,j1);
         }
         tmp_2867 += tmp_2868;
         tmp_2866 += (ZU(gt3,3 + j2)) * tmp_2867;
      }
      tmp_2865 += tmp_2866;
      tmp_2864 += (Conj(ZU(gt2,3 + j3))) * tmp_2865;
   }
   tmp_2863 += tmp_2864;
   tmp_2846 += (6*vu*ZH(gt1,1)) * tmp_2863;
   std::complex<double> tmp_2869;
   std::complex<double> tmp_2870;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_2871;
      std::complex<double> tmp_2872;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_2873;
         std::complex<double> tmp_2874;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_2874 += Conj(Yu(j1,j3))*Yu(j1,j2);
         }
         tmp_2873 += tmp_2874;
         tmp_2872 += (Conj(ZU(gt2,j2))) * tmp_2873;
      }
      tmp_2871 += tmp_2872;
      tmp_2870 += (ZU(gt3,j3)) * tmp_2871;
   }
   tmp_2869 += tmp_2870;
   tmp_2846 += (6*vu*ZH(gt1,1)) * tmp_2869;
   std::complex<double> tmp_2875;
   std::complex<double> tmp_2876;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_2876 += Conj(ZU(gt2,3 + j1))*ZU(gt3,3 + j1);
   }
   tmp_2875 += tmp_2876;
   tmp_2846 += (1.2*Sqr(g1)*(vd*ZH(gt1,0) - vu*ZH(gt1,1))) * tmp_2875;
   tmp_2843 += (-2) * tmp_2846;
   result += (0.08333333333333333) * tmp_2843;

   return result;
}

std::complex<double> MSSM_effective_couplings::CphhSeconjSe(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYe = MODELPARAMETER(TYe);
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto Ye = MODELPARAMETER(Ye);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   std::complex<double> tmp_2877;
   std::complex<double> tmp_2878;
   std::complex<double> tmp_2879;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_2879 += Conj(ZE(gt2,j1))*ZE(gt3,j1);
   }
   tmp_2878 += tmp_2879;
   tmp_2877 += (-((0.6*Sqr(g1) - Sqr(g2))*(vd*ZH(gt1,0) - vu*ZH(gt1,1)))) *
      tmp_2878;
   std::complex<double> tmp_2880;
   std::complex<double> tmp_2881;
   std::complex<double> tmp_2882;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2883;
      std::complex<double> tmp_2884;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2884 += ZE(gt3,3 + j1)*TYe(j1,j2);
      }
      tmp_2883 += tmp_2884;
      tmp_2882 += (Conj(ZE(gt2,j2))) * tmp_2883;
   }
   tmp_2881 += tmp_2882;
   tmp_2880 += (-1.4142135623730951*ZH(gt1,0)) * tmp_2881;
   std::complex<double> tmp_2885;
   std::complex<double> tmp_2886;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2887;
      std::complex<double> tmp_2888;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2888 += Conj(ZE(gt2,3 + j1))*Conj(TYe(j1,j2));
      }
      tmp_2887 += tmp_2888;
      tmp_2886 += (ZE(gt3,j2)) * tmp_2887;
   }
   tmp_2885 += tmp_2886;
   tmp_2880 += (-1.4142135623730951*ZH(gt1,0)) * tmp_2885;
   std::complex<double> tmp_2889;
   std::complex<double> tmp_2890;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_2891;
      std::complex<double> tmp_2892;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_2893;
         std::complex<double> tmp_2894;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_2894 += Conj(Ye(j3,j1))*Ye(j2,j1);
         }
         tmp_2893 += tmp_2894;
         tmp_2892 += (ZE(gt3,3 + j2)) * tmp_2893;
      }
      tmp_2891 += tmp_2892;
      tmp_2890 += (Conj(ZE(gt2,3 + j3))) * tmp_2891;
   }
   tmp_2889 += tmp_2890;
   tmp_2880 += (-2*vd*ZH(gt1,0)) * tmp_2889;
   std::complex<double> tmp_2895;
   std::complex<double> tmp_2896;
   for (unsigned j3 = 0; j3 < 3; ++j3) {
      std::complex<double> tmp_2897;
      std::complex<double> tmp_2898;
      for (unsigned j2 = 0; j2 < 3; ++j2) {
         std::complex<double> tmp_2899;
         std::complex<double> tmp_2900;
         for (unsigned j1 = 0; j1 < 3; ++j1) {
            tmp_2900 += Conj(Ye(j1,j3))*Ye(j1,j2);
         }
         tmp_2899 += tmp_2900;
         tmp_2898 += (Conj(ZE(gt2,j2))) * tmp_2899;
      }
      tmp_2897 += tmp_2898;
      tmp_2896 += (ZE(gt3,j3)) * tmp_2897;
   }
   tmp_2895 += tmp_2896;
   tmp_2880 += (-2*vd*ZH(gt1,0)) * tmp_2895;
   std::complex<double> tmp_2901;
   std::complex<double> tmp_2902;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2903;
      std::complex<double> tmp_2904;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2904 += Ye(j1,j2)*ZE(gt3,3 + j1);
      }
      tmp_2903 += tmp_2904;
      tmp_2902 += (Conj(ZE(gt2,j2))) * tmp_2903;
   }
   tmp_2901 += tmp_2902;
   tmp_2880 += (1.4142135623730951*Conj(Mu)*ZH(gt1,1)) * tmp_2901;
   std::complex<double> tmp_2905;
   std::complex<double> tmp_2906;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2907;
      std::complex<double> tmp_2908;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2908 += Conj(Ye(j1,j2))*Conj(ZE(gt2,3 + j1));
      }
      tmp_2907 += tmp_2908;
      tmp_2906 += (ZE(gt3,j2)) * tmp_2907;
   }
   tmp_2905 += tmp_2906;
   tmp_2880 += (1.4142135623730951*Mu*ZH(gt1,1)) * tmp_2905;
   std::complex<double> tmp_2909;
   std::complex<double> tmp_2910;
   for (unsigned j1 = 0; j1 < 3; ++j1) {
      tmp_2910 += Conj(ZE(gt2,3 + j1))*ZE(gt3,3 + j1);
   }
   tmp_2909 += tmp_2910;
   tmp_2880 += (0.6*Sqr(g1)*(vd*ZH(gt1,0) - vu*ZH(gt1,1))) * tmp_2909;
   tmp_2877 += (2) * tmp_2880;
   result += (0.25) * tmp_2877;

   return result;
}

std::complex<double> MSSM_effective_couplings::CphhHpmconjHpm(unsigned gt1, unsigned gt2, unsigned gt3) const
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

std::complex<double> MSSM_effective_couplings::CpChahhbarChaPL(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto g2 = MODELPARAMETER(g2);

   std::complex<double> result;

   result = -0.7071067811865475*g2*(Conj(UM(gt1,1))*Conj(UP(gt3,0))*ZH(gt2,0) +
      Conj(UM(gt1,0))*Conj(UP(gt3,1))*ZH(gt2,1));

   return result;
}

std::complex<double> MSSM_effective_couplings::CpFehhbarFePL(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto Ye = MODELPARAMETER(Ye);

   std::complex<double> result;

   std::complex<double> tmp_2911;
   std::complex<double> tmp_2912;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2913;
      std::complex<double> tmp_2914;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2914 += Conj(ZER(gt3,j1))*Ye(j1,j2);
      }
      tmp_2913 += tmp_2914;
      tmp_2912 += (Conj(ZEL(gt1,j2))) * tmp_2913;
   }
   tmp_2911 += tmp_2912;
   result += (-0.7071067811865475*ZH(gt2,0)) * tmp_2911;

   return result;
}

std::complex<double> MSSM_effective_couplings::CpFdhhbarFdPL(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto Yd = MODELPARAMETER(Yd);

   std::complex<double> result;

   std::complex<double> tmp_2915;
   std::complex<double> tmp_2916;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2917;
      std::complex<double> tmp_2918;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2918 += Conj(ZDR(gt3,j1))*Yd(j1,j2);
      }
      tmp_2917 += tmp_2918;
      tmp_2916 += (Conj(ZDL(gt1,j2))) * tmp_2917;
   }
   tmp_2915 += tmp_2916;
   result += (-0.7071067811865475*ZH(gt2,0)) * tmp_2915;

   return result;
}

std::complex<double> MSSM_effective_couplings::CpFuhhbarFuPL(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto Yu = MODELPARAMETER(Yu);

   std::complex<double> result;

   std::complex<double> tmp_2919;
   std::complex<double> tmp_2920;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2921;
      std::complex<double> tmp_2922;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2922 += Conj(ZUR(gt3,j1))*Yu(j1,j2);
      }
      tmp_2921 += tmp_2922;
      tmp_2920 += (Conj(ZUL(gt1,j2))) * tmp_2921;
   }
   tmp_2919 += tmp_2920;
   result += (-0.7071067811865475*ZH(gt2,1)) * tmp_2919;

   return result;
}

std::complex<double> MSSM_effective_couplings::CphhVWmconjVWm(unsigned gt1) const
{
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);

   std::complex<double> result;

   result = 0.5*Sqr(g2)*(vd*ZH(gt1,0) + vu*ZH(gt1,1));

   return result;
}

std::complex<double> MSSM_effective_couplings::CpAhSdconjSd(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYd = MODELPARAMETER(TYd);
   const auto Yd = MODELPARAMETER(Yd);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   std::complex<double> tmp_2923;
   std::complex<double> tmp_2924;
   std::complex<double> tmp_2925;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2926;
      std::complex<double> tmp_2927;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2927 += ZD(gt3,3 + j1)*TYd(j1,j2);
      }
      tmp_2926 += tmp_2927;
      tmp_2925 += (Conj(ZD(gt2,j2))) * tmp_2926;
   }
   tmp_2924 += tmp_2925;
   tmp_2923 += (ZA(gt1,0)) * tmp_2924;
   std::complex<double> tmp_2928;
   std::complex<double> tmp_2929;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2930;
      std::complex<double> tmp_2931;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2931 += Conj(ZD(gt2,3 + j1))*Conj(TYd(j1,j2));
      }
      tmp_2930 += tmp_2931;
      tmp_2929 += (ZD(gt3,j2)) * tmp_2930;
   }
   tmp_2928 += tmp_2929;
   tmp_2923 += (-ZA(gt1,0)) * tmp_2928;
   std::complex<double> tmp_2932;
   std::complex<double> tmp_2933;
   std::complex<double> tmp_2934;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2935;
      std::complex<double> tmp_2936;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2936 += Yd(j1,j2)*ZD(gt3,3 + j1);
      }
      tmp_2935 += tmp_2936;
      tmp_2934 += (Conj(ZD(gt2,j2))) * tmp_2935;
   }
   tmp_2933 += tmp_2934;
   tmp_2932 += (Conj(Mu)) * tmp_2933;
   std::complex<double> tmp_2937;
   std::complex<double> tmp_2938;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2939;
      std::complex<double> tmp_2940;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2940 += Conj(Yd(j1,j2))*Conj(ZD(gt2,3 + j1));
      }
      tmp_2939 += tmp_2940;
      tmp_2938 += (ZD(gt3,j2)) * tmp_2939;
   }
   tmp_2937 += tmp_2938;
   tmp_2932 += (-Mu) * tmp_2937;
   tmp_2923 += (ZA(gt1,1)) * tmp_2932;
   result += (std::complex<double>(0.,-0.7071067811865475)) * tmp_2923;

   return result;
}

std::complex<double> MSSM_effective_couplings::CpAhSuconjSu(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYu = MODELPARAMETER(TYu);
   const auto Yu = MODELPARAMETER(Yu);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   std::complex<double> tmp_2941;
   std::complex<double> tmp_2942;
   std::complex<double> tmp_2943;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2944;
      std::complex<double> tmp_2945;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2945 += Yu(j1,j2)*ZU(gt3,3 + j1);
      }
      tmp_2944 += tmp_2945;
      tmp_2943 += (Conj(ZU(gt2,j2))) * tmp_2944;
   }
   tmp_2942 += tmp_2943;
   tmp_2941 += (Conj(Mu)*ZA(gt1,0)) * tmp_2942;
   std::complex<double> tmp_2946;
   std::complex<double> tmp_2947;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2948;
      std::complex<double> tmp_2949;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2949 += Conj(Yu(j1,j2))*Conj(ZU(gt2,3 + j1));
      }
      tmp_2948 += tmp_2949;
      tmp_2947 += (ZU(gt3,j2)) * tmp_2948;
   }
   tmp_2946 += tmp_2947;
   tmp_2941 += (-(Mu*ZA(gt1,0))) * tmp_2946;
   std::complex<double> tmp_2950;
   std::complex<double> tmp_2951;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2952;
      std::complex<double> tmp_2953;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2953 += ZU(gt3,3 + j1)*TYu(j1,j2);
      }
      tmp_2952 += tmp_2953;
      tmp_2951 += (Conj(ZU(gt2,j2))) * tmp_2952;
   }
   tmp_2950 += tmp_2951;
   std::complex<double> tmp_2954;
   std::complex<double> tmp_2955;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2956;
      std::complex<double> tmp_2957;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2957 += Conj(ZU(gt2,3 + j1))*Conj(TYu(j1,j2));
      }
      tmp_2956 += tmp_2957;
      tmp_2955 += (ZU(gt3,j2)) * tmp_2956;
   }
   tmp_2954 += tmp_2955;
   tmp_2950 += (-1) * tmp_2954;
   tmp_2941 += (ZA(gt1,1)) * tmp_2950;
   result += (std::complex<double>(0.,-0.7071067811865475)) * tmp_2941;

   return result;
}

std::complex<double> MSSM_effective_couplings::CpAhSeconjSe(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto TYe = MODELPARAMETER(TYe);
   const auto Ye = MODELPARAMETER(Ye);
   const auto Mu = MODELPARAMETER(Mu);

   std::complex<double> result;

   std::complex<double> tmp_2958;
   std::complex<double> tmp_2959;
   std::complex<double> tmp_2960;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2961;
      std::complex<double> tmp_2962;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2962 += ZE(gt3,3 + j1)*TYe(j1,j2);
      }
      tmp_2961 += tmp_2962;
      tmp_2960 += (Conj(ZE(gt2,j2))) * tmp_2961;
   }
   tmp_2959 += tmp_2960;
   tmp_2958 += (ZA(gt1,0)) * tmp_2959;
   std::complex<double> tmp_2963;
   std::complex<double> tmp_2964;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2965;
      std::complex<double> tmp_2966;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2966 += Conj(ZE(gt2,3 + j1))*Conj(TYe(j1,j2));
      }
      tmp_2965 += tmp_2966;
      tmp_2964 += (ZE(gt3,j2)) * tmp_2965;
   }
   tmp_2963 += tmp_2964;
   tmp_2958 += (-ZA(gt1,0)) * tmp_2963;
   std::complex<double> tmp_2967;
   std::complex<double> tmp_2968;
   std::complex<double> tmp_2969;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2970;
      std::complex<double> tmp_2971;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2971 += Ye(j1,j2)*ZE(gt3,3 + j1);
      }
      tmp_2970 += tmp_2971;
      tmp_2969 += (Conj(ZE(gt2,j2))) * tmp_2970;
   }
   tmp_2968 += tmp_2969;
   tmp_2967 += (Conj(Mu)) * tmp_2968;
   std::complex<double> tmp_2972;
   std::complex<double> tmp_2973;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2974;
      std::complex<double> tmp_2975;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2975 += Conj(Ye(j1,j2))*Conj(ZE(gt2,3 + j1));
      }
      tmp_2974 += tmp_2975;
      tmp_2973 += (ZE(gt3,j2)) * tmp_2974;
   }
   tmp_2972 += tmp_2973;
   tmp_2967 += (-Mu) * tmp_2972;
   tmp_2958 += (ZA(gt1,1)) * tmp_2967;
   result += (std::complex<double>(0.,-0.7071067811865475)) * tmp_2958;

   return result;
}

std::complex<double> MSSM_effective_couplings::CpAhHpmconjHpm(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto g2 = MODELPARAMETER(g2);
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);

   std::complex<double> result;

   result = std::complex<double>(0,-0.25)*Sqr(g2)*(vu*ZA(gt1,0) + vd*ZA(gt1,1))
      *(ZP(gt2,1)*ZP(gt3,0) - ZP(gt2,0)*ZP(gt3,1));

   return result;
}

std::complex<double> MSSM_effective_couplings::CpAhChabarChaPL(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto g2 = MODELPARAMETER(g2);

   std::complex<double> result;

   result = std::complex<double>(0.,0.7071067811865475)*g2*(Conj(UM(gt2,1))*
      Conj(UP(gt3,0))*ZA(gt1,0) + Conj(UM(gt2,0))*Conj(UP(gt3,1))*ZA(gt1,1));

   return result;
}

std::complex<double> MSSM_effective_couplings::CpAhFebarFePL(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto Ye = MODELPARAMETER(Ye);

   std::complex<double> result;

   std::complex<double> tmp_2976;
   std::complex<double> tmp_2977;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2978;
      std::complex<double> tmp_2979;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2979 += Conj(ZER(gt3,j1))*Ye(j1,j2);
      }
      tmp_2978 += tmp_2979;
      tmp_2977 += (Conj(ZEL(gt2,j2))) * tmp_2978;
   }
   tmp_2976 += tmp_2977;
   result += (std::complex<double>(0.,-0.7071067811865475)*ZA(gt1,0)) *
      tmp_2976;

   return result;
}

std::complex<double> MSSM_effective_couplings::CpAhFdbarFdPL(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto Yd = MODELPARAMETER(Yd);

   std::complex<double> result;

   std::complex<double> tmp_2980;
   std::complex<double> tmp_2981;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2982;
      std::complex<double> tmp_2983;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2983 += Conj(ZDR(gt3,j1))*Yd(j1,j2);
      }
      tmp_2982 += tmp_2983;
      tmp_2981 += (Conj(ZDL(gt2,j2))) * tmp_2982;
   }
   tmp_2980 += tmp_2981;
   result += (std::complex<double>(0.,-0.7071067811865475)*ZA(gt1,0)) *
      tmp_2980;

   return result;
}

std::complex<double> MSSM_effective_couplings::CpAhFubarFuPL(unsigned gt1, unsigned gt2, unsigned gt3) const
{
   const auto Yu = MODELPARAMETER(Yu);

   std::complex<double> result;

   std::complex<double> tmp_2984;
   std::complex<double> tmp_2985;
   for (unsigned j2 = 0; j2 < 3; ++j2) {
      std::complex<double> tmp_2986;
      std::complex<double> tmp_2987;
      for (unsigned j1 = 0; j1 < 3; ++j1) {
         tmp_2987 += Conj(ZUR(gt3,j1))*Yu(j1,j2);
      }
      tmp_2986 += tmp_2987;
      tmp_2985 += (Conj(ZUL(gt2,j2))) * tmp_2986;
   }
   tmp_2984 += tmp_2985;
   result += (std::complex<double>(0.,-0.7071067811865475)*ZA(gt1,1)) *
      tmp_2984;

   return result;
}

void MSSM_effective_couplings::calculate_eff_CphhVPVP(unsigned gO1)
{
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto MSd = MODELPARAMETER(MSd);
   const auto MSu = MODELPARAMETER(MSu);
   const auto MSe = MODELPARAMETER(MSe);
   const auto MHpm = MODELPARAMETER(MHpm);
   const auto MCha = MODELPARAMETER(MCha);
   const auto MFe = MODELPARAMETER(MFe);
   const auto MFd = MODELPARAMETER(MFd);
   const auto MFu = MODELPARAMETER(MFu);
   const auto MVWm = MODELPARAMETER(MVWm);
   const auto decay_mass = PHYSICAL(Mhh)(gO1);
   const auto decay_scale = 0.25 * Sqr(decay_mass);
   const auto saved_ZH = ZH;
   ZH = PHYSICAL(ZH);

   const auto vev = Sqrt(Sqr(vd) + Sqr(vu));

   std::complex<double> result = 0;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      result += 0.16666666666666666 * scalar_scalar_qcd_factor(decay_mass,
         MSd(gI1)) * CphhSdconjSd(gO1, gI1, gI1) * vev * AS0(decay_scale / Sqr(MSd
         (gI1))) / Sqr(MSd(gI1));
   }
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      result += 0.6666666666666666 * scalar_scalar_qcd_factor(decay_mass,
         MSu(gI1)) * CphhSuconjSu(gO1, gI1, gI1) * vev * AS0(decay_scale / Sqr(MSu
         (gI1))) / Sqr(MSu(gI1));
   }
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      result += 0.5 * CphhSeconjSe(gO1, gI1, gI1) * vev * AS0(decay_scale /
         Sqr(MSe(gI1))) / Sqr(MSe(gI1));
   }
   for (unsigned gI1 = 1; gI1 < 2; ++gI1) {
      result += 0.5 * CphhHpmconjHpm(gO1, gI1, gI1) * vev * AS0(decay_scale
         / Sqr(MHpm(gI1))) / Sqr(MHpm(gI1));
   }
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      result += CpChahhbarChaPL(gI1, gO1, gI1) * vev * AS12(decay_scale /
         Sqr(MCha(gI1))) / MCha(gI1);
   }
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      result += CpFehhbarFePL(gI1, gO1, gI1) * vev * AS12(decay_scale / Sqr(
         MFe(gI1))) / MFe(gI1);
   }
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      result += 0.3333333333333333 * scalar_fermion_qcd_factor(decay_mass,
         MFd(gI1)) * CpFdhhbarFdPL(gI1, gO1, gI1) * vev * AS12(decay_scale / Sqr(
         MFd(gI1))) / MFd(gI1);
   }
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      result += 1.3333333333333333 * scalar_fermion_qcd_factor(decay_mass,
         MFu(gI1)) * CpFuhhbarFuPL(gI1, gO1, gI1) * vev * AS12(decay_scale / Sqr(
         MFu(gI1))) / MFu(gI1);
   }
   result += -0.5 * CphhVWmconjVWm(gO1) * vev * AS1(decay_scale / Sqr(MVWm)) /
      Sqr(MVWm);

   result *= 0.1892681907127351 * physical_input.get(Physical_input::alpha_em_0
      ) * Sqrt(qedqcd.displayFermiConstant());

   ZH = saved_ZH;
   eff_CphhVPVP(gO1) = result;

}

void MSSM_effective_couplings::calculate_eff_CphhVGVG(unsigned gO1)
{
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto g3 = MODELPARAMETER(g3);
   const auto MSd = MODELPARAMETER(MSd);
   const auto MSu = MODELPARAMETER(MSu);
   const auto MFd = MODELPARAMETER(MFd);
   const auto MFu = MODELPARAMETER(MFu);
   const double alpha_s = 0.07957747154594767*Sqr(g3);
   const auto decay_mass = PHYSICAL(Mhh)(gO1);
   const auto decay_scale = 0.25 * Sqr(decay_mass);
   const auto saved_ZH = ZH;
   ZH = PHYSICAL(ZH);

   const auto vev = Sqrt(Sqr(vd) + Sqr(vu));

   std::complex<double> result = 0;
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      result += 0.5 * CphhSdconjSd(gO1, gI1, gI1) * vev * AS0(decay_scale /
         Sqr(MSd(gI1))) / Sqr(MSd(gI1));
   }
   for (unsigned gI1 = 0; gI1 < 6; ++gI1) {
      result += 0.5 * CphhSuconjSu(gO1, gI1, gI1) * vev * AS0(decay_scale /
         Sqr(MSu(gI1))) / Sqr(MSu(gI1));
   }
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      result += CpFdhhbarFdPL(gI1, gO1, gI1) * vev * AS12(decay_scale / Sqr(
         MFd(gI1))) / MFd(gI1);
   }
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      result += CpFuhhbarFuPL(gI1, gO1, gI1) * vev * AS12(decay_scale / Sqr(
         MFu(gI1))) / MFu(gI1);
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

void MSSM_effective_couplings::calculate_eff_CpAhVPVP(unsigned gO1)
{
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto MCha = MODELPARAMETER(MCha);
   const auto MFe = MODELPARAMETER(MFe);
   const auto MFd = MODELPARAMETER(MFd);
   const auto MFu = MODELPARAMETER(MFu);
   const auto decay_mass = PHYSICAL(MAh)(gO1);
   const auto decay_scale = 0.25 * Sqr(decay_mass);
   const auto saved_ZA = ZA;
   ZA = PHYSICAL(ZA);

   const auto vev = Sqrt(Sqr(vd) + Sqr(vu));

   std::complex<double> result = 0;
   for (unsigned gI1 = 0; gI1 < 2; ++gI1) {
      result += CpAhChabarChaPL(gO1, gI1, gI1) * vev * AP12(decay_scale /
         Sqr(MCha(gI1))) / MCha(gI1);
   }
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      result += CpAhFebarFePL(gO1, gI1, gI1) * vev * AP12(decay_scale / Sqr(
         MFe(gI1))) / MFe(gI1);
   }
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      result += 0.3333333333333333 * pseudoscalar_fermion_qcd_factor(
         decay_mass, MFd(gI1)) * CpAhFdbarFdPL(gO1, gI1, gI1) * vev * AP12(
         decay_scale / Sqr(MFd(gI1))) / MFd(gI1);
   }
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      result += 1.3333333333333333 * pseudoscalar_fermion_qcd_factor(
         decay_mass, MFu(gI1)) * CpAhFubarFuPL(gO1, gI1, gI1) * vev * AP12(
         decay_scale / Sqr(MFu(gI1))) / MFu(gI1);
   }
   result *= std::complex<double>(2.0,0.);

   result *= 0.1892681907127351 * physical_input.get(Physical_input::alpha_em_0
      ) * Sqrt(qedqcd.displayFermiConstant());

   ZA = saved_ZA;
   eff_CpAhVPVP(gO1) = result;

}

void MSSM_effective_couplings::calculate_eff_CpAhVGVG(unsigned gO1)
{
   const auto vd = MODELPARAMETER(vd);
   const auto vu = MODELPARAMETER(vu);
   const auto g3 = MODELPARAMETER(g3);
   const auto MFd = MODELPARAMETER(MFd);
   const auto MFu = MODELPARAMETER(MFu);
   const double alpha_s = 0.07957747154594767*Sqr(g3);
   const auto decay_mass = PHYSICAL(MAh)(gO1);
   const auto decay_scale = 0.25 * Sqr(decay_mass);
   const auto saved_ZA = ZA;
   ZA = PHYSICAL(ZA);

   const auto vev = Sqrt(Sqr(vd) + Sqr(vu));

   std::complex<double> result = 0;
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      result += CpAhFdbarFdPL(gO1, gI1, gI1) * vev * AP12(decay_scale / Sqr(
         MFd(gI1))) / MFd(gI1);
   }
   for (unsigned gI1 = 0; gI1 < 3; ++gI1) {
      result += CpAhFubarFuPL(gO1, gI1, gI1) * vev * AP12(decay_scale / Sqr(
         MFu(gI1))) / MFu(gI1);
   }
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
