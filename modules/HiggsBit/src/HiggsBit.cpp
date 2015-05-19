//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module HiggsBit
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Chris Rogan
///          (crogan@cern.ch)
///  \date 2014 Aug
///  \date 2015 May
///
///  *********************************************

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/HiggsBit/HiggsBit_rollcall.hpp"

namespace Gambit
{

  namespace HiggsBit
  {
 
    void HB_LEPchisq(double &result) 
    {
      using namespace Pipes::HB_LEPchisq;
   
      hb_ModelParameters ModelParam = *Dep::HB_ModelParameters;
      
      Farray<double, 1,3, 1,3> CS_lep_hjhi_ratio;
      Farray<double, 1,3, 1,3> BR_hjhihi;
      for(int i = 0; i < 3; i++)
	for(int j = 0; j < 3; j++){
	  CS_lep_hjhi_ratio(i+1,j+1) = ModelParam.CS_lep_hjhi_ratio[i][j];
	  BR_hjhihi(i+1,j+1) = ModelParam.BR_hjhihi[i][j];
	}
      
      BEreq::HiggsBounds_neutral_input_part(&ModelParam.Mh[0], &ModelParam.hGammaTot[0], &ModelParam.CP[0], 
					    &ModelParam.CS_lep_hjZ_ratio[0], &ModelParam.CS_lep_bbhj_ratio[0], 
					    &ModelParam.CS_lep_tautauhj_ratio[0], CS_lep_hjhi_ratio, 
					    &ModelParam.CS_gg_hj_ratio[0], &ModelParam.CS_bb_hj_ratio[0],
					    &ModelParam.CS_bg_hjb_ratio[0], &ModelParam.CS_ud_hjWp_ratio[0],
					    &ModelParam.CS_cs_hjWp_ratio[0], &ModelParam.CS_ud_hjWm_ratio[0],
					    &ModelParam.CS_cs_hjWm_ratio[0], &ModelParam.CS_gg_hjZ_ratio[0],
					    &ModelParam.CS_dd_hjZ_ratio[0], &ModelParam.CS_uu_hjZ_ratio[0],
					    &ModelParam.CS_ss_hjZ_ratio[0], &ModelParam.CS_cc_hjZ_ratio[0],
					    &ModelParam.CS_bb_hjZ_ratio[0], &ModelParam.CS_tev_vbf_ratio[0],
					    &ModelParam.CS_tev_tthj_ratio[0], &ModelParam.CS_lhc7_vbf_ratio[0],
					    &ModelParam.CS_lhc7_tthj_ratio[0], &ModelParam.CS_lhc8_vbf_ratio[0],
					    &ModelParam.CS_lhc8_tthj_ratio[0], &ModelParam.BR_hjss[0],
					    &ModelParam.BR_hjcc[0], &ModelParam.BR_hjbb[0], 
					    &ModelParam.BR_hjmumu[0], &ModelParam.BR_hjtautau[0],
					    &ModelParam.BR_hjWW[0], &ModelParam.BR_hjZZ[0], 
					    &ModelParam.BR_hjZga[0], &ModelParam.BR_hjgaga[0], 
					    &ModelParam.BR_hjgg[0], &ModelParam.BR_hjinvisible[0], BR_hjhihi);

      BEreq::HiggsBounds_charged_input(&ModelParam.MHplus, &ModelParam.HpGammaTot, &ModelParam.CS_lep_HpjHmi_ratio,
				       &ModelParam.BR_tWpb, &ModelParam.BR_tHpjb, &ModelParam.BR_Hpjcs, 
				       &ModelParam.BR_Hpjcb, &ModelParam.BR_Hptaunu);
      
      BEreq::HiggsBounds_set_mass_uncertainties(&ModelParam.deltaMh[0],&ModelParam.deltaMHplus);
      
      // run Higgs bounds 'classic'
      double HBresult, obsratio;
      int chan, ncombined;
      BEreq::run_HiggsBounds_classic(HBresult,chan,obsratio,ncombined);
      
      // extract the LEP chisq
      double chisq_withouttheory,chisq_withtheory;
      int chan2;
      double theor_unc = 1.5; // theory uncertainty
      BEreq::HB_calc_stats(theor_unc,chisq_withouttheory,chisq_withtheory,chan2);
      
      result = chisq_withouttheory;
      std::cout << "Calculating LEP chisq: " << chisq_withouttheory << " (no theor), " << chisq_withtheory << " (with theor)" << endl;

    }

     /// *************************************************

    void HS_LHCchisq(double &result) 
    {
      using namespace Pipes::HS_LHCchisq;
      
      hb_ModelParameters ModelParam = *Dep::HB_ModelParameters;
      
      Farray<double, 1,3, 1,3> CS_lep_hjhi_ratio;
      Farray<double, 1,3, 1,3> BR_hjhihi;
      for(int i = 0; i < 3; i++)
	for(int j = 0; j < 3; j++){
	  CS_lep_hjhi_ratio(i+1,j+1) = ModelParam.CS_lep_hjhi_ratio[i][j];
	  BR_hjhihi(i+1,j+1) = ModelParam.BR_hjhihi[i][j];
	}
      
      BEreq::HiggsBounds_neutral_input_part_HS(&ModelParam.Mh[0], &ModelParam.hGammaTot[0], &ModelParam.CP[0], 
					       &ModelParam.CS_lep_hjZ_ratio[0], &ModelParam.CS_lep_bbhj_ratio[0], 
					       &ModelParam.CS_lep_tautauhj_ratio[0], CS_lep_hjhi_ratio, 
					       &ModelParam.CS_gg_hj_ratio[0], &ModelParam.CS_bb_hj_ratio[0],
					       &ModelParam.CS_bg_hjb_ratio[0], &ModelParam.CS_ud_hjWp_ratio[0],
					       &ModelParam.CS_cs_hjWp_ratio[0], &ModelParam.CS_ud_hjWm_ratio[0],
					       &ModelParam.CS_cs_hjWm_ratio[0], &ModelParam.CS_gg_hjZ_ratio[0],
					       &ModelParam.CS_dd_hjZ_ratio[0], &ModelParam.CS_uu_hjZ_ratio[0],
					       &ModelParam.CS_ss_hjZ_ratio[0], &ModelParam.CS_cc_hjZ_ratio[0],
					       &ModelParam.CS_bb_hjZ_ratio[0], &ModelParam.CS_tev_vbf_ratio[0],
					       &ModelParam.CS_tev_tthj_ratio[0], &ModelParam.CS_lhc7_vbf_ratio[0],
					       &ModelParam.CS_lhc7_tthj_ratio[0], &ModelParam.CS_lhc8_vbf_ratio[0],
					       &ModelParam.CS_lhc8_tthj_ratio[0], &ModelParam.BR_hjss[0],
					       &ModelParam.BR_hjcc[0], &ModelParam.BR_hjbb[0], 
					       &ModelParam.BR_hjmumu[0], &ModelParam.BR_hjtautau[0],
					       &ModelParam.BR_hjWW[0], &ModelParam.BR_hjZZ[0], 
					       &ModelParam.BR_hjZga[0], &ModelParam.BR_hjgaga[0], 
					       &ModelParam.BR_hjgg[0], &ModelParam.BR_hjinvisible[0], BR_hjhihi);
      
      BEreq::HiggsBounds_charged_input_HS(&ModelParam.MHplus, &ModelParam.HpGammaTot, &ModelParam.CS_lep_HpjHmi_ratio,
					  &ModelParam.BR_tWpb, &ModelParam.BR_tHpjb, &ModelParam.BR_Hpjcs, 
					  &ModelParam.BR_Hpjcb, &ModelParam.BR_Hptaunu);
      
      BEreq::HiggsSignals_neutral_input_MassUncertainty(&ModelParam.deltaMh[0]);

      // add uncertainties to cross-sections and branching ratios
      // double dCS[5];
      // double dBR[5];
      // BEreq::setup_rate_uncertainties(dCS,dBR);

      // run HiggsSignals
      int mode = 1;
      double csqmu, csqmh, csqtot, Pvalue;
      int nobs;
      BEreq::run_HiggsSignals(mode, csqmu, csqmh, csqtot, nobs, Pvalue);


      result = csqtot;
      std::cout << "Calculating LHC chisq: " << csqmu << " (signal strength only), " << csqmh << " (mass only), ";
      std::cout << csqtot << " (both), Nobs: " << nobs << ", Pvalue: " << Pvalue << endl;

    }

    void SMHiggs_ModelParameters(hb_ModelParameters &result){

      using namespace Pipes::SMHiggs_ModelParameters;
      
      for(int i = 0; i < 3; i++){
	result.Mh[i] = 0.; 
	result.deltaMh[i] = 0.;
	result.hGammaTot[i] = 0.; 
	result.CP[i] = 0.; 
	result.CS_lep_hjZ_ratio[i] = 0.; 
	result.CS_lep_bbhj_ratio[i] = 0.; 
	result.CS_lep_tautauhj_ratio[i] = 0.;
	for(int j = 0; j < 3; j++) result.CS_lep_hjhi_ratio[i][j] = 0.; 
	result.CS_gg_hj_ratio[i] = 0.; 
	result.CS_bb_hj_ratio[i] = 0.;
	result.CS_bg_hjb_ratio[i] = 0.; 
	result.CS_ud_hjWp_ratio[i] = 0.;
	result.CS_cs_hjWp_ratio[i] = 0.;
	result.CS_ud_hjWm_ratio[i] = 0.;
	result.CS_cs_hjWm_ratio[i] = 0.; 
	result.CS_gg_hjZ_ratio[i] = 0.;
	result.CS_dd_hjZ_ratio[i] = 0.;
	result.CS_uu_hjZ_ratio[i] = 0.;
	result.CS_ss_hjZ_ratio[i] = 0.; 
	result.CS_cc_hjZ_ratio[i] = 0.;
	result.CS_bb_hjZ_ratio[i] = 0.; 
	result.CS_tev_vbf_ratio[i] = 0.;
	result.CS_tev_tthj_ratio[i] = 0.; 
	result.CS_lhc7_vbf_ratio[i] = 0.;
	result.CS_lhc7_tthj_ratio[i] = 0.;
	result.CS_lhc8_vbf_ratio[i] = 0.;
	result.CS_lhc8_tthj_ratio[i] = 0.; 
	result.BR_hjss[i] = 0.;
	result.BR_hjcc[i] = 0.;
	result.BR_hjbb[i] = 0.; 
	result.BR_hjmumu[i] = 0.;
	result.BR_hjtautau[i] = 0.;
	result.BR_hjWW[i] = 0.;
	result.BR_hjZZ[i] = 0.; 
	result.BR_hjZga[i] = 0.;
	result.BR_hjgaga[i] = 0.; 
	result.BR_hjgg[i] = 0.; 
	result.BR_hjinvisible[i] = 0.;
	for(int j = 0; j < 3; j++) result.BR_hjhihi[i][j] = 0.;
      }
      
      result.MHplus = 0.;
      result.deltaMHplus = 0.;
      result.HpGammaTot = 0.; 
      result.CS_lep_HpjHmi_ratio = 0.;
      result.BR_tWpb = 0.;
      result.BR_tHpjb = 0.;
      result.BR_Hpjcs = 0.; 
      result.BR_Hpjcb = 0.;
      result.BR_Hptaunu = 0.;

      const Spectrum* fullspectrum = *Dep::MSSM_spectrum;
      const SubSpectrum* spec = fullspectrum->get_UV(); 
      const DecayTable::Entry* decays = &(*Dep::Higgs_decay_rates);

      result.Mh[0] = spec->phys.get_Pole_Mass(25,0); 

      result.deltaMh[0] = 0.; // Need to get theoretical error on mass
      result.hGammaTot[0] = decays->width_in_GeV; 
      result.CP[0] = 1; 
      result.CS_lep_hjZ_ratio[0] = 1.; 
      result.CS_lep_bbhj_ratio[0] = 1.; 
      result.CS_lep_tautauhj_ratio[0] = 1.;
      result.CS_gg_hj_ratio[0] = 1.; 
      result.CS_bb_hj_ratio[0] = 1.;
      result.CS_bg_hjb_ratio[0] = 1.; 
      result.CS_ud_hjWp_ratio[0] = 1.;
      result.CS_cs_hjWp_ratio[0] = 1.;
      result.CS_ud_hjWm_ratio[0] = 1.;
      result.CS_cs_hjWm_ratio[0] = 1.; 
      result.CS_gg_hjZ_ratio[0] = 1.;
      result.CS_dd_hjZ_ratio[0] = 1.;
      result.CS_uu_hjZ_ratio[0] = 1.;
      result.CS_ss_hjZ_ratio[0] = 1.; 
      result.CS_cc_hjZ_ratio[0] = 1.;
      result.CS_bb_hjZ_ratio[0] = 1.; 
      result.CS_tev_vbf_ratio[0] = 1.;
      result.CS_tev_tthj_ratio[0] = 1.; 
      result.CS_lhc7_vbf_ratio[0] = 1.;
      result.CS_lhc7_tthj_ratio[0] = 1.;
      result.CS_lhc8_vbf_ratio[0] = 1.;
      result.CS_lhc8_tthj_ratio[0] = 1.; 
      result.BR_hjss[0] = decays->BF("s", "sbar");
      result.BR_hjcc[0] = decays->BF("c", "cbar");
      result.BR_hjbb[0] = decays->BF("b", "bbar"); 
      result.BR_hjmumu[0] = decays->BF("mu+", "mu-");
      result.BR_hjtautau[0] = decays->BF("tau+", "tau-");
      result.BR_hjWW[0] = decays->BF("W+", "W-");
      result.BR_hjZZ[0] = decays->BF("Z0", "Z0"); 
      result.BR_hjZga[0] = decays->BF("gamma", "Z0");
      result.BR_hjgaga[0] = decays->BF("gamma", "gamma"); 
      result.BR_hjgg[0] = decays->BF("g", "g");
    }

    void MSSMHiggs_ModelParameters(hb_ModelParameters &result){
      
      using namespace Pipes::MSSMHiggs_ModelParameters;
      #define PDB Models::ParticleDB()

      // unpack FeynHiggs Couplings
      fh_Couplings FH_input = *Dep::FH_Couplings;

      std::vector<std::string> sHneut;
      sHneut.push_back("h0_1");
      sHneut.push_back("h0_2");
      sHneut.push_back("A0");

      const Spectrum* fullspectrum = *Dep::MSSM_spectrum;
      const SubSpectrum* spec = fullspectrum->get_UV(); 
      const DecayTable decaytable = *Dep::decay_rates;

      const DecayTable::Entry* Hneut_decays[3];
      for(int i = 0; i < 3; i++){
	// Higgs masses and errors
	result.Mh[i] = spec->phys.get_Pole_Mass(sHneut[i]); 
	result.deltaMh[i] = 0.;
      }

      // invisible LSP?
      double lsp_mass = spec->phys.get_Pole_Mass("~chi0_1");
      int i_snu = 0;
      for(int i = 1; i <= 3; i++){
	if(spec->phys.get_Pole_Mass("~nu",i)  < lsp_mass){
	  i_snu = i;
	  lsp_mass = spec->phys.get_Pole_Mass("~nu",i);
	}
      }

      bool inv_lsp = true;
      if(spec->phys.get_Pole_Mass("~chi+",1) < lsp_mass) inv_lsp = false;
      if(spec->phys.get_Pole_Mass("~g") < lsp_mass) inv_lsp = false;
      if(inv_lsp){
	for(int i = 1; i <= 6; i++){
	  if(spec->phys.get_Pole_Mass("~d",i) < lsp_mass){
	    inv_lsp = false;
	    break;
	  }
	  if(spec->phys.get_Pole_Mass("~u",i) < lsp_mass){
	    inv_lsp = false;
	    break;
	  }
	  if(spec->phys.get_Pole_Mass("~e-",i) < lsp_mass){
	    inv_lsp = false;
	    break;
	  }
	}
      }

      for(int i = 0; i < 3; i++){
	// Branching ratios and total widths
	Hneut_decays[i] = &(decaytable(sHneut[i]));

	result.hGammaTot[i] = Hneut_decays[i]->width_in_GeV; 

	result.BR_hjss[i] = Hneut_decays[i]->BF("s", "sbar");
	result.BR_hjcc[i] = Hneut_decays[i]->BF("c", "cbar");
	result.BR_hjbb[i] = Hneut_decays[i]->BF("b", "bbar"); 
	result.BR_hjmumu[i] = Hneut_decays[i]->BF("mu+", "mu-");
	result.BR_hjtautau[i] = Hneut_decays[i]->BF("tau+", "tau-");
	result.BR_hjWW[i] = Hneut_decays[i]->BF("W+", "W-");
	result.BR_hjZZ[i] = Hneut_decays[i]->BF("Z0", "Z0");	       
	result.BR_hjZga[i] = Hneut_decays[i]->BF("gamma", "Z0");
	result.BR_hjgaga[i] = Hneut_decays[i]->BF("gamma", "gamma"); 
	result.BR_hjgg[i] = Hneut_decays[i]->BF("g", "g");
	for(int j = 0; j < 3; j++){
	  if(2.*result.Mh[j] < result.Mh[i]){
	    result.BR_hjhihi[i][j] = Hneut_decays[i]->BF(sHneut[j],sHneut[j]); 
	  } else {
	    result.BR_hjhihi[i][j] = 0.;
	  }
	}
	result.BR_hjinvisible[i] = 0.;
	if(inv_lsp){
	  // sneutrino is LSP - need to figure out how to get correct invisible BF...
	  if(i_snu > 0){
	    result.BR_hjinvisible[i] += Hneut_decays[i]->BF(PDB.long_name("~nu",i_snu),PDB.long_name("~nubar",i_snu));
	  }
	  else {
	    result.BR_hjinvisible[i] = Hneut_decays[i]->BF("~chi0_1","~chi0_1");
	  }
	}
      }

      result.MHplus = spec->phys.get_Pole_Mass("H+"); 
      result.deltaMHplus = 0.;
      
      const DecayTable::Entry* Hplus_decays = &(decaytable("H+"));
      const DecayTable::Entry* top_decays = &(decaytable("t"));
      
      result.HpGammaTot = Hplus_decays->width_in_GeV; 
      result.BR_tWpb    = top_decays->BF("W+", "b");
      result.BR_tHpjb   = top_decays->BF("H+", "b");
      result.BR_Hpjcs   = Hplus_decays->BF("c", "sbar"); 
      result.BR_Hpjcb   = Hplus_decays->BF("c", "bbar");
      result.BR_Hptaunu = Hplus_decays->BF("tau+", "nu_tau");

      // check SM partial width h0_1 -> b bbar
      // shouldn't be zero...
      double g2hjbb[3];
      for(int i = 0; i < 3; i++){
	if(FH_input.gammas_sm[H0FF(i,4,3,3)+4] <= 0.)
	  g2hjbb[i] = 0.;
	else 
	  g2hjbb[i] = FH_input.gammas[H0FF(i,4,3,3)+4]/FH_input.gammas_sm[H0FF(i,4,3,3)+4];
      }

      // using partial width ratio approximation for 
      // h -> b bbar CS ratios
      for(int i = 0; i < 3; i++){
	result.CS_bg_hjb_ratio[i] = g2hjbb[i]; 
	result.CS_bb_hj_ratio[i]  = g2hjbb[i];
      }

      // cross-section ratios for b bbar and tau+ tau- final states
      for(int i = 0; i < 3; i++){
	fh_complex c_g2hjbb_L = FH_input.couplings[H0FF(i,4,3,3)];
	fh_complex c_g2hjbb_R = FH_input.couplings[H0FF(i,4,3,3)+Roffset];
	fh_complex c_g2hjbb_SM_L = FH_input.couplings_sm[H0FF(i,4,3,3)];
	fh_complex c_g2hjbb_SM_R = FH_input.couplings_sm[H0FF(i,4,3,3)+RSMoffset];

	fh_complex c_g2hjtautau_L = FH_input.couplings[H0FF(i,2,3,3)];
	fh_complex c_g2hjtautau_R = FH_input.couplings[H0FF(i,2,3,3)+Roffset];
	fh_complex c_g2hjtautau_SM_L = FH_input.couplings_sm[H0FF(i,2,3,3)];
	fh_complex c_g2hjtautau_SM_R = FH_input.couplings_sm[H0FF(i,2,3,3)+RSMoffset];

	double R_g2hjbb_L = sqrt(c_g2hjbb_L.re*c_g2hjbb_L.re+
				 c_g2hjbb_L.im*c_g2hjbb_L.im)/
	  sqrt(c_g2hjbb_SM_L.re*c_g2hjbb_SM_L.re+
	       c_g2hjbb_SM_L.im*c_g2hjbb_SM_L.im);
	double R_g2hjbb_R = sqrt(c_g2hjbb_R.re*c_g2hjbb_R.re+
				 c_g2hjbb_R.im*c_g2hjbb_R.im)/
	  sqrt(c_g2hjbb_SM_R.re*c_g2hjbb_SM_R.re+
	       c_g2hjbb_SM_R.im*c_g2hjbb_SM_R.im);
	
	double R_g2hjtautau_L = sqrt(c_g2hjtautau_L.re*c_g2hjtautau_L.re+
				     c_g2hjtautau_L.im*c_g2hjtautau_L.im)/
	  sqrt(c_g2hjtautau_SM_L.re*c_g2hjtautau_SM_L.re+
	       c_g2hjtautau_SM_L.im*c_g2hjtautau_SM_L.im);
	double R_g2hjtautau_R = sqrt(c_g2hjtautau_R.re*c_g2hjtautau_R.re+
				     c_g2hjtautau_R.im*c_g2hjtautau_R.im)/
	  sqrt(c_g2hjtautau_SM_R.re*c_g2hjtautau_SM_R.re+
	       c_g2hjtautau_SM_R.im*c_g2hjtautau_SM_R.im);

	double g2hjbb_s = (R_g2hjbb_L+R_g2hjbb_R)*(R_g2hjbb_L+R_g2hjbb_R)/4.;
	double g2hjbb_p = (R_g2hjbb_L-R_g2hjbb_R)*(R_g2hjbb_L-R_g2hjbb_R)/4.;
	double g2hjtautau_s = (R_g2hjtautau_L+R_g2hjtautau_R)*(R_g2hjtautau_L+R_g2hjtautau_R)/4.;
	double g2hjtautau_p = (R_g2hjtautau_L-R_g2hjtautau_R)*(R_g2hjtautau_L-R_g2hjtautau_R)/4.;

	// check CP of state
	if(g2hjbb_p < 1e-10)
	  result.CP[i] = 1;
	else if(g2hjbb_s < 1e-10)
	  result.CP[i] = -1;
	else
	  result.CP[i] = 0.;

	result.CS_lep_bbhj_ratio[i]     = g2hjbb_s + g2hjbb_p; 
	result.CS_lep_tautauhj_ratio[i] = g2hjtautau_s + g2hjtautau_p;
      }

      // cross-section ratios for di-boson final states
      for(int i = 0; i < 3; i++){
	fh_complex c_gWW = FH_input.couplings[H0VV(i,4)];
	fh_complex c_gWW_SM = FH_input.couplings_sm[H0VV(i,4)];
	fh_complex c_gZZ = FH_input.couplings[H0VV(i,3)];
	fh_complex c_gZZ_SM = FH_input.couplings_sm[H0VV(i,3)];

	double g2hjWW = (c_gWW.re*c_gWW.re+c_gWW.im*c_gWW.im)/
	  (c_gWW_SM.re*c_gWW_SM.re+c_gWW_SM.im*c_gWW_SM.im);

	double g2hjZZ = (c_gZZ.re*c_gZZ.re+c_gZZ.im*c_gZZ.im)/
	  (c_gZZ_SM.re*c_gZZ_SM.re+c_gZZ_SM.im*c_gZZ_SM.im);

	result.CS_lep_hjZ_ratio[i] = g2hjZZ; 

	result.CS_gg_hjZ_ratio[i] = 0.;
	result.CS_dd_hjZ_ratio[i] = g2hjZZ;
	result.CS_uu_hjZ_ratio[i] = g2hjZZ;
	result.CS_ss_hjZ_ratio[i] = g2hjZZ; 
	result.CS_cc_hjZ_ratio[i] = g2hjZZ;
	result.CS_bb_hjZ_ratio[i] = g2hjZZ;

	result.CS_ud_hjWp_ratio[i] = g2hjWW;
	result.CS_cs_hjWp_ratio[i] = g2hjWW;
	result.CS_ud_hjWm_ratio[i] = g2hjWW;
	result.CS_cs_hjWm_ratio[i] = g2hjWW; 

	result.CS_tev_vbf_ratio[i]   = g2hjWW;
	result.CS_lhc7_vbf_ratio[i]  = g2hjWW;
	result.CS_lhc8_tthj_ratio[i] = g2hjWW; 
      }

      // higgs to higgs + V xsection ratios
      // retrive SMInputs dependency 
      const SMInputs& sminputs = *Dep::SMINPUTS;

      double norm = sminputs.GF*sqrt(2.)*sminputs.mZ*sminputs.mZ;
      for(int i = 0; i < 3; i++)
	for(int j = 0; j < 3; j++){
	  fh_complex c_gHV = FH_input.couplings[H0HV(i,j)];
	  double g2HV = c_gHV.re*c_gHV.re+c_gHV.im*c_gHV.im;
	  result.CS_lep_hjhi_ratio[i][j] = g2HV/norm; 
	}

      // gluon fusion x-section ratio
      for(int i = 0; i < 3; i++){
	if(FH_input.gammas_sm[H0VV(i,5)] <= 0.)
	  result.CS_gg_hj_ratio[i] = 0.; 
	else
	  result.CS_gg_hj_ratio[i] = FH_input.gammas[H0VV(i,5)]/
	    FH_input.gammas_sm[H0VV(i,5)]; 
      }

      // unpack FeynHiggs x-sections
      fh_HiggsProd FH_prod = *Dep::FH_HiggsProd;

      // h t tbar xsection ratios
      for(int i = 0; i < 3; i++){
	result.CS_tev_tthj_ratio[i] = 0.; 
	result.CS_lhc7_tthj_ratio[i] = 0.;
	result.CS_lhc8_tthj_ratio[i] = 0.; 
	if(FH_prod.prodxs_Tev[i+30] > 0.)
	  result.CS_tev_tthj_ratio[i]  = FH_prod.prodxs_Tev[i+27]/FH_prod.prodxs_Tev[i+30];
	if(FH_prod.prodxs_Tev[i+30] > 0.)
	  result.CS_lhc7_tthj_ratio[i] = FH_prod.prodxs_LHC7[i+27]/FH_prod.prodxs_LHC7[i+30];
	if(FH_prod.prodxs_Tev[i+30] > 0.)
	  result.CS_lhc8_tthj_ratio[i] = FH_prod.prodxs_LHC8[i+27]/FH_prod.prodxs_LHC8[i+30];
      }
      // LEP H+ H- x-section ratio
      result.CS_lep_HpjHmi_ratio = 1.;
    }

  }
}
