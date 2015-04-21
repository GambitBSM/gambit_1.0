//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Frontend for SUSY-HIT 1.4 backend
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///  
/// \author Peter Athron
/// \author Csaba Balazs
/// \author Pat Scott
/// \date 2015 Jan-Apr
///
///  *********************************************

#ifdef BACKENDRENAME
  #define BACKENDNAME BACKENDRENAME
#else
  #define BACKENDNAME SUSY_HIT
#endif
#define VERSION 1.4
#define SAFE_VERSION 1_4

// Let's go.
LOAD_LIBRARY

// Can't do anything non-MSSM with SUSY-HIT
BE_ALLOW_MODELS(MSSM78atQ, MSSM78atMGUT)

// Functions
BE_FUNCTION(sdecay, void, (const int&), "sdecay_", "sdecay")     // Converted SUSY-HIT main routine
BE_FUNCTION(unlikely, double, (), "s_hit_unlikely_", "unlikely") // Wrapper for 'unlikely' double 

// Variables
BE_VARIABLE(susyhitin_type, susyhitin, "susyhitin_", "cb_susyhitin")
BE_VARIABLE(sd_leshouches1_type, sd_leshouches1, "sd_leshouches1_", "cb_sd_leshouches1")
BE_VARIABLE(sd_leshouches2_type, sd_leshouches2, "sd_leshouches2_", "cb_sd_leshouches2")
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

// Initialisation function (dependencies)
BE_INI_DEPENDENCY(MSSM_spectrum, const SMplusUV*)

// Initialisation function (definition)
BE_INI_FUNCTION
{
  // Scan-level initialisation
  static bool scan_level = true;
  if (scan_level)
  {
    // SUSY-HIT / HDecay inputs
    susyhitin->amsin = 0.19;                       // MSBAR(1)
    susyhitin->amcin = 1.4;                        // MC (pole or at what scale, in which scheme?)
    susyhitin->ammuonin = 0.105658389;             // MMUON (pole or at what scale, in which scheme?)
    susyhitin->alphin = 137.0359895;               // 1/ALPHA (at what scale, in which scheme?)
    susyhitin->gamwin = 2.08;                      // GAMW
    susyhitin->gamzin = 2.49;                      // GAMZ
    susyhitin->vusin = 0.2205;                     // VUS
    susyhitin->vcbin = 0.04;                       // VCB
    susyhitin->rvubin = 0.08;                      // VUB/VCB    

    // Zero all SLHA2 Q values
    //sd_leshouches2->qvalue(1:22) = 0.0

    // SLHA2 block MODSEL
    sd_leshouches2->imod(1) = 1;
    sd_leshouches2->imod(2) = 1;                   // model; 1, 1 = SUGRA.  6, x!=0  => flavour violating MSSM(prolly?).  Must be true if calling sdecay(1) later.  Must add a check for this.

    // SLHA2 block SMINPUTS
    //sd_leshouches2->smval(1:20) = 0;               // zeroing
    sd_leshouches2->smval(1) = 1.27934000E+02;     // alpha_em^-1(M_Z)^MSbar
    sd_leshouches2->smval(2) = 1.16639000E-05;     // G_F [GeV^-2]
    sd_leshouches2->smval(3) = 1.17200000E-01;     // alpha_S(M_Z)^MSbar
    sd_leshouches2->smval(4) = 9.11870000E+01;     // M_Z pole mass
    sd_leshouches2->smval(5) = 4.25000000E+00;     // mb(mb)^MSbar
    sd_leshouches2->smval(6) = 1.72500000E+02;     // mt pole mass
    sd_leshouches2->smval(7) = 1.77710000E+00;     // mtau pole mass

    // SLHA2 block EXTPAR
    //sd_leshouches2->extval(0:100) = unlikely();    // indicate undefined
    sd_leshouches2->extval(0) = 4.65777483E+02;    // EWSB scale          

    // SLHA2 block MASS
    //sd_leshouches2->massval(1:50) = 0.0            // zeroing
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
    sd_leshouches2->massval(34) = 4.87877839E+00;  // b pole mass calculated from mb(mb)_MSbar
    sd_leshouches2->massval(35) = unlikely();      // ~G

    // SLHA2 block NMIX

    // SLHA2 block UMIX

    // SLHA2 block VMIX

    // SLHA2 block STOPMIX

    // SLHA2 block SBOTMIX

    // SLHA2 block STAUMIX
   
    // SLHA2 block ALPHA
    
    // SLHA2 block HMIX
    sd_leshouches2->qvalue(1) = 4.65777483E+02;    // Q(GeV)
    //sd_leshouches2->hmixval(1:10) = unlikely();    // indicate undefined
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
    sd_leshouches2->qvalue(2) = 4.65777483E+02;    // Q(GeV)
    //sd_leshouches2->msoftval(1:100) = unlikely();  // indicate undefined
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

    sdecay(0); // Skip FV light stop decays
  }
  scan_level = false;
}
DONE

// Undefine macros to avoid conflict with other backends
#include "gambit/Backends/backend_undefs.hpp"

