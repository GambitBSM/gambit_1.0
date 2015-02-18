#include "ASCIItableReader.hpp"
//#include "base_functions.hpp"
#include "funktions.hpp"
#include <string>

#include "gambit_module_headers.hpp"
#include "DarkBit_types.hpp"
#include "DarkBit_rollcall.hpp"

namespace Gambit
{
  namespace DarkBit
  {
    class SingletDM
    {
      public:
        SingletDM(std::string filename)
        {
          // Branching ratios and total width Gamma [GeV], as function of mass [GeV]
          ASCIItableReader table(filename);  
          colnames = initVector<std::string>("mass", "bb", "tautau", "mumu", "ss", "cc", "tt", "gg", "gammagamma", "Zgamma", "WW", "ZZ", "Gamma");
          table.setcolnames(colnames);

          for (auto it = colnames.begin(); it != colnames.end(); it++)
          {
            f_vs_mass[*it] = Funk::interp("mass", table["mass"], table[*it]);
          }
        };
        ~SingletDM() {}

        double Dh2 (double s, double Gamma_mh)
        {
            return 1/((s-mh*mh)*(s-mh*mh)+mh*mh*Gamma_mh*Gamma_mh);
        }

        double sv(std::string channel, double lambda, double mass, double v)
        {
            // Returns <sigma v> in cm3/s for given channel, velocity and model
            // parameters.

            if ( channel == "hh" ) { return sv_hh(lambda, mass, v); }

            // Range of validity:
            // bb, tautau, mumu, ss, cc, tt, gg, gammagamma, Zgamma, WW, ZZ
            
            double s = 4*mass*mass/(1-v*v/4);
            double br = f_vs_mass[channel]->eval("mass", std::min(sqrt(s), 150.));
            double Gamma_s = f_vs_mass["Gamma"]->eval("mass", std::min(sqrt(s), 150.));
            double Gamma_mh = f_vs_mass["Gamma"]->eval("mass", mh);
            const double GeV2tocm3s1 = 1.17e-17;
            double myDh2 = Dh2(s, Gamma_mh);

            double res = 2*lambda*lambda*v0*v0/sqrt(s)*myDh2*Gamma_s * GeV2tocm3s1 * br;
            return res;
        }

        double sv_hh(double lambda, double mass, double v)
        {
            double s = 4*mass*mass/(1-v*v);
            double vh = sqrt(1-4*mh*mh/s);
            double tp = pow(mass,2)+pow(mh,2)-0.5*s*(1-v*vh);
            double tm = pow(mass,2)+pow(mh,2)-0.5*s*(1+v*vh);
            double Gamma_mh = f_vs_mass["Gamma"]->eval("mass", mh);

            double aR = 1+3*mass*mass*(s-mh*mh)*Dh2(s, Gamma_mh);
            double aI = 3*mh*mh*sqrt(s)*Gamma_mh*Dh2(s, Gamma_mh);

            return pow(lambda,2)/16/M_PI/pow(s,2)/v *
                (
                 (pow(aR,2)+pow(aI,2))*s*vh*v
                 +4*lambda*pow(v0,2)*(aR-lambda*pow(v0,2)/(s-2*pow(mh,2)))
                     *log(abs(pow(mass,2)-tp)/abs(pow(mass,2)-tm))
                 +(2*pow(lambda,2)*pow(v0,4)*s*vh*v)/(pow(mass,2)-tm)/(pow(mass,2)-tp));
        }

      private:
        std::map<std::string, Funk::Funk> f_vs_mass;
        std::vector<std::string> colnames;

        static constexpr double mh = 125.7;
        static constexpr double v0 = 246.0;

    };

    void RD_thresholds_resonances_SingletDM(TH_resonances_thresholds &result)
    {
        using namespace Pipes::RD_thresholds_resonances_SingletDM;
        result.threshold_energy.push_back(2*(*Param["mass"]));
        double mh = 125.7;  // TODO: Don't hardcode masses.
        result.resonances.push_back(TH_Resonance(mh/2., mh/2./10.));

        // TODO: This part should set up additional parameters in DS, but does
        // not work at all??? --> TB
        DS_RDMGEV myrdmgev;
        myrdmgev.nco = 1;
        myrdmgev.mco[0] = *Param["mass"];
        myrdmgev.mdof[0] = 1;
        myrdmgev.kcoann[0] = 42;  // ???
        *BEreq::rdmgev = myrdmgev;
    }

    void DD_couplings_SingletDM(Gambit::DarkBit::DD_couplings &result)
    {
        using namespace Pipes::DD_couplings_SingletDM;
        double mass = *Param["mass"];
        double lambda = *Param["lambda"];
        double mh = 125.7;  // TODO: Don't hardcode
        double mN = 0.94;
        double fN = 0.35;
        result.gps = lambda*fN*mN/pow(mh,2)/mass;
        result.gns = lambda*fN*mN/pow(mh,2)/mass;
        result.gpa = 0;
        result.gna = 0;
        result.M_DM = *Param["mass"];
    }

    void TH_ProcessCatalog_SingletDM(Gambit::DarkBit::TH_ProcessCatalog &result)
    {
        using namespace Pipes::TH_ProcessCatalog_SingletDM;

        static SingletDM singletDM("DarkBit/data/Higgs_decay_1101.0593.dat");

        std::vector<std::string> finalStates;
        double mass, lambda, mW, mb, mZ;

        mass = *Param["mass"];
        lambda = *Param["lambda"];
        mW = 80.5;
        mZ = 90.0;
        mb = 5;

        // Initialize catalog
        TH_ProcessCatalog catalog;
        TH_Process process_ann((std::string)"chi_10", (std::string)"chi_10");

        // Populate channel list
        auto m_th = Funk::vec(mb, mW, 0., 0., mZ);
        // WW*, hh, tt, ZZ*
        auto channel = Funk::vec<std::string>("bb", "WW", "cc", "tautau", "ZZ");
        auto p1 = Funk::vec<std::string>("b", "W+", "c", "tau+", "Z0");
        auto p2 = Funk::vec<std::string>("bbar", "W-", "cbar", "tau-", "Z0");
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
        catalog.processList.push_back(process_ann);

        // Finally, store properties of "chi" in particleProperty list
        TH_ParticleProperty chiProperty(mass, 1);  // Set mass and 2*spin
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("chi_10", chiProperty));

        /*
        // Add also properties of phi particle
        TH_Process process_dec((std::string)"phi");
        Funk::Funk f = Funk::one()*0.3;
        std::cout << "Has args? " << f->hasArgs() << std::endl;
        TH_Channel channel2(Funk::vec<std::string>("b", "bbar"), f);
        process_dec.channelList.push_back(channel2);
        process_dec.genRateTotal = f;
        catalog.processList.push_back(process_dec);

        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("phi", TH_ParticleProperty(20.,0)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("gamma", TH_ParticleProperty(0.,2)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("b", TH_ParticleProperty(mb,1)));
        catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("bbar", TH_ParticleProperty(mb,1)));
        */

        result = catalog;
    }
  }
}


        /*
        // Annihilation into b-quarks.
        mf = 5.;
        if ( mass > mf )
        {
            vf = pow(1-4*pow(mf,2)/s, 0.5);
            Xf = 3 * (1+(3/2*log(pow(mf,2)/s)+9/4)*4*alpha_s/3/M_PI);
            sv_bb = pow(lambda,2)*pow(mf,2)/4/M_PI*Xf*pow(vf,3) * Dh2;
            sv_bb *= GeV2tocm3s1;
        }

        // Annihilation into W bosons.
        if ( mass > mW )
        {
            x = pow(mW,2)/s;
            sv_WW = pow(lambda,2)*s/8/M_PI*sqrt(1-4*x)*Dh2*(1-4*x+12*pow(x,2));
            sv_WW *= GeV2tocm3s1;
        }
        */
