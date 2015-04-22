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

    /// SM decays: Higgs
    void SMHiggs_decays (DecayTable::Entry& result) 
    {
      // Remember that result does not arrive pristine, but contains the result of the last point.  Make sure to overwrite it fully!
      // This is just an example function that returns junk numbers at the moment.  It should be finished off
      // in order to use SUSYHIT properly.  When it works, a dependency on it added to the all_decays function.
      using namespace Pipes::SMHiggs_decays;
      const Spectrum* spec = *Dep::SM_spectrum;
      double m_H = spec->phys.get_Pole_Mass("h0_1"); // Retrieve the masses from the spectrum object.
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
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsqul/2.0, 0.0, "~u_L", "~ubar_L");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsqur/2.0, 0.0, "~u_R", "~ubar_R");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsqul/2.0, 0.0, "~c_L", "~cbar_L");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsqur/2.0, 0.0, "~c_R", "~cbar_R");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlst(1,1), 0.0, "~t_L", "~ubar_5");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlst(2,2), 0.0, "~t_R", "~ubar_6");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlst(1,2), 0.0, "~t_L", "~ubar_6");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlst(2,1), 0.0, "~t_R", "~ubar_5");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsqdl/2.0, 0.0, "~d_L", "~dbar_L");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsqdr/2.0, 0.0, "~d_R", "~dbar_R");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsqdl/2.0, 0.0, "~s_L", "~sbar_L");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsqdr/2.0, 0.0, "~s_R", "~sbar_R");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsb(1,1), 0.0, "~b_L", "~dbar_5");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsb(2,2), 0.0, "~b_R", "~dbar_6");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsb(1,2), 0.0, "~b_L", "~dbar_6");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsb(2,1), 0.0, "~b_R", "~dbar_5");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlslel/2.0, 0.0, "~e-_L", "~e+_L");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsler/2.0, 0.0, "~e-_R", "~e+_R");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlslel/2.0, 0.0, "~mu-_L", "~mu+_L");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsler/2.0, 0.0, "~mu-_R", "~mu+_R");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlstau(1,1), 0.0, "~tau-_L", "~e+_5");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlstau(2,2), 0.0, "~tau-_R", "~e+_6");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlstau(1,2), 0.0, "~tau-_L", "~e+_6");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlstau(2,1), 0.0, "~tau-_R", "~e+_5");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlslnl/3.0, 0.0, "~nu_e", "~nubar_e");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlslnl/3.0, 0.0, "~nu_mu", "~nubar_mu");
      result.set_BF(BEreq::cb_wisfer_hdec->bhlslnl/3.0, 0.0, "~nu_tau", "~nubar_tau");
      // cout << "h0_1 total width: " << result.width_in_GeV << endl;
      // cout << "BR(h0_1 -> gamma gamma): " << BEreq::cb_widthhl_hdec->hlbrga << endl;
      // cout << "BR(h0_1 -> ~tau-_L ~e+_5): " << BEreq::cb_wisfer_hdec->bhlstau(1,1) << endl;
    }

    /// MSSM decays: h0_2
    void h0_2_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::h0_2_decays;
      result.width_in_GeV = BEreq::cb_widthhh_hdec->hhwdth;
      result.set_BF(BEreq::cb_widthhh_hdec->hhbrb, 0.0, "b", "bbar");
      result.set_BF(BEreq::cb_widthhh_hdec->hhbrl, 0.0, "tau+", "tau-");
      result.set_BF(BEreq::cb_widthhh_hdec->hhbrm, 0.0, "mu+", "mu-");
      result.set_BF(BEreq::cb_widthhh_hdec->hhbrs, 0.0, "s", "sbar");
      result.set_BF(BEreq::cb_widthhh_hdec->hhbrc, 0.0, "c", "cbar");
      result.set_BF(BEreq::cb_widthhh_hdec->hhbrt, 0.0, "t", "tbar");
      result.set_BF(BEreq::cb_widthhh_hdec->hhbrg, 0.0, "g", "g");
      result.set_BF(BEreq::cb_widthhh_hdec->hhbrga, 0.0, "gamma", "gamma");
      result.set_BF(BEreq::cb_widthhh_hdec->hhbrzga, 0.0, "Z0", "gamma");
      result.set_BF(BEreq::cb_widthhh_hdec->hhbrw, 0.0, "W+", "W-");
      result.set_BF(BEreq::cb_widthhh_hdec->hhbrz, 0.0, "Z0", "Z0");
      result.set_BF(BEreq::cb_widthhh_hdec->hhbrh, 0.0, "h0_1", "h0_1");
      result.set_BF(BEreq::cb_widthhh_hdec->hhbra, 0.0, "A0", "A0");
      result.set_BF(BEreq::cb_widthhh_hdec->hhbraz, 0.0, "Z0", "A0");
      result.set_BF(BEreq::cb_widthhh_hdec->hhbrhw/2.0, 0.0, "W+", "H-");
      result.set_BF(BEreq::cb_widthhh_hdec->hhbrhw/2.0, 0.0, "W-", "H+");
      result.set_BF(BEreq::cb_wisusy_hdec->hhbrsc(1,1), 0.0, "~chi+_1", "~chi-_1");
      result.set_BF(BEreq::cb_wisusy_hdec->hhbrsc(2,2), 0.0, "~chi+_2", "~chi-_2");
      result.set_BF(BEreq::cb_wisusy_hdec->hhbrsc(1,2), 0.0, "~chi+_1", "~chi-_2");
      result.set_BF(BEreq::cb_wisusy_hdec->hhbrsc(2,1), 0.0, "~chi+_2", "~chi-_1");
      result.set_BF(BEreq::cb_wisusy_hdec->hhbrsn(1,1), 0.0, "~chi0_1", "~chi0_1");
      result.set_BF(BEreq::cb_wisusy_hdec->hhbrsn(2,2), 0.0, "~chi0_2", "~chi0_2");
      result.set_BF(BEreq::cb_wisusy_hdec->hhbrsn(3,3), 0.0, "~chi0_3", "~chi0_3");
      result.set_BF(BEreq::cb_wisusy_hdec->hhbrsn(4,4), 0.0, "~chi0_4", "~chi0_4");
      result.set_BF(BEreq::cb_wisusy_hdec->hhbrsn(1,2)*2.0, 0.0, "~chi0_1", "~chi0_2");
      result.set_BF(BEreq::cb_wisusy_hdec->hhbrsn(1,3)*2.0, 0.0, "~chi0_1", "~chi0_3");
      result.set_BF(BEreq::cb_wisusy_hdec->hhbrsn(1,4)*2.0, 0.0, "~chi0_1", "~chi0_4");
      result.set_BF(BEreq::cb_wisusy_hdec->hhbrsn(2,3)*2.0, 0.0, "~chi0_2", "~chi0_3");
      result.set_BF(BEreq::cb_wisusy_hdec->hhbrsn(2,4)*2.0, 0.0, "~chi0_2", "~chi0_4");
      result.set_BF(BEreq::cb_wisusy_hdec->hhbrsn(3,4)*2.0, 0.0, "~chi0_3", "~chi0_4");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsqul/2.0, 0.0, "~u_L", "~ubar_L");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsqur/2.0, 0.0, "~u_R", "~ubar_R");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsqul/2.0, 0.0, "~c_L", "~cbar_L");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsqur/2.0, 0.0, "~c_R", "~cbar_R");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhst(1,1), 0.0, "~t_L", "~ubar_5");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhst(2,2), 0.0, "~t_R", "~ubar_6");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhst(1,2), 0.0, "~t_L", "~ubar_6");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhst(2,1), 0.0, "~t_R", "~ubar_5");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsqdl/2.0, 0.0, "~d_L", "~dbar_L");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsqdr/2.0, 0.0, "~d_R", "~dbar_R");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsqdl/2.0, 0.0, "~s_L", "~sbar_L");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsqdr/2.0, 0.0, "~s_R", "~sbar_R");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsb(1,1), 0.0, "~b_L", "~dbar_5");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsb(2,2), 0.0, "~b_R", "~dbar_6");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsb(1,2), 0.0, "~b_L", "~dbar_6");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsb(2,1), 0.0, "~b_R", "~dbar_5");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhslel/2.0, 0.0, "~e-_L", "~e+_L");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsler/2.0, 0.0, "~e-_R", "~e+_R");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhslel/2.0, 0.0, "~mu-_L", "~mu+_L");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsler/2.0, 0.0, "~mu-_R", "~mu+_R");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhstau(1,1), 0.0, "~tau-_L", "~e+_5");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhstau(2,2), 0.0, "~tau-_R", "~e+_6");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhstau(1,2), 0.0, "~tau-_L", "~e+_6");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhstau(2,1), 0.0, "~tau-_R", "~e+_5");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhslnl/3.0, 0.0, "~nu_e", "~nubar_e");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhslnl/3.0, 0.0, "~nu_mu", "~nubar_mu");
      result.set_BF(BEreq::cb_wisfer_hdec->bhhslnl/3.0, 0.0, "~nu_tau", "~nubar_tau");
      // cout << "h0_2 total width: " << result.width_in_GeV << endl;
      // cout << "BR(h0_2 -> ~chi0_1 ~chi0_2): " << BEreq::cb_wisusy_hdec->hhbrsn(1,2)*2.0 << endl;
    }

    /// MSSM decays: A0
    void A0_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::A0_decays;
      result.width_in_GeV = BEreq::cb_widtha_hdec->awdth;
      result.set_BF(BEreq::cb_widtha_hdec->abrb, 0.0, "b", "bbar");
      result.set_BF(BEreq::cb_widtha_hdec->abrl, 0.0, "tau+", "tau-");
      result.set_BF(BEreq::cb_widtha_hdec->abrm, 0.0, "mu+", "mu-");
      result.set_BF(BEreq::cb_widtha_hdec->abrs, 0.0, "s", "sbar");
      result.set_BF(BEreq::cb_widtha_hdec->abrc, 0.0, "c", "cbar");
      result.set_BF(BEreq::cb_widtha_hdec->abrt, 0.0, "t", "tbar");
      result.set_BF(BEreq::cb_widtha_hdec->abrg, 0.0, "g", "g");
      result.set_BF(BEreq::cb_widtha_hdec->abrga, 0.0, "gamma", "gamma");
      result.set_BF(BEreq::cb_widtha_hdec->abrzga, 0.0, "Z0", "gamma");
      result.set_BF(BEreq::cb_widtha_hdec->abrz, 0.0, "Z0", "h0_1");
      result.set_BF(BEreq::cb_wisusy_hdec->habrsc(1,1), 0.0, "~chi+_1", "~chi-_1");
      result.set_BF(BEreq::cb_wisusy_hdec->habrsc(2,2), 0.0, "~chi+_2", "~chi-_2");
      result.set_BF(BEreq::cb_wisusy_hdec->habrsc(1,2), 0.0, "~chi+_1", "~chi-_2");
      result.set_BF(BEreq::cb_wisusy_hdec->habrsc(2,1), 0.0, "~chi+_2", "~chi-_1");
      result.set_BF(BEreq::cb_wisusy_hdec->habrsn(1,1), 0.0, "~chi0_1", "~chi0_1");
      result.set_BF(BEreq::cb_wisusy_hdec->habrsn(2,2), 0.0, "~chi0_2", "~chi0_2");
      result.set_BF(BEreq::cb_wisusy_hdec->habrsn(3,3), 0.0, "~chi0_3", "~chi0_3");
      result.set_BF(BEreq::cb_wisusy_hdec->habrsn(4,4), 0.0, "~chi0_4", "~chi0_4");
      result.set_BF(BEreq::cb_wisusy_hdec->habrsn(1,2)*2.0, 0.0, "~chi0_1", "~chi0_2");
      result.set_BF(BEreq::cb_wisusy_hdec->habrsn(1,3)*2.0, 0.0, "~chi0_1", "~chi0_3");
      result.set_BF(BEreq::cb_wisusy_hdec->habrsn(1,4)*2.0, 0.0, "~chi0_1", "~chi0_4");
      result.set_BF(BEreq::cb_wisusy_hdec->habrsn(2,3)*2.0, 0.0, "~chi0_2", "~chi0_3");
      result.set_BF(BEreq::cb_wisusy_hdec->habrsn(2,4)*2.0, 0.0, "~chi0_2", "~chi0_4");
      result.set_BF(BEreq::cb_wisusy_hdec->habrsn(3,4)*2.0, 0.0, "~chi0_3", "~chi0_4");
      result.set_BF(BEreq::cb_wisusy_hdec->habrst/2.0, 0.0, "~t_L", "~ubar_6");
      result.set_BF(BEreq::cb_wisusy_hdec->habrst/2.0, 0.0, "~ubar_5", "~t_R");
      result.set_BF(BEreq::cb_wisusy_hdec->habrsb/2.0, 0.0, "~b_L", "~dbar_6");
      result.set_BF(BEreq::cb_wisusy_hdec->habrsb/2.0, 0.0, "~dbar_5", "~b_R");
      result.set_BF(BEreq::cb_wisusy_hdec->habrsl/2.0, 0.0, "~tau-_L", "~e+_6");
      result.set_BF(BEreq::cb_wisusy_hdec->habrsl/2.0, 0.0, "~e+_5", "~tau-_R");
      // cout << "A0 total width: " << result.width_in_GeV << endl;
    }

    /// MSSM decays: H+
    void Hplus_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::Hplus_decays;
      result.width_in_GeV = BEreq::cb_widthhc_hdec->hcwdth;
      result.set_BF(BEreq::cb_widthhc_hdec->hcbrb, 0.0, "c", "bbar");
      result.set_BF(BEreq::cb_widthhc_hdec->hcbrl, 0.0, "tau+", "nu_tau");
      result.set_BF(BEreq::cb_widthhc_hdec->hcbrm, 0.0, "mu+", "nu_mu");
      result.set_BF(BEreq::cb_widthhc_hdec->hcbrbu, 0.0, "u", "bbar");
      result.set_BF(BEreq::cb_widthhc_hdec->hcbrs, 0.0, "u", "sbar");
      result.set_BF(BEreq::cb_widthhc_hdec->hcbrc, 0.0, "c", "sbar");
      result.set_BF(BEreq::cb_widthhc_hdec->hcbrt, 0.0, "t", "bbar");
      result.set_BF(BEreq::cb_widthhc_hdec->hcbrw, 0.0, "W+", "h0_1");
      result.set_BF(BEreq::cb_widthhc_hdec->hcbra, 0.0, "W+", "A0");
      result.set_BF(BEreq::cb_wisusy_hdec->hcbrsu(1,1), 0.0, "~chi+_1", "~chi0_1");
      result.set_BF(BEreq::cb_wisusy_hdec->hcbrsu(1,2), 0.0, "~chi+_1", "~chi0_2");
      result.set_BF(BEreq::cb_wisusy_hdec->hcbrsu(1,3), 0.0, "~chi+_1", "~chi0_3");
      result.set_BF(BEreq::cb_wisusy_hdec->hcbrsu(1,4), 0.0, "~chi+_1", "~chi0_4");
      result.set_BF(BEreq::cb_wisusy_hdec->hcbrsu(2,1), 0.0, "~chi+_2", "~chi0_1");
      result.set_BF(BEreq::cb_wisusy_hdec->hcbrsu(2,2), 0.0, "~chi+_2", "~chi0_2");
      result.set_BF(BEreq::cb_wisusy_hdec->hcbrsu(2,3), 0.0, "~chi+_2", "~chi0_3");
      result.set_BF(BEreq::cb_wisusy_hdec->hcbrsu(2,4), 0.0, "~chi+_2", "~chi0_4");
      result.set_BF(BEreq::cb_wisfer_hdec->bhcsl00/2.0, 0.0, "~e+_L", "~nu_e");
      result.set_BF(BEreq::cb_wisfer_hdec->bhcsl00/2.0, 0.0, "~mu+_L", "~nu_mu");
      result.set_BF(BEreq::cb_wisfer_hdec->bhcsl11, 0.0, "~e+_5", "~nu_tau");
      result.set_BF(BEreq::cb_wisfer_hdec->bhcsl21, 0.0, "~e+_6", "~nu_tau");
      result.set_BF(BEreq::cb_wisusy_hdec->hcbrsq/2.0, 0.0, "~u_L", "~dbar_L");
      result.set_BF(BEreq::cb_wisusy_hdec->hcbrsq/2.0, 0.0, "~c_L", "~sbar_L");
      result.set_BF(BEreq::cb_wisusy_hdec->hcbrstb(1,1), 0.0, "~t_L", "~dbar_5");
      result.set_BF(BEreq::cb_wisusy_hdec->hcbrstb(2,2), 0.0, "~t_R", "~dbar_6");
      result.set_BF(BEreq::cb_wisusy_hdec->hcbrstb(1,2), 0.0, "~t_L", "~dbar_6");
      result.set_BF(BEreq::cb_wisusy_hdec->hcbrstb(2,1), 0.0, "~t_R", "~dbar_5");
      // cout << "H+ total width: " << result.width_in_GeV << endl;
    }

    /// MSSM decays: ~g
    void gluino_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::gluino_decays;
      result.width_in_GeV = BEreq::cb_sd_gluiwidth->gluitot;
      result.set_BF(BEreq::cb_sd_glui2body->brgsdownl, 0.0, "~d_L", "dbar");
      result.set_BF(BEreq::cb_sd_glui2body->brgsdownl, 0.0, "~dbar_L", "d");
      result.set_BF(BEreq::cb_sd_glui2body->brgsdownr, 0.0, "~d_R", "dbar");
      result.set_BF(BEreq::cb_sd_glui2body->brgsdownr, 0.0, "~dbar_R", "d");
      result.set_BF(BEreq::cb_sd_glui2body->brgsupl, 0.0, "~u_L", "ubar");
      result.set_BF(BEreq::cb_sd_glui2body->brgsupl, 0.0, "~ubar_L", "u");
      result.set_BF(BEreq::cb_sd_glui2body->brgsupr, 0.0, "~u_R", "ubar");
      result.set_BF(BEreq::cb_sd_glui2body->brgsupr, 0.0, "~ubar_R", "u");
      result.set_BF(BEreq::cb_sd_glui2body->brgsdownl, 0.0, "~s_L", "sbar");
      result.set_BF(BEreq::cb_sd_glui2body->brgsdownl, 0.0, "~sbar_L", "s");
      result.set_BF(BEreq::cb_sd_glui2body->brgsdownr, 0.0, "~s_R", "sbar");
      result.set_BF(BEreq::cb_sd_glui2body->brgsdownr, 0.0, "~sbar_R", "s");
      result.set_BF(BEreq::cb_sd_glui2body->brgsupl, 0.0, "~c_L", "cbar");
      result.set_BF(BEreq::cb_sd_glui2body->brgsupl, 0.0, "~cbar_L", "c");
      result.set_BF(BEreq::cb_sd_glui2body->brgsupr, 0.0, "~c_R", "cbar");
      result.set_BF(BEreq::cb_sd_glui2body->brgsupr, 0.0, "~cbar_R", "c");
      result.set_BF(BEreq::cb_sd_glui2body->brgsb1, 0.0, "~b_L", "bbar");
      result.set_BF(BEreq::cb_sd_glui2body->brgsb1, 0.0, "~dbar_5", "b");
      result.set_BF(BEreq::cb_sd_glui2body->brgsb2, 0.0, "~b_R", "bbar");
      result.set_BF(BEreq::cb_sd_glui2body->brgsb2, 0.0, "~dbar_6", "b");
      result.set_BF(BEreq::cb_sd_glui2body->brgst1, 0.0, "~t_L", "tbar");
      result.set_BF(BEreq::cb_sd_glui2body->brgst1, 0.0, "~ubar_5", "t");
      result.set_BF(BEreq::cb_sd_glui2body->brgst2, 0.0, "~t_R", "tbar");
      result.set_BF(BEreq::cb_sd_glui2body->brgst2, 0.0, "~ubar_6", "t");
      result.set_BF(BEreq::cb_sd_gluiloop->brglnjgluon(1), 0.0, "~chi0_1", "g");
      result.set_BF(BEreq::cb_sd_gluiloop->brglnjgluon(2), 0.0, "~chi0_2", "g");
      result.set_BF(BEreq::cb_sd_gluiloop->brglnjgluon(3), 0.0, "~chi0_3", "g");
      result.set_BF(BEreq::cb_sd_gluiloop->brglnjgluon(4), 0.0, "~chi0_4", "g");
      result.set_BF(BEreq::cb_sd_glui3body->brgodn(1), 0.0, "~chi0_1", "d", "dbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgodn(2), 0.0, "~chi0_2", "d", "dbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgodn(3), 0.0, "~chi0_3", "d", "dbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgodn(4), 0.0, "~chi0_4", "d", "dbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgoup(1), 0.0, "~chi0_1", "u", "ubar");
      result.set_BF(BEreq::cb_sd_glui3body->brgoup(2), 0.0, "~chi0_2", "u", "ubar");
      result.set_BF(BEreq::cb_sd_glui3body->brgoup(3), 0.0, "~chi0_3", "u", "ubar");
      result.set_BF(BEreq::cb_sd_glui3body->brgoup(4), 0.0, "~chi0_4", "u", "ubar");
      result.set_BF(BEreq::cb_sd_glui3body->brgodn(1), 0.0, "~chi0_1", "s", "sbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgodn(2), 0.0, "~chi0_2", "s", "sbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgodn(3), 0.0, "~chi0_3", "s", "sbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgodn(4), 0.0, "~chi0_4", "s", "sbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgoup(1), 0.0, "~chi0_1", "c", "cbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgoup(2), 0.0, "~chi0_2", "c", "cbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgoup(3), 0.0, "~chi0_3", "c", "cbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgoup(4), 0.0, "~chi0_4", "c", "cbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgobt(1), 0.0, "~chi0_1", "b", "bbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgobt(2), 0.0, "~chi0_2", "b", "bbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgobt(3), 0.0, "~chi0_3", "b", "bbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgobt(4), 0.0, "~chi0_4", "b", "bbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgotp(1), 0.0, "~chi0_1", "t", "tbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgotp(2), 0.0, "~chi0_2", "t", "tbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgotp(3), 0.0, "~chi0_3", "t", "tbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgotp(4), 0.0, "~chi0_4", "t", "tbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgoud(1), 0.0, "~chi+_1", "d", "ubar");
      result.set_BF(BEreq::cb_sd_glui3body->brgoud(1), 0.0, "~chi-_1", "u", "dbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgoud(2), 0.0, "~chi+_2", "d", "ubar");
      result.set_BF(BEreq::cb_sd_glui3body->brgoud(2), 0.0, "~chi-_2", "u", "dbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgoud(1), 0.0, "~chi+_1", "s", "cbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgoud(1), 0.0, "~chi-_1", "c", "sbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgoud(2), 0.0, "~chi+_2", "s", "cbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgoud(2), 0.0, "~chi-_2", "c", "sbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgotb(1), 0.0, "~chi+_1", "b", "tbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgotb(1), 0.0, "~chi-_1", "t", "bbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgotb(2), 0.0, "~chi+_2", "b", "tbar");
      result.set_BF(BEreq::cb_sd_glui3body->brgotb(2), 0.0, "~chi-_2", "t", "bbar");
      result.set_BF(BEreq::cb_sd_glui3body->brwst1b, 0.0, "~t_L", "bbar", "W-");
      result.set_BF(BEreq::cb_sd_glui3body->brwst1b, 0.0, "~ubar_5", "b", "W+");
      result.set_BF(BEreq::cb_sd_glui3body->brhcst1b, 0.0, "~t_L", "bbar", "H-");
      result.set_BF(BEreq::cb_sd_glui3body->brhcst1b, 0.0, "~ubar_5", "b", "H+");
      // cout << "gluino total width: " << result.width_in_GeV << endl;
    }

    /// MSSM decays: ~t_1
    void stop_1_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::stop_1_decays;
      result.width_in_GeV = BEreq::cb_sd_stopwidth->stoptot4; // CsB: CHECK THIS WITH MAGGIE !!!
      result.set_BF(BEreq::cb_sd_stop2body->brst1neutt(1), 0.0, "~chi0_1", "t");
      result.set_BF(BEreq::cb_sd_stop2body->brst1neutt(2), 0.0, "~chi0_2", "t");
      result.set_BF(BEreq::cb_sd_stop2body->brst1neutt(3), 0.0, "~chi0_3", "t");
      result.set_BF(BEreq::cb_sd_stop2body->brst1neutt(4), 0.0, "~chi0_4", "t");
      result.set_BF(BEreq::cb_sd_stop2body->brst1charb(1), 0.0, "~chi+_1", "b");
      result.set_BF(BEreq::cb_sd_stop2body->brst1charb(2), 0.0, "~chi+_2", "b");
      result.set_BF(BEreq::cb_sd_stop2body->brst1glui, 0.0, "~g", "t");
      result.set_BF(BEreq::cb_sd_stop2body->brst1hcsb(1), 0.0, "~b_L", "H+");
      result.set_BF(BEreq::cb_sd_stop2body->brst1hcsb(2), 0.0, "~b_R", "H+");
      result.set_BF(BEreq::cb_sd_stop2body->brst1wsb(1), 0.0, "~b_L", "W+");
      result.set_BF(BEreq::cb_sd_stop2body->brst1wsb(2), 0.0, "~b_R", "W+");
      result.set_BF(BEreq::cb_sd_stoploop->brgamma, 0.0, "~chi0_1", "c");
      result.set_BF(BEreq::cb_sd_stoploop->brgammaup, 0.0, "~chi0_1", "u");
      result.set_BF(BEreq::cb_sd_stoploop->brgammagluino, 0.0, "~g", "c");
      result.set_BF(BEreq::cb_sd_stop3body->brstopw(1,1), 0.0, "~chi0_1", "b", "W+");
      result.set_BF(BEreq::cb_sd_stop3body->brstopw(1,2), 0.0, "~chi0_2", "b", "W+");
      result.set_BF(BEreq::cb_sd_stop3body->brstopw(1,3), 0.0, "~chi0_3", "b", "W+");
      result.set_BF(BEreq::cb_sd_stop3body->brstopw(1,4), 0.0, "~chi0_4", "b", "W+");
      result.set_BF(BEreq::cb_sd_stop3body->brstoph(1,1), 0.0, "~chi0_1", "b", "H+");
      result.set_BF(BEreq::cb_sd_stop3body->brstoph(1,2), 0.0, "~chi0_2", "b", "H+");
      result.set_BF(BEreq::cb_sd_stop3body->brstoph(1,3), 0.0, "~chi0_3", "b", "H+");
      result.set_BF(BEreq::cb_sd_stop3body->brstoph(1,4), 0.0, "~chi0_4", "b", "H+");
      result.set_BF(BEreq::cb_sd_stop3body->brstsntau(1,1), 0.0, "~nu_tau", "b", "tau+");
      result.set_BF(BEreq::cb_sd_stop3body->brstsnel(1), 0.0, "~nu_e", "b", "e+");
      result.set_BF(BEreq::cb_sd_stop3body->brstsnel(1), 0.0, "~nu_mu", "b", "mu+");
      result.set_BF(BEreq::cb_sd_stop3body->brststau(1,1), 0.0, "~e+_5", "b", "nu_tau");
      result.set_BF(BEreq::cb_sd_stop3body->brststau(1,2), 0.0, "~e+_6", "b", "nu_tau");
      result.set_BF(BEreq::cb_sd_stop3body->brstsel(1,1), 0.0, "~e+_L", "b", "nu_e");
      result.set_BF(BEreq::cb_sd_stop3body->brstsel(1,2), 0.0, "~e+_R", "b", "nu_e");
      result.set_BF(BEreq::cb_sd_stop3body->brstsel(1,1), 0.0, "~mu+_L", "b", "nu_mu");
      result.set_BF(BEreq::cb_sd_stop3body->brstsel(1,2), 0.0, "~mu+_R", "b", "nu_mu");
      result.set_BF(BEreq::cb_sd_stop3body->brstbsbst(1,1), 0.0, "~dbar_5", "b", "t");
      result.set_BF(BEreq::cb_sd_stop3body->brstbsbst(1,2), 0.0, "~dbar_6", "b", "t");
      result.set_BF(BEreq::cb_sd_stop3body->brstbbsbt(1,1), 0.0, "~b_L", "bbar", "t");
      result.set_BF(BEreq::cb_sd_stop3body->brstbbsbt(1,2), 0.0, "~b_R", "bbar", "t");
      result.set_BF(BEreq::cb_sd_stop3body->brstupsbdow(1,1), 0.0, "~b_L", "dbar", "u");
      result.set_BF(BEreq::cb_sd_stop3body->brstupsbdow(1,2), 0.0, "~b_R", "dbar", "u");
      result.set_BF(BEreq::cb_sd_stop3body->brstupsbdow(1,1), 0.0, "~b_L", "sbar", "c");
      result.set_BF(BEreq::cb_sd_stop3body->brstupsbdow(1,2), 0.0, "~b_R", "sbar", "c");
      result.set_BF(BEreq::cb_sd_stop3body->brsttausbnu(1,1), 0.0, "~b_L", "tau+", "nu_tau");
      result.set_BF(BEreq::cb_sd_stop3body->brsttausbnu(1,2), 0.0, "~b_R", "tau+", "nu_tau");
      result.set_BF(BEreq::cb_sd_stop3body->brstelsbnu(1,1), 0.0, "~b_L", "e+", "nu_e");
      result.set_BF(BEreq::cb_sd_stop3body->brstelsbnu(1,2), 0.0, "~b_R", "e+", "nu_e");
      result.set_BF(BEreq::cb_sd_stop3body->brstelsbnu(1,1), 0.0, "~b_L", "mu+", "nu_mu");
      result.set_BF(BEreq::cb_sd_stop3body->brstelsbnu(1,2), 0.0, "~b_R", "mu+", "nu_mu");
      cout << "~t_1 total width: " << result.width_in_GeV << endl;
    }

    /// MSSM decays: ~t_2
    void stop_2_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::stop_2_decays;
      result.width_in_GeV = BEreq::cb_sd_stopwidth->stoptot4; // CsB: CHECK THIS WITH MAGGIE !!!
      result.set_BF(BEreq::cb_sd_stop2body->brst2neutt(1), 0.0, "~chi0_1", "t");
      result.set_BF(BEreq::cb_sd_stop2body->brst2neutt(2), 0.0, "~chi0_2", "t");
      result.set_BF(BEreq::cb_sd_stop2body->brst2neutt(3), 0.0, "~chi0_3", "t");
      result.set_BF(BEreq::cb_sd_stop2body->brst2neutt(4), 0.0, "~chi0_4", "t");
      result.set_BF(BEreq::cb_sd_stop2body->brst2charb(1), 0.0, "~chi+_1", "b");
      result.set_BF(BEreq::cb_sd_stop2body->brst2charb(2), 0.0, "~chi+_2", "b");
      result.set_BF(BEreq::cb_sd_stop2body->brst2glui, 0.0, "~g", "t");
      result.set_BF(BEreq::cb_sd_stop2body->brst2hl, 0.0, "~t_L", "h0_1");
      result.set_BF(BEreq::cb_sd_stop2body->brst2hh, 0.0, "~t_L", "h0_2");
      result.set_BF(BEreq::cb_sd_stop2body->brst2ha, 0.0, "~t_L", "A0");
      result.set_BF(BEreq::cb_sd_stop2body->brst2hcsb(1), 0.0, "~b_L", "H+");
      result.set_BF(BEreq::cb_sd_stop2body->brst2hcsb(2), 0.0, "~b_R", "H+");
      result.set_BF(BEreq::cb_sd_stop2body->brst2ztop, 0.0, "~t_L", "Z0");
      result.set_BF(BEreq::cb_sd_stop2body->brst2wsb(1), 0.0, "~b_L", "W+");
      result.set_BF(BEreq::cb_sd_stop2body->brst2wsb(2), 0.0, "~b_R", "W+");
      result.set_BF(BEreq::cb_sd_stop3body->brstopw(2,1), 0.0, "~chi0_1", "b", "W+");
      result.set_BF(BEreq::cb_sd_stop3body->brstopw(2,2), 0.0, "~chi0_2", "b", "W+");
      result.set_BF(BEreq::cb_sd_stop3body->brstopw(2,3), 0.0, "~chi0_3", "b", "W+");
      result.set_BF(BEreq::cb_sd_stop3body->brstopw(2,4), 0.0, "~chi0_4", "b", "W+");
      result.set_BF(BEreq::cb_sd_stop3body->brstoph(2,1), 0.0, "~chi0_1", "b", "H+");
      result.set_BF(BEreq::cb_sd_stop3body->brstoph(2,2), 0.0, "~chi0_2", "b", "H+");
      result.set_BF(BEreq::cb_sd_stop3body->brstoph(2,3), 0.0, "~chi0_3", "b", "H+");
      result.set_BF(BEreq::cb_sd_stop3body->brstoph(2,4), 0.0, "~chi0_4", "b", "H+");
      result.set_BF(BEreq::cb_sd_stop3body->brstsntau(2,1), 0.0, "~nu_tau", "b", "tau+");
      result.set_BF(BEreq::cb_sd_stop3body->brstsnel(2), 0.0, "~nu_e", "b", "e+");
      result.set_BF(BEreq::cb_sd_stop3body->brstsnel(2), 0.0, "~nu_mu", "b", "mu+");
      result.set_BF(BEreq::cb_sd_stop3body->brststau(2,1), 0.0, "~e+_5", "b", "nu_tau");
      result.set_BF(BEreq::cb_sd_stop3body->brststau(2,2), 0.0, "~e+_6", "b", "nu_tau");
      result.set_BF(BEreq::cb_sd_stop3body->brstsel(2,1), 0.0, "~e+_L", "b", "nu_e");
      result.set_BF(BEreq::cb_sd_stop3body->brstsel(2,2), 0.0, "~e+_R", "b", "nu_e");
      result.set_BF(BEreq::cb_sd_stop3body->brstsel(2,1), 0.0, "~mu+_L", "b", "nu_mu");
      result.set_BF(BEreq::cb_sd_stop3body->brstsel(2,2), 0.0, "~mu+_R", "b", "nu_mu");
      result.set_BF(BEreq::cb_sd_stop3body->brstbsbst(2,1), 0.0, "~dbar_5", "b", "t");
      result.set_BF(BEreq::cb_sd_stop3body->brstbsbst(2,2), 0.0, "~dbar_6", "b", "t");
      result.set_BF(BEreq::cb_sd_stop3body->brstbbsbt(2,1), 0.0, "~b_L", "bbar", "t");
      result.set_BF(BEreq::cb_sd_stop3body->brstbbsbt(2,2), 0.0, "~b_R", "bbar", "t");
      result.set_BF(BEreq::cb_sd_stop3body->brstupsbdow(2,1), 0.0, "~b_L", "dbar", "u");
      result.set_BF(BEreq::cb_sd_stop3body->brstupsbdow(2,2), 0.0, "~b_R", "dbar", "u");
      result.set_BF(BEreq::cb_sd_stop3body->brstupsbdow(2,1), 0.0, "~b_L", "sbar", "c");
      result.set_BF(BEreq::cb_sd_stop3body->brstupsbdow(2,2), 0.0, "~b_R", "sbar", "c");
      result.set_BF(BEreq::cb_sd_stop3body->brsttausbnu(2,1), 0.0, "~b_L", "tau+", "nu_tau");
      result.set_BF(BEreq::cb_sd_stop3body->brsttausbnu(2,2), 0.0, "~b_R", "tau+", "nu_tau");
      result.set_BF(BEreq::cb_sd_stop3body->brstelsbnu(2,1), 0.0, "~b_L", "e+", "nu_e");
      result.set_BF(BEreq::cb_sd_stop3body->brstelsbnu(2,2), 0.0, "~b_R", "e+", "nu_e");
      result.set_BF(BEreq::cb_sd_stop3body->brstelsbnu(2,1), 0.0, "~b_L", "mu+", "nu_mu");
      result.set_BF(BEreq::cb_sd_stop3body->brstelsbnu(2,2), 0.0, "~b_R", "mu+", "nu_mu");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1tt, 0.0, "~t_L", "t", "tbar");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1tt, 0.0, "~ubar_5", "t", "t");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1bb, 0.0, "~t_L", "b", "bbar");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1uu, 0.0, "~t_L", "u", "ubar");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1dd, 0.0, "~t_L", "d", "dbar");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1uu, 0.0, "~t_L", "c", "cbar");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1dd, 0.0, "~t_L", "s", "sbar");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1ee, 0.0, "~t_L", "e-", "e+");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1ee, 0.0, "~t_L", "mu-", "mu+");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1tautau, 0.0, "~t_L", "tau-", "tau+");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1nunu, 0.0, "~t_L", "nu_e", "nubar_e");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1nunu, 0.0, "~t_L", "nu_mu", "nubar_mu");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1nunu, 0.0, "~t_L", "nu_tau", "nubar_tau");
      cout << "~t_2 total width: " << result.width_in_GeV << endl;
    }

    /// MSSM decays: ~b_1
    void sbottom_1_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::sbottom_1_decays;
      result.width_in_GeV = BEreq::cb_sd_sbotwidth->sbottot(1);
      result.set_BF(BEreq::cb_sd_sbot2body->brsb1neutt(1), 0.0, "~chi0_1", "b");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb1neutt(2), 0.0, "~chi0_2", "b");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb1neutt(3), 0.0, "~chi0_3", "b");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb1neutt(4), 0.0, "~chi0_4", "b");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb1chart(1), 0.0, "~chi-_1", "t");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb1chart(2), 0.0, "~chi-_2", "t");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb1glui, 0.0, "~g", "b");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb1hcst(1), 0.0, "~t_L", "H-");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb1hcst(2), 0.0, "~t_R", "H-");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb1wst(1), 0.0, "~t_L", "W-");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb1wst(2), 0.0, "~t_R", "W-");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsntau(1,1), 0.0, "~nubar_tau", "t", "tau-");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsnel(1), 0.0, "~nubar_e", "t", "e-");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsnel(1), 0.0, "~nubar_mu", "t", "mu-");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbstau(1,1), 0.0, "~tau-_L", "t", "nubar_tau");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbstau(1,2), 0.0, "~tau-_R", "t", "nubar_tau");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsel(1,1), 0.0, "~e-_L", "t", "nubar_e");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsel(1,2), 0.0, "~e-_R", "t", "nubar_e");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsel(1,1), 0.0, "~mu-_L", "t", "nubar_mu");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsel(1,2), 0.0, "~mu-_R", "t", "nubar_mu");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtstsb(1,1), 0.0, "~ubar_5", "t", "b");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtstsb(1,2), 0.0, "~ubar_6", "t", "b");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtbstb(1,1), 0.0, "~t_L", "tbar", "b");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtbstb(1,2), 0.0, "~t_R", "tbar", "b");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbupstdow(1,1), 0.0, "~t_L", "ubar", "d");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbupstdow(1,2), 0.0, "~t_R", "ubar", "d");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbupstdow(1,1), 0.0, "~t_L", "cbar", "s");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbupstdow(1,2), 0.0, "~t_R", "cbar", "s");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtaustnu(1,1), 0.0, "~t_L", "tau-", "nubar_tau");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtaustnu(1,2), 0.0, "~t_R", "tau-", "nubar_tau");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbelstnu(1,1), 0.0, "~t_L", "e-", "nubar_e");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbelstnu(1,2), 0.0, "~t_L", "e-", "nubar_e");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbelstnu(1,1), 0.0, "~t_L", "mu-", "nubar_mu");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbelstnu(1,2), 0.0, "~t_L", "mu-", "nubar_mu");
      cout << "~b_1 total width: " << result.width_in_GeV << endl;
    }

    /// MSSM decays: ~b_2
    void sbottom_2_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::sbottom_2_decays;
      result.width_in_GeV = BEreq::cb_sd_sbotwidth->sbottot(2);
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2neutt(1), 0.0, "~chi0_1", "b");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2neutt(2), 0.0, "~chi0_2", "b");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2neutt(3), 0.0, "~chi0_3", "b");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2neutt(4), 0.0, "~chi0_4", "b");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2chart(1), 0.0, "~chi-_1", "t");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2chart(2), 0.0, "~chi-_2", "t");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2glui, 0.0, "~g", "b");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2hl, 0.0, "~b_L", "h0_1");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2hh, 0.0, "~b_L", "h0_2");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2ha, 0.0, "~b_L", "A0");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2hcst(1), 0.0, "~t_L", "H-");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2hcst(2), 0.0, "~t_R", "H-");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2zbot, 0.0, "~b_L", "Z0");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2wst(1), 0.0, "~t_L", "W-");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2wst(2), 0.0, "~t_R", "W-");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsntau(2,1), 0.0, "~nubar_tau", "t", "tau-");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsnel(2), 0.0, "~nubar_e", "t", "e-");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsnel(2), 0.0, "~nubar_mu", "t", "mu-");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbstau(2,1), 0.0, "~tau-_L", "t", "nubar_tau");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbstau(2,2), 0.0, "~tau-_R", "t", "nubar_tau");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsel(2,1), 0.0, "~e-_L", "t", "nubar_e");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsel(2,2), 0.0, "~e-_R", "t", "nubar_e");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsel(2,1), 0.0, "~mu-_L", "t", "nubar_mu");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsel(2,2), 0.0, "~mu-_R", "t", "nubar_mu");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtstsb(2,1), 0.0, "~ubar_5", "t", "b");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtstsb(2,2), 0.0, "~ubar_6", "t", "b");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtbstb(2,1), 0.0, "~t_L", "tbar", "b");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtbstb(2,2), 0.0, "~t_R", "tbar", "b");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbupstdow(2,1), 0.0, "~t_L", "ubar", "d");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbupstdow(2,2), 0.0, "~t_R", "ubar", "d");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbupstdow(2,1), 0.0, "~t_L", "cbar", "s");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbupstdow(2,2), 0.0, "~t_R", "cbar", "s");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtaustnu(2,1), 0.0, "~t_L", "tau-", "nubar_tau");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtaustnu(2,2), 0.0, "~t_R", "tau-", "nubar_tau");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbelstnu(2,1), 0.0, "~t_L", "e-", "nubar_e");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbelstnu(2,2), 0.0, "~t_L", "e-", "nubar_e");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbelstnu(2,1), 0.0, "~t_L", "mu-", "nubar_mu");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbelstnu(2,2), 0.0, "~t_L", "mu-", "nubar_mu");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1bb, 0.0, "~b_L", "b", "bbar");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1starbb, 0.0, "~dbar_5", "b", "b");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1tt, 0.0, "~b_L", "t", "tbar");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1uu, 0.0, "~b_L", "u", "ubar");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1dd, 0.0, "~b_L", "d", "dbar");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1uu, 0.0, "~b_L", "c", "cbar");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1dd, 0.0, "~b_L", "s", "sbar");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1ee, 0.0, "~b_L", "e-", "e+");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1ee, 0.0, "~b_L", "mu-", "mu+");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1tautau, 0.0, "~b_L", "tau-", "tau+");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1nunu, 0.0, "~b_L", "nu_e", "nubar_e");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1nunu, 0.0, "~b_L", "nu_mu", "nubar_mu");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1nunu, 0.0, "~b_L", "nu_tau", "nubar_tau");
      cout << "~b_2 total width: " << result.width_in_GeV << endl;
    }

    /// MSSM decays: ~u_L
    void sup_L_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::sup_L_decays;
      result.width_in_GeV = BEreq::cb_sd_supwidth->supltot2;
      result.set_BF(BEreq::cb_sd_sup2body->brsuplnup(1), 0.0, "~chi0_1", "u");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplnup(2), 0.0, "~chi0_2", "u");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplnup(3), 0.0, "~chi0_3", "u");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplnup(4), 0.0, "~chi0_4", "u");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplcdow(1), 0.0, "~chi+_1", "d");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplcdow(2), 0.0, "~chi+_2", "d");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplglui, 0.0, "~g", "u");
      cout << "~u_L total width: " << result.width_in_GeV << endl;
    }

    /// MSSM decays: ~u_R
    void sup_R_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::sup_R_decays;
      result.width_in_GeV = BEreq::cb_sd_supwidth->suprtot2;
      result.set_BF(BEreq::cb_sd_sup2body->brsuprnup(1), 0.0, "~chi0_1", "u");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprnup(2), 0.0, "~chi0_2", "u");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprnup(3), 0.0, "~chi0_3", "u");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprnup(4), 0.0, "~chi0_4", "u");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprcdow(1), 0.0, "~chi+_1", "d");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprcdow(2), 0.0, "~chi+_2", "d");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprglui, 0.0, "~g", "u");
      cout << "~u_R total width: " << result.width_in_GeV << endl;
    }

    /// MSSM decays: ~d_L
    void sdown_L_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::sdown_L_decays;
      result.width_in_GeV = BEreq::cb_sd_sdownwidth->sdowltot2;
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlndow(1), 0.0, "~chi0_1", "d");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlndow(2), 0.0, "~chi0_2", "d");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlndow(3), 0.0, "~chi0_3", "d");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlndow(4), 0.0, "~chi0_4", "d");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlchup(1), 0.0, "~chi-_1", "u");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlchup(2), 0.0, "~chi-_2", "u");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlglui, 0.0, "~g", "d");
      cout << "~d_L total width: " << result.width_in_GeV << endl;
    }

    /// MSSM decays: ~d_R
    void sdown_R_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::sdown_R_decays;
      result.width_in_GeV = BEreq::cb_sd_sdownwidth->sdowrtot2;
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrndow(1), 0.0, "~chi0_1", "d");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrndow(2), 0.0, "~chi0_2", "d");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrndow(3), 0.0, "~chi0_3", "d");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrndow(4), 0.0, "~chi0_4", "d");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrchup(1), 0.0, "~chi-_1", "u");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrchup(2), 0.0, "~chi-_2", "u");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrglui, 0.0, "~g", "d");
      cout << "~d_R total width: " << result.width_in_GeV << endl;
    }

    /// MSSM decays: ~c_L
    void scharm_L_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::scharm_L_decays;
      result.width_in_GeV = BEreq::cb_sd_supwidth->supltot2;
      result.set_BF(BEreq::cb_sd_sup2body->brsuplnup(1), 0.0, "~chi0_1", "c");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplnup(2), 0.0, "~chi0_2", "c");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplnup(3), 0.0, "~chi0_3", "c");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplnup(4), 0.0, "~chi0_4", "c");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplcdow(1), 0.0, "~chi+_1", "s");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplcdow(2), 0.0, "~chi+_2", "s");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplglui, 0.0, "~g", "c");
      cout << "~c_L total width: " << result.width_in_GeV << endl;
    }

    /// MSSM decays: ~c_R
    void scharm_R_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::scharm_R_decays;
      result.width_in_GeV = BEreq::cb_sd_supwidth->suprtot2;
      result.set_BF(BEreq::cb_sd_sup2body->brsuprnup(1), 0.0, "~chi0_1", "c");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprnup(2), 0.0, "~chi0_2", "c");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprnup(3), 0.0, "~chi0_3", "c");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprnup(4), 0.0, "~chi0_4", "c");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprcdow(1), 0.0, "~chi+_1", "s");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprcdow(2), 0.0, "~chi+_2", "s");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprglui, 0.0, "~g", "c");
      cout << "~c_R total width: " << result.width_in_GeV << endl;
    }

    /// MSSM decays: ~s_L
    void sstrange_L_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::sstrange_L_decays;
      result.width_in_GeV = BEreq::cb_sd_sdownwidth->sdowltot2;
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlndow(1), 0.0, "~chi0_1", "s");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlndow(2), 0.0, "~chi0_2", "s");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlndow(3), 0.0, "~chi0_3", "s");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlndow(4), 0.0, "~chi0_4", "s");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlchup(1), 0.0, "~chi-_1", "c");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlchup(2), 0.0, "~chi-_2", "c");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlglui, 0.0, "~g", "s");
      cout << "~s_L total width: " << result.width_in_GeV << endl;
    }

    /// MSSM decays: ~s_R
    void sstrange_R_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::sstrange_R_decays;
      result.width_in_GeV = BEreq::cb_sd_sdownwidth->sdowrtot2;
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrndow(1), 0.0, "~chi0_1", "s");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrndow(2), 0.0, "~chi0_2", "s");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrndow(3), 0.0, "~chi0_3", "s");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrndow(4), 0.0, "~chi0_4", "s");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrchup(1), 0.0, "~chi-_1", "c");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrchup(2), 0.0, "~chi-_2", "c");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrglui, 0.0, "~g", "s");
      cout << "~s_R total width: " << result.width_in_GeV << endl;
    }

// CsB: code below needs testing
//    /// MSSM decays: ~e-_L
//    void selectron_L_decays (DecayTable::Entry& result) 
//    {
//      using namespace Pipes::selectron_L_decays;
//      result.width_in_GeV = BEreq::cb_sd_selwidth->selltot2;
//      result.set_BF(BEreq::cb_sd_sel2body->brsellneute(1), 0.0, "~chi0_1", "e-");
//      result.set_BF(BEreq::cb_sd_sel2body->brsellneute(2), 0.0, "~chi0_2", "e-");
//      result.set_BF(BEreq::cb_sd_sel2body->brsellneute(3), 0.0, "~chi0_3", "e-");
//      result.set_BF(BEreq::cb_sd_sel2body->brsellneute(4), 0.0, "~chi0_4", "e-");
//      result.set_BF(BEreq::cb_sd_sel2body->brsellcharnue(1), 0.0, "~chi-_1", "nu_e");
//      result.set_BF(BEreq::cb_sd_sel2body->brsellcharnue(2), 0.0, "~chi-_2", "nu_e");
//      cout << "~e-_L total width: " << result.width_in_GeV << endl;
//    }
//
//    /// MSSM decays: ~e-_R
//    void selectron_R_decays (DecayTable::Entry& result) 
//    {
//      using namespace Pipes::selectron_R_decays;
//      result.width_in_GeV = BEreq::cb_sd_selwidth->selrtot2;
//      result.set_BF(BEreq::cb_sd_sel2body->brselrneute(1), 0.0, "~chi0_1", "e-");
//      result.set_BF(BEreq::cb_sd_sel2body->brselrneute(2), 0.0, "~chi0_2", "e-");
//      result.set_BF(BEreq::cb_sd_sel2body->brselrneute(3), 0.0, "~chi0_3", "e-");
//      result.set_BF(BEreq::cb_sd_sel2body->brselrneute(4), 0.0, "~chi0_4", "e-");
//      result.set_BF(BEreq::cb_sd_sel2body->brselrcharnue(1), 0.0, "~chi-_1", "nu_e");
//      result.set_BF(BEreq::cb_sd_sel2body->brselrcharnue(2), 0.0, "~chi-_2", "nu_e");
//      cout << "~e-_R total width: " << result.width_in_GeV << endl;
//    }
//
//    /// MSSM decays: ~mu-_L
//    void smuon_L_decays (DecayTable::Entry& result) 
//    {
//      using namespace Pipes::smuon_L_decays;
//      result.width_in_GeV = BEreq::cb_sd_selwidth->selltot2;
//      result.set_BF(BEreq::cb_sd_sel2body->brsellneute(1), 0.0, "~chi0_1", "mu-");
//      result.set_BF(BEreq::cb_sd_sel2body->brsellneute(2), 0.0, "~chi0_2", "mu-");
//      result.set_BF(BEreq::cb_sd_sel2body->brsellneute(3), 0.0, "~chi0_3", "mu-");
//      result.set_BF(BEreq::cb_sd_sel2body->brsellneute(4), 0.0, "~chi0_4", "mu-");
//      result.set_BF(BEreq::cb_sd_sel2body->brsellcharnue(1), 0.0, "~chi-_1", "nu_mu");
//      result.set_BF(BEreq::cb_sd_sel2body->brsellcharnue(2), 0.0, "~chi-_2", "nu_mu");
//      cout << "~mu-_L total width: " << result.width_in_GeV << endl;
//    }
//
//    /// MSSM decays: ~mu-_R
//    void smuon_R_decays (DecayTable::Entry& result) 
//    {
//      using namespace Pipes::smuon_R_decays;
//      result.width_in_GeV = BEreq::cb_sd_selwidth->selrtot2;
//      result.set_BF(BEreq::cb_sd_sel2body->brselrneute(1), 0.0, "~chi0_1", "mu-");
//      result.set_BF(BEreq::cb_sd_sel2body->brselrneute(2), 0.0, "~chi0_2", "mu-");
//      result.set_BF(BEreq::cb_sd_sel2body->brselrneute(3), 0.0, "~chi0_3", "mu-");
//      result.set_BF(BEreq::cb_sd_sel2body->brselrneute(4), 0.0, "~chi0_4", "mu-");
//      result.set_BF(BEreq::cb_sd_sel2body->brselrcharnue(1), 0.0, "~chi-_1", "nu_mu");
//      result.set_BF(BEreq::cb_sd_sel2body->brselrcharnue(2), 0.0, "~chi-_2", "nu_mu");
//      cout << "~mu-_R total width: " << result.width_in_GeV << endl;
//    }
//
//    /// MSSM decays: ~tau-_1
//    void stau_1_decays (DecayTable::Entry& result) 
//    {
//      using namespace Pipes::stau_1_decays;
//      result.width_in_GeV = BEreq::cb_sd_stauwidth->stau1tot2;
//      result.set_BF(BEreq::cb_sd_stau2body->brstau1neut(1), 0.0, "~chi0_1", "tau-");
//      result.set_BF(BEreq::cb_sd_stau2body->brstau1neut(2), 0.0, "~chi0_2", "tau-");
//      result.set_BF(BEreq::cb_sd_stau2body->brstau1neut(3), 0.0, "~chi0_3", "tau-");
//      result.set_BF(BEreq::cb_sd_stau2body->brstau1neut(4), 0.0, "~chi0_4", "tau-");
//      result.set_BF(BEreq::cb_sd_stau2body->brstau1char(1), 0.0, "~chi-_1", "nu_tau");
//      result.set_BF(BEreq::cb_sd_stau2body->brstau1char(2), 0.0, "~chi-_2", "nu_tau");
//      result.set_BF(BEreq::cb_sd_stau2body->brstau1hcsn(1), 0.0, "~nu_tau", "H-");
//      result.set_BF(BEreq::cb_sd_stau2body->brstau1wsn(1), 0.0, "~nu_tau", "W-");
//      result.set_BF(BEreq::cb_sd_stau2bodygrav->brstautaugrav, 0.0, "1000039", "tau-");
//      cout << "~tau-_L total width: " << result.width_in_GeV << endl;
//    }
//
//    /// MSSM decays: ~tau-_2
//    void stau_2_decays (DecayTable::Entry& result) 
//    {
//      using namespace Pipes::stau_2_decays;
//      result.width_in_GeV = BEreq::cb_sd_stauwidth->stau2tot2;
//      result.set_BF(BEreq::cb_sd_stau2body->brstau2neut(1), 0.0, "~chi0_1", "tau-");
//      result.set_BF(BEreq::cb_sd_stau2body->brstau2neut(2), 0.0, "~chi0_2", "tau-");
//      result.set_BF(BEreq::cb_sd_stau2body->brstau2neut(3), 0.0, "~chi0_3", "tau-");
//      result.set_BF(BEreq::cb_sd_stau2body->brstau2neut(4), 0.0, "~chi0_4", "tau-");
//      result.set_BF(BEreq::cb_sd_stau2body->brstau2char(1), 0.0, "~chi-_1", "nu_tau");
//      result.set_BF(BEreq::cb_sd_stau2body->brstau2char(2), 0.0, "~chi-_2", "nu_tau");
//      result.set_BF(BEreq::cb_sd_stau2body->brstau2hcsn(1), 0.0, "~nu_tau", "H-");
//      result.set_BF(BEreq::cb_sd_stau2body->brstau2wsn(1), 0.0, "~nu_tau", "W-");
//      result.set_BF(BEreq::cb_sd_stau2body->brstau2hl, 0.0, "~tau-_L", "h0_1");
//      result.set_BF(BEreq::cb_sd_stau2body->brstau2hh, 0.0, "~tau-_L", "h0_2");
//      result.set_BF(BEreq::cb_sd_stau2body->brstau2ha, 0.0, "~tau-_L", "A0");
//      result.set_BF(BEreq::cb_sd_stau2body->brstau2ztau, 0.0, "~tau-_L", "Z0");
//      cout << "~tau-_R total width: " << result.width_in_GeV << endl;
//    }
//
//    /// MSSM decays: ~nu_e
//    void snu_e_decays (DecayTable::Entry& result) 
//    {
//      using namespace Pipes::snu_e_decays;
//      result.width_in_GeV = BEreq::cb_sd_snelwidth->sneltot2;
//      result.set_BF(BEreq::cb_sd_snel2body->brsnellneut(1), 0.0, "~chi0_1", "nu_e");
//      result.set_BF(BEreq::cb_sd_snel2body->brsnellneut(2), 0.0, "~chi0_2", "nu_e");
//      result.set_BF(BEreq::cb_sd_snel2body->brsnellneut(3), 0.0, "~chi0_3", "nu_e");
//      result.set_BF(BEreq::cb_sd_snel2body->brsnellneut(4), 0.0, "~chi0_4", "nu_e");
//      result.set_BF(BEreq::cb_sd_snel2body->brsnellchar(1), 0.0, "~chi+_1", "e-");
//      result.set_BF(BEreq::cb_sd_snel2body->brsnellchar(2), 0.0, "~chi+_2", "e-");
//      cout << "~nu_e total width: " << result.width_in_GeV << endl;
//    }
//
//    /// MSSM decays: ~nu_mu
//    void snu_mu_decays (DecayTable::Entry& result) 
//    {
//      using namespace Pipes::snu_mu_decays;
//      result.width_in_GeV = BEreq::cb_sd_snelwidth->sneltot2;
//      result.set_BF(BEreq::cb_sd_snel2body->brsnellneut(1), 0.0, "~chi0_1", "nu_mu");
//      result.set_BF(BEreq::cb_sd_snel2body->brsnellneut(2), 0.0, "~chi0_2", "nu_mu");
//      result.set_BF(BEreq::cb_sd_snel2body->brsnellneut(3), 0.0, "~chi0_3", "nu_mu");
//      result.set_BF(BEreq::cb_sd_snel2body->brsnellneut(4), 0.0, "~chi0_4", "nu_mu");
//      result.set_BF(BEreq::cb_sd_snel2body->brsnellchar(1), 0.0, "~chi+_1", "mu-");
//      result.set_BF(BEreq::cb_sd_snel2body->brsnellchar(2), 0.0, "~chi+_2", "mu-");
//      cout << "~nu_mu total width: " << result.width_in_GeV << endl;
//    }
//
//    /// MSSM decays: ~nu_tau
//    void snu_tau_decays (DecayTable::Entry& result) 
//    {
//      using namespace Pipes::snu_tau_decays;
//      result.width_in_GeV = BEreq::cb_sd_sntauwidth->sntautot2;
//      result.set_BF(BEreq::cb_sd_sntau2body->brsntauneut(1), 0.0, "~chi0_1", "nu_tau");
//      result.set_BF(BEreq::cb_sd_sntau2body->brsntauneut(2), 0.0, "~chi0_2", "nu_tau");
//      result.set_BF(BEreq::cb_sd_sntau2body->brsntauneut(3), 0.0, "~chi0_3", "nu_tau");
//      result.set_BF(BEreq::cb_sd_sntau2body->brsntauneut(4), 0.0, "~chi0_4", "nu_tau");
//      result.set_BF(BEreq::cb_sd_sntau2body->brsntauchar(1), 0.0, "~chi+_1", "tau-");
//      result.set_BF(BEreq::cb_sd_sntau2body->brsntauchar(2), 0.0, "~chi+_2", "tau-");
//      result.set_BF(BEreq::cb_sd_sntau2body->brsntau1hcstau(1), 0.0, "~e+_5", "H-");
//      result.set_BF(BEreq::cb_sd_sntau2body->brsntau1hcstau(2), 0.0, "~e+_6", "H-");
//      result.set_BF(BEreq::cb_sd_sntau2body->brsntau1wstau(1), 0.0, "~e+_5", "W-");
//      result.set_BF(BEreq::cb_sd_sntau2body->brsntau1wstau(2), 0.0, "~e+_6", "W-");
//      cout << "~nu_tau total width: " << result.width_in_GeV << endl;
//    }
	
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
      decays("h0_2") = *Dep::h0_2_decay_rates;       // Add the h0_2 decays.
      decays("A0") = *Dep::A0_decay_rates;           // Add the A0 decays.
      decays("H+") = *Dep::Hplus_decay_rates;        // Add the H+ decays.

      decays("~g") = *Dep::gluino_decay_rates;       // Add the gluino decays.

      decays("~u_1") = *Dep::stop_1_decay_rates;     // Add the ~t_1 decays.  CsB: CHECK THIS WITH PETER !!!
      decays("~u_2") = *Dep::stop_2_decay_rates;     // Add the ~t_2 decays.  CsB: CHECK THIS WITH PETER !!!
      decays("~d_1") = *Dep::sbottom_1_decay_rates;  // Add the ~b_1 decays.  CsB: CHECK THIS WITH PETER !!!
      decays("~d_2") = *Dep::sbottom_2_decay_rates;  // Add the ~b_2 decays.  CsB: CHECK THIS WITH PETER !!!
      decays("~u_L") = *Dep::sup_L_decay_rates;      // Add the ~u_L decays.
      decays("~u_R") = *Dep::sup_R_decay_rates;      // Add the ~u_R decays.
      decays("~d_L") = *Dep::sdown_L_decay_rates;    // Add the ~d_L decays.
      decays("~d_R") = *Dep::sdown_R_decay_rates;    // Add the ~d_R decays.
      decays("~c_L") = *Dep::scharm_L_decay_rates;   // Add the ~c_L decays.
      decays("~c_R") = *Dep::scharm_R_decay_rates;   // Add the ~c_R decays.
      decays("~s_L") = *Dep::sstrange_L_decay_rates; // Add the ~s_L decays.
      decays("~s_R") = *Dep::sstrange_R_decay_rates; // Add the ~s_R decays.

// CsB: code below needs testing
//      decays("~e-_L") = *Dep::selectron_L_decay_rates; // Add the ~e-_L decays.
//      decays("~e-_R") = *Dep::selectron_R_decay_rates; // Add the ~e-_R decays.
//      decays("~mu-_L") = *Dep::smuon_L_decay_rates;    // Add the ~mu-_L decays.
//      decays("~mu-_R") = *Dep::smuon_R_decay_rates;    // Add the ~mu-_R decays.
//      decays("~tau-_1") = *Dep::stau_1_decay_rates;    // Add the ~tau_1 decays.  CsB: CHECK THIS WITH PETER !!!
//      decays("~tau-_2") = *Dep::stau_2_decay_rates;    // Add the ~tau_2 decays.  CsB: CHECK THIS WITH PETER !!!
//      decays("~nu_e") = *Dep::snu_e_decay_rates;       // Add the ~nu_e decays.
//      decays("~nu_mu") = *Dep::snu_mu_decay_rates;     // Add the ~nu_mu decays.
//      decays("~nu_tau") = *Dep::snu_tau_decay_rates;   // Add the ~nu_tau decays.

      cout << "BF for tau+ -> pi+ nubar_tau: " << decays("tau+").BF("pi+", "nubar_tau") << endl;
      result = decays;
    }

    /// @}

  }

}
