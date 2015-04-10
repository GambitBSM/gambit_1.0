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
///  \date no idea
///
///  *********************************************

#include <string>

#include "gambit/Utils/ASCIItableReader.hpp"
#include "gambit/Utils/funktions.hpp"
#include "gambit/Utils/numerical_constants.hpp"
#include "gambit/Utils/gambit_module_headers.hpp"
#include "gambit/DarkBit/DarkBit_types.hpp"
#include "gambit/DarkBit/DarkBit_rollcall.hpp"

namespace Gambit
{
  namespace DarkBit
  {
    class SingletDM
    {
      public:
        /// Initialize SingletDM object (branching ratios etc)
        SingletDM(std::string filename)
        {
          // Higgs branching ratios and total width Gamma [GeV], as function of mass [GeV] (90 - 150 GeV)
          ASCIItableReader table(filename);  
          colnames = initVector<std::string>("mass", "bb", "tautau", "mumu", "ss", "cc", "tt", "gg", "gammagamma", "Zgamma", "WW", "ZZ", "Gamma");
          table.setcolnames(colnames);

          for (auto it = colnames.begin(); it != colnames.end(); it++)
          {
            f_vs_mass[*it] = Funk::interp("mass", table["mass"], table[*it]);
          }
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
         * channel: bb, tautau, mumu, ss, cc, tt, gg, gammagamma, Zgamma, WW, ZZ, hh
         *
         * FIXME:  Extend to 300 GeV
         */
        double sv(std::string channel, double lambda, double mass, double v)
        {
            double s = 4*mass*mass/(1-v*v/4);
            double sqrt_s = sqrt(s);
            if ( sqrt_s < 90 ) 
            {
                std::cout << "WARNING: Outside allowed energy range." << std::endl;
                return 0;
            }

            if ( channel == "hh" ) { return sv_hh(lambda, mass, v); }
            if ( sqrt_s < 150 )
            {
                double br = f_vs_mass[channel]->bind("mass")->eval(sqrt_s);
                double Gamma_s = Gamma->eval(sqrt_s);
                double GeV2tocm3s1 = gev2cm2*s2cm;

                double res = 2*lambda*lambda*v0*v0/sqrt_s*Dh2(s)*Gamma_s*GeV2tocm3s1*br;
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
            return pow(lambda,2)*s/8/M_PI*sqrt(1-4*x)*Dh2(s)*(1-4*x+12*pow(x,2)) * GeV2tocm3s1;
        }

        // Annihilation into Z bosons.
        double sv_ZZ(double lambda, double mass, double v)
        {
            double s = 4*mass*mass/(1-v*v/4);
            double x = pow(m_Zboson,2)/s;
            double GeV2tocm3s1 = gev2cm2*s2cm;
            return pow(lambda,2)*s/16/M_PI*sqrt(1-4*x)*Dh2(s)*(1-4*x+12*pow(x,2)) * GeV2tocm3s1;
        }

        // Annihilation into fermions
        double sv_ff(double lambda, double mass, double v, double mf, bool is_quark)
        {
            double s = 4*mass*mass/(1-v*v/4);
            double vf = sqrt(1-4*pow(mf,2)/s);
            double Xf = 1;
            if ( is_quark ) Xf = 3 * (1+(3/2*log(pow(mf,2)/s)+9/4)*4*alpha_s/3/M_PI);
            double GeV2tocm3s1 = gev2cm2*s2cm;
            return pow(lambda,2)*pow(mf,2)/4/M_PI*Xf*pow(vf,3) * Dh2(s) * GeV2tocm3s1;
        }

        /// Calculate <sigma v> for hh final states
        double sv_hh(double lambda, double mass, double v)
        {
            double s = 4*mass*mass/(1-v*v/4);  // v is relative velocity
            double vh = sqrt(1-4*mh*mh/s);  // vh and vs are lab velocities
            double vs = v/2;
            double tp = pow(mass,2)+pow(mh,2)-0.5*s*(1-vs*vh);
            double tm = pow(mass,2)+pow(mh,2)-0.5*s*(1+vs*vh);

            double aR = 1+3*mh*mh*(s-mh*mh)*Dh2(s);
            double aI = 3*mh*mh*sqrt(s)*Gamma_mh*Dh2(s);

            return pow(lambda,2)/16/M_PI/pow(s,2)/vs *
                (
                 (pow(aR,2)+pow(aI,2))*s*vh*vs
                 +4*lambda*pow(v0,2)*(aR-lambda*pow(v0,2)/(s-2*pow(mh,2)))
                     *log(abs(pow(mass,2)-tp)/abs(pow(mass,2)-tm))
                 +(2*pow(lambda,2)*pow(v0,4)*s*vh*vs)/(pow(mass,2)-tm)/(pow(mass,2)-tp));
        }

      private:
        std::map<std::string, Funk::Funk> f_vs_mass;
        Funk::BoundFunk Gamma;
        std::vector<std::string> colnames;

        double Gamma_mh;
        double mh = 125.7;  // FIXME
        double v0 = 246.0;  // FIXME
        double alpha_s = 0.12;   // FIXME
        double mb = 5;  // FIXME
        double mc = 1;  // FIXME
        double mtau = 1;  // FIXME
        double mt = 172;  // FIXME

    };

    /// Initializes thresholds/resonances for RD calculation for SingletDM
    void RD_thresholds_resonances_SingletDM(TH_resonances_thresholds &result)
    {
        using namespace Pipes::RD_thresholds_resonances_SingletDM;
        
        result.resonances.clear();
        result.threshold_energy.clear();
        
        result.threshold_energy.push_back(2*(*Param["mass"]));
        double mh = 125.7;  // FIXME
        result.resonances.push_back(TH_Resonance(mh/2., mh/2./10.));

        // FIXME: Move somewhere else
        DS_RDMGEV myrdmgev;
        myrdmgev.nco = 1;
        myrdmgev.mco(1) = *Param["mass"];
        myrdmgev.mdof(1) = 1;
        myrdmgev.kcoann(1) = 42;  // ???
        *BEreq::rdmgev = myrdmgev;
    }

    /// Direct detection couplings for Singlet DM.
    void DD_couplings_SingletDM(Gambit::DarkBit::DD_couplings &result)
    {
        using namespace Pipes::DD_couplings_SingletDM;
        double mass = *Param["mass"];
        double lambda = *Param["lambda"];
        double mh = 125.7;  // FIXME
        double fN = 0.345;  // FIXME  This should not be hard-coded
        result.gps = lambda*fN*m_neutron/pow(mh,2)/mass/2;
        result.gns = lambda*fN*m_proton/pow(mh,2)/mass/2;
        result.gpa = 0;  // Only SI cross-section
        result.gna = 0;
        result.M_DM = *Param["mass"];
    }

    /// Set up process catalogue for Singlet DM.
    void TH_ProcessCatalog_SingletDM(Gambit::DarkBit::TH_ProcessCatalog &result)
    {
        using namespace Pipes::TH_ProcessCatalog_SingletDM;

        static SingletDM singletDM("DarkBit/data/Higgs_decay_1101.0593.dat");

        //const Spectrum* SM = *Dep::SM_spectrum;

        std::vector<std::string> finalStates;
        double mass, lambda, mW, mb, mZ, mc, mtau, mt;

        mass = *Param["mass"];
        lambda = *Param["lambda"];
        //mZ = SM->phys.get_Pole_Mass("Z");
        //mW = SM->phys.get_Pole_Mass("W");
        mZ = m_Zboson;  // FIXME
        mW = m_Wboson;  // FIXME
        mb = 5;  // FIXME
        mc = 1;  // FIXME
        mtau = 1;  // FIXME
        mt = 172;  // FIXME

        // Initialize catalog
        TH_ProcessCatalog catalog;
        // FIXME: Replace "~chi0_1" with the proper identifier once DarkBit is set up to handle any DM candidate name
        TH_Process process_ann((std::string)"~chi0_1", (std::string)"~chi0_1");

        // FIXME: Add top

        // Populate channel list
        auto m_th = Funk::vec(mb, mW, mc, mtau, mZ);
        // WW*, hh, tt, ZZ*
        auto channel = Funk::vec<std::string>("bb", "WW", "cc", "tautau", "ZZ");
        auto p1 = Funk::vec<std::string>("b", "W+", "c", "tau+", "Z0");
        auto p2 = Funk::vec<std::string>("bbar", "W-", "cbar", "tau-", "Z0");
        //if ( not runOptions->getValueOrDef<bool>(false, "phi") )
        {
            for ( int i = 0; i < 5; i++ )
            {
                if ( mass > m_th[i] )
                {
                    Funk::Funk kinematicFunction_bb = 
                        Funk::funcM(&singletDM, &SingletDM::sv, channel[i], lambda, mass, Funk::var("v"));
                    finalStates = Funk::vec<std::string>(p1[i], p2[i]);
                    TH_Channel channel_bb(finalStates, kinematicFunction_bb);
                    process_ann.channelList.push_back(channel_bb);
                }
            }
        }

        // Finally, store properties of "chi" in particleProperty list
        TH_ParticleProperty chiProperty(mass, 1);  // Set mass and 2*spin
        // FIXME: Replace "~chi0_1" with the proper identifier once DarkBit is set up to handle any DM candidate name
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("~chi0_1", chiProperty));
        catalog.processList.push_back(process_ann);

        result = catalog;
    }
  }
}
