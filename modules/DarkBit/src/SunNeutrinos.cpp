#include "gambit/Utils/gambit_module_headers.hpp"
#include "gambit/DarkBit/DarkBit_rollcall.hpp"

namespace Gambit {
  namespace DarkBit {

    //////////////////////////////////////////////////////////////////////////
    //
    //            Neutrino telescope likelihoods and observables
    //
    //////////////////////////////////////////////////////////////////////////

    /*! \brief Capture rate of regular dark matter in the Sun (no v-dependent
     *         or q-dependent cross-sections) (s^-1).
     */
    void capture_rate_Sun_constant_xsec(double &result)
    {
      using namespace Pipes::capture_rate_Sun_constant_xsec;
      // Here we assume that the proton and neutron scattering cross-sections
      // are the same.
      result = BEreq::capture_rate_Sun(
          *Dep::mwimp, *Dep::sigma_SI_p, *Dep::sigma_SD_p);
    }

    /*! \brief Equilibration time for capture and annihilation of dark matter
     * in the Sun (s)
     */
    void equilibration_time_Sun(double &result)
    {
      using namespace Pipes::equilibration_time_Sun;
      double ca = *Dep::sigmav/6.6e28 * pow(*Dep::mwimp/20.0, 1.5); 
      result = pow(*Dep::capture_rate_Sun * ca, -0.5);                
    }

    /// Annihilation rate of dark matter in the Sun (s^-1)
    void annihilation_rate_Sun(double &result)
    {
      using namespace Pipes::annihilation_rate_Sun;
      double tt_sun = 1.5e17 / *Dep::equilibration_time_Sun;
      result = *Dep::capture_rate_Sun * 0.5 * pow(tanh(tt_sun),2.0);
    }

    /// Neutrino yield function pointer and setup
    void nuyield_from_DS(nuyield_functype &result)
    {

      using namespace Pipes::nuyield_from_DS;
      double annihilation_bf[29];
      double Higgs_decay_BFs_neutral[29][3];
      double Higgs_decay_BFs_charged[15]; 
      double Higgs_masses_neutral[3];
      double Higgs_mass_charged;

      // Set annihilation branching fractions
      // FIXME needs to be fixed once BFs are available directly from TH_Process
      std::string DMid = Dep::DarkMatter_ID->singleID();
      TH_Process annProc = Dep::TH_ProcessCatalog->getProcess(DMid, DMid);
      std::vector<str> neutral_channels[29];
      neutral_channels[0]  = initVector<str>("h0_1", "h0_1");
      neutral_channels[1]  = initVector<str>("h0_1", "h0_2");
      neutral_channels[2]  = initVector<str>("h0_2", "h0_2");
      neutral_channels[3]  = initVector<str>("A0", "A0");
      neutral_channels[4]  = initVector<str>("h0_1", "A0");
      neutral_channels[5]  = initVector<str>("h0_2", "h0_1");
      neutral_channels[6]  = initVector<str>("H+", "H-");
      neutral_channels[7]  = initVector<str>("Z0", "h0_1");
      neutral_channels[8]  = initVector<str>("Z0", "h0_2");
      neutral_channels[9]  = initVector<str>("Z0", "A0");
      // actually W+H- and W-H+
      neutral_channels[10] = initVector<str>("W+", "H-");
      neutral_channels[11] = initVector<str>("Z0", "Z0");
      neutral_channels[12] = initVector<str>("W+", "W-");
      neutral_channels[13] = initVector<str>("nu_e", "nubar_e");
      neutral_channels[14] = initVector<str>("e+", "e-");
      neutral_channels[15] = initVector<str>("nu_mu", "nubar_mu");
      neutral_channels[16] = initVector<str>("mu+", "mu-");
      neutral_channels[17] = initVector<str>("nu_tau", "nubar_tau");
      neutral_channels[18] = initVector<str>("tau+", "tau-");
      neutral_channels[19] = initVector<str>("u", "ubar");
      neutral_channels[20] = initVector<str>("d", "dbar");
      neutral_channels[21] = initVector<str>("c", "cbar");
      neutral_channels[22] = initVector<str>("s", "sbar");
      neutral_channels[23] = initVector<str>("t", "tbar");
      neutral_channels[24] = initVector<str>("b", "bbar");
      neutral_channels[25] = initVector<str>("g", "g");
      // actually qqg (not implemented in DS though)
      neutral_channels[26] = initVector<str>("b", "bbar", "g");
      neutral_channels[27] = initVector<str>("gamma", "gamma");
      neutral_channels[28] = initVector<str>("Z0", "gamma");
      // the missing channel
      const std::vector<str> adhoc_chan = initVector<str>("W-", "H+");

      for (int i=0; i<29; i++)
      {
        const TH_Channel* channel = annProc.find(neutral_channels[i]);
        if (channel != NULL)
        {
          annihilation_bf[i] = channel->genRate->bind("v")->eval(0.);
          if (i == 10) // Add W- H+ for this channel
          {
            channel = annProc.find(adhoc_chan);
            if (channel == NULL) DarkBit_error().raise(LOCAL_INFO,
                "W+H- exists in process catalogue but not W-H+."
                " That's some suspiciously severe CP violation yo."); 
            annihilation_bf[i] += channel->genRate->bind("v")->eval(0.);
          }
          // This channel has not been implemented in DarkSUSY. 
          if (i == 26) annihilation_bf[i] = 0.;
          annihilation_bf[i] /= *Dep::sigmav;
        }
        else
        {
          annihilation_bf[i] = 0.;
        }
      }

      // Set Higgs masses
      std::map<str, TH_ParticleProperty>::const_iterator its[4];
      its[0] = Dep::TH_ProcessCatalog->particleProperties.find("h0_1");
      its[1] = Dep::TH_ProcessCatalog->particleProperties.find("h0_2");
      its[2] = Dep::TH_ProcessCatalog->particleProperties.find("A0");
      its[3] = Dep::TH_ProcessCatalog->particleProperties.find("H+");
      Higgs_masses_neutral[0] = (its[0] != Dep::TH_ProcessCatalog->
          particleProperties.end()) ? its[0]->second.mass : 0.;
      Higgs_masses_neutral[1] = (its[1] != Dep::TH_ProcessCatalog->
          particleProperties.end()) ? its[1]->second.mass : 0.;
      Higgs_masses_neutral[2] = (its[2] != Dep::TH_ProcessCatalog->
          particleProperties.end()) ? its[2]->second.mass : 0.;
      Higgs_mass_charged      = (its[3] != Dep::TH_ProcessCatalog->
          particleProperties.end()) ? its[3]->second.mass : 0.;

      // Find out which Higgs exist and have decay data in the process
      // catalogue.
      const TH_Process* h0_decays[3];
      h0_decays[0] = Dep::TH_ProcessCatalog->find("h0_1");
      h0_decays[1] = Dep::TH_ProcessCatalog->find("h0_2");
      h0_decays[2] = Dep::TH_ProcessCatalog->find("A0");
      const TH_Process* Hplus_decays = Dep::TH_ProcessCatalog->find("H+");
      const TH_Process* Hminus_decays = Dep::TH_ProcessCatalog->find("H-");
      if (Hplus_decays != NULL and Hminus_decays == NULL) DarkBit_error().raise(
          LOCAL_INFO, "H+ decays exists in process catalogue but not H-.");
      if (Hplus_decays == NULL and Hminus_decays != NULL) DarkBit_error().raise(
          LOCAL_INFO, "H- decays exists in process catalogue but not H+.");

      // Set the neutral Higgs decay branching fractions
      // FIXME needs to be fixed once BFs are available directly from TH_Process
      for (int i=0; i<3; i++)       // Loop over the three neutral Higgs
      {

        // If this Higgs exists, set its decay properties.
        if (h0_decays[i] != NULL)   
        {

          // Get the total decay width, for normalising partial widths to BFs.
          // FIXME: Replace when BFs become directly available.
          double totalwidth = 0.0;
          for (std::vector<TH_Channel>::const_iterator 
              it = h0_decays[i]->channelList.begin();
              it != h0_decays[i]->channelList.end(); ++it)
          {
            // decay width in GeV for two-body final state
            if ( it->nFinalStates == 2 ) totalwidth += 
              it->genRate->bind()->eval();  
          }

          // Loop over the decay channels for neutral scalars
          for (int j=0; j<29; j++)
          {
            const TH_Channel* channel = h0_decays[i]->find(neutral_channels[j]);
            // If this Higgs can decay into this channel, set the BF.
            if (channel != NULL)    
            {
              Higgs_decay_BFs_neutral[j][i] = channel->genRate->bind()->eval();
              if (i == 10)          // Add W- H+ for this channel
              {
                channel = h0_decays[i]->find(adhoc_chan);
                if (channel == NULL) DarkBit_error().raise(LOCAL_INFO, 
                    "W+H- exists in process catalogue but not W-H+."
                    " That's some suspiciously severe CP violation yo."); 
                Higgs_decay_BFs_neutral[j][i] 
                  += channel->genRate->bind()->eval();
              }
              // This channel has not been implemented in DarkSUSY. 
              if (i == 26) Higgs_decay_BFs_neutral[j][i] = 0.;
              Higgs_decay_BFs_neutral[j][i] /= totalwidth;
            }
            else 
            {
              Higgs_decay_BFs_neutral[j][i] = 0.;
            }
          }

        }

        else 
        {
          // Loop over the decay channels for neutral scalars, setting all BFs
          // for this Higgs to zero.
          for (int j=0; j<29; j++) Higgs_decay_BFs_neutral[j][i] = 0.;
        }

      }

      // If they exist, set the charged Higgs decay branching fractions
      // (DarkSUSY assumes that H+/H- decays are CP-invariant)    
      if (Hplus_decays != NULL)       
      {

        // Define the charged Higgs decay channels 
        std::vector<str> charged_channels[15];
        charged_channels[0]  = initVector<str>("u", "dbar");
        charged_channels[1]  = initVector<str>("u", "sbar");
        charged_channels[2]  = initVector<str>("u", "bbar");
        charged_channels[3]  = initVector<str>("c", "dbar");
        charged_channels[4]  = initVector<str>("c", "sbar");
        charged_channels[5]  = initVector<str>("c", "bbar");
        charged_channels[6]  = initVector<str>("t", "dbar");
        charged_channels[7]  = initVector<str>("t", "sbar");
        charged_channels[8]  = initVector<str>("t", "bbar");
        charged_channels[9]  = initVector<str>("e", "nu_e");
        charged_channels[10] = initVector<str>("mu", "nu_mu");
        charged_channels[11] = initVector<str>("tau", "nu_tau");
        charged_channels[12] = initVector<str>("W+", "h0_1");
        charged_channels[13] = initVector<str>("W+", "h0_2");
        charged_channels[14] = initVector<str>("W+", "A0");

        // Get the total decay width, for normalising partial widths to BFs.
        // FIXME: Replace when BFs become directly available.
        double totalwidth = 0.0;
        for (std::vector<TH_Channel>::const_iterator 
            it = Hplus_decays->channelList.begin();
            it != Hplus_decays->channelList.end(); ++it)
        {
          // decay width in GeV for two-body final state
          if (it->nFinalStates == 2) totalwidth += it->genRate->bind()->eval();
        }

        // Loop over the decay channels for charged scalars
        for (int j=0; j<15; j++)
        {
          const TH_Channel* channel = Hplus_decays->find(charged_channels[j]);
          // If this Higgs can decay into this channel, set the BF.
          if (channel != NULL)
          {
            Higgs_decay_BFs_charged[j] = channel->genRate->bind()->eval();
            Higgs_decay_BFs_charged[j] /= totalwidth;
          }
          else 
          {
            Higgs_decay_BFs_charged[j] = 0.;
          }
        }

      }

      else 
      {
        // Loop over the decay channels for charged scalars, setting all BFs
        // for this Higgs to zero.
        for (int j=0; j<15; j++) Higgs_decay_BFs_charged[j] = 0.;
      }

      // Debug FIXME needs testing once Higgs decay bfs and masses are entered
      // into the processcatalog
      if (false)
      {
        for (int j=0; j<29; j++)
        {
          cout<< "annihilation bfs: " << j << " " << annihilation_bf[j] << endl;
        }
        cout<< endl;
        for (int i=0; i<3; i++)
        {
          for (int j=0; j<29; j++)
          {
            cout<< "higgs neutral bfs: " << i << " " << j << " " 
              << Higgs_decay_BFs_neutral[j][i] << endl;
          }
        }
        cout<< endl;
        for (int j=0; j<15; j++)
        {
          cout<< "higgs charged bfs: " << j << " " 
            << Higgs_decay_BFs_charged[j] << endl;
        }
        cout<< endl;
        for (int j=0; j<3; j++)
        {
          cout<< "higgs masses neutral: " << j << " " 
            << Higgs_masses_neutral[j] << endl;
        }
        cout<< endl;
        cout<< "higg charged mass: " << Higgs_mass_charged << endl;
        cout<< endl;
        cout<< "*Dep::mwimp: " << *Dep::mwimp << endl;
        cout<< endl;
        cout<< "*Dep::sigmav: " << *Dep::sigmav << endl;
        cout<< endl;
        cout<< "*Dep::si: " << *Dep::sigma_SI_p << endl;
        cout<< endl;
        cout<< "*Dep::sd: " << *Dep::sigma_SD_p << endl;
        cout<< endl;
      }

      // Set up DarkSUSY to do neutrino yields for this particular WIMP
      BEreq::nuyield_setup(annihilation_bf, Higgs_decay_BFs_neutral,
          Higgs_decay_BFs_charged, Higgs_masses_neutral,
          Higgs_mass_charged, *Dep::mwimp, *Dep::sigmav, 
          *Dep::sigma_SI_p, *Dep::sigma_SD_p);

      // Hand back the pointer to the DarkSUSY neutrino yield function
      result = BEreq::nuyield.pointer();

    }

    /*! \brief 22-string IceCube sample: predicted signal and background
     * counts, observed counts and likelihoods.
     */
    void IC22_full(nudata &result)
    {
      using namespace Pipes::IC22_full;
      double sigpred, bgpred, lnLike, pval;
      int totobs;
      char experiment[300] = "IC-22";
      void* context = NULL;
      BEreq::nubounds(experiment[0], *Dep::mwimp, *Dep::annihilation_rate_Sun,
          byVal(*Dep::nuyield_ptr), sigpred, bgpred, totobs, lnLike, pval, 4,
          true, false, 0.0, 0.0, context);
      result.signal = sigpred;
      result.bg = bgpred;
      result.nobs = totobs;
      result.loglike = lnLike;
      result.pvalue = pval;
    }
    /// 22-string extractor module functions
    /// @{
    void IC22_signal (double &result) { 
      result = Pipes::IC22_signal ::Dep::IC22_data->signal;  }
    void IC22_bg     (double &result) { 
      result = Pipes::IC22_bg     ::Dep::IC22_data->bg;      }
    void IC22_nobs   (int    &result) { 
      result = Pipes::IC22_nobs   ::Dep::IC22_data->nobs;    }
    void IC22_loglike(double &result) { 
      result = Pipes::IC22_loglike::Dep::IC22_data->loglike; }
    void IC22_pvalue (double &result) { 
      result = Pipes::IC22_pvalue ::Dep::IC22_data->pvalue;  }
    /// @}

    /*! \brief 79-string IceCube WH sample: predicted signal and background
     * counts, observed counts and likelihoods.
     */
    void IC79WH_full(nudata &result)
    {
      using namespace Pipes::IC79WH_full;
      double sigpred, bgpred, lnLike, pval;
      int totobs;
      char experiment[300] = "IC-79 WH";
      void* context = NULL;
      BEreq::nubounds(experiment[0], *Dep::mwimp, *Dep::annihilation_rate_Sun,
          byVal(*Dep::nuyield_ptr), sigpred, bgpred, 
          totobs, lnLike, pval, 4, true, false, 0.0, 0.0, context);
      result.signal = sigpred;
      result.bg = bgpred;
      result.nobs = totobs;
      result.loglike = lnLike;
      result.pvalue = pval;
    }
    /// 79-string WH extractor module functions
    /// @{
    void IC79WH_signal (double &result) { 
      result = Pipes::IC79WH_signal ::Dep::IC79WH_data->signal;  }
    void IC79WH_bg     (double &result) { 
      result = Pipes::IC79WH_bg     ::Dep::IC79WH_data->bg;      }
    void IC79WH_nobs   (int    &result) { 
      result = Pipes::IC79WH_nobs   ::Dep::IC79WH_data->nobs;    }
    void IC79WH_loglike(double &result) { 
      result = Pipes::IC79WH_loglike::Dep::IC79WH_data->loglike; }
    void IC79WH_pvalue (double &result) { 
      result = Pipes::IC79WH_pvalue ::Dep::IC79WH_data->pvalue;  }
    /// @}

    /*! \brief 79-string IceCube WL sample: predicted signal and background
     * counts, observed counts and likelihoods.
     */
    void IC79WL_full(nudata &result)
    {
      using namespace Pipes::IC79WL_full;
      double sigpred, bgpred, lnLike, pval;
      int totobs;
      char experiment[300] = "IC-79 WL";
      void* context = NULL;
      BEreq::nubounds(experiment[0], *Dep::mwimp, *Dep::annihilation_rate_Sun,
          byVal(*Dep::nuyield_ptr), sigpred, bgpred, totobs, lnLike, pval, 4,
          true, false, 0.0, 0.0, context);
      result.signal = sigpred;
      result.bg = bgpred;
      result.nobs = totobs;
      result.loglike = lnLike;
      result.pvalue = pval;
    }
    /// 79-string WL extractor module functions
    void IC79WL_signal (double &result) { 
      result = Pipes::IC79WL_signal ::Dep::IC79WL_data->signal;  }
    void IC79WL_bg     (double &result) { 
      result = Pipes::IC79WL_bg     ::Dep::IC79WL_data->bg;      }
    void IC79WL_nobs   (int    &result) { 
      result = Pipes::IC79WL_nobs   ::Dep::IC79WL_data->nobs;    }
    void IC79WL_loglike(double &result) { 
      result = Pipes::IC79WL_loglike::Dep::IC79WL_data->loglike; }
    void IC79WL_pvalue (double &result) { 
      result = Pipes::IC79WL_pvalue ::Dep::IC79WL_data->pvalue;  }
    /// @}

    /*! \brief 79-string IceCube SL sample: predicted signal and background
     * counts, observed counts and likelihoods.
     */
    void IC79SL_full(nudata &result)
    {
      using namespace Pipes::IC79SL_full;
      double sigpred, bgpred, lnLike, pval;
      int totobs;
      char experiment[300] = "IC-79 SL";
      void* context = NULL;
      BEreq::nubounds(experiment[0], *Dep::mwimp, *Dep::annihilation_rate_Sun,
          byVal(*Dep::nuyield_ptr), sigpred, bgpred, 
          totobs, lnLike, pval, 4, true, false, 0.0, 0.0, context);
      result.signal = sigpred;
      result.bg = bgpred;
      result.nobs = totobs;
      result.loglike = lnLike;
      result.pvalue = pval;
    }
    /// 79-string SL extractor module functions
    /// @{
    void IC79SL_signal (double &result) { 
      result = Pipes::IC79SL_signal ::Dep::IC79SL_data->signal;  }
    void IC79SL_bg     (double &result) { 
      result = Pipes::IC79SL_bg     ::Dep::IC79SL_data->bg;      }
    void IC79SL_nobs   (int    &result) { 
      result = Pipes::IC79SL_nobs   ::Dep::IC79SL_data->nobs;    }
    void IC79SL_loglike(double &result) { 
      result = Pipes::IC79SL_loglike::Dep::IC79SL_data->loglike; }
    void IC79SL_pvalue (double &result) { 
      result = Pipes::IC79SL_pvalue ::Dep::IC79SL_data->pvalue;  }
    /// @}

    /// Composite IceCube 79-string likelihood function.
    void IC79_loglike(double &result)
    {
      using namespace Pipes::IC79_loglike;
      result = 
        *Dep::IC79WH_loglike + *Dep::IC79WL_loglike + *Dep::IC79SL_loglike; 
    }

    /// Complete composite IceCube likelihood function.
    void IC_loglike(double &result)
    {
      using namespace Pipes::IC_loglike;
      result = *Dep::IC22_loglike + *Dep::IC79WH_loglike 
        + *Dep::IC79WL_loglike + *Dep::IC79SL_loglike; 
    }
  }
}
