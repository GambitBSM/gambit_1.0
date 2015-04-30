//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Function definitions of DecayBit.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2014 Aug
///  \author Csaba Balazs
///  \date 2015 Jan-Apr 
///
///  *********************************************

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/DecayBit/DecayBit_rollcall.hpp"

namespace Gambit
{

  namespace DecayBit
  {

    using namespace LogTags;

    /// \name DecayBit module functions
    /// @{

    void decayTest (double &result)
    {
      using namespace Pipes::decayTest;
      //  result = BEreq::cb_sd_top2body->brtopbw; 
      //  cout << "top 2 body Br's: " << BEreq::cb_sd_top2body->brtopbw << endl;
      result = BEreq::cb_sd_topwidth->toptot2; 
      cout << "top total width: " << BEreq::cb_sd_topwidth->toptot2 << endl;

    }                                                                           


    /// SM decays: W+
    void W_plus_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 2.08;                    
      result.positive_error = 4.0e-02;
      result.negative_error = 4.0e-02;
      result.set_BF(0.1071, 0.0016, "e+", "nu_e");              
      result.set_BF(0.1063, 0.0015, "mu+", "nu_mu");              
      result.set_BF(0.1138, 0.0021, "tau+", "nu_tau");              
    }

    /// SM decays: W-
    void W_minus_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 2.08;                    
      result.positive_error = 4.0e-02;
      result.negative_error = 4.0e-02;
      result.set_BF(0.1071, 0.0016, "e-", "nubar_e");              
      result.set_BF(0.1063, 0.0015, "mu-", "nubar_mu");              
      result.set_BF(0.1138, 0.0021, "tau-", "nubar_tau");              
    }

    /// SM decays: Z
    void Z_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 2.4952;                    
      result.positive_error = 2.3e-03;
      result.negative_error = 2.3e-03;
      result.set_BF(0.03363, 0.00004, "e+", "e-");              
      result.set_BF(0.03366, 0.00007, "mu+", "mu-");              
      result.set_BF(0.03370, 0.00008, "tau+", "tau-");              
      result.set_BF(0.1203, 0.0021, "c", "cbar");        
      result.set_BF(0.1512, 0.0005, "b", "bbar");        
    }

    /// SM decays: t
    void t_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 2.0;                    
      result.positive_error = 5.0e-01;
      result.negative_error = 5.0e-01;
      result.set_BF(0.91, 0.04, "W+", "b");              
    }

    /// SM decays: tbar
    void tbar_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 2.0;                    
      result.positive_error = 5.0e-01;
      result.negative_error = 5.0e-01;
      result.set_BF(0.91, 0.04, "W-", "bbar");              
    }

    /// SM decays: mu-
    void mu_minus_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 2.9959847e-19;                    
      result.positive_error = 3.0e-25;
      result.negative_error = 3.0e-25;
      result.set_BF(1.0, 0.0, "e-", "nubar_e", "nu_mu");              
    }

    /// SM decays: mu+
    void mu_plus_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 2.9959847e-19;                    
      result.positive_error = 3.0e-25;
      result.negative_error = 3.0e-25;
      result.set_BF(1.0, 0.0, "e+", "nu_e", "nubar_mu");              
    }

    /// SM decays: tau-
    void tau_minus_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 2.267E-12;                    
      result.positive_error = 4.0e-15;
      result.negative_error = 4.0e-15;
      result.set_BF(0.1741, 0.0004, "mu-", "nubar_mu", "nu_tau");              
      result.set_BF(0.1783, 0.0004, "e-", "nubar_e", "nu_tau");              
      result.set_BF(0.1083, 0.0006, "pi-", "nu_tau");              
      result.set_BF(0.2552, 0.0009, "pi-", "pi0", "nu_tau");              
      result.set_BF(0.0930, 0.0011, "pi-", "pi0", "pi0", "nu_tau");              
      result.set_BF(0.0105, 0.0007, "pi-", "pi0", "pi0", "pi0", "nu_tau");              
      result.set_BF(0.0931, 0.0006, "pi-", "pi+", "pi-", "nu_tau");              
      result.set_BF(0.0462, 0.0006, "pi-", "pi+", "pi-", "pi0", "nu_tau");              
    }

    /// SM decays: tau+
    void tau_plus_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 2.267E-12;                    
      result.positive_error = 4.0e-15;
      result.negative_error = 4.0e-15;
      result.set_BF(0.1741, 0.0004, "mu+", "nu_mu", "nubar_tau");              
      result.set_BF(0.1783, 0.0004, "e+", "nu_e", "nubar_tau");              
      result.set_BF(0.1083, 0.0006, "pi+", "nubar_tau");              
      result.set_BF(0.2552, 0.0009, "pi+", "pi0", "nubar_tau");              
      result.set_BF(0.0930, 0.0011, "pi+", "pi0", "pi0", "nubar_tau");              
      result.set_BF(0.0105, 0.0007, "pi+", "pi0", "pi0", "pi0", "nubar_tau");              
      result.set_BF(0.0931, 0.0006, "pi+", "pi+", "pi-", "nubar_tau");              
      result.set_BF(0.0462, 0.0006, "pi+", "pi+", "pi-", "pi0", "nubar_tau");              
    }

    /// SM decays: pi0
    void pi_0_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 7.73e-09;                    
      result.positive_error = 1.7e-10;
      result.negative_error = 1.7e-10;
      result.set_BF(0.98823, 0.00034, "gamma", "gamma");              
      result.set_BF(0.01174, 0.00035, "e+", "e-", "gamma");              
      result.set_BF(3.34e-5, 0.16e-5, "e+", "e-", "e+", "e-");              
      result.set_BF(6.46e-8, 0.33e-8, "e+", "e-");              
    }

    /// SM decays: pi+
    void pi_plus_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 2.5284e-17;                    
      result.positive_error = 5.0e-21;
      result.negative_error = 5.0e-21;
      result.set_BF(0.9998770, 0.0000004, "mu+", "nu_mu");              
      result.set_BF(1.230e-4, 0.004e-4, "e+", "nu_e");              
    }

    /// SM decays: pi-
    void pi_minus_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 2.5284e-17;                    
      result.positive_error = 5.0e-21;
      result.negative_error = 5.0e-21;
      result.set_BF(0.9998770, 0.0000004, "mu-", "nubar_mu");              
      result.set_BF(1.230e-4, 0.004e-4, "e-", "nubar_e");              
    }

    /// SM decays: eta
    void eta_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 1.31e-06;                    
      result.positive_error = 5.0e-08;
      result.negative_error = 5.0e-08;
      //See PDG meson sheet in DecayBit/data/PDG if you want BFs               
    }

    /// SM decays: rho0
    void rho_0_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 1.491e-01;                    
      result.positive_error = 8.0e-04;
      result.negative_error = 8.0e-04;
      //See PDG meson sheet in DecayBit/data/PDG if you want BFs               
    }

    /// SM decays: rho+
    void rho_plus_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 1.491e-01;                    
      result.positive_error = 8.0e-04;
      result.negative_error = 8.0e-04;
      //See PDG meson sheet in DecayBit/data/PDG if you want BFs               
    }

    /// SM decays: rho-
    void rho_minus_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 1.491e-01;                    
      result.positive_error = 8.0e-04;
      result.negative_error = 8.0e-04;
      //See PDG meson sheet in DecayBit/data/PDG if you want BFs               
    }

    /// SM decays: omega
    void omega_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 8.49e-03;                    
      result.positive_error = 8.0e-05;
      result.negative_error = 8.0e-05;
      //See PDG meson sheet in DecayBit/data/PDG if you want BFs               
    }

     ///SM decays: Higgs
    void SMHiggs_decays (DecayTable::Entry& result) 
    {
      // Remember that result does not arrive pristine, but contains the result of the last point.  Make sure to overwrite it fully!
      // This is just an example function that returns junk numbers at the moment.  It should be finished off
      // in order to use SUSYHIT properly.  When it works, a dependency on it added to the all_decays function.
      using namespace Pipes::SMHiggs_decays;
      const SubSpectrum* spec = *Dep::SM_spectrum;
      const SubSpectrum* mssm = *Dep::MSSM_spectrum;
      double m_H = mssm->phys.get_Pole_Mass("h0_1"); // Retrieve the masses from the spectrum object.
      double m_b = spec->phys.get_Pole_Mass("b");
      double m_t = spec->phys.get_Pole_Mass("t");
      double m_W = spec->phys.get_Pole_Mass("W+");
      double m_Z = spec->phys.get_Pole_Mass("Z0");
      double totalwidth = 5.0; // In GeV -- this should be calculated or retrieved from a backend
      double BF_err = 0.01;// Error on the branching fractions
      double BF_bb = 0.37; // In reality, this should be obtained from a backend, using m_b, m_H, etc
      double BF_tt = 0.10; // In reality, this should be obtained from a backend, using m_t, m_H, etc
      double BF_WW = 0.35; // In reality, this should be obtained from a backend, using m_W, m_H, etc
      double BF_WWZ = 0.18;// In reality, this should be obtained from a backend, using m_W, m_H, m_Z, etc
      cout << "H,b,t,W,Z masses: " << m_H << " " << m_b << " " << m_t <<  " " << m_W << " " << m_Z << endl;
      result.width_in_GeV = totalwidth;       // Alternatively, you could make a blank one with result = DecayTable::Entry(totalwidth).
      result.set_BF(BF_bb, BF_err, "b", "bbar");      // Set the BFs for each final state.
      result.set_BF(BF_tt, BF_err, "t", "tbar");
      result.set_BF(BF_WW, BF_err, "W+", "W-");
      result.set_BF(BF_WWZ, BF_err, "W+", "W-", "Z0");
    }

    /// MSSM decays: h0_1
    void MSSM_h0_1_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::MSSM_h0_1_decays;
      result.width_in_GeV = BEreq::cb_widthhl_hdec->hlwdth;
      result.set_BF(BEreq::cb_widthhl_hdec->hlbrb, 0.0, "b", "bbar");
      result.set_BF(BEreq::cb_widthhl_hdec->hlbrl, 0.0, "tau+", "tau-");
      result.set_BF(BEreq::cb_widthhl_hdec->hlbrm, 0.0, "mu+", "mu-");
      result.set_BF(BEreq::cb_widthhl_hdec->hlbrs, 0.0, "s", "sbar");
      result.set_BF(BEreq::cb_widthhl_hdec->hlbrc, 0.0, "c", "cbar");
      result.set_BF(BEreq::cb_widthhl_hdec->hlbrt, 0.0, "t", "tbar");
      result.set_BF(BEreq::cb_widthhl_hdec->hlbrg, 0.0, "g", "g");
      result.set_BF(BEreq::cb_widthhl_hdec->hlbrga, 0.0, "gamma", "gamma");
      result.set_BF(BEreq::cb_widthhl_hdec->hlbrzga, 0.0, "gamma", "Z0");
      result.set_BF(BEreq::cb_widthhl_hdec->hlbrw, 0.0, "W+", "W-");
      result.set_BF(BEreq::cb_widthhl_hdec->hlbrz, 0.0, "Z0", "Z0");
      result.set_BF(BEreq::cb_wisusy_hdec->hlbrsc(1,1), 0.0, "~chi+_1", "~chi-_1");
      result.set_BF(BEreq::cb_wisusy_hdec->hlbrsc(2,2), 0.0, "~chi+_2", "~chi-_2");
      result.set_BF(BEreq::cb_wisusy_hdec->hlbrsc(1,2), 0.0, "~chi+_1", "~chi-_2");
      result.set_BF(BEreq::cb_wisusy_hdec->hlbrsc(2,1), 0.0, "~chi+_2", "~chi-_1");
      result.set_BF(BEreq::cb_wisusy_hdec->hlbrsn(1,1), 0.0, "~chi0_1", "~chi0_1");
      result.set_BF(BEreq::cb_wisusy_hdec->hlbrsn(2,2), 0.0, "~chi0_2", "~chi0_2");
      result.set_BF(BEreq::cb_wisusy_hdec->hlbrsn(3,3), 0.0, "~chi0_3", "~chi0_3");
      result.set_BF(BEreq::cb_wisusy_hdec->hlbrsn(4,4), 0.0, "~chi0_4", "~chi0_4");
      result.set_BF(BEreq::cb_wisusy_hdec->hlbrsn(1,2)*2.0, 0.0, "~chi0_1", "~chi0_2");
      result.set_BF(BEreq::cb_wisusy_hdec->hlbrsn(1,3)*2.0, 0.0, "~chi0_1", "~chi0_3");
      result.set_BF(BEreq::cb_wisusy_hdec->hlbrsn(1,4)*2.0, 0.0, "~chi0_1", "~chi0_4");
      result.set_BF(BEreq::cb_wisusy_hdec->hlbrsn(2,3)*2.0, 0.0, "~chi0_2", "~chi0_3");
      result.set_BF(BEreq::cb_wisusy_hdec->hlbrsn(2,4)*2.0, 0.0, "~chi0_2", "~chi0_4");
      result.set_BF(BEreq::cb_wisusy_hdec->hlbrsn(3,4)*2.0, 0.0, "~chi0_3", "~chi0_4");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlsqul/2.0, 0.0, "~u_L", "~ubar_L");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlsqur/2.0, 0.0, "~u_R", "~ubar_R");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlsqul/2.0, 0.0, "~c_L", "~cbar_L");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlsqur/2.0, 0.0, "~c_R", "~cbar_R");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlst(1,1), 0.0, "~t_L", "~ubar_5");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlst(2,2), 0.0, "~t_R", "~ubar_6");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlst(1,2), 0.0, "~t_L", "~ubar_6");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlst(2,1), 0.0, "~t_R", "~ubar_5");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlsqdl/2.0, 0.0, "~d_L", "~dbar_L");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlsqdr/2.0, 0.0, "~d_R", "~dbar_R");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlsqdl/2.0, 0.0, "~s_L", "~sbar_L");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlsqdr/2.0, 0.0, "~s_R", "~sbar_R");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlsb(1,1), 0.0, "~b_L", "~dbar_5");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlsb(2,2), 0.0, "~b_R", "~dbar_6");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlsb(1,2), 0.0, "~b_L", "~dbar_6");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlsb(2,1), 0.0, "~b_R", "~dbar_5");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlslel/2.0, 0.0, "~e-_L", "~e+_L");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlsler/2.0, 0.0, "~e-_R", "~e+_R");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlslel/2.0, 0.0, "~mu-_L", "~mu+_L");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlsler/2.0, 0.0, "~mu-_R", "~mu+_R");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlstau(1,1), 0.0, "~tau-_L", "~e+_5");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlstau(2,2), 0.0, "~tau-_R", "~e+_6");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlstau(1,2), 0.0, "~tau-_L", "~e+_6");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlstau(2,1), 0.0, "~tau-_R", "~e+_5");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlslnl/3.0, 0.0, "~nu_e", "~nubar_e");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlslnl/3.0, 0.0, "~nu_mu", "~nubar_mu");
      // result.set_BF(BEreq::cb_wisfer_hdec->bhlslnl/3.0, 0.0, "~nu_tau", "~nubar_tau");
      // cout << "h0_1 total width: " << result.width_in_GeV << endl;
      // cout << "BR(h0_1 -> gamma gamma): " << BEreq::cb_widthhl_hdec->hlbrga << endl;
      // cout << "BR(h0_1 -> ~tau-_L ~e+_5): " << BEreq::cb_wisfer_hdec->bhlstau(1,1) << endl;
    }
    	
    /// Collect all the DecayTable entries into an actual DecayTable 
    void all_decays (DecayTable &result) 
    {
      using namespace Pipes::all_decays;
      DecayTable decays = DecayTable();             // Start with a blank DecayTable.

      decays("h0_1") = *Dep::Higgs_decay_rates;     // Add the Higgs decays.
      decays("Z0") = *Dep::W_minus_decay_rates;     // Add the Z decays
      decays("W+") = *Dep::W_plus_decay_rates;      // Add the W decays for W+.
      decays("W-") = *Dep::W_minus_decay_rates;     // Add the W decays for W-

      decays("t") = *Dep::mu_plus_decay_rates;      // Add the top decays for t.
      decays("tbar") = *Dep::mu_minus_decay_rates;  // Add the top decays for tbar
      decays("u_3") = decays("t");                  // Duplicate for mass-ordered quarks
      decays("ubar_3") = decays("tbar");            // Duplicate for mass-ordered quarks

      decays("mu+") = *Dep::mu_plus_decay_rates;    // Add the muon decays for mu+.
      decays("mu-") = *Dep::mu_minus_decay_rates;   // Add the muon decays for mu-
      decays("e+_2") = decays("mu+");               // Duplicate for mass-ordered leptons
      decays("e-_2") = decays("mu-");               // Duplicate for mass-ordered leptons

      decays("tau+") = *Dep::tau_plus_decay_rates;  // Add the tauon decays for tau+.
      decays("tau-") = *Dep::tau_minus_decay_rates; // Do the same for tau-, assuming no CP asymmetry.
      decays("e+_3") = decays("tau+");              // Duplicate for mass-ordered leptons
      decays("e-_3") = decays("tau-");              // Duplicate for mass-ordered leptons

      decays("pi0") = *Dep::pi_0_decay_rates;       // Add the neutral pion decays.
      decays("pi+") = *Dep::pi_plus_decay_rates;    // Add the pi+ decays.
      decays("pi-") = *Dep::pi_minus_decay_rates;   // Add the pi- decays.
      decays("eta") = *Dep::eta_decay_rates;        // Add the eta meson decays.
      decays("rho0") = *Dep::rho_0_decay_rates;     // Add the neutral rho meson decays.
      decays("rho+") = *Dep::rho_plus_decay_rates;  // Add the rho+ decays.
      decays("rho-") = *Dep::rho_minus_decay_rates; // Add the rho- decays.
      decays("omega") = *Dep::omega_decay_rates;    // Add the omega meson decays.
      
      // MSSM-specific
      // decays("h0_2") = *Dep::h0_2_decay_rates;       // Add the h0_2 decays.
      // decays("A0") = *Dep::A0_decay_rates;           // Add the A0 decays.
      // decays("H+") = *Dep::Hplus_decay_rates;        // Add the H+ decays.
      // 
      // decays("~g") = *Dep::gluino_decay_rates;       // Add the gluino decays.
      // 
      // decays("~u_1") = *Dep::stop_1_decay_rates;     // Add the ~t_1 decays.
      // decays("~u_2") = *Dep::stop_2_decay_rates;     // Add the ~t_2 decays.
      // decays("~d_1") = *Dep::sbottom_1_decay_rates;  // Add the ~b_1 decays.
      // decays("~d_2") = *Dep::sbottom_2_decay_rates;  // Add the ~b_2 decays.
      // decays("~u_L") = *Dep::sup_L_decay_rates;      // Add the ~u_L decays.
      // decays("~u_R") = *Dep::sup_R_decay_rates;      // Add the ~u_R decays.
      // decays("~d_L") = *Dep::sdown_L_decay_rates;    // Add the ~d_L decays.
      // decays("~d_R") = *Dep::sdown_R_decay_rates;    // Add the ~d_R decays.
      // decays("~c_L") = *Dep::scharm_L_decay_rates;   // Add the ~c_L decays.
      // decays("~c_R") = *Dep::scharm_R_decay_rates;   // Add the ~c_R decays.
      // decays("~s_L") = *Dep::sstrange_L_decay_rates; // Add the ~s_L decays.
      // decays("~s_R") = *Dep::sstrange_R_decay_rates; // Add the ~s_R decays.

      // decays("~e-_L") = *Dep::selectron_L_decay_rates;  // Add the ~e-_L decays.
      // decays("~e-_R") = *Dep::selectron_R_decay_rates;  // Add the ~e-_R decays.
      // decays("~mu-_L") = *Dep::smuon_L_decay_rates;     // Add the ~mu-_L decays.
      // decays("~mu-_R") = *Dep::smuon_R_decay_rates;     // Add the ~mu-_R decays.
      // decays("~tau-_1") = *Dep::stau_1_decay_rates;     // Add the ~tau_1 decays.
      // decays("~tau-_2") = *Dep::stau_2_decay_rates;     // Add the ~tau_2 decays.
      // decays("~nu_e") = *Dep::snu_e_decay_rates;        // Add the ~nu_e decays.
      // decays("~nu_mu") = *Dep::snu_mu_decay_rates;      // Add the ~nu_mu decays.
      // decays("~nu_tau") = *Dep::snu_tau_decay_rates;    // Add the ~nu_tau decays.
         
      // decays("~chi+_1") = *Dep::chargino_1_decay_rates;   // Add the ~chi+_1 decays.
      // decays("~chi+_2") = *Dep::chargino_2_decay_rates;   // Add the ~chi+_2 decays.
      // decays("~chi0_1") = *Dep::neutralino_1_decay_rates; // Add the ~chi0_1 decays.
      // decays("~chi0_2") = *Dep::neutralino_2_decay_rates; // Add the ~chi0_2 decays.
      // decays("~chi0_3") = *Dep::neutralino_3_decay_rates; // Add the ~chi0_3 decays.
      // decays("~chi0_4") = *Dep::neutralino_4_decay_rates; // Add the ~chi0_4 decays.

      cout << "BF for tau+ -> pi+ nubar_tau: " << decays("tau+").BF("pi+", "nubar_tau") << endl;
      result = decays;
    }

    /// @}

  }

}
