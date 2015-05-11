//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Frontend for SUSY-HIT 1.5 backend
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///  
/// \author Peter Athron
/// \author Csaba Balazs
/// \author Pat Scott
/// \date 2015 Jan-May
///
///  *********************************************

#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME SUSY_HIT
#endif
#define VERSION 1.5
#define SAFE_VERSION 1_5

// Let's go.
LOAD_LIBRARY

// Can't do anything non-MSSM with SUSY-HIT
BE_ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)

// Functions
BE_FUNCTION(sdecay, void, (), "sdecay_", "sdecay")               // Converted SUSY-HIT main routine
BE_FUNCTION(unlikely, double, (), "s_hit_unlikely_", "unlikely") // Wrapper for 'unlikely' double 

// Variables
BE_VARIABLE(checkfavvio_type, checkfavvio, "checkfavvio_", "cb_checkfavvio")
BE_VARIABLE(susyhitin_type, susyhitin, "susyhitin_", "cb_susyhitin")
BE_VARIABLE(sd_leshouches1_type, sd_leshouches1, "sd_leshouches1_", "cb_sd_leshouches1")
BE_VARIABLE(sd_leshouches2_type, sd_leshouches2, "sd_leshouches2_", "cb_sd_leshouches2")
BE_VARIABLE(sd_leshouches1_type, slha_leshouches1_hdec, "slha_leshouches1_hdec_", "cb_slha_leshouches1_hdec")
BE_VARIABLE(slha_leshouches2_hdec_type, slha_leshouches2_hdec, "slha_leshouches2_hdec_", "cb_slha_leshouches2_hdec")
BE_VARIABLE(widtha_hdec_type, widtha_hdec, "widtha_hdec_", "cb_widtha_hdec")
BE_VARIABLE(widthhl_hdec_type, widthhl_hdec, "widthhl_hdec_", "cb_widthhl_hdec")
BE_VARIABLE(widthhh_hdec_type, widthhh_hdec, "widthhh_hdec_", "cb_widthhh_hdec")
BE_VARIABLE(widthhc_hdec_type, widthhc_hdec, "widthhc_hdec_", "cb_widthhc_hdec")
BE_VARIABLE(wisusy_hdec_type, wisusy_hdec, "wisusy_hdec_", "cb_wisusy_hdec")
BE_VARIABLE(wisfer_hdec_type, wisfer_hdec, "wisfer_hdec_", "cb_wisfer_hdec")
BE_VARIABLE(hd_golddec_type, hd_golddec, "hd_golddec_", "cb_hd_golddec")
BE_VARIABLE(sd_char2body_type, sd_char2body, "sd_char2body_", "cb_sd_char2body")
BE_VARIABLE(sd_char2bodygrav_type, sd_char2bodygrav, "sd_char2bodygrav_", "cb_sd_char2bodygrav")
BE_VARIABLE(sd_char3body_type, sd_char3body, "sd_char3body_", "cb_sd_char3body")
BE_VARIABLE(sd_charwidth_type, sd_charwidth, "sd_charwidth_", "cb_sd_charwidth")
BE_VARIABLE(sd_neut2body_type, sd_neut2body, "sd_neut2body_", "cb_sd_neut2body")
BE_VARIABLE(sd_neut2bodygrav_type, sd_neut2bodygrav, "sd_neut2bodygrav_", "cb_sd_neut2bodygrav")
BE_VARIABLE(sd_neut3body_type, sd_neut3body, "sd_neut3body_", "cb_sd_neut3body")
BE_VARIABLE(sd_neutloop_type, sd_neutloop, "sd_neutloop_", "cb_sd_neutloop")
BE_VARIABLE(sd_neutwidth_type, sd_neutwidth, "sd_neutwidth_", "cb_sd_neutwidth")
BE_VARIABLE(sd_glui2body_type, sd_glui2body, "sd_glui2body_", "cb_sd_glui2body")
BE_VARIABLE(sd_glui3body_type, sd_glui3body, "sd_glui3body_", "cb_sd_glui3body")
BE_VARIABLE(sd_gluiloop_type, sd_gluiloop, "sd_gluiloop_", "cb_sd_gluiloop")
BE_VARIABLE(sd_gluiwidth_type, sd_gluiwidth, "sd_gluiwidth_", "cb_sd_gluiwidth")
BE_VARIABLE(sd_sup2body_type, sd_sup2body, "sd_sup2body_", "cb_sd_sup2body")
BE_VARIABLE(sd_supwidth_type, sd_supwidth, "sd_supwidth_", "cb_sd_supwidth")
BE_VARIABLE(sd_sdown2body_type, sd_sdown2body, "sd_sdown2body_", "cb_sd_sdown2body")
BE_VARIABLE(sd_sdownwidth_type, sd_sdownwidth, "sd_sdownwidth_", "cb_sd_sdownwidth")
BE_VARIABLE(sd_stop2body_type, sd_stop2body, "sd_stop2body_", "cb_sd_stop2body")
BE_VARIABLE(sd_stop3body_type, sd_stop3body, "sd_stop3body_", "cb_sd_stop3body")
BE_VARIABLE(sd_stoploop_type, sd_stoploop, "sd_stoploop_", "cb_sd_stoploop")
BE_VARIABLE(sd_stop4body_type, sd_stop4body, "sd_stop4body_", "cb_sd_stop4body")
BE_VARIABLE(sd_stopwidth_type, sd_stopwidth, "sd_stopwidth_", "cb_sd_stopwidth")
BE_VARIABLE(sd_sbot2body_type, sd_sbot2body, "sd_sbot2body_", "cb_sd_sbot2body")
BE_VARIABLE(sd_sbot3body_type, sd_sbot3body, "sd_sbot3body_", "cb_sd_sbot3body")
BE_VARIABLE(sd_sbotwidth_type, sd_sbotwidth, "sd_sbotwidth_", "cb_sd_sbotwidth")
BE_VARIABLE(sd_sel2body_type, sd_sel2body, "sd_sel2body_", "cb_sd_sel2body")
BE_VARIABLE(sd_selwidth_type, sd_selwidth, "sd_selwidth_", "cb_sd_selwidth")
BE_VARIABLE(sd_snel2body_type, sd_snel2body, "sd_snel2body_", "cb_sd_snel2body")
BE_VARIABLE(sd_snelwidth_type, sd_snelwidth, "sd_snelwidth_", "cb_sd_snelwidth")
BE_VARIABLE(sd_stau2body_type, sd_stau2body, "sd_stau2body_", "cb_sd_stau2body")
BE_VARIABLE(sd_stau2bodygrav_type, sd_stau2bodygrav, "sd_stau2bodygrav_", "cb_sd_stau2bodygrav")
BE_VARIABLE(sd_stauwidth_type, sd_stauwidth, "sd_stauwidth_", "cb_sd_stauwidth")
BE_VARIABLE(sd_sntau2body_type, sd_sntau2body, "sd_sntau2body_", "cb_sd_sntau2body")
BE_VARIABLE(sd_sntauwidth_type, sd_sntauwidth, "sd_sntauwidth_", "cb_sd_sntauwidth")
BE_VARIABLE(sd_top2body_type, sd_top2body, "sd_top2body_", "cb_sd_top2body")
BE_VARIABLE(sd_topwidth_type, sd_topwidth, "sd_topwidth_", "cb_sd_topwidth")
BE_VARIABLE(flavviolation_type, flavviolation, "flavviolation_", "cb_flavviolation")
BE_VARIABLE(sd_mbmb_type, sd_mbmb, "sd_mbmb_", "cb_sd_mbmb")
BE_VARIABLE(sd_selectron_type, sd_selectron, "sd_selectron_", "cb_sd_selectron")

// Convenience functions (registration)
BE_CONV_FUNCTION(run_susy_hit, void, (SLHAstruct, double, double), "susy_hit_backend_level_init")

// Initialisation function (dependencies)
BE_INI_DEPENDENCY(MSSM_spectrum, const Spectrum*)
BE_INI_DEPENDENCY(W_minus_decay_rates, DecayTable::Entry)
BE_INI_DEPENDENCY(W_plus_decay_rates, DecayTable::Entry)
BE_INI_DEPENDENCY(Z_decay_rates, DecayTable::Entry)

// Convenience functions (definitions)
BE_NAMESPACE
{

  /// Runs actual SUSY-HIT decay calculations.
  /// Inputs: m_s_1GeV_msbar    strange mass in GeV, in MSbar scheme at an energy of 1GeV
  ///         W_width, Z_width  EW gauge boson total widths in GeV
  void run_susy_hit(SLHAstruct slha, double W_width, double Z_width) 
  {
    using SLHAea::to;

    // Bypass model and use hardcoded SLHA values for debug purposes.
    const bool debug = false;

    if (not debug) 
    {

      // Zero all SLHA2 Q values
      for (int i=1; i<=22; ++i) sd_leshouches2->qvalue(i) = 0.0;

      // Get SLHA2 blocks
      try
      {
        SLHAea::Block sminputs = slha.at("SMINPUTS");
        SLHAea::Block vckm     = slha.at("VCKMIN");
        SLHAea::Block pmns     = slha.at("UPMNSIN");
        SLHAea::Block msoft    = slha.at("MSOFT");
        SLHAea::Block mass     = slha.at("MASS");
        SLHAea::Block nmix     = slha.at("NMIX");
        SLHAea::Block vmix     = slha.at("VMIX");
        SLHAea::Block umix     = slha.at("UMIX");
        //SLHAea::Block stopmix  = slha.at("STOPMIX");
        //SLHAea::Block sbotmix  = slha.at("SBOTMIX");
        //SLHAea::Block staumix  = slha.at("STAUMIX");
        SLHAea::Block alpha    = slha.at("ALPHA");
        SLHAea::Block hmix     = slha.at("HMIX");
        SLHAea::Block gauge    = slha.at("GAUGE");
        SLHAea::Block au       = slha.at("AU");
        SLHAea::Block ad       = slha.at("AD");
        SLHAea::Block ae       = slha.at("AE");
        SLHAea::Block yu       = slha.at("YU");
        SLHAea::Block yd       = slha.at("YD");
        SLHAea::Block ye       = slha.at("YE");     
        SLHAea::Block msq2     = slha.at("MSQ2");     
        SLHAea::Block msd2     = slha.at("MSD2");
        SLHAea::Block msu2     = slha.at("MSU2");
        SLHAea::Block td       = slha.at("TD");
        SLHAea::Block tu       = slha.at("TU");
        SLHAea::Block usqmix   = slha.at("USQMIX");
        SLHAea::Block dsqmix   = slha.at("DSQMIX");
        SLHAea::Block selmix   = slha.at("SELMIX");
        SLHAea::Block spinfo   = slha.at("SPINFO");
      }
      catch (std::exception e)
      {
        backend_error().raise(LOCAL_INFO, "Exception raised when trying to read SLHA blocks -- a block seems to be missing.\nException: "+e.what()); 
      }

      // SMINPUTS
      for (int i=1; i<=14; ++i)
      {
        sd_leshouches2->smval(i) = (sminputs[i].is_data_line()) ? to<double>(sminputs[i][1]) : 0.0;
      }
      for (int i=15; i<=20; ++i) sd_leshouches2->smval(i) = 0.0;     // zeroing

      // SUSY-HIT and HDecay non-SLHA inputs
      susyhitin->amsin = to<double>(sminputs.at(23).at(1));          // MSBAR(1): HDECAY claims it wants ms(1GeV)^MSbar, but we don't believe it, and give it m_s(2GeV)^MSBar 
      susyhitin->amcin = to<double>(sminputs.at(24).at(1));          // MC: HDECAY claims it wants the c pole mass, but that is not well defined, so we give it mc(mc)^MSBar 
      susyhitin->ammuonin = sd_leshouches2->smval(11);               // MMUON: mmu(pole)
      susyhitin->alphin = sd_leshouches2->smval(1);                  // ALPHA: alpha_em^-1(M_Z)^MSbar (scheme and scale not specified in SUSYHIT or HDECAY documentation)
      susyhitin->gamwin = W_width;                                   // GAMW: W width (GeV)
      susyhitin->gamzin = Z_width;                                   // GAMZ: Z width (GeV)
      //double lambda = to<double>(vckm.at(1).at(1));                // Wolfenstein lambda 
      //double A = to<double>(vckm.at(2).at(2));                     // Wolfenstein A 
      //double rhobar = to<double>(vckm.at(3).at(3));                // Wolfenstein rhobar 
      //double etabar = to<double>(vckm.at(4).at(4));                // Wolfenstein etabar 
      susyhitin->vusin = 0.2205;                     // VUS          FIXME
      susyhitin->vcbin = 0.04;                       // VCB
      susyhitin->rvubin = 0.08;                      // VUB/VCB    
      //susyhitin->vusin = Spectrum::Wolf2V_us(lambda, A, rhobar, etabar); // VUS: CKM V_us
      //susyhitin->vcbin = Spectrum::Wolf2V_cb(lambda, A, rhobar, etabar); // VCB: CKM V_cb 
      //susyhitin->rvubin = Spectrum::Wolf2V_ub(lambda, A, rhobar, etabar) / susyhitin->vcbin; // VUB/VCB: Ratio of CKM V_UB/V_CB     
    
      // MODSEL
      sd_leshouches2->imod(1) = 1;    // 1, x = SUSY model info. 
      sd_leshouches2->imod(2) = 0;    // 0 = general MSSM, 1 = SUGRA => do not calculate metastable NLSP decays to gravitinos.
      //sd_leshouches2->imod(2) = 2;  // 2 = GMSB => calculate metastable NLSP decays to gravitinos.  Not yet implemented in GAMBIT.
      checkfavvio->imodfav(1) = 6;    // 6, x =  Flavour violation info. 
      checkfavvio->imodfav(2) = 0;    // 0 = no FV, 1 = q FV, 2 = l FV, 3 = both.  For FV decays, must be set non-zero later before calling sdecay() again.  Not yet implemented in GAMBIT.

      // MSOFT
      for (int i=1; i<=100; ++i) sd_leshouches2->msoftval(i) = unlikely(); // indicate undefined
      if (msoft.find_block_def()->size() >= 4) sd_leshouches2->qvalue(3) = to<double>(msoft.find_block_def()->at(3)); // Q(GeV)
      int msoft_indices[20] = {1, 2, 3, 21, 22, 31, 32, 33, 34, 35, 36, 41, 42, 43, 44, 45, 46, 47, 48, 49};
      // M_1, M_2, M_3, M^2_Hd, M^2_Hu, M_eL, M_muL, M_tauL, M_eR, M_muR, M_tauR, M_q1L, M_q2L, M_q3L, M_uR, M_cR, M_tR, M_dR, M_sR, M_bR
      for (int i : msoft_indices)
      {       
        if (msoft[i].is_data_line()) sd_leshouches2->msoftval(i) = to<double>(msoft.at(i).at(1));  
      }

      // SLHA2 block EXTPAR
      sd_leshouches2->extval(0) = sd_leshouches2->qvalue(3);         // EWSB scale (set to SUSY scale as per MSOFT).  Not used by SUSY-HIT anymore.

      // SLHA2 block MASS    FIXME needs checking for mass-gauge/flav eigenstate conversion.
      int slha_indices[35] = {24, 25, 35, 36, 37, 1000001, 2000001, 1000002, 2000002, 1000003, 2000003, 1000004, 2000004, 1000005, 2000005, 1000006, 2000006,
                           /* W+,  h,  H,  A, H+,    ~d_L,    ~d_R,    ~u_L,    ~u_R,    ~s_L,    ~s_R,    ~c_L,    ~c_R,    ~b_1,    ~b_2,    ~t_1,    ~t_2, */
       1000011, 2000011, 1000012, 1000013, 2000013, 1000014, 1000015, 2000015, 1000016, 1000021, 1000022, 1000023, 1000025, 1000035, 1000024, 1000037, 5, 1000039};
      //  ~e_L,    ~e_R,  ~nu_eL,   ~mu_L,   ~mu_R, ~nu_muL,  ~tau_1,  ~tau_2,~nu_tauL,      ~g, ~chi_10, ~chi_20, ~chi_30, ~chi_40, ~chi_1+, ~chi_2+, b pole, ~G
      for (int i=1; i<=35; ++i) 
      {
        sd_leshouches2->massval(i) = (mass[slha_indices[i-1]].is_data_line()) ? to<double>(mass[slha_indices[i-1]][1]) : unlikely();
      }
      for (int i=36; i<=50; ++i) sd_leshouches2->massval(i) = 0.0;   // zeroing
      sd_leshouches2->massval(34) = 4.87877839E+00;  // b pole mass FIXME when available from slhaea object!!
 
      // NMIX
      for (int i=1; i<=4; ++i) for (int j=1; j<=4; ++j) sd_leshouches2->nmixval(i,j) = (nmix[initVector<int>(i,j)].is_data_line()) ? to<double>(nmix.at(i,j)[2]) : 0.0;

      // VMIX, UMIX, STOPMIX, SBOTMIX, STAUMIX
      for (int i=1; i<=2; ++i) 
      {
        for (int j=1; j<=2; ++j)
        {
          std::vector<int> ij = initVector<int>(i,j);
          sd_leshouches2->vmixval(i,j) = (vmix[ij].is_data_line()) ? to<double>(vmix.at(i,j)[2]) : 0.0;
          sd_leshouches2->umixval(i,j) = (umix[ij].is_data_line()) ? to<double>(umix.at(i,j)[2]) : 0.0;
          //FIXME these need to come from the spectrum's mixing functions
          //sd_leshouches2->stopmixval(i,j) = (stopmix[ij].is_data_line()) ? to<double>(stopmix.at(i,j)[2]) : 0.0;
          //sd_leshouches2->sbotmixval(i,j) = (sbotmix[ij].is_data_line()) ? to<double>(sbotmix.at(i,j)[2]) : 0.0;
          //sd_leshouches2->staumixval(i,j) = (staumix[ij].is_data_line()) ? to<double>(staumix.at(i,j)[2]) : 0.0;
        }
      }
      // SLHA2 block STOPMIX -- FIXME delete when mixings avail from spectrum!
      sd_leshouches2->stopmixval(1,1) = 5.52988023E-01; // cos(theta_t)
      sd_leshouches2->stopmixval(1,2) = 8.33189202E-01; // sin(theta_t)
      sd_leshouches2->stopmixval(2,1) =-8.33189202E-01; // -sin(theta_t)
      sd_leshouches2->stopmixval(2,2) = 5.52988023E-01; // cos(theta_t) 
      // SLHA2 block SBOTMIX -- FIXME delete when mixings avail from spectrum!
      sd_leshouches2->sbotmixval(1,1) = 9.30091013E-01; // cos(theta_b)
      sd_leshouches2->sbotmixval(1,2) = 3.67329153E-01; // sin(theta_b)
      sd_leshouches2->sbotmixval(2,1) =-3.67329153E-01; // -sin(theta_b)
      sd_leshouches2->sbotmixval(2,2) = 9.30091013E-01; // cos(theta_b)
      // SLHA2 block STAUMIX -- FIXME delete when mixings avail from spectrum!
      sd_leshouches2->staumixval(1,1) = 2.84460080E-01; // cos(theta_tau)
      sd_leshouches2->staumixval(1,2) = 9.58687886E-01; // sin(theta_tau)
      sd_leshouches2->staumixval(2,1) =-9.58687886E-01; // -sin(theta_tau)
      sd_leshouches2->staumixval(2,2) = 2.84460080E-01; // cos(theta_tau)
  
      // ALPHA (value is spectrum generator's "best choice" => can be on-shell, DRbar at a give scale, whatever)
      sd_leshouches2->alphaval = to<double>(alpha.back().at(0));             // Mixing angle in the neutral Higgs boson sector.
      
      // HMIX
      if (hmix.find_block_def()->size() >= 4) sd_leshouches2->qvalue(1) = to<double>(hmix.find_block_def()->at(3));  // Q(GeV)
      for (int i=1; i<=10; ++i) sd_leshouches2->hmixval(i) = (hmix[i].is_data_line()) ? to<double>(hmix[i][1]) : unlikely();

      // GAUGE
      if (gauge.find_block_def()->size() >= 4) sd_leshouches2->qvalue(2) = to<double>(gauge.find_block_def()->at(3));// Q(GeV)
      sd_leshouches2->gaugeval(1) = to<double>(gauge.at(1).at(1));                                                   // gprime(Q) DRbar
      sd_leshouches2->gaugeval(2) = to<double>(gauge.at(2).at(1));                                                   // g(Q) DRbar
      sd_leshouches2->gaugeval(3) = to<double>(gauge.at(3).at(1));                                                   // g_3(Q) DRbar
  
      // AU, AD, AE, YU, YD, YE, MSQ2, MSD2, MSU2, TD, TU, VCKM
      if (au.find_block_def()->size() >= 4) sd_leshouches2->qvalue(4)  = to<double>(au.find_block_def()->at(3));     // Q(GeV)
      if (ad.find_block_def()->size() >= 4) sd_leshouches2->qvalue(5)  = to<double>(ad.find_block_def()->at(3));     // Q(GeV)
      if (ae.find_block_def()->size() >= 4) sd_leshouches2->qvalue(6)  = to<double>(ae.find_block_def()->at(3));     // Q(GeV)
      if (yu.find_block_def()->size() >= 4) sd_leshouches2->qvalue(7)  = to<double>(yu.find_block_def()->at(3));     // Q(GeV)
      if (yd.find_block_def()->size() >= 4) sd_leshouches2->qvalue(8)  = to<double>(yd.find_block_def()->at(3));     // Q(GeV)
      if (ye.find_block_def()->size() >= 4) sd_leshouches2->qvalue(9)  = to<double>(ye.find_block_def()->at(3));     // Q(GeV)
      if (msq2.find_block_def()->size() >= 4) sd_leshouches2->qvalue(17) = to<double>(msq2.find_block_def()->at(3)); // Q(GeV) corrects minor bug in SUSY-HIT SLHA reader
      if (msd2.find_block_def()->size() >= 4) sd_leshouches2->qvalue(10) = to<double>(msd2.find_block_def()->at(3)); // Q(GeV)
      if (msu2.find_block_def()->size() >= 4) sd_leshouches2->qvalue(11) = to<double>(msu2.find_block_def()->at(3)); // Q(GeV)
      if (td.find_block_def()->size() >= 4) sd_leshouches2->qvalue(12) = to<double>(td.find_block_def()->at(3));     // Q(GeV)
      if (tu.find_block_def()->size() >= 4) sd_leshouches2->qvalue(13) = to<double>(tu.find_block_def()->at(3));     // Q(GeV)
      if (vckm.find_block_def()->size() >= 4) sd_leshouches2->qvalue(21) = to<double>(vckm.find_block_def()->at(3)); // Q(GeV)
      for (int i=1; i<=3; ++i) 
      {
        for (int j=1; j<=3; ++j)
        {
          std::vector<int> ij = initVector<int>(i,j);
          sd_leshouches2->auval(i,j) = (au[ij].is_data_line()) ? to<double>(au.at(i,j)[2]) : unlikely();
          sd_leshouches2->adval(i,j) = (ad[ij].is_data_line()) ? to<double>(ad.at(i,j)[2]) : unlikely();
          sd_leshouches2->aeval(i,j) = (ae[ij].is_data_line()) ? to<double>(ae.at(i,j)[2]) : unlikely();
          sd_leshouches2->yuval(i,j) = (yu[ij].is_data_line()) ? to<double>(yu.at(i,j)[2]) : 0.0;
          sd_leshouches2->ydval(i,j) = (yd[ij].is_data_line()) ? to<double>(yd.at(i,j)[2]) : 0.0;
          sd_leshouches2->yeval(i,j) = (ye[ij].is_data_line()) ? to<double>(ye.at(i,j)[2]) : 0.0;
          flavviolation->msq2(i,j) = (msq2[ij].is_data_line()) ? to<double>(msq2.at(i,j)[2]) : 0.0;
          flavviolation->msd2(i,j) = (msd2[ij].is_data_line()) ? to<double>(msd2.at(i,j)[2]) : 0.0;
          flavviolation->msu2(i,j) = (msu2[ij].is_data_line()) ? to<double>(msu2.at(i,j)[2]) : 0.0;
          flavviolation->td(i,j) = (td[ij].is_data_line()) ? to<double>(td.at(i,j)[2]) : 0.0;
          flavviolation->tu(i,j) = (tu[ij].is_data_line()) ? to<double>(tu.at(i,j)[2]) : 0.0;
          flavviolation->vckm(i,j) = (vckm[ij].is_data_line()) ? 0.0 : 0.0; //to<double>(vckm.at(i,j)[2]) : 0.0; FIXME
        }
      }

      // USQMIX, DSQMIX, SELMIX    
      if (usqmix.find_block_def()->size() >= 4) sd_leshouches2->qvalue(14) = to<double>(usqmix.find_block_def()->at(3)); // Q(GeV)
      if (dsqmix.find_block_def()->size() >= 4) sd_leshouches2->qvalue(15) = to<double>(dsqmix.find_block_def()->at(3)); // Q(GeV) corrects minor bug in SUSY-HIT SLHA reader.
      if (selmix.find_block_def()->size() >= 4) sd_leshouches2->qvalue(16) = to<double>(selmix.find_block_def()->at(3)); // Q(GeV) corrects minor bug in SUSY-HIT SLHA reader.
      for (int i=1; i<=6; ++i) 
      {
        for (int j=1; j<=6; ++j)
        {
          std::vector<int> ij = initVector<int>(i,j);
          flavviolation->usqmix(i,j) = (usqmix[ij].is_data_line()) ? to<double>(usqmix.at(i,j)[2]) : 0.0;
          flavviolation->dsqmix(i,j) = (dsqmix[ij].is_data_line()) ? to<double>(dsqmix.at(i,j)[2]) : 0.0;
          sd_selectron->selmix(i,j)  = (selmix[ij].is_data_line()) ? to<double>(selmix.at(i,j)[2]) : 0.0;
        }
      }
  
      // SLHA1 block SPINFO
      sd_leshouches1->spinfo1 = (spinfo[1].is_data_line()) ? spinfo[1][1] : ""; // RGE +Spectrum calculator
      sd_leshouches1->spinfo2 = (spinfo[2].is_data_line()) ? spinfo[2][1] : ""; // version number
             
    }
    else // The following is hard-coded model in SLHA format, for debugging.
    {

      // SUSY-HIT / HDecay inputs
      susyhitin->amsin = 0.19;                       // MSBAR(1)
      susyhitin->amcin = 1.4;                        // MC
      susyhitin->ammuonin = 0.105658389;             // MMUON
      susyhitin->alphin = 137.0359895;               // 1/ALPHA
      susyhitin->gamwin = 2.08;                      // GAMW
      susyhitin->gamzin = 2.49;                      // GAMZ
      susyhitin->vusin = 0.2205;                     // VUS
      susyhitin->vcbin = 0.04;                       // VCB
      susyhitin->rvubin = 0.08;                      // VUB/VCB    
  
      // Zero all SLHA2 Q values
      for (int i=1; i<=22; ++i) sd_leshouches2->qvalue(i) = 0.0;
  
      // SLHA2 block MODSEL
      sd_leshouches2->imod(1) = 1;
      sd_leshouches2->imod(2) = 1;                   // model; 1, 1 = SUGRA
  
      // SLHA2 block SMINPUTS
      for (int i=1; i<=20; ++i) sd_leshouches2->smval(i) = 0.0; // zeroing
      sd_leshouches2->smval(1) = 1.27934000E+02;     // alpha_em^-1(M_Z)^MSbar
      sd_leshouches2->smval(2) = 1.16639000E-05;     // G_F [GeV^-2]
      sd_leshouches2->smval(3) = 1.17200000E-01;     // alpha_S(M_Z)^MSbar
      sd_leshouches2->smval(4) = 9.11870000E+01;     // M_Z pole mass
      sd_leshouches2->smval(5) = 4.25000000E+00;     // mb(mb)^MSbar
      sd_leshouches2->smval(6) = 1.72500000E+02;     // mt pole mass
      sd_leshouches2->smval(7) = 1.77710000E+00;     // mtau pole mass
  
      // SLHA2 block EXTPAR
      for (int i=1; i<=100; ++i) sd_leshouches2->extval(i) = unlikely(); // indicate undefined
      sd_leshouches2->extval(0) = 4.65777483E+02;    // EWSB scale.  Not used by SUSY-HIT anymore.          
  
      // SLHA2 block MASS
      for (int i=1; i<=50; ++i) sd_leshouches2->massval(i) = 0.0; // zeroing
      sd_leshouches2->massval(1) = 8.04847331E+01;   // W+
      sd_leshouches2->massval(2) = 1.09932416E+02;   // h
      sd_leshouches2->massval(3) = 3.94935594E+02;   // H
      sd_leshouches2->massval(4) = 3.94525488E+02;   // A
      sd_leshouches2->massval(5) = 4.02953218E+02;   // H+
      sd_leshouches2->massval(6) = 5.67618444E+02;   // ~d_L
      sd_leshouches2->massval(7) = 5.45467940E+02;   // ~d_R
      sd_leshouches2->massval(8) = 5.62111753E+02;   // ~u_L
      sd_leshouches2->massval(9) = 5.45739159E+02;   // ~u_R
      sd_leshouches2->massval(10) = 5.67618444E+02;  // ~s_L
      sd_leshouches2->massval(11) = 5.45467940E+02;  // ~s_R
      sd_leshouches2->massval(12) = 5.62111753E+02;  // ~c_L
      sd_leshouches2->massval(13) = 5.45739159E+02;  // ~c_R
      sd_leshouches2->massval(14) = 5.16777573E+02;  // ~b_1
      sd_leshouches2->massval(15) = 5.46086561E+02;  // ~b_2
      sd_leshouches2->massval(16) = 3.99615017E+02;  // ~t_1
      sd_leshouches2->massval(17) = 5.86391641E+02;  // ~t_2
      sd_leshouches2->massval(18) = 2.00774228E+02;  // ~e_L
      sd_leshouches2->massval(19) = 1.42820157E+02;  // ~e_R
      sd_leshouches2->massval(20) = 1.84853985E+02;  // ~nu_eL
      sd_leshouches2->massval(21) = 2.00774228E+02;  // ~mu_L
      sd_leshouches2->massval(22) = 1.42820157E+02;  // ~mu_R
      sd_leshouches2->massval(23) = 1.84853985E+02;  // ~nu_muL
      sd_leshouches2->massval(24) = 1.33342244E+02;  // ~tau_1
      sd_leshouches2->massval(25) = 2.04795115E+02;  // ~tau_2
      sd_leshouches2->massval(26) = 1.83966053E+02;  // ~nu_tauL
      sd_leshouches2->massval(27) = 6.05955887E+02;  // ~g
      sd_leshouches2->massval(28) = 9.71954610E+01;  // ~chi_10
      sd_leshouches2->massval(29) = 1.80297146E+02;  // ~chi_20
      sd_leshouches2->massval(30) =-3.58443995E+02;  // ~chi_30
      sd_leshouches2->massval(31) = 3.77781490E+02;  // ~chi_40
      sd_leshouches2->massval(32) = 1.79671182E+02;  // ~chi_1+
      sd_leshouches2->massval(33) = 3.77983105E+02;  // ~chi_2+
      sd_leshouches2->massval(34) = 4.87877839E+00;  // b pole mass
      sd_leshouches2->massval(35) = unlikely();      // ~G
  
      // SLHA2 block NMIX
      sd_leshouches2->nmixval(1,1) = 9.85345167E-01; // N_11
      sd_leshouches2->nmixval(1,2) =-5.64225409E-02; // N_12
      sd_leshouches2->nmixval(1,3) = 1.51059160E-01; // N_13
      sd_leshouches2->nmixval(1,4) =-5.56105152E-02; // N_14
      sd_leshouches2->nmixval(2,1) = 1.06123308E-01; // N_21
      sd_leshouches2->nmixval(2,2) = 9.39651214E-01; // N_22
      sd_leshouches2->nmixval(2,3) =-2.80885422E-01; // N_23
      sd_leshouches2->nmixval(2,4) = 1.64002501E-01; // N_24
      sd_leshouches2->nmixval(3,1) = 6.12835220E-02; // N_31
      sd_leshouches2->nmixval(3,2) =-9.07288796E-02; // N_32
      sd_leshouches2->nmixval(3,3) =-6.95178480E-01; // N_33
      sd_leshouches2->nmixval(3,4) =-7.10450196E-01; // N_34
      sd_leshouches2->nmixval(4,1) = 1.18646854E-01; // N_41
      sd_leshouches2->nmixval(4,2) =-3.25023636E-01; // N_42
      sd_leshouches2->nmixval(4,3) =-6.44213777E-01; // N_43
      sd_leshouches2->nmixval(4,4) = 6.82107887E-01; // N_44
  
      // SLHA2 block VMIX
      sd_leshouches2->vmixval(1,1) =-9.70421546E-01; // V_11
      sd_leshouches2->vmixval(1,2) = 2.41416701E-01; // V_12
      sd_leshouches2->vmixval(2,1) = 2.41416701E-01; // V_21
      sd_leshouches2->vmixval(2,2) = 9.70421546E-01; // V_22
  
      // SLHA2 block UMIX
      sd_leshouches2->umixval(1,1) =-9.11420712E-01; // U_11
      sd_leshouches2->umixval(1,2) = 4.11475741E-01; // U_12
      sd_leshouches2->umixval(2,1) = 4.11475741E-01; // U_21
      sd_leshouches2->umixval(2,2) = 9.11420712E-01; // U_22
  
      // SLHA2 block STOPMIX
      sd_leshouches2->stopmixval(1,1) = 5.52988023E-01; // cos(theta_t)
      sd_leshouches2->stopmixval(1,2) = 8.33189202E-01; // sin(theta_t)
      sd_leshouches2->stopmixval(2,1) =-8.33189202E-01; // -sin(theta_t)
      sd_leshouches2->stopmixval(2,2) = 5.52988023E-01; // cos(theta_t)
  
      // SLHA2 block SBOTMIX
      sd_leshouches2->sbotmixval(1,1) = 9.30091013E-01; // cos(theta_b)
      sd_leshouches2->sbotmixval(1,2) = 3.67329153E-01; // sin(theta_b)
      sd_leshouches2->sbotmixval(2,1) =-3.67329153E-01; // -sin(theta_b)
      sd_leshouches2->sbotmixval(2,2) = 9.30091013E-01; // cos(theta_b)
  
      // SLHA2 block STAUMIX
      sd_leshouches2->staumixval(1,1) = 2.84460080E-01; // cos(theta_tau)
      sd_leshouches2->staumixval(1,2) = 9.58687886E-01; // sin(theta_tau)
      sd_leshouches2->staumixval(2,1) =-9.58687886E-01; // -sin(theta_tau)
      sd_leshouches2->staumixval(2,2) = 2.84460080E-01; // cos(theta_tau)
  
      // SLHA2 block ALPHA
      sd_leshouches2->alphaval = -1.14188002E-01;    // Mixing angle in the neutral Higgs boson sector.
      // Value is spectrum generator's "best choice" => can be on-shell, DRbar at a give scale, whatever.
      
      // SLHA2 block HMIX
      sd_leshouches2->qvalue(1) = 4.65777483E+02;    // Q(GeV)
      for (int i=1; i<=10; ++i) sd_leshouches2->hmixval(i) = unlikely();    // indicate undefined
      sd_leshouches2->hmixval(1) = 3.52164860E+02;   // mu(Q)
      sd_leshouches2->hmixval(2) = 9.75041102E+00;   // tanbeta(Q)
      sd_leshouches2->hmixval(3) = 2.45014641E+02;   // vev(Q)
      sd_leshouches2->hmixval(4) = 1.62371513E+05;   // MA^2(Q)
      
      // SLHA2 block GAUGE
      sd_leshouches2->qvalue(2) = 4.65777483E+02;    // Q(GeV)
      sd_leshouches2->gaugeval(1) = 3.60982135E-01;  // gprime(Q) DRbar
      sd_leshouches2->gaugeval(2) = 6.46351672E-01;  // g(Q) DRbar
      sd_leshouches2->gaugeval(3) = 1.09632112E+00;  // g_3(Q) DRbar
   
      // SLHA2 block MSOFT
      sd_leshouches2->qvalue(3) = 4.65777483E+02;    // Q(GeV)
      for (int i=1; i<=100; ++i) sd_leshouches2->msoftval(i) = unlikely();  // indicate undefined
      sd_leshouches2->msoftval(1) = 1.01486794E+02;  // M_1
      sd_leshouches2->msoftval(2) = 1.91565439E+02;  // M_2
      sd_leshouches2->msoftval(3) = 5.86284400E+02;  // M_3
      sd_leshouches2->msoftval(21) = 3.23226904E+04; // M^2_Hd
      sd_leshouches2->msoftval(22) =-1.24993993E+05; // M^2_Hu
      sd_leshouches2->msoftval(31) = 1.95443359E+02; // M_eL
      sd_leshouches2->msoftval(32) = 1.95443359E+02; // M_muL
      sd_leshouches2->msoftval(33) = 1.94603750E+02; // M_tauL
      sd_leshouches2->msoftval(34) = 1.35950985E+02; // M_eR
      sd_leshouches2->msoftval(35) = 1.35950985E+02; // M_muR
      sd_leshouches2->msoftval(36) = 1.33480599E+02; // M_tauR
      sd_leshouches2->msoftval(41) = 5.45553618E+02; // M_q1L
      sd_leshouches2->msoftval(42) = 5.45553618E+02; // M_q2L
      sd_leshouches2->msoftval(43) = 4.97578078E+02; // M_q3L
      sd_leshouches2->msoftval(44) = 5.27538927E+02; // M_uR
      sd_leshouches2->msoftval(45) = 5.27538927E+02; // M_cR
      sd_leshouches2->msoftval(46) = 4.23429537E+02; // M_tR
      sd_leshouches2->msoftval(47) = 5.25444117E+02; // M_dR
      sd_leshouches2->msoftval(48) = 5.25444117E+02; // M_sR
      sd_leshouches2->msoftval(49) = 5.22139557E+02; // M_bR
  
      // SLHA1 block AU
      sd_leshouches2->qvalue(4) = 4.65777483E+02;    // Q(GeV)
      for (int i=1; i<=3; ++i) for (int j=1; j<=3; ++j) sd_leshouches2->auval(i,j) = unlikely();   // indicate undefined
      sd_leshouches2->auval(1,1) = -6.83184382E+02;  // A_u(Q) DRbar
      sd_leshouches2->auval(2,2) = -6.83184382E+02;  // A_c(Q) DRbar
      sd_leshouches2->auval(3,3) = -5.06144039E+02;  // A_t(Q) DRbar
  
      // SLHA1 block AD
      sd_leshouches2->qvalue(5) = 4.65777483E+02;    // Q(GeV)
      for (int i=1; i<=3; ++i) for (int j=1; j<=3; ++j) sd_leshouches2->adval(i,j) = unlikely();   // indicate undefined
      sd_leshouches2->adval(1,1) = -8.58985213E+02;  // A_d(Q) DRbar
      sd_leshouches2->adval(2,2) = -8.58985213E+02;  // A_s(Q) DRbar
      sd_leshouches2->adval(3,3) = -7.96595982E+02;  // A_b(Q) DRbar
  
      // SLHA1 block AE
      sd_leshouches2->qvalue(6) = 4.65777483E+02;    // Q(GeV)
      for (int i=1; i<=3; ++i) for (int j=1; j<=3; ++j) sd_leshouches2->aeval(i,j) = unlikely();   // indicate undefined
      sd_leshouches2->aeval(1,1) = -2.53298464E+02;  // A_e(Q) DRbar
      sd_leshouches2->aeval(2,2) = -2.53298464E+02;  // A_mu(Q) DRbar
      sd_leshouches2->aeval(3,3) = -2.51542764E+02;  // A_tau(Q) DRbar
  
      // SLHA2 block YU 
      sd_leshouches2->qvalue(7) = 4.65777483E+02;    // Q(GeV)
      for (int i=1; i<=3; ++i) for (int j=1; j<=3; ++j) sd_leshouches2->yuval(i,j) = 0.0;          // zero Yukawas (defined as diagonal in SLHA2)
      sd_leshouches2->yuval(3,3) = 8.78978125E-01;   // y_top(Q) DRbar
  
      // SLHA1 block YD
      sd_leshouches2->qvalue(8) = 4.65777483E+02;    // Q(GeV)
      for (int i=1; i<=3; ++i) for (int j=1; j<=3; ++j) sd_leshouches2->ydval(i,j) = 0.0;          // zero Yukawas (defined as diagonal in SLHA2)
      sd_leshouches2->ydval(3,3) = 1.39517330E-01;   // y_b(Q) DRbar
  
      // SLHA1 block YE
      sd_leshouches2->qvalue(9) = 4.65777483E+02;    // Q(GeV)
      for (int i=1; i<=3; ++i) for (int j=1; j<=3; ++j) sd_leshouches2->yeval(i,j) = 0.0;          // zero Yukawas (defined as diagonal in SLHA2)
      sd_leshouches2->yeval(3,3) = 1.01147257E-01;   // y_tau(Q) DRbar
  
      // SLHA1 block SPINFO
      sd_leshouches1->spinfo1 = "GAMBIT";            // RGE +Spectrum calculator
      sd_leshouches1->spinfo2 = "v1.0.0";            // version number
      
      // SLHA2 block MSQ2    
      sd_leshouches2->qvalue(17) = 4.65777483E+02;   // Q(GeV) corrects minor bug in SUSY-HIT SLHA reader
      for (int i=1; i<=3; ++i) for (int j=1; j<=3; ++j) flavviolation->msq2(i,j) = 0.0;            // zero squark_L mass matrices
  
      // SLHA2 block MSD2
      sd_leshouches2->qvalue(10) = 4.65777483E+02;   // Q(GeV)
      for (int i=1; i<=3; ++i) for (int j=1; j<=3; ++j) flavviolation->msd2(i,j) = 0.0;            // zero d-type squark_R mass matrices
  
      // SLHA2 block MSU2
      sd_leshouches2->qvalue(11) = 4.65777483E+02;   // Q(GeV)
      for (int i=1; i<=3; ++i) for (int j=1; j<=3; ++j) flavviolation->msu2(i,j) = 0.0;            // zero u-type squark_R mass matrices
  
      // SLHA2 block TD
      sd_leshouches2->qvalue(12) = 4.65777483E+02;   // Q(GeV)
      for (int i=1; i<=3; ++i) for (int j=1; j<=3; ++j) flavviolation->td(i,j) = 0.0;              // zero d-type trilinear couplings
  
      // SLHA2 block TU
      sd_leshouches2->qvalue(13) = 4.65777483E+02;   // Q(GeV)
      for (int i=1; i<=3; ++i) for (int j=1; j<=3; ++j) flavviolation->td(i,j) = 0.0;              // zero u-type trilinear couplings
  
      // SLHA2 block USQMIX
      sd_leshouches2->qvalue(14) = 4.65777483E+02;   // Q(GeV)
      for (int i=1; i<=6; ++i) for (int j=1; j<=6; ++j) flavviolation->usqmix(i,j) = 0.0;          // zero u-type squark mixing matrix
  
      // SLHA2 block DSQMIX 
      sd_leshouches2->qvalue(15) = 4.65777483E+02;   // Q(GeV) corrects minor bug in SUSY-HIT SLHA reader.
      for (int i=1; i<=6; ++i) for (int j=1; j<=6; ++j) flavviolation->dsqmix(i,j) = 0.0;          // zero d-type squark mixing matrix
                 
      // SLHA2 block SELMIX 
      sd_leshouches2->qvalue(16) = 4.65777483E+02;   // Q(GeV) corrects minor bug in SUSY-HIT SLHA reader.
      for (int i=1; i<=6; ++i) for (int j=1; j<=6; ++j) sd_selectron->selmix(i,j) = 0.0;           // zero slepton mixing matrix
                   
      // SLHA2 block VCKM
      sd_leshouches2->qvalue(21) = 4.65777483E+02;   // Q(GeV)
      for (int i=1; i<=3; ++i) for (int j=1; j<=3; ++j) flavviolation->vckm(i,j) = 0.0;            // zero CKM matrix
     
    }

    // Must zero this flag in imitation of SUSY-HIT's SLHA reader, to tell it
    // to calculate the b pole mass from mb(mb)_MSbar.  Given that we just tell
    // it to use the b pole mass that we pass it anyway, the fact that it goes
    // and calculates the b pole over again is stupid - but it seems to need
    // to in order to initialise some other things.  It *might* be possible to
    // speed up the decay calculation by setting this to 1, but that may be unsafe.
    sd_mbmb->i_sd_mbmb = 0;
    
    // Do calculation without flavour-violating light stop decays.  To do these, you need to reset
    // this to 1 in your module function and call sdecay() again.  Probably there's a smarter way
    // to order this so that it happens automatically if you want it, but it still needs to be tested
    // that running first without flavour violation and then re-running with flavour violation does 
    // not break the non-FV results.
    flavviolation->ifavvio = 0;
    
    // Set equivalent SLHA common blocks for HDecay.  Only differences are dimension of qvalues and zero vs unlikely for au, ad & ae.
    *slha_leshouches1_hdec = *sd_leshouches1;                       // SLHA1 block is identical in SDECAY and HDECAY.
    slha_leshouches2_hdec->imod = sd_leshouches2->imod;             // model; 1, 1 = SUGRA.  6, x!=0  => flavour violating MSSM(prolly?).  Must be true if calling sdecay(1) later.  Must add a check for this.
    slha_leshouches2_hdec->smval = sd_leshouches2->smval;           // SMINPUTS
    slha_leshouches2_hdec->extval = sd_leshouches2->extval;         // EXTPAR      
    slha_leshouches2_hdec->massval = sd_leshouches2->massval;       // MASS
    slha_leshouches2_hdec->nmixval = sd_leshouches2->nmixval;       // NMIX
    slha_leshouches2_hdec->vmixval = sd_leshouches2->vmixval;       // VMIX
    slha_leshouches2_hdec->umixval = sd_leshouches2->umixval;       // UMIX
    slha_leshouches2_hdec->stopmixval = sd_leshouches2->stopmixval; // STOPMIX
    slha_leshouches2_hdec->sbotmixval = sd_leshouches2->sbotmixval; // SBOTMIX
    slha_leshouches2_hdec->staumixval = sd_leshouches2->staumixval; // STAUMIX
    slha_leshouches2_hdec->alphaval = sd_leshouches2->alphaval;     // ALPHA
    slha_leshouches2_hdec->hmixval = sd_leshouches2->hmixval;       // HMIX
    slha_leshouches2_hdec->gaugeval = sd_leshouches2->gaugeval;     // GAUGE
    slha_leshouches2_hdec->msoftval = sd_leshouches2->msoftval;     // MSOFT
    slha_leshouches2_hdec->yuval = sd_leshouches2->yuval;           // YU
    slha_leshouches2_hdec->ydval = sd_leshouches2->ydval;           // YD
    slha_leshouches2_hdec->yeval = sd_leshouches2->yeval;           // YE
    for (int i=1; i<=3; ++i) for (int j=1; j<=3; ++j)    
    {
      if (sd_leshouches2->auval(i,j) == unlikely())                 // AU
      {
        slha_leshouches2_hdec->auval(i,j) = 0.0; 
      }   
      else 
      {
       slha_leshouches2_hdec->auval(i,j) = sd_leshouches2->auval(i,j);   
      }
      if (sd_leshouches2->adval(i,j) == unlikely())                 // AD
      {
        slha_leshouches2_hdec->adval(i,j) = 0.0; 
      }   
      else 
      {
       slha_leshouches2_hdec->adval(i,j) = sd_leshouches2->adval(i,j);   
      }
      if (sd_leshouches2->aeval(i,j) == unlikely())                 // AE
      {
        slha_leshouches2_hdec->aeval(i,j) = 0.0; 
      }   
      else 
      {
       slha_leshouches2_hdec->aeval(i,j) = sd_leshouches2->aeval(i,j);   
      }
    }                 
    for (int i=1; i<=20; ++i) slha_leshouches2_hdec->qvalue(i) = sd_leshouches2->qvalue(i); // Q(GeV)

    // Run SUSY-HIT
    sdecay();

    // Questions for SUSY-HIT authors
    // ms_1Gev? mc pole?
    // q values -- repeated 11, 14, assignment of selmix to 21 vs < 20; are these bugs?
    // safety of just skipping sd_mbmb calculation
    // safety of running over with FV.
      
  }
}
DONE

// Initialisation function (definition)
BE_INI_FUNCTION
{
  const double scale_tol = 0.1; // Run spectrum to MSUSY if |Q_input-MSUSY| > scale_tol GeV
  SLHAstruct slha;
 
  // If the user provides a file list, just read in SLHA files for debugging and ignore the MSSM_spectrum dependency.
  if (runOptions->hasKey("debug_SLHA_filenames"))
  {
    static int counter = 0;
    std::vector<str> filenames = runOptions->getValue<std::vector<str> >("debug_SLHA_filenames");
    logger() << "Reading SLHA file: " << filenames[counter] << std::endl;
    std::ifstream ifs(filenames[counter]);
    if(!ifs.good()) backend_error().raise(LOCAL_INFO, "SLHA file not found.");
    ifs >> slha;
    ifs.close();
    counter++;
    if (counter >= filenames.size()) counter = 0;
  }
  else // Use the actual spectrum object.
  {
    // Check whether the spectrum object is already at the SUSY scale
    //double msusy = (*Dep::MSSM_spectrum)->get_DRBar_parameter("M_SUSY");  FIXME when M_SUSY is available from the spectrum object.
    double msusy = (*Dep::MSSM_spectrum)->get_UV()->runningpars.GetScale();
    if (fabs(msusy - (*Dep::MSSM_spectrum)->get_UV()->runningpars.GetScale()) > scale_tol)
    {
      // Take a local copy to allow running.
      std::unique_ptr<SubSpectrum> local_mssm_copy = (*Dep::MSSM_spectrum)->get_UV()->clone();
      // Run to SUSY scale.
      local_mssm_copy->runningpars.RunToScale(msusy);
      slha = local_mssm_copy->getSLHAea();
    }
    else 
    {
      // Calculate decay rates using the spectrum 'as is'.
      slha = (*Dep::MSSM_spectrum)->getSLHAea();
    }
  }
  
  // Get the W and Z widths.
  double W_width = 0.5*(Dep::W_plus_decay_rates->width_in_GeV + Dep::W_minus_decay_rates->width_in_GeV);
  double Z_width = Dep::Z_decay_rates->width_in_GeV;

  // Calculate decay rates
  run_susy_hit(slha, W_width, Z_width);      

}
DONE

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"
