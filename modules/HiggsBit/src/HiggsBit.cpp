//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Functions of module HiggsBit
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

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/HiggsBit/HiggsBit_rollcall.hpp"

namespace Gambit
{

  namespace HiggsBit
  {
 
    void HB_LEPchisq(double &result) 
    {
      using namespace Pipes::HB_LEPchisq;
   
      // initialize LEP chisq tables
      BEreq::initialize_HiggsBounds_chisqtables();

      int nHneut = 3; // number of neutral higgses
      int nHplus = 1; // number of charged higgses
      int ANA = 1;    // indicates LEP-only analysis

      // initialize HiggsBounds to LEP only
      BEreq::initialize_HiggsBounds_int(nHneut,nHplus,ANA);

      const int hb_clen = 100;

      char sname[hb_clen] = "HiggsBit/example_w_decay.slha";
      for (int i=strlen(sname); i<=hb_clen; ++i) { sname[i] = ' '; }

      // initialize decay info from SLHA file
      BEreq::HiggsBounds_input_SLHA(sname[0]);
      
      std::cout << sname << endl;

      // put in dummy (zero) mass uncertainties
      double dMhneut[3];
      dMhneut[0] = 0.;
      dMhneut[1] = 0.;
      dMhneut[2] = 0.;
      double dMhch[1];
      dMhch[0] = 0.;
      BEreq::HiggsBounds_set_mass_uncertainties(&dMhneut[0],&dMhch[0]);
      
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
      
      const int hb_clen = 100;

      char sname[hb_clen] = "HiggsBit/example_w_decay.slha";
      for (int i=strlen(sname); i<=hb_clen; ++i) { sname[i] = ' '; }

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
      BEreq::HiggsBounds_input_SLHA_HS(sname[0]);

      // run HiggsSignals
      int mode = 1;
      double csqmu, csqmh, csqtot, Pvalue;
      int nobs;
      BEreq::run_HiggsSignals(mode, csqmu, csqmh, csqtot, nobs, Pvalue);


      result = csqtot;
      std::cout << "Calculating LHC chisq: " << csqmu << " (signal strength only), " << csqmh << " (mass only), ";
      std::cout << csqtot << " (both), Nobs: " << nobs << ", Pvalue: " << Pvalue << endl;

      BEreq::finish_HiggsSignals();
    }
  }
}
