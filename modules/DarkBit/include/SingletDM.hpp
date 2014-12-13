#include "ASCIItableReader.hpp"
#include "base_functions.hpp"
#include "funktions.hpp"
#include <string>

#ifndef __SINGLETDM_HPP__
#define __SINGLETDM_HPP__

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
            
            double s = pow(2 * mass * (1+v*v/8), 2);  // Non-relativistic
            double br = f_vs_mass[channel]->eval("mass", mass);
            double Gamma_s = f_vs_mass["Gamma"]->eval("mass", sqrt(s));
            double Gamma_mh = f_vs_mass["Gamma"]->eval("mass", mh);
            const double GeV2tocm3s1 = 1.17e-17;
            double myDh2 = Dh2(s, Gamma_mh);

            return 2*lambda*lambda*v0*v0/sqrt(s)*myDh2*Gamma_s * GeV2tocm3s1 * br;
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

        const double mh = 125.7;
        const double v0 = 246.0;

    };
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

#endif  // __SINGLETDM_HPP__
