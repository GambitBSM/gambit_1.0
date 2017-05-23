//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Solar neutrino likelihoods.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author Pat Scott
///          (pscott@imperial.ac.uk)
///  \date 2015 Apr
///
///  \author Sebastian Wild
///          (sebastian.wild@ph.tum.de)
///  \date 2016 Aug
///
///  *********************************************

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/DarkBit/DarkBit_rollcall.hpp"
#include "gambit/DarkBit/DarkBit_utils.hpp"

//#define DARKBIT_DEBUG

namespace Gambit
{

  namespace DarkBit
  {

    //////////////////////////////////////////////////////////////////////////
    //
    //            Neutrino telescope likelihoods and observables
    //
    //////////////////////////////////////////////////////////////////////////

    /*! \brief Capture rate of regular dark matter in the Sun (no v-dependent
     *         or q-dependent cross-sections) (s^-1).
     */
    void capture_rate_Sun_const_xsec(double &result)
    {
      using namespace Pipes::capture_rate_Sun_const_xsec;

      if (BEreq::cap_Sun_v0q0_isoscalar.origin()=="DarkSUSY")
        if(!(*Dep::DarkSUSY_PointInit_LocalHalo))
          DarkBit_error().raise(LOCAL_INFO,"DarkSUSY halo model not initialized!");

      // When calculating the solar capture rate, DarkSUSY assumes that the
      // proton and neutron scattering cross-sections are the same; we
      // assume that whichever backend has been hooked up here does so too.
      result = BEreq::cap_Sun_v0q0_isoscalar(
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
    void nuyield_from_DS(nuyield_info &result)
    {

      using namespace Pipes::nuyield_from_DS;
      double annihilation_bf[29];
      double Higgs_decay_BFs_neutral[29][3];
      double Higgs_decay_BFs_charged[15];
      double Higgs_masses_neutral[3];
      double Higgs_mass_charged;

      // Set annihilation branching fractions
      // TODO: needs to be fixed once BFs are available directly from TH_Process
      std::string DMid = *Dep::DarkMatter_ID;
      TH_Process annProc = Dep::TH_ProcessCatalog->getProcess(DMid, DMid);
      std::vector< std::vector<str> > neutral_channels = BEreq::get_DS_neutral_h_decay_channels();
      // the missing channel
      const std::vector<str> adhoc_chan = initVector<str>("W-", "H+");

      for (int i=0; i<29; i++)
      {
        const TH_Channel* channel = annProc.find(neutral_channels[i]);

        if (channel == NULL or i == 26) // Channel 26 has not been implemented in DarkSUSY.
        {
          annihilation_bf[i] = 0.;
        }
        else
        {
          annihilation_bf[i] = channel->genRate->bind("v")->eval(0.);
          if (i == 10) // Add W- H+ for this channel
          {
            channel = annProc.find(adhoc_chan);
            if (channel == NULL) DarkBit_error().raise(LOCAL_INFO,
                "W+H- exists in process catalog but not W-H+."
                " That's some suspiciously severe CP violation yo.");
            annihilation_bf[i] += channel->genRate->bind("v")->eval(0.);
          }
          annihilation_bf[i] /= *Dep::sigmav;

          // Check that having this channel turned on makes sense at all.
          #ifdef DARKBIT_DEBUG
            double mtot = 0;
            cout << "Particles and masses in DM annihilation final state: " << endl;
            for (auto p = neutral_channels[i].begin(); p != neutral_channels[i].end(); ++p)
            {
              double m = Dep::TH_ProcessCatalog->getParticleProperty(*p).mass;
              cout << "  " << *p << " " << m << endl;
              mtot += m;
            }
            cout << "Sqrt(s) vs total mass of final states: " << 2 * *Dep::mwimp << " vs. " << mtot << endl;
            cout << "Branching fraction in v=0 limit: " << annihilation_bf[i] << endl << endl;
            if (mtot > 2 * *Dep::mwimp and annihilation_bf[i] > 0.0)
             DarkBit_error().raise(LOCAL_INFO, "Channel is open in process catalog but should not be kinematically allowed.");
          #endif
        }

      }

      // Set Higgs masses
      if (Dep::TH_ProcessCatalog->hasParticleProperty("h0_1"))
        Higgs_masses_neutral[1] = Dep::TH_ProcessCatalog->getParticleProperty("h0_1").mass;
      else
        DarkBit_error().raise(LOCAL_INFO, "No SM-like Higgs in ProcessCatalog!");
      Higgs_masses_neutral[0] =
        Dep::TH_ProcessCatalog->hasParticleProperty("h0_2") ?
        Dep::TH_ProcessCatalog->getParticleProperty("h0_2").mass : 0.;
      Higgs_masses_neutral[2] =
        Dep::TH_ProcessCatalog->hasParticleProperty("A0") ?
        Dep::TH_ProcessCatalog->getParticleProperty("A0").mass : 0.;
      Higgs_mass_charged =
        Dep::TH_ProcessCatalog->hasParticleProperty("H+") ?
        Dep::TH_ProcessCatalog->getParticleProperty("H+").mass : 0.;

      // Find out which Higgs exist and have decay data in the process
      // catalog.
      const TH_Process* h0_decays[3];
      h0_decays[0] = Dep::TH_ProcessCatalog->find("h0_2");
      h0_decays[1] = Dep::TH_ProcessCatalog->find("h0_1");
      h0_decays[2] = Dep::TH_ProcessCatalog->find("A0");
      const TH_Process* Hplus_decays = Dep::TH_ProcessCatalog->find("H+");
      const TH_Process* Hminus_decays = Dep::TH_ProcessCatalog->find("H-");
      if (Hplus_decays != NULL and Hminus_decays == NULL) DarkBit_error().raise(
          LOCAL_INFO, "H+ decays exist in process catalog but not H-.");
      if (Hplus_decays == NULL and Hminus_decays != NULL) DarkBit_error().raise(
          LOCAL_INFO, "H- decays exist in process catalog but not H+.");

      // Set the neutral Higgs decay branching fractions
      // TODO: needs to be fixed once BFs are available directly from TH_Process
      for (int i=0; i<3; i++)       // Loop over the three neutral Higgs
      {

        // If this Higgs exists, set its decay properties.
        if (h0_decays[i] != NULL)
        {

          // Get the total decay width, for normalising partial widths to BFs.
          // TODO: Replace when BFs become directly available.
          double totalwidth = 0.0;
          for (std::vector<TH_Channel>::const_iterator
              it = h0_decays[i]->channelList.begin();
              it != h0_decays[i]->channelList.end(); ++it)
          {
            // decay width in GeV for two-body final state
            if ( it->nFinalStates == 2 ) totalwidth +=
              it->genRate->bind()->eval();
          }

          std::vector<str> neutral_channel;
          // Loop over the decay channels for neutral scalars
          for (int j=0; j<29; j++)
          {
            neutral_channel.clear();
            neutral_channel.push_back(DarkBit_utils::str_flav_to_mass((neutral_channels[j])[0]));
            neutral_channel.push_back(DarkBit_utils::str_flav_to_mass((neutral_channels[j])[1]));
            const TH_Channel* channel = h0_decays[i]->find(neutral_channel);
            // If this Higgs can decay into this channel, set the BF.
            if (channel != NULL)
            {
              Higgs_decay_BFs_neutral[j][i] = channel->genRate->bind()->eval();
              if (j == 10)          // Add W- H+ for this channel
              {
                channel = h0_decays[i]->find(adhoc_chan);
                if (channel == NULL) DarkBit_error().raise(LOCAL_INFO,
                    "W+H- exists in process catalog but not W-H+."
                    " That's some suspiciously severe CP violation yo.");
                Higgs_decay_BFs_neutral[j][i]
                  += channel->genRate->bind()->eval();
              }
              // This channel has not been implemented in DarkSUSY.
              if (j == 26) Higgs_decay_BFs_neutral[j][i] = 0.;
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
        std::vector< std::vector<str> > charged_channels = BEreq::get_DS_charged_h_decay_channels();

        // Get the total decay width, for normalising partial widths to BFs.
        // TODO: Replace when BFs become directly available.
        double totalwidth = 0.0;
        for (std::vector<TH_Channel>::const_iterator
            it = Hplus_decays->channelList.begin();
            it != Hplus_decays->channelList.end(); ++it)
        {
          // decay width in GeV for two-body final state
          if (it->nFinalStates == 2) totalwidth += it->genRate->bind()->eval();
        }

        std::vector<str> charged_channel;
        // Loop over the decay channels for charged scalars
        for (int j=0; j<15; j++)
        {
          charged_channel.clear();
          charged_channel.push_back(DarkBit_utils::str_flav_to_mass((charged_channels[j])[0]));
          charged_channel.push_back(DarkBit_utils::str_flav_to_mass((charged_channels[j])[1]));
          const TH_Channel* channel = Hplus_decays->find(charged_channel);
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

      // Debug output
      #ifdef DARKBIT_DEBUG
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
      #endif

      // Set up DarkSUSY to do neutrino yields for this particular WIMP
      BEreq::nuyield_setup(annihilation_bf, Higgs_decay_BFs_neutral,
          Higgs_decay_BFs_charged, Higgs_masses_neutral,
          Higgs_mass_charged, *Dep::mwimp, *Dep::sigmav,
          *Dep::sigma_SI_p, *Dep::sigma_SD_p);

      // Hand back the pointer to the DarkSUSY neutrino yield function
      result.pointer = BEreq::nuyield.pointer();

      //TODO: change below to >= when version numbers are available as ints
      // Treat the yield function as threadsafe only if the loaded version of DarkSUSY supports it.
      result.threadsafe = (BEreq::nuyield.version() == "5.1.3");

      // Avoid OpenMP with gfortran 6.x, as its implementation seems to be buggy (causes stack overflows).
      #ifdef __GNUC__
        #define GCC_VERSION (__GNUC__ * 10000 \
                     + __GNUC_MINOR__ * 100 \
                     + __GNUC_PATCHLEVEL__)
        #if GCC_VERSION > 60000
          result.threadsafe = false;
        #endif
        #undef GCC_VERSION
      #endif

    }

    /// \brief Likelihood calculators for different IceCube event samples
    /// These functions all include the likelihood of the background-only model for the respective sample.
    /// We define the final log-likelihood as delta = sum over analyses of (lnL_model - lnL_BG), conservatively
    /// forbidding delta > 0 in order to always just use the neutrino likelihood as a limit.  This ignores small
    /// low-E excesses caused by impending breakdown of approximations used in IceCube response data and the nulike
    /// likelihood at very low E. This implies conditioning on all but one parameter (e.g. the cross-section),
    /// such that including any particular IC analysis adds just *one* additional degree of freedom to the fit.
    /// @{

    /// \brief 22-string IceCube sample: predicted signal and background
    /// counts, observed counts and likelihoods.
    void IC22_full(nudata &result)
    {
      using namespace Pipes::IC22_full;
      static bool first = true;
      const double bgloglike = -808.4581;
      double sigpred, bgpred, lnLike, pval;
      int totobs;
      char experiment[300] = "IC-22";
      void* context = NULL;
      double theoryError = (*Dep::mwimp > 100.0 ? 0.05*sqrt(*Dep::mwimp*0.01) : 0.05);
      /// Option nulike_speed<int>: Speed setting for nulike backend (default 3)
      int speed = runOptions->getValueOrDef<int>(3,"nulike_speed");
      BEreq::nubounds(experiment[0], *Dep::mwimp, *Dep::annihilation_rate_Sun,
          byVal(Dep::nuyield_ptr->pointer), sigpred, bgpred, totobs, lnLike, pval, 4,
          theoryError, speed, false, 0.0, 0.0, context, Dep::nuyield_ptr->threadsafe);
      piped_invalid_point.check();
      piped_errors.check(DarkBit_error());
      piped_warnings.check(DarkBit_warning());
      result.signal = sigpred;
      result.bg = bgpred;
      result.nobs = totobs;
      result.loglike = lnLike;
      result.pvalue = pval;
      if (first)
      {
        result.bgloglike = bgloglike;
        first = false;
      }
    }

    /// \brief 79-string IceCube WH sample: predicted signal and background
    /// counts, observed counts and likelihoods.
    void IC79WH_full(nudata &result)
    {
      static bool first = true;
      using namespace Pipes::IC79WH_full;
      const double bgloglike = -11874.8689;
      double sigpred, bgpred, lnLike, pval;
      int totobs;
      char experiment[300] = "IC-79 WH";
      void* context = NULL;
      double theoryError = (*Dep::mwimp > 100.0 ? 0.05*sqrt(*Dep::mwimp*0.01) : 0.05);
      /// Option nulike_speed<int>: Speed setting for nulike backend (default 3)
      int speed = runOptions->getValueOrDef<int>(3,"nulike_speed");
      BEreq::nubounds(experiment[0], *Dep::mwimp, *Dep::annihilation_rate_Sun,
          byVal(Dep::nuyield_ptr->pointer), sigpred, bgpred, totobs, lnLike, pval, 4,
          theoryError, speed, false, 0.0, 0.0, context, Dep::nuyield_ptr->threadsafe);
      piped_invalid_point.check();
      piped_errors.check(DarkBit_error());
      piped_warnings.check(DarkBit_warning());
      result.signal = sigpred;
      result.bg = bgpred;
      result.nobs = totobs;
      result.loglike = lnLike;
      result.pvalue = pval;
      if (first)
      {
        result.bgloglike = bgloglike;
        first = false;
      }
    }

    /// \brief 79-string IceCube WL sample: predicted signal and background
    /// counts, observed counts and likelihoods.
    void IC79WL_full(nudata &result)
    {
      static bool first = true;
      using namespace Pipes::IC79WL_full;
      const double bgloglike = -1813.4503;
      double sigpred, bgpred, lnLike, pval;
      int totobs;
      char experiment[300] = "IC-79 WL";
      void* context = NULL;
      double theoryError = (*Dep::mwimp > 100.0 ? 0.05*sqrt(*Dep::mwimp*0.01) : 0.05);
      /// Option nulike_speed<int>: Speed setting for nulike backend (default 3)
      int speed = runOptions->getValueOrDef<int>(3,"nulike_speed");
      BEreq::nubounds(experiment[0], *Dep::mwimp, *Dep::annihilation_rate_Sun,
          byVal(Dep::nuyield_ptr->pointer), sigpred, bgpred, totobs, lnLike, pval, 4,
          theoryError, speed, false, 0.0, 0.0, context, Dep::nuyield_ptr->threadsafe);
      piped_invalid_point.check();
      piped_errors.check(DarkBit_error());
      piped_warnings.check(DarkBit_warning());
      result.signal = sigpred;
      result.bg = bgpred;
      result.nobs = totobs;
      result.loglike = lnLike;
      result.pvalue = pval;
      if (first)
      {
        result.bgloglike = bgloglike;
        first = false;
      }
    }

    /// \brief 79-string IceCube SL sample: predicted signal and background
    /// counts, observed counts and likelihoods.
    void IC79SL_full(nudata &result)
    {
      static bool first = true;
      using namespace Pipes::IC79SL_full;
      const double bgloglike = -5015.6474;
      double sigpred, bgpred, lnLike, pval;
      int totobs;
      char experiment[300] = "IC-79 SL";
      void* context = NULL;
      double theoryError = (*Dep::mwimp > 100.0 ? 0.05*sqrt(*Dep::mwimp*0.01) : 0.05);
      /// Option nulike_speed<int>: Speed setting for nulike backend (default 3)
      int speed = runOptions->getValueOrDef<int>(3,"nulike_speed");
      BEreq::nubounds(experiment[0], *Dep::mwimp, *Dep::annihilation_rate_Sun,
          byVal(Dep::nuyield_ptr->pointer), sigpred, bgpred, totobs, lnLike, pval, 4,
          theoryError, speed, false, 0.0, 0.0, context, Dep::nuyield_ptr->threadsafe);
      piped_invalid_point.check();
      piped_errors.check(DarkBit_error());
      piped_warnings.check(DarkBit_warning());
      result.signal = sigpred;
      result.bg = bgpred;
      result.nobs = totobs;
      result.loglike = lnLike;
      result.pvalue = pval;
      if (first)
      {
        result.bgloglike = bgloglike;
        first = false;
      }
    }
    /// @}

    /// 22-string extractor module functions
    /// @{
    void IC22_signal (double &result)   {
      result = Pipes::IC22_signal ::Dep::IC22_data->signal;      }
    void IC22_bg     (double &result)   {
      result = Pipes::IC22_bg     ::Dep::IC22_data->bg;          }
    void IC22_nobs   (int    &result)   {
      result = Pipes::IC22_nobs   ::Dep::IC22_data->nobs;        }
    void IC22_loglike(double &result)   {
      result = Pipes::IC22_loglike::Dep::IC22_data->loglike;     }
    void IC22_bgloglike(double &result) {
      result = Pipes::IC22_bgloglike::Dep::IC22_data->bgloglike; }
    void IC22_pvalue (double &result)   {
      result = Pipes::IC22_pvalue ::Dep::IC22_data->pvalue;      }
    /// @}

    /// 79-string WH extractor module functions
    /// @{
    void IC79WH_signal (double &result)   {
      result = Pipes::IC79WH_signal ::Dep::IC79WH_data->signal;      }
    void IC79WH_bg     (double &result)   {
      result = Pipes::IC79WH_bg     ::Dep::IC79WH_data->bg;          }
    void IC79WH_nobs   (int    &result)   {
      result = Pipes::IC79WH_nobs   ::Dep::IC79WH_data->nobs;        }
    void IC79WH_loglike(double &result)   {
      result = Pipes::IC79WH_loglike::Dep::IC79WH_data->loglike;     }
    void IC79WH_bgloglike(double &result) {
      result = Pipes::IC79WH_bgloglike::Dep::IC79WH_data->bgloglike; }
    void IC79WH_pvalue (double &result)   {
      result = Pipes::IC79WH_pvalue ::Dep::IC79WH_data->pvalue;      }
    /// @}

    /// 79-string WL extractor module functions
    /// @{
    void IC79WL_signal (double &result)   {
      result = Pipes::IC79WL_signal ::Dep::IC79WL_data->signal;      }
    void IC79WL_bg     (double &result)   {
      result = Pipes::IC79WL_bg     ::Dep::IC79WL_data->bg;          }
    void IC79WL_nobs   (int    &result)   {
      result = Pipes::IC79WL_nobs   ::Dep::IC79WL_data->nobs;        }
    void IC79WL_loglike(double &result)   {
      result = Pipes::IC79WL_loglike::Dep::IC79WL_data->loglike;     }
    void IC79WL_bgloglike(double &result) {
      result = Pipes::IC79WL_bgloglike::Dep::IC79WL_data->bgloglike; }
    void IC79WL_pvalue (double &result)   {
      result = Pipes::IC79WL_pvalue ::Dep::IC79WL_data->pvalue;      }
    /// @}

    /// 79-string SL extractor module functions
    /// @{
    void IC79SL_signal (double &result)   {
      result = Pipes::IC79SL_signal ::Dep::IC79SL_data->signal;      }
    void IC79SL_bg     (double &result)   {
      result = Pipes::IC79SL_bg     ::Dep::IC79SL_data->bg;          }
    void IC79SL_nobs   (int    &result)   {
      result = Pipes::IC79SL_nobs   ::Dep::IC79SL_data->nobs;        }
    void IC79SL_loglike(double &result)   {
      result = Pipes::IC79SL_loglike::Dep::IC79SL_data->loglike;     }
    void IC79SL_bgloglike(double &result) {
      result = Pipes::IC79SL_bgloglike::Dep::IC79SL_data->bgloglike; }
    void IC79SL_pvalue (double &result)   {
      result = Pipes::IC79SL_pvalue ::Dep::IC79SL_data->pvalue;      }
    /// @}

    /// Composite IceCube 79-string likelihood function.
    void IC79_loglike(double &result)
    {
      using namespace Pipes::IC79_loglike;
      result = *Dep::IC79SL_loglike - *Dep::IC79SL_bgloglike +
               *Dep::IC79WL_loglike - *Dep::IC79WL_bgloglike +
               *Dep::IC79WH_loglike - *Dep::IC79WH_bgloglike;
      if (result > 0.0) result = 0.0;
    }

    /// Complete composite IceCube likelihood function.
    void IC_loglike(double &result)
    {
      using namespace Pipes::IC_loglike;
      result = *Dep::IC22_loglike   - *Dep::IC22_bgloglike   +
               *Dep::IC79SL_loglike - *Dep::IC79SL_bgloglike +
               *Dep::IC79WL_loglike - *Dep::IC79WL_bgloglike +
               *Dep::IC79WH_loglike - *Dep::IC79WH_bgloglike;
      if (result > 0.0) result = 0.0;
#ifdef DARKBIT_DEBUG
      cout << "IC likelihood: " << result << endl;
      cout << "IC79SL contribution: " << *Dep::IC79SL_loglike - *Dep::IC79SL_bgloglike << endl;
      cout << "IC79WL contribution: " << *Dep::IC79WL_loglike - *Dep::IC79WL_bgloglike << endl;
      cout << "IC79WH contribution: " << *Dep::IC79WH_loglike - *Dep::IC79WH_bgloglike << endl;
      cout << "IC22   contribution: " << *Dep::IC22_loglike   - *Dep::IC22_bgloglike   << endl;
#endif
    }

    /// Function to set Local Halo Parameters in DarkSUSY
    void DarkSUSY_PointInit_LocalHalo_func(bool &result)
    {
        using namespace Pipes::DarkSUSY_PointInit_LocalHalo_func;

          LocalMaxwellianHalo LocalHaloParameters = *Dep::LocalHalo;

          double rho0 = LocalHaloParameters.rho0;
          double rho0_eff = (*Dep::RD_fraction)*rho0;
          double vrot = LocalHaloParameters.vrot;
          double vd_3d = sqrt(3./2.)*LocalHaloParameters.v0;
          double vesc = LocalHaloParameters.vesc;
          /// Option v_earth<double>: Keplerian velocity of the Earth around the Sun in km/s (default 29.78)
          double v_earth = runOptions->getValueOrDef<double>(29.78, "v_earth");

          BEreq::dshmcom->rho0 = rho0;
          BEreq::dshmcom->v_sun = vrot;
          BEreq::dshmcom->v_earth = v_earth;
          BEreq::dshmcom->rhox = rho0_eff;

          BEreq::dshmframevelcom->v_obs = vrot;

          BEreq::dshmisodf->vd_3d = vd_3d;
          BEreq::dshmisodf->vgalesc = vesc;

          BEreq::dshmnoclue->vobs = vrot;

          logger() << "Updating DarkSUSY halo parameters:" << EOM;
          logger() << "    rho0 [GeV/cm^3] = " << rho0 << EOM;
          logger() << "    rho0_eff [GeV/cm^3] = " << rho0_eff << EOM;
          logger() << "    v_sun [km/s]  = " << vrot<< EOM;
          logger() << "    v_earth [km/s]  = " << v_earth << EOM;
          logger() << "    v_obs [km/s]  = " << vrot << EOM;
          logger() << "    vd_3d [km/s]  = " << vd_3d << EOM;
          logger() << "    v_esc [km/s]  = " << vesc << EOM;

          result = true;

          return;
    }
  }
}
