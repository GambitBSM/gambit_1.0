//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of ColliderBit that deal exclusively with Higgs physics
///  some functions were originally in CollderBit.cpp
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
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2015 Jul
///  \date 2016 Sep
///
///  \author James McKay
///          (j.mckay14@imperial.ac.uk)
///  \date 2016 Sep
///
///  *********************************************

#include <cmath>
#include <string>
#include <iostream>
#include <fstream>
#include <memory>
#include <numeric>
#include <sstream>
#include <vector>

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/ColliderBit/ColliderBit_rollcall.hpp"


namespace Gambit
{

  namespace ColliderBit
  {


/////// %< snip here when testing complete, discard below

    /// Local function returning a HiggsBounds/Signals ModelParameters object for SM-like Higgs.
    void set_SMHiggs_ModelParameters(const Spectrum& fullspectrum, const DecayTable::Entry& decays, hb_ModelParameters &result, str invisible_particle = "")
    {
      const SubSpectrum& spec = fullspectrum.get_HE();

      for(int i = 0; i < 3; i++)
      {
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

      result.MHplus[0] = 0.;
      result.deltaMHplus[0] = 0.;
      result.HpGammaTot[0] = 0.;
      result.CS_lep_HpjHmi_ratio[0] = 0.;
      result.BR_tWpb = 0.;
      result.BR_tHpjb[0] = 0.;
      result.BR_Hpjcs[0] = 0.;
      result.BR_Hpjcb[0] = 0.;
      result.BR_Hptaunu[0] = 0.;
      result.Mh[0] = spec.get(Par::Pole_Mass,25,0);
      bool has_high_err = spec.has(Par::Pole_Mass_1srd_high, 25, 0);
      bool has_low_err = spec.has(Par::Pole_Mass_1srd_low, 25, 0);
      if (has_high_err and has_low_err)
      {
        double upper = spec.get(Par::Pole_Mass_1srd_high, 25, 0);
        double lower = spec.get(Par::Pole_Mass_1srd_low, 25, 0);
        result.deltaMh[0] = std::max(upper,lower);
      }
      else
      {
        result.deltaMh[0] = 0.;
      }
      result.hGammaTot[0] = decays.width_in_GeV;
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
      result.BR_hjss[0] = decays.BF("s", "sbar");
      result.BR_hjcc[0] = decays.BF("c", "cbar");
      result.BR_hjbb[0] = decays.BF("b", "bbar");
      result.BR_hjmumu[0] = decays.BF("mu+", "mu-");
      result.BR_hjtautau[0] = decays.BF("tau+", "tau-");
      result.BR_hjWW[0] = decays.BF("W+", "W-");
      result.BR_hjZZ[0] = decays.BF("Z0", "Z0");
      result.BR_hjZga[0] = decays.BF("gamma", "Z0");
      result.BR_hjgaga[0] = decays.BF("gamma", "gamma");
      result.BR_hjgg[0] = decays.BF("g", "g");

      if (invisible_particle != "") result.BR_hjinvisible[0] = decays.BF(invisible_particle, invisible_particle);

    }

    /// SM Higgs model parameters for HiggsBounds/Signals
    void SMHiggs_ModelParameters_old(hb_ModelParameters &result)
    {
      using namespace Pipes::SMHiggs_ModelParameters_old;
      const Spectrum& fullspectrum = *Dep::SM_spectrum;
      const DecayTable::Entry& decays = *Dep::Higgs_decay_rates;
      set_SMHiggs_ModelParameters(fullspectrum,decays,result);
    }

    /// SM-like (SM+invisible) Higgs model parameters for HiggsBounds/Signals
    void SMlikeHiggs_ModelParameters_old(hb_ModelParameters &result)
    {
      using namespace Pipes::SMlikeHiggs_ModelParameters_old;
      dep_bucket<Spectrum>* spec;
      str invisible_particle;
      if (ModelInUse("SingletDM") or ModelInUse("SingletDMZ3"))
      {
       spec = &Dep::SingletDM_spectrum;
       invisible_particle = "S";
      }
      else
      {
        ColliderBit_error().raise(LOCAL_INFO,"model in use not valid with SMlikeHiggs_ModelParameters function");
      }
      const Spectrum& fullspectrum = **spec;
      const DecayTable::Entry& decays = *Dep::Higgs_decay_rates;
      set_SMHiggs_ModelParameters(fullspectrum,decays,result,invisible_particle);
    }

    /// MSSM Higgs model parameters
    void MSSMHiggs_ModelParameters_old(hb_ModelParameters &result)
    {
      using namespace Pipes::MSSMHiggs_ModelParameters_old;

      // unpack FeynHiggs Couplings
      fh_Couplings FH_input = *Dep::FH_Couplings_output;

      std::vector<std::string> sHneut;
      sHneut.push_back("h0_1");
      sHneut.push_back("h0_2");
      sHneut.push_back("A0");

      const Spectrum& fullspectrum = *Dep::MSSM_spectrum;
      const SubSpectrum& spec = fullspectrum.get_HE();
      const SMInputs& sminputs = fullspectrum.get_SMInputs();
      const DecayTable decaytable = *Dep::decay_rates;

      const DecayTable::Entry* Hneut_decays[3];
      for(int i = 0; i < 3; i++)
      {
        // Higgs masses and errors
        result.Mh[i] = spec.get(Par::Pole_Mass,sHneut[i]);
        double upper = spec.get(Par::Pole_Mass_1srd_high,sHneut[i]);
        double lower = spec.get(Par::Pole_Mass_1srd_low,sHneut[i]);
        result.deltaMh[i] = std::max(upper,lower);
      }

      // invisible LSP?
      double lsp_mass = spec.get(Par::Pole_Mass,"~chi0_1");
      int i_snu = 0;
      for(int i = 1; i <= 3; i++)
      {
        if(spec.get(Par::Pole_Mass,"~nu",i)  < lsp_mass)
        {
          i_snu = i;
          lsp_mass = spec.get(Par::Pole_Mass,"~nu",i);
        }
      }

      bool inv_lsp = true;
      if(spec.get(Par::Pole_Mass,"~chi+",1) < lsp_mass) inv_lsp = false;
      if(spec.get(Par::Pole_Mass,"~g") < lsp_mass) inv_lsp = false;
      if(inv_lsp)
      {
        for(int i = 1; i <= 6; i++)
        {
          if(spec.get(Par::Pole_Mass,"~d",i) < lsp_mass)
          {
            inv_lsp = false;
            break;
          }
          if(spec.get(Par::Pole_Mass,"~u",i) < lsp_mass)
          {
            inv_lsp = false;
            break;
          }
          if(spec.get(Par::Pole_Mass,"~e-",i) < lsp_mass)
          {
            inv_lsp = false;
            break;
          }
        }
      }

      // Loop over all neutral Higgses, setting their branching fractions and total widths.
      for(int i = 0; i < 3; i++)
      {
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
        for (int j = 0; j < 3; j++)
        {
          if (2.*result.Mh[j] < result.Mh[i] and Hneut_decays[i]->has_channel(sHneut[j],sHneut[j]))
          {
            result.BR_hjhihi[i][j] = Hneut_decays[i]->BF(sHneut[j],sHneut[j]);
          }
          else
          {
            result.BR_hjhihi[i][j] = 0.;
          }
        }
        result.BR_hjinvisible[i] = 0.;
        if (inv_lsp)
        {
          // Set BF for decays to invisible LSP
          if (i_snu > 0)
          {
            // sneutrino LSP
            result.BR_hjinvisible[i] = Hneut_decays[i]->BF("~nu",i_snu,"~nubar",i_snu);
          }
          else
          {
            // neutralino LSP
            result.BR_hjinvisible[i] = Hneut_decays[i]->BF("~chi0_1","~chi0_1");
          }
        }
      }

      result.MHplus[0] = spec.get(Par::Pole_Mass,"H+");
      double upper = spec.get(Par::Pole_Mass_1srd_high,"H+");
      double lower = spec.get(Par::Pole_Mass_1srd_low,"H+");
      result.deltaMHplus[0] = std::max(upper,lower);

      const DecayTable::Entry* Hplus_decays = &(decaytable("H+"));
      const DecayTable::Entry* top_decays = &(decaytable("t"));

      result.HpGammaTot[0] = Hplus_decays->width_in_GeV;
      result.BR_tWpb       = top_decays->BF("W+", "b");
      result.BR_tHpjb[0]   = top_decays->has_channel("H+", "b") ? top_decays->BF("H+", "b") : 0.0;
      result.BR_Hpjcs[0]   = Hplus_decays->BF("c", "sbar");
      result.BR_Hpjcb[0]   = Hplus_decays->BF("c", "bbar");
      result.BR_Hptaunu[0] = Hplus_decays->BF("tau+", "nu_tau");

      // check SM partial width h0_1 -> b bbar
      // shouldn't be zero...
      double g2hjbb[3];
      for(int i = 0; i < 3; i++)
      {
        if(FH_input.gammas_sm[H0FF(i,4,3,3)+4] <= 0.)
          g2hjbb[i] = 0.;
        else
          g2hjbb[i] = FH_input.gammas[H0FF(i,4,3,3)+4]/FH_input.gammas_sm[H0FF(i,4,3,3)+4];
      }

      // using partial width ratio approximation for
      // h -> b bbar CS ratios
      for(int i = 0; i < 3; i++)
      {
        result.CS_bg_hjb_ratio[i] = g2hjbb[i];
        result.CS_bb_hj_ratio[i]  = g2hjbb[i];
      }

      // cross-section ratios for b bbar and tau+ tau- final states
      for(int i = 0; i < 3; i++)
      {
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
      for(int i = 0; i < 3; i++)
      {
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

        result.CS_tev_vbf_ratio[i]  = g2hjWW;
        result.CS_lhc7_vbf_ratio[i] = g2hjWW;
        result.CS_lhc8_vbf_ratio[i] = g2hjWW;
      }

      // higgs to higgs + V xsection ratios
      double norm = sminputs.GF*sqrt(2.)*sminputs.mZ*sminputs.mZ;
      for(int i = 0; i < 3; i++)
      for(int j = 0; j < 3; j++)
      {
        fh_complex c_gHV = FH_input.couplings[H0HV(i,j)];
        double g2HV = c_gHV.re*c_gHV.re+c_gHV.im*c_gHV.im;
        result.CS_lep_hjhi_ratio[i][j] = g2HV/norm;
      }

      // gluon fusion x-section ratio
      for(int i = 0; i < 3; i++)
      {
        if(FH_input.gammas_sm[H0VV(i,5)+4] <= 0.)
          result.CS_gg_hj_ratio[i] = 0.;
        else
          result.CS_gg_hj_ratio[i] = FH_input.gammas[H0VV(i,5)+4]/
            FH_input.gammas_sm[H0VV(i,5)+4];
      }

      // unpack FeynHiggs x-sections
      fh_HiggsProd FH_prod = *Dep::Higgs_Production_Xsecs;

      // h t tbar xsection ratios
      for(int i = 0; i < 3; i++)
      {
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
      result.CS_lep_HpjHmi_ratio[0] = 1.;
    }

/////// %< snip here when testing complete, discard above

    /// Helper function to set HiggsBounds/Signals parameters cross-section ratios from a GAMBIT HiggsCouplingsTable
    void set_CS(hb_ModelParameters &result, const HiggsCouplingsTable& couplings, int n_neutral_higgses)
    {
      for(int i = 0; i < n_neutral_higgses; i++)
      {
        result.CS_bg_hjb_ratio[i] = couplings.C_bb2[i];
        result.CS_bb_hj_ratio[i]  = couplings.C_bb2[i];
        result.CS_lep_bbhj_ratio[i] = couplings.C_bb2[i];

        result.CS_lep_tautauhj_ratio[i] = couplings.C_tautau2[i];

        result.CS_lep_hjZ_ratio[i] = couplings.C_ZZ2[i];
        result.CS_gg_hjZ_ratio[i] = 0.;
        result.CS_dd_hjZ_ratio[i] = couplings.C_ZZ2[i];
        result.CS_uu_hjZ_ratio[i] = couplings.C_ZZ2[i];
        result.CS_ss_hjZ_ratio[i] = couplings.C_ZZ2[i];
        result.CS_cc_hjZ_ratio[i] = couplings.C_ZZ2[i];
        result.CS_bb_hjZ_ratio[i] = couplings.C_ZZ2[i];

        result.CS_ud_hjWp_ratio[i] = couplings.C_WW2[i];
        result.CS_cs_hjWp_ratio[i] = couplings.C_WW2[i];
        result.CS_ud_hjWm_ratio[i] = couplings.C_WW2[i];
        result.CS_cs_hjWm_ratio[i] = couplings.C_WW2[i];

        result.CS_tev_vbf_ratio[i]  = couplings.C_WW2[i];
        result.CS_lhc7_vbf_ratio[i] = couplings.C_WW2[i];
        result.CS_lhc8_vbf_ratio[i] = couplings.C_WW2[i];

        result.CS_gg_hj_ratio[i] = couplings.C_gg2[i];

        result.CS_tev_tthj_ratio[i] = couplings.C_tt2[i];
        result.CS_lhc7_tthj_ratio[i] = couplings.C_tt2[i];
        result.CS_lhc8_tthj_ratio[i] = couplings.C_tt2[i];

        for(int j = 0; j < n_neutral_higgses; j++)
        {
          result.CS_lep_hjhi_ratio[i][j] = couplings.C_hiZ2[i][j];
        }
      }
      // LEP H+ H- x-section ratio
      result.CS_lep_HpjHmi_ratio[0] = 1.;
    }

    /// Helper function for populating a HiggsBounds/Signals ModelParameters object for SM-like Higgs.
    void set_SMLikeHiggs_ModelParameters(const SubSpectrum& spec, const HiggsCouplingsTable& couplings, hb_ModelParameters &result)
    {
      // Retrieve the decays
      const DecayTable::Entry& decays = couplings.get_neutral_decays(0);

      // Set the CP of the lone higgs
      result.CP[0] = couplings.CP[0];

      // Set h mass and uncertainty
      result.Mh[0] = spec.get(Par::Pole_Mass,25,0);
      bool has_high_err = spec.has(Par::Pole_Mass_1srd_high, 25, 0);
      bool has_low_err = spec.has(Par::Pole_Mass_1srd_low, 25, 0);
      if (has_high_err and has_low_err)
      {
        double upper = spec.get(Par::Pole_Mass_1srd_high, 25, 0);
        double lower = spec.get(Par::Pole_Mass_1srd_low, 25, 0);
        result.deltaMh[0] = std::max(upper,lower);
      }
      else
      {
        result.deltaMh[0] = 0.;
      }

      // Set the total h width
      result.hGammaTot[0] = decays.width_in_GeV;

      // Set the branching fractions
      result.BR_hjss[0] = decays.BF("s", "sbar");
      result.BR_hjcc[0] = decays.BF("c", "cbar");
      result.BR_hjbb[0] = decays.BF("b", "bbar");
      result.BR_hjmumu[0] = decays.BF("mu+", "mu-");
      result.BR_hjtautau[0] = decays.BF("tau+", "tau-");
      result.BR_hjWW[0] = decays.BF("W+", "W-");
      result.BR_hjZZ[0] = decays.BF("Z0", "Z0");
      result.BR_hjZga[0] = decays.BF("gamma", "Z0");
      result.BR_hjgaga[0] = decays.BF("gamma", "gamma");
      result.BR_hjgg[0] = decays.BF("g", "g");

      // Add the invisibles
      result.BR_hjinvisible[0] = 0.;
      for (auto it = couplings.invisibles.begin(); it != couplings.invisibles.end(); ++it)
      {
        result.BR_hjinvisible[0] += decays.BF(*it, *it);
      }

      // Retrieve cross-section ratios from the HiggsCouplingsTable
      set_CS(result, couplings, 1);

      // Zero all heavy neutral higgs masses, widths and effective couplings
      for(int i = 1; i < 3; i++)
      {
        result.Mh[i] = 0.;
        result.deltaMh[i] = 0.;
        result.hGammaTot[i] = 0.;
        result.CP[i] = 0.;
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
        result.CS_lep_hjZ_ratio[i] = 0.;
        result.CS_lep_bbhj_ratio[i] = 0.;
        result.CS_lep_tautauhj_ratio[i] = 0.;
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
        for(int j = 0; j < 3; j++) result.BR_hjhihi[i][j] = 0.;
        for(int j = 0; j < 3; j++) result.CS_lep_hjhi_ratio[i][j] = 0.;
      }

      // Zero all H+ masses, widths and effective couplings
      result.MHplus[0] = 0.;
      result.deltaMHplus[0] = 0.;
      result.HpGammaTot[0] = 0.;
      result.BR_tWpb = 0.;
      result.BR_tHpjb[0] = 0.;
      result.BR_Hpjcs[0] = 0.;
      result.BR_Hpjcb[0] = 0.;
      result.BR_Hptaunu[0] = 0.;
      result.CS_lep_HpjHmi_ratio[0] = 0.;
    }

    /// SM Higgs model parameters for HiggsBounds/Signals
    void SMHiggs_ModelParameters(hb_ModelParameters &result)
    {
      using namespace Pipes::SMHiggs_ModelParameters;
      set_SMLikeHiggs_ModelParameters(Dep::SM_spectrum->get_HE(), *Dep::Higgs_Couplings, result);
    }

    /// SM-like (SM + possible invisibles) Higgs model parameters for HiggsBounds/Signals
    void SMLikeHiggs_ModelParameters(hb_ModelParameters &result)
    {
      using namespace Pipes::SMLikeHiggs_ModelParameters;
      dep_bucket<Spectrum>* spectrum_dependency;
      if (ModelInUse("SingletDM") or ModelInUse("SingletDMZ3")) spectrum_dependency = &Dep::SingletDM_spectrum;
      else ColliderBit_error().raise(LOCAL_INFO, "No valid model for SingleHiggs_ModelParameters.");
      const SubSpectrum& spec = (*spectrum_dependency)->get_HE();
      set_SMLikeHiggs_ModelParameters(spec, *Dep::Higgs_Couplings, result);
    }

    /// MSSM Higgs model parameters
    void MSSMHiggs_ModelParameters(hb_ModelParameters &result)
    {
      using namespace Pipes::MSSMHiggs_ModelParameters;

      // Set up neutral Higgses
      static const std::vector<str> sHneut = initVector<str>("h0_1", "h0_2", "A0");

      // Set the CP of the Higgs states.
      for (int i = 0; i < 3; i++) result.CP[i] = Dep::Higgs_Couplings->CP[i];

      // Retrieve higgs partial widths
      const HiggsCouplingsTable::h0_decay_array_type& h0_widths = Dep::Higgs_Couplings->get_neutral_decays_array(3);
      const DecayTable::Entry& H_plus_widths = Dep::Higgs_Couplings->get_charged_decays(0);
      const DecayTable::Entry& t_widths = Dep::Higgs_Couplings->get_t_decays();

      // Retrieve masses
      const Spectrum& fullspectrum = *Dep::MSSM_spectrum;
      const SubSpectrum& spec = fullspectrum.get_HE();

      // Neutral higgs masses and errors
      for(int i = 0; i < 3; i++)
      {
        result.Mh[i] = spec.get(Par::Pole_Mass,sHneut[i]);
        double upper = spec.get(Par::Pole_Mass_1srd_high,sHneut[i]);
        double lower = spec.get(Par::Pole_Mass_1srd_low,sHneut[i]);
        result.deltaMh[i] = std::max(upper,lower);
      }

      // Loop over all neutral Higgses, setting their branching fractions and total widths.
      for(int i = 0; i < 3; i++)
      {
        result.hGammaTot[i] = h0_widths[i]->width_in_GeV;
        result.BR_hjss[i] = h0_widths[i]->BF("s", "sbar");
        result.BR_hjcc[i] = h0_widths[i]->BF("c", "cbar");
        result.BR_hjbb[i] = h0_widths[i]->BF("b", "bbar");
        result.BR_hjmumu[i] = h0_widths[i]->BF("mu+", "mu-");
        result.BR_hjtautau[i] = h0_widths[i]->BF("tau+", "tau-");
        result.BR_hjWW[i] = h0_widths[i]->BF("W+", "W-");
        result.BR_hjZZ[i] = h0_widths[i]->BF("Z0", "Z0");
        result.BR_hjZga[i] = h0_widths[i]->BF("gamma", "Z0");
        result.BR_hjgaga[i] = h0_widths[i]->BF("gamma", "gamma");
        result.BR_hjgg[i] = h0_widths[i]->BF("g", "g");
        // Do decays to invisibles
        result.BR_hjinvisible[i] = 0.;
        for (auto it = Dep::Higgs_Couplings->invisibles.begin(); it != Dep::Higgs_Couplings->invisibles.end(); ++it)
        {
          result.BR_hjinvisible[i] += h0_widths[i]->BF(*it, *it);
        }
        // Do decays to other neutral higgses
        for (int j = 0; j < 3; j++)
        {
          if (2.*result.Mh[j] < result.Mh[i] and h0_widths[i]->has_channel(sHneut[j],sHneut[j]))
          {
            result.BR_hjhihi[i][j] = h0_widths[i]->BF(sHneut[j],sHneut[j]);
          }
          else
          {
            result.BR_hjhihi[i][j] = 0.;
          }
        }
      }

      // Charged higgs masses and errors
      result.MHplus[0] = spec.get(Par::Pole_Mass,"H+");
      double upper = spec.get(Par::Pole_Mass_1srd_high,"H+");
      double lower = spec.get(Par::Pole_Mass_1srd_low,"H+");
      result.deltaMHplus[0] = std::max(upper,lower);

      // Set charged Higgs branching fractions and total width.
      result.HpGammaTot[0] = H_plus_widths.width_in_GeV;
      result.BR_Hpjcs[0]   = H_plus_widths.BF("c", "sbar");
      result.BR_Hpjcb[0]   = H_plus_widths.BF("c", "bbar");
      result.BR_Hptaunu[0] = H_plus_widths.BF("tau+", "nu_tau");

      // Set top branching fractions
      result.BR_tWpb       = t_widths.BF("W+", "b");
      result.BR_tHpjb[0]   = t_widths.has_channel("H+", "b") ? t_widths.BF("H+", "b") : 0.0;

      // Retrieve cross-section ratios from the HiggsCouplingsTable
      set_CS(result, *Dep::Higgs_Couplings, 3);
    }


    /// Get a LEP chisq from HiggsBounds
    void calc_HB_LEP_LogLike(double &result)
    {
      using namespace Pipes::calc_HB_LEP_LogLike;

      hb_ModelParameters ModelParam = *Dep::HB_ModelParameters;

      Farray<double, 1,3, 1,3> CS_lep_hjhi_ratio;
      Farray<double, 1,3, 1,3> BR_hjhihi;
      for(int i = 0; i < 3; i++) for(int j = 0; j < 3; j++)
      {
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

      BEreq::HiggsBounds_charged_input(&ModelParam.MHplus[0], &ModelParam.HpGammaTot[0], &ModelParam.CS_lep_HpjHmi_ratio[0],
               &ModelParam.BR_tWpb, &ModelParam.BR_tHpjb[0], &ModelParam.BR_Hpjcs[0],
               &ModelParam.BR_Hpjcb[0], &ModelParam.BR_Hptaunu[0]);

      BEreq::HiggsBounds_set_mass_uncertainties(&ModelParam.deltaMh[0],&ModelParam.deltaMHplus[0]);

      // run Higgs bounds 'classic'
      double obsratio;
      int HBresult, chan, ncombined;
      BEreq::run_HiggsBounds_classic(HBresult,chan,obsratio,ncombined);

      // extract the LEP chisq
      double chisq_withouttheory,chisq_withtheory;
      int chan2;
      double theor_unc = 1.5; // theory uncertainty
      BEreq::HB_calc_stats(theor_unc,chisq_withouttheory,chisq_withtheory,chan2);

      result = -0.5*chisq_withouttheory;

    }

    /// Get an LHC chisq from HiggsSignals
    void calc_HS_LHC_LogLike(double &result)
    {
      using namespace Pipes::calc_HS_LHC_LogLike;

      hb_ModelParameters ModelParam = *Dep::HB_ModelParameters;

      Farray<double, 1,3, 1,3> CS_lep_hjhi_ratio;
      Farray<double, 1,3, 1,3> BR_hjhihi;
      for(int i = 0; i < 3; i++) for(int j = 0; j < 3; j++)
      {
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

      BEreq::HiggsBounds_charged_input_HS(&ModelParam.MHplus[0], &ModelParam.HpGammaTot[0], &ModelParam.CS_lep_HpjHmi_ratio[0],
            &ModelParam.BR_tWpb, &ModelParam.BR_tHpjb[0], &ModelParam.BR_Hpjcs[0],
            &ModelParam.BR_Hpjcb[0], &ModelParam.BR_Hptaunu[0]);

      BEreq::HiggsSignals_neutral_input_MassUncertainty(&ModelParam.deltaMh[0]);

      // add uncertainties to cross-sections and branching ratios
      // double dCS[5] = {0.,0.,0.,0.,0.};
      // double dBR[5] = {0.,0.,0.,0.,0.};
      // BEreq::setup_rate_uncertainties(dCS,dBR);

      // run HiggsSignals
      int mode = 1; // 1- peak-centered chi2 method (recommended)
      double csqmu, csqmh, csqtot, Pvalue;
      int nobs;
      BEreq::run_HiggsSignals(mode, csqmu, csqmh, csqtot, nobs, Pvalue);

      result = -0.5*csqtot;

      std::ofstream f;
      f.open ("HB_ModelParameters_contents.dat");
      f<<"LHC log-likleihood";
      for (int i = 0; i < 3; i++) f<<
       "             higgs index"      <<
       "                    "<<i<<":CP"<<
       "                    "<<i<<":Mh"<<
       "             "<<i<<":hGammaTot"<<
       "      "<<i<<":CS_lep_hjZ_ratio"<<
       "      "<<i<<":CS_tev_vbf_ratio"<<
       "     "<<i<<":CS_lep_bbhj_ratio"<<
       " "<<i<<":CS_lep_tautauhj_ratio"<<
       "        "<<i<<":CS_gg_hj_ratio"<<
       "     "<<i<<":CS_tev_tthj_ratio"<<
       "    "<<i<<":CS_lhc7_tthj_ratio"<<
       "    "<<i<<":CS_lhc8_tthj_ratio"<<
       "  "<<i<<":CS_lep_hjhi_ratio[0]"<<
       "  "<<i<<":CS_lep_hjhi_ratio[1]"<<
       "  "<<i<<":CS_lep_hjhi_ratio[2]"<<
       "                 "<<i<<":BR_ss"<<
       "                 "<<i<<":BR_cc"<<
       "                 "<<i<<":BR_bb"<<
       "               "<<i<<":BR_mumu"<<
       "             "<<i<<":BR_tautau"<<
       "                 "<<i<<":BR_WW"<<
       "                 "<<i<<":BR_ZZ"<<
       "                "<<i<<":BR_Zga"<<
       "             "<<i<<":BR_gamgam"<<
       "                 "<<i<<":BR_gg"<<
       "          "<<i<<":BR_invisible"<<
       "            "<<i<<":BR_hihi[0]"<<
       "            "<<i<<":BR_hihi[1]"<<
       "            "<<i<<":BR_hihi[2]";
      f<<
       "             higgs index"      <<
       "                 "<<4<<"MHplus"<<
       "            "<<4<<":HpGammaTot"<<
       "   "<<4<<":CS_lep_HpjHmi_ratio"<<
       "             "<<4<<":BR_H+->cs"<<
       "             "<<4<<":BR_H+->cb"<<
       "          "<<4<<":BR_H+->taunu"<<
       "             "<<4<<":BR_t->W+b"<<
       "             "<<4<<":BR_t->H+b";
      f << endl << std::setw(18) << result;
      const int w = 24;
      for (int i = 0; i < 3; i++)
      {
        f << std::setw(w) << i << std::setw(w) <<
         ModelParam.CP[i] << std::setw(w) <<
         ModelParam.Mh[i] << std::setw(w) <<
         ModelParam.hGammaTot[i] << std::setw(w) <<
         ModelParam.CS_lep_hjZ_ratio[i] << std::setw(w) <<
         ModelParam.CS_tev_vbf_ratio[i] << std::setw(w) <<
         ModelParam.CS_lep_bbhj_ratio[i] << std::setw(w) <<
         ModelParam.CS_lep_tautauhj_ratio[i] << std::setw(w) <<
         ModelParam.CS_gg_hj_ratio[i] << std::setw(w) <<
         ModelParam.CS_tev_tthj_ratio[i] << std::setw(w) <<
         ModelParam.CS_lhc7_tthj_ratio[i] << std::setw(w) <<
         ModelParam.CS_lhc8_tthj_ratio[i];
        for (int j = 0; j < 3; j++) f << std::setw(w) << ModelParam.CS_lep_hjhi_ratio[i][j];
        f << std::setw(w) <<
         ModelParam.BR_hjss[i] << std::setw(w) <<
         ModelParam.BR_hjcc[i] << std::setw(w) <<
         ModelParam.BR_hjbb[i] << std::setw(w) <<
         ModelParam.BR_hjmumu[i] << std::setw(w) <<
         ModelParam.BR_hjtautau[i] << std::setw(w) <<
         ModelParam.BR_hjWW[i] << std::setw(w) <<
         ModelParam.BR_hjZZ[i] << std::setw(w) <<
         ModelParam.BR_hjZga[i] << std::setw(w) <<
         ModelParam.BR_hjgaga[i] << std::setw(w) <<
         ModelParam.BR_hjgg[i] << std::setw(w) <<
         ModelParam.BR_hjinvisible[i];
        for (int j = 0; j < 3; j++) f << std::setw(w) << ModelParam.BR_hjhihi[i][j];
      }
      f << std::setw(w) << 4 << std::setw(w) <<
       ModelParam.MHplus[0] << std::setw(w) <<
       ModelParam.HpGammaTot[0] << std::setw(w) <<
       ModelParam.CS_lep_HpjHmi_ratio[0] << std::setw(w) <<
       ModelParam.BR_Hpjcs[0] << std::setw(w) <<
       ModelParam.BR_Hpjcb[0] << std::setw(w) <<
       ModelParam.BR_Hptaunu[0] << std::setw(w) <<
       ModelParam.BR_tWpb << std::setw(w) <<
       ModelParam.BR_tHpjb[0];
      f.close();

    }

    /// Higgs production cross-sections from FeynHiggs.
    void FH_HiggsProd(fh_HiggsProd &result)
    {
      using namespace Pipes::FH_HiggsProd;

      Farray<fh_real, 1,52> prodxs;

      fh_HiggsProd HiggsProd;
      int error;
      fh_real sqrts;

      // Tevatron
      sqrts = 2.;
      error = 1;
      BEreq::FHHiggsProd(error, sqrts, prodxs);
      if (error != 0)
      {
        std::ostringstream err;
        err << "BEreq::FHHiggsProd raised error flag for Tevatron: " << error << ".";
        invalid_point().raise(err.str());
      }
      for(int i = 0; i < 52; i++) HiggsProd.prodxs_Tev[i] = prodxs(i+1);
      // LHC7
      sqrts = 7.;
      error = 1;
      BEreq::FHHiggsProd(error, sqrts, prodxs);
      if (error != 0)
      {
        std::ostringstream err;
        err << "BEreq::FHHiggsProd raised error flag for LHC7: " << error << ".";
        invalid_point().raise(err.str());
      }
      for(int i = 0; i < 52; i++) HiggsProd.prodxs_LHC7[i] = prodxs(i+1);
      // LHC8
      sqrts = 8.;
      error = 1;
      BEreq::FHHiggsProd(error, sqrts, prodxs);
      if (error != 0)
      {
        std::ostringstream err;
        err << "BEreq::FHHiggsProd raised error flag for LHC8: " << error << ".";
        invalid_point().raise(err.str());
      }
      for(int i = 0; i < 52; i++) HiggsProd.prodxs_LHC8[i] = prodxs(i+1);

      // The ttbar production cross-sections for the (BSM,SM) model can be found at (prodxs_X[h+27], prodxs_X[h+30]),
      // where h is the higgs index (0 = h0_1, 1 = h0_2, 2 = A0) and X is one of Tev, LHC7 or LHC8.
      result = HiggsProd;

    }


  }
}
