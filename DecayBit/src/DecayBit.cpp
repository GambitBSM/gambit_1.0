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
///  \date 2015 Mar-May
///
///  \author Csaba Balazs
///          (csaba.balazs@monash.edu) 
///  \date 2015 Jan-May
///
///  \author Peter Athron  
///          (peter.athron@coepp.org.au)
///  \date 2015 Jun 
///
///  *********************************************

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/Elements/virtual_higgs.hpp"
#include "gambit/DecayBit/DecayBit_rollcall.hpp"
#include "gambit/DecayBit/decay_utils.hpp"
#include "gambit/Utils/version.hpp"

#include <string>
#include <map>

namespace Gambit
{

  namespace DecayBit
  {

    using namespace LogTags;

    /// \name DecayBit module functions
    /// @{

    /////////////// Standard Model ///////////////////

    /// SM decays: W+
    void W_plus_decays (DecayTable::Entry& result) 
    {
      result.calculator = "GAMBIT::DecayBit";
      result.calculator_version = version;
      result.width_in_GeV = 2.085;                    
      result.positive_error = 4.2e-02;
      result.negative_error = 4.2e-02;
      result.set_BF(0.1071, 0.0016, "e+", "nu_e");              
      result.set_BF(0.1063, 0.0015, "mu+", "nu_mu");              
      result.set_BF(0.1138, 0.0021, "tau+", "nu_tau");              
      result.set_BF(0.6741, 0.0027, "hadron", "hadron");
    }

    /// SM decays: W-
    void W_minus_decays (DecayTable::Entry& result) 
    {     
      result = CP_conjugate(*Pipes::W_minus_decays::Dep::W_plus_decay_rates);
    }

    /// SM decays: Z
    void Z_decays (DecayTable::Entry& result) 
    {
      result.calculator = "GAMBIT::DecayBit";
      result.calculator_version = version;
      result.width_in_GeV = 2.4952;                    
      result.positive_error = 2.3e-03;
      result.negative_error = 2.3e-03;
      result.set_BF(0.03363, 0.00004, "e+", "e-");              
      result.set_BF(0.03366, 0.00007, "mu+", "mu-");              
      result.set_BF(0.03370, 0.00008, "tau+", "tau-");              
      result.set_BF(0.6991, 0.0006, "hadron", "hadron");
    }

    /// SM decays: t
    void t_decays (DecayTable::Entry& result) 
    {
      result.calculator = "GAMBIT::DecayBit";
      result.calculator_version = version;
      result.width_in_GeV = 2.00;                    
      result.positive_error = 4.7e-01;
      result.negative_error = 4.3e-01;
      result.set_BF(0.91, 0.04, "W+", "b");  
    }

    /// SM decays: tbar
    void tbar_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::tbar_decays::Dep::t_decay_rates);
    }

    /// SM decays: mu+
    void mu_plus_decays (DecayTable::Entry& result) 
    {
      result.calculator = "GAMBIT::DecayBit";
      result.calculator_version = version;
      result.width_in_GeV = 2.9959847e-19;                    
      result.positive_error = 3.0e-25;
      result.negative_error = 3.0e-25;
      result.set_BF(1.0, 0.0, "e+", "nu_e", "nubar_mu");              
    }

    /// SM decays: mu-
    void mu_minus_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::mu_minus_decays::Dep::mu_plus_decay_rates);
    }

    /// SM decays: tau+
    void tau_plus_decays (DecayTable::Entry& result) 
    {
      result.calculator = "GAMBIT::DecayBit";
      result.calculator_version = version;
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

    /// SM decays: tau-
    void tau_minus_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::tau_minus_decays::Dep::tau_plus_decay_rates);
    }

    /// SM decays: pi0
    void pi_0_decays (DecayTable::Entry& result) 
    {
      result.calculator = "GAMBIT::DecayBit";
      result.calculator_version = version;
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
      result.calculator = "GAMBIT::DecayBit";
      result.calculator_version = version;
      result.width_in_GeV = 2.5284e-17;                    
      result.positive_error = 5.0e-21;
      result.negative_error = 5.0e-21;
      result.set_BF(0.9998770, 0.0000004, "mu+", "nu_mu");              
      result.set_BF(1.230e-4, 0.004e-4, "e+", "nu_e");              
    }

    /// SM decays: pi-
    void pi_minus_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::pi_minus_decays::Dep::pi_plus_decay_rates);
    }

    /// SM decays: eta
    void eta_decays (DecayTable::Entry& result) 
    {
      result.calculator = "GAMBIT::DecayBit";
      result.calculator_version = version;
      result.width_in_GeV = 1.31e-06;                    
      result.positive_error = 5.0e-08;
      result.negative_error = 5.0e-08;
      //See PDG meson sheet in DecayBit/data/PDG if you want BFs               
    }

    /// SM decays: rho0
    void rho_0_decays (DecayTable::Entry& result) 
    {
      result.calculator = "GAMBIT::DecayBit";
      result.calculator_version = version;
      result.width_in_GeV = 1.491e-01;                    
      result.positive_error = 8.0e-04;
      result.negative_error = 8.0e-04;
      //See PDG meson sheet in DecayBit/data/PDG if you want BFs               
    }

    /// SM decays: rho+
    void rho_plus_decays (DecayTable::Entry& result) 
    {
      result.calculator = "GAMBIT::DecayBit";
      result.calculator_version = version;
      result.width_in_GeV = 1.491e-01;                    
      result.positive_error = 8.0e-04;
      result.negative_error = 8.0e-04;
      //See PDG meson sheet in DecayBit/data/PDG if you want BFs               
    }

    /// SM decays: rho-
    void rho_minus_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::rho_minus_decays::Dep::rho_plus_decay_rates);
    }

    /// SM decays: omega
    void omega_decays (DecayTable::Entry& result) 
    {
      result.calculator = "GAMBIT::DecayBit";
      result.calculator_version = version;
      result.width_in_GeV = 8.49e-03;                    
      result.positive_error = 8.0e-05;
      result.negative_error = 8.0e-05;
      //See PDG meson sheet in DecayBit/data/PDG if you want BFs               
    }

    /// SM decays: Higgs
    void SM_Higgs_decays (DecayTable::Entry& result)
    {
      double mh = (*Pipes::SM_Higgs_decays::Dep::SM_spectrum)->get_Pole_Mass("h0_1");
      result.calculator = "GAMBIT::DecayBit";
      result.calculator_version = version;
      result.width_in_GeV = virtual_SMHiggs_widths("Gamma",mh);   
      result.set_BF(virtual_SMHiggs_widths("bb",mh), 0.0, "b", "bbar");
      result.set_BF(virtual_SMHiggs_widths("tautau",mh), 0.0, "tau+", "tau-");
      result.set_BF(virtual_SMHiggs_widths("mumu",mh), 0.0, "mu+", "mu-");
      result.set_BF(virtual_SMHiggs_widths("ss",mh), 0.0, "s", "sbar");
      result.set_BF(virtual_SMHiggs_widths("cc",mh), 0.0, "c", "cbar");
      result.set_BF(virtual_SMHiggs_widths("tt",mh), 0.0, "t", "tbar");
      result.set_BF(virtual_SMHiggs_widths("gg",mh), 0.0, "g", "g");
      result.set_BF(virtual_SMHiggs_widths("gammagamma",mh), 0.0, "gamma", "gamma");
      result.set_BF(virtual_SMHiggs_widths("Zgamma",mh), 0.0, "Z0", "gamma");
      result.set_BF(virtual_SMHiggs_widths("WW",mh), 0.0, "W+", "W-");
      result.set_BF(virtual_SMHiggs_widths("ZZ",mh), 0.0, "Z0", "Z0");
    }
     
     
    //////////// MSSM /////////////////////   
      
    /// FeynHiggs MSSM decays: t
    void FH_t_decays (DecayTable::Entry& result) 
    {
      fh_Couplings FH_input = *Pipes::FH_t_decays::Dep::Higgs_Couplings;
      result.calculator = FH_input.calculator;
      result.calculator_version = FH_input.calculator_version;
      result.calculator = FH_input.calculator;
      result.calculator_version = FH_input.calculator_version;
      result.width_in_GeV = 2.0;                    
      result.positive_error = 4.7e-01;
      result.negative_error = 4.3e-01;
      result.set_BF(FH_input.gammas[tBF(1)-1], 0.0, "W+", "b"); 
      result.set_BF(FH_input.gammas[tBF(2)-1], 0.0, "H+", "b");
    }

    /// MSSM decays: h0_1
    void MSSM_h0_1_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::MSSM_h0_1_decays;
      mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);

      result.calculator = BEreq::cb_widthhl_hdec.origin();
      result.calculator_version = BEreq::cb_widthhl_hdec.version();

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

      result.set_BF(BEreq::cb_wisfer_hdec->bhlsqul/2.0, 0.0, psn.isul, psn.isulbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsqur/2.0, 0.0, psn.isur, psn.isurbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsqul/2.0, 0.0, psn.iscl, psn.isclbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsqur/2.0, 0.0, psn.iscr, psn.iscrbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlst(1,1), 0.0, psn.ist1, psn.ist1bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlst(2,2), 0.0, psn.ist2, psn.ist2bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlst(1,2), 0.0, psn.ist1, psn.ist2bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlst(2,1), 0.0, psn.ist2, psn.ist1bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsqdl/2.0, 0.0, psn.isdl, psn.isdlbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsqdr/2.0, 0.0, psn.isdr, psn.isdrbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsqdl/2.0, 0.0, psn.issl, psn.isslbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsqdr/2.0, 0.0, psn.issr, psn.issrbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsb(1,1), 0.0, psn.isb1, psn.isb1bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsb(2,2), 0.0, psn.isb2, psn.isb2bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsb(1,2), 0.0, psn.isb1, psn.isb2bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsb(2,1), 0.0, psn.isb2, psn.isb1bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlslel/2.0, 0.0, psn.isell, psn.isellbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsler/2.0, 0.0, psn.iselr, psn.iselrbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlslel/2.0, 0.0, psn.ismul, psn.ismulbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlsler/2.0, 0.0, psn.ismur, psn.ismurbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlstau(1,1), 0.0, psn.istau1, psn.istau1bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlstau(2,2), 0.0, psn.istau2, psn.istau2bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlstau(1,2), 0.0, psn.istau1, psn.istau2bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlstau(2,1), 0.0, psn.istau2, psn.istau1bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlslnl/3.0, 0.0, psn.isnel, psn.isnelbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlslnl/3.0, 0.0, psn.isnmul, psn.isnmulbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhlslnl/3.0, 0.0, psn.isntaul, psn.isntaulbar);
    }

    /// FeynHiggs MSSM decays: h0_1
    void FH_MSSM_h0_1_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::FH_MSSM_h0_1_decays;

      // Get the mass pseudonyms for the gauge eigenstates
      mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);
      
      // unpack FeynHiggs Couplings
      fh_Couplings FH_input = *Dep::Higgs_Couplings;
      result.calculator = FH_input.calculator;
      result.calculator_version = FH_input.calculator_version;
      // Specify that we're talking about h0_1
      int iH = 0;     
      // Set the total Higgs width
      result.width_in_GeV = FH_input.gammas[iH];

      // vector-boson pair decays
      result.set_BF(FH_input.gammas[H0VV(iH,1)+BRoffset], 0.0, "gamma", "gamma");
      result.set_BF(FH_input.gammas[H0VV(iH,2)+BRoffset], 0.0, "gamma", "Z0");
      result.set_BF(FH_input.gammas[H0VV(iH,3)+BRoffset], 0.0, "Z0", "Z0");
      result.set_BF(FH_input.gammas[H0VV(iH,4)+BRoffset], 0.0, "W+", "W-");
      result.set_BF(FH_input.gammas[H0VV(iH,5)+BRoffset], 0.0, "g", "g");

      // SM fermion decays
      result.set_BF(FH_input.gammas[H0FF(iH,1,1,1)+BRoffset], 0.0, "nu_e", "nubar_e");
      result.set_BF(FH_input.gammas[H0FF(iH,1,2,2)+BRoffset], 0.0, "nu_mu", "nubar_mu");
      result.set_BF(FH_input.gammas[H0FF(iH,1,3,3)+BRoffset], 0.0, "nu_tau", "nubar_tau");
      result.set_BF(FH_input.gammas[H0FF(iH,2,1,1)+BRoffset], 0.0, "e+", "e-");
      result.set_BF(FH_input.gammas[H0FF(iH,2,2,2)+BRoffset], 0.0, "mu+", "mu-");
      result.set_BF(FH_input.gammas[H0FF(iH,2,3,3)+BRoffset], 0.0, "tau+", "tau-");
      result.set_BF(FH_input.gammas[H0FF(iH,3,1,1)+BRoffset], 0.0, "u", "ubar");
      result.set_BF(FH_input.gammas[H0FF(iH,3,2,2)+BRoffset], 0.0, "c", "cbar");
      result.set_BF(FH_input.gammas[H0FF(iH,3,3,3)+BRoffset], 0.0, "t", "tbar");
      result.set_BF(FH_input.gammas[H0FF(iH,4,1,1)+BRoffset], 0.0, "d", "dbar");
      result.set_BF(FH_input.gammas[H0FF(iH,4,2,2)+BRoffset], 0.0, "s", "sbar");
      result.set_BF(FH_input.gammas[H0FF(iH,4,3,3)+BRoffset], 0.0, "b", "bbar");

      // chargino decays
      result.set_BF(FH_input.gammas[H0ChaCha(iH,1,1)+BRoffset], 0.0, "~chi-_1", "~chi+_1");
      result.set_BF(FH_input.gammas[H0ChaCha(iH,1,2)+BRoffset], 0.0, "~chi-_1", "~chi+_2");
      result.set_BF(FH_input.gammas[H0ChaCha(iH,2,1)+BRoffset], 0.0, "~chi-_2", "~chi+_1");
      result.set_BF(FH_input.gammas[H0ChaCha(iH,2,2)+BRoffset], 0.0, "~chi-_2", "~chi+_2");

      // neutralino decays
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,1,1)+BRoffset], 0.0, "~chi0_1", "~chi0_1");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,2,2)+BRoffset], 0.0, "~chi0_2", "~chi0_2");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,3,3)+BRoffset], 0.0, "~chi0_3", "~chi0_3");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,4,4)+BRoffset], 0.0, "~chi0_4", "~chi0_4");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,1,2)+BRoffset], 0.0, "~chi0_1", "~chi0_2");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,1,3)+BRoffset], 0.0, "~chi0_1", "~chi0_3");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,1,4)+BRoffset], 0.0, "~chi0_1", "~chi0_4");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,2,3)+BRoffset], 0.0, "~chi0_2", "~chi0_3");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,2,4)+BRoffset], 0.0, "~chi0_2", "~chi0_4");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,3,4)+BRoffset], 0.0, "~chi0_3", "~chi0_4");

      // higgs + Z0 decays
      result.set_BF(FH_input.gammas[H0HV(iH,1)+BRoffset], 0.0, "h0_1", "Z0");
      result.set_BF(FH_input.gammas[H0HV(iH,2)+BRoffset], 0.0, "h0_2", "Z0");
      result.set_BF(FH_input.gammas[H0HV(iH,3)+BRoffset], 0.0, "A0", "Z0");

      // higgs+higgs decays
      result.set_BF(FH_input.gammas[H0HH(iH,1,1)+BRoffset], 0.0, "h0_1", "h0_1");
      result.set_BF(FH_input.gammas[H0HH(iH,2,2)+BRoffset], 0.0, "h0_2", "h0_2");
      result.set_BF(FH_input.gammas[H0HH(iH,3,3)+BRoffset], 0.0, "A0", "A0");
      result.set_BF(FH_input.gammas[H0HH(iH,4,4)+BRoffset], 0.0, "H+", "H-");
      result.set_BF(FH_input.gammas[H0HH(iH,1,2)+BRoffset], 0.0, "h0_1", "h0_2");
      result.set_BF(FH_input.gammas[H0HH(iH,1,3)+BRoffset], 0.0, "h0_1", "A0");
      result.set_BF(FH_input.gammas[H0HH(iH,2,3)+BRoffset], 0.0, "h0_2", "A0");

      // sfermion decays
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,1,1)+BRoffset], 0.0, psn.isnel, psn.isnelbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,1,2)+BRoffset], 0.0, psn.isnmul, psn.isnmulbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,1,3)+BRoffset], 0.0, psn.isntaul, psn.isntaulbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,2,1)+BRoffset], 0.0, psn.isell, psn.isellbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,2,1)+BRoffset], 0.0, psn.isell, psn.iselrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,2,1)+BRoffset], 0.0, psn.iselr, psn.isellbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,2,1)+BRoffset], 0.0, psn.iselr, psn.iselrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,2,2)+BRoffset], 0.0, psn.ismul, psn.ismulbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,2,2)+BRoffset], 0.0, psn.ismul, psn.ismurbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,2,2)+BRoffset], 0.0, psn.ismur, psn.ismulbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,2,2)+BRoffset], 0.0, psn.ismur, psn.ismurbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,2,3)+BRoffset], 0.0, psn.istau1, psn.istau1bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,2,3)+BRoffset], 0.0, psn.istau1, psn.istau2bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,2,3)+BRoffset], 0.0, psn.istau2, psn.istau1bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,2,3)+BRoffset], 0.0, psn.istau2, psn.istau2bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,3,1)+BRoffset], 0.0, psn.isul, psn.isulbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,3,1)+BRoffset], 0.0, psn.isul, psn.isurbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,3,1)+BRoffset], 0.0, psn.isur, psn.isulbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,3,1)+BRoffset], 0.0, psn.isur, psn.isurbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,3,2)+BRoffset], 0.0, psn.iscl, psn.isclbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,3,2)+BRoffset], 0.0, psn.iscl, psn.iscrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,3,2)+BRoffset], 0.0, psn.iscr, psn.isclbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,3,2)+BRoffset], 0.0, psn.iscr, psn.iscrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,3,3)+BRoffset], 0.0, psn.ist1, psn.ist1bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,3,3)+BRoffset], 0.0, psn.ist1, psn.ist2bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,3,3)+BRoffset], 0.0, psn.ist2, psn.ist1bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,3,3)+BRoffset], 0.0, psn.ist2, psn.ist2bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,3,1)+BRoffset], 0.0, psn.isdl, psn.isdlbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,3,1)+BRoffset], 0.0, psn.isdl, psn.isdrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,3,1)+BRoffset], 0.0, psn.isdr, psn.isdlbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,3,1)+BRoffset], 0.0, psn.isdr, psn.isdrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,3,2)+BRoffset], 0.0, psn.issl, psn.isslbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,3,2)+BRoffset], 0.0, psn.issl, psn.issrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,3,2)+BRoffset], 0.0, psn.issr, psn.isslbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,3,2)+BRoffset], 0.0, psn.issr, psn.issrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,3,3)+BRoffset], 0.0, psn.isb1, psn.isb1bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,3,3)+BRoffset], 0.0, psn.isb1, psn.isb2bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,3,3)+BRoffset], 0.0, psn.isb2, psn.isb1bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,3,3)+BRoffset], 0.0, psn.isb2, psn.isb2bar);
    }

    /// MSSM decays: h0_2
    void h0_2_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::h0_2_decays;
      mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);

      result.calculator = BEreq::cb_widthhh_hdec.origin();
      result.calculator_version = BEreq::cb_widthhh_hdec.version();

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
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsqul/2.0, 0.0, psn.isul, psn.isulbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsqur/2.0, 0.0, psn.isur, psn.isurbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsqul/2.0, 0.0, psn.iscl, psn.isclbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsqur/2.0, 0.0, psn.iscr, psn.iscrbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhst(1,1), 0.0, psn.ist1, psn.ist1bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhst(2,2), 0.0, psn.ist2, psn.ist2bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhst(1,2), 0.0, psn.ist1, psn.ist2bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhst(2,1), 0.0, psn.ist2, psn.ist1bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsqdl/2.0, 0.0, psn.isdl, psn.isdlbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsqdr/2.0, 0.0, psn.isdr, psn.isdrbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsqdl/2.0, 0.0, psn.issl, psn.isslbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsqdr/2.0, 0.0, psn.issr, psn.issrbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsb(1,1), 0.0, psn.isb1, psn.isb1bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsb(2,2), 0.0, psn.isb2, psn.isb2bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsb(1,2), 0.0, psn.isb1, psn.isb2bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsb(2,1), 0.0, psn.isb2, psn.isb1bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhslel/2.0, 0.0, psn.isell, psn.isellbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsler/2.0, 0.0, psn.iselr, psn.iselrbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhslel/2.0, 0.0, psn.ismul, psn.ismulbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhsler/2.0, 0.0, psn.ismur, psn.ismurbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhstau(1,1), 0.0, psn.istau1, psn.istau1bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhstau(2,2), 0.0, psn.istau2, psn.istau2bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhstau(1,2), 0.0, psn.istau1, psn.istau2bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhstau(2,1), 0.0, psn.istau2, psn.istau1bar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhslnl/3.0, 0.0, psn.isnel, psn.isnelbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhslnl/3.0, 0.0, psn.isnmul, psn.isnmulbar);
      result.set_BF(BEreq::cb_wisfer_hdec->bhhslnl/3.0, 0.0, psn.isntaul, psn.isntaulbar);
    }

    /// FeynHiggs MSSM decays: h0_2
    void FH_h0_2_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::FH_h0_2_decays;
      
      // Get the mass pseudonyms for the gauge eigenstates
      mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);

      // unpack FeynHiggs Couplings
      fh_Couplings FH_input = *Dep::Higgs_Couplings;
      result.calculator = FH_input.calculator;
      result.calculator_version = FH_input.calculator_version;
      // Specify that we're talking about h0_2
      int iH = 1;
      // Set the total second Higgs width
      result.width_in_GeV = FH_input.gammas[iH];

      // vector-boson pair decays
      result.set_BF(FH_input.gammas[H0VV(iH,1)+BRoffset], 0.0, "gamma", "gamma");
      result.set_BF(FH_input.gammas[H0VV(iH,2)+BRoffset], 0.0, "gamma", "Z0");
      result.set_BF(FH_input.gammas[H0VV(iH,3)+BRoffset], 0.0, "Z0", "Z0");
      result.set_BF(FH_input.gammas[H0VV(iH,4)+BRoffset], 0.0, "W+", "W-");
      result.set_BF(FH_input.gammas[H0VV(iH,5)+BRoffset], 0.0, "g", "g");

      // SM fermion decays
      result.set_BF(FH_input.gammas[H0FF(iH,1,1,1)+BRoffset], 0.0, "nu_e", "nubar_e");
      result.set_BF(FH_input.gammas[H0FF(iH,1,2,2)+BRoffset], 0.0, "nu_mu", "nubar_mu");
      result.set_BF(FH_input.gammas[H0FF(iH,1,3,3)+BRoffset], 0.0, "nu_tau", "nubar_tau");
      result.set_BF(FH_input.gammas[H0FF(iH,2,1,1)+BRoffset], 0.0, "e+", "e-");
      result.set_BF(FH_input.gammas[H0FF(iH,2,2,2)+BRoffset], 0.0, "mu+", "mu-");
      result.set_BF(FH_input.gammas[H0FF(iH,2,3,3)+BRoffset], 0.0, "tau+", "tau-");
      result.set_BF(FH_input.gammas[H0FF(iH,3,1,1)+BRoffset], 0.0, "u", "ubar");
      result.set_BF(FH_input.gammas[H0FF(iH,3,2,2)+BRoffset], 0.0, "c", "cbar");
      result.set_BF(FH_input.gammas[H0FF(iH,3,3,3)+BRoffset], 0.0, "t", "tbar");
      result.set_BF(FH_input.gammas[H0FF(iH,4,1,1)+BRoffset], 0.0, "d", "dbar");
      result.set_BF(FH_input.gammas[H0FF(iH,4,2,2)+BRoffset], 0.0, "s", "sbar");
      result.set_BF(FH_input.gammas[H0FF(iH,4,3,3)+BRoffset], 0.0, "b", "bbar");

      // chargino decays
      result.set_BF(FH_input.gammas[H0ChaCha(iH,1,1)+BRoffset], 0.0, "~chi-_1", "~chi+_1");
      result.set_BF(FH_input.gammas[H0ChaCha(iH,1,2)+BRoffset], 0.0, "~chi-_1", "~chi+_2");
      result.set_BF(FH_input.gammas[H0ChaCha(iH,2,1)+BRoffset], 0.0, "~chi-_2", "~chi+_1");
      result.set_BF(FH_input.gammas[H0ChaCha(iH,2,2)+BRoffset], 0.0, "~chi-_2", "~chi+_2");

      // neutralino decays
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,1,1)+BRoffset], 0.0, "~chi0_1", "~chi0_1");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,2,2)+BRoffset], 0.0, "~chi0_2", "~chi0_2");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,3,3)+BRoffset], 0.0, "~chi0_3", "~chi0_3");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,4,4)+BRoffset], 0.0, "~chi0_4", "~chi0_4");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,1,2)+BRoffset], 0.0, "~chi0_1", "~chi0_2");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,1,3)+BRoffset], 0.0, "~chi0_1", "~chi0_3");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,1,4)+BRoffset], 0.0, "~chi0_1", "~chi0_4");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,2,3)+BRoffset], 0.0, "~chi0_2", "~chi0_3");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,2,4)+BRoffset], 0.0, "~chi0_2", "~chi0_4");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,3,4)+BRoffset], 0.0, "~chi0_3", "~chi0_4");

      // higgs + Z0 decays
      result.set_BF(FH_input.gammas[H0HV(iH,1)+BRoffset], 0.0, "h0_1", "Z0");
      result.set_BF(FH_input.gammas[H0HV(iH,2)+BRoffset], 0.0, "h0_2", "Z0");
      result.set_BF(FH_input.gammas[H0HV(iH,3)+BRoffset], 0.0, "A0", "Z0");

      // higgs+higgs decays
      result.set_BF(FH_input.gammas[H0HH(iH,1,1)+BRoffset], 0.0, "h0_1", "h0_1");
      result.set_BF(FH_input.gammas[H0HH(iH,2,2)+BRoffset], 0.0, "h0_2", "h0_2");
      result.set_BF(FH_input.gammas[H0HH(iH,3,3)+BRoffset], 0.0, "A0", "A0");
      result.set_BF(FH_input.gammas[H0HH(iH,4,4)+BRoffset], 0.0, "H+", "H-");
      result.set_BF(FH_input.gammas[H0HH(iH,1,2)+BRoffset], 0.0, "h0_1", "h0_2");
      result.set_BF(FH_input.gammas[H0HH(iH,1,3)+BRoffset], 0.0, "h0_1", "A0");
      result.set_BF(FH_input.gammas[H0HH(iH,2,3)+BRoffset], 0.0, "h0_2", "A0");

      // sfermion decays
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,1,1)+BRoffset], 0.0, psn.isnel, psn.isnelbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,1,2)+BRoffset], 0.0, psn.isnmul, psn.isnmulbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,1,3)+BRoffset], 0.0, psn.isntaul, psn.isntaulbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,2,1)+BRoffset], 0.0, psn.isell, psn.isellbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,2,1)+BRoffset], 0.0, psn.isell, psn.iselrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,2,1)+BRoffset], 0.0, psn.iselr, psn.isellbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,2,1)+BRoffset], 0.0, psn.iselr, psn.iselrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,2,2)+BRoffset], 0.0, psn.ismul, psn.ismulbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,2,2)+BRoffset], 0.0, psn.ismul, psn.ismurbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,2,2)+BRoffset], 0.0, psn.ismur, psn.ismulbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,2,2)+BRoffset], 0.0, psn.ismur, psn.ismurbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,2,3)+BRoffset], 0.0, psn.istau1, psn.istau1bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,2,3)+BRoffset], 0.0, psn.istau1, psn.istau2bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,2,3)+BRoffset], 0.0, psn.istau2, psn.istau1bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,2,3)+BRoffset], 0.0, psn.istau2, psn.istau2bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,3,1)+BRoffset], 0.0, psn.isul, psn.isulbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,3,1)+BRoffset], 0.0, psn.isul, psn.isurbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,3,1)+BRoffset], 0.0, psn.isur, psn.isulbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,3,1)+BRoffset], 0.0, psn.isur, psn.isurbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,3,2)+BRoffset], 0.0, psn.iscl, psn.isclbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,3,2)+BRoffset], 0.0, psn.iscl, psn.iscrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,3,2)+BRoffset], 0.0, psn.iscr, psn.isclbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,3,2)+BRoffset], 0.0, psn.iscr, psn.iscrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,3,3)+BRoffset], 0.0, psn.ist1, psn.ist1bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,3,3)+BRoffset], 0.0, psn.ist1, psn.ist2bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,3,3)+BRoffset], 0.0, psn.ist2, psn.ist1bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,3,3)+BRoffset], 0.0, psn.ist2, psn.ist2bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,3,1)+BRoffset], 0.0, psn.isdl, psn.isdlbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,3,1)+BRoffset], 0.0, psn.isdl, psn.isdrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,3,1)+BRoffset], 0.0, psn.isdr, psn.isdlbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,3,1)+BRoffset], 0.0, psn.isdr, psn.isdrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,3,2)+BRoffset], 0.0, psn.issl, psn.isslbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,3,2)+BRoffset], 0.0, psn.issl, psn.issrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,3,2)+BRoffset], 0.0, psn.issr, psn.isslbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,3,2)+BRoffset], 0.0, psn.issr, psn.issrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,3,3)+BRoffset], 0.0, psn.isb1, psn.isb1bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,3,3)+BRoffset], 0.0, psn.isb1, psn.isb2bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,3,3)+BRoffset], 0.0, psn.isb2, psn.isb1bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,3,3)+BRoffset], 0.0, psn.isb2, psn.isb2bar);
    }

    /// MSSM decays: A0
    void A0_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::A0_decays;
      mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);

      result.calculator = BEreq::cb_widtha_hdec.origin();
      result.calculator_version = BEreq::cb_widtha_hdec.version();

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
      result.set_BF(0.0, 0.0, "Z0", "Z0");
      result.set_BF(0.0, 0.0, "W+", "W-");
      result.set_BF(0.0, 0.0, "h0_1", "h0_1");
      result.set_BF(0.0, 0.0, "h0_2", "h0_2");
      result.set_BF(0.0, 0.0, "~nu_1", "~nubar_1");
      result.set_BF(0.0, 0.0, "~nu_2", "~nubar_2");
      result.set_BF(0.0, 0.0, "~nu_3", "~nubar_3");
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
      result.set_BF(BEreq::cb_wisusy_hdec->habrst/2.0, 0.0, psn.ist1, psn.ist2bar);
      result.set_BF(BEreq::cb_wisusy_hdec->habrst/2.0, 0.0, psn.ist1bar, psn.ist2);
      result.set_BF(BEreq::cb_wisusy_hdec->habrsb/2.0, 0.0, psn.isb1, psn.isb2bar);
      result.set_BF(BEreq::cb_wisusy_hdec->habrsb/2.0, 0.0, psn.isb1bar, psn.isb2);
      result.set_BF(BEreq::cb_wisusy_hdec->habrsl/2.0, 0.0, psn.istau1, psn.istau2bar);
      result.set_BF(BEreq::cb_wisusy_hdec->habrsl/2.0, 0.0, psn.istau1bar, psn.istau2);
    }

    /// FeynHiggs MSSM decays: A0
    void FH_A0_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::FH_A0_decays;

      // Get the mass pseudonyms for the gauge eigenstates
      mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);

      // unpack FeynHiggs Couplings
      fh_Couplings FH_input = *Dep::Higgs_Couplings;
      result.calculator = FH_input.calculator;
      result.calculator_version = FH_input.calculator_version;
      // Specify that we're talking about A0
      int iH = 2;
      // Set the total A0 Higgs width
      result.width_in_GeV = FH_input.gammas[iH];

      // vector-boson pair decays
      result.set_BF(FH_input.gammas[H0VV(iH,1)+BRoffset], 0.0, "gamma", "gamma");
      result.set_BF(FH_input.gammas[H0VV(iH,2)+BRoffset], 0.0, "gamma", "Z0");
      result.set_BF(FH_input.gammas[H0VV(iH,3)+BRoffset], 0.0, "Z0", "Z0");
      result.set_BF(FH_input.gammas[H0VV(iH,4)+BRoffset], 0.0, "W+", "W-");
      result.set_BF(FH_input.gammas[H0VV(iH,5)+BRoffset], 0.0, "g", "g");

      // SM fermion decays
      result.set_BF(FH_input.gammas[H0FF(iH,1,1,1)+BRoffset], 0.0, "nu_e", "nubar_e");
      result.set_BF(FH_input.gammas[H0FF(iH,1,2,2)+BRoffset], 0.0, "nu_mu", "nubar_mu");
      result.set_BF(FH_input.gammas[H0FF(iH,1,3,3)+BRoffset], 0.0, "nu_tau", "nubar_tau");
      result.set_BF(FH_input.gammas[H0FF(iH,2,1,1)+BRoffset], 0.0, "e+", "e-");
      result.set_BF(FH_input.gammas[H0FF(iH,2,2,2)+BRoffset], 0.0, "mu+", "mu-");
      result.set_BF(FH_input.gammas[H0FF(iH,2,3,3)+BRoffset], 0.0, "tau+", "tau-");
      result.set_BF(FH_input.gammas[H0FF(iH,3,1,1)+BRoffset], 0.0, "u", "ubar");
      result.set_BF(FH_input.gammas[H0FF(iH,3,2,2)+BRoffset], 0.0, "c", "cbar");
      result.set_BF(FH_input.gammas[H0FF(iH,3,3,3)+BRoffset], 0.0, "t", "tbar");
      result.set_BF(FH_input.gammas[H0FF(iH,4,1,1)+BRoffset], 0.0, "d", "dbar");
      result.set_BF(FH_input.gammas[H0FF(iH,4,2,2)+BRoffset], 0.0, "s", "sbar");
      result.set_BF(FH_input.gammas[H0FF(iH,4,3,3)+BRoffset], 0.0, "b", "bbar");

      // chargino decays
      result.set_BF(FH_input.gammas[H0ChaCha(iH,1,1)+BRoffset], 0.0, "~chi-_1", "~chi+_1");
      result.set_BF(FH_input.gammas[H0ChaCha(iH,1,2)+BRoffset], 0.0, "~chi-_1", "~chi+_2");
      result.set_BF(FH_input.gammas[H0ChaCha(iH,2,1)+BRoffset], 0.0, "~chi-_2", "~chi+_1");
      result.set_BF(FH_input.gammas[H0ChaCha(iH,2,2)+BRoffset], 0.0, "~chi-_2", "~chi+_2");

      // neutralino decays
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,1,1)+BRoffset], 0.0, "~chi0_1", "~chi0_1");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,2,2)+BRoffset], 0.0, "~chi0_2", "~chi0_2");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,3,3)+BRoffset], 0.0, "~chi0_3", "~chi0_3");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,4,4)+BRoffset], 0.0, "~chi0_4", "~chi0_4");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,1,2)+BRoffset], 0.0, "~chi0_1", "~chi0_2");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,1,3)+BRoffset], 0.0, "~chi0_1", "~chi0_3");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,1,4)+BRoffset], 0.0, "~chi0_1", "~chi0_4");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,2,3)+BRoffset], 0.0, "~chi0_2", "~chi0_3");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,2,4)+BRoffset], 0.0, "~chi0_2", "~chi0_4");
      result.set_BF(FH_input.gammas[H0NeuNeu(iH,3,4)+BRoffset], 0.0, "~chi0_3", "~chi0_4");

      // higgs + Z0 decays
      result.set_BF(FH_input.gammas[H0HV(iH,1)+BRoffset], 0.0, "h0_1", "Z0");
      result.set_BF(FH_input.gammas[H0HV(iH,2)+BRoffset], 0.0, "h0_2", "Z0");
      result.set_BF(FH_input.gammas[H0HV(iH,3)+BRoffset], 0.0, "A0", "Z0");

      // higgs+higgs decays
      result.set_BF(FH_input.gammas[H0HH(iH,1,1)+BRoffset], 0.0, "h0_1", "h0_1");
      result.set_BF(FH_input.gammas[H0HH(iH,2,2)+BRoffset], 0.0, "h0_2", "h0_2");
      result.set_BF(FH_input.gammas[H0HH(iH,3,3)+BRoffset], 0.0, "A0", "A0");
      result.set_BF(FH_input.gammas[H0HH(iH,4,4)+BRoffset], 0.0, "H+", "H-");
      result.set_BF(FH_input.gammas[H0HH(iH,1,2)+BRoffset], 0.0, "h0_1", "h0_2");
      result.set_BF(FH_input.gammas[H0HH(iH,1,3)+BRoffset], 0.0, "h0_1", "A0");
      result.set_BF(FH_input.gammas[H0HH(iH,2,3)+BRoffset], 0.0, "h0_2", "A0");

      // sfermion decays
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,1,1)+BRoffset], 0.0, psn.isnel, psn.isnelbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,1,2)+BRoffset], 0.0, psn.isnmul, psn.isnmulbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,1,3)+BRoffset], 0.0, psn.isntaul, psn.isntaulbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,2,1)+BRoffset], 0.0, psn.isell, psn.isellbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,2,1)+BRoffset], 0.0, psn.isell, psn.iselrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,2,1)+BRoffset], 0.0, psn.iselr, psn.isellbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,2,1)+BRoffset], 0.0, psn.iselr, psn.iselrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,2,2)+BRoffset], 0.0, psn.ismul, psn.ismulbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,2,2)+BRoffset], 0.0, psn.ismul, psn.ismurbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,2,2)+BRoffset], 0.0, psn.ismur, psn.ismulbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,2,2)+BRoffset], 0.0, psn.ismur, psn.ismurbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,2,3)+BRoffset], 0.0, psn.istau1, psn.istau1bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,2,3)+BRoffset], 0.0, psn.istau1, psn.istau2bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,2,3)+BRoffset], 0.0, psn.istau2, psn.istau1bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,2,3)+BRoffset], 0.0, psn.istau2, psn.istau2bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,3,1)+BRoffset], 0.0, psn.isul, psn.isulbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,3,1)+BRoffset], 0.0, psn.isul, psn.isurbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,3,1)+BRoffset], 0.0, psn.isur, psn.isulbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,3,1)+BRoffset], 0.0, psn.isur, psn.isurbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,3,2)+BRoffset], 0.0, psn.iscl, psn.isclbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,3,2)+BRoffset], 0.0, psn.iscl, psn.iscrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,3,2)+BRoffset], 0.0, psn.iscr, psn.isclbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,3,2)+BRoffset], 0.0, psn.iscr, psn.iscrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,3,3)+BRoffset], 0.0, psn.ist1, psn.ist1bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,3,3)+BRoffset], 0.0, psn.ist1, psn.ist2bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,3,3)+BRoffset], 0.0, psn.ist2, psn.ist1bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,3,3)+BRoffset], 0.0, psn.ist2, psn.ist2bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,3,1)+BRoffset], 0.0, psn.isdl, psn.isdlbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,3,1)+BRoffset], 0.0, psn.isdl, psn.isdrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,3,1)+BRoffset], 0.0, psn.isdr, psn.isdlbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,3,1)+BRoffset], 0.0, psn.isdr, psn.isdrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,3,2)+BRoffset], 0.0, psn.issl, psn.isslbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,3,2)+BRoffset], 0.0, psn.issl, psn.issrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,3,2)+BRoffset], 0.0, psn.issr, psn.isslbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,3,2)+BRoffset], 0.0, psn.issr, psn.issrbar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,1,3,3)+BRoffset], 0.0, psn.isb1, psn.isb1bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,1,2,3,3)+BRoffset], 0.0, psn.isb1, psn.isb2bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,1,3,3)+BRoffset], 0.0, psn.isb2, psn.isb1bar);
      result.set_BF(FH_input.gammas[H0SfSf(iH,2,2,3,3)+BRoffset], 0.0, psn.isb2, psn.isb2bar);
    }

    /// MSSM decays: Hplus
    void Hplus_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::Hplus_decays;
      mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);
     
      result.calculator = BEreq::cb_widthhc_hdec.origin();
      result.calculator_version = BEreq::cb_widthhc_hdec.version();

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
      result.set_BF(BEreq::cb_wisfer_hdec->bhcsl00/2.0, 0.0, psn.isellbar, psn.isnel);
      result.set_BF(BEreq::cb_wisfer_hdec->bhcsl00/2.0, 0.0, psn.ismulbar, psn.isnmul);
      result.set_BF(BEreq::cb_wisfer_hdec->bhcsl11, 0.0, psn.istau1bar, psn.isntaul);
      result.set_BF(BEreq::cb_wisfer_hdec->bhcsl21, 0.0, psn.istau2bar, psn.isntaul);
      result.set_BF(BEreq::cb_wisusy_hdec->hcbrsq/2.0, 0.0, psn.isul, psn.isdlbar);
      result.set_BF(BEreq::cb_wisusy_hdec->hcbrsq/2.0, 0.0, psn.iscl, psn.isslbar);
      result.set_BF(BEreq::cb_wisusy_hdec->hcbrstb(1,1), 0.0, psn.ist1, psn.isb1bar);
      result.set_BF(BEreq::cb_wisusy_hdec->hcbrstb(2,2), 0.0, psn.ist2, psn.isb2bar);
      result.set_BF(BEreq::cb_wisusy_hdec->hcbrstb(1,2), 0.0, psn.ist1, psn.isb2bar);
      result.set_BF(BEreq::cb_wisusy_hdec->hcbrstb(2,1), 0.0, psn.ist2, psn.isb1bar);

      //cout <<  "H+ Decay Table entry as an SLHA DECAY block: \n" << result.as_slhaea_block("H+") << endl;
      
    }

    /// FeynHiggs MSSM decays: H+
    void FH_Hplus_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::FH_Hplus_decays;

      // Get the mass pseudonyms for the gauge eigenstates
      mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);

      // unpack FeynHiggs Couplings
      fh_Couplings FH_input = *Dep::Higgs_Couplings;
      result.calculator = FH_input.calculator;
      result.calculator_version = FH_input.calculator_version;
      // Specify that we're talking about H+
      int iH = 3;
      // Set the total charged Higgs width
      result.width_in_GeV = FH_input.gammas[iH];

      int offset = BRoffset-1;

      // SM fermion decays
      result.set_BF(FH_input.gammas[HpFF(1,1,1)+offset], 0.0, "e+", "nu_e");
      result.set_BF(FH_input.gammas[HpFF(1,2,2)+offset], 0.0, "mu+", "nu_mu");
      result.set_BF(FH_input.gammas[HpFF(1,2,2)+offset], 0.0, "tau+", "nu_tau");
      result.set_BF(FH_input.gammas[HpFF(2,1,1)+offset], 0.0, "u", "dbar");
      result.set_BF(FH_input.gammas[HpFF(2,1,2)+offset], 0.0, "u", "sbar");
      result.set_BF(FH_input.gammas[HpFF(2,1,3)+offset], 0.0, "u", "bbar");
      result.set_BF(FH_input.gammas[HpFF(2,2,1)+offset], 0.0, "c", "dbar");
      result.set_BF(FH_input.gammas[HpFF(2,2,2)+offset], 0.0, "c", "sbar");
      result.set_BF(FH_input.gammas[HpFF(2,2,3)+offset], 0.0, "c", "bbar");
      result.set_BF(FH_input.gammas[HpFF(2,3,1)+offset], 0.0, "t", "dbar");
      result.set_BF(FH_input.gammas[HpFF(2,3,2)+offset], 0.0, "t", "sbar");
      result.set_BF(FH_input.gammas[HpFF(2,3,3)+offset], 0.0, "t", "bbar");

      // neutralino+chargino decays
      result.set_BF(FH_input.gammas[HpNeuCha(1,1)+offset], 0.0, "~chi0_1", "~chi+_1");
      result.set_BF(FH_input.gammas[HpNeuCha(1,2)+offset], 0.0, "~chi0_1", "~chi+_2");
      result.set_BF(FH_input.gammas[HpNeuCha(2,1)+offset], 0.0, "~chi0_2", "~chi+_1");
      result.set_BF(FH_input.gammas[HpNeuCha(2,2)+offset], 0.0, "~chi0_2", "~chi+_2");
      result.set_BF(FH_input.gammas[HpNeuCha(3,1)+offset], 0.0, "~chi0_3", "~chi+_1");
      result.set_BF(FH_input.gammas[HpNeuCha(3,2)+offset], 0.0, "~chi0_3", "~chi+_2");
      result.set_BF(FH_input.gammas[HpNeuCha(4,1)+offset], 0.0, "~chi0_4", "~chi+_1");
      result.set_BF(FH_input.gammas[HpNeuCha(4,2)+offset], 0.0, "~chi0_4", "~chi+_2");

      // higgs + W decays
      result.set_BF(FH_input.gammas[HpHV(1)+offset], 0.0, "W+", "h0_1");
      result.set_BF(FH_input.gammas[HpHV(2)+offset], 0.0, "W+", "h0_2");
      result.set_BF(FH_input.gammas[HpHV(3)+offset], 0.0, "W+", "A0");

      // sfermion decays
      result.set_BF(FH_input.gammas[HpSfSf(1,1,1,1,1)+offset], 0.0, psn.isellbar, psn.isnel);
      result.set_BF(FH_input.gammas[HpSfSf(1,1,1,2,2)+offset], 0.0, psn.ismulbar, psn.isnmul);
      result.set_BF(FH_input.gammas[HpSfSf(1,1,1,3,3)+offset], 0.0, psn.istau1bar, psn.isntaul);
      result.set_BF(FH_input.gammas[HpSfSf(2,1,1,3,3)+offset], 0.0, psn.istau2bar, psn.isntaul);
      result.set_BF(FH_input.gammas[HpSfSf(1,1,2,1,1)+offset], 0.0, psn.isul, psn.isdlbar);
      result.set_BF(FH_input.gammas[HpSfSf(1,2,2,1,1)+offset], 0.0, psn.isul, psn.isdrbar);
      result.set_BF(FH_input.gammas[HpSfSf(2,1,2,1,1)+offset], 0.0, psn.isur, psn.isdlbar);
      result.set_BF(FH_input.gammas[HpSfSf(2,2,2,1,1)+offset], 0.0, psn.isur, psn.isdrbar);
      result.set_BF(FH_input.gammas[HpSfSf(1,1,2,1,2)+offset], 0.0, psn.isul, psn.isslbar);
      result.set_BF(FH_input.gammas[HpSfSf(1,2,2,1,2)+offset], 0.0, psn.isul, psn.issrbar);
      result.set_BF(FH_input.gammas[HpSfSf(2,1,2,1,2)+offset], 0.0, psn.isur, psn.isslbar);
      result.set_BF(FH_input.gammas[HpSfSf(2,2,2,1,2)+offset], 0.0, psn.isur, psn.issrbar);
      result.set_BF(FH_input.gammas[HpSfSf(1,1,2,1,3)+offset], 0.0, psn.isul, psn.isb1bar);
      result.set_BF(FH_input.gammas[HpSfSf(1,2,2,1,3)+offset], 0.0, psn.isul, psn.isb2bar);
      result.set_BF(FH_input.gammas[HpSfSf(2,1,2,1,3)+offset], 0.0, psn.isur, psn.isb1bar);
      result.set_BF(FH_input.gammas[HpSfSf(2,2,2,1,3)+offset], 0.0, psn.isur, psn.isb2bar);
      result.set_BF(FH_input.gammas[HpSfSf(1,1,2,2,1)+offset], 0.0, psn.iscl, psn.isdlbar);
      result.set_BF(FH_input.gammas[HpSfSf(1,2,2,2,1)+offset], 0.0, psn.iscl, psn.isdrbar);
      result.set_BF(FH_input.gammas[HpSfSf(2,1,2,2,1)+offset], 0.0, psn.iscr, psn.isdlbar);
      result.set_BF(FH_input.gammas[HpSfSf(2,2,2,2,1)+offset], 0.0, psn.iscr, psn.isdrbar);
      result.set_BF(FH_input.gammas[HpSfSf(1,1,2,2,2)+offset], 0.0, psn.iscl, psn.isslbar);
      result.set_BF(FH_input.gammas[HpSfSf(1,2,2,2,2)+offset], 0.0, psn.iscl, psn.issrbar);
      result.set_BF(FH_input.gammas[HpSfSf(2,1,2,2,2)+offset], 0.0, psn.iscr, psn.isslbar);
      result.set_BF(FH_input.gammas[HpSfSf(2,2,2,2,2)+offset], 0.0, psn.iscr, psn.issrbar);
      result.set_BF(FH_input.gammas[HpSfSf(1,1,2,2,3)+offset], 0.0, psn.iscl, psn.isb1bar);
      result.set_BF(FH_input.gammas[HpSfSf(1,2,2,2,3)+offset], 0.0, psn.iscl, psn.isb2bar);
      result.set_BF(FH_input.gammas[HpSfSf(2,1,2,2,3)+offset], 0.0, psn.iscr, psn.isb1bar);
      result.set_BF(FH_input.gammas[HpSfSf(2,2,2,2,3)+offset], 0.0, psn.iscr, psn.isb2bar);
      result.set_BF(FH_input.gammas[HpSfSf(1,1,2,3,1)+offset], 0.0, psn.ist1, psn.isdlbar);
      result.set_BF(FH_input.gammas[HpSfSf(1,2,2,3,1)+offset], 0.0, psn.ist1, psn.isdrbar);
      result.set_BF(FH_input.gammas[HpSfSf(2,1,2,3,1)+offset], 0.0, psn.ist2, psn.isdlbar);
      result.set_BF(FH_input.gammas[HpSfSf(2,2,2,3,1)+offset], 0.0, psn.ist2, psn.isdrbar);
      result.set_BF(FH_input.gammas[HpSfSf(1,1,2,3,2)+offset], 0.0, psn.ist1, psn.isslbar);
      result.set_BF(FH_input.gammas[HpSfSf(1,2,2,3,2)+offset], 0.0, psn.ist1, psn.issrbar);
      result.set_BF(FH_input.gammas[HpSfSf(2,1,2,3,2)+offset], 0.0, psn.ist2, psn.isslbar);
      result.set_BF(FH_input.gammas[HpSfSf(2,2,2,3,2)+offset], 0.0, psn.ist2, psn.issrbar);
      result.set_BF(FH_input.gammas[HpSfSf(1,1,2,3,3)+offset], 0.0, psn.ist1, psn.isb1bar);
      result.set_BF(FH_input.gammas[HpSfSf(1,2,2,3,3)+offset], 0.0, psn.ist1, psn.isb2bar);
      result.set_BF(FH_input.gammas[HpSfSf(2,1,2,3,3)+offset], 0.0, psn.ist2, psn.isb1bar);
      result.set_BF(FH_input.gammas[HpSfSf(2,2,2,3,3)+offset], 0.0, psn.ist2, psn.isb2bar);

    }

    /// MSSM decays: Hminus
    void Hminus_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::Hminus_decays::Dep::Hplus_decay_rates);
    }

    /// MSSM decays: gluino
    void gluino_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::gluino_decays;
      mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);

      result.calculator = BEreq::cb_sd_gluiwidth.origin();
      result.calculator_version = BEreq::cb_sd_gluiwidth.version();

      result.width_in_GeV = BEreq::cb_sd_gluiwidth->gluitot;
      result.set_BF(BEreq::cb_sd_glui2body->brgsdownl, 0.0, psn.isdl, "dbar");
      result.set_BF(BEreq::cb_sd_glui2body->brgsdownl, 0.0, psn.isdlbar, "d");
      result.set_BF(BEreq::cb_sd_glui2body->brgsdownr, 0.0, psn.isdr, "dbar");
      result.set_BF(BEreq::cb_sd_glui2body->brgsdownr, 0.0, psn.isdrbar, "d");
      result.set_BF(BEreq::cb_sd_glui2body->brgsupl, 0.0, psn.isul, "ubar");
      result.set_BF(BEreq::cb_sd_glui2body->brgsupl, 0.0, psn.isulbar, "u");
      result.set_BF(BEreq::cb_sd_glui2body->brgsupr, 0.0, psn.isur, "ubar");
      result.set_BF(BEreq::cb_sd_glui2body->brgsupr, 0.0, psn.isurbar, "u");
      result.set_BF(BEreq::cb_sd_glui2body->brgsdownl, 0.0, psn.issl, "sbar");
      result.set_BF(BEreq::cb_sd_glui2body->brgsdownl, 0.0, psn.isslbar, "s");
      result.set_BF(BEreq::cb_sd_glui2body->brgsdownr, 0.0, psn.issr, "sbar");
      result.set_BF(BEreq::cb_sd_glui2body->brgsdownr, 0.0, psn.issrbar, "s");
      result.set_BF(BEreq::cb_sd_glui2body->brgsupl, 0.0, psn.iscl, "cbar");
      result.set_BF(BEreq::cb_sd_glui2body->brgsupl, 0.0, psn.isclbar, "c");
      result.set_BF(BEreq::cb_sd_glui2body->brgsupr, 0.0, psn.iscr, "cbar");
      result.set_BF(BEreq::cb_sd_glui2body->brgsupr, 0.0, psn.iscrbar, "c");
      result.set_BF(BEreq::cb_sd_glui2body->brgsb1, 0.0, psn.isb1, "bbar");
      result.set_BF(BEreq::cb_sd_glui2body->brgsb1, 0.0, psn.isb1bar, "b");
      result.set_BF(BEreq::cb_sd_glui2body->brgsb2, 0.0, psn.isb2, "bbar");
      result.set_BF(BEreq::cb_sd_glui2body->brgsb2, 0.0, psn.isb2bar, "b");
      result.set_BF(BEreq::cb_sd_glui2body->brgst1, 0.0, psn.ist1, "tbar");
      result.set_BF(BEreq::cb_sd_glui2body->brgst1, 0.0, psn.ist1bar, "t");
      result.set_BF(BEreq::cb_sd_glui2body->brgst2, 0.0, psn.ist2, "tbar");
      result.set_BF(BEreq::cb_sd_glui2body->brgst2, 0.0, psn.ist2bar, "t");
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
      result.set_BF(BEreq::cb_sd_glui3body->brwst1b, 0.0, psn.ist1, "bbar", "W-");
      result.set_BF(BEreq::cb_sd_glui3body->brwst1b, 0.0, psn.ist1bar, "b", "W+");
      result.set_BF(BEreq::cb_sd_glui3body->brhcst1b, 0.0, psn.ist1, "bbar", "H-");
      result.set_BF(BEreq::cb_sd_glui3body->brhcst1b, 0.0, psn.ist1bar, "b", "H+");
    }

    /// MSSM decays: stop_1
    void stop_1_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::stop_1_decays;
      mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);
     
      result.calculator = BEreq::cb_sd_stopwidth.origin();
      result.calculator_version = BEreq::cb_sd_stopwidth.version();

      result.width_in_GeV = BEreq::cb_sd_stopwidth->stoptot(1);
      result.set_BF(BEreq::cb_sd_stop2body->brst1neutt(1), 0.0, "~chi0_1", "t");
      result.set_BF(BEreq::cb_sd_stop2body->brst1neutt(2), 0.0, "~chi0_2", "t");
      result.set_BF(BEreq::cb_sd_stop2body->brst1neutt(3), 0.0, "~chi0_3", "t");
      result.set_BF(BEreq::cb_sd_stop2body->brst1neutt(4), 0.0, "~chi0_4", "t");
      result.set_BF(BEreq::cb_sd_stop2body->brst1charb(1), 0.0, "~chi+_1", "b");
      result.set_BF(BEreq::cb_sd_stop2body->brst1charb(2), 0.0, "~chi+_2", "b");
      result.set_BF(BEreq::cb_sd_stop2body->brst1glui, 0.0, "~g", "t");
      result.set_BF(BEreq::cb_sd_stop2body->brst1hcsb(1), 0.0, psn.isb1, "H+");
      result.set_BF(BEreq::cb_sd_stop2body->brst1hcsb(2), 0.0, psn.isb2, "H+");
      result.set_BF(BEreq::cb_sd_stop2body->brst1wsb(1), 0.0, psn.isb1, "W+");
      result.set_BF(BEreq::cb_sd_stop2body->brst1wsb(2), 0.0, psn.isb2, "W+");
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
      result.set_BF(BEreq::cb_sd_stop3body->brstsntau(1,1), 0.0, psn.isntaul, "b", "tau+");
      result.set_BF(BEreq::cb_sd_stop3body->brstsnel(1), 0.0, psn.isnel, "b", "e+");
      result.set_BF(BEreq::cb_sd_stop3body->brstsnel(1), 0.0, psn.isnmul, "b", "mu+");
      result.set_BF(BEreq::cb_sd_stop3body->brststau(1,1), 0.0, psn.istau1bar, "b", "nu_tau");
      result.set_BF(BEreq::cb_sd_stop3body->brststau(1,2), 0.0, psn.istau2bar, "b", "nu_tau");
      result.set_BF(BEreq::cb_sd_stop3body->brstsel(1,1), 0.0, psn.isellbar, "b", "nu_e");
      result.set_BF(BEreq::cb_sd_stop3body->brstsel(1,2), 0.0, psn.iselrbar, "b", "nu_e");
      result.set_BF(BEreq::cb_sd_stop3body->brstsel(1,1), 0.0, psn.ismulbar, "b", "nu_mu");
      result.set_BF(BEreq::cb_sd_stop3body->brstsel(1,2), 0.0, psn.ismurbar, "b", "nu_mu");
      result.set_BF(BEreq::cb_sd_stop3body->brstbsbst(1,1), 0.0, psn.isb1bar, "b", "t");
      result.set_BF(BEreq::cb_sd_stop3body->brstbsbst(1,2), 0.0, psn.isb2bar, "b", "t");
      result.set_BF(BEreq::cb_sd_stop3body->brstbbsbt(1,1), 0.0, psn.isb1, "bbar", "t");
      result.set_BF(BEreq::cb_sd_stop3body->brstbbsbt(1,2), 0.0, psn.isb2, "bbar", "t");
      result.set_BF(BEreq::cb_sd_stop3body->brstupsbdow(1,1), 0.0, psn.isb1, "dbar", "u");
      result.set_BF(BEreq::cb_sd_stop3body->brstupsbdow(1,2), 0.0, psn.isb2, "dbar", "u");
      result.set_BF(BEreq::cb_sd_stop3body->brstupsbdow(1,1), 0.0, psn.isb1, "sbar", "c");
      result.set_BF(BEreq::cb_sd_stop3body->brstupsbdow(1,2), 0.0, psn.isb2, "sbar", "c");
      result.set_BF(BEreq::cb_sd_stop3body->brsttausbnu(1,1), 0.0, psn.isb1, "tau+", "nu_tau");
      result.set_BF(BEreq::cb_sd_stop3body->brsttausbnu(1,2), 0.0, psn.isb2, "tau+", "nu_tau");
      result.set_BF(BEreq::cb_sd_stop3body->brstelsbnu(1,1), 0.0, psn.isb1, "e+", "nu_e");
      result.set_BF(BEreq::cb_sd_stop3body->brstelsbnu(1,2), 0.0, psn.isb2, "e+", "nu_e");
      result.set_BF(BEreq::cb_sd_stop3body->brstelsbnu(1,1), 0.0, psn.isb1, "mu+", "nu_mu");
      result.set_BF(BEreq::cb_sd_stop3body->brstelsbnu(1,2), 0.0, psn.isb2, "mu+", "nu_mu");
    }

    /// MSSM decays: stopbar_1
    void stopbar_1_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::stopbar_1_decays::Dep::stop_1_decay_rates);
    }

    /// MSSM decays: stop_2
    void stop_2_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::stop_2_decays;
      mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);

      result.calculator = BEreq::cb_sd_stopwidth.origin();
      result.calculator_version = BEreq::cb_sd_stopwidth.version();

      result.width_in_GeV = BEreq::cb_sd_stopwidth->stoptot(2);
      result.set_BF(BEreq::cb_sd_stop2body->brst2neutt(1), 0.0, "~chi0_1", "t");
      result.set_BF(BEreq::cb_sd_stop2body->brst2neutt(2), 0.0, "~chi0_2", "t");
      result.set_BF(BEreq::cb_sd_stop2body->brst2neutt(3), 0.0, "~chi0_3", "t");
      result.set_BF(BEreq::cb_sd_stop2body->brst2neutt(4), 0.0, "~chi0_4", "t");
      result.set_BF(BEreq::cb_sd_stop2body->brst2charb(1), 0.0, "~chi+_1", "b");
      result.set_BF(BEreq::cb_sd_stop2body->brst2charb(2), 0.0, "~chi+_2", "b");
      result.set_BF(BEreq::cb_sd_stop2body->brst2glui, 0.0, "~g", "t");
      result.set_BF(BEreq::cb_sd_stop2body->brst2hl, 0.0, psn.ist1, "h0_1");
      result.set_BF(BEreq::cb_sd_stop2body->brst2hh, 0.0, psn.ist1, "h0_2");
      result.set_BF(BEreq::cb_sd_stop2body->brst2ha, 0.0, psn.ist1, "A0");
      result.set_BF(BEreq::cb_sd_stop2body->brst2hcsb(1), 0.0, psn.isb1, "H+");
      result.set_BF(BEreq::cb_sd_stop2body->brst2hcsb(2), 0.0, psn.isb2, "H+");
      result.set_BF(BEreq::cb_sd_stop2body->brst2ztop, 0.0, psn.ist1, "Z0");
      result.set_BF(BEreq::cb_sd_stop2body->brst2wsb(1), 0.0, psn.isb1, "W+");
      result.set_BF(BEreq::cb_sd_stop2body->brst2wsb(2), 0.0, psn.isb2, "W+");
      result.set_BF(BEreq::cb_sd_stop3body->brstopw(2,1), 0.0, "~chi0_1", "b", "W+");
      result.set_BF(BEreq::cb_sd_stop3body->brstopw(2,2), 0.0, "~chi0_2", "b", "W+");
      result.set_BF(BEreq::cb_sd_stop3body->brstopw(2,3), 0.0, "~chi0_3", "b", "W+");
      result.set_BF(BEreq::cb_sd_stop3body->brstopw(2,4), 0.0, "~chi0_4", "b", "W+");
      result.set_BF(BEreq::cb_sd_stop3body->brstoph(2,1), 0.0, "~chi0_1", "b", "H+");
      result.set_BF(BEreq::cb_sd_stop3body->brstoph(2,2), 0.0, "~chi0_2", "b", "H+");
      result.set_BF(BEreq::cb_sd_stop3body->brstoph(2,3), 0.0, "~chi0_3", "b", "H+");
      result.set_BF(BEreq::cb_sd_stop3body->brstoph(2,4), 0.0, "~chi0_4", "b", "H+");
      result.set_BF(BEreq::cb_sd_stop3body->brstsntau(2,1), 0.0, psn.isntaul, "b", "tau+");
      result.set_BF(BEreq::cb_sd_stop3body->brstsnel(2), 0.0, psn.isnel, "b", "e+");
      result.set_BF(BEreq::cb_sd_stop3body->brstsnel(2), 0.0, psn.isnmul, "b", "mu+");
      result.set_BF(BEreq::cb_sd_stop3body->brststau(2,1), 0.0, psn.istau1bar, "b", "nu_tau");
      result.set_BF(BEreq::cb_sd_stop3body->brststau(2,2), 0.0, psn.istau2bar, "b", "nu_tau");
      result.set_BF(BEreq::cb_sd_stop3body->brstsel(2,1), 0.0, psn.isellbar, "b", "nu_e");
      result.set_BF(BEreq::cb_sd_stop3body->brstsel(2,2), 0.0, psn.iselrbar, "b", "nu_e");
      result.set_BF(BEreq::cb_sd_stop3body->brstsel(2,1), 0.0, psn.ismulbar, "b", "nu_mu");
      result.set_BF(BEreq::cb_sd_stop3body->brstsel(2,2), 0.0, psn.ismurbar, "b", "nu_mu");
      result.set_BF(BEreq::cb_sd_stop3body->brstbsbst(2,1), 0.0, psn.isb1bar, "b", "t");
      result.set_BF(BEreq::cb_sd_stop3body->brstbsbst(2,2), 0.0, psn.isb2bar, "b", "t");
      result.set_BF(BEreq::cb_sd_stop3body->brstbbsbt(2,1), 0.0, psn.isb1, "bbar", "t");
      result.set_BF(BEreq::cb_sd_stop3body->brstbbsbt(2,2), 0.0, psn.isb2, "bbar", "t");
      result.set_BF(BEreq::cb_sd_stop3body->brstupsbdow(2,1), 0.0, psn.isb1, "dbar", "u");
      result.set_BF(BEreq::cb_sd_stop3body->brstupsbdow(2,2), 0.0, psn.isb2, "dbar", "u");
      result.set_BF(BEreq::cb_sd_stop3body->brstupsbdow(2,1), 0.0, psn.isb1, "sbar", "c");
      result.set_BF(BEreq::cb_sd_stop3body->brstupsbdow(2,2), 0.0, psn.isb2, "sbar", "c");
      result.set_BF(BEreq::cb_sd_stop3body->brsttausbnu(2,1), 0.0, psn.isb1, "tau+", "nu_tau");
      result.set_BF(BEreq::cb_sd_stop3body->brsttausbnu(2,2), 0.0, psn.isb2, "tau+", "nu_tau");
      result.set_BF(BEreq::cb_sd_stop3body->brstelsbnu(2,1), 0.0, psn.isb1, "e+", "nu_e");
      result.set_BF(BEreq::cb_sd_stop3body->brstelsbnu(2,2), 0.0, psn.isb2, "e+", "nu_e");
      result.set_BF(BEreq::cb_sd_stop3body->brstelsbnu(2,1), 0.0, psn.isb1, "mu+", "nu_mu");
      result.set_BF(BEreq::cb_sd_stop3body->brstelsbnu(2,2), 0.0, psn.isb2, "mu+", "nu_mu");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1tt, 0.0, psn.ist1, "t", "tbar");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1tt, 0.0, psn.ist1bar, "t", "t");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1bb, 0.0, psn.ist1, "b", "bbar");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1uu, 0.0, psn.ist1, "u", "ubar");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1dd, 0.0, psn.ist1, "d", "dbar");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1uu, 0.0, psn.ist1, "c", "cbar");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1dd, 0.0, psn.ist1, "s", "sbar");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1ee, 0.0, psn.ist1, "e-", "e+");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1ee, 0.0, psn.ist1, "mu-", "mu+");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1tautau, 0.0, psn.ist1, "tau-", "tau+");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1nunu, 0.0, psn.ist1, "nu_e", "nubar_e");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1nunu, 0.0, psn.ist1, "nu_mu", "nubar_mu");
      result.set_BF(BEreq::cb_sd_stop3body->brst2st1nunu, 0.0, psn.ist1, "nu_tau", "nubar_tau");
    }

    /// MSSM decays: stopbar_2
    void stopbar_2_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::stopbar_2_decays::Dep::stop_2_decay_rates);
    }

    /// MSSM decays: sbottom_1
    void sbottom_1_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::sbottom_1_decays;
      mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);

      result.calculator = BEreq::cb_sd_sbotwidth.origin();
      result.calculator_version = BEreq::cb_sd_sbotwidth.version();

      result.width_in_GeV = BEreq::cb_sd_sbotwidth->sbottot(1);
      result.set_BF(BEreq::cb_sd_sbot2body->brsb1neutt(1), 0.0, "~chi0_1", "b");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb1neutt(2), 0.0, "~chi0_2", "b");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb1neutt(3), 0.0, "~chi0_3", "b");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb1neutt(4), 0.0, "~chi0_4", "b");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb1chart(1), 0.0, "~chi-_1", "t");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb1chart(2), 0.0, "~chi-_2", "t");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb1glui, 0.0, "~g", "b");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb1hcst(1), 0.0, psn.ist1, "H-");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb1hcst(2), 0.0, psn.ist2, "H-");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb1wst(1), 0.0, psn.ist1, "W-");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb1wst(2), 0.0, psn.ist2, "W-");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsntau(1,1), 0.0, psn.isntaulbar, "t", "tau-");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsnel(1), 0.0, psn.isnelbar, "t", "e-");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsnel(1), 0.0, psn.isnmulbar, "t", "mu-");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbstau(1,1), 0.0, psn.istau1, "t", "nubar_tau");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbstau(1,2), 0.0, psn.istau2, "t", "nubar_tau");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsel(1,1), 0.0, psn.isell, "t", "nubar_e");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsel(1,2), 0.0, psn.iselr, "t", "nubar_e");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsel(1,1), 0.0, psn.ismul, "t", "nubar_mu");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsel(1,2), 0.0, psn.ismur, "t", "nubar_mu");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtstsb(1,1), 0.0, psn.ist1bar, "t", "b");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtstsb(1,2), 0.0, psn.ist2bar, "t", "b");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtbstb(1,1), 0.0, psn.ist1, "tbar", "b");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtbstb(1,2), 0.0, psn.ist2, "tbar", "b");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbupstdow(1,1), 0.0, psn.ist1, "ubar", "d");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbupstdow(1,2), 0.0, psn.ist2, "ubar", "d");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbupstdow(1,1), 0.0, psn.ist1, "cbar", "s");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbupstdow(1,2), 0.0, psn.ist2, "cbar", "s");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtaustnu(1,1), 0.0, psn.ist1, "tau-", "nubar_tau");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtaustnu(1,2), 0.0, psn.ist2, "tau-", "nubar_tau");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbelstnu(1,1), 0.0, psn.ist1, "e-", "nubar_e");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbelstnu(1,2), 0.0, psn.ist1, "e-", "nubar_e");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbelstnu(1,1), 0.0, psn.ist1, "mu-", "nubar_mu");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbelstnu(1,2), 0.0, psn.ist1, "mu-", "nubar_mu");
    }

    /// MSSM decays: sbottombar_1
    void sbottombar_1_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::sbottombar_1_decays::Dep::sbottom_1_decay_rates);
    }

    /// MSSM decays: sbottom_2
    void sbottom_2_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::sbottom_2_decays;
      mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);
     
      result.calculator = BEreq::cb_sd_sbotwidth.origin();
      result.calculator_version = BEreq::cb_sd_sbotwidth.version();

      result.width_in_GeV = BEreq::cb_sd_sbotwidth->sbottot(2);
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2neutt(1), 0.0, "~chi0_1", "b");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2neutt(2), 0.0, "~chi0_2", "b");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2neutt(3), 0.0, "~chi0_3", "b");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2neutt(4), 0.0, "~chi0_4", "b");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2chart(1), 0.0, "~chi-_1", "t");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2chart(2), 0.0, "~chi-_2", "t");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2glui, 0.0, "~g", "b");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2hl, 0.0, psn.isb1, "h0_1");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2hh, 0.0, psn.isb1, "h0_2");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2ha, 0.0, psn.isb1, "A0");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2hcst(1), 0.0, psn.ist1, "H-");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2hcst(2), 0.0, psn.ist2, "H-");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2zbot, 0.0, psn.isb1, "Z0");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2wst(1), 0.0, psn.ist1, "W-");
      result.set_BF(BEreq::cb_sd_sbot2body->brsb2wst(2), 0.0, psn.ist2, "W-");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsntau(2,1), 0.0, psn.isntaulbar, "t", "tau-");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsnel(2), 0.0, psn.isnelbar, "t", "e-");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsnel(2), 0.0, psn.isnmulbar, "t", "mu-");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbstau(2,1), 0.0, psn.istau1, "t", "nubar_tau");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbstau(2,2), 0.0, psn.istau2, "t", "nubar_tau");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsel(2,1), 0.0, psn.isell, "t", "nubar_e");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsel(2,2), 0.0, psn.iselr, "t", "nubar_e");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsel(2,1), 0.0, psn.ismul, "t", "nubar_mu");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbsel(2,2), 0.0, psn.ismur, "t", "nubar_mu");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtstsb(2,1), 0.0, psn.ist1bar, "t", "b");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtstsb(2,2), 0.0, psn.ist2bar, "t", "b");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtbstb(2,1), 0.0, psn.ist1, "tbar", "b");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtbstb(2,2), 0.0, psn.ist2, "tbar", "b");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbupstdow(2,1), 0.0, psn.ist1, "ubar", "d");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbupstdow(2,2), 0.0, psn.ist2, "ubar", "d");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbupstdow(2,1), 0.0, psn.ist1, "cbar", "s");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbupstdow(2,2), 0.0, psn.ist2, "cbar", "s");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtaustnu(2,1), 0.0, psn.ist1, "tau-", "nubar_tau");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbtaustnu(2,2), 0.0, psn.ist2, "tau-", "nubar_tau");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbelstnu(2,1), 0.0, psn.ist1, "e-", "nubar_e");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbelstnu(2,2), 0.0, psn.ist1, "e-", "nubar_e");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbelstnu(2,1), 0.0, psn.ist1, "mu-", "nubar_mu");
      result.set_BF(BEreq::cb_sd_sbot3body->brsbelstnu(2,2), 0.0, psn.ist1, "mu-", "nubar_mu");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1bb, 0.0, psn.isb1, "b", "bbar");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1starbb, 0.0, psn.isb1bar, "b", "b");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1tt, 0.0, psn.isb1, "t", "tbar");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1uu, 0.0, psn.isb1, "u", "ubar");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1dd, 0.0, psn.isb1, "d", "dbar");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1uu, 0.0, psn.isb1, "c", "cbar");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1dd, 0.0, psn.isb1, "s", "sbar");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1ee, 0.0, psn.isb1, "e-", "e+");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1ee, 0.0, psn.isb1, "mu-", "mu+");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1tautau, 0.0, psn.isb1, "tau-", "tau+");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1nunu, 0.0, psn.isb1, "nu_e", "nubar_e");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1nunu, 0.0, psn.isb1, "nu_mu", "nubar_mu");
      result.set_BF(BEreq::cb_sd_sbot3body->brsb2sb1nunu, 0.0, psn.isb1, "nu_tau", "nubar_tau");
    }

    /// MSSM decays: sbottombar_2
    void sbottombar_2_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::sbottombar_2_decays::Dep::sbottom_2_decay_rates);
    }

    /// MSSM decays: sup_l
    void sup_l_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::sup_l_decays;

      result.calculator = BEreq::cb_sd_supwidth.origin();
      result.calculator_version = BEreq::cb_sd_supwidth.version();

      result.width_in_GeV = BEreq::cb_sd_supwidth->supltot2;
      result.set_BF(BEreq::cb_sd_sup2body->brsuplnup(1), 0.0, "~chi0_1", "u");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplnup(2), 0.0, "~chi0_2", "u");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplnup(3), 0.0, "~chi0_3", "u");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplnup(4), 0.0, "~chi0_4", "u");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplcdow(1), 0.0, "~chi+_1", "d");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplcdow(2), 0.0, "~chi+_2", "d");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplglui, 0.0, "~g", "u");
    }

    /// MSSM decays: supbar_l
    void supbar_l_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::supbar_l_decays::Dep::sup_l_decay_rates);
    }

    /// MSSM decays: sup_r
    void sup_r_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::sup_r_decays;
      result.calculator = BEreq::cb_sd_supwidth.origin();
      result.calculator_version = BEreq::cb_sd_supwidth.version();
      result.width_in_GeV = BEreq::cb_sd_supwidth->suprtot2;
      result.set_BF(BEreq::cb_sd_sup2body->brsuprnup(1), 0.0, "~chi0_1", "u");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprnup(2), 0.0, "~chi0_2", "u");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprnup(3), 0.0, "~chi0_3", "u");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprnup(4), 0.0, "~chi0_4", "u");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprcdow(1), 0.0, "~chi+_1", "d");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprcdow(2), 0.0, "~chi+_2", "d");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprglui, 0.0, "~g", "u");
    }

    /// MSSM decays: supbar_r
    void supbar_r_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::supbar_r_decays::Dep::sup_r_decay_rates);
    }

    /// MSSM decays: sdown_l
    void sdown_l_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::sdown_l_decays;
      result.calculator = BEreq::cb_sd_sdownwidth.origin();
      result.calculator_version = BEreq::cb_sd_sdownwidth.version();
      result.width_in_GeV = BEreq::cb_sd_sdownwidth->sdowltot2;
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlndow(1), 0.0, "~chi0_1", "d");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlndow(2), 0.0, "~chi0_2", "d");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlndow(3), 0.0, "~chi0_3", "d");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlndow(4), 0.0, "~chi0_4", "d");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlchup(1), 0.0, "~chi-_1", "u");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlchup(2), 0.0, "~chi-_2", "u");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlglui, 0.0, "~g", "d");
    }

    /// MSSM decays: sdownbar_l
    void sdownbar_l_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::sdownbar_l_decays::Dep::sdown_l_decay_rates);
    }

    /// MSSM decays: sdown_r
    void sdown_r_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::sdown_r_decays;
      result.calculator = BEreq::cb_sd_sdownwidth.origin();
      result.calculator_version = BEreq::cb_sd_sdownwidth.version();
      result.width_in_GeV = BEreq::cb_sd_sdownwidth->sdowrtot2;
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrndow(1), 0.0, "~chi0_1", "d");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrndow(2), 0.0, "~chi0_2", "d");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrndow(3), 0.0, "~chi0_3", "d");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrndow(4), 0.0, "~chi0_4", "d");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrchup(1), 0.0, "~chi-_1", "u");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrchup(2), 0.0, "~chi-_2", "u");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrglui, 0.0, "~g", "d");
    }

    /// MSSM decays: sdownbar_r
    void sdownbar_r_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::sdownbar_r_decays::Dep::sdown_r_decay_rates);
    }

    /// MSSM decays: scharm_l
    void scharm_l_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::scharm_l_decays;
      result.calculator = BEreq::cb_sd_supwidth.origin();
      result.calculator_version = BEreq::cb_sd_supwidth.version();
      result.width_in_GeV = BEreq::cb_sd_supwidth->supltot2;
      result.set_BF(BEreq::cb_sd_sup2body->brsuplnup(1), 0.0, "~chi0_1", "c");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplnup(2), 0.0, "~chi0_2", "c");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplnup(3), 0.0, "~chi0_3", "c");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplnup(4), 0.0, "~chi0_4", "c");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplcdow(1), 0.0, "~chi+_1", "s");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplcdow(2), 0.0, "~chi+_2", "s");
      result.set_BF(BEreq::cb_sd_sup2body->brsuplglui, 0.0, "~g", "c");
    }

    /// MSSM decays: scharmbar_l
    void scharmbar_l_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::scharmbar_l_decays::Dep::scharm_l_decay_rates);
    }

    /// MSSM decays: scharm_r
    void scharm_r_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::scharm_r_decays;
      result.calculator = BEreq::cb_sd_supwidth.origin();
      result.calculator_version = BEreq::cb_sd_supwidth.version();
      result.width_in_GeV = BEreq::cb_sd_supwidth->suprtot2;
      result.set_BF(BEreq::cb_sd_sup2body->brsuprnup(1), 0.0, "~chi0_1", "c");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprnup(2), 0.0, "~chi0_2", "c");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprnup(3), 0.0, "~chi0_3", "c");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprnup(4), 0.0, "~chi0_4", "c");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprcdow(1), 0.0, "~chi+_1", "s");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprcdow(2), 0.0, "~chi+_2", "s");
      result.set_BF(BEreq::cb_sd_sup2body->brsuprglui, 0.0, "~g", "c");
    }

    /// MSSM decays: scharmbar_r
    void scharmbar_r_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::scharmbar_r_decays::Dep::scharm_r_decay_rates);
    }

    /// MSSM decays: sstrange_l
    void sstrange_l_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::sstrange_l_decays;
      result.calculator = BEreq::cb_sd_sdownwidth.origin();
      result.calculator_version = BEreq::cb_sd_sdownwidth.version();
      result.width_in_GeV = BEreq::cb_sd_sdownwidth->sdowltot2;
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlndow(1), 0.0, "~chi0_1", "s");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlndow(2), 0.0, "~chi0_2", "s");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlndow(3), 0.0, "~chi0_3", "s");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlndow(4), 0.0, "~chi0_4", "s");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlchup(1), 0.0, "~chi-_1", "c");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlchup(2), 0.0, "~chi-_2", "c");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowlglui, 0.0, "~g", "s");
    }

    /// MSSM decays: sstrangebar_l
    void sstrangebar_l_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::sstrangebar_l_decays::Dep::sstrange_l_decay_rates);
    }

    /// MSSM decays: sstrange_r
    void sstrange_r_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::sstrange_r_decays;
      result.calculator = BEreq::cb_sd_sdownwidth.origin();
      result.calculator_version = BEreq::cb_sd_sdownwidth.version();
      result.width_in_GeV = BEreq::cb_sd_sdownwidth->sdowrtot2;
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrndow(1), 0.0, "~chi0_1", "s");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrndow(2), 0.0, "~chi0_2", "s");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrndow(3), 0.0, "~chi0_3", "s");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrndow(4), 0.0, "~chi0_4", "s");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrchup(1), 0.0, "~chi-_1", "c");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrchup(2), 0.0, "~chi-_2", "c");
      result.set_BF(BEreq::cb_sd_sdown2body->brsdowrglui, 0.0, "~g", "s");
    }

    /// MSSM decays: sstrangebar_r
    void sstrangebar_r_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::sstrangebar_r_decays::Dep::sstrange_r_decay_rates);
    }

    /// MSSM decays: selectron_l
    void selectron_l_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::selectron_l_decays;
      result.calculator = BEreq::cb_sd_selwidth.origin();
      result.calculator_version = BEreq::cb_sd_selwidth.version();
      result.width_in_GeV = BEreq::cb_sd_selwidth->selltot2;
      result.set_BF(BEreq::cb_sd_sel2body->brsellneute(1), 0.0, "~chi0_1", "e-");
      result.set_BF(BEreq::cb_sd_sel2body->brsellneute(2), 0.0, "~chi0_2", "e-");
      result.set_BF(BEreq::cb_sd_sel2body->brsellneute(3), 0.0, "~chi0_3", "e-");
      result.set_BF(BEreq::cb_sd_sel2body->brsellneute(4), 0.0, "~chi0_4", "e-");
      result.set_BF(BEreq::cb_sd_sel2body->brsellcharnue(1), 0.0, "~chi-_1", "nu_e");
      result.set_BF(BEreq::cb_sd_sel2body->brsellcharnue(2), 0.0, "~chi-_2", "nu_e");
    }

    /// MSSM decays: selectronbar_l
    void selectronbar_l_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::selectronbar_l_decays::Dep::selectron_l_decay_rates);
    }

    /// MSSM decays: selectron_r
    void selectron_r_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::selectron_r_decays;
      result.calculator = BEreq::cb_sd_selwidth.origin();
      result.calculator_version = BEreq::cb_sd_selwidth.version();
      result.width_in_GeV = BEreq::cb_sd_selwidth->selrtot2;
      result.set_BF(BEreq::cb_sd_sel2body->brselrneute(1), 0.0, "~chi0_1", "e-");
      result.set_BF(BEreq::cb_sd_sel2body->brselrneute(2), 0.0, "~chi0_2", "e-");
      result.set_BF(BEreq::cb_sd_sel2body->brselrneute(3), 0.0, "~chi0_3", "e-");
      result.set_BF(BEreq::cb_sd_sel2body->brselrneute(4), 0.0, "~chi0_4", "e-");
      result.set_BF(BEreq::cb_sd_sel2body->brselrcharnue(1), 0.0, "~chi-_1", "nu_e");
      result.set_BF(BEreq::cb_sd_sel2body->brselrcharnue(2), 0.0, "~chi-_2", "nu_e");
    }

    /// MSSM decays: selectronbar_r
    void selectronbar_r_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::selectronbar_r_decays::Dep::selectron_r_decay_rates);
    }
  
    /// MSSM decays: smuon_l
    void smuon_l_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::smuon_l_decays;
      result.calculator = BEreq::cb_sd_selwidth.origin();
      result.calculator_version = BEreq::cb_sd_selwidth.version();
      result.width_in_GeV = BEreq::cb_sd_selwidth->selltot2;
      result.set_BF(BEreq::cb_sd_sel2body->brsellneute(1), 0.0, "~chi0_1", "mu-");
      result.set_BF(BEreq::cb_sd_sel2body->brsellneute(2), 0.0, "~chi0_2", "mu-");
      result.set_BF(BEreq::cb_sd_sel2body->brsellneute(3), 0.0, "~chi0_3", "mu-");
      result.set_BF(BEreq::cb_sd_sel2body->brsellneute(4), 0.0, "~chi0_4", "mu-");
      result.set_BF(BEreq::cb_sd_sel2body->brsellcharnue(1), 0.0, "~chi-_1", "nu_mu");
      result.set_BF(BEreq::cb_sd_sel2body->brsellcharnue(2), 0.0, "~chi-_2", "nu_mu");
    }

    /// MSSM decays: smuonbar_l
    void smuonbar_l_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::smuonbar_l_decays::Dep::smuon_l_decay_rates);
    }
  
    /// MSSM decays: smuon_r
    void smuon_r_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::smuon_r_decays;
      result.calculator = BEreq::cb_sd_selwidth.origin();
      result.calculator_version = BEreq::cb_sd_selwidth.version();
      result.width_in_GeV = BEreq::cb_sd_selwidth->selrtot2;
      result.set_BF(BEreq::cb_sd_sel2body->brselrneute(1), 0.0, "~chi0_1", "mu-");
      result.set_BF(BEreq::cb_sd_sel2body->brselrneute(2), 0.0, "~chi0_2", "mu-");
      result.set_BF(BEreq::cb_sd_sel2body->brselrneute(3), 0.0, "~chi0_3", "mu-");
      result.set_BF(BEreq::cb_sd_sel2body->brselrneute(4), 0.0, "~chi0_4", "mu-");
      result.set_BF(BEreq::cb_sd_sel2body->brselrcharnue(1), 0.0, "~chi-_1", "nu_mu");
      result.set_BF(BEreq::cb_sd_sel2body->brselrcharnue(2), 0.0, "~chi-_2", "nu_mu");
    }
  
    /// MSSM decays: smuonbar_r
    void smuonbar_r_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::smuonbar_r_decays::Dep::smuon_r_decay_rates);
    }
  
    /// MSSM decays: stau_1
    void stau_1_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::stau_1_decays;
      mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);
      
      result.calculator = BEreq::cb_sd_stauwidth.origin();
      result.calculator_version = BEreq::cb_sd_stauwidth.version();

      result.width_in_GeV = BEreq::cb_sd_stauwidth->stau1tot2;
      result.set_BF(BEreq::cb_sd_stau2body->brstau1neut(1), 0.0, "~chi0_1", "tau-");
      result.set_BF(BEreq::cb_sd_stau2body->brstau1neut(2), 0.0, "~chi0_2", "tau-");
      result.set_BF(BEreq::cb_sd_stau2body->brstau1neut(3), 0.0, "~chi0_3", "tau-");
      result.set_BF(BEreq::cb_sd_stau2body->brstau1neut(4), 0.0, "~chi0_4", "tau-");
      result.set_BF(BEreq::cb_sd_stau2body->brstau1char(1), 0.0, "~chi-_1", "nu_tau");
      result.set_BF(BEreq::cb_sd_stau2body->brstau1char(2), 0.0, "~chi-_2", "nu_tau");
      result.set_BF(BEreq::cb_sd_stau2body->brstau1hcsn(1), 0.0, psn.isntaul, "H-");
      result.set_BF(BEreq::cb_sd_stau2body->brstau1wsn(1), 0.0, psn.isntaul, "W-");
      result.set_BF(BEreq::cb_sd_stau2bodygrav->brstautaugrav, 0.0, "~G", "tau-");
    }

    /// MSSM decays: staubar_1
    void staubar_1_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::staubar_1_decays::Dep::stau_1_decay_rates);
    }
  
    /// MSSM decays: stau_2
    void stau_2_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::stau_2_decays;
      mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);
      
      result.calculator = BEreq::cb_sd_stauwidth.origin();
      result.calculator_version = BEreq::cb_sd_stauwidth.version();

      result.width_in_GeV = BEreq::cb_sd_stauwidth->stau2tot2;
      result.set_BF(BEreq::cb_sd_stau2body->brstau2neut(1), 0.0, "~chi0_1", "tau-");
      result.set_BF(BEreq::cb_sd_stau2body->brstau2neut(2), 0.0, "~chi0_2", "tau-");
      result.set_BF(BEreq::cb_sd_stau2body->brstau2neut(3), 0.0, "~chi0_3", "tau-");
      result.set_BF(BEreq::cb_sd_stau2body->brstau2neut(4), 0.0, "~chi0_4", "tau-");
      result.set_BF(BEreq::cb_sd_stau2body->brstau2char(1), 0.0, "~chi-_1", "nu_tau");
      result.set_BF(BEreq::cb_sd_stau2body->brstau2char(2), 0.0, "~chi-_2", "nu_tau");
      result.set_BF(BEreq::cb_sd_stau2body->brstau2hcsn(1), 0.0, psn.isntaul, "H-");
      result.set_BF(BEreq::cb_sd_stau2body->brstau2wsn(1), 0.0, psn.isntaul, "W-");
      result.set_BF(BEreq::cb_sd_stau2body->brstau2hl, 0.0, psn.istau1, "h0_1");
      result.set_BF(BEreq::cb_sd_stau2body->brstau2hh, 0.0, psn.istau1, "h0_2");
      result.set_BF(BEreq::cb_sd_stau2body->brstau2ha, 0.0, psn.istau1, "A0");
      result.set_BF(BEreq::cb_sd_stau2body->brstau2ztau, 0.0, psn.istau1, "Z0");
    }
     
    /// MSSM decays: staubar_2
    void staubar_2_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::staubar_2_decays::Dep::stau_2_decay_rates);
    }

    /// MSSM decays: snu_electronl
    void snu_electronl_decays (DecayTable::Entry& result) 
    {      
      using namespace Pipes::snu_electronl_decays;
      result.calculator = BEreq::cb_sd_snelwidth.origin();
      result.calculator_version = BEreq::cb_sd_snelwidth.version();
      result.width_in_GeV = BEreq::cb_sd_snelwidth->sneltot2;
      result.set_BF(BEreq::cb_sd_snel2body->brsnellneut(1), 0.0, "~chi0_1", "nu_e");
      result.set_BF(BEreq::cb_sd_snel2body->brsnellneut(2), 0.0, "~chi0_2", "nu_e");
      result.set_BF(BEreq::cb_sd_snel2body->brsnellneut(3), 0.0, "~chi0_3", "nu_e");
      result.set_BF(BEreq::cb_sd_snel2body->brsnellneut(4), 0.0, "~chi0_4", "nu_e");
      result.set_BF(BEreq::cb_sd_snel2body->brsnellchar(1), 0.0, "~chi+_1", "e-");
      result.set_BF(BEreq::cb_sd_snel2body->brsnellchar(2), 0.0, "~chi+_2", "e-");
    }

    /// MSSM decays: snubar_electronl
    void snubar_electronl_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::snubar_electronl_decays::Dep::snu_electronl_decay_rates);
    }

    /// MSSM decays: snu_muonl
    void snu_muonl_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::snu_muonl_decays;
      result.calculator = BEreq::cb_sd_snelwidth.origin();
      result.calculator_version = BEreq::cb_sd_snelwidth.version();
      result.width_in_GeV = BEreq::cb_sd_snelwidth->sneltot2;
      result.set_BF(BEreq::cb_sd_snel2body->brsnellneut(1), 0.0, "~chi0_1", "nu_mu");
      result.set_BF(BEreq::cb_sd_snel2body->brsnellneut(2), 0.0, "~chi0_2", "nu_mu");
      result.set_BF(BEreq::cb_sd_snel2body->brsnellneut(3), 0.0, "~chi0_3", "nu_mu");
      result.set_BF(BEreq::cb_sd_snel2body->brsnellneut(4), 0.0, "~chi0_4", "nu_mu");
      result.set_BF(BEreq::cb_sd_snel2body->brsnellchar(1), 0.0, "~chi+_1", "mu-");
      result.set_BF(BEreq::cb_sd_snel2body->brsnellchar(2), 0.0, "~chi+_2", "mu-");
    }

    /// MSSM decays: snubar_muonl
    void snubar_muonl_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::snubar_muonl_decays::Dep::snu_muonl_decay_rates);
    }

    /// MSSM decays: snu_taul
    /// Note that SUSY-HIT calls ~nu_tau_L "snutau1" even though it has no RH (~)nus.
    void snu_taul_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::snu_taul_decays;
      mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);

      result.calculator = BEreq::cb_sd_sntauwidth.origin();
      result.calculator_version = BEreq::cb_sd_sntauwidth.version();

      result.width_in_GeV = BEreq::cb_sd_sntauwidth->sntautot2;
      result.set_BF(BEreq::cb_sd_sntau2body->brsntauneut(1), 0.0, "~chi0_1", "nu_tau");
      result.set_BF(BEreq::cb_sd_sntau2body->brsntauneut(2), 0.0, "~chi0_2", "nu_tau");
      result.set_BF(BEreq::cb_sd_sntau2body->brsntauneut(3), 0.0, "~chi0_3", "nu_tau");
      result.set_BF(BEreq::cb_sd_sntau2body->brsntauneut(4), 0.0, "~chi0_4", "nu_tau");
      result.set_BF(BEreq::cb_sd_sntau2body->brsntauchar(1), 0.0, "~chi+_1", "tau-");
      result.set_BF(BEreq::cb_sd_sntau2body->brsntauchar(2), 0.0, "~chi+_2", "tau-");
      result.set_BF(BEreq::cb_sd_sntau2body->brsntau1hcstau(1), 0.0, psn.istau1bar, "H-");
      result.set_BF(BEreq::cb_sd_sntau2body->brsntau1hcstau(2), 0.0, psn.istau2bar, "H-");
      result.set_BF(BEreq::cb_sd_sntau2body->brsntau1wstau(1), 0.0, psn.istau1bar, "W-");
      result.set_BF(BEreq::cb_sd_sntau2body->brsntau1wstau(2), 0.0, psn.istau2bar, "W-");
    }

    /// MSSM decays: snubar_taul
    void snubar_taul_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::snubar_taul_decays::Dep::snu_taul_decay_rates);
    }

    /// MSSM decays: charginoplus_1
    void charginoplus_1_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::charginoplus_1_decays;
      mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);

      result.calculator = BEreq::cb_sd_charwidth.origin();
      result.calculator_version = BEreq::cb_sd_charwidth.version();

      result.width_in_GeV = BEreq::cb_sd_charwidth->chartot(1);
      result.set_BF(BEreq::cb_sd_char2body->brcharsupl(1), 0.0, psn.isul, "dbar");
      result.set_BF(BEreq::cb_sd_char2body->brcharsupr(1), 0.0, psn.isur, "dbar");
      result.set_BF(BEreq::cb_sd_char2body->brcharsdownl(1), 0.0, psn.isdlbar, "u");
      result.set_BF(BEreq::cb_sd_char2body->brcharsdownr(1), 0.0, psn.isdrbar, "u");
      result.set_BF(BEreq::cb_sd_char2body->brcharsupl(1), 0.0, psn.iscl, "sbar");
      result.set_BF(BEreq::cb_sd_char2body->brcharsupr(1), 0.0, psn.iscr, "sbar");
      result.set_BF(BEreq::cb_sd_char2body->brcharsdownl(1), 0.0, psn.isslbar, "c");
      result.set_BF(BEreq::cb_sd_char2body->brcharsdownr(1), 0.0, psn.issrbar, "c");
      result.set_BF(BEreq::cb_sd_char2body->brcharst1(1), 0.0, psn.ist1, "bbar");
      result.set_BF(BEreq::cb_sd_char2body->brcharst2(1), 0.0, psn.ist2, "bbar");
      result.set_BF(BEreq::cb_sd_char2body->brcharsb1(1), 0.0, psn.isb1bar, "t");
      result.set_BF(BEreq::cb_sd_char2body->brcharsb2(1), 0.0, psn.isb2bar, "t");
      result.set_BF(BEreq::cb_sd_char2body->brcharsnel(1), 0.0, psn.isnel, "e+");
      result.set_BF(BEreq::cb_sd_char2body->brcharsnel(1), 0.0, psn.isnmul, "mu+");
      result.set_BF(BEreq::cb_sd_char2body->brcharsn1(1), 0.0, psn.isntaul, "tau+");
      result.set_BF(BEreq::cb_sd_char2body->brcharsell(1), 0.0, psn.isellbar, "nu_e");
      result.set_BF(BEreq::cb_sd_char2body->brcharselr(1), 0.0, psn.iselrbar, "nu_e");
      result.set_BF(BEreq::cb_sd_char2body->brcharsell(1), 0.0, psn.ismulbar, "nu_mu");
      result.set_BF(BEreq::cb_sd_char2body->brcharselr(1), 0.0, psn.ismurbar, "nu_mu");
      result.set_BF(BEreq::cb_sd_char2body->brcharstau1(1), 0.0, psn.istau1bar, "nu_tau");
      result.set_BF(BEreq::cb_sd_char2body->brcharstau2(1), 0.0, psn.istau2bar, "nu_tau");
      result.set_BF(BEreq::cb_sd_char2body->brcharwneut(1,1), 0.0, "~chi0_1", "W+");
      result.set_BF(BEreq::cb_sd_char2body->brcharwneut(1,2), 0.0, "~chi0_2", "W+");
      result.set_BF(BEreq::cb_sd_char2body->brcharwneut(1,3), 0.0, "~chi0_3", "W+");
      result.set_BF(BEreq::cb_sd_char2body->brcharwneut(1,4), 0.0, "~chi0_4", "W+");
      result.set_BF(BEreq::cb_sd_char2body->brcharhcneut(1,1), 0.0, "~chi0_1", "H+");
      result.set_BF(BEreq::cb_sd_char2body->brcharhcneut(1,2), 0.0, "~chi0_2", "H+");
      result.set_BF(BEreq::cb_sd_char2body->brcharhcneut(1,3), 0.0, "~chi0_3", "H+");
      result.set_BF(BEreq::cb_sd_char2body->brcharhcneut(1,4), 0.0, "~chi0_4", "H+");
      result.set_BF(BEreq::cb_sd_char2bodygrav->brcharwgravitino(1), 0.0, "~G", "W+");
      result.set_BF(BEreq::cb_sd_char2bodygrav->brcharhcgravitino(1), 0.0, "~G", "H+");
      result.set_BF(BEreq::cb_sd_char2bodygrav->brcharwgravitino(1), 0.0, "~G", "W+");
      result.set_BF(BEreq::cb_sd_char2bodygrav->brcharhcgravitino(1), 0.0, "~G", "H+");
      result.set_BF(BEreq::cb_sd_char3body->brnupdb(1,1), 0.0, "~chi0_1", "u", "dbar");
      result.set_BF(BEreq::cb_sd_char3body->brnupdb(1,2), 0.0, "~chi0_2", "u", "dbar");
      result.set_BF(BEreq::cb_sd_char3body->brnupdb(1,3), 0.0, "~chi0_3", "u", "dbar");
      result.set_BF(BEreq::cb_sd_char3body->brnupdb(1,4), 0.0, "~chi0_4", "u", "dbar");
      result.set_BF(BEreq::cb_sd_char3body->brnupdb(1,1), 0.0, "~chi0_1", "c", "sbar");
      result.set_BF(BEreq::cb_sd_char3body->brnupdb(1,2), 0.0, "~chi0_2", "c", "sbar");
      result.set_BF(BEreq::cb_sd_char3body->brnupdb(1,3), 0.0, "~chi0_3", "c", "sbar");
      result.set_BF(BEreq::cb_sd_char3body->brnupdb(1,4), 0.0, "~chi0_4", "c", "sbar");
      result.set_BF(BEreq::cb_sd_char3body->brntopbb(1,1), 0.0, "~chi0_1", "t", "bbar");
      result.set_BF(BEreq::cb_sd_char3body->brntopbb(1,2), 0.0, "~chi0_2", "t", "bbar");
      result.set_BF(BEreq::cb_sd_char3body->brntopbb(1,3), 0.0, "~chi0_3", "t", "bbar");
      result.set_BF(BEreq::cb_sd_char3body->brntopbb(1,4), 0.0, "~chi0_4", "t", "bbar");
      result.set_BF(BEreq::cb_sd_char3body->brnelnue(1,1), 0.0, "~chi0_1", "e+", "nu_e");
      result.set_BF(BEreq::cb_sd_char3body->brnelnue(1,2), 0.0, "~chi0_2", "e+", "nu_e");
      result.set_BF(BEreq::cb_sd_char3body->brnelnue(1,3), 0.0, "~chi0_3", "e+", "nu_e");
      result.set_BF(BEreq::cb_sd_char3body->brnelnue(1,4), 0.0, "~chi0_4", "e+", "nu_e");
      result.set_BF(BEreq::cb_sd_char3body->brnmunumu(1,1), 0.0, "~chi0_1", "mu+", "nu_mu");
      result.set_BF(BEreq::cb_sd_char3body->brnmunumu(1,2), 0.0, "~chi0_2", "mu+", "nu_mu");
      result.set_BF(BEreq::cb_sd_char3body->brnmunumu(1,3), 0.0, "~chi0_3", "mu+", "nu_mu");
      result.set_BF(BEreq::cb_sd_char3body->brnmunumu(1,4), 0.0, "~chi0_4", "mu+", "nu_mu");
      result.set_BF(BEreq::cb_sd_char3body->brntaunut(1,1), 0.0, "~chi0_1", "tau+", "nu_tau");
      result.set_BF(BEreq::cb_sd_char3body->brntaunut(1,2), 0.0, "~chi0_2", "tau+", "nu_tau");
      result.set_BF(BEreq::cb_sd_char3body->brntaunut(1,3), 0.0, "~chi0_3", "tau+", "nu_tau");
      result.set_BF(BEreq::cb_sd_char3body->brntaunut(1,4), 0.0, "~chi0_4", "tau+", "nu_tau");
      result.set_BF(BEreq::cb_sd_char3body->brglupdb(1), 0.0, "~g", "u", "dbar");
      result.set_BF(BEreq::cb_sd_char3body->brglchsb(1), 0.0, "~g", "c", "sbar");
      result.set_BF(BEreq::cb_sd_char3body->brgltopbb(1), 0.0, "~g", "t", "bbar");
    }

    /// MSSM decays: charginominus_1
    void charginominus_1_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::charginominus_1_decays::Dep::charginoplus_1_decay_rates);
    }

    /// MSSM decays: charginoplus_2
    void charginoplus_2_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::charginoplus_2_decays;
      mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);
      
      result.calculator = BEreq::cb_sd_charwidth.origin();
      result.calculator_version = BEreq::cb_sd_charwidth.version();

      result.width_in_GeV = BEreq::cb_sd_charwidth->chartot(2);
      result.set_BF(BEreq::cb_sd_char2body->brcharsupl(2), 0.0, psn.isul, "dbar");
      result.set_BF(BEreq::cb_sd_char2body->brcharsupr(2), 0.0, psn.isur, "dbar");
      result.set_BF(BEreq::cb_sd_char2body->brcharsdownl(2), 0.0, psn.isdlbar, "u");
      result.set_BF(BEreq::cb_sd_char2body->brcharsdownr(2), 0.0, psn.isdrbar, "u");
      result.set_BF(BEreq::cb_sd_char2body->brcharsupl(2), 0.0, psn.iscl, "sbar");
      result.set_BF(BEreq::cb_sd_char2body->brcharsupr(2), 0.0, psn.iscr, "sbar");
      result.set_BF(BEreq::cb_sd_char2body->brcharsdownl(2), 0.0, psn.isslbar, "c");
      result.set_BF(BEreq::cb_sd_char2body->brcharsdownr(2), 0.0, psn.issrbar, "c");
      result.set_BF(BEreq::cb_sd_char2body->brcharst1(2), 0.0, psn.ist1, "bbar");
      result.set_BF(BEreq::cb_sd_char2body->brcharst2(2), 0.0, psn.ist2, "bbar");
      result.set_BF(BEreq::cb_sd_char2body->brcharsb1(2), 0.0, psn.isb1bar, "t");
      result.set_BF(BEreq::cb_sd_char2body->brcharsb2(2), 0.0, psn.isb2bar, "t");
      result.set_BF(BEreq::cb_sd_char2body->brcharsnel(2), 0.0, psn.isnel, "e+");
      result.set_BF(BEreq::cb_sd_char2body->brcharsnel(2), 0.0, psn.isnmul, "mu+");
      result.set_BF(BEreq::cb_sd_char2body->brcharsn1(2), 0.0, psn.isntaul, "tau+");
      result.set_BF(BEreq::cb_sd_char2body->brcharsell(2), 0.0, psn.isellbar, "nu_e");
      result.set_BF(BEreq::cb_sd_char2body->brcharselr(2), 0.0, psn.iselrbar, "nu_e");
      result.set_BF(BEreq::cb_sd_char2body->brcharsell(2), 0.0, psn.ismulbar, "nu_mu");
      result.set_BF(BEreq::cb_sd_char2body->brcharselr(2), 0.0, psn.ismurbar, "nu_mu");
      result.set_BF(BEreq::cb_sd_char2body->brcharstau1(2), 0.0, psn.istau1bar, "nu_tau");
      result.set_BF(BEreq::cb_sd_char2body->brcharstau2(2), 0.0, psn.istau2bar, "nu_tau");
      result.set_BF(BEreq::cb_sd_char2body->brcharzchic, 0.0, "~chi+_1", "Z0");
      result.set_BF(BEreq::cb_sd_char2body->brcharwneut(2,1), 0.0, "~chi0_1", "W+");
      result.set_BF(BEreq::cb_sd_char2body->brcharwneut(2,2), 0.0, "~chi0_2", "W+");
      result.set_BF(BEreq::cb_sd_char2body->brcharwneut(2,3), 0.0, "~chi0_3", "W+");
      result.set_BF(BEreq::cb_sd_char2body->brcharwneut(2,4), 0.0, "~chi0_4", "W+");
      result.set_BF(BEreq::cb_sd_char2body->brcharhlchic, 0.0, "~chi+_1", "h0_1");
      result.set_BF(BEreq::cb_sd_char2body->brcharhhchic, 0.0, "~chi+_1", "h0_2");
      result.set_BF(BEreq::cb_sd_char2body->brcharhachic, 0.0, "~chi+_1", "A0");
      result.set_BF(BEreq::cb_sd_char2body->brcharhcneut(2,1), 0.0, "~chi0_1", "H+");
      result.set_BF(BEreq::cb_sd_char2body->brcharhcneut(2,2), 0.0, "~chi0_2", "H+");
      result.set_BF(BEreq::cb_sd_char2body->brcharhcneut(2,3), 0.0, "~chi0_3", "H+");
      result.set_BF(BEreq::cb_sd_char2body->brcharhcneut(2,4), 0.0, "~chi0_4", "H+");
      result.set_BF(BEreq::cb_sd_char2bodygrav->brcharwgravitino(2), 0.0, "~G", "W+");
      result.set_BF(BEreq::cb_sd_char2bodygrav->brcharhcgravitino(2), 0.0, "~G", "H+");
      result.set_BF(BEreq::cb_sd_char2bodygrav->brcharwgravitino(2), 0.0, "~G", "W+");
      result.set_BF(BEreq::cb_sd_char2bodygrav->brcharhcgravitino(2), 0.0, "~G", "H+");
      result.set_BF(BEreq::cb_sd_char3body->brnupdb(2,1), 0.0, "~chi0_1", "u", "dbar");
      result.set_BF(BEreq::cb_sd_char3body->brnupdb(2,2), 0.0, "~chi0_2", "u", "dbar");
      result.set_BF(BEreq::cb_sd_char3body->brnupdb(2,3), 0.0, "~chi0_3", "u", "dbar");
      result.set_BF(BEreq::cb_sd_char3body->brnupdb(2,4), 0.0, "~chi0_4", "u", "dbar");
      result.set_BF(BEreq::cb_sd_char3body->brnupdb(2,1), 0.0, "~chi0_1", "c", "sbar");
      result.set_BF(BEreq::cb_sd_char3body->brnupdb(2,2), 0.0, "~chi0_2", "c", "sbar");
      result.set_BF(BEreq::cb_sd_char3body->brnupdb(2,3), 0.0, "~chi0_3", "c", "sbar");
      result.set_BF(BEreq::cb_sd_char3body->brnupdb(2,4), 0.0, "~chi0_4", "c", "sbar");
      result.set_BF(BEreq::cb_sd_char3body->brntopbb(2,1), 0.0, "~chi0_1", "t", "bbar");
      result.set_BF(BEreq::cb_sd_char3body->brntopbb(2,2), 0.0, "~chi0_2", "t", "bbar");
      result.set_BF(BEreq::cb_sd_char3body->brntopbb(2,3), 0.0, "~chi0_3", "t", "bbar");
      result.set_BF(BEreq::cb_sd_char3body->brntopbb(2,4), 0.0, "~chi0_4", "t", "bbar");
      result.set_BF(BEreq::cb_sd_char3body->brnelnue(2,1), 0.0, "~chi0_1", "e+", "nu_e");
      result.set_BF(BEreq::cb_sd_char3body->brnelnue(2,2), 0.0, "~chi0_2", "e+", "nu_e");
      result.set_BF(BEreq::cb_sd_char3body->brnelnue(2,3), 0.0, "~chi0_3", "e+", "nu_e");
      result.set_BF(BEreq::cb_sd_char3body->brnelnue(2,4), 0.0, "~chi0_4", "e+", "nu_e");
      result.set_BF(BEreq::cb_sd_char3body->brnmunumu(2,1), 0.0, "~chi0_1", "mu+", "nu_mu");
      result.set_BF(BEreq::cb_sd_char3body->brnmunumu(2,2), 0.0, "~chi0_2", "mu+", "nu_mu");
      result.set_BF(BEreq::cb_sd_char3body->brnmunumu(2,3), 0.0, "~chi0_3", "mu+", "nu_mu");
      result.set_BF(BEreq::cb_sd_char3body->brnmunumu(2,4), 0.0, "~chi0_4", "mu+", "nu_mu");
      result.set_BF(BEreq::cb_sd_char3body->brntaunut(2,1), 0.0, "~chi0_1", "tau+", "nu_tau");
      result.set_BF(BEreq::cb_sd_char3body->brntaunut(2,2), 0.0, "~chi0_2", "tau+", "nu_tau");
      result.set_BF(BEreq::cb_sd_char3body->brntaunut(2,3), 0.0, "~chi0_3", "tau+", "nu_tau");
      result.set_BF(BEreq::cb_sd_char3body->brntaunut(2,4), 0.0, "~chi0_4", "tau+", "nu_tau");
      result.set_BF(BEreq::cb_sd_char3body->brchupup, 0.0, "~chi+_1", "u", "ubar");
      result.set_BF(BEreq::cb_sd_char3body->brchdodo, 0.0, "~chi+_1", "d", "dbar");
      result.set_BF(BEreq::cb_sd_char3body->brchchch, 0.0, "~chi+_1", "c", "cbar");
      result.set_BF(BEreq::cb_sd_char3body->brchstst, 0.0, "~chi+_1", "s", "sbar");
      result.set_BF(BEreq::cb_sd_char3body->brchtoptop, 0.0, "~chi+_1", "t", "tbar");
      result.set_BF(BEreq::cb_sd_char3body->brchbotbot, 0.0, "~chi+_1", "b", "bbar");
      result.set_BF(BEreq::cb_sd_char3body->brchee, 0.0, "~chi+_1", "e+", "e-");
      result.set_BF(BEreq::cb_sd_char3body->brchmumu, 0.0, "~chi+_1", "mu+", "mu-");
      result.set_BF(BEreq::cb_sd_char3body->brchtautau, 0.0, "~chi+_1", "tau+", "tau-");
      result.set_BF(BEreq::cb_sd_char3body->brchnene, 0.0, "~chi+_1", "nu_e", "nubar_e");
      result.set_BF(BEreq::cb_sd_char3body->brchnmunmu, 0.0, "~chi+_1", "nu_mu", "nubar_mu");
      result.set_BF(BEreq::cb_sd_char3body->brchntauntau, 0.0, "~chi+_1", "nu_tau", "nubar_tau");
      result.set_BF(BEreq::cb_sd_char3body->brglupdb(2), 0.0, "~g", "u", "dbar");
      result.set_BF(BEreq::cb_sd_char3body->brglchsb(2), 0.0, "~g", "c", "sbar");
      result.set_BF(BEreq::cb_sd_char3body->brgltopbb(2), 0.0, "~g", "t", "bbar");
    }
  

    /// MSSM decays: charginominus_2
    void charginominus_2_decays (DecayTable::Entry& result) 
    {
      result = CP_conjugate(*Pipes::charginominus_2_decays::Dep::charginoplus_2_decay_rates);
    }

    /// MSSM decays: neutralino_1
    void neutralino_1_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::neutralino_1_decays;
      mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);

      result.calculator = BEreq::cb_sd_neutwidth.origin();
      result.calculator_version = BEreq::cb_sd_neutwidth.version();

      result.width_in_GeV = BEreq::cb_sd_neutwidth->neuttot(1);
      result.set_BF(BEreq::cb_sd_neut2body->brneutwchar(1,1), 0.0, "~chi+_1", "W-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutwchar(1,1), 0.0, "~chi-_1", "W+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutwchar(1,2), 0.0, "~chi+_2", "W-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutwchar(1,2), 0.0, "~chi-_2", "W+");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthcchar(1,1), 0.0, "~chi+_1", "H-");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthcchar(1,1), 0.0, "~chi-_1", "H+");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthcchar(1,2), 0.0, "~chi+_2", "H-");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthcchar(1,2), 0.0, "~chi-_2", "H+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupl(1), 0.0, psn.isul, "ubar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupl(1), 0.0, psn.isulbar, "u");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupr(1), 0.0, psn.isur, "ubar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupr(1), 0.0, psn.isurbar, "u");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownl(1), 0.0, psn.isdl, "dbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownl(1), 0.0, psn.isdlbar, "d");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownr(1), 0.0, psn.isdr, "dbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownr(1), 0.0, psn.isdrbar, "d");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupl(1), 0.0, psn.iscl, "cbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupl(1), 0.0, psn.isclbar, "c");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupr(1), 0.0, psn.iscr, "cbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupr(1), 0.0, psn.iscrbar, "c");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownl(1), 0.0, psn.issl, "sbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownl(1), 0.0, psn.isslbar, "s");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownr(1), 0.0, psn.issr, "sbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownr(1), 0.0, psn.issrbar, "s");
      result.set_BF(BEreq::cb_sd_neut2body->brneutst1(1), 0.0, psn.ist1, "tbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutst1(1), 0.0, psn.ist1bar, "t");
      result.set_BF(BEreq::cb_sd_neut2body->brneutst2(1), 0.0, psn.ist2, "tbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutst2(1), 0.0, psn.ist2bar, "t");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsb1(1), 0.0, psn.isb1, "bbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsb1(1), 0.0, psn.isb1bar, "b");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsb2(1), 0.0, psn.isb2, "bbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsb2(1), 0.0, psn.isb2bar, "b");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsell(1), 0.0, psn.isell, "e+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsell(1), 0.0, psn.isellbar, "e-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutselr(1), 0.0, psn.iselr, "e+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutselr(1), 0.0, psn.iselrbar, "e-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsell(1), 0.0, psn.ismul, "mu+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsell(1), 0.0, psn.ismulbar, "mu-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutselr(1), 0.0, psn.ismur, "mu+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutselr(1), 0.0, psn.ismurbar, "mu-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutstau1(1), 0.0, psn.istau1, "tau+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutstau1(1), 0.0, psn.istau1bar, "tau-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutstau2(1), 0.0, psn.istau2, "tau+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutstau2(1), 0.0, psn.istau2bar, "tau-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsnel(1), 0.0, psn.isnel, "nubar_e");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsnel(1), 0.0, psn.isnelbar, "nu_e");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsnel(1), 0.0, psn.isnmul, "nubar_mu");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsnel(1), 0.0, psn.isnmulbar, "nu_mu");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsn1(1), 0.0, psn.isntaul, "nubar_tau");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsn1(1), 0.0, psn.isntaulbar, "nu_tau");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneutgamgrav(1), 0.0, "~G", "gamma");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneutzgrav(1), 0.0, "~G", "Z0");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthlgrav(1), 0.0, "~G", "h0_1");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthhgrav(1), 0.0, "~G", "h0_2");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthagrav(1), 0.0, "~G", "A0");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneutgamgrav(1), 0.0, "~G", "gamma");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneutzgrav(1), 0.0, "~G", "Z0");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthlgrav(1), 0.0, "~G", "h0_1");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthhgrav(1), 0.0, "~G", "h0_2");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthagrav(1), 0.0, "~G", "A0");
      result.set_BF(BEreq::cb_sd_neut3body->brchubd(1,1), 0.0, "~chi+_1", "ubar", "d");
      result.set_BF(BEreq::cb_sd_neut3body->brchubd(1,1), 0.0, "~chi-_1", "dbar", "u");
      result.set_BF(BEreq::cb_sd_neut3body->brchubd(1,2), 0.0, "~chi+_2", "ubar", "d");
      result.set_BF(BEreq::cb_sd_neut3body->brchubd(1,2), 0.0, "~chi-_2", "dbar", "u");
      result.set_BF(BEreq::cb_sd_neut3body->brchcbs(1,1), 0.0, "~chi+_1", "cbar", "s");
      result.set_BF(BEreq::cb_sd_neut3body->brchcbs(1,1), 0.0, "~chi-_1", "sbar", "c");
      result.set_BF(BEreq::cb_sd_neut3body->brchcbs(1,2), 0.0, "~chi+_2", "cbar", "s");
      result.set_BF(BEreq::cb_sd_neut3body->brchcbs(1,2), 0.0, "~chi-_2", "sbar", "c");
      result.set_BF(BEreq::cb_sd_neut3body->brchtbb(1,1), 0.0, "~chi+_1", "tbar", "b");
      result.set_BF(BEreq::cb_sd_neut3body->brchtbb(1,1), 0.0, "~chi-_1", "bbar", "t");
      result.set_BF(BEreq::cb_sd_neut3body->brchtbb(1,2), 0.0, "~chi+_2", "tbar", "b");
      result.set_BF(BEreq::cb_sd_neut3body->brchtbb(1,2), 0.0, "~chi-_2", "bbar", "t");
      result.set_BF(BEreq::cb_sd_neut3body->brchelne(1,1), 0.0, "~chi+_1", "nubar_e", "e-");
      result.set_BF(BEreq::cb_sd_neut3body->brchelne(1,1), 0.0, "~chi-_1", "nu_e", "e+");
      result.set_BF(BEreq::cb_sd_neut3body->brchelne(1,2), 0.0, "~chi+_2", "nubar_e", "e-");
      result.set_BF(BEreq::cb_sd_neut3body->brchelne(1,2), 0.0, "~chi-_2", "nu_e", "e+");
      result.set_BF(BEreq::cb_sd_neut3body->brchmunmu(1,1), 0.0, "~chi+_1", "nubar_mu", "mu-");
      result.set_BF(BEreq::cb_sd_neut3body->brchmunmu(1,1), 0.0, "~chi-_1", "nu_mu", "mu+");
      result.set_BF(BEreq::cb_sd_neut3body->brchmunmu(1,2), 0.0, "~chi+_2", "nubar_mu", "mu-");
      result.set_BF(BEreq::cb_sd_neut3body->brchmunmu(1,2), 0.0, "~chi-_2", "nu_mu", "mu+");
      result.set_BF(BEreq::cb_sd_neut3body->brchtauntau(1,1), 0.0, "~chi+_1", "nubar_tau", "tau-");
      result.set_BF(BEreq::cb_sd_neut3body->brchtauntau(1,1), 0.0, "~chi-_1", "nu_tau", "tau+");
      result.set_BF(BEreq::cb_sd_neut3body->brchtauntau(1,2), 0.0, "~chi+_2", "nubar_tau", "tau-");
      result.set_BF(BEreq::cb_sd_neut3body->brchtauntau(1,2), 0.0, "~chi-_2", "nu_tau", "tau+");
      result.set_BF(BEreq::cb_sd_neut3body->brglup(1), 0.0, "~g", "ubar", "u");
      result.set_BF(BEreq::cb_sd_neut3body->brgldo(1), 0.0, "~g", "dbar", "d");
      result.set_BF(BEreq::cb_sd_neut3body->brglch(1), 0.0, "~g", "cbar", "c");
      result.set_BF(BEreq::cb_sd_neut3body->brglst(1), 0.0, "~g", "sbar", "s");
      result.set_BF(BEreq::cb_sd_neut3body->brgltop(1), 0.0, "~g", "tbar", "t");
      result.set_BF(BEreq::cb_sd_neut3body->brglbot(1), 0.0, "~g", "bbar", "b");
    }
  

    /// MSSM decays: neutralino_2
    void neutralino_2_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::neutralino_2_decays;
      mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);
      
      result.calculator = BEreq::cb_sd_neutwidth.origin();
      result.calculator_version = BEreq::cb_sd_neutwidth.version();

      result.width_in_GeV = BEreq::cb_sd_neutwidth->neuttot(2);
      result.set_BF(BEreq::cb_sd_neut2body->brneutzneut(2,1), 0.0, "~chi0_1", "Z0");
      result.set_BF(BEreq::cb_sd_neut2body->brneutwchar(2,1), 0.0, "~chi+_1", "W-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutwchar(2,1), 0.0, "~chi-_1", "W+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutwchar(2,2), 0.0, "~chi+_2", "W-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutwchar(2,2), 0.0, "~chi-_2", "W+");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthlneut(2,1), 0.0, "~chi0_1", "h0_1");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthhneut(2,1), 0.0, "~chi0_1", "h0_2");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthaneut(2,1), 0.0, "~chi0_1", "A0");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthcchar(2,1), 0.0, "~chi+_1", "H-");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthcchar(2,1), 0.0, "~chi-_1", "H+");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthcchar(2,2), 0.0, "~chi+_2", "H-");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthcchar(2,2), 0.0, "~chi-_2", "H+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupl(2), 0.0, psn.isul, "ubar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupl(2), 0.0, psn.isulbar, "u");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupr(2), 0.0, psn.isur, "ubar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupr(2), 0.0, psn.isurbar, "u");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownl(2), 0.0, psn.isdl, "dbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownl(2), 0.0, psn.isdlbar, "d");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownr(2), 0.0, psn.isdr, "dbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownr(2), 0.0, psn.isdrbar, "d");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupl(2), 0.0, psn.iscl, "cbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupl(2), 0.0, psn.isclbar, "c");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupr(2), 0.0, psn.iscr, "cbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupr(2), 0.0, psn.iscrbar, "c");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownl(2), 0.0, psn.issl, "sbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownl(2), 0.0, psn.isslbar, "s");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownr(2), 0.0, psn.issr, "sbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownr(2), 0.0, psn.issrbar, "s");
      result.set_BF(BEreq::cb_sd_neut2body->brneutst1(2), 0.0, psn.ist1, "tbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutst1(2), 0.0, psn.ist1bar, "t");
      result.set_BF(BEreq::cb_sd_neut2body->brneutst2(2), 0.0, psn.ist2, "tbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutst2(2), 0.0, psn.ist2bar, "t");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsb1(2), 0.0, psn.isb1, "bbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsb1(2), 0.0, psn.isb1bar, "b");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsb2(2), 0.0, psn.isb2, "bbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsb2(2), 0.0, psn.isb2bar, "b");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsell(2), 0.0, psn.isell, "e+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsell(2), 0.0, psn.isellbar, "e-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutselr(2), 0.0, psn.iselr, "e+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutselr(2), 0.0, psn.iselrbar, "e-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsell(2), 0.0, psn.ismul, "mu+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsell(2), 0.0, psn.ismulbar, "mu-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutselr(2), 0.0, psn.ismur, "mu+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutselr(2), 0.0, psn.ismurbar, "mu-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutstau1(2), 0.0, psn.istau1, "tau+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutstau1(2), 0.0, psn.istau1bar, "tau-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutstau2(2), 0.0, psn.istau2, "tau+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutstau2(2), 0.0, psn.istau2bar, "tau-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsnel(2), 0.0, psn.isnel, "nubar_e");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsnel(2), 0.0, psn.isnelbar, "nu_e");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsnel(2), 0.0, psn.isnmul, "nubar_mu");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsnel(2), 0.0, psn.isnmulbar, "nu_mu");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsn1(2), 0.0, psn.isntaul, "nubar_tau");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsn1(2), 0.0, psn.isntaulbar, "nu_tau");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneutgamgrav(2), 0.0, "~G", "gamma");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneutzgrav(2), 0.0, "~G", "Z0");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthlgrav(2), 0.0, "~G", "h0_1");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthhgrav(2), 0.0, "~G", "h0_2");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthagrav(2), 0.0, "~G", "A0");
      result.set_BF(BEreq::cb_sd_neutloop->brnraddec(2,1), 0.0, "~chi0_1", "gamma");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneutgamgrav(2), 0.0, "~G", "gamma");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneutzgrav(2), 0.0, "~G", "Z0");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthlgrav(2), 0.0, "~G", "h0_1");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthhgrav(2), 0.0, "~G", "h0_2");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthagrav(2), 0.0, "~G", "A0");
      result.set_BF(BEreq::cb_sd_neut3body->brneutup(2,1), 0.0, "~chi0_1", "ubar", "u");
      result.set_BF(BEreq::cb_sd_neut3body->brneutdow(2,1), 0.0, "~chi0_1", "dbar", "d");
      result.set_BF(BEreq::cb_sd_neut3body->brneutch(2,1), 0.0, "~chi0_1", "cbar", "c");
      result.set_BF(BEreq::cb_sd_neut3body->brneutst(2,1), 0.0, "~chi0_1", "sbar", "s");
      result.set_BF(BEreq::cb_sd_neut3body->brneuttop(2,1), 0.0, "~chi0_1", "tbar", "t");
      result.set_BF(BEreq::cb_sd_neut3body->brneutbot(2,1), 0.0, "~chi0_1", "bbar", "b");
      result.set_BF(BEreq::cb_sd_neut3body->brneutel(2,1), 0.0, "~chi0_1", "e+", "e-");
      result.set_BF(BEreq::cb_sd_neut3body->brneutmu(2,1), 0.0, "~chi0_1", "mu+", "mu-");
      result.set_BF(BEreq::cb_sd_neut3body->brneuttau(2,1), 0.0, "~chi0_1", "tau+", "tau-");
      result.set_BF(BEreq::cb_sd_neut3body->brneutnue(2,1), 0.0, "~chi0_1", "nubar_e", "nu_e");
      result.set_BF(BEreq::cb_sd_neut3body->brneutnumu(2,1), 0.0, "~chi0_1", "nubar_mu", "nu_mu");
      result.set_BF(BEreq::cb_sd_neut3body->brneutnutau(2,1), 0.0, "~chi0_1", "nubar_tau", "nu_tau");
      result.set_BF(BEreq::cb_sd_neut3body->brchubd(2,1), 0.0, "~chi+_1", "ubar", "d");
      result.set_BF(BEreq::cb_sd_neut3body->brchubd(2,1), 0.0, "~chi-_1", "dbar", "u");
      result.set_BF(BEreq::cb_sd_neut3body->brchubd(2,2), 0.0, "~chi+_2", "ubar", "d");
      result.set_BF(BEreq::cb_sd_neut3body->brchubd(2,2), 0.0, "~chi-_2", "dbar", "u");
      result.set_BF(BEreq::cb_sd_neut3body->brchcbs(2,1), 0.0, "~chi+_1", "cbar", "s");
      result.set_BF(BEreq::cb_sd_neut3body->brchcbs(2,1), 0.0, "~chi-_1", "sbar", "c");
      result.set_BF(BEreq::cb_sd_neut3body->brchcbs(2,2), 0.0, "~chi+_2", "cbar", "s");
      result.set_BF(BEreq::cb_sd_neut3body->brchcbs(2,2), 0.0, "~chi-_2", "sbar", "c");
      result.set_BF(BEreq::cb_sd_neut3body->brchtbb(2,1), 0.0, "~chi+_1", "tbar", "b");
      result.set_BF(BEreq::cb_sd_neut3body->brchtbb(2,1), 0.0, "~chi-_1", "bbar", "t");
      result.set_BF(BEreq::cb_sd_neut3body->brchtbb(2,2), 0.0, "~chi+_2", "tbar", "b");
      result.set_BF(BEreq::cb_sd_neut3body->brchtbb(2,2), 0.0, "~chi-_2", "bbar", "t");
      result.set_BF(BEreq::cb_sd_neut3body->brchelne(2,1), 0.0, "~chi+_1", "nubar_e", "e-");
      result.set_BF(BEreq::cb_sd_neut3body->brchelne(2,1), 0.0, "~chi-_1", "nu_e", "e+");
      result.set_BF(BEreq::cb_sd_neut3body->brchelne(2,2), 0.0, "~chi+_2", "nubar_e", "e-");
      result.set_BF(BEreq::cb_sd_neut3body->brchelne(2,2), 0.0, "~chi-_2", "nu_e", "e+");
      result.set_BF(BEreq::cb_sd_neut3body->brchmunmu(2,1), 0.0, "~chi+_1", "nubar_mu", "mu-");
      result.set_BF(BEreq::cb_sd_neut3body->brchmunmu(2,1), 0.0, "~chi-_1", "nu_mu", "mu+");
      result.set_BF(BEreq::cb_sd_neut3body->brchmunmu(2,2), 0.0, "~chi+_2", "nubar_mu", "mu-");
      result.set_BF(BEreq::cb_sd_neut3body->brchmunmu(2,2), 0.0, "~chi-_2", "nu_mu", "mu+");
      result.set_BF(BEreq::cb_sd_neut3body->brchtauntau(2,1), 0.0, "~chi+_1", "nubar_tau", "tau-");
      result.set_BF(BEreq::cb_sd_neut3body->brchtauntau(2,1), 0.0, "~chi-_1", "nu_tau", "tau+");
      result.set_BF(BEreq::cb_sd_neut3body->brchtauntau(2,2), 0.0, "~chi+_2", "nubar_tau", "tau-");
      result.set_BF(BEreq::cb_sd_neut3body->brchtauntau(2,2), 0.0, "~chi-_2", "nu_tau", "tau+");
      result.set_BF(BEreq::cb_sd_neut3body->brglup(2), 0.0, "~g", "ubar", "u");
      result.set_BF(BEreq::cb_sd_neut3body->brgldo(2), 0.0, "~g", "dbar", "d");
      result.set_BF(BEreq::cb_sd_neut3body->brglch(2), 0.0, "~g", "cbar", "c");
      result.set_BF(BEreq::cb_sd_neut3body->brglst(2), 0.0, "~g", "sbar", "s");
      result.set_BF(BEreq::cb_sd_neut3body->brgltop(2), 0.0, "~g", "tbar", "t");
      result.set_BF(BEreq::cb_sd_neut3body->brglbot(2), 0.0, "~g", "bbar", "b");
    }
  

    /// MSSM decays: neutralino_3
    void neutralino_3_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::neutralino_3_decays;
      mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);
      
      result.calculator = BEreq::cb_sd_neutwidth.origin();
      result.calculator_version = BEreq::cb_sd_neutwidth.version();

      result.width_in_GeV = BEreq::cb_sd_neutwidth->neuttot(3);
      result.set_BF(BEreq::cb_sd_neut2body->brneutzneut(3,1), 0.0, "~chi0_1", "Z0");
      result.set_BF(BEreq::cb_sd_neut2body->brneutzneut(3,2), 0.0, "~chi0_2", "Z0");
      result.set_BF(BEreq::cb_sd_neut2body->brneutwchar(3,1), 0.0, "~chi+_1", "W-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutwchar(3,1), 0.0, "~chi-_1", "W+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutwchar(3,2), 0.0, "~chi+_2", "W-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutwchar(3,2), 0.0, "~chi-_2", "W+");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthlneut(3,1), 0.0, "~chi0_1", "h0_1");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthhneut(3,1), 0.0, "~chi0_1", "h0_2");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthaneut(3,1), 0.0, "~chi0_1", "A0");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthlneut(3,2), 0.0, "~chi0_2", "h0_1");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthhneut(3,2), 0.0, "~chi0_2", "h0_2");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthaneut(3,2), 0.0, "~chi0_2", "A0");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthcchar(3,1), 0.0, "~chi+_1", "H-");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthcchar(3,1), 0.0, "~chi-_1", "H+");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthcchar(3,2), 0.0, "~chi+_2", "H-");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthcchar(3,2), 0.0, "~chi-_2", "H+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupl(3), 0.0, psn.isul, "ubar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupl(3), 0.0, psn.isulbar, "u");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupr(3), 0.0, psn.isur, "ubar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupr(3), 0.0, psn.isurbar, "u");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownl(3), 0.0, psn.isdl, "dbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownl(3), 0.0, psn.isdlbar, "d");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownr(3), 0.0, psn.isdr, "dbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownr(3), 0.0, psn.isdrbar, "d");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupl(3), 0.0, psn.iscl, "cbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupl(3), 0.0, psn.isclbar, "c");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupr(3), 0.0, psn.iscr, "cbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupr(3), 0.0, psn.iscrbar, "c");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownl(3), 0.0, psn.issl, "sbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownl(3), 0.0, psn.isslbar, "s");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownr(3), 0.0, psn.issr, "sbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownr(3), 0.0, psn.issrbar, "s");
      result.set_BF(BEreq::cb_sd_neut2body->brneutst1(3), 0.0, psn.ist1, "tbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutst1(3), 0.0, psn.ist1bar, "t");
      result.set_BF(BEreq::cb_sd_neut2body->brneutst2(3), 0.0, psn.ist2, "tbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutst2(3), 0.0, psn.ist2bar, "t");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsb1(3), 0.0, psn.isb1, "bbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsb1(3), 0.0, psn.isb1bar, "b");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsb2(3), 0.0, psn.isb2, "bbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsb2(3), 0.0, psn.isb2bar, "b");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsell(3), 0.0, psn.isell, "e+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsell(3), 0.0, psn.isellbar, "e-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutselr(3), 0.0, psn.iselr, "e+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutselr(3), 0.0, psn.iselrbar, "e-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsell(3), 0.0, psn.ismul, "mu+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsell(3), 0.0, psn.ismulbar, "mu-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutselr(3), 0.0, psn.ismur, "mu+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutselr(3), 0.0, psn.ismurbar, "mu-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutstau1(3), 0.0, psn.istau1, "tau+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutstau1(3), 0.0, psn.istau1bar, "tau-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutstau2(3), 0.0, psn.istau2, "tau+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutstau2(3), 0.0, psn.istau2bar, "tau-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsnel(3), 0.0, psn.isnel, "nubar_e");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsnel(3), 0.0, psn.isnelbar, "nu_e");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsnel(3), 0.0, psn.isnmul, "nubar_mu");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsnel(3), 0.0, psn.isnmulbar, "nu_mu");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsn1(3), 0.0, psn.isntaul, "nubar_tau");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsn1(3), 0.0, psn.isntaulbar, "nu_tau");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneutgamgrav(3), 0.0, "~G", "gamma");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneutzgrav(3), 0.0, "~G", "Z0");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthlgrav(3), 0.0, "~G", "h0_1");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthhgrav(3), 0.0, "~G", "h0_2");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthagrav(3), 0.0, "~G", "A0");
      result.set_BF(BEreq::cb_sd_neutloop->brnraddec(3,1), 0.0, "~chi0_1", "gamma");
      result.set_BF(BEreq::cb_sd_neutloop->brnraddec(3,2), 0.0, "~chi0_2", "gamma");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneutgamgrav(3), 0.0, "~G", "gamma");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneutzgrav(3), 0.0, "~G", "Z0");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthlgrav(3), 0.0, "~G", "h0_1");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthhgrav(3), 0.0, "~G", "h0_2");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthagrav(3), 0.0, "~G", "A0");
      result.set_BF(BEreq::cb_sd_neut3body->brneutup(3,1), 0.0, "~chi0_1", "ubar", "u");
      result.set_BF(BEreq::cb_sd_neut3body->brneutdow(3,1), 0.0, "~chi0_1", "dbar", "d");
      result.set_BF(BEreq::cb_sd_neut3body->brneutch(3,1), 0.0, "~chi0_1", "cbar", "c");
      result.set_BF(BEreq::cb_sd_neut3body->brneutst(3,1), 0.0, "~chi0_1", "sbar", "s");
      result.set_BF(BEreq::cb_sd_neut3body->brneuttop(3,1), 0.0, "~chi0_1", "tbar", "t");
      result.set_BF(BEreq::cb_sd_neut3body->brneutbot(3,1), 0.0, "~chi0_1", "bbar", "b");
      result.set_BF(BEreq::cb_sd_neut3body->brneutel(3,1), 0.0, "~chi0_1", "e+", "e-");
      result.set_BF(BEreq::cb_sd_neut3body->brneutmu(3,1), 0.0, "~chi0_1", "mu+", "mu-");
      result.set_BF(BEreq::cb_sd_neut3body->brneuttau(3,1), 0.0, "~chi0_1", "tau+", "tau-");
      result.set_BF(BEreq::cb_sd_neut3body->brneutnue(3,1), 0.0, "~chi0_1", "nubar_e", "nu_e");
      result.set_BF(BEreq::cb_sd_neut3body->brneutnumu(3,1), 0.0, "~chi0_1", "nubar_mu", "nu_mu");
      result.set_BF(BEreq::cb_sd_neut3body->brneutnutau(3,1), 0.0, "~chi0_1", "nubar_tau", "nu_tau");
      result.set_BF(BEreq::cb_sd_neut3body->brneutup(3,2), 0.0, "~chi0_2", "ubar", "u");
      result.set_BF(BEreq::cb_sd_neut3body->brneutdow(3,2), 0.0, "~chi0_2", "dbar", "d");
      result.set_BF(BEreq::cb_sd_neut3body->brneutch(3,2), 0.0, "~chi0_2", "cbar", "c");
      result.set_BF(BEreq::cb_sd_neut3body->brneutst(3,2), 0.0, "~chi0_2", "sbar", "s");
      result.set_BF(BEreq::cb_sd_neut3body->brneuttop(3,2), 0.0, "~chi0_2", "tbar", "t");
      result.set_BF(BEreq::cb_sd_neut3body->brneutbot(3,2), 0.0, "~chi0_2", "bbar", "b");
      result.set_BF(BEreq::cb_sd_neut3body->brneutel(3,2), 0.0, "~chi0_2", "e+", "e-");
      result.set_BF(BEreq::cb_sd_neut3body->brneutmu(3,2), 0.0, "~chi0_2", "mu+", "mu-");
      result.set_BF(BEreq::cb_sd_neut3body->brneuttau(3,2), 0.0, "~chi0_2", "tau+", "tau-");
      result.set_BF(BEreq::cb_sd_neut3body->brneutnue(3,2), 0.0, "~chi0_2", "nubar_e", "nu_e");
      result.set_BF(BEreq::cb_sd_neut3body->brneutnumu(3,2), 0.0, "~chi0_2", "nubar_mu", "nu_mu");
      result.set_BF(BEreq::cb_sd_neut3body->brneutnutau(3,2), 0.0, "~chi0_2", "nubar_tau", "nu_tau");
      result.set_BF(BEreq::cb_sd_neut3body->brchubd(3,1), 0.0, "~chi+_1", "ubar", "d");
      result.set_BF(BEreq::cb_sd_neut3body->brchubd(3,1), 0.0, "~chi-_1", "dbar", "u");
      result.set_BF(BEreq::cb_sd_neut3body->brchubd(3,2), 0.0, "~chi+_2", "ubar", "d");
      result.set_BF(BEreq::cb_sd_neut3body->brchubd(3,2), 0.0, "~chi-_2", "dbar", "u");
      result.set_BF(BEreq::cb_sd_neut3body->brchcbs(3,1), 0.0, "~chi+_1", "cbar", "s");
      result.set_BF(BEreq::cb_sd_neut3body->brchcbs(3,1), 0.0, "~chi-_1", "sbar", "c");
      result.set_BF(BEreq::cb_sd_neut3body->brchcbs(3,2), 0.0, "~chi+_2", "cbar", "s");
      result.set_BF(BEreq::cb_sd_neut3body->brchcbs(3,2), 0.0, "~chi-_2", "sbar", "c");
      result.set_BF(BEreq::cb_sd_neut3body->brchtbb(3,1), 0.0, "~chi+_1", "tbar", "b");
      result.set_BF(BEreq::cb_sd_neut3body->brchtbb(3,1), 0.0, "~chi-_1", "bbar", "t");
      result.set_BF(BEreq::cb_sd_neut3body->brchtbb(3,2), 0.0, "~chi+_2", "tbar", "b");
      result.set_BF(BEreq::cb_sd_neut3body->brchtbb(3,2), 0.0, "~chi-_2", "bbar", "t");
      result.set_BF(BEreq::cb_sd_neut3body->brchelne(3,1), 0.0, "~chi+_1", "nubar_e", "e-");
      result.set_BF(BEreq::cb_sd_neut3body->brchelne(3,1), 0.0, "~chi-_1", "nu_e", "e+");
      result.set_BF(BEreq::cb_sd_neut3body->brchelne(3,2), 0.0, "~chi+_2", "nubar_e", "e-");
      result.set_BF(BEreq::cb_sd_neut3body->brchelne(3,2), 0.0, "~chi-_2", "nu_e", "e+");
      result.set_BF(BEreq::cb_sd_neut3body->brchmunmu(3,1), 0.0, "~chi+_1", "nubar_mu", "mu-");
      result.set_BF(BEreq::cb_sd_neut3body->brchmunmu(3,1), 0.0, "~chi-_1", "nu_mu", "mu+");
      result.set_BF(BEreq::cb_sd_neut3body->brchmunmu(3,2), 0.0, "~chi+_2", "nubar_mu", "mu-");
      result.set_BF(BEreq::cb_sd_neut3body->brchmunmu(3,2), 0.0, "~chi-_2", "nu_mu", "mu+");
      result.set_BF(BEreq::cb_sd_neut3body->brchtauntau(3,1), 0.0, "~chi+_1", "nubar_tau", "tau-");
      result.set_BF(BEreq::cb_sd_neut3body->brchtauntau(3,1), 0.0, "~chi-_1", "nu_tau", "tau+");
      result.set_BF(BEreq::cb_sd_neut3body->brchtauntau(3,2), 0.0, "~chi+_2", "nubar_tau", "tau-");
      result.set_BF(BEreq::cb_sd_neut3body->brchtauntau(3,2), 0.0, "~chi-_2", "nu_tau", "tau+");
      result.set_BF(BEreq::cb_sd_neut3body->brglup(3), 0.0, "~g", "ubar", "u");
      result.set_BF(BEreq::cb_sd_neut3body->brgldo(3), 0.0, "~g", "dbar", "d");
      result.set_BF(BEreq::cb_sd_neut3body->brglch(3), 0.0, "~g", "cbar", "c");
      result.set_BF(BEreq::cb_sd_neut3body->brglst(3), 0.0, "~g", "sbar", "s");
      result.set_BF(BEreq::cb_sd_neut3body->brgltop(3), 0.0, "~g", "tbar", "t");
      result.set_BF(BEreq::cb_sd_neut3body->brglbot(3), 0.0, "~g", "bbar", "b");
    }
  

    /// MSSM decays: neutralino_4
    void neutralino_4_decays (DecayTable::Entry& result) 
    {
      using namespace Pipes::neutralino_4_decays;
      mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);
     
      result.calculator = BEreq::cb_sd_neutwidth.origin();
      result.calculator_version = BEreq::cb_sd_neutwidth.version();

      result.width_in_GeV = BEreq::cb_sd_neutwidth->neuttot(4);
      result.set_BF(BEreq::cb_sd_neut2body->brneutzneut(4,1), 0.0, "~chi0_1", "Z0");
      result.set_BF(BEreq::cb_sd_neut2body->brneutzneut(4,2), 0.0, "~chi0_2", "Z0");
      result.set_BF(BEreq::cb_sd_neut2body->brneutzneut(4,3), 0.0, "~chi0_3", "Z0");
      result.set_BF(BEreq::cb_sd_neut2body->brneutwchar(4,1), 0.0, "~chi+_1", "W-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutwchar(4,1), 0.0, "~chi-_1", "W+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutwchar(4,2), 0.0, "~chi+_2", "W-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutwchar(4,2), 0.0, "~chi-_2", "W+");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthlneut(4,1), 0.0, "~chi0_1", "h0_1");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthhneut(4,1), 0.0, "~chi0_1", "h0_2");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthaneut(4,1), 0.0, "~chi0_1", "A0");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthlneut(4,2), 0.0, "~chi0_2", "h0_1");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthhneut(4,2), 0.0, "~chi0_2", "h0_2");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthaneut(4,2), 0.0, "~chi0_2", "A0");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthlneut(4,3), 0.0, "~chi0_3", "h0_1");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthhneut(4,3), 0.0, "~chi0_3", "h0_2");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthaneut(4,3), 0.0, "~chi0_3", "A0");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthcchar(4,1), 0.0, "~chi+_1", "H-");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthcchar(4,1), 0.0, "~chi-_1", "H+");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthcchar(4,2), 0.0, "~chi+_2", "H-");
      result.set_BF(BEreq::cb_sd_neut2body->brneuthcchar(4,2), 0.0, "~chi-_2", "H+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupl(4), 0.0, psn.isul, "ubar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupl(4), 0.0, psn.isulbar, "u");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupr(4), 0.0, psn.isur, "ubar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupr(4), 0.0, psn.isurbar, "u");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownl(4), 0.0, psn.isdl, "dbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownl(4), 0.0, psn.isdlbar, "d");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownr(4), 0.0, psn.isdr, "dbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownr(4), 0.0, psn.isdrbar, "d");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupl(4), 0.0, psn.iscl, "cbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupl(4), 0.0, psn.isclbar, "c");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupr(4), 0.0, psn.iscr, "cbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsupr(4), 0.0, psn.iscrbar, "c");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownl(4), 0.0, psn.issl, "sbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownl(4), 0.0, psn.isslbar, "s");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownr(4), 0.0, psn.issr, "sbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsdownr(4), 0.0, psn.issrbar, "s");
      result.set_BF(BEreq::cb_sd_neut2body->brneutst1(4), 0.0, psn.ist1, "tbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutst1(4), 0.0, psn.ist1bar, "t");
      result.set_BF(BEreq::cb_sd_neut2body->brneutst2(4), 0.0, psn.ist2, "tbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutst2(4), 0.0, psn.ist2bar, "t");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsb1(4), 0.0, psn.isb1, "bbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsb1(4), 0.0, psn.isb1bar, "b");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsb2(4), 0.0, psn.isb2, "bbar");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsb2(4), 0.0, psn.isb2bar, "b");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsell(4), 0.0, psn.isell, "e+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsell(4), 0.0, psn.isellbar, "e-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutselr(4), 0.0, psn.iselr, "e+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutselr(4), 0.0, psn.iselrbar, "e-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsell(4), 0.0, psn.ismul, "mu+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsell(4), 0.0, psn.ismulbar, "mu-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutselr(4), 0.0, psn.ismur, "mu+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutselr(4), 0.0, psn.ismurbar, "mu-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutstau1(4), 0.0, psn.istau1, "tau+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutstau1(4), 0.0, psn.istau1bar, "tau-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutstau2(4), 0.0, psn.istau2, "tau+");
      result.set_BF(BEreq::cb_sd_neut2body->brneutstau2(4), 0.0, psn.istau2bar, "tau-");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsnel(4), 0.0, psn.isnel, "nubar_e");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsnel(4), 0.0, psn.isnelbar, "nu_e");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsnel(4), 0.0, psn.isnmul, "nubar_mu");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsnel(4), 0.0, psn.isnmulbar, "nu_mu");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsn1(4), 0.0, psn.isntaul, "nubar_tau");
      result.set_BF(BEreq::cb_sd_neut2body->brneutsn1(4), 0.0, psn.isntaulbar, "nu_tau");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneutgamgrav(4), 0.0, "~G", "gamma");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneutzgrav(4), 0.0, "~G", "Z0");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthlgrav(4), 0.0, "~G", "h0_1");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthhgrav(4), 0.0, "~G", "h0_2");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthagrav(4), 0.0, "~G", "A0");
      result.set_BF(BEreq::cb_sd_neutloop->brnraddec(4,1), 0.0, "~chi0_1", "gamma");
      result.set_BF(BEreq::cb_sd_neutloop->brnraddec(4,2), 0.0, "~chi0_2", "gamma");
      result.set_BF(BEreq::cb_sd_neutloop->brnraddec(4,3), 0.0, "~chi0_3", "gamma");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneutgamgrav(4), 0.0, "~G", "gamma");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneutzgrav(4), 0.0, "~G", "Z0");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthlgrav(4), 0.0, "~G", "h0_1");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthhgrav(4), 0.0, "~G", "h0_2");
      result.set_BF(BEreq::cb_sd_neut2bodygrav->brneuthagrav(4), 0.0, "~G", "A0");
      result.set_BF(BEreq::cb_sd_neut3body->brneutup(4,1), 0.0, "~chi0_1", "ubar", "u");
      result.set_BF(BEreq::cb_sd_neut3body->brneutdow(4,1), 0.0, "~chi0_1", "dbar", "d");
      result.set_BF(BEreq::cb_sd_neut3body->brneutch(4,1), 0.0, "~chi0_1", "cbar", "c");
      result.set_BF(BEreq::cb_sd_neut3body->brneutst(4,1), 0.0, "~chi0_1", "sbar", "s");
      result.set_BF(BEreq::cb_sd_neut3body->brneuttop(4,1), 0.0, "~chi0_1", "tbar", "t");
      result.set_BF(BEreq::cb_sd_neut3body->brneutbot(4,1), 0.0, "~chi0_1", "bbar", "b");
      result.set_BF(BEreq::cb_sd_neut3body->brneutel(4,1), 0.0, "~chi0_1", "e+", "e-");
      result.set_BF(BEreq::cb_sd_neut3body->brneutmu(4,1), 0.0, "~chi0_1", "mu+", "mu-");
      result.set_BF(BEreq::cb_sd_neut3body->brneuttau(4,1), 0.0, "~chi0_1", "tau+", "tau-");
      result.set_BF(BEreq::cb_sd_neut3body->brneutnue(4,1), 0.0, "~chi0_1", "nubar_e", "nu_e");
      result.set_BF(BEreq::cb_sd_neut3body->brneutnumu(4,1), 0.0, "~chi0_1", "nubar_mu", "nu_mu");
      result.set_BF(BEreq::cb_sd_neut3body->brneutnutau(4,1), 0.0, "~chi0_1", "nubar_tau", "nu_tau");
      result.set_BF(BEreq::cb_sd_neut3body->brneutup(4,2), 0.0, "~chi0_2", "ubar", "u");
      result.set_BF(BEreq::cb_sd_neut3body->brneutdow(4,2), 0.0, "~chi0_2", "dbar", "d");
      result.set_BF(BEreq::cb_sd_neut3body->brneutch(4,2), 0.0, "~chi0_2", "cbar", "c");
      result.set_BF(BEreq::cb_sd_neut3body->brneutst(4,2), 0.0, "~chi0_2", "sbar", "s");
      result.set_BF(BEreq::cb_sd_neut3body->brneuttop(4,2), 0.0, "~chi0_2", "tbar", "t");
      result.set_BF(BEreq::cb_sd_neut3body->brneutbot(4,2), 0.0, "~chi0_2", "bbar", "b");
      result.set_BF(BEreq::cb_sd_neut3body->brneutel(4,2), 0.0, "~chi0_2", "e+", "e-");
      result.set_BF(BEreq::cb_sd_neut3body->brneutmu(4,2), 0.0, "~chi0_2", "mu+", "mu-");
      result.set_BF(BEreq::cb_sd_neut3body->brneuttau(4,2), 0.0, "~chi0_2", "tau+", "tau-");
      result.set_BF(BEreq::cb_sd_neut3body->brneutnue(4,2), 0.0, "~chi0_2", "nubar_e", "nu_e");
      result.set_BF(BEreq::cb_sd_neut3body->brneutnumu(4,2), 0.0, "~chi0_2", "nubar_mu", "nu_mu");
      result.set_BF(BEreq::cb_sd_neut3body->brneutnutau(4,2), 0.0, "~chi0_2", "nubar_tau", "nu_tau");
      result.set_BF(BEreq::cb_sd_neut3body->brneutup(4,3), 0.0, "~chi0_3", "ubar", "u");
      result.set_BF(BEreq::cb_sd_neut3body->brneutdow(4,3), 0.0, "~chi0_3", "dbar", "d");
      result.set_BF(BEreq::cb_sd_neut3body->brneutch(4,3), 0.0, "~chi0_3", "cbar", "c");
      result.set_BF(BEreq::cb_sd_neut3body->brneutst(4,3), 0.0, "~chi0_3", "sbar", "s");
      result.set_BF(BEreq::cb_sd_neut3body->brneuttop(4,3), 0.0, "~chi0_3", "tbar", "t");
      result.set_BF(BEreq::cb_sd_neut3body->brneutbot(4,3), 0.0, "~chi0_3", "bbar", "b");
      result.set_BF(BEreq::cb_sd_neut3body->brneutel(4,3), 0.0, "~chi0_3", "e+", "e-");
      result.set_BF(BEreq::cb_sd_neut3body->brneutmu(4,3), 0.0, "~chi0_3", "mu+", "mu-");
      result.set_BF(BEreq::cb_sd_neut3body->brneuttau(4,3), 0.0, "~chi0_3", "tau+", "tau-");
      result.set_BF(BEreq::cb_sd_neut3body->brneutnue(4,3), 0.0, "~chi0_3", "nubar_e", "nu_e");
      result.set_BF(BEreq::cb_sd_neut3body->brneutnumu(4,3), 0.0, "~chi0_3", "nubar_mu", "nu_mu");
      result.set_BF(BEreq::cb_sd_neut3body->brneutnutau(4,3), 0.0, "~chi0_3", "nubar_tau", "nu_tau");
      result.set_BF(BEreq::cb_sd_neut3body->brchubd(4,1), 0.0, "~chi+_1", "ubar", "d");
      result.set_BF(BEreq::cb_sd_neut3body->brchubd(4,1), 0.0, "~chi-_1", "dbar", "u");
      result.set_BF(BEreq::cb_sd_neut3body->brchubd(4,2), 0.0, "~chi+_2", "ubar", "d");
      result.set_BF(BEreq::cb_sd_neut3body->brchubd(4,2), 0.0, "~chi-_2", "dbar", "u");
      result.set_BF(BEreq::cb_sd_neut3body->brchcbs(4,1), 0.0, "~chi+_1", "cbar", "s");
      result.set_BF(BEreq::cb_sd_neut3body->brchcbs(4,1), 0.0, "~chi-_1", "sbar", "c");
      result.set_BF(BEreq::cb_sd_neut3body->brchcbs(4,2), 0.0, "~chi+_2", "cbar", "s");
      result.set_BF(BEreq::cb_sd_neut3body->brchcbs(4,2), 0.0, "~chi-_2", "sbar", "c");
      result.set_BF(BEreq::cb_sd_neut3body->brchtbb(4,1), 0.0, "~chi+_1", "tbar", "b");
      result.set_BF(BEreq::cb_sd_neut3body->brchtbb(4,1), 0.0, "~chi-_1", "bbar", "t");
      result.set_BF(BEreq::cb_sd_neut3body->brchtbb(4,2), 0.0, "~chi+_2", "tbar", "b");
      result.set_BF(BEreq::cb_sd_neut3body->brchtbb(4,2), 0.0, "~chi-_2", "bbar", "t");
      result.set_BF(BEreq::cb_sd_neut3body->brchelne(4,1), 0.0, "~chi+_1", "nubar_e", "e-");
      result.set_BF(BEreq::cb_sd_neut3body->brchelne(4,1), 0.0, "~chi-_1", "nu_e", "e+");
      result.set_BF(BEreq::cb_sd_neut3body->brchelne(4,2), 0.0, "~chi+_2", "nubar_e", "e-");
      result.set_BF(BEreq::cb_sd_neut3body->brchelne(4,2), 0.0, "~chi-_2", "nu_e", "e+");
      result.set_BF(BEreq::cb_sd_neut3body->brchmunmu(4,1), 0.0, "~chi+_1", "nubar_mu", "mu-");
      result.set_BF(BEreq::cb_sd_neut3body->brchmunmu(4,1), 0.0, "~chi-_1", "nu_mu", "mu+");
      result.set_BF(BEreq::cb_sd_neut3body->brchmunmu(4,2), 0.0, "~chi+_2", "nubar_mu", "mu-");
      result.set_BF(BEreq::cb_sd_neut3body->brchmunmu(4,2), 0.0, "~chi-_2", "nu_mu", "mu+");
      result.set_BF(BEreq::cb_sd_neut3body->brchtauntau(4,1), 0.0, "~chi+_1", "nubar_tau", "tau-");
      result.set_BF(BEreq::cb_sd_neut3body->brchtauntau(4,1), 0.0, "~chi-_1", "nu_tau", "tau+");
      result.set_BF(BEreq::cb_sd_neut3body->brchtauntau(4,2), 0.0, "~chi+_2", "nubar_tau", "tau-");
      result.set_BF(BEreq::cb_sd_neut3body->brchtauntau(4,2), 0.0, "~chi-_2", "nu_tau", "tau+");
      result.set_BF(BEreq::cb_sd_neut3body->brglup(4), 0.0, "~g", "ubar", "u");
      result.set_BF(BEreq::cb_sd_neut3body->brgldo(4), 0.0, "~g", "dbar", "d");
      result.set_BF(BEreq::cb_sd_neut3body->brglch(4), 0.0, "~g", "cbar", "c");
      result.set_BF(BEreq::cb_sd_neut3body->brglst(4), 0.0, "~g", "sbar", "s");
      result.set_BF(BEreq::cb_sd_neut3body->brgltop(4), 0.0, "~g", "tbar", "t");
      result.set_BF(BEreq::cb_sd_neut3body->brglbot(4), 0.0, "~g", "bbar", "b");
    }

  
    //////////// Singlet DM /////////////////////

    /// Add the decay of Higgs to singlets for the SingletDM model
    void SS_Higgs_decays (DecayTable::Entry& result)
    {
      using namespace Pipes::SS_Higgs_decays;

      // Get the spectrum information
      const Spectrum* spec = *Dep::SingletDM_spectrum;
      const RunningPars& extrapar = spec->get_HE()->runningpars();
      double mass = spec->get_Pole_Mass("S");
      double lambda = extrapar.get_mass_parameter("lambda_hS");
      double v0 = extrapar.get_mass_parameter("vev");
      double mhpole = spec->get_Pole_Mass("h0_1");

      // Add the h->SS width to the total
      double massratio2 = pow(mass/mhpole,2);
      double gamma = (2.0*mass <= mhpole) ? pow(lambda*v0,2)/(32.0*pi*mhpole) * sqrt(1.0 - 4.0*massratio2) : 0.0;        
      double newwidth = Dep::Higgs_decay_rates->width_in_GeV + gamma;
      result.width_in_GeV = newwidth;
      // Import the previous error estimates on the total width
      result.positive_error = Dep::Higgs_decay_rates->positive_error;
      result.negative_error = Dep::Higgs_decay_rates->negative_error;
      // Add the h->SS branching fraction
      result.set_BF(gamma/newwidth, 0.0, "S", "S");
      // Get the SM decays and rescale them
      double wscaling = Dep::Higgs_decay_rates->width_in_GeV / newwidth;
      for (auto it = Dep::Higgs_decay_rates->channels.begin(); it != Dep::Higgs_decay_rates->channels.end(); ++it)  
      {                                     
        result.channels[it->first] = std::pair<double, double>(it->second.first*wscaling, it->second.second*wscaling);
      }
      // Log calculator
      result.calculator = "GAMBIT::DecayBit";
      result.calculator_version = version;
    }
  

    //////////// Everything ///////////////////
  
    /// Collect all the DecayTable entries into an actual DecayTable 
    void all_decays (DecayTable &decays) 
    {
      using namespace Pipes::all_decays;

      decays("h0_1") = *Dep::Higgs_decay_rates;     // Add the Higgs decays.
      decays("Z0") = *Dep::Z_decay_rates;           // Add the Z decays
      decays("W+") = *Dep::W_plus_decay_rates;      // Add the W decays for W+.
      decays("W-") = *Dep::W_minus_decay_rates;     // Add the W decays for W-

      decays("t") = *Dep::t_decay_rates;            // Add the top decays for t.
      decays("tbar") = *Dep::tbar_decay_rates;      // Add the top decays for tbar
      decays("u_3") = decays("t");                  // Duplicate for mass-ordered quarks
      decays("ubar_3") = decays("tbar");            // Duplicate for mass-ordered quarks

      decays("mu+") = *Dep::mu_plus_decay_rates;    // Add the muon decays for mu+.
      decays("mu-") = *Dep::mu_minus_decay_rates;   // Add the muon decays for mu-
      decays("e+_2") = decays("mu+");               // Duplicate for mass-ordered leptons
      decays("e-_2") = decays("mu-");               // Duplicate for mass-ordered leptons

      decays("tau+") = *Dep::tau_plus_decay_rates;  // Add the tauon decays for tau+.
      decays("tau-") = *Dep::tau_minus_decay_rates; // Add the tauon decays for tau-.
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
      if (ModelInUse("MSSM78atQ") or ModelInUse("MSSM78atMGUT"))
      {
        mass_es_pseudonyms psn = *(Dep::SLHA_pseudonyms);

        decays("h0_2") = *Dep::h0_2_decay_rates;                 // Add the h0_2 decays.
        decays("A0") = *Dep::A0_decay_rates;                     // Add the A0 decays.
        decays("H+") = *Dep::Hplus_decay_rates;                  // Add the H+ decays.       
        decays("H-") = *Dep::Hminus_decay_rates;                 // Add the H+ decays.       

        decays("~g") = *Dep::gluino_decay_rates;                 // Add the gluino decays.

        decays("~chi+_1") = *Dep::charginoplus_1_decay_rates;    // Add the ~chi+_1 decays.
        decays("~chi-_1") = *Dep::charginominus_1_decay_rates;   // Add the ~chi+_1 decays.
        decays("~chi+_2") = *Dep::charginoplus_2_decay_rates;    // Add the ~chi+_2 decays.
        decays("~chi-_2") = *Dep::charginominus_2_decay_rates;   // Add the ~chi+_2 decays.
        decays("~chi0_1") = *Dep::neutralino_1_decay_rates;      // Add the ~chi0_1 decays.
        decays("~chi0_2") = *Dep::neutralino_2_decay_rates;      // Add the ~chi0_2 decays.
        decays("~chi0_3") = *Dep::neutralino_3_decay_rates;      // Add the ~chi0_3 decays.
        decays("~chi0_4") = *Dep::neutralino_4_decay_rates;      // Add the ~chi0_4 decays.

        decays(psn.ist1) = *Dep::stop_1_decay_rates;             // Add the ~t_1 decays.
        decays(psn.ist2) = *Dep::stop_2_decay_rates;             // Add the ~t_2 decays.
        decays(psn.isb1) = *Dep::sbottom_1_decay_rates;          // Add the ~b_1 decays.
        decays(psn.isb2) = *Dep::sbottom_2_decay_rates;          // Add the ~b_2 decays.
        decays(psn.isul) = *Dep::sup_l_decay_rates;              // Add the ~u_L decays.
        decays(psn.isur) = *Dep::sup_r_decay_rates;              // Add the ~u_R decays.
        decays(psn.isdl) = *Dep::sdown_l_decay_rates;            // Add the ~d_L decays.
        decays(psn.isdr) = *Dep::sdown_r_decay_rates;            // Add the ~d_R decays.
        decays(psn.iscl) = *Dep::scharm_l_decay_rates;           // Add the ~c_L decays.
        decays(psn.iscr) = *Dep::scharm_r_decay_rates;           // Add the ~c_R decays.
        decays(psn.issl) = *Dep::sstrange_l_decay_rates;         // Add the ~s_L decays.
        decays(psn.issr) = *Dep::sstrange_r_decay_rates;         // Add the ~s_R decays.
        decays(psn.isell) = *Dep::selectron_l_decay_rates;       // Add the ~e-_L decays.
        decays(psn.iselr) = *Dep::selectron_r_decay_rates;       // Add the ~e-_R decays.
        decays(psn.ismul) = *Dep::smuon_l_decay_rates;           // Add the ~mu-_L decays.
        decays(psn.ismur) = *Dep::smuon_r_decay_rates;           // Add the ~mu-_R decays.
        decays(psn.istau1) = *Dep::stau_1_decay_rates;           // Add the ~tau_1 decays.
        decays(psn.istau2) = *Dep::stau_2_decay_rates;           // Add the ~tau_2 decays.

        decays(psn.isnel) = *Dep::snu_electronl_decay_rates;     // Add the ~nu_e decays.
        decays(psn.isnmul) = *Dep::snu_muonl_decay_rates;        // Add the ~nu_mu decays.
        decays(psn.isntaul) = *Dep::snu_taul_decay_rates;        // Add the ~nu_tau decays.

        decays(psn.ist1bar) = *Dep::stopbar_1_decay_rates;       // Add the ~tbar_1 decays.
        decays(psn.ist2bar) = *Dep::stopbar_2_decay_rates;       // Add the ~tbar_2 decays.
        decays(psn.isb1bar) = *Dep::sbottombar_1_decay_rates;    // Add the ~bbar_1 decays.
        decays(psn.isb2bar) = *Dep::sbottombar_2_decay_rates;    // Add the ~bbar_2 decays.
        decays(psn.isulbar) = *Dep::supbar_l_decay_rates;        // Add the ~ubar_L decays.
        decays(psn.isurbar) = *Dep::supbar_r_decay_rates;        // Add the ~ubar_R decays.
        decays(psn.isdlbar) = *Dep::sdownbar_l_decay_rates;      // Add the ~dbar_L decays.
        decays(psn.isdrbar) = *Dep::sdownbar_r_decay_rates;      // Add the ~dbar_R decays.
        decays(psn.isclbar) = *Dep::scharmbar_l_decay_rates;     // Add the ~cbar_L decays.
        decays(psn.iscrbar) = *Dep::scharmbar_r_decay_rates;     // Add the ~cbar_R decays.
        decays(psn.isslbar) = *Dep::sstrangebar_l_decay_rates;   // Add the ~sbar_L decays.
        decays(psn.issrbar) = *Dep::sstrangebar_r_decay_rates;   // Add the ~sbar_R decays.
        decays(psn.isellbar) = *Dep::selectronbar_l_decay_rates; // Add the ~e+_L decays.
        decays(psn.iselrbar) = *Dep::selectronbar_r_decay_rates; // Add the ~e+_R decays.
        decays(psn.ismulbar) = *Dep::smuonbar_l_decay_rates;     // Add the ~mu+_L decays.
        decays(psn.ismurbar) = *Dep::smuonbar_r_decay_rates;     // Add the ~mu+_R decays.
        decays(psn.istau1bar) = *Dep::staubar_1_decay_rates;     // Add the ~taubar_1 decays.
        decays(psn.istau2bar) = *Dep::staubar_2_decay_rates;     // Add the ~taubar_2 decays.
        decays(psn.isnelbar)= *Dep::snubar_electronl_decay_rates;// Add the ~nu_e decays.
        decays(psn.isnmulbar) = *Dep::snubar_muonl_decay_rates;  // Add the ~nu_mu decays.
        decays(psn.isntaulbar) = *Dep::snubar_taul_decay_rates;  // Add the ~nu_tau decays.
        
      }

      //cout << "Full Decay Table as an SLHAea structure: \n" << decays.as_slhaea() << endl;
  
    }

    /// Read an SLHA file in and use it to create a GAMBIT DecayTable 
    void all_decays_from_SLHA(DecayTable& decays)
    {
      using namespace Pipes::all_decays_from_SLHA;
      if (not runOptions->hasKey("SLHA_decay_filenames"))
      {
        DecayBit_error().raise(LOCAL_INFO, "Option \"SLHA_decay_filenames\" is required to use this function.");
      }
      static unsigned int counter = 0;
      std::vector<str> filenames = runOptions->getValue<std::vector<str> >("SLHA_decay_filenames");
      logger() << "Reading SLHA file: " << filenames[counter] << std::endl;
      std::ifstream ifs(filenames[counter]);
      if(!ifs.good()) backend_error().raise(LOCAL_INFO, "SLHA file not found.");
      SLHAstruct slha(ifs);
      ifs.close();
      counter++;
      if (counter >= filenames.size()) counter = 0;
      decays = DecayTable(slha);
    }
 
    /// Get MSSM mass eigenstate pseudonyms for the gauge eigenstates
    void get_mass_es_pseudonyms(mass_es_pseudonyms& result)
    {
      using namespace Pipes::get_mass_es_pseudonyms;
      const SubSpectrum* mssm = (*Dep::MSSM_spectrum)->get_HE();
      
      double tol = runOptions->getValueOrDef<double>(1e-2, "off_diagonal_tolerance");
      bool hard_error = runOptions->getValueOrDef<bool>(true, "hard_error_on_mixing_failure");
      bool debug = runOptions->getValueOrDef<bool>(false, "debug");
      result.refill(mssm, tol, hard_error, debug);
    }

    /// @}

  }

}
