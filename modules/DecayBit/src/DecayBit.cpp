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
///  \date 2015 Jan-Mar
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

    void decayTest (double &result)                                               // CsB >
    {
      using namespace Pipes::decayTest;
      BEreq::sdecay();
      result = BEreq::cb_sd_top2body->brtopbw; 
      result = BEreq::cb_sd_topwidth->toptot2; 
      cout << "top 2 body Br's: " << BEreq::cb_sd_top2body->brtopbw << endl;
      cout << "top total width: " << BEreq::cb_sd_topwidth->toptot2 << endl;
    }                                                                             // CsB <


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

    /// Calculate decay rates for mu
    void mu_decays (DecayTable::Entry& result) 
    {
      // Remember that result does not arrive pristine, but contains the result of the last point.  Make sure to overwrite it fully!
      //using namespace Pipes::mu_decays;
      //Spectrum* spec = *Dep::SM_spectrum;
      //double m_mu = spec->phys.get_Pole_Mass("mu+"); // Maybe you depend on the SM masses, maybe not
      result.width_in_GeV = 15.0;                    // (number needs checking against PDG)
      result.set_BF(1.0, "e+", "nu_e");              // Set the BF (probably not really 100%)
    }

    /// Get branching fraction for H -> b bbar
    void BF_H_to_bbbar (double &result) 
    {
      using namespace Pipes::BF_H_to_bbbar;
      result = Dep::Higgs_decay_rates->BF("b", "bbar");  // Retrieve the branching fraction from the DecayTable::Entry 
    }

    /// Collect all the DecayTable entries into an actual DecayTable 
    void all_decays (DecayTable &result) 
    {
      // Remember that result does not arrive pristine, but contains the result of the last point.  Make sure to overwrite it fully!
      using namespace Pipes::all_decays;
      DecayTable decays = DecayTable();        // Start with a blank DecayTable.
      decays("h0_1") = *Dep::Higgs_decay_rates;// Add the Higgs decays.
      decays("mu+") = *Dep::mu_decay_rates;    // Add the muon decays for mu+.
      decays("mu-") = DecayTable::Entry(decays("mu+").width_in_GeV); // Do the same for mu-, assuming no CP asymmetry.
      decays("mu-").set_BF(decays("mu+").BF("e+", "nu_e"), "e-", "nu_e");
      cout << "BF for mu- -> nu e-: " << decays("mu-").BF("e-", "nu_e") << endl;
      result = decays;
    }

    /// @}

  }

}
