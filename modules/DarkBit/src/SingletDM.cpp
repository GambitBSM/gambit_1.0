//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Implementation of scalar singlet DM routines.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger  
///          (c.weniger@uva.nl)
///  \date Oct 2014, Apr 2015
///
///  \author Torsten Bringmann 
///  \date May 2015
///
///  \author Pat Scott
///          <p.scott@imperial.ac.uk>
///  \date 2015 May
///
///  *********************************************

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/Elements/virtual_higgs.hpp"
#include "gambit/DarkBit/DarkBit_rollcall.hpp"
#include "gambit/Utils/ascii_table_reader.hpp"
#include "boost/make_shared.hpp"
#include "gambit/DarkBit/DarkBit_utils.hpp"

namespace Gambit
{
  
  namespace DarkBit
  {

    class SingletDM
    {
      public:
        /// Initialize SingletDM object (branching ratios etc)
        SingletDM(
            TH_ProcessCatalog* catalog,
            std::map<std::string, Funk::Funk> & arg_f_vs_mass)
        {
          mh   = catalog->getParticleProperty("h0_1").mass;
          // FIXME: This should not be hard-coded
          v0   = 246.0;
          alpha_s = 0.12;
          mb   = catalog->getParticleProperty("b").mass;
          mc   = catalog->getParticleProperty("c").mass;
          mtau = catalog->getParticleProperty("tau-").mass;
          mt   = catalog->getParticleProperty("t").mass;

          f_vs_mass = arg_f_vs_mass;
          Gamma = f_vs_mass["Gamma"]->bind("mass");
          Gamma_mh = Gamma->eval(mh);
        };
        ~SingletDM() {}

        /// Helper function (Breit-Wigner)
        double Dh2 (double s)
        {
          return 1/((s-mh*mh)*(s-mh*mh)+mh*mh*Gamma_mh*Gamma_mh);
        }

        /*! \brief Returns <sigma v> in cm3/s for given channel, velocity and
         *         model parameters.
         *
         * channel: bb, tautau, mumu, ss, cc, tt, gg, gammagamma, Zgamma, WW,
         * ZZ, hh
         */
        double sv(std::string channel, double lambda, double mass, double v)
        {
          // FIXME: Comment this in to get a segfault... Sigh
          //f_vs_mass["Gamma"]->bind("mass");
          // FIXME: Comment this in to get not a segfault... Sigh-sigh
          //auto h = f_vs_mass["Gamma"]->bind("mass");
          // I think this is related to a bug in the funktions.hpp.  But I
          // don't understand how.
          double s = 4*mass*mass/(1-v*v/4);
          double sqrt_s = sqrt(s);
          if ( sqrt_s < 90 ) 
          {
            piped_invalid_point.request(
                "SingletDM sigmav called with sqrt_s < 90 GeV.");
            return 0;
          }

          if ( channel == "hh" ) { return sv_hh(lambda, mass, v); }
          if ( sqrt_s < 300 )
          {
            double br = virtual_SMHiggs_widths(channel,sqrt_s);
            double Gamma_s = virtual_SMHiggs_widths("Gamma",sqrt_s);
            double GeV2tocm3s1 = gev2cm2*s2cm;

            double res = 2*lambda*lambda*v0*v0/
              sqrt_s*Dh2(s)*Gamma_s*GeV2tocm3s1*br;
            return res;
          }
          else
          {
            if ( channel == "bb" and sqrt_s > mb )
              return sv_ff(lambda, mass, v, mb, true);
            if ( channel == "cc" and sqrt_s > mc  )
              return sv_ff(lambda, mass, v, mc, false);
            if ( channel == "tautau" and sqrt_s > mtau )
              return sv_ff(lambda, mass, v, mtau, false);
            if ( channel == "tt" and sqrt_s > mt )
              return sv_ff(lambda, mass, v, mt, false);
            if ( channel == "ZZ" and sqrt_s > m_Zboson)
              return sv_ZZ(lambda, mass, v);
            if ( channel == "WW" and sqrt_s > m_Wboson)
              return sv_WW(lambda, mass, v);
          }
          return 0;
        }

        // Annihilation into W bosons.
        double sv_WW(double lambda, double mass, double v)
        {
          double s = 4*mass*mass/(1-v*v/4);
          double x = pow(m_Wboson,2)/s;
          double GeV2tocm3s1 = gev2cm2*s2cm;
          return pow(lambda,2)*s/8/M_PI*sqrt(1-4*x)*Dh2(s)*(1-4*x+12*pow(x,2))
            *GeV2tocm3s1;
        }

        // Annihilation into Z bosons.
        double sv_ZZ(double lambda, double mass, double v)
        {
          double s = 4*mass*mass/(1-v*v/4);
          double x = pow(m_Zboson,2)/s;
          double GeV2tocm3s1 = gev2cm2*s2cm;
          return pow(lambda,2)*s/16/M_PI*sqrt(1-4*x)*Dh2(s)*(1-4*x+12*pow(x,2))
            * GeV2tocm3s1;
        }

        // Annihilation into fermions
        double sv_ff(
            double lambda, double mass, double v, double mf, bool is_quark)
        {
          double s = 4*mass*mass/(1-v*v/4);
          double vf = sqrt(1-4*pow(mf,2)/s);
          double Xf = 1;
          if ( is_quark ) Xf = 3 * 
            (1+(3/2*log(pow(mf,2)/s)+9/4)*4*alpha_s/3/M_PI);
          double GeV2tocm3s1 = gev2cm2*s2cm;
          return pow(lambda,2)*
            pow(mf,2)/4/M_PI*Xf*pow(vf,3) * Dh2(s) * GeV2tocm3s1;
        }

        /// Calculate <sigma v> for hh final states
        double sv_hh(double lambda, double mass, double v)
        {
          double s = 4*mass*mass/(1-v*v/4);  // v is relative velocity
          double vh = sqrt(1-4*mh*mh/s);  // vh and vs are lab velocities
          // Hardcoded lower velocity avoids nan results
          double vs = std::max(v/2, 1e-6);  
          double tp = pow(mass,2)+pow(mh,2)-0.5*s*(1-vs*vh);
          double tm = pow(mass,2)+pow(mh,2)-0.5*s*(1+vs*vh);

          double aR = 1+3*mh*mh*(s-mh*mh)*Dh2(s);
          double aI = 3*mh*mh*sqrt(s)*Gamma_mh*Dh2(s);

          return pow(lambda,2)/16/M_PI/pow(s,2)/vs *
            (
             (pow(aR,2)+pow(aI,2))*s*vh*vs
             +4*lambda*pow(v0,2)*(aR-lambda*pow(v0,2)/(s-2*pow(mh,2)))
             *log(abs(pow(mass,2)-tp)/abs(pow(mass,2)-tm))
             +(2*pow(lambda,2)*pow(v0,4)*s*vh*vs)
             /(pow(mass,2)-tm)/(pow(mass,2)-tp));
        }

      private:
        std::map<std::string, Funk::Funk> f_vs_mass;
        Funk::BoundFunk Gamma;

        double Gamma_mh, mh, v0, alpha_s, mb, mc, mtau, mt;
    };

    void DarkMatter_ID_SingletDM(std::string & result)
    {
      using namespace Pipes::DarkMatter_ID_SingletDM;
      result = "S";
    } // DarkMatter_ID_SingletDM


    /// Direct detection couplings for Singlet DM.
    void DD_couplings_SingletDM(DarkBit::DD_couplings &result)
    {
      using namespace Pipes::DD_couplings_SingletDM;
      double mass = *Param["mass"];
      double lambda = *Param["lambda"];
      // FIXME: It would be cleaner if this actually does not come from the
      // process catalog, but instead from the Spectrum Object
      double mh = (*Dep::TH_ProcessCatalog).getParticleProperty("h0_1").mass;

      // TODO: Double check expressions (taken from Cline et al. 2013)
      double fp = 2./9. + 7./9.*(*Param["fpu"] + *Param["fpd"] + *Param["fps"]);
      double fn = 2./9. + 7./9.*(*Param["fnu"] + *Param["fnd"] + *Param["fns"]);

      result.gps = lambda*fp*m_neutron/pow(mh,2)/mass/2;
      result.gns = lambda*fn*m_proton/pow(mh,2)/mass/2;
      result.gpa = 0;  // Only SI cross-section
      result.gna = 0;

      logger() << "Singlet DM DD couplings:" << std::endl;
      logger() << " gps = " << result.gps << std::endl;
      logger() << " gns = " << result.gns << std::endl;
      logger() << " gpa = " << result.gpa << std::endl;
      logger() << " gna = " << result.gna << std::endl;

    } // function DD_couplings_SingletDM

    std::map<std::string, Funk::Funk> get_f_vs_mass(std::string filename)
    {
      // Higgs branching ratios and total width Gamma [GeV], as function of
      // mass [GeV] (90 - 150 GeV)
      ASCIItableReader table(filename);
      std::vector<std::string> colnames = 
        initVector<std::string>("mass", "bb", "tautau", "mumu",
            "ss", "cc", "tt", "gg", "gammagamma", "Zgamma",
            "WW", "ZZ", "Gamma");
      table.setcolnames(colnames);

      std::map<std::string, Funk::Funk> f_vs_mass;
      for (auto it = colnames.begin(); it != colnames.end(); it++)
      {
        f_vs_mass[*it] = Funk::interp("mass", table["mass"], table[*it]);
      }
      return f_vs_mass;
    }

    /// Set up process catalogue for Singlet DM.
    void TH_ProcessCatalog_SingletDM(DarkBit::TH_ProcessCatalog &result)
    {
      using namespace Pipes::TH_ProcessCatalog_SingletDM;
      using std::vector;
      using std::string;

      // Initialize Higgs decay tables (static, hence only once)
      static std::map<string, Funk::Funk> f_vs_mass = 
        get_f_vs_mass("Elements/data/Higgs_decay_1101.0593.dat");

      // Import model parameters
      double mS = *Param["mass"];
      double lambda = *Param["lambda"];

      // Initialize empty catalog and main annihilation process
      TH_ProcessCatalog catalog;
      TH_Process process_ann((string)"S", (string)"S");


      ///////////////////////////
      // Import particle masses
      ///////////////////////////
      
      // Import Spectrum objects
      const Spectrum* spec = *Dep::SingletDM_spectrum;
      const SubSpectrum* spec_uv = spec->get_UV();
      const SubSpectrum* SM = spec->get_LE();
      const SMInputs& SMI   = spec->get_SMInputs();

      // FIXME: Update "<H>" etc
      double mH = spec->get_Pole_Mass("h0_1");
      double v = spec_uv->runningpars.get_mass_parameter("vev");

      // Get SM pole masses
#define getSMmass(Name, spinX2)                                                \
      catalog.particleProperties.insert(                                       \
          std::pair<string, TH_ParticleProperty>(                              \
            Name , TH_ParticleProperty(SM->phys.get_Pole_Mass(Name), spinX2)   \
            )                                                                  \
          );    
      getSMmass("e-",     1)
      getSMmass("e+",     1)
      getSMmass("mu-",    1)
      getSMmass("mu+",    1)
      getSMmass("tau-",   1)
      getSMmass("tau+",   1)
      getSMmass("Z0",     2)
      getSMmass("W+",     2)
      getSMmass("W-",     2)      
      getSMmass("g",      2)   
      getSMmass("gamma",  2)   
      getSMmass("b",      1)
      getSMmass("bbar",   1)
      getSMmass("t",      1)
      getSMmass("tbar",   1)
#undef getSMmass
      // Get remaining masses
#define addParticle(Name, Mass, spinX2)                                        \
      catalog.particleProperties.insert(                                       \
          std::pair<string, TH_ParticleProperty>(                              \
            Name , TH_ParticleProperty(Mass, spinX2)                           \
            )                                                                  \
          );    
      // Pole masses not available for the light quarks.    
      addParticle("d"   , SMI.mD,  1) // md(2 GeV)^MS-bar, not pole mass
      addParticle("dbar", SMI.mD,  1) // md(2 GeV)^MS-bar, not pole mass
      addParticle("u"   , SMI.mU,  1) // mu(2 GeV)^MS-bar, not pole mass
      addParticle("ubar", SMI.mU,  1) // mu(2 GeV)^MS-bar, not pole mass
      addParticle("s"   , SMI.mS,  1) // ms(2 GeV)^MS-bar, not pole mass
      addParticle("sbar", SMI.mS,  1) // ms(2 GeV)^MS-bar, not pole mass
      addParticle("c"   , SMI.mCmC,1) // mc(mc)^MS-bar, not pole mass
      addParticle("cbar", SMI.mCmC,1) // mc(mc)^MS-bar, not pole mass
      // Masses for neutrino flavour eigenstates. Set to zero.
      // FIXME: Is this information required for anything?
      addParticle("nu_e",     0.0, 1)
      addParticle("nubar_e",  0.0, 1)
      addParticle("nu_mu",    0.0, 1)
      addParticle("nubar_mu", 0.0, 1)
      addParticle("nu_tau",   0.0, 1)
      addParticle("nubar_tau",0.0, 1)      
      addParticle("S",        mS , 0)  // Singlet mass
      addParticle("h0_1",     mH , 0)  // SM-like Higgs
      // FIXME: Get Higgs mass from Spec Bit
      
      // FIXME: Get meson masses from somewhere
      addParticle("pi0",      0.135,   0)
      addParticle("pi+",      0.1396,  0)
      addParticle("pi-",      0.1396,  0)
      addParticle("eta",      0.547,   0)
      addParticle("rho0",     0.775,   1)        
      addParticle("rho+",     0.775,   1)       
      addParticle("rho-",     0.775,   1)             
      addParticle("omega",    0.7827,  1)         
#undef addParticle


      /////////////////////////////
      // Import Decay information
      /////////////////////////////

      // Import decay table from DecayBit
      const DecayTable* tbl = &(*Dep::decay_rates);
      
      // Save Higgs width for later
      double gammaH = tbl->at("h0_1").width_in_GeV;

      // Set of imported decays
      std::set<string> importedDecays;

      // Minimum branching ratio to include
      double minBranching = 
        runOptions->getValueOrDef<double>(0.0, "ProcessCatalog_MinBranching");

      // Import relevant decays (only Higgs and subsequent decays)
      std::cout << "Importing decays..." << std::endl;
      using DarkBit_utils::ImportDecays;
      ImportDecays("h0_1", catalog, importedDecays, tbl, minBranching);

      // Instantiate new SingletDM object
      // FIXME: Probably this can be speed up f_vs_mass
      auto singletDM = boost::make_shared<SingletDM>(&catalog, f_vs_mass);

      // Populate annihilation channel list and add thresholds to threshold
      // list.
      // (remark: the lowest threshold is here = 2*mS, whereas in DS-internal
      // conventions, this lowest threshold is not listed)
      process_ann.thresholdResonances.threshold_energy.push_back(2*mS); 
      auto channel = 
        Funk::vec<string>("bb", "WW", "cc", "tautau", "ZZ", "tt", "hh");
      auto p1 = 
        Funk::vec<string>("b",   "W+", "c",   "tau+", "Z0", "t",   "h0_1");
      auto p2 = 
        Funk::vec<string>("bbar","W-", "cbar","tau-", "Z0", "tbar","h0_1");
      {
        for ( int i = 0; i < channel.size(); i++ )
        {
          double mtot_final = 
            catalog.particleProperties.at(p1[i]).mass +
            catalog.particleProperties.at(p2[i]).mass;
          if ( mS*2 > mtot_final )
          {
            Funk::Funk kinematicFunction = Funk::funcM(singletDM,
                &SingletDM::sv, channel[i], lambda, mS, Funk::var("v"));
            TH_Channel channel(
                Funk::vec<string>(p1[i], p2[i]), kinematicFunction
                );
            process_ann.channelList.push_back(channel);
          }
          else
          {
            process_ann.thresholdResonances.threshold_energy.
              push_back(mtot_final);
          }
        }
      }

      /* FIXME: This is too general, but could go somewhere else
      double resmasses[] = {catalog.getParticleProperty("h0_1").mass};
      double reswidths[] = {0.01};  
      int resmax=sizeof(resmasses) / sizeof(resmasses[0]);

      for (int i=0; i<resmax; i++)
      {
        if (resmasses[i]/mS > 2.)
        {
          process_ann.thresholdResonances.resonances.
            push_back(TH_Resonance(resmasses[i], reswidths[i]));
        }
      }
      */
      
      // Populate resonance list
      if ( mH >= mS*2 ) process_ann.thresholdResonances.resonances.
          push_back(TH_Resonance(mH, gammaH));

      catalog.processList.push_back(process_ann);

      result = catalog;
    } // function TH_ProcessCatalog_SingletDM
  }
}
