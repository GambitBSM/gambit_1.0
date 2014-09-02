//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module HiggsBit
///
///  Put your functions in files like this
///  if you wish to add observables or likelihoods
///  to this module.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Chris Rogan
///          (crogan@cern.ch)
///  \date 2014 Aug
///
///  *********************************************

#include "gambit_module_headers.hpp"
#include "HiggsBit_rollcall.hpp"

namespace Gambit
{

  namespace HiggsBit
  {
 
     /// ********************************************
    /// Non-rollcalled Functions and Local Variables
    /// ********************************************

    /// @todo void? 
    void PointInit_Default()
    {
      logger() << "==================" << endl;
      logger() << "HiggsBit says,";
      logger() << "\"Yo Homie...Let's roll...\"" << endl;
      logger() << LogTags::info << endl << EOM;
    }


    /// *************************************************
    /// Rollcalled functions properly hooked up to Gambit
    /// *************************************************
 
    void initialize () 
    {
      cout << endl;
      cout << "********************************************" << endl;
      cout << "***       Initializing HiggsBit      ***" << endl;
      cout << "********************************************" << endl;
    }

    // Module functions

    void HB_LEPchisq(double &result) 
    {
      using namespace Pipes::HB_LEPchisq;
      
      char name[100] = "HiggsBit/example_w_decay.slha";
   
      // initialize LEP chisq tables
      BEreq::initialize_HiggsBounds_chisqtables();

      int nHneut = 3; // number of neutral higgses
      int nHplus = 1; // number of charged higgses
      int ANA = 1;    // indicates LEP-only analysis

      // initialize HiggsBounds to LEP only
      BEreq::initialize_HiggsBounds_int(nHneut,nHplus,ANA);

      // initialize decay info from SLHA file
      BEreq::HiggsBounds_input_SLHA(byVal(name));

      // put in dummy (zero) mass uncertainties
      double dMhneut[3];
      dMhneut[0] = 0.;
      dMhneut[1] = 0.;
      dMhneut[2] = 0.;
      double dMhch[1];
      dMhch[0] = 0.;
      BEreq::HiggsBounds_set_mass_uncertainties(dMhneut,dMhch);

      // run Higgs bounds 'classic'
      double HBresult, obsratio;
      int chan, ncombined;
      BEreq::run_HiggsBounds_classic(HBresult,chan,obsratio,ncombined);

      // extract the LEP chisq
      double chisq_withouttheory,chisq_withtheory;
      int chan2;
      double theor_unc = 1.5; // theory uncertainty
      BEreq::HB_calc_stats(theor_unc,chisq_withouttheory,chisq_withtheory,chan2);

      result = chisq_withouttheory;
      std::cout << "Calculating LEP chisq: " << chisq_withouttheory << " (no theor), " << chisq_withtheory << " (with theor)" << endl;

      BEreq::finish_HiggsBounds_chisqtables();
      BEreq::finish_HiggsBounds();

    }

     /// *************************************************

    void HS_LHCchisq(double &result) 
    {
      using namespace Pipes::HS_LHCchisq;
      
      char name[100] = "HiggsBit/example_w_decay.slha";

      int nHneut = 3; // number of neutral higgses
      int nHplus = 1; // number of charged higgses

      // initialize HiggsSignals with the latest results
      BEreq::initialize_HiggsSignals_latestresults(nHneut,nHplus);

      // choose which pdf style to use for Higgs lineshape
      int pdf = 2; // Gaussian
      BEreq::setup_pdf(pdf);

      // add theoretical mass uncertainties
      // double deltaM[nHneut];
      // BEreq::HiggsSignals_neutral_input_MassUncertainty(deltaM);

      // add uncertainties to cross-sections and branching ratios
      // double dCS[5];
      // double dBR[5];
      // BEreq::setup_rate_uncertainties(dCS,dBR);

      // initialize decay info from SLHA file
      BEreq::HiggsBounds_input_SLHA(byVal(name));

      // run HiggsSignals
      int mode = 1;
      double csqmu, csqmh, csqtot, Pvalue;
      int nobs;
      BEreq::run_HiggsSignals(mode, csqmu, csqmh, csqtot, nobs, Pvalue);


      result = csqtot;
      std::cout << "Calculating LHC chisq: " << csqmu << " (signal strength only), " << csqmh << " (mass only), ";
      std::cout << csqtot << " (both)" << endl;

      BEreq::finish_HiggsSignals();
    }
  }
}
