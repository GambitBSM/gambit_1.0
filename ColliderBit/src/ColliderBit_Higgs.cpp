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
///  \author Abram Krislock
///          (a.m.b.krislock@fys.uio.no)
///
///  \author Aldo Saavedra
///
///  \author Andy Buckley
///
///  \author Chris Rogan
///          (crogan@cern.ch)
///  \date 2014 Aug
///  \date 2015 May
///
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2015 Jul
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
#include "gambit/Elements/mssm_slhahelp.hpp"
#include "gambit/ColliderBit/ColliderBit_rollcall.hpp"
#include "gambit/ColliderBit/lep_mssm_xsecs.hpp"
#include "HEPUtils/FastJet.h"
#include "gambit/ColliderBit/higgslike.hpp"

//#define COLLIDERBIT_DEBUG
//#define DEBUG

namespace Gambit
{

  namespace ColliderBit
  {


      // *** Higgs physics ***
    
    double compute_theory_signal(Gambit::ColliderBit::gambit_Higgs_ModelParameters decays,
    Gambit::ColliderBit::gambit_Higgs_ModelParameters decays_sm ,
    std::vector<std::string> prod,
    std::vector<std::string> decay)
    {
    
    

    // we have arbitrary number of channels to consider, so we could use a map

    // don't include HH -> invisible here, otherwise the weight would be infinite when there is a non-zero decay

    std::map <std::pair <std::string,std::string>, double> C;
    std::map <std::pair <std::string,std::string>, double> weight;


    std::map <std::string,double> BR = decays.get_BR_map();
    std::map <std::string,double> sig = decays.get_sig_map();

    std::map <std::string,double> BR_sm = decays_sm.get_BR_map();
    std::map <std::string,double> sig_sm = decays_sm.get_sig_map();
    
   // cout << "dealing with channel " << prod[0] << " = " << sig[prod[0]] << " " << sig_sm[prod[0]] <<   endl;


    // sum off efficieny (currently just 1)*BR*sig for all SM channels
    double sum_sm = 0.0;
    double epsilon = 1.0; // TODO set this a map with efficiency for each channel
    for (unsigned int i = 0; i < prod.size() ; i++)
    {
    for (unsigned int j = 0; j < decay.size() ; j++)
    {
    sum_sm = sum_sm + epsilon*( BR_sm[decay[j]]*sig_sm[prod[i]] );
    }
    }



    std::pair <std::string,std::string> channel;
    double mu_total = 0;
    for (unsigned int i = 0; i < prod.size() ; i++)
    {
    for (unsigned int j = 0; j < decay.size() ; j++)
    {
    channel = std::make_pair(prod[i],decay[j]);
    C[channel] = BR[decay[j]]*sig[prod[i]] / ( BR_sm[decay[j]]*sig_sm[prod[i]] );
    weight[channel] = epsilon * ( BR_sm[decay[j]]*sig_sm[prod[i]] ) / sum_sm;

    mu_total = mu_total + C[channel] * weight[channel];
    #ifdef DEBUG
    cout << "C = " << C[channel] << " prod sm = " << sig_sm[prod[i]]<< " decay sm = " <<   BR_sm[decay[j]] << endl;
    cout << "C = " << C[channel] << " prod = " << sig[prod[i]]<< " decay = " <<   BR[decay[j]] << endl;
    cout << "channel = " << prod[i] << " -> " << decay[j] << endl;
    #endif

    }
    }

    #ifdef DEBUG
    cout << "mu_total = " << mu_total << endl;
    #endif
    return mu_total;
    return 0;
    }
    


    /// FeynHiggs Higgs production cross-sections
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

      result = HiggsProd;
    }

    /// Local function returning a HiggsBounds/Signals ModelParameters object for SM-like Higgs.
    void set_SMHiggs_ModelParameters(const Spectrum& fullspectrum, const DecayTable::Entry& decays, hb_ModelParameters &result)
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
    }


 /*  void set_SMHiggs_ModelParameters(const Spectrum& fullspectrum, const DecayTable::Entry& decays, lilith_ModelParameters &result)
    {
      const SubSpectrum& spec = fullspectrum.get_HE();
      result.mh = spec.get(Par::Pole_Mass,25,0);
      result.CU=1;
      result.CD=1;
      result.CV=1;
      result.CGa=1;
      result.Cg=1;
      result.BRinv=0; // gets set later by set_invisible_width
      result.BRund=0; // not sure what to do with this one
      
      // use effective couplings routine
    }*/
    
    // set model parameters for GAMBIT LHC likelihood
    void set_SMHiggs_ModelParameters(const Spectrum& fullspectrum, const DecayTable::Entry& decays, gambit_Higgs_ModelParameters &result)
    {
      const SubSpectrum& spec = fullspectrum.get_HE();
      result._mh = spec.get(Par::Pole_Mass,25,0);
      
      result.width_in_GeV = decays.width_in_GeV;
      
      //    BR_hjtt = virtual_SMHiggs_widths("tt",mh);
      //cout << "BR_hjtt = " << BR_hjtt << endl;
      result.BR_hjss = decays.BF("s", "sbar");
      result.BR_hjcc = decays.BF("c", "cbar");
      result.BR_hjbb = decays.BF("b", "bbar");
      result.BR_hjmumu = decays.BF("mu+", "mu-");
      result.BR_hjtautau = decays.BF("tau+", "tau-");
      result.BR_hjWW = decays.BF("W+", "W-");
      result.BR_hjZZ = decays.BF("Z0", "Z0");
      result.BR_hjZga = decays.BF("gamma", "Z0");
      result.BR_hjgaga = decays.BF("gamma", "gamma");
      result.BR_hjgg = decays.BF("g", "g");
      
      result.BR_invisible=0; // gets set later by set_invisible_width
      
    }
    
    
    void set_invisible_width(const DecayTable::Entry& decays, hb_ModelParameters &result,str P)
    {
    result.BR_hjinvisible[0] = decays.BF(P, P);
    }
    
    void set_invisible_width(const DecayTable::Entry& decays, hb_ModelParameters_effC &result,str P)
    {
    result.BR_hjinvisible[0] = decays.BF(P, P);
    result.BR_hjinvisible[1] = 0.0;
    result.BR_hjinvisible[2] = 0.0;
    }
    
    void set_invisible_width(const DecayTable::Entry& decays, lilith_ModelParameters &result,str P)
    {
    result.BRinv = decays.BF(P, P);
    }
    
    void set_invisible_width(const DecayTable::Entry& decays, gambit_Higgs_ModelParameters &result,str P)
    {
    result.BR_invisible = decays.BF(P, P);
    }


    /// SM Higgs model parameters for HiggsBounds/Signals
    void SMHiggs_ModelParameters(hb_ModelParameters &result)
    {
      using namespace Pipes::SMHiggs_ModelParameters;
      const Spectrum& fullspectrum = *Dep::SM_spectrum;
      const DecayTable::Entry& decays = *Dep::Higgs_decay_rates;
      set_SMHiggs_ModelParameters(fullspectrum,decays,result);
    }
    
    /// SM Higgs model parameters for Lilith
    void SMHiggs_Lilith_ModelParameters(lilith_ModelParameters &result)
    {
      using namespace Pipes::SMHiggs_Lilith_ModelParameters;
      const Spectrum& fullspectrum = *Dep::SM_spectrum;
      const DecayTable::Entry& decays = *Dep::Higgs_decay_rates;
      //set_SMHiggs_ModelParameters(fullspectrum,decays,result);
      // set signal strengths
      const SubSpectrum& spec = fullspectrum.get_HE();
      result.mh = spec.get(Par::Pole_Mass,25,0);
      
      Gambit::ColliderBit::gambit_Higgs_ModelParameters decays_sm;
      decays_sm.set_sm(125.6);
      gambit_Higgs_ModelParameters gambit_modelparams = *Dep::Higgslike_ModelParameters;
      std::vector<std::string> prod = result.prod;
      std::vector<std::string> decay = result.decay;
      std::map<std::pair<std::string,std::string>, double> mu;
      
      for (unsigned int i = 0; i < prod.size();i++)
      {
      for (unsigned int j = 0; j < decay.size();j++)
      {
      std::pair <std::string,std::string> key (prod[i],decay[j]);
      std::vector<std::string> p = {prod[i]};
      std::vector<std::string> d = {decay[j]};
      mu[key] = compute_theory_signal(gambit_modelparams,decays_sm,p,d);
      }
      }
      
      result.mu = mu;
      
      //  set effective couplings
      
      Effective_couplings ec(125.6);
      ec.compute_scaling_factors(gambit_modelparams,result);
    }
    void SMlikeHiggs_Lilith_ModelParameters(lilith_ModelParameters &result)
    {
      using namespace Pipes::SMlikeHiggs_Lilith_ModelParameters;
      const Spectrum& fullspectrum = *Dep::SingletDM_spectrum;
      str invisible_particle;
      if (ModelInUse("SingletDM") or ModelInUse("SingletDMZ3"))
      {
       //fullspectrum = *Dep::SingletDM_spectrum;
       invisible_particle = "S";
      }
      else
      {
       ColliderBit_error().raise(LOCAL_INFO,"model in use not valid with SMlikeHiggs_ModelParameters function");
      }
      
      const DecayTable::Entry& decays = *Dep::Higgs_decay_rates;
      //set_SMHiggs_ModelParameters(fullspectrum,decays,result);
      const SubSpectrum& spec = fullspectrum.get_HE();
      result.mh = spec.get(Par::Pole_Mass,25,0);
      set_invisible_width(decays,result,invisible_particle);
      
      
      // set signal strengths
      
      Gambit::ColliderBit::gambit_Higgs_ModelParameters decays_sm;
      decays_sm.set_sm(125.6);
      gambit_Higgs_ModelParameters gambit_modelparams = *Dep::Higgslike_ModelParameters;
      std::vector<std::string> prod = result.prod;
      std::vector<std::string> decay = result.decay;
      std::map<std::pair<std::string,std::string>, double> mu;
      
      
      
      for (unsigned int i = 0; i < prod.size();i++)
      {
      for (unsigned int j = 0; j < decay.size();j++)
      {
      std::pair <std::string,std::string> key (prod[i],decay[j]);
      std::vector<std::string> p = {prod[i]};
      std::vector<std::string> d = {decay[j]};
      mu[key] = compute_theory_signal(gambit_modelparams,decays_sm,p,d);
      }
      }
      
      result.mu = mu;
      
      //  set effective couplings
      
      
      Effective_couplings ec(125.6);
      ec.compute_scaling_factors(gambit_modelparams,result);
      
      
     }
    
    
     void SMlikeHiggs_HS_ModelParameters_effC(hb_ModelParameters_effC &result)
    {
      using namespace Pipes::SMlikeHiggs_HS_ModelParameters_effC;
      const Spectrum& fullspectrum = *Dep::SingletDM_spectrum;
      str invisible_particle;
      if (ModelInUse("SingletDM") or ModelInUse("SingletDMZ3"))
      {
       //fullspectrum = *Dep::SingletDM_spectrum;
       invisible_particle = "S";
      }
      else
      {
       ColliderBit_error().raise(LOCAL_INFO,"model in use not valid with SMlikeHiggs_ModelParameters function");
      }
      
      const DecayTable::Entry& decays = *Dep::Higgs_decay_rates;
      //set_SMHiggs_ModelParameters(fullspectrum,decays,result);
      const SubSpectrum& spec = fullspectrum.get_HE();
      result.Mh[0] = spec.get(Par::Pole_Mass,25,0);
      result.Mh[1] = 0; result.Mh[2] = 0;
      set_invisible_width(decays,result,invisible_particle);
      
      
      Gambit::ColliderBit::gambit_Higgs_ModelParameters decays_sm;
      decays_sm.set_sm(125.6);
      gambit_Higgs_ModelParameters gambit_modelparams = *Dep::Higgslike_ModelParameters;

      
      //  set effective couplings
      
      
      Effective_couplings ec(125.6);
      ec.compute_scaling_factors(gambit_modelparams,result);
      
      
     }
  
    

    /// SM and SM-like Higgs model parameters for GAMBIT LHC likelihood
     void SMHiggs_gambit_ModelParameters(gambit_Higgs_ModelParameters &result)
    {
      using namespace Pipes::SMHiggs_gambit_ModelParameters;
      const Spectrum& fullspectrum = *Dep::SM_spectrum;
      const DecayTable::Entry& decays = *Dep::Higgs_decay_rates;
      set_SMHiggs_ModelParameters(fullspectrum,decays,result);
    }
    
    void SMlikeHiggs_gambit_ModelParameters(gambit_Higgs_ModelParameters &result)
    {
      using namespace Pipes::SMlikeHiggs_gambit_ModelParameters;
      const Spectrum& fullspectrum = *Dep::SingletDM_spectrum;
      str invisible_particle;
      if (ModelInUse("SingletDM") or ModelInUse("SingletDMZ3"))
      {
       //fullspectrum = *Dep::SingletDM_spectrum;
       invisible_particle = "S";
      }
      else
      {
       ColliderBit_error().raise(LOCAL_INFO,"model in use not valid with SMlikeHiggs_ModelParameters function");
      }
      
      const DecayTable::Entry& decays = *Dep::Higgs_decay_rates;
      set_SMHiggs_ModelParameters(fullspectrum,decays,result);
      set_invisible_width(decays,result,invisible_particle);
    }

    /// SM-like Higgs model parameters for HiggsBounds/Signals
    void SMlikeHiggs_ModelParameters(hb_ModelParameters &result)
    {
      using namespace Pipes::SMlikeHiggs_ModelParameters;
      const Spectrum& fullspectrum = *Dep::SingletDM_spectrum;
      str invisible_particle;
      if (ModelInUse("SingletDM") or ModelInUse("SingletDMZ3"))
      {
       //fullspectrum = *Dep::SingletDM_spectrum;
       invisible_particle = "S";
      }
      else
      {
       ColliderBit_error().raise(LOCAL_INFO,"model in use not valid with SMlikeHiggs_ModelParameters function");
      }
      
      const DecayTable::Entry& decays = *Dep::Higgs_decay_rates;
      set_SMHiggs_ModelParameters(fullspectrum,decays,result);
      set_invisible_width(decays,result,invisible_particle);
    }

    /// MSSM Higgs model parameters
    void MSSMHiggs_ModelParameters(hb_ModelParameters &result)
    {
      using namespace Pipes::MSSMHiggs_ModelParameters;
      const auto& PDB = Models::ParticleDB();
      
      // unpack FeynHiggs Couplings
      fh_Couplings FH_input = *Dep::Higgs_Couplings;

      std::vector<std::string> sHneut;
      sHneut.push_back("h0_1");
      sHneut.push_back("h0_2");
      sHneut.push_back("A0");

      const Spectrum& fullspectrum = *Dep::MSSM_spectrum;
      const SubSpectrum& spec = fullspectrum.get_HE();
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

      for(int i = 0; i < 3; i++)
      {
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
        for(int j = 0; j < 3; j++)
        {
          if(2.*result.Mh[j] < result.Mh[i])
          {
            result.BR_hjhihi[i][j] = Hneut_decays[i]->BF(sHneut[j],sHneut[j]);
          }
          else
          {
            result.BR_hjhihi[i][j] = 0.;
          }
        }
        result.BR_hjinvisible[i] = 0.;
        if(inv_lsp)
        {
          // sneutrino is LSP - need to figure out how to get correct invisible BF...
          if(i_snu > 0)
          {
            result.BR_hjinvisible[i] += Hneut_decays[i]->BF(PDB.long_name("~nu",i_snu),PDB.long_name("~nubar",i_snu));
          }
          else
          {
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
      // retrive SMINPUTS dependency
      const SMInputs& sminputs = *Dep::SMINPUTS;

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
        if(FH_input.gammas_sm[H0VV(i,5)] <= 0.)
          result.CS_gg_hj_ratio[i] = 0.;
        else
          result.CS_gg_hj_ratio[i] = FH_input.gammas[H0VV(i,5)]/
            FH_input.gammas_sm[H0VV(i,5)];
      }

      // unpack FeynHiggs x-sections
      fh_HiggsProd FH_prod = *Dep::FH_HiggsProd;

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
      //std::cout << "Calculating LEP chisq: " << chisq_withouttheory << " (no theor), " << chisq_withtheory << " (with theor)" << endl;

    }
    
    void write_lilith_xml_input(lilith_ModelParameters ModelParam, std::string & XMLinputstring2, bool use_ss)
    {
    
      char XMLinputstring[6000];
      
      char buffer[100];
      double mh = ModelParam.mh;
      double BRinv = ModelParam.BRinv;
      double BRund = ModelParam.BRund;
      
      
      
      double C_tt = ModelParam.C_tt;
      double C_cc = ModelParam.C_cc;
      double C_bb = ModelParam.C_bb;
      double C_tautau = ModelParam.C_tautau;
      double C_ZZ = ModelParam.C_ZZ;
      double C_WW = ModelParam.C_WW;
      double C_gammagamma = ModelParam.C_gammagamma;
      double C_Zgamma = ModelParam.C_Zgamma;
      double C_gg = ModelParam.C_gg;
      
      char precision[] = "BEST-QCD";
      
      sprintf(buffer,"<?xml version=\"1.0\"?>\n");
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<lilithinput>\n");
      strcat(XMLinputstring, buffer);
      
      
      
      if (use_ss){
      cout << "using signal strength mode" << endl;
      sprintf(buffer,"<signalstrengths>\n");
      strcat(XMLinputstring, buffer);
      //sprintf(buffer,"<mass>%f</mass>\n", mh);
      //strcat(XMLinputstring, buffer);
      
      std::vector<std::string> prod = ModelParam.prod;
      std::vector<std::string> decay = ModelParam.decay;
      std::map<std::pair<std::string,std::string>, double> mu=ModelParam.mu;
      for (unsigned int i = 0; i < prod.size();i++)
      {
      for (unsigned int j = 0; j < decay.size();j++)
      {
      std::pair <std::string,std::string> key (prod[i],decay[j]);
      std::vector<std::string> p = {prod[i]};
      std::vector<std::string> d = {decay[j]};
      //cout << "channel = " << prod[i] << " -> " << decay[j] << " has mu = " << mu[key] << endl;
      const char * p_string = prod[i].c_str();
      const char * d_string = decay[j].c_str();
      sprintf(buffer,"<mu prod=\"%s\" decay=\"%s\">%f</mu>\n", p_string,d_string,mu[key]);// prod[i],decay[j],mu[key]);
      //printf ("%s",buffer);
      strcat(XMLinputstring, buffer);
      
     
      
      }
      }
      
      sprintf(buffer,"<redxsBR prod=\"ZH\" decay=\"invisible\">%f</redxsBR>\n", BRinv);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<redxsBR prod=\"VBF\" decay=\"invisible\">%f</redxsBR>\n", BRinv);
      strcat(XMLinputstring, buffer);
      
      sprintf(buffer,"</signalstrengths>\n");
      strcat(XMLinputstring, buffer);
      
      
      
      }
      else
      {
      sprintf(buffer,"<reducedcouplings>\n");
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<mass>%f</mass>\n", mh);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<C to=\"tt\">%f</C>\n", C_tt);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<C to=\"cc\">%f</C>\n", C_cc);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<C to=\"bb\">%f</C>\n", C_bb);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<C to=\"tautau\">%f</C>\n", C_tautau);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<C to=\"ZZ\">%f</C>\n", C_ZZ);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<C to=\"WW\">%f</C>\n", C_WW);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<C to=\"gammagamma\">%f</C>\n", C_gammagamma);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<C to=\"Zgamma\">%f</C>\n", C_Zgamma);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<C to=\"gg\">%f</C>\n", C_gg);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<extraBR>\n");
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<BR to=\"invisible\">%f</BR>\n", BRinv);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<BR to=\"undetected\">%f</BR>\n", BRund);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"</extraBR>\n");
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"<precision>%s</precision>\n",precision);
      strcat(XMLinputstring, buffer);
      sprintf(buffer,"</reducedcouplings>\n");
      strcat(XMLinputstring, buffer);
      }
      sprintf(buffer,"</lilithinput>\n");
      strcat(XMLinputstring, buffer);
      XMLinputstring2 = XMLinputstring;
      
    }


    
    void calc_Lilith_LHC_LogLike(double &result)
    {
      
      using namespace Pipes::calc_Lilith_LHC_LogLike;
      
      // Lilith call //
      lilith_ModelParameters ModelParam_lilith = *Dep::Lilith_ModelParameters;
      char XMLinputstring[6000]="";
      char * buffer;
      bool use_ss = runOptions->getValueOrDef<bool>(false, "use_signal_strengths");
      std::string lilith_xml_input;
      write_lilith_xml_input(ModelParam_lilith,lilith_xml_input,use_ss);
      buffer = strdup(lilith_xml_input.c_str());
      strcat(XMLinputstring, buffer);
      
      // Reading user input XML string
      PyObject* lilithcalc = BEreq::get_lilithcalc();
      
      lilithcalc = BEreq::internal_lilith_readuserinput(byVal(lilithcalc), XMLinputstring);

      float my_likelihood;
      my_likelihood = BEreq::internal_lilith_computelikelihood(byVal(lilithcalc));
      result =  -0.5 * my_likelihood;
    }
    
 
    
    void calc_HS_LHC_LogLike(ddpair &result)
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

      //result = -0.5*csqtot;
      result = std::pair<double, double>(-0.5*csqtot,-0.5*csqmh);
    }

    void calc_HS_LHC_LogLike_effC(ddpair &result) // currently only supports SM and SingletDM
    {
      using namespace Pipes::calc_HS_LHC_LogLike_effC;
    
      hb_ModelParameters_effC ModelParam = *Dep::HB_ModelParameters_effC;
      Farray<double, 1,3, 1,3> BR_hjhihi, identity;
      for(int i = 0; i < 3; i++)
      {
      identity(i+1,i+1) = 1.0;
      for(int j = 0; j < 3; j++)
      {
        BR_hjhihi(i+1,j+1) = ModelParam.BR_hjhihi[i][j];
        
      }
      }

      BEreq::HiggsBounds_neutral_input_effC_HS(&ModelParam.Mh[0],&ModelParam.hGammaTot[0],
      &ModelParam.g2hjss_s[0],   &ModelParam.g2hjss_p[0],   &ModelParam.g2hjcc_s[0],     &ModelParam.g2hjcc_p[0],
      &ModelParam.g2hjbb_s[0],   &ModelParam.g2hjbb_p[0],   &ModelParam.g2hjtt_s[0],     &ModelParam.g2hjtt_p[0],
      &ModelParam.g2hjmumu_s[0], &ModelParam.g2hjmumu_p[0], &ModelParam.g2hjtautau_s[0], &ModelParam.g2hjtautau_p[0],
      &ModelParam.g2hjWW[0],     &ModelParam.g2hjZZ[0],     &ModelParam.g2hjZga[0],      &ModelParam.g2hjgaga[0],
      &ModelParam.g2hjgg[0],     &ModelParam.g2hjggZ[0],    identity,      &ModelParam.BR_hjinvisible[0],
      BR_hjhihi);
      
      // will add charged component soon, just a quick fix to get it working
      double zero = 0.0; // have to pass something by reference
      BEreq::HiggsBounds_charged_input_HS(&zero,&zero,&zero,&zero,&zero,&zero,&zero,&zero);
      //&ModelParam.g2hjhiZ[0]
      
      
      int mode = 1; // 1- peak-centered chi2 method (recommended)
      double csqmu, csqmh, csqtot, Pvalue;
      int nobs;
      BEreq::run_HiggsSignals(mode, csqmu, csqmh, csqtot, nobs, Pvalue);

      //result = -0.5*csqtot;
      result = std::pair<double, double>(-0.5*csqtot,-0.5*csqmh);
    }



    
    void HS_LHC_LogLike(double &result)
    {
      using namespace Pipes::HS_LHC_LogLike;
      
      std::pair<double, double> logL = *Dep::calc_HS_LHC_LogLike;
      bool HS_mass_only = runOptions->getValueOrDef<bool>(false, "HS_mass_only");
      if (HS_mass_only) {result = logL.second;}
      else {result = logL.first;}
    }
    
    void Lilith_LHC_LogLike(double &result)
    {
      using namespace Pipes::Lilith_LHC_LogLike;
      
      double logL = *Dep::calc_Lilith_LHC_LogLike;
      result = logL;
    }
    void gambit_LHC_LogLike(double &result)
    {
      using namespace Pipes::gambit_LHC_LogLike;
      
      double logL = *Dep::calc_gambit_LHC_LogLike;
      result = logL;
    }
    
        
    void combined_LHC_LogLike(double &result)
    {
      using namespace Pipes::combined_LHC_LogLike;
      std::pair<double, double> HSlogL = *Dep::calc_HS_LHC_LogLike;
      
      bool HS = runOptions->getValueOrDef<bool>(true, "use_HS");
      bool Lilith = runOptions->getValueOrDef<bool>(true, "use_Lilith");
      bool HL = runOptions->getValueOrDef<bool>(true, "use_HL");
      
      bool HS_mass_only = runOptions->getValueOrDef<bool>(false, "HS_mass_only");
      
      double Lilith_logL=0.0;
      double HL_logL=0.0;
      double HS_logL=0.0;
      
      if (Lilith) Lilith_logL = *Dep::calc_Lilith_LHC_LogLike;
      if (HL) HL_logL = *Dep::calc_gambit_LHC_LogLike;
      
      
      if (HS)
      {
      ddpair HSlogL_pair = *Dep::calc_HS_LHC_LogLike;
      
      if (HS_mass_only) {HS_logL = HSlogL_pair.second;}
      else {HS_logL = HSlogL_pair.first;}
      }
      
      result = Lilith_logL + HS_logL + HL_logL;
    
    
    
    }
    
    

    
        
    void calc_gambit_LHC_LogLike(double &result)
    {
      using namespace Pipes::calc_gambit_LHC_LogLike;
      
      //cout << "GAMBIT internal Higgs likelihood started" << endl;
 
      std::string path = runOptions->getValueOrDef<std::string>("", "data_path");
      
      bool use_mass = runOptions->getValueOrDef<bool>(true, "use_mass");
      bool use_ss = runOptions->getValueOrDef<bool>(true, "use_ss");
      
      
      //cout << "reading data from " << path << endl;
      if (path == "") {ColliderBit_error().raise(LOCAL_INFO,"no input data path specified");}
      
      std::map <int, ColliderBit::Signal_strength> expt_data = read_expt_data(path);

      Gambit::ColliderBit::gambit_Higgs_ModelParameters decays = *Dep::Higgslike_ModelParameters;

      double chisq_tot = 0;

      double mh = decays._mh;
      Gambit::ColliderBit::gambit_Higgs_ModelParameters decays_sm;
      decays_sm.set_sm(125.6);
      
      for (unsigned int i = 0; i < expt_data.size() ; i++)
      {
      Signal_strength ss;
      ss= expt_data[i];
      
      // compute corresponding theory signal strength for this signal strength observable
      
      std::vector<std::string> prod = ss.prod;
      std::vector<std::string> decay = ss.decay;
      double mu = compute_theory_signal(decays,decays_sm,prod,decay);

      double mu_exp = ss.mu;
      double mh_exp = ss.mh;

      double Cmu = pow(ss.sig_mu,2); // need to add other uncertainties here, luminosity will be easiest

      double Cmh = pow(ss.sig_mh,2);
      double chisq = 0;
     // if ( abs(mh-mh_exp) <= 1.0*ss.sig_mh )
     // {
     
      if (use_ss) {chisq = chisq + (mu_exp-mu) * (1.0/Cmu) * (mu_exp - mu);}
      if (use_mass) {chisq = chisq + (mh_exp-mh) * (1.0/Cmh) * (mh_exp-mh);}
     // }
     /* else {
      chisq = (mu_exp-mu) * (1.0/Cmu) * (mu_exp - mu);
      //chisq = (0.0-mu_exp) * (1.0/(Cmu)) * (0.0 - mu_exp);
      chisq = chisq + (mh_exp-mh) * (1.0/Cmh) * (mh_exp-mh);  // gives massive decrease in likelihood, doesn't seem right
      //chisq = chisq + (ss.sig_mh) * (1.0/Cmh) * (ss.sig_mh); // gives constant that is shifted a bit below HS likelihood
      }
      */


      chisq_tot = chisq_tot + chisq;

      }


      result =  -0.5*chisq_tot;


    }
    



  }
}
