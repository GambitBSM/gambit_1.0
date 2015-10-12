//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Function definitions of PrecisionBit.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2014 Nov
///
///  \author Chris Rogan
///          (crogan@cern.ch)
///  \date 2014 Aug
///
///  *********************************************

#include <algorithm>

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/PrecisionBit/PrecisionBit_rollcall.hpp"
#include "gambit/Utils/statistics.hpp"

//#define PRECISIONBIT_DEBUG

namespace Gambit
{

  namespace PrecisionBit
  {

    using namespace LogTags;

    // Module functions

    void FH_PrecisionObs(fh_PrecisionObs &result) 
    {
      using namespace Pipes::FH_PrecisionObs;

      fh_real gm2;        // g_{mu}-2
      fh_real Deltarho;   // deltaRho
      fh_real MWMSSM;     // W pole mass in MSSM
      fh_real MWSM;       // W pole mass in SM
      fh_real SW2MSSM;    // sin^2theta_W^leptonic_effective in MSSM
      fh_real SW2SM;      // sin^2theta_W^leptonic_effective in SM
      fh_real edmeTh;     // electron EDM
      fh_real edmn;       // neutron EDM
      fh_real edmHg;      // mercury EDM
      int ccb;            // ?

      int error = 1;
      BEreq::FHConstraints(error, gm2, Deltarho, 
         MWMSSM, MWSM, SW2MSSM, SW2SM,
         edmeTh, edmn, edmHg, ccb);

      fh_PrecisionObs PrecisionObs;
      PrecisionObs.gmu2 = gm2;       
      PrecisionObs.deltaRho = Deltarho;   
      PrecisionObs.MW_MSSM = MWMSSM;     
      PrecisionObs.MW_SM = MWSM;      
      PrecisionObs.sinW2_MSSM = SW2MSSM; 
      PrecisionObs.sinW2_SM = SW2SM;  
      PrecisionObs.edm_ele = edmeTh;    
      PrecisionObs.edm_neu = edmn;    
      PrecisionObs.edm_Hg = edmHg;     
      PrecisionObs.ccb = ccb;           

      result = PrecisionObs;
    }

    /// FeynHiggs precision extractors
    /// @{
    void FH_precision_gm2     (double &result) { result = Pipes::FH_precision_gm2::Dep::FH_Precision->gmu2;          }
    void FH_precision_edm_e   (double &result) { result = Pipes::FH_precision_edm_e::Dep::FH_Precision->edm_ele;     }
    void FH_precision_edm_n   (double &result) { result = Pipes::FH_precision_edm_n::Dep::FH_Precision->edm_neu;     }
    void FH_precision_edm_hg  (double &result) { result = Pipes::FH_precision_edm_hg::Dep::FH_Precision->edm_Hg;     }
    void FH_precision_deltarho(triplet<double> &result)
    {
      result.central = Pipes::FH_precision_deltarho::Dep::FH_Precision->deltaRho;
      result.upper = result.central*0.1; //FIXME need to add theory uncertainty --> check FH papers
      result.lower = result.upper;      
    }
    void FH_precision_mw(triplet<double> &result)
    {
      result.central = Pipes::FH_precision_mw::Dep::FH_Precision->MW_MSSM;  
      result.upper = 0.5; //FIXME need to add theory uncertainty --> check FH papers
      result.lower = result.upper;      
    }
    void FH_precision_sinW2   (triplet<double> &result)
    {
      result.central = Pipes::FH_precision_sinW2::Dep::FH_Precision->sinW2_MSSM;
      result.upper = result.central*0.1; //FIXME need to add theory uncertainty --> check FH papers
      result.lower = result.upper;      
    }
    /// @}

    /// Precision MSSM spectrum manufacturer
    void make_MSSM_precision_spectrum(const Spectrum* &result)
    {
      using namespace Pipes::make_MSSM_precision_spectrum;
      static Spectrum improved_spec;
      improved_spec = **Dep::unimproved_MSSM_spectrum;
      SubSpectrum* HE = improved_spec.get_HE();
      SubSpectrum* LE = improved_spec.get_LE();
 
      // W mass
      //-------
      
      HE->phys().set(Par::Pole_Mass, Dep::prec_mw->central, "W+");    
      HE->phys().set_override(Par::Pole_Mass_1srd_high, Dep::prec_mw->upper, "W+", true); 
      HE->phys().set_override(Par::Pole_Mass_1srd_low, Dep::prec_mw->lower, "W+", true); 
      //FIXME this syntax doesn't work yet
      //HE->phys().set(Par::Pole_Mass_1srd_high, Dep::prec_mw->upper, "W+"); 
      //HE->phys().set(Par::Pole_Mass_1srd_low, Dep::prec_mw->lower, "W+"); 
      LE->phys().set(Par::Pole_Mass, Dep::prec_mw->central, "W+");    
      LE->phys().set_override(Par::Pole_Mass_1srd_high, Dep::prec_mw->upper, "W+", false); //FIXME these should contain some default error, no? 
      LE->phys().set_override(Par::Pole_Mass_1srd_low, Dep::prec_mw->lower, "W+", false);  //FIXME these should contain some default error, no?
      //FIXME this syntax doesn't work yet
      //LE->phys().set(Par::Pole_Mass_1srd_high, Dep::prec_mw->upper, "W+"); 
      //LE->phys().set(Par::Pole_Mass_1srd_low, Dep::prec_mw->lower, "W+"); 
      
      // Higgs masses
      //-------------

      // Central value: 
      //  1 = from precision calculator
      //  2 = from spectrum calculator
      //  3 = mean of precision mass and mass from spectrum calculator
      static int central = runOptions->getValueOrDef<double>(1, "Higgs_predictions_source");
      // FIXME switch to this once the setters take pdg pairs 
      //const std::pair<int,int> higgses[4] = {std::pair<int,int>(25,0),
      //                                 std::pair<int,int>(35,0), 
      //                                 std::pair<int,int>(36,0),
      //                                 std::pair<int,int>(37,0)};
      const str higgses[4] = {"h0_1", "h0_2", "A0", "H+"};
      const double mh_s[4] = {HE->phys().get(Par::Pole_Mass, higgses[0]),
                              HE->phys().get(Par::Pole_Mass, higgses[1]),
                              HE->phys().get(Par::Pole_Mass, higgses[2]),
                              HE->phys().get(Par::Pole_Mass, higgses[3])};          
      double mh[4];


      #ifdef PRECISIONBIT_DEBUG
        for (int i = 0; i < 4; i++) cout << "h masses, FS: "<< mh_s[i] << endl;
        for (int i = 0; i < 4; i++) cout << "h masses, FS error low: "<< HE->phys().get(Par::Pole_Mass_1srd_low, higgses[i])*mh_s[i] << endl;
        for (int i = 0; i < 4; i++) cout << "h masses, FS error high: "<< HE->phys().get(Par::Pole_Mass_1srd_high, higgses[i])*mh_s[i] << endl;
        for (int i = 0; i < 4; i++) cout << "h masses, FH: "<< Dep::prec_HiggsMasses->MH[i] << endl;
        for (int i = 0; i < 4; i++) cout << "h masses, FH error: "<< Dep::prec_HiggsMasses->deltaMH[i] << endl;
      #endif
      
      if (central == 1)
      {
        for (int i = 0; i < 4; i++) mh[i] = Dep::prec_HiggsMasses->MH[i];
      }
      else if (central == 2)
      {
        // Do nothing; spectrum already has the correct central values of the Higgs masses.
      }
      else if (central == 3)
      {
        for (int i = 0; i < 4; i++) mh[i] = 0.5*(Dep::prec_HiggsMasses->MH[i] + mh_s[i]);
      }
      else 
      {
        std::stringstream msg;
        msg << "Unrecognised Higgs_predictions_source option specified for make_MSSM_precision_spectrum: " << central;
        PrecisionBit_error().raise(LOCAL_INFO,msg.str());
      }
      if (central != 2)
      {
        for (int i = 0; i < 4; i++) HE->phys().set(Par::Pole_Mass, mh[i], higgses[i]); 
      }

      // Uncertainties:
      //  Definitions: D_s = error on mass from spectrum calculator
      //               D_p = error on mass from precision calculator
      //               D_g = difference between central values from spectrum generator and precision calculator
      //  1 = sum in quadrature of D_s, D_p and D_g
      //  2 = range around chosen central (RACC), with D_s and D_p taken at their respective edges.
      //  3 = RACC, with 1/2 * D_g taken at both edges.
      //  4 = RACC, with 1/2 * D_g taken at the spectrum-generator edge, D_p taken at the other edge.
      //  5 = RACC, with 1/2 * D_g taken at the precision-calculator edge, D_s taken at the other edge.
      static int error = runOptions->getValueOrDef<double>(2, "Higgs_predictions_error_method");
      const double D_g[4] = {Dep::prec_HiggsMasses->MH[0] - mh_s[0],
                             Dep::prec_HiggsMasses->MH[1] - mh_s[1],
                             Dep::prec_HiggsMasses->MH[2] - mh_s[2],
                             Dep::prec_HiggsMasses->MH[3] - mh_s[3]};
      double mh_low[4], mh_high[4];
      
      //  1 = sum in quadrature of D_s, D_p and D_g
      if (error == 1)
      {
        for (int i = 0; i < 4; i++) 
        {
          double D_s_low = HE->phys().get(Par::Pole_Mass_1srd_low, higgses[i])*mh_s[i];
          double D_s_high = HE->phys().get(Par::Pole_Mass_1srd_high, higgses[i])*mh_s[i];
          double D_p = Dep::prec_HiggsMasses->deltaMH[i];
          mh_low[i] = sqrt(D_s_low*D_s_low + D_p*D_p + D_g[i]*D_g[i]);
          mh_high[i] = sqrt(D_s_high*D_s_high + D_p*D_p + D_g[i]*D_g[i]);
        }
      }

      //  2 = range around chosen central (RACC), with D_s and D_p taken at their respective edges.
      else if (error == 2)
      {
        for (int i = 0; i < 4; i++) 
        {
          double D_s_low = mh_s[i]*HE->phys().get(Par::Pole_Mass_1srd_low, higgses[i]);
          double D_s_high = mh_s[i]*HE->phys().get(Par::Pole_Mass_1srd_high, higgses[i]);
          double D_p = Dep::prec_HiggsMasses->deltaMH[i];
          if (central == 1) // Using precision calculator mass as central value
          {
            if (D_g[i] >= 0) // Precision calculator mass is higher than spectrum generator mass 
            {
              mh_low[i] = D_g[i] + D_s_low;
              mh_high[i] = D_p;
            }
            else // Precision calculator mass is lower than spectrum generator mass
            {
              mh_low[i] = D_p;
              mh_high[i] = D_s_high-D_g[i];
            }
          }
          else if (central == 2) // Using spectrum generator mass as central value
          {
            if (D_g[i] >= 0) // Precision calculator mass is higher than spectrum generator mass 
            {
              mh_low[i] = D_s_low;
              mh_high[i] = D_g[i] + D_p;
            }
            else // Precision calculator mass is lower than spectrum generator mass
            {
              mh_low[i] = D_p-D_g[i];
              mh_high[i] = D_s_high;
            }
          }
          else  // Using mean of spectrum gen and precision calc as central value
          {
            if (D_g[i] >= 0) // Precision calculator mass is higher than spectrum generator mass 
            {
              mh_low[i] = 0.5*D_g[i] + D_s_low;
              mh_high[i] = 0.5*D_g[i] + D_p;
            }
            else // Precision calculator mass is lower than spectrum generator mass
            {
              mh_low[i] = D_p - 0.5*D_g[i];
              mh_high[i] = D_s_high - 0.5*D_g[i];
            }
          }
        }
      }
      
      //  3 = RACC, with 1/2 * D_g taken at both edges.
      else if (error == 3)
      {
        for (int i = 0; i < 4; i++) 
        {
          if (central == 1) // Using precision calculator mass as central value
          {
            if (D_g[i] >= 0) // Precision calculator mass is higher than spectrum generator mass 
            {
              mh_low[i] = 1.5*D_g[i];
              mh_high[i] = 0.5*D_g[i];
            }
            else // Precision calculator mass is lower than spectrum generator mass
            {
              mh_low[i] = -0.5*D_g[i];
              mh_high[i] = -1.5*D_g[i];
            }
          }
          else if (central == 2) // Using spectrum generator mass as central value
          {
            if (D_g[i] >= 0) // Precision calculator mass is higher than spectrum generator mass 
            {
              mh_low[i] = 0.5*D_g[i];
              mh_high[i] = 1.5*D_g[i];
            }
            else // Precision calculator mass is lower than spectrum generator mass
            {
              mh_low[i] = -1.5*D_g[i];
              mh_high[i] = -0.5*D_g[i];
            }
          }
          else  // Using mean of spectrum gen and precision calc as central value
          {
            mh_low[i] = fabs(D_g[i]);
            mh_high[i] = mh_low[i];
          }
        }
      }

      //  4 = RACC, with 1/2 * D_g taken at the spectrum-generator edge, D_p taken at the other edge.
      else if (error == 4)
      {
        for (int i = 0; i < 4; i++) 
        {
          double D_p = Dep::prec_HiggsMasses->deltaMH[i];
          if (central == 1) // Using precision calculator mass as central value
          {
            if (D_g[i] >= 0) // Precision calculator mass is higher than spectrum generator mass 
            {
              mh_low[i] = 1.5*D_g[i];
              mh_high[i] = D_p;
            }
            else // Precision calculator mass is lower than spectrum generator mass
            {
              mh_low[i] = D_p;
              mh_high[i] = -1.5*D_g[i];
            }
          }
          else if (central == 2) // Using spectrum generator mass as central value
          {
            if (D_g[i] >= 0) // Precision calculator mass is higher than spectrum generator mass 
            {
              mh_low[i] = 0.5*D_g[i];
              mh_high[i] = D_g[i] + D_p;
            }
            else // Precision calculator mass is lower than spectrum generator mass
            {
              mh_low[i] = D_p-D_g[i];
              mh_high[i] = -0.5*D_g[i];
            }
          }
          else  // Using mean of spectrum gen and precision calc as central value
          {
            if (D_g[i] >= 0) // Precision calculator mass is higher than spectrum generator mass 
            {
              mh_low[i] = D_g[i];
              mh_high[i] = 0.5*D_g[i] + D_p;
            }
            else // Precision calculator mass is lower than spectrum generator mass
            {
              mh_low[i] = D_p - 0.5*D_g[i];
              mh_high[i] = -D_g[i];
            }
          }
        }
      }

      //  5 = RACC, with 1/2 * D_g taken at the precision-calculator edge, D_s taken at the other edge.
      else if (error == 5)
      {
        for (int i = 0; i < 4; i++) 
        {
          double D_s_low = mh_s[i]*HE->phys().get(Par::Pole_Mass_1srd_low, higgses[i]);
          double D_s_high = mh_s[i]*HE->phys().get(Par::Pole_Mass_1srd_high, higgses[i]);
          if (central == 1) // Using precision calculator mass as central value
          {
            if (D_g[i] >= 0) // Precision calculator mass is higher than spectrum generator mass 
            {
              mh_low[i] = D_g[i] + D_s_low;
              mh_high[i] = 0.5*D_g[i];
            }
            else // Precision calculator mass is lower than spectrum generator mass
            {
              mh_low[i] = -0.5*D_g[i];
              mh_high[i] = D_s_high-D_g[i];
            }
          }
          else if (central == 2) // Using spectrum generator mass as central value
          {
            if (D_g[i] >= 0) // Precision calculator mass is higher than spectrum generator mass 
            {
              mh_low[i] = D_s_low;
              mh_high[i] = 1.5*D_g[i];
            }
            else // Precision calculator mass is lower than spectrum generator mass
            {
              mh_low[i] = -1.5*D_g[i];
              mh_high[i] = D_s_high;
            }
          }
          else  // Using mean of spectrum gen and precision calc as central value
          {
            if (D_g[i] >= 0) // Precision calculator mass is higher than spectrum generator mass 
            {
              mh_low[i] = 0.5*D_g[i] + D_s_low;
              mh_high[i] = D_g[i];
            }
            else // Precision calculator mass is lower than spectrum generator mass
            {
              mh_low[i] = -D_g[i];
              mh_high[i] = D_s_high - 0.5*D_g[i];
            }
          }
        }
      }

      //  >5 = failure
      else 
      {
        std::stringstream msg;
        msg << "Unrecognised Higgs_predictions_error_method specified for make_MSSM_precision_spectrum: " << central;
        PrecisionBit_error().raise(LOCAL_INFO,msg.str());
      }
      for (int i = 0; i < 4; i++) HE->phys().set_override(Par::Pole_Mass_1srd_low, mh_low[i], higgses[i], true);
      for (int i = 0; i < 4; i++) HE->phys().set_override(Par::Pole_Mass_1srd_high, mh_high[i], higgses[i], true);
      //FIXME this syntax does not work yet
      //for (int i = 0; i < 4; i++) HE->phys().set(Par::Pole_Mass_1srd_low, mh_low[i], higgses[i]);
      //for (int i = 0; i < 4; i++) HE->phys().set(Par::Pole_Mass_1srd_high, mh_high[i], higgses[i]);

      #ifdef PRECISIONBIT_DEBUG
        for (int i = 0; i < 4; i++) cout << "h masses, central: "<< HE->phys().get(Par::Pole_Mass, higgses[i])<< endl;
        for (int i = 0; i < 4; i++) cout << "h masses, low: "<< HE->phys().get(Par::Pole_Mass_1srd_low, higgses[i])<< endl;
        for (int i = 0; i < 4; i++) cout << "h masses, high: " << HE->phys().get(Par::Pole_Mass_1srd_high, higgses[i])<<endl;
      #endif

      result = &improved_spec;
      
    }
     
    /// Basic mass/coupling extractors for different types of spectra, for use with precision likelihoods below
    /// @{
    void mw_from_MSSM_spectrum(triplet<double> &result)
    {
      using namespace Pipes::mw_from_MSSM_spectrum;
      const SubSpectrum* HE = (*Dep::MSSM_spectrum)->get_HE();
      result.central = HE->phys().get(Par::Pole_Mass, "W+");;
      result.upper =  HE->phys().get(Par::Pole_Mass_1srd_high, "W+");
      result.lower =  HE->phys().get(Par::Pole_Mass_1srd_low, "W+");
    }
    void mw_from_SM_spectrum(triplet<double> &result)
    {
      using namespace Pipes::mw_from_SM_spectrum;
      const SubSpectrum* HE = (*Dep::SM_spectrum)->get_HE();
      result.central = HE->phys().get(Par::Pole_Mass, "W+");;
      result.upper =  HE->phys().get(Par::Pole_Mass_1srd_high, "W+");
      result.lower =  HE->phys().get(Par::Pole_Mass_1srd_low, "W+");
    }
    void mw_from_SS_spectrum(triplet<double> &result)
    {
      using namespace Pipes::mw_from_SS_spectrum;
      const SubSpectrum* HE = (*Pipes::mw_from_SS_spectrum::Dep::SingletDM_spectrum)->get_HE();
      result.central = HE->phys().get(Par::Pole_Mass, "W+");;
      result.upper =  HE->phys().get(Par::Pole_Mass_1srd_high, "W+");
      result.lower =  HE->phys().get(Par::Pole_Mass_1srd_low, "W+");
    }
    /// @}

    /// Z boson mass likelihood
    /// M_Z (Breit-Wigner mass parameter ~ pole) = 91.1876 +/- 0.0021 GeV (1 sigma), Gaussian.  
    /// Reference: http://pdg.lbl.gov/2014/listings/rpp2014-list-z-boson.pdf = K.A. Olive et al. (Particle Data Group), Chin. Phys. C38, 090001 (2014)
    void lnL_Z_mass_chi2(double &result)
    {
      using namespace Pipes::lnL_Z_mass_chi2;
      result = Stats::gaussian_loglikelihood(Dep::SMINPUTS->mZ, 91.1876, 0.0, 0.0021);
    }

    /// t quark mass likelihood
    /// m_t (pole) = 173.34 +/- 0.76 GeV (1 sigma), Gaussian.
    /// Reference: http://arxiv.org/abs/1403.4427
    void lnL_t_mass_chi2(double &result)
    {
      using namespace Pipes::lnL_t_mass_chi2;
      result = Stats::gaussian_loglikelihood(Dep::SMINPUTS->mT, 173.34, 0.0, 0.76);
    }
        
    /// b quark mass likelihood
    /// m_b (mb)^MSbar = 4.18 +/- 0.03 GeV (1 sigma), Gaussian.
    /// Reference: http://pdg.lbl.gov/2014/listings/rpp2014-list-b-quark.pdf = K.A. Olive et al. (Particle Data Group), Chin. Phys. C38, 090001 (2014)
    void lnL_mbmb_chi2(double &result)
    {
      using namespace Pipes::lnL_mbmb_chi2;
      result = Stats::gaussian_loglikelihood(Dep::SMINPUTS->mBmB, 4.18, 0.0, 0.03);
    }

    /// c quark mass likelihood
    /// m_c (mc)^MSbar = 1.275 +/- 0.025 GeV (1 sigma), Gaussian.
    /// Reference: http://pdg.lbl.gov/2014/listings/rpp2014-list-c-quark.pdf = K.A. Olive et al. (Particle Data Group), Chin. Phys. C38, 090001 (2014)
    void lnL_mcmc_chi2(double &result)
    {
      using namespace Pipes::lnL_mcmc_chi2;
      result = Stats::gaussian_loglikelihood(Dep::SMINPUTS->mCmC, 1.275, 0.0, 0.025);
    }

    /// \brief Likelihoods for charm quark mass and light quark mass ratios. At the moment, all are just gaussians.
    /// Default data from PDG http://PDG.LBL.GOV 10/6/2015
    /// m_u/m_d = 0.38-0.58
    /// m_s / (m_u + m_d) = 27.5 +/- 1.0
    /// m_s = 95 +/- 5 GeV

    void lnL_light_quark_masses_chi2 (double &result)
    {
        using namespace Pipes::lnL_light_quark_masses_chi2;
        const SMInputs& SM = *Dep::SMINPUTS;

        double mud_central = runOptions->getValueOrDef<double>(0.48, "mud_central");
        double mud_error = runOptions->getValueOrDef<double>(0.10, "mud_error");
        double msud_central = runOptions->getValueOrDef<double>(27.5, "msud_central");
        double msud_error = runOptions->getValueOrDef<double>(1.0, "msud_error");
        double ms_central = runOptions->getValueOrDef<double>(95., "ms_central");
        double ms_error = runOptions->getValueOrDef<double>(5., "ms_error");

        result = Stats::gaussian_loglikelihood(SM.mU/SM.mD, mud_central, 0., mud_error)
            + Stats::gaussian_loglikelihood(SM.mS/(SM.mU + SM.mD), msud_central, 0., msud_error)
            + Stats::gaussian_loglikelihood(SM.mS, ms_central, 0., ms_error);
        logger() << "Combined lnL for light quark mass ratios and s-quark mass is " << result << EOM;
    }
        
    /// alpha^{-1}(mZ)^MSbar likelihood
    /// alpha^{-1}(mZ)^MSbar = 127.940 +/- 0.014 (1 sigma), Gaussian.  (PDG global SM fit)
    /// Reference: http://pdg.lbl.gov/2014/reviews/rpp2014-rev-standard-model.pdf = K.A. Olive et al. (Particle Data Group), Chin. Phys. C38, 090001 (2014)
    void lnL_alpha_em_chi2(double &result)
    {
      using namespace Pipes::lnL_alpha_em_chi2;
      result = Stats::gaussian_loglikelihood(Dep::SMINPUTS->alphainv, 127.94, 0.0, 0.014);
    }
    
    /// alpha_s(mZ)^MSbar likelihood   
    /// alpha_s(mZ)^MSbar = 0.1185 +/- 0.0006 (1 sigma), Gaussian.
    /// Reference: http://pdg.lbl.gov/2014/reviews/rpp2014-rev-qcd.pdf = K.A. Olive et al. (Particle Data Group), Chin. Phys. C38, 090001 (2014)
    void lnL_alpha_s_chi2(double &result)
    {
      using namespace Pipes::lnL_alpha_s_chi2;
      result = Stats::gaussian_loglikelihood(Dep::SMINPUTS->alphaS, 0.1185, 0.0, 0.0006);
    }
        
    /// W boson mass likelihood
    /// M_W (Breit-Wigner mass parameter ~ pole) = 80.385 +/- 0.015  GeV (1 sigma), Gaussian.
    /// Reference http://pdg.lbl.gov/2014/listings/rpp2014-list-w-boson.pdf = K.A. Olive et al. (Particle Data Group), Chin. Phys. C38, 090001 (2014)
    void lnL_W_mass_chi2(double &result)
    {
      using namespace Pipes::lnL_W_mass_chi2;
      double theory_uncert = std::max(Dep::mw->upper, Dep::mw->lower);
      result = Stats::gaussian_loglikelihood(Dep::mw->central, 80.385, theory_uncert, 0.015);
    }

    /// Effective leptonic sin^2(theta_W) likelihood
    /// sin^2theta_W^leptonic_effective~ sin^2theta_W(mZ)^MSbar + 0.00029 = 0.23155 +/- 0.00005    (1 sigma), Gaussian.  (PDG global SM fit)
    /// Reference: http://pdg.lbl.gov/2014/reviews/rpp2014-rev-standard-model.pdf = K.A. Olive et al. (Particle Data Group), Chin. Phys. C38, 090001 (2014)
    void lnL_sinW2_eff_chi2(double &result)
    {
      using namespace Pipes::lnL_sinW2_eff_chi2;
      double theory_uncert = std::max(Dep::prec_sinW2_eff->upper, Dep::prec_sinW2_eff->lower);
      result = Stats::gaussian_loglikelihood(Dep::prec_sinW2_eff->central, 0.23155, theory_uncert, 0.00005);
    }
    
    /// Delta rho likelihood
    /// Delta rho = 0.00040 +/- 0.00024 (1 sigma), Gaussian.  (PDG global SM fit)
    /// Reference: http://pdg.lbl.gov/2014/reviews/rpp2014-rev-standard-model.pdf = K.A. Olive et al. (Particle Data Group), Chin. Phys. C38, 090001 (2014)
    void lnL_deltarho_chi2(double &result)
    {
      using namespace Pipes::lnL_deltarho_chi2;
      double theory_uncert = std::max(Dep::deltarho->upper, Dep::deltarho->lower);      
      result = Stats::gaussian_loglikelihood(Dep::deltarho->central, 0.00040, theory_uncert, 0.00024);
    }
    
    /// g-2 likelihoods? (TODO Do these belong here or in FlavBit?) 


     
    /// This function is unfinished because SUSY-POPE is buggy.
    void SP_PrecisionObs(double &result) 
    {
      using namespace Pipes::SP_PrecisionObs;
      int error = 0;
      Farray<Fdouble,1,35> SM_Obs;
      Farray<Fdouble,1,35> MSSM_Obs;
         
      BEreq::CalcObs_SUSYPOPE(error, SM_Obs, MSSM_Obs);
      if(error != 0)
      {
        std::cout << "something went wrong" << std::endl;
      }
      else 
      {
        std::cout << " MW in SM = " << SM_Obs(1) << std::endl;
        std::cout << " MW in MSSM = " << MSSM_Obs(1) << std::endl;        
      }
      result = 0.1;
      return;

    }
     
  }
}
