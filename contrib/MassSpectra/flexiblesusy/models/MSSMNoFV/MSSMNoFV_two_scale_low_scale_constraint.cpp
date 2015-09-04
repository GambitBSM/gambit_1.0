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

// File generated at Mon 1 Jun 2015 13:05:17

#include "MSSMNoFV_two_scale_low_scale_constraint.hpp"
#include "MSSMNoFV_two_scale_model.hpp"
#include "wrappers.hpp"
#include "logger.hpp"
#include "ew_input.hpp"
#include "gsl_utils.hpp"
#include "minimizer.hpp"
#include "root_finder.hpp"
#include "weinberg_angle.hpp"

#include <cassert>
#include <cmath>
#include <limits>

namespace flexiblesusy {

#define INPUTPARAMETER(p) model->get_input().p
#define MODELPARAMETER(p) model->get_##p()
#define PHASE(p) model->get_##p()
#define BETAPARAMETER(p) beta_functions.get_##p()
#define BETA(p) beta_##p
#define LowEnergyConstant(p) Electroweak_constants::p
#define STANDARDDEVIATION(p) Electroweak_constants::Error_##p
#define Pole(p) model->get_physical().p
#define MODEL model
#define MODELCLASSNAME MSSMNoFV<Two_scale>
#define CKM ckm
#define PMNS pmns
#define THETAW theta_w
#define ALPHA_EM_DRBAR alpha_em_drbar
#define CALCULATE_DRBAR_MASSES() model->calculate_DRbar_masses()

MSSMNoFV_low_scale_constraint<Two_scale>::MSSMNoFV_low_scale_constraint()
   : Constraint<Two_scale>()
   , scale(0.)
   , initial_scale_guess(0.)
   , model(0)
   , oneset()
   , ckm()
   , pmns()
   , MWDRbar(0.)
   , MZDRbar(0.)
   , AlphaS(0.)
   , EDRbar(0.)
   , ThetaWDRbar(0.)
   , new_g1(0.)
   , new_g2(0.)
   , new_g3(0.)
   , self_energy_w_at_mw(0.)
   , threshold_corrections_loop_order(1)
{
   ckm << 1., 0., 0.,
          0., 1., 0.,
          0., 0., 1.;

   pmns << 1., 0., 0.,
           0., 1., 0.,
           0., 0., 1.;
}

MSSMNoFV_low_scale_constraint<Two_scale>::MSSMNoFV_low_scale_constraint(
   MSSMNoFV<Two_scale>* model_, const QedQcd& oneset_)
   : Constraint<Two_scale>()
   , model(model_)
   , oneset(oneset_)
   , new_g1(0.)
   , new_g2(0.)
   , new_g3(0.)
   , self_energy_w_at_mw(0.)
{
   initialize();
}

MSSMNoFV_low_scale_constraint<Two_scale>::~MSSMNoFV_low_scale_constraint()
{
}

void MSSMNoFV_low_scale_constraint<Two_scale>::apply()
{
   assert(model && "Error: MSSMNoFV_low_scale_constraint::apply():"
          " model pointer must not be zero");

   model->calculate_DRbar_masses();
   update_scale();
   calculate_DRbar_gauge_couplings();

   const auto TanBeta = INPUTPARAMETER(TanBeta);
   const auto g1 = MODELPARAMETER(g1);
   const auto g2 = MODELPARAMETER(g2);

   calculate_Yu_DRbar();
   calculate_Yd_DRbar();
   calculate_Ye_DRbar();
   MODEL->set_vd(Re((2*MZDRbar)/(Sqrt(0.6*Sqr(g1) + Sqr(g2))*Sqrt(1 + Sqr(
      TanBeta)))));
   MODEL->set_vu(Re((2*MZDRbar*TanBeta)/(Sqrt(0.6*Sqr(g1) + Sqr(g2))*Sqrt(1 +
      Sqr(TanBeta)))));


   model->set_g1(new_g1);
   model->set_g2(new_g2);
   model->set_g3(new_g3);

   recalculate_mw_pole();
}

const Eigen::Matrix<std::complex<double>,3,3>& MSSMNoFV_low_scale_constraint<Two_scale>::get_ckm()
{
   return ckm;
}

const Eigen::Matrix<std::complex<double>,3,3>& MSSMNoFV_low_scale_constraint<Two_scale>::get_pmns()
{
   return pmns;
}

double MSSMNoFV_low_scale_constraint<Two_scale>::get_scale() const
{
   return scale;
}

double MSSMNoFV_low_scale_constraint<Two_scale>::get_initial_scale_guess() const
{
   return initial_scale_guess;
}

void MSSMNoFV_low_scale_constraint<Two_scale>::set_model(Two_scale_model* model_)
{
   model = cast_model<MSSMNoFV<Two_scale>*>(model_);
}

void MSSMNoFV_low_scale_constraint<Two_scale>::set_sm_parameters(const QedQcd& oneset_)
{
   oneset = oneset_;
}

const QedQcd& MSSMNoFV_low_scale_constraint<Two_scale>::get_sm_parameters() const
{
   return oneset;
}

void MSSMNoFV_low_scale_constraint<Two_scale>::clear()
{
   scale = 0.;
   initial_scale_guess = 0.;
   model = NULL;
   oneset = QedQcd();
   MWDRbar = 0.;
   MZDRbar = 0.;
   AlphaS = 0.;
   EDRbar = 0.;
   ThetaWDRbar = 0.;
   new_g1 = 0.;
   new_g2 = 0.;
   new_g3 = 0.;
   self_energy_w_at_mw = 0.;
}

void MSSMNoFV_low_scale_constraint<Two_scale>::initialize()
{
   assert(model && "MSSMNoFV_low_scale_constraint<Two_scale>::"
          "initialize(): model pointer is zero.");

   initial_scale_guess = oneset.displayPoleMZ();

   scale = initial_scale_guess;

   MWDRbar = 0.;
   MZDRbar = 0.;
   AlphaS = 0.;
   EDRbar = 0.;
   ThetaWDRbar = 0.;
   new_g1 = 0.;
   new_g2 = 0.;
   new_g3 = 0.;
   ckm = oneset.get_complex_ckm();
   pmns = oneset.get_complex_pmns();
   self_energy_w_at_mw = 0.;
}

void MSSMNoFV_low_scale_constraint<Two_scale>::update_scale()
{
   assert(model && "MSSMNoFV_low_scale_constraint<Two_scale>::"
          "update_scale(): model pointer is zero.");

   scale =  oneset.displayPoleMZ();


}

void MSSMNoFV_low_scale_constraint<Two_scale>::calculate_threshold_corrections()
{
   assert(oneset.displayMu() == get_scale() && "Error: low-energy data"
          " set is not defined at the same scale as the low-energy"
          " constraint.  You need to run the low-energy data set to this"
          " scale!");
   assert(model && "MSSMNoFV_low_scale_constraint<Two_scale>::"
          "calculate_threshold_corrections(): model pointer is zero");

   const double alpha_em = oneset.displayAlpha(ALPHA);
   const double alpha_s  = oneset.displayAlpha(ALPHAS);
   const double mw_pole  = oneset.displayPoleMW();
   const double mz_pole  = oneset.displayPoleMZ();

   double delta_alpha_em = 0.;
   double delta_alpha_s  = 0.;

   if (model->get_thresholds()) {
      delta_alpha_em = calculate_delta_alpha_em(alpha_em);
      delta_alpha_s  = calculate_delta_alpha_s(alpha_s);
   }

   const double alpha_em_drbar = alpha_em / (1.0 - delta_alpha_em);
   const double alpha_s_drbar  = alpha_s  / (1.0 - delta_alpha_s);
   const double e_drbar        = Sqrt(4.0 * Pi * alpha_em_drbar);

   // interface variables
   MZDRbar = mz_pole;
   MWDRbar = mw_pole;

   if (model->get_thresholds()) {
      MZDRbar = model->calculate_MVZ_DRbar(mz_pole);
      MWDRbar = model->calculate_MVWm_DRbar(mw_pole);
   }

   AlphaS = alpha_s_drbar;
   EDRbar = e_drbar;
   ThetaWDRbar = calculate_theta_w(alpha_em_drbar);
}

double MSSMNoFV_low_scale_constraint<Two_scale>::calculate_theta_w(double alpha_em_drbar)
{
   assert(model && "MSSMNoFV_low_scale_constraint<Two_scale>::"
          "calculate_theta_w(): model pointer is zero");

   double theta_w = 0.;

   using namespace weinberg_angle;

   const auto ZE = MODELPARAMETER(ZE);
   const auto ZM = MODELPARAMETER(ZM);
   const auto MSveL = MODELPARAMETER(MSveL);
   const auto MSvmL = MODELPARAMETER(MSvmL);
   const auto MSe = MODELPARAMETER(MSe);
   const auto MSm = MODELPARAMETER(MSm);

   const double scale         = MODEL->get_scale();
   const double mw_pole       = oneset.displayPoleMW();
   const double mz_pole       = oneset.displayPoleMZ();
   const double mt_pole       = oneset.displayPoleMt();
   const double mt_drbar      = MODEL->get_MFt();
   const double mb_drbar      = MODEL->get_MFb();
   const double mh_drbar      = MODEL->get_Mhh(0);
   const double gY            = MODEL->get_g1() * 0.7745966692414834;
   const double g2            = MODEL->get_g2();
   const double g3            = MODEL->get_g3();
   const double ymu           = Re(MODEL->get_Ye(1,1));
   const double hmix_12       = MODEL->get_ZH(0,1);
   const double tanBeta       = MODEL->get_vu() / MODEL->get_vd();
   const double mselL         = AbsSqr(ZE(0,0))*MSe(0) + AbsSqr(ZE(1,0))*MSe(1)
      ;
   const double msmuL         = AbsSqr(ZM(0,0))*MSm(0) + AbsSqr(ZM(1,0))*MSm(1)
      ;
   const double msnue         = MSveL;
   const double msnumu        = MSvmL;
   const double pizztMZ       = Re(MODEL->self_energy_VZ(mz_pole));
   const double piwwt0        = Re(MODEL->self_energy_VWm(0.));
   self_energy_w_at_mw        = Re(MODEL->self_energy_VWm(mw_pole));

   Weinberg_angle::Self_energy_data se_data;
   se_data.scale    = scale;
   se_data.mt_pole  = mt_pole;
   se_data.mt_drbar = mt_drbar;
   se_data.mb_drbar = mb_drbar;
   se_data.gY       = gY;
   se_data.g2       = g2;

   double pizztMZ_corrected = pizztMZ;
   double piwwtMW_corrected = self_energy_w_at_mw;
   double piwwt0_corrected  = piwwt0;

   if (model->get_thresholds() > 1) {
      pizztMZ_corrected =
         Weinberg_angle::replace_mtop_in_self_energy_z(pizztMZ, mz_pole,
            se_data);
      piwwtMW_corrected =
         Weinberg_angle::replace_mtop_in_self_energy_w(
            self_energy_w_at_mw, mw_pole, se_data);
      piwwt0_corrected =
         Weinberg_angle::replace_mtop_in_self_energy_w(piwwt0, 0.,
            se_data);
   }

   Weinberg_angle::Data data;
   data.scale               = scale;
   data.alpha_em_drbar      = ALPHA_EM_DRBAR;
   data.fermi_contant       = oneset.displayFermiConstant();
   data.self_energy_z_at_mz = pizztMZ_corrected;
   data.self_energy_w_at_mw = piwwtMW_corrected;
   data.self_energy_w_at_0  = piwwt0_corrected;
   data.mw_pole             = mw_pole;
   data.mz_pole             = mz_pole;
   data.mt_pole             = mt_pole;
   data.mh_drbar            = mh_drbar;
   data.hmix_12             = hmix_12;
   data.msel_drbar          = mselL;
   data.msmul_drbar         = msmuL;
   data.msve_drbar          = msnue;
   data.msvm_drbar          = msnumu;
   data.mn_drbar            = MODEL->get_MChi();
   data.mc_drbar            = MODEL->get_MCha();
   data.zn                  = MODEL->get_ZN();
   data.um                  = MODEL->get_UM();
   data.up                  = MODEL->get_UP();
   data.gY                  = gY;
   data.g2                  = g2;
   data.g3                  = g3;
   data.tan_beta            = tanBeta;
   data.ymu                 = ymu;

   Weinberg_angle weinberg;
   weinberg.enable_susy_contributions();
   weinberg.set_number_of_loops(MODEL->get_thresholds());
   weinberg.set_data(data);

   const int error = weinberg.calculate();

   THETAW = ArcSin(weinberg.get_sin_theta());

   if (error)
      MODEL->get_problems().flag_no_rho_convergence();
   else
      MODEL->get_problems().unflag_no_rho_convergence();


   return theta_w;
}

void MSSMNoFV_low_scale_constraint<Two_scale>::calculate_DRbar_gauge_couplings()
{
   assert(model && "MSSMNoFV_low_scale_constraint<Two_scale>::"
          "calculate_DRbar_gauge_couplings(): model pointer is zero");

   calculate_threshold_corrections();

   new_g1 = 1.2909944487358056*EDRbar*Sec(ThetaWDRbar);
   new_g2 = EDRbar*Csc(ThetaWDRbar);
   new_g3 = 3.5449077018110318*Sqrt(AlphaS);

}

double MSSMNoFV_low_scale_constraint<Two_scale>::calculate_delta_alpha_em(double alphaEm) const
{
   assert(model && "MSSMNoFV_low_scale_constraint<Two_scale>::"
          "calculate_delta_alpha_em(): model pointer is zero");

   const double currentScale = model->get_scale();
   const auto MCha = MODELPARAMETER(MCha);
   const auto MHpm = MODELPARAMETER(MHpm);
   const auto MSb = MODELPARAMETER(MSb);
   const auto MSc = MODELPARAMETER(MSc);
   const auto MSd = MODELPARAMETER(MSd);
   const auto MSe = MODELPARAMETER(MSe);
   const auto MSm = MODELPARAMETER(MSm);
   const auto MSs = MODELPARAMETER(MSs);
   const auto MSt = MODELPARAMETER(MSt);
   const auto MStau = MODELPARAMETER(MStau);
   const auto MSu = MODELPARAMETER(MSu);
   const auto MFt = MODELPARAMETER(MFt);

   const double delta_alpha_em_SM = 0.15915494309189535*alphaEm*(
      0.3333333333333333 - 1.7777777777777777*FiniteLog(Abs(MFt/currentScale)));

   const double delta_alpha_em = 0.15915494309189535*alphaEm*(
      -1.3333333333333333*FiniteLog(Abs(MCha(0)/currentScale)) -
      1.3333333333333333*FiniteLog(Abs(MCha(1)/currentScale)) - 0.3333333333333333
      *FiniteLog(Abs(MHpm(1)/currentScale)) - 0.1111111111111111*FiniteLog(Abs(MSb
      (0)/currentScale)) - 0.1111111111111111*FiniteLog(Abs(MSb(1)/currentScale))
      - 0.4444444444444444*FiniteLog(Abs(MSc(0)/currentScale)) -
      0.4444444444444444*FiniteLog(Abs(MSc(1)/currentScale)) - 0.1111111111111111*
      FiniteLog(Abs(MSd(0)/currentScale)) - 0.1111111111111111*FiniteLog(Abs(MSd(1
      )/currentScale)) - 0.3333333333333333*FiniteLog(Abs(MSe(0)/currentScale)) -
      0.3333333333333333*FiniteLog(Abs(MSe(1)/currentScale)) - 0.3333333333333333*
      FiniteLog(Abs(MSm(0)/currentScale)) - 0.3333333333333333*FiniteLog(Abs(MSm(1
      )/currentScale)) - 0.1111111111111111*FiniteLog(Abs(MSs(0)/currentScale)) -
      0.1111111111111111*FiniteLog(Abs(MSs(1)/currentScale)) - 0.4444444444444444*
      FiniteLog(Abs(MSt(0)/currentScale)) - 0.4444444444444444*FiniteLog(Abs(MSt(1
      )/currentScale)) - 0.3333333333333333*FiniteLog(Abs(MStau(0)/currentScale))
      - 0.3333333333333333*FiniteLog(Abs(MStau(1)/currentScale)) -
      0.4444444444444444*FiniteLog(Abs(MSu(0)/currentScale)) - 0.4444444444444444*
      FiniteLog(Abs(MSu(1)/currentScale)));

   return delta_alpha_em + delta_alpha_em_SM;

}

double MSSMNoFV_low_scale_constraint<Two_scale>::calculate_delta_alpha_s(double alphaS) const
{
   assert(model && "MSSMNoFV_low_scale_constraint<Two_scale>::"
          "calculate_delta_alpha_s(): model pointer is zero");

   const double currentScale = model->get_scale();
   const auto MSb = MODELPARAMETER(MSb);
   const auto MSc = MODELPARAMETER(MSc);
   const auto MSd = MODELPARAMETER(MSd);
   const auto MSs = MODELPARAMETER(MSs);
   const auto MSt = MODELPARAMETER(MSt);
   const auto MSu = MODELPARAMETER(MSu);
   const auto MFt = MODELPARAMETER(MFt);
   const auto MGlu = MODELPARAMETER(MGlu);

   const double delta_alpha_s_SM = -0.1061032953945969*alphaS*FiniteLog(Abs(
      MFt/currentScale));

   const double delta_alpha_s = 0.15915494309189535*alphaS*(0.5 - 2*FiniteLog(
      Abs(MGlu/currentScale)) - 0.16666666666666666*FiniteLog(Abs(MSb(0)
      /currentScale)) - 0.16666666666666666*FiniteLog(Abs(MSb(1)/currentScale)) -
      0.16666666666666666*FiniteLog(Abs(MSc(0)/currentScale)) -
      0.16666666666666666*FiniteLog(Abs(MSc(1)/currentScale)) -
      0.16666666666666666*FiniteLog(Abs(MSd(0)/currentScale)) -
      0.16666666666666666*FiniteLog(Abs(MSd(1)/currentScale)) -
      0.16666666666666666*FiniteLog(Abs(MSs(0)/currentScale)) -
      0.16666666666666666*FiniteLog(Abs(MSs(1)/currentScale)) -
      0.16666666666666666*FiniteLog(Abs(MSt(0)/currentScale)) -
      0.16666666666666666*FiniteLog(Abs(MSt(1)/currentScale)) -
      0.16666666666666666*FiniteLog(Abs(MSu(0)/currentScale)) -
      0.16666666666666666*FiniteLog(Abs(MSu(1)/currentScale)));

   return delta_alpha_s + delta_alpha_s_SM;

}

void MSSMNoFV_low_scale_constraint<Two_scale>::calculate_DRbar_yukawa_couplings()
{
   calculate_Yu_DRbar();
   calculate_Yd_DRbar();
   calculate_Ye_DRbar();
}

void MSSMNoFV_low_scale_constraint<Two_scale>::calculate_Yu_DRbar()
{
   assert(model && "MSSMNoFV_low_scale_constraint<Two_scale>::"
          "calculate_Yu_DRbar(): model pointer is zero");

   Eigen::Matrix<std::complex<double>,3,3> topDRbar(ZEROMATRIXCOMPLEX(3,3));
   topDRbar(0,0)      = oneset.displayMass(mUp);
   topDRbar(1,1)      = oneset.displayMass(mCharm);
   topDRbar(2,2)      = oneset.displayMass(mTop);

   if (model->get_thresholds())
      topDRbar(2,2) = model->calculate_MFt_DRbar(oneset.displayPoleMt(), 2);

   const auto vu = MODELPARAMETER(vu);
   MODEL->set_Yu(((1.4142135623730951*topDRbar)/vu).real());

}

void MSSMNoFV_low_scale_constraint<Two_scale>::calculate_Yd_DRbar()
{
   assert(model && "MSSMNoFV_low_scale_constraint<Two_scale>::"
          "calculate_Yd_DRbar(): model pointer is zero");

   Eigen::Matrix<std::complex<double>,3,3> bottomDRbar(ZEROMATRIXCOMPLEX(3,3));
   bottomDRbar(0,0)   = oneset.displayMass(mDown);
   bottomDRbar(1,1)   = oneset.displayMass(mStrange);
   bottomDRbar(2,2)   = oneset.displayMass(mBottom);

   if (model->get_thresholds())
      bottomDRbar(2,2) = model->calculate_MFb_DRbar(oneset.displayMass(mBottom), 2);

   const auto vd = MODELPARAMETER(vd);
   MODEL->set_Yd(((1.4142135623730951*bottomDRbar)/vd).real());

}

void MSSMNoFV_low_scale_constraint<Two_scale>::calculate_Ye_DRbar()
{
   assert(model && "MSSMNoFV_low_scale_constraint<Two_scale>::"
          "calculate_Ye_DRbar(): model pointer is zero");

   Eigen::Matrix<std::complex<double>,3,3> electronDRbar(ZEROMATRIXCOMPLEX(3,3));
   electronDRbar(0,0) = oneset.displayMass(mElectron);
   electronDRbar(1,1) = oneset.displayMass(mMuon);
   electronDRbar(2,2) = oneset.displayMass(mTau);

   if (model->get_thresholds()) {
      electronDRbar(0,0) = model->calculate_MFtau_DRbar(oneset.displayMass(mElectron), 0);
      electronDRbar(1,1) = model->calculate_MFtau_DRbar(oneset.displayMass(mMuon), 1);
      electronDRbar(2,2) = model->calculate_MFtau_DRbar(oneset.displayMass(mTau), 2);
   }

   const auto vd = MODELPARAMETER(vd);
   MODEL->set_Ye(((1.4142135623730951*electronDRbar)/vd).real());

}

void MSSMNoFV_low_scale_constraint<Two_scale>::calculate_MNeutrino_DRbar()
{
   assert(model && "MSSMNoFV_low_scale_constraint<Two_scale>::"
          "calculate_MNeutrino_DRbar(): model pointer is zero");

   neutrinoDRbar.setZero();
   neutrinoDRbar(0,0) = oneset.displayNeutrinoPoleMass(1);
   neutrinoDRbar(1,1) = oneset.displayNeutrinoPoleMass(2);
   neutrinoDRbar(2,2) = oneset.displayNeutrinoPoleMass(3);
}

/**
 * Recalculates the W boson pole mass using the new gauge couplings.
 */
void MSSMNoFV_low_scale_constraint<Two_scale>::recalculate_mw_pole()
{
   assert(model && "MSSMNoFV_low_scale_constraint<Two_scale>::"
          "recalculate_mw_pole(): model pointer is zero");

   if (!model->get_thresholds())
      return;

   MODEL->calculate_MVWm();

   const double mw_drbar    = MODEL->get_MVWm();
   const double mw_pole_sqr = Sqr(mw_drbar) - self_energy_w_at_mw;

   if (mw_pole_sqr < 0.)
      MODEL->get_problems().flag_tachyon(MSSMNoFV_info::VWm);

   const double mw_pole = AbsSqrt(mw_pole_sqr);

   oneset.setPoleMW(mw_pole);

}

} // namespace flexiblesusy
