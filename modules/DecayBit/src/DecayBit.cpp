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
///  \date 2015 Jan,Feb
///
///  *********************************************

#include "gambit/Utils/gambit_module_headers.hpp"
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
      /// CsB result = BEreq::sd_top2body->brtopbw; 
      result = BEreq::sd_top2body->brtopbw; 
      cout << "top 2 body Br's: " << BEreq::sd_top2body->brtopbw << endl;
    }


    /// Calculate decay rates for Higgs in the SM
    void SMHiggs_decays (DecayTable::Entry& result) 
    {
      // Remember that result does not arrive pristine, but contains the result of the last point.  Make sure to overwrite it fully!
      using namespace Pipes::SMHiggs_decays;
      Spectrum* spec = *Dep::SM_spectrum;
      double m_H = spec->phys.get_Pole_Mass("h0_1"); // Retrieve the masses from the spectrum object.
      double m_b = spec->phys.get_Pole_Mass("b");
      double m_t = spec->phys.get_Pole_Mass("t");
      double m_W = spec->phys.get_Pole_Mass("W+");
      double m_Z = spec->phys.get_Pole_Mass("Z0");
      double totalwidth = 5.0; // In GeV -- this should be calculated or retrieved from a backend
      double BF_bb = 0.37; // In reality, this should be obtained from a backend, using m_b, m_H, etc
      double BF_tt = 0.10; // In reality, this should be obtained from a backend, using m_t, m_H, etc
      double BF_WW = 0.35; // In reality, this should be obtained from a backend, using m_W, m_H, etc
      double BF_WWZ = 0.18;// In reality, this should be obtained from a backend, using m_W, m_H, m_Z, etc
      cout << "H,b,t,W,Z masses: " << m_H << " " << m_b << " " << m_t <<  " " << m_W << " " << m_Z << endl;
      result.width_in_GeV = totalwidth;       // Alternatively, you could make a blank one with result = DecayTable::Entry(totalwidth).
      result.set_BF(BF_bb, "b", "bbar");      // Set the BFs for each final state.
      result.set_BF(BF_tt, "t", "tbar");
      result.set_BF(BF_WW, "W+", "W-");
      result.set_BF(BF_WWZ, "W+", "W-", "Z0");
    }

    /// Calculate decay rates for Higgs in the MSSM
    void MSSMHiggs_decays (DecayTable::Entry& result) 
    {
      // Remember that result does not arrive pristine, but contains the result of the last point.  Make sure to overwrite it fully!
      using namespace Pipes::MSSMHiggs_decays;
      Spectrum* spec = *Dep::MSSM_spectrum;
      double m_H = spec->phys.get_Pole_Mass("h0_1"); // Retrieve the masses from the spectrum object.
      double m_b = spec->phys.get_Pole_Mass("b");
      double m_t = spec->phys.get_Pole_Mass("t");
      double m_W = spec->phys.get_Pole_Mass("W+");
      double m_Z = spec->phys.get_Pole_Mass("Z0");
      double totalwidth = 10.0; // In GeV -- this should be calculated or retrieved from a backend
      double BF_bb = 0.35; // In reality, this should be obtained from a backend, using m_b, m_H, etc
      double BF_tt = 0.10; // In reality, this should be obtained from a backend, using m_t, m_H, etc
      double BF_WW = 0.35; // In reality, this should be obtained from a backend, using m_W, m_H, etc
      double BF_WWZ = 0.2; // In reality, this should be obtained from a backend, using m_W, m_H, m_Z, etc
      result.width_in_GeV = totalwidth;       // Set the total width.
      result.set_BF(BF_bb, "b", "bbar");      // Set the BFs for each final state.
      result.set_BF(BF_tt, "t", "tbar");
      result.set_BF(BF_WW, "W+", "W-");
      result.set_BF(BF_WWZ, "W+", "W-", "Z0");
      cout << "H,b,t,W,Z masses in DecayBit::MSSMHiggs_decays: " << m_H << " " << m_b << " " << m_t <<  " " << m_W << " " << m_Z << endl;
      cout << "Higgs BF to WWZ: " << result.sum_BF() << endl;
      cout << "Higgs BF sum in DecayBit::MSSMHiggs_decays: " << result.sum_BF() << endl;
    }

    /// SM decays: W+
    void W_plus_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 2.08;                    
      result.positive_error = 4.0e-02;
      result.negative_error = 4.0e-02;
      //result.set_BF(1.0, "e+", "nu_e");              
    }

    /// SM decays: W-
    void W_minus_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 2.08;                    
      result.positive_error = 4.0e-02;
      result.negative_error = 4.0e-02;
      //result.set_BF(1.0, "e+", "nu_e");              
    }

    /// SM decays: Z
    void Z_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 2.4952;                    
      result.positive_error = 2.3e-03;
      result.negative_error = 2.3es-03;
      //result.set_BF(1.0, "e+", "nu_e");              
    }

    /// SM decays: t
    void t_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 2.0;                    
      result.positive_error = 5.0e-01;
      result.negative_error = 5.0e-01;
      //result.set_BF(1.0, "e+", "nu_e");              
    }

    /// SM decays: tbar
    void tbar_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 2.0;                    
      result.positive_error = 5.0e-01;
      result.negative_error = 5.0e-01;
      //result.set_BF(1.0, "e+", "nu_e");              
    }

    /// SM decays: mu-
    void mu_minus_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 2.9959847e-19;                    
      result.positive_error = 3.0e-25;
      result.negative_error = 3.0e-25;
      //result.set_BF(1.0, "e+", "nu_e");              
    }

    /// SM decays: mu+
    void mu_plus_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 2.9959847e-19;                    
      result.positive_error = 3.0e-25;
      result.negative_error = 3.0e-25;
      //result.set_BF(1.0, "e+", "nu_e");              
    }

    /// SM decays: tau-
    void tau_minus_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 2.267E-12;                    
      result.positive_error = 4.0e-15;
      result.negative_error = 4.0e-15;
      //result.set_BF(1.0, "e+", "nu_e");              
    }

    /// SM decays: tau+
    void tau_plus_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 2.267E-12;                    
      result.positive_error = 4.0e-15;
      result.negative_error = 4.0e-15;
      //result.set_BF(1.0, "e+", "nu_e");              
    }

    /// SM decays: pi0
    void pi_0_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 7.73e-09;                    
      result.positive_error = 1.7e-10;
      result.negative_error = 1.7e-10;
      //result.set_BF(1.0, "e+", "nu_e");              
    }

    /// SM decays: pi+
    void pi_plus_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 2.5284e-17;                    
      result.positive_error = 5.0e-21;
      result.negative_error = 5.0e-21;
      //result.set_BF(1.0, "e+", "nu_e");              
    }

    /// SM decays: pi-
    void pi_minus_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 2.5284e-17;                    
      result.positive_error = 5.0e-21;
      result.negative_error = 5.0e-21;
      //result.set_BF(1.0, "e+", "nu_e");              
    }

    /// SM decays: eta
    void eta_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 1.31e-06;                    
      result.positive_error = 5.0e-08;
      result.negative_error = 5.0e-08;
      //result.set_BF(1.0, "e+", "nu_e");              
    }

    /// SM decays: rho0
    void rho_0_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 1.491e-01;                    
      result.positive_error = 8.0e-04;
      result.negative_error = 8.0e-04;
      //result.set_BF(1.0, "e+", "nu_e");              
    }

    /// SM decays: rho+
    void rho_plus_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 1.491e-01;                    
      result.positive_error = 8.0e-04;
      result.negative_error = 8.0e-04;
      //result.set_BF(1.0, "e+", "nu_e");              
    }

    /// SM decays: rho-
    void rho_minus_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 1.491e-01;                    
      result.positive_error = 8.0e-04;
      result.negative_error = 8.0e-04;
      //result.set_BF(1.0, "e+", "nu_e");              
    }

    /// SM decays: omega
    void omega_decays (DecayTable::Entry& result) 
    {
      result.width_in_GeV = 8.49e-03;                    
      result.positive_error = 8.0e-05;
      result.negative_error = 8.0e-05;
      //result.set_BF(1.0, "e+", "nu_e");              
    }

    /// Collect all the DecayTable entries into an actual DecayTable 
    void all_decays (DecayTable &result) 
    {
      using namespace Pipes::all_decays;
      DecayTable decays = DecayTable();             // Start with a blank DecayTable.

      decays("h0_1") = *Dep::Higgs_decay_rates;     // Add the Higgs decays.
      decays("Z") = *Dep::W_minus_decay_rates;      // Add the Z decays
      decays("W+") = *Dep::W_plus_decay_rates;      // Add the W decays for W+.
      decays("W-") = *Dep::W_minus_decay_rates;     // Add the W decays for W-

      decays("t") = *Dep::mu_plus_decay_rates;      // Add the top decays for t.
      decays("tbar") = *Dep::mu_minus_decay_rates;  // Add the top decays for tbar
      decays("u_3") = decays("t")                   // Duplicate for mass-ordered quarks
      decays("ubar_3") = decays("tbar")             // Duplicate for mass-ordered quarks

      decays("mu+") = *Dep::mu_plus_decay_rates;    // Add the muon decays for mu+.
      decays("mu-") = *Dep::mu_minus_decay_rates;   // Add the muon decays for mu-
      decays("e+_2") = decays("mu+")                // Duplicate for mass-ordered leptons
      decays("e-_2") = decays("mu-")                // Duplicate for mass-ordered leptons

      decays("tau+") = *Dep::tau_plus_decay_rates;  // Add the tauon decays for tau+.
      decays("tau-") = *Dep::tau_minus_decay_rates; // Do the same for tau-, assuming no CP asymmetry.
      decays("e+_3") = decays("tau+")               // Duplicate for mass-ordered leptons
      decays("e-_3") = decays("tau-")               // Duplicate for mass-ordered leptons

      decays("pi0") = *Dep::pi_0_decay_rates;       // Add the neutral pion decays.
      decays("pi+") = *Dep::pi_plus_decay_rates;    // Add the pi+ decays.
      decays("pi-") = *Dep::pi_minus_decay_rates;   // Add the pi- decays.
      decays("eta") = *Dep::eta_decay_rates;        // Add the eta meson decays.
      decays("rho0") = *Dep::rho_0_rates;           // Add the neutral rho meson decays.
      decays("rho+") = *Dep::rho_plus_rates;        // Add the rho+ decays.
      decays("rho-") = *Dep::rho_minus_rates;       // Add the rho- decays.
      decays("omega") = *Dep::omega_decay_rates;    // Add the omega meson decays.
      
      //decays("mu-") = DecayTable::Entry(decays("mu+").width_in_GeV); // Do the same for mu-, assuming no CP asymmetry.
      //decays("mu-").set_BF(decays("mu+").BF("e+", "nu_e"), "e-", "nu_e");
      //cout << "BF for mu- -> nu e-: " << decays("mu-").BF("e-", "nu_e") << endl;
      result = decays;
    }

    /// @}

  }

}
