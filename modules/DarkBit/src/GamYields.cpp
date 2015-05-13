//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Routines for the calculation of gamma-ray yield 
///  from dark matter annihilation / decay.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 Jul - 2015 May
///
///  *********************************************

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/DarkBit/DarkBit_rollcall.hpp"
#include "gambit/Utils/ASCIItableReader.hpp"

namespace Gambit {
  namespace DarkBit {

    //////////////////////////////////////////////////////////////////////////
    //
    //                        Gamma-ray yields
    //
    //////////////////////////////////////////////////////////////////////////

    /*! \brief Calculate kinematical limits for three-body final states.
     *
     * Notes: 
     * - m0 = 0, E0 = Eg
     * - M_DM is half of center of mass energy
     * - returns E1_low or E1_high, or 0 if kinematically forbidden
     * - Template parameter 0(1) means lower (upper) limit of range.  
     */
    template <int i>
      double gamma3bdy_limits(double Eg, double M_DM, double m1, double m2)
      {
        double x = Eg/M_DM;
        double x0, x1;
        // Check if kinematic constraints are satisfied
        if((1.-pow(m1+m2,2)/(4*M_DM*M_DM))<=x)
        {
          x0 = x1 = 0;
        }
        else
        {
          double eta = pow(m1/M_DM,2);
          double diffeta=pow(m2/M_DM,2);
          diffeta   = 0.25*(eta-diffeta);
          double f1 = 0.25*eta + diffeta*x/(2*(1-x));
          double f2 = sqrt(pow(1+diffeta/(1-x),2)-eta/(1-x));
          double aint = f1 + 0.5*(1-f2)*x;
          double bint = f1 + 0.5*(1+f2)*x;
          // Now convert these limits to limits on E1
          double f3 = pow(0.5*m2/M_DM,2);
          x0 = M_DM*(1-x+aint-f3);
          x1 = M_DM*(1-x+bint-f3);
        }
        if ( i == 0 ) return x0;
        else return x1;
      }

    /*! \brief Identification of final states that are not yet tabulated.
     *
     * Structure
     * ---------
     *
     * 1) Go through process catalogue and find all final states that require
     * to be calculated in the cascade code.  To this end, check whether
     * two-body channels are tabulated for two-body final states, and whether
     * one-particle spectra exist for one-particle final states.
     *
     * 2) Calculate via the cascade code the missing energy spectra.
     *
     * 3) Put together the full spectrum.
     *
     */
    void GA_missingFinalStates(std::vector<std::string> &result)
    {
      using namespace Pipes::GA_missingFinalStates;
      std::set<std::string> missingFinalStates;
      std::string DMid= Dep::DarkMatter_ID->singleID();

      if ( runOptions->getValueOrDef(false, "ignore_all") ) return;

      TH_Process process = (*Dep::TH_ProcessCatalog).getProcess(DMid, DMid);

      // Add only gamma-ray spectra for two and three body final states
      for (std::vector<TH_Channel>::iterator it = process.channelList.begin();
          it != process.channelList.end(); ++it)
      {
        if ( it->nFinalStates == 2 )
        {
          if ( not runOptions->getValueOrDef(false, "ignore_two_body") )
          {
            std::cout << "Checking for missing two-body final states: " << it->finalStateIDs[0] << " " << it->finalStateIDs[1]  << std::endl;
            if ( not Dep::SimYieldTable->hasChannel(it->finalStateIDs[0],
                  it->finalStateIDs[1], "gamma") )
            {
              missingFinalStates.insert(it->finalStateIDs[0]);
              missingFinalStates.insert(it->finalStateIDs[1]);
            }
          }
        }
        else if ( it->nFinalStates == 3 )
        {
          if ( not runOptions->getValueOrDef(false, "ignore_three_body") )
          {
            std::cout << "Checking for missing three-body final states: " << it->finalStateIDs[0] << " " << it->finalStateIDs[1]  << " " << it->finalStateIDs[2] << std::endl;
            if (not Dep::SimYieldTable->hasChannel(it->finalStateIDs[0], "gamma") )
              missingFinalStates.insert(it->finalStateIDs[0]);
            if (not Dep::SimYieldTable->hasChannel(it->finalStateIDs[1], "gamma") )
              missingFinalStates.insert(it->finalStateIDs[1]);
            if (not Dep::SimYieldTable->hasChannel(it->finalStateIDs[2], "gamma") )
              missingFinalStates.insert(it->finalStateIDs[2]);
          }
        }
      }
      // Remove particles we don't have decays for.
      for (auto it = missingFinalStates.begin(); it != missingFinalStates.end(); ) 
      {
          if ((*Dep::TH_ProcessCatalog).find(*it, "") == NULL) 
          {
            missingFinalStates.erase(it++);
          }
          else 
          {
            ++it;
          }
      }

      std::cout 
        << "Number of missing final states: " << missingFinalStates.size() 
        << std::endl;
      for (auto it = missingFinalStates.begin(); it != missingFinalStates.end();
          it++)
      {
        std::cout << *it << std::endl;
      }

      result.assign(missingFinalStates.begin(), missingFinalStates.end());
    }

    /*! \brief Boosts an energy spectrum of isotropic particles into another
     *         frame (and isotropizes again).
     *  Parameters:
     *    gamma: Lorentz boost factor
     *    dNdE: Spectrum
     *    mass: mass of particle
     */
    Funk::Funk boost_dNdE(Funk::Funk dNdE, double gamma, double mass)
    {
      if ( gamma < 1 ) 
      {
        DarkBit_error().raise(LOCAL_INFO, 
            "boost_dNdE: Requested Lorentz boost with gamma < 1");
      }
      double betaGamma = sqrt(gamma*gamma-1);
      Funk::Funk E = Funk::var("E");
      Funk::Funk Ep = Funk::var("Ep");
      Funk::Funk halfBox_int = betaGamma*sqrt(Ep*Ep-mass*mass);
      Funk::Funk halfBox_bound = betaGamma*sqrt(E*E-mass*mass);
      Funk::Funk integrand = (dNdE->set("E", Ep)/(2*halfBox_int));
      // FIXME: Use a more thought-out accuracy condition
      return integrand->gsl_integration("Ep", E*gamma-halfBox_bound, E*gamma+halfBox_bound)->set_epsabs(1000);
    }

    /*! \brief General routine to derive annihilation yield.
     *
     * Depends on:
     * - SimYieldTable
     * - TH_ProcessCatalog
     * - cascadeMC_gammaSpectra
     */
    void GA_AnnYield_General(Funk::Funk &result)
    {
      using namespace Pipes::GA_AnnYield_General;

      std::string DMid= Dep::DarkMatter_ID->singleID();

      // Grid and energy range used in interpolating functions.
      // FIXME: Make use of Emin and Emax
      /*
      double Emin, Emax;
      Emin = runOptions->getValueOrDef<double>(1e-1, "Emin");
      Emax = runOptions->getValueOrDef<double>(1e4,  "Emax");
      */
      double line_width = runOptions->getValueOrDef<double>(0.03,  "line_width");

      // Get annihilation process from process catalog
      TH_Process annProc = (*Dep::TH_ProcessCatalog).getProcess(DMid, DMid);

      // Get particle mass from process catalog
      double mass = (*Dep::TH_ProcessCatalog).getParticleProperty(DMid).mass;
      double Ecm = 2*mass;

      // Loop over all channels for that process
      Funk::Funk Yield = Funk::zero("v", "E");

      // Dump spectra to file(?)
      bool debug = runOptions->getValueOrDef<bool>(false, "debug_dump_spectra");
      std::string filename = runOptions->getValueOrDef<std::string>("Gamma_debug_spectra",
      "debug_spectrum_file");
      std::ofstream os;
      if(debug) 
      {
        os.open(filename);
        if(!os)
        {
          logger() << "Warning: spectrum debug file not open for writing." << std::endl;
          debug=false;
        }
        else
        {
          os << "# Gamma ray spectra dNdE [1/GeV]\n";
        }
      }
      // Grid for spectrum to be dumped
      double x_min = 
        runOptions->getValueOrDef<double>(0.1, "GA_AnnYield", "Emin");
      double x_max = 
        runOptions->getValueOrDef<double>(10000, "GA_AnnYield", "Emax");
      int n = runOptions->getValueOrDef<double>(26, "GA_AnnYield", "nbins");
      std::vector<double> x = Funk::logspace(log10(x_min), log10(x_max), n);

      // Adding known two-body channels
      for (std::vector<TH_Channel>::iterator it = annProc.channelList.begin();
          it != annProc.channelList.end(); ++it)
      {
        if ( it->nFinalStates == 2 and 
            Dep::SimYieldTable->hasChannel(
              it->finalStateIDs[0], it->finalStateIDs[1], "gamma") )
        {
          Yield = Yield +
            it->genRate*(*Dep::SimYieldTable)(
                it->finalStateIDs[0], it->finalStateIDs[1], "gamma", mass*2);
        }
        // FIXME: Implement missing Z gamma final state
        else if ( it->nFinalStates == 2 
            and it->finalStateIDs[0] == "gamma" 
            and it->finalStateIDs[1] == "gamma" )
        {
          Funk::Funk E = Funk::var("E");
          Yield = Yield + 
            2*it->genRate*exp(-pow((E-mass)/line_width/E,2)/2)
            /E/sqrt(2*M_PI)/line_width/E;
        }
        else if ( it->nFinalStates == 2 )
        {
          Funk::Funk spec0 = Funk::zero("E");
          Funk::Funk spec1 = Funk::zero("E");
          // FIXME: Check default behaviour of adding one-particle final
          // states.
          if ( Dep::SimYieldTable->hasChannel(it->finalStateIDs[0], "gamma") )
          {
            spec0 = (*Dep::SimYieldTable)(it->finalStateIDs[0], "gamma");
          }
          else if ( Dep::cascadeMC_gammaSpectra->count(it->finalStateIDs[0]) )
          {
            spec0 = Dep::cascadeMC_gammaSpectra->at(it->finalStateIDs[0]);
          }        
          if ( Dep::SimYieldTable->hasChannel(it->finalStateIDs[1], "gamma") )
          {
            spec1 = (*Dep::SimYieldTable)(it->finalStateIDs[1], "gamma");
          }
          else if ( Dep::cascadeMC_gammaSpectra->count(it->finalStateIDs[1]) )
          {
            spec1 = Dep::cascadeMC_gammaSpectra->at(it->finalStateIDs[1]);
          }
          double m0 = (*Dep::TH_ProcessCatalog).getParticleProperty(
              it->finalStateIDs[0]).mass;
          double m1 = (*Dep::TH_ProcessCatalog).getParticleProperty(
              it->finalStateIDs[1]).mass;
          double gamma0 = (Ecm*Ecm+m0*m0-m1*m1)/(2*Ecm*m0);
          double gamma1 = (Ecm*Ecm-m0*m0+m1*m1)/(2*Ecm*m1);
          std::cout << it->finalStateIDs[0] << " " << it->finalStateIDs[1] << std::endl;
          std::cout << Ecm << " " << m0 << " " << m1 << std::endl;
          std::cout << "gammas: " << gamma0 << ", " << gamma1 << std::endl;

          if(debug)
          {
            Funk::Funk chnSpec = (Funk::zero("v", "E") 
              + (boost_dNdE(spec0, gamma0, 0.0) 
              +  boost_dNdE(spec1, gamma1, 0.0) ) 
              * it->genRate )-> set("v", 0.);
            std::vector<double> y = chnSpec->bind("E")->vect(x);
            os << it->finalStateIDs[0] << it->finalStateIDs[1] << ":\n";
            os << "  E: [";
            for (std::vector<double>::iterator it2 = x.begin(); it2 != x.end(); it2++)
              os << *it2 << ", ";
            os  << "]\n";
            os << "  dNdE: [";
            for (std::vector<double>::iterator it2 = y.begin(); it2 != y.end(); it2++)
              os << *it2 << ", ";
            os  << "]\n";
          }

          ///////////////////////////////////////
          //
          // Boosted particle spectra are disabled
          //
          // FIXME: This causes problems with gsl
          //
          Yield = Yield + (boost_dNdE(spec0, gamma0, 0.0) 
              + boost_dNdE(spec1, gamma1, 0.0)) * it->genRate;
          ///////////////////////////////////////

          // FIXME: This is debug information. Remove it when no longer
          // necessary.
          /*
          std::cout << "Spectrum debug info:" << std:: endl;
          double E=5.0;
          double factor=1.125;
          std::vector<double> Evals;
          std::cout.precision(5);
          std::cout.setf( std::ios::fixed, std:: ios::floatfield );
          int Nen = 20;
          std::cout << "Energies:" << std:: endl;
          for(int i=0; i<Nen;i++)
          {
          E*=factor;
          Evals.push_back(E);
          std::cout << E << "  ";
          }
          std::cout << std::endl; 
          std::cout << it->finalStateIDs[0] << "-spectrum:" << std:: endl;
          for(int i=0; i<Nen;i++)
          {
            std::cout << spec0->bind("E")->eval(Evals[i]) << "  ";
          }
          std::cout << std::endl; 
          std::cout << it->finalStateIDs[1] << "-spectrum:" << std:: endl;
          for(int i=0; i<Nen;i++)
          {
            std::cout << spec1->bind("E")->eval(Evals[i])<< "  ";
          }
          std::cout << std::endl;
          std::cout << "gamma result:" << std:: endl;
          for(int i=0; i<Nen;i++)
          {
            std::cout << Yield->bind("v","E")->eval(0, Evals[i])<< "  ";
          }
          std::cout << std::endl;  
          */
          // Debug information ends here

        }
      }
      // Adding three-body final states
      for (std::vector<TH_Channel>::iterator it = annProc.channelList.begin();
          it != annProc.channelList.end(); ++it)
      {
        /*
           if ( it->nFinalStates == 3
           and Dep::SimYieldTable->hasChannel(it->finalStateIDs[0], "gamma")
           and Dep::SimYieldTable->hasChannel(it->finalStateIDs[1], "gamma")
           and Dep::SimYieldTable->hasChannel(it->finalStateIDs[2], "gamma")
           )
           {
           Funk::Funk dNdE1dE2 = it->genRate->set("v",0.);
           Funk::Funk spec0 = 
             (*Dep::SimYieldTable)(it->finalStateIDs[0], "gamma");
           Funk::Funk spec1 = 
             (*Dep::SimYieldTable)(it->finalStateIDs[1], "gamma");
           Funk::Funk spec2 = 
             (*Dep::SimYieldTable)(it->finalStateIDs[2], "gamma");
           Yield = Yield + convspec(spec0, spec1, spec2, dNdE1dE2);
           }
        */
        if ( it->nFinalStates == 3 and it->finalStateIDs[0] == "gamma" )
        {
          double m1 = (*Dep::TH_ProcessCatalog).getParticleProperty(
              it->finalStateIDs[1]).mass;
          double m2 = (*Dep::TH_ProcessCatalog).getParticleProperty(
              it->finalStateIDs[2]).mass;
          Funk::Funk E1_low =  Funk::func(gamma3bdy_limits<0>, Funk::var("E"),
              mass, m1, m2);
          Funk::Funk E1_high =  Funk::func(gamma3bdy_limits<1>, Funk::var("E"),
              mass, m1, m2);
          Funk::Funk dsigmavde = it->genRate->gsl_integration(
              "E1", E1_low, E1_high);
          if(debug)
          {
            Funk::Funk chnSpec = (Funk::zero("v", "E") + dsigmavde)-> set("v", 0.);
            std::vector<double> y = chnSpec->bind("E")->vect(x);
            os << it->finalStateIDs[0] << it->finalStateIDs[1] << it->finalStateIDs[2] << ":\n";
            os << "  E: [";
            for (std::vector<double>::iterator it2 = x.begin(); it2 != x.end(); it2++)
              os << *it2 << ", ";
            os  << "]\n";
            os << "  dNdE: [";
            for (std::vector<double>::iterator it2 = y.begin(); it2 != y.end(); it2++)
              os << *it2 << ", ";
            os  << "]\n";
          }
          Yield = Yield + dsigmavde;
        }
      }
      if(debug) os.close();
      result = Yield/(mass*mass);

    }

    /*! \brief Calculates annihilation spectra for general process catalogs,
     *        directly using DarkSUSY as a backend.
     *
     * This function returns 
     *
     *   dN/dE*(sv)/mDM**2 (E, v)  [cm^3/s/GeV^3]
     *
     * the energy spectrum of photons times sigma*v/m^2, as function of
     * energy (GeV) and velocity (c).  By default, only the v=0 component
     * is calculated.  
     *
     * The return type is a GAMBIT Base Function object as function which
     * is only defined for v=0.
     *
     * NOTE: This function will be completely replaced by GA_AnnYield_General
     */

    /*
    // DEPRECATED!!!
    // TODO: Delete
    void GA_AnnYield_DarkSUSY(Funk::Funk &result)
    {
      using namespace Pipes::GA_AnnYield_DarkSUSY;

      std::string DMid = Dep::DarkMatter_ID->singleID();

      ////////////////////
      // 1) Initialization
      ////////////////////

      // Grid and energy range used in interpolating functions.
      double Emin, Emax; 
      // Energy range from ini-file options
      Emin = runOptions->getValueOrDef<double>(1e-1, "Emin");
      Emax = runOptions->getValueOrDef<double>(1e4,  "Emax");
      //int n = 230*log10(Emax/Emin);  // 1% energy resolution must be enough
      int n = 10*log10(Emax/Emin);  // 10% energy resolution must be enough
      std::vector<double> xgrid = Funk::logspace(-1., 3., n);
      std::vector<double> ygrid(n);

      // Get annihilation process from process catalog
      TH_Process annProc = (*Dep::TH_ProcessCatalog).getProcess(DMid, DMid);

      // Get particle mass from process catalog
      double mass = (*Dep::TH_ProcessCatalog).getParticleProperty(DMid).mass;


      ///////////////////////////////////////////////////////////
      // 2) Construction of "model-independent" two-body spectrum
      ///////////////////////////////////////////////////////////

      // Loop over all channels for that process

      Funk::Funk DiffYield2Body = Funk::zero("E", "v");

      for (std::vector<TH_Channel>::iterator it = annProc.channelList.begin();
          it != annProc.channelList.end(); ++it)
      {
        int flag = 0;
        int ch = 0;
        int yieldk = 152;
        double sigmav;
        if ( it->nFinalStates == 2 )
        {

          // if (Channel exists in SimYieldTable then readout
          //              else determine from cascade routine
          //              else error: unsupported)
          // TODO: implement above, delete block below            

          // Find channel
          if      ( it->isChannel("Z0"    , "Z0"     )) ch = 12;
          else if ( it->isChannel("W+"    , "W-"     )) ch = 13;
          else if ( it->isChannel("nu_e"  , "nubar_e"  )) ch = 14;
          else if ( it->isChannel("e+"    , "e-"     )) ch = 15;
          else if ( it->isChannel("nu_mu" , "nubar_mu" )) ch = 16;
          else if ( it->isChannel("mu+"   , "mu-"    )) ch = 17;
          else if ( it->isChannel("nu_tau", "nubar_tau")) ch = 18;
          else if ( it->isChannel("tau+"  , "tau-"   )) ch = 19;
          else if ( it->isChannel("u"     , "ubar"   )) ch = 20;
          else if ( it->isChannel("d"     , "dbar"   )) ch = 21;
          else if ( it->isChannel("c"     , "cbar"   )) ch = 22;
          else if ( it->isChannel("s"     , "sbar"   )) ch = 23;
          else if ( it->isChannel("t"     , "tbar"   )) ch = 24;
          else if ( it->isChannel("b"     , "bbar"   )) ch = 25;
          else if ( it->isChannel("g"     , "g"      )) ch = 26;
          else
          {
            logger() << "ERROR: Unsupported two-body final state." << std::endl;
            exit(1);
          }

          // (sv)(v=0) for two-body final state
          sigmav = it->genRate->bind("v")->eval(0.);
          DiffYield2Body = DiffYield2Body + 
            Funk::func(BEreq::dshayield.pointer(), mass,
                Funk::var("E"), ch, yieldk, flag) * sigmav;
        }
      }


      /////////////////////////////
      // 3) Three-body final states
      /////////////////////////////

      Funk::Funk DiffYield3Body = Funk::zero("E", "v");  // Initial spectrum = 0

      // Loop over all channels for that process
      for (std::vector<TH_Channel>::iterator it = annProc.channelList.begin();
          it != annProc.channelList.end(); ++it)
      {
        double m1,m2;
        if ( it->nFinalStates == 3 )
        {
          // Find channel

          //                if channel=("gamma",X,Y)  m1=mass(X), m2=mass(Y) 
          // TODO: replace the following block by the above line      

          // it-> channelContains("gamma")          
          //                it->FinalStateIDs[0]=="gamma"

          if      ( it->isChannel("gamma", "W+"    , "W-"     )){m1 = (*Dep::TH_ProcessCatalog).getParticleProperty("W+"  ).mass; m2 = (*Dep::TH_ProcessCatalog).getParticleProperty("W-"  ).mass;  }   
          else if ( it->isChannel("gamma", "W+"    , "H-"     )){m1 = (*Dep::TH_ProcessCatalog).getParticleProperty("W+"  ).mass; m2 = (*Dep::TH_ProcessCatalog).getParticleProperty("H-"  ).mass;  }   
          else if ( it->isChannel("gamma", "W-"    , "H+"     )){m1 = (*Dep::TH_ProcessCatalog).getParticleProperty("W-"  ).mass; m2 = (*Dep::TH_ProcessCatalog).getParticleProperty("H+"  ).mass;  }   
          else if ( it->isChannel("gamma", "H+"    , "H-"     )){m1 = (*Dep::TH_ProcessCatalog).getParticleProperty("H+"  ).mass; m2 = (*Dep::TH_ProcessCatalog).getParticleProperty("H-"  ).mass;  }     
          else if ( it->isChannel("gamma", "e+"    , "e-"     )){m1 = (*Dep::TH_ProcessCatalog).getParticleProperty("e+"  ).mass; m2 = (*Dep::TH_ProcessCatalog).getParticleProperty("e-"  ).mass;  }   
          else if ( it->isChannel("gamma", "mu+"   , "mu-"    )){m1 = (*Dep::TH_ProcessCatalog).getParticleProperty("mu+" ).mass; m2 = (*Dep::TH_ProcessCatalog).getParticleProperty("mu-" ).mass;  }   
          else if ( it->isChannel("gamma", "tau+"  , "tau-"   )){m1 = (*Dep::TH_ProcessCatalog).getParticleProperty("tau+").mass; m2 = (*Dep::TH_ProcessCatalog).getParticleProperty("tau-").mass;  }   
          else if ( it->isChannel("gamma", "u"     , "ubar"   )){m1 = (*Dep::TH_ProcessCatalog).getParticleProperty("u"   ).mass; m2 = (*Dep::TH_ProcessCatalog).getParticleProperty("ubar").mass;  }   
          else if ( it->isChannel("gamma", "d"     , "dbar"   )){m1 = (*Dep::TH_ProcessCatalog).getParticleProperty("d"   ).mass; m2 = (*Dep::TH_ProcessCatalog).getParticleProperty("dbar").mass;  }   
          else if ( it->isChannel("gamma", "c"     , "cbar"   )){m1 = (*Dep::TH_ProcessCatalog).getParticleProperty("c"   ).mass; m2 = (*Dep::TH_ProcessCatalog).getParticleProperty("cbar").mass;  }   
          else if ( it->isChannel("gamma", "s"     , "sbar"   )){m1 = (*Dep::TH_ProcessCatalog).getParticleProperty("s"   ).mass; m2 = (*Dep::TH_ProcessCatalog).getParticleProperty("sbar").mass;  }   
          else if ( it->isChannel("gamma", "t"     , "tbar"   )){m1 = (*Dep::TH_ProcessCatalog).getParticleProperty("t"   ).mass; m2 = (*Dep::TH_ProcessCatalog).getParticleProperty("tbar").mass;  }   
          else if ( it->isChannel("gamma", "b"     , "bbar"   )){m1 = (*Dep::TH_ProcessCatalog).getParticleProperty("b"   ).mass; m2 = (*Dep::TH_ProcessCatalog).getParticleProperty("bbar").mass;  }   
          else
          {
            logger() << "ERROR: Unsupported three-body final state." 
              << std::endl;
            exit(1);
          }
          // Generate photon spectrum in v=0 limit from primary photon.
          // (we just ignore the contributions from the second and third
          // particle and integrate out the corresponding kinematical
          // variable).
          Funk::Funk E1_low =  Funk::func(gamma3bdy_limits<0>, Funk::var("E"),
              mass, m1, m2);
          Funk::Funk E1_high =  Funk::func(gamma3bdy_limits<1>, Funk::var("E"),
              mass, m1, m2);
          Funk::Funk dsigmavde = it->genRate->gsl_integration(
              "E1", E1_low, E1_high);
          DiffYield3Body = DiffYield3Body + dsigmavde;

             logger() << "Test output three-body annihilation:" << std::endl;
             it->printChannel();
             logger() << "  m1  = " << m1 << std::endl;
             logger() << "  m2  = " << m2 << std::endl;
             logger() << "  mDM = " << mass << std::endl;
             logger() << "Boundaries (E=10 GeV):" << std::endl;
             logger() << "  E1 = " << E1_low->eval("E", 10) << std::endl;
             logger() << "  E2 = " << E1_high->eval("E", 10) << std::endl;
             logger() << "dsigmavde (E=10 GeV) = " << it->genRate->set("E1", E1_low*1.02)->eval("E", 10) << std::endl;
             logger() << "dsigmavde (E=10 GeV) = " << it->genRate->set("E1", E1_high/1.02)->eval("E", 10) << std::endl;
             logger() << "dsigmavde (E=10 GeV) = " << it->genRate->set("E1", sqrt(E1_low*E1_high))->eval("E", 10) << std::endl;
             logger() << "dsigmavde (E=10 GeV) = " << it->genRate->gsl_integration("E1", E1_low, E1_high)->eval("E", 10) << std::endl;
        }
      }
      logger() << "Yield calculated!" << endl;
      // Resample function
      //DiffYield3Body = DiffYield3Body->tabulate(xgrid);

      // Sum two- and three-body spectra, devide by mass squared, fix valid
      // range, and add additional parameter for velocity (though the result is
      // velocity independent).
      // TODO: Add validity range
      result = (DiffYield2Body + DiffYield3Body)/(mass*mass);
    }
    */

    /// SimYieldTable based on DarkSUSY tabulated results.
    void SimYieldTable_DarkSusy(SimYieldTable& result)
    {
      using namespace Pipes::SimYieldTable_DarkSusy;

      static bool initialized = false;
      if ( not initialized )
      {
        int flag = 0;      // some flag
        int yieldk = 152;  // gamma ray yield
        //int ch = 0;        // channel information  //bjf> unused variable
        Funk::Funk dNdE;
        Funk::Funk dNdE2;

// FIXME: Fix neutrino channels
#define ADD_CHANNEL(ch, P1, P2, FINAL, EcmMin, EcmMax)                                                    \
        dNdE = Funk::func(BEreq::dshayield.pointer(), Funk::var("mwimp"), Funk::var("E"), ch, yieldk, flag)->set("mwimp", Funk::var("Ecm")/2);  \
        result.addChannel(dNdE, P1, P2, FINAL, EcmMin, EcmMax);  // specifies also center of mass energy range
        ADD_CHANNEL(12, "Z0", "Z0", "gamma", 0., 10000.)
        ADD_CHANNEL(13, "W+", "W-", "gamma", 0., 10000.)
        ADD_CHANNEL(14, "nu_e", "nubar_e", "gamma", 0., 10000.)
        ADD_CHANNEL(15, "e+", "e-", "gamma", 0., 10000.)
        ADD_CHANNEL(16, "nu_mu", "nubar_mu", "gamma", 0., 10000.)
        ADD_CHANNEL(17, "mu+", "mu-", "gamma", 0., 10000.)
        ADD_CHANNEL(18, "nu_tau", "nubar_tau", "gamma", 0., 10000.)
        ADD_CHANNEL(19, "tau+", "tau-", "gamma", 0., 10000.)
        ADD_CHANNEL(20, "u", "ubar", "gamma", 0., 10000.)
        ADD_CHANNEL(21, "d", "dbar", "gamma", 0., 10000.)
        ADD_CHANNEL(22, "c", "cbar", "gamma", 0., 10000.)
        ADD_CHANNEL(23, "s", "sbar", "gamma", 0., 10000.)
        ADD_CHANNEL(24, "t", "tbar", "gamma", 0., 10000.)
        ADD_CHANNEL(25, "b", "bbar", "gamma", 0., 10000.)
        ADD_CHANNEL(26, "g", "g", "gamma", 0., 10000.)
#undef ADD_CHANNEL

        // Add approximations single-particle cases
        dNdE = Funk::func(BEreq::dshayield.pointer(), 91.19, Funk::var("E"), 12, yieldk, flag);
        result.addChannel(dNdE/2, "Z0", "gamma", 10., 10000.);
        dNdE = Funk::func(BEreq::dshayield.pointer(), 80.385, Funk::var("E"), 13, yieldk, flag);
        result.addChannel(dNdE/2, "W+", "gamma", 10., 10000.);
        result.addChannel(dNdE/2, "W-", "gamma", 10., 10000.);
        dNdE = Funk::func(BEreq::dshayield.pointer(), 0.105, Funk::var("E"), 17, yieldk, flag);
        result.addChannel(dNdE/2, "mu+", "gamma", 10., 10000.);
        result.addChannel(dNdE/2, "mu-", "gamma", 10., 10000.);        
        dNdE = Funk::func(BEreq::dshayield.pointer(), 1.776, Funk::var("E"), 18, yieldk, flag);
        result.addChannel(dNdE/2, "tau+", "gamma", 10., 10000.);
        result.addChannel(dNdE/2, "tau-", "gamma", 10., 10000.);
        
        // Approximations for bbar t and t bbar
        dNdE  = Funk::func(BEreq::dshayield.pointer(), Funk::var("mwimp"), Funk::var("E"), 24, yieldk, flag)->set("mwimp", Funk::var("Ecm")/2);
        dNdE2 = Funk::func(BEreq::dshayield.pointer(), Funk::var("mwimp"), Funk::var("E"), 25, yieldk, flag)->set("mwimp", Funk::var("Ecm")/2);        
        result.addChannel((dNdE+dNdE2)/2, "b", "tbar", "gamma", 10., 10000.);
        result.addChannel((dNdE+dNdE2)/2, "t", "bbar", "gamma", 10., 10000.);        
        /*
        result.addChannel(Funk::zero("Ecm", "E"), "h0_2", "h0_2", "gamma", 4., 10000.);
        result.addChannel(Funk::zero("Ecm", "E"), "h0_2", "h0_1", "gamma", 4., 10000.);
        result.addChannel(Funk::zero("Ecm", "E"), "h0_1", "h0_1", "gamma", 4., 10000.);
        result.addChannel(Funk::zero("Ecm", "E"), "A0", "A0", "gamma", 4., 10000.);
        result.addChannel(Funk::zero("Ecm", "E"), "h0_2", "A0", "gamma", 4., 10000.);
        result.addChannel(Funk::zero("Ecm", "E"), "h0_1", "A0", "gamma", 4., 10000.);
        result.addChannel(Funk::zero("Ecm", "E"), "H+", "H-", "gamma", 4., 10000.);
        result.addChannel(Funk::zero("Ecm", "E"), "h0_2", "Z0", "gamma", 4., 10000.);
        result.addChannel(Funk::zero("Ecm", "E"), "h0_1", "Z0", "gamma", 4., 10000.);
        result.addChannel(Funk::zero("Ecm", "E"), "A0", "Z0", "gamma", 4., 10000.);
        result.addChannel(Funk::zero("Ecm", "E"), "W+", "H-", "gamma", 4., 10000.);
        result.addChannel(Funk::zero("Ecm", "E"), "W-", "H+", "gamma", 4., 10000.);
        */
        initialized = true;
      }
    }

    /// SimYieldTable based on MicrOmegas tabulated results.
    void SimYieldTable_MicrOmegas(SimYieldTable& result)
    {
      using namespace Pipes::SimYieldTable_MicrOmegas;

      static bool initialized = false;
      int outN = 0;  // gamma

      if ( not initialized )
      {
        Funk::Funk dNdE;

#define ADD_CHANNEL(inP, P1, P2, FINAL, EcmMin, EcmMax)                                                   \
        dNdE = Funk::func(BEreq::dNdE.pointer(), Funk::var("Ecm"), Funk::var("E"), inP, outN)/Funk::var("E"); \
        result.addChannel(dNdE, P1, P2, FINAL, EcmMin, EcmMax);  // specifies also center of mass energy range
        ADD_CHANNEL(0, "g", "g", "gamma", 4., 10000.)
        ADD_CHANNEL(1, "d", "dbar", "gamma", 4., 10000.)
        ADD_CHANNEL(2, "u", "ubar", "gamma", 4., 10000.)
        ADD_CHANNEL(3, "s", "sbar", "gamma", 4., 10000.)
        ADD_CHANNEL(4, "c", "cbar", "gamma", 4., 10000.)
        ADD_CHANNEL(5, "b", "bbar", "gamma", 4., 10000.)
        ADD_CHANNEL(6, "t", "tbar", "gamma", 4., 10000.)
        ADD_CHANNEL(7, "e+", "e-", "gamma", 4., 10000.)
        ADD_CHANNEL(8, "mu+", "mu-", "gamma", 4., 10000.)
        ADD_CHANNEL(9, "tau+", "tau-", "gamma", 4., 10000.)
        ADD_CHANNEL(10, "Z0", "Z0", "gamma", 4., 10000.)
        ADD_CHANNEL(13, "W+", "W-", "gamma", 4., 10000.)
#undef ADD_CHANNEL
        initialized = true;
        result.addChannel(
            Funk::zero("Ecm", "E"), "nu_e", "nubar_e", "gamma", 4., 10000.);
        result.addChannel(
            Funk::zero("Ecm", "E"), "nu_mu", "nubar_mu", "gamma", 4., 10000.);
        result.addChannel(
            Funk::zero("Ecm", "E"), "nu_tau", "nubar_tau", "gamma", 4., 10000.);
      }
    }

    class PPPC_interpolation
    {
      public:
        PPPC_interpolation(std::string filename)
        {
          table = ASCIItableReader(filename);
          std::vector<std::string> colnames = initVector<std::string>(
              "mass", "log10x", "ee", "mumu", "tautau", "qq", "cc", "bb", "tt",
              "WW", "ZZ", "gg", "gammagamma", "hh");
          table.setcolnames(colnames);
          // log10x = log10(E_gamma/m);
          log10x = std::vector<double>(table["log10x"].begin(), table["log10x"].begin()+180);
        }
        PPPC_interpolation() {}  // Dummy initializer

        double operator()(std::string channel, double m, double e)
        {
          // FIXME: Write interpolation routine
          std::vector<double> y(table[channel].begin(), table[channel].end());
        }

      private:
        std::vector<double> log10x;
        ASCIItableReader table;
    };

    /// SimYieldTable based on PPPC4DMID Cirelli et al. 2010
    void SimYieldTable_PPPC(SimYieldTable& result)
    {
      using namespace Pipes::SimYieldTable_PPPC;
      static bool initialized = false;
      static PPPC_interpolation PPPC_gam_object;

      if ( not initialized )
      {
        std::string filename = "DarkBit/data/AtProductionNoEW_gammas.dat";
        PPPC_gam_object = PPPC_interpolation(filename);
        initialized = true;
      }
    }
  }
}
