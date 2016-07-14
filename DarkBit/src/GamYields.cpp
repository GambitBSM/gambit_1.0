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
#include "gambit/Utils/ascii_table_reader.hpp"
#include "gambit/DarkBit/DarkBit_utils.hpp"

//#define DARKBIT_DEBUG

namespace Gambit {
  namespace DarkBit {

    //////////////////////////////////////////////////////////////////////////
    //
    //                        Gamma-ray yields
    //
    //////////////////////////////////////////////////////////////////////////


    /*! \brief Identification of final states that are not yet tabulated.
     *
     * Structure
     * ---------
     *
     * 1) Go through process catalog and find all final states that require
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
      std::string DMid= *Dep::DarkMatter_ID;

      /// Option ignore_all<bool>: Ignore all missing final states (default false)
      if ( runOptions->getValueOrDef(false, "ignore_all") ) return;

      TH_Process process = (*Dep::TH_ProcessCatalog).getProcess(DMid, DMid);

      // Add only gamma-ray spectra for two and three body final states
      for (std::vector<TH_Channel>::iterator it = process.channelList.begin();
          it != process.channelList.end(); ++it)
      {
        if ( it->nFinalStates == 2 )
        {
      /// Option ignore_two_body<bool>: Ignore two-body missing final states (default false)
          if ( not runOptions->getValueOrDef(false, "ignore_two_body") )
          {
            #ifdef DARKBIT_DEBUG
              std::cout << "Checking for missing two-body final states: " 
                        << it->finalStateIDs[0] << " " << it->finalStateIDs[1]  << std::endl;
            #endif
            if ( not Dep::SimYieldTable->hasChannel(it->finalStateIDs[0], it->finalStateIDs[1], "gamma") )
            {
                if ( not Dep::SimYieldTable->hasChannel(it->finalStateIDs[0], "gamma") )
                  missingFinalStates.insert(it->finalStateIDs[0]);
                if ( not Dep::SimYieldTable->hasChannel(it->finalStateIDs[1], "gamma") )
                    missingFinalStates.insert(it->finalStateIDs[1]);
            }
          }
        }
        else if ( it->nFinalStates == 3 )
        {
      /// Option ignore_three_body<bool>: Ignore three-body missing final states (default false)
          if ( not runOptions->getValueOrDef(false, "ignore_three_body") )
          {
            #ifdef DARKBIT_DEBUG
              std::cout << "Checking for missing three-body final states: " 
                        << it->finalStateIDs[0] << " " << it->finalStateIDs[1]  
                        << " " << it->finalStateIDs[2] << std::endl;
            #endif
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
      for (auto it = missingFinalStates.begin(); it != missingFinalStates.end();) 
      {
          if ((*Dep::TH_ProcessCatalog).find(*it, "") == NULL) 
          {
            #ifdef DARKBIT_DEBUG
              std::cout << "Erasing (because no decays known): " << *it << std::endl;
            #endif
            missingFinalStates.erase(it++);
          }
          else
          {
            #ifdef DARKBIT_DEBUG
              std::cout << "Keeping (because decay known): " << *it << std::endl;
            #endif
            ++it;
          }
      }

      #ifdef DARKBIT_DEBUG
        std::cout << "Number of missing final states: " << missingFinalStates.size() << std::endl;
        for (auto it = missingFinalStates.begin(); it != missingFinalStates.end(); it++)
        {
          std::cout << *it << std::endl;
        }
      #endif

      result.assign(missingFinalStates.begin(), missingFinalStates.end());
    }

    /*! \brief Boosts an energy spectrum of isotropic particles into another
     *         frame (and isotropizes again).
     *  Parameters:
     *    gamma: Lorentz boost factor
     *    dNdE: Spectrum
     *    mass: mass of particle
     */
    daFunk::Funk boost_dNdE(daFunk::Funk dNdE, double gamma, double mass)
    {
      if ( gamma < 1.0 + .02 )  // Ignore less than 2% boosts
      {
        if (gamma < 1.0)
          DarkBit_error().raise(LOCAL_INFO, 
            "boost_dNdE: Requested Lorentz boost with gamma < 1");
        return dNdE;
      }
      double betaGamma = sqrt(gamma*gamma-1);
      daFunk::Funk E = daFunk::var("E");
      daFunk::Funk lnE = daFunk::var("lnE");
      daFunk::Funk Ep = daFunk::var("Ep");
      daFunk::Funk halfBox_int = betaGamma*sqrt(E*E-mass*mass);
      daFunk::Funk halfBox_bound = betaGamma*sqrt(Ep*Ep-mass*mass);
      daFunk::Funk integrand = dNdE/(2*halfBox_int);
      return integrand->gsl_integration("E", Ep*gamma-halfBox_bound, Ep*gamma+halfBox_bound)
        ->set_epsabs(0)->set_epsrel(1e-3)->set("Ep", daFunk::var("E"));
      //
      // TODO: Check whether to use numerically more stable integration over lnE instead
      // Note: this causes problems in the WIMP example (3) as the singularity is dropped
      //return (integrand*E)->set("E", exp(lnE))->gsl_integration("lnE", log(Ep*gamma-halfBox_bound), log(Ep*gamma+halfBox_bound))
      //  ->set_epsabs(0)->set_epsrel(1e-3)->set("Ep", daFunk::var("E"));
    }

    /*! \brief General routine to derive annihilation yield.
     *
     * Depends on:
     * - SimYieldTable
     * - TH_ProcessCatalog
     * - cascadeMC_gammaSpectra
     *
     * This function returns 
     *
     *   dN/dE*(sv)/mDM**2 (E, v)  [cm^3/s/GeV^3]
     *
     * the energy spectrum of photons times sigma*v/m^2, as function of
     * energy (GeV) and velocity (c).  By default, only the v=0 component
     * is calculated.  
     *
     */
    void GA_AnnYield_General(daFunk::Funk &result)
    {
      using namespace Pipes::GA_AnnYield_General;
      using DarkBit_utils::gamma3bdy_limits;

      std::string DMid= *Dep::DarkMatter_ID;

      /// Option line_width<double>: Set relative line width used in gamma-ray spectra (default 0.03)
      double line_width = runOptions->getValueOrDef<double>(0.03,  "line_width");

      // Get annihilation process from process catalog
      TH_Process annProc = (*Dep::TH_ProcessCatalog).getProcess(DMid, DMid);

      // Get particle mass from process catalog
      const double mass = (*Dep::TH_ProcessCatalog).getParticleProperty(DMid).mass;
      const double Ecm = 2*mass;

      // Loop over all channels for that process
      daFunk::Funk Yield = daFunk::zero("E", "v");

      // Adding two-body channels
      for (std::vector<TH_Channel>::iterator it = annProc.channelList.begin();
          it != annProc.channelList.end(); ++it)
      {
        // Here only take care of two-body final states
        if (it->nFinalStates != 2) continue;
        
        // Get final state masses
        double m0 = (*Dep::TH_ProcessCatalog).getParticleProperty(
            it->finalStateIDs[0]).mass;
        double m1 = (*Dep::TH_ProcessCatalog).getParticleProperty(
            it->finalStateIDs[1]).mass;

        // Ignore channels that are kinematically closed for v=0
        if ( m0 + m1 > Ecm ) continue;

        // Ignore channels with 0 BR in v=0 limit
        if (it->genRate->bind("v")->eval(0.) <= 0.) continue;

        double E0 = 0.5*(Ecm*Ecm+m0*m0-m1*m1)/Ecm;
        double E1 = Ecm-E0;

        // Check whether two-body final state is in SimYield table
        if ( Dep::SimYieldTable->hasChannel(
              it->finalStateIDs[0], it->finalStateIDs[1], "gamma") )
        {
          Yield = Yield +
            it->genRate*(*Dep::SimYieldTable)(
                it->finalStateIDs[0], it->finalStateIDs[1], "gamma", Ecm);
        }
        // Deal with composite final states
        else
        {
          daFunk::Funk spec0 = daFunk::zero("E");
          daFunk::Funk spec1 = daFunk::zero("E");        

          // Final state particle one
          // Tabulated spectrum available?
          if ( Dep::SimYieldTable->hasChannel(it->finalStateIDs[0], "gamma") )
          {
            spec0 = (*Dep::SimYieldTable)(it->finalStateIDs[0], "gamma")->set("Ecm",E0);
          }
          // Gamma-ray line?
          else if ( it->finalStateIDs[0] == "gamma" )
          {
            daFunk::Funk E = daFunk::var("E");
            spec0 = exp(-pow((E-E0)/line_width/E0,2)/2)/E0/sqrt(2*M_PI)/line_width;
          }
          // MC spectra available?
          else if ( Dep::cascadeMC_gammaSpectra->count(it->finalStateIDs[0]) )
          {
            double gamma0 = E0/m0;
            //std::cout << it->finalStateIDs[0] << " " << gamma0 << std::endl;
            spec0 = boost_dNdE(Dep::cascadeMC_gammaSpectra->at(it->finalStateIDs[0]), gamma0, 0.0);
          }        

          // Final state particle two
          if ( Dep::SimYieldTable->hasChannel(it->finalStateIDs[1], "gamma") )
          {
            spec1 = (*Dep::SimYieldTable)(it->finalStateIDs[1], "gamma")->set("Ecm", E1);
          }
          else if ( it->finalStateIDs[1] == "gamma" )
          {
            daFunk::Funk E = daFunk::var("E");
            spec1 = exp(-pow((E-E1)/line_width/E1,2)/2)/E1/sqrt(2*M_PI)/line_width;
          }
          else if ( Dep::cascadeMC_gammaSpectra->count(it->finalStateIDs[1]) )
          {
            double gamma1 = E1/m1;
            //std::cout << it->finalStateIDs[1] << " " << gamma1 << std::endl;
            spec1 = boost_dNdE(Dep::cascadeMC_gammaSpectra->at(it->finalStateIDs[1]), gamma1, 0.0);
          }

          #ifdef DARKBIT_DEBUG
            std::cout << it->finalStateIDs[0] << " " << it->finalStateIDs[1] << std::endl;
            std::cout << "gammas: " << gamma0 << ", " << gamma1 << std::endl;
            daFunk::Funk chnSpec = (daFunk::zero("v", "E") 
              +  spec0 
              +  spec1)-> set("v", 0.);
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
          #endif

          Yield = Yield + (spec0 + spec1) * it->genRate;
        }
      } // End adding two-body final states
          
      #ifdef DARKBIT_DEBUG
        std::vector<std::string> test1 = initVector<std::string> ("h0_1_test","h0_2_test","h0_2_test","h0_1_test","WH_test", "A0_test", "h0_1_test", "W+");
        std::vector<std::string> test2 = initVector<std::string> ("A0_test",  "A0_test",  "Z0_test",  "Z0_test",  "WH_test", "Z0_test", "h0_2_test", "W-");
      
        for(size_t i=0; i<test1.size();i++)
        {
            daFunk::Funk chnSpec = (*Dep::SimYieldTable)(test1[i], test2[i], "gamma", Ecm);
            std::vector<double> y = chnSpec->bind("E")->vect(x);
            os << test1[i] << test2[i] << ":\n";
            os << "  E: [";
            for (std::vector<double>::iterator it2 = x.begin(); it2 != x.end(); it2++)
              os << *it2 << ", ";
            os  << "]\n";
            os << "  dNdE: [";
            for (std::vector<double>::iterator it2 = y.begin(); it2 != y.end(); it2++)
              os << *it2 << ", ";
            os  << "]\n";
        }
      #endif
      
      // Adding three-body final states
      //
      // NOTE:  Three body processes are added even if they are closed for at v=0
      for (std::vector<TH_Channel>::iterator it = annProc.channelList.begin();
          it != annProc.channelList.end(); ++it)
      {
        // Here only take care of three-body final states
        if (it->nFinalStates != 3) continue;

        // Implement tabulated three-body final states
        /*
           if ( it->nFinalStates == 3
           and Dep::SimYieldTable->hasChannel(it->finalStateIDs[0], "gamma")
           and Dep::SimYieldTable->hasChannel(it->finalStateIDs[1], "gamma")
           and Dep::SimYieldTable->hasChannel(it->finalStateIDs[2], "gamma")
           )
           {
           daFunk::Funk dNdE1dE2 = it->genRate->set("v",0.);
           daFunk::Funk spec0 = 
             (*Dep::SimYieldTable)(it->finalStateIDs[0], "gamma");
           daFunk::Funk spec1 = 
             (*Dep::SimYieldTable)(it->finalStateIDs[1], "gamma");
           daFunk::Funk spec2 = 
             (*Dep::SimYieldTable)(it->finalStateIDs[2], "gamma");
           Yield = Yield + convspec(spec0, spec1, spec2, dNdE1dE2);
           }
        */

        if ( it->finalStateIDs[0] == "gamma" )
        {
          if ( it->finalStateIDs[1] == "gamma" or it->finalStateIDs[2] == "gamma")
          {
            DarkBit_warning().raise(LOCAL_INFO, "Second and/or third primary gamma rays in three-body final states ignored.");
          }
          double m1 = (*Dep::TH_ProcessCatalog).getParticleProperty(
              it->finalStateIDs[1]).mass;
          double m2 = (*Dep::TH_ProcessCatalog).getParticleProperty(
              it->finalStateIDs[2]).mass;
          daFunk::Funk E1_low =  daFunk::func(gamma3bdy_limits<0>, daFunk::var("E"),
              mass, m1, m2);
          daFunk::Funk E1_high =  daFunk::func(gamma3bdy_limits<1>, daFunk::var("E"),
              mass, m1, m2);
          daFunk::Funk dsigmavde = it->genRate->gsl_integration(
              "E1", E1_low, E1_high);

          #ifdef DARKBIT_DEBUG
            daFunk::Funk chnSpec = (daFunk::zero("v", "E") + dsigmavde)-> set("v", 0.);
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
          #endif

          Yield = Yield + dsigmavde;
        }
      }
      #ifdef DARKBIT_DEBUG
        if(debug) os.close();
      #endif

      result = daFunk::ifelse(1e-6 - daFunk::var("v"), Yield/(mass*mass), 
          daFunk::throwError("Spectrum currently only defined for v=0."));
    }


    /// SimYieldTable based on DarkSUSY tabulated results.
    void SimYieldTable_DarkSUSY(SimYieldTable& result)
    {
      using namespace Pipes::SimYieldTable_DarkSUSY;

      static bool initialized = false;
      if ( not initialized )
      {
        int flag = 0;      // some flag
        int yieldk = 152;  // gamma ray yield
        daFunk::Funk dNdE;
        daFunk::Funk dNdE_1;
        daFunk::Funk dNdE_2;

        using DarkBit_utils::str_flav_to_mass;
        
#define ADD_CHANNEL(ch, P1, P2, FINAL, EcmMin, EcmMax)                \
        dNdE = daFunk::func_fromThreadsafe(                           \
            BEreq::dshayield.pointer(), daFunk::var("mwimp"),         \
            daFunk::var("E"), ch, yieldk, flag)->set("mwimp",         \
            daFunk::var("Ecm")/2);                                    \
        result.addChannel(dNdE, str_flav_to_mass(P1), str_flav_to_mass(P2), FINAL, EcmMin, EcmMax);  

        // specifies also center of mass energy range
        ADD_CHANNEL(12, "Z0", "Z0", "gamma", 91.2*2, 100000.)
        ADD_CHANNEL(13, "W+", "W-", "gamma", 80.25*2, 100000.)
        ADD_CHANNEL(14, "nu_e", "nubar_e", "gamma", 0., 100000.)  // Zero
        ADD_CHANNEL(15, "e+", "e-", "gamma", 0., 100000.)  // Zero
        ADD_CHANNEL(16, "nu_mu", "nubar_mu", "gamma", 0., 100000.)  // Zero
        ADD_CHANNEL(17, "mu+", "mu-", "gamma", 0.10566*2, 100000.)
        ADD_CHANNEL(18, "nu_tau", "nubar_tau", "gamma", 0., 100000.)  // Zero
        ADD_CHANNEL(19, "tau+", "tau-", "gamma", 1.7841*2, 100000.)
        //ADD_CHANNEL(20, "u", "ubar", "gamma", 0., 100000.)  // Zero
        ADD_CHANNEL(22, "u", "ubar", "gamma", 1.35*2, 100000.)  // approx by cc
        //ADD_CHANNEL(21, "d", "dbar", "gamma", 0., 100000.)  // Zero
        ADD_CHANNEL(22, "d", "dbar", "gamma", 1.35*2, 100000.)  // approx by cc
        ADD_CHANNEL(22, "c", "cbar", "gamma", 1.35*2, 100000.)
        //ADD_CHANNEL(23, "s", "sbar", "gamma", 0., 100000.)  // Zero
        ADD_CHANNEL(22, "s", "sbar", "gamma", 1.35*2, 100000.)  // approx by cc
        ADD_CHANNEL(24, "t", "tbar", "gamma", 175.0*2, 100000.)
        ADD_CHANNEL(25, "b", "bbar", "gamma", 5.0*2, 100000.)
        ADD_CHANNEL(26, "g", "g", "gamma", 0., 100000.)
#undef ADD_CHANNEL

        // Add approximations for single-particle cases.
        // FIXME: Replace by boosted rest frame spectrum Z0
        dNdE = daFunk::func_fromThreadsafe(BEreq::dshayield.pointer(), daFunk::var("Ecm"), daFunk::var("E"), 12, yieldk, flag);
        result.addChannel(dNdE/2, "Z0", "gamma", 91.2, 50000.);
        dNdE = daFunk::func_fromThreadsafe(BEreq::dshayield.pointer(), daFunk::var("Ecm"), daFunk::var("E"), 13, yieldk, flag);
        result.addChannel(dNdE/2, "W+", "gamma", 80.25, 50000.);
        result.addChannel(dNdE/2, "W-", "gamma", 80.25, 50000.);
        dNdE = daFunk::func_fromThreadsafe(BEreq::dshayield.pointer(), daFunk::var("Ecm"), daFunk::var("E"), 15, yieldk, flag);
        result.addChannel(dNdE/2, str_flav_to_mass("e+"), "gamma", 0., 50000.);
        result.addChannel(dNdE/2, str_flav_to_mass("e-"), "gamma", 0., 50000.);
        dNdE = daFunk::func_fromThreadsafe(BEreq::dshayield.pointer(), daFunk::var("Ecm"), daFunk::var("E"), 17, yieldk, flag);
        result.addChannel(dNdE/2, str_flav_to_mass("mu+"), "gamma", 0.10566, 50000.);
        result.addChannel(dNdE/2, str_flav_to_mass("mu-"), "gamma", 0.10566, 50000.);        
        dNdE = daFunk::func_fromThreadsafe(BEreq::dshayield.pointer(), daFunk::var("Ecm"), daFunk::var("E"), 19, yieldk, flag);
        result.addChannel(dNdE/2, str_flav_to_mass("tau+"), "gamma", 1.7841, 50000.);
        result.addChannel(dNdE/2, str_flav_to_mass("tau-"), "gamma", 1.7841, 50000.);
        dNdE = daFunk::func_fromThreadsafe(BEreq::dshayield.pointer(), daFunk::var("Ecm"), daFunk::var("E"), 24, yieldk, flag);
        result.addChannel(dNdE/2, str_flav_to_mass("t"),    "gamma", 175., 50000.);
        result.addChannel(dNdE/2, str_flav_to_mass("tbar"), "gamma", 175., 50000.);        

        // Example for SW (CW 2016-07-14)
        /*
        // Define one particle final state spectrum as function of particle energy E_x and photon energy E
        daFunk::Funk dNdE_t = daFunk::func_fromThreadsafe(BEreq::dshayield.pointer(), 
                              daFunk::var("E_t"), daFunk::var("E"), 24, yieldk, flag)/2;
        daFunk::Funk dNdE_b = daFunk::func_fromThreadsafe(BEreq::dshayield.pointer(), 
                              daFunk::var("E_b"), daFunk::var("E"), 25, yieldk, flag)/2;
        // Define COM energy variable
        daFunk::Funk Ecm = daFunk::var("Ecm");  
        // Define combined spectrum, replacing the final state energy properly
        daFunk::Funk dNdE_tb = 
            dNdE_t->set("E_t", (pow(Ecm,2)+pow(m_t,2)-pow(m_b,2))/2/Ecm)
          + dNdE_b->set("E_b", (pow(Ecm,2)+pow(m_b,2)-pow(m_t,2))/2/Ecm);
        // replace m_t and m_b by the appropriate masses, as given above for
        // two body final state kinematics
        */
        
        daFunk::Funk Ecm = daFunk::var("Ecm");
#define ADD_CHANNEL_MIXEDMASSES(ch1, ch2, P1, P2, FINAL, m1, m2)                \
        dNdE_1 = daFunk::func_fromThreadsafe(                           \
            BEreq::dshayield.pointer(), daFunk::var("E1"),         \
            daFunk::var("E"), ch1, yieldk, flag)->set("E1",         \
            Ecm/2 + (m1*m1 - m2*m2)/(2*Ecm));        \
        dNdE_2 = daFunk::func_fromThreadsafe(                           \
            BEreq::dshayield.pointer(), daFunk::var("E2"),         \
            daFunk::var("E"), ch2, yieldk, flag)->set("E2",         \
            Ecm/2 + (m2*m2 - m1*m1)/(2*Ecm));                                   \
        result.addChannel(0.5*(dNdE_1 + dNdE_2), str_flav_to_mass(P1), str_flav_to_mass(P2), FINAL, m1+m2, 100000.);

        ADD_CHANNEL_MIXEDMASSES(20, 21, "u", "dbar", "gamma", 0.0, 0.0)
        ADD_CHANNEL_MIXEDMASSES(21, 20, "d", "ubar", "gamma", 0.0, 0.0)
        ADD_CHANNEL_MIXEDMASSES(20, 23, "u", "sbar", "gamma", 0.0, 0.0)
        ADD_CHANNEL_MIXEDMASSES(23, 20, "s", "ubar", "gamma", 0.0, 0.0)
        ADD_CHANNEL_MIXEDMASSES(20, 25, "u", "bbar", "gamma", 0.0, 5.0)
        ADD_CHANNEL_MIXEDMASSES(25, 20, "b", "ubar", "gamma", 5.0, 0.0)

        ADD_CHANNEL_MIXEDMASSES(22, 21, "c", "dbar", "gamma", 1.35, 0.0)
        ADD_CHANNEL_MIXEDMASSES(21, 22, "d", "cbar", "gamma", 0.0, 1.35)
        ADD_CHANNEL_MIXEDMASSES(22, 23, "c", "sbar", "gamma", 1.35, 0.0)
        ADD_CHANNEL_MIXEDMASSES(23, 22, "s", "cbar", "gamma", 0.0, 1.35)
        ADD_CHANNEL_MIXEDMASSES(22, 25, "c", "bbar", "gamma", 1.35, 5.0)
        ADD_CHANNEL_MIXEDMASSES(25, 22, "b", "cbar", "gamma", 5.0, 1.35)

        ADD_CHANNEL_MIXEDMASSES(24, 21, "t", "dbar", "gamma", 175.0, 0.0)
        ADD_CHANNEL_MIXEDMASSES(21, 24, "d", "tbar", "gamma", 0.0, 175.0)
        ADD_CHANNEL_MIXEDMASSES(24, 23, "t", "sbar", "gamma", 175.0, 0.0)
        ADD_CHANNEL_MIXEDMASSES(23, 24, "s", "tbar", "gamma", 0.0, 175.0)
        ADD_CHANNEL_MIXEDMASSES(24, 25, "t", "bbar", "gamma", 175.0, 5.0)
        ADD_CHANNEL_MIXEDMASSES(25, 24, "b", "tbar", "gamma", 5.0, 175.0)

#undef ADD_CHANNEL_MIXEDMASSES
   
        initialized = true;
      }
    }

    /// SimYieldTable based on MicrOmegas tabulated results.
    void SimYieldTable_MicrOmegas(SimYieldTable& result)
    {
      using namespace Pipes::SimYieldTable_MicrOmegas;
      using DarkBit_utils::str_flav_to_mass;

      static bool initialized = false;
      const int outN = 0;  // gamma

      if ( not initialized )
      {
        daFunk::Funk dNdE;

#define ADD_CHANNEL(inP, P1, P2, FINAL, EcmMin, EcmMax)                                                   \
        dNdE = daFunk::func_fromThreadsafe(BEreq::dNdE.pointer(), daFunk::var("Ecm"), daFunk::var("E"), inP, outN)/daFunk::var("E"); \
        result.addChannel(dNdE, str_flav_to_mass(P1), str_flav_to_mass(P2), FINAL, EcmMin, EcmMax);  // specifies also center of mass energy range
        // FIXME: Update energy validty ranges
        ADD_CHANNEL(0, "g", "g", "gamma", 0., 10000.)
        ADD_CHANNEL(1, "d", "dbar", "gamma", 0., 10000.)
        ADD_CHANNEL(2, "u", "ubar", "gamma", 0., 10000.)
        ADD_CHANNEL(3, "s", "sbar", "gamma", 0., 10000.)
        ADD_CHANNEL(4, "c", "cbar", "gamma", 0., 10000.)
        ADD_CHANNEL(5, "b", "bbar", "gamma", 0., 10000.)
        ADD_CHANNEL(6, "t", "tbar", "gamma", 0., 10000.)
        ADD_CHANNEL(7, "e+", "e-", "gamma", 0., 10000.)
        ADD_CHANNEL(8, "mu+", "mu-", "gamma", 0., 10000.)
        ADD_CHANNEL(9, "tau+", "tau-", "gamma", 0., 10000.)
        ADD_CHANNEL(10, "Z0", "Z0", "gamma", 0., 10000.)
        ADD_CHANNEL(13, "W+", "W-", "gamma", 0., 10000.)
#undef ADD_CHANNEL
        result.addChannel(
            daFunk::zero("Ecm", "E"), "nu_e", "nubar_e", "gamma", 0., 10000.);
        result.addChannel(
            daFunk::zero("Ecm", "E"), "nu_mu", "nubar_mu", "gamma", 0., 10000.);
        result.addChannel(
            daFunk::zero("Ecm", "E"), "nu_tau", "nubar_tau", "gamma", 0., 10000.);
            
        // Add approximations for single-particle cases.
        // FIXME: Update energy validty ranges
        dNdE = (daFunk::func_fromThreadsafe(BEreq::dNdE.pointer(), daFunk::var("_Ecm"), daFunk::var("E"), 8, outN) 
               /daFunk::var("E"))->set("_Ecm", daFunk::var("Ecm")*2);
        result.addChannel(dNdE/2, str_flav_to_mass("mu+"), "gamma", 0., 10000.);
        result.addChannel(dNdE/2, str_flav_to_mass("mu-"), "gamma", 0., 10000.);        
        dNdE = (daFunk::func_fromThreadsafe(BEreq::dNdE.pointer(), daFunk::var("_Ecm"), daFunk::var("E"), 9, outN) 
               /daFunk::var("E"))->set("_Ecm", daFunk::var("Ecm")*2);
        result.addChannel(dNdE/2, str_flav_to_mass("tau+"), "gamma", 0., 10000.);
        result.addChannel(dNdE/2, str_flav_to_mass("tau-"), "gamma", 0., 10000.);        
        dNdE = (daFunk::func_fromThreadsafe(BEreq::dNdE.pointer(), daFunk::var("_Ecm"), daFunk::var("E"), 10, outN) 
               /daFunk::var("E"))->set("_Ecm", daFunk::var("Ecm")*2);
        result.addChannel(dNdE/2, "Z0", "gamma", 0., 10000.);
        dNdE = (daFunk::func_fromThreadsafe(BEreq::dNdE.pointer(), daFunk::var("_Ecm"), daFunk::var("E"), 13, outN) 
               /daFunk::var("E"))->set("_Ecm", daFunk::var("Ecm")*2);
        result.addChannel(dNdE/2, "W+", "gamma", 0., 10000.);
        result.addChannel(dNdE/2, "W-", "gamma", 0., 10000.);
        
        // Add single particle lookup for t tbar to prevent them from being tagged as missing final states for cascades.
        dNdE = (daFunk::func_fromThreadsafe(BEreq::dNdE.pointer(), daFunk::var("_Ecm"), daFunk::var("E"), 6, outN) 
               /daFunk::var("E"))->set("_Ecm", daFunk::var("Ecm")*2);
        result.addChannel(dNdE/2, str_flav_to_mass("t"),    "gamma", 0., 10000.);
        result.addChannel(dNdE/2, str_flav_to_mass("tbar"), "gamma", 0., 10000.);        
        
        // Approximations for mixed quark channels
        daFunk::Funk dNdE_d = daFunk::func_fromThreadsafe(BEreq::dNdE.pointer(), 
                              daFunk::var("Ecm"), daFunk::var("E"), 1, outN)/daFunk::var("E");
        daFunk::Funk dNdE_u = daFunk::func_fromThreadsafe(BEreq::dNdE.pointer(), 
                              daFunk::var("Ecm"), daFunk::var("E"), 2, outN)/daFunk::var("E");
        daFunk::Funk dNdE_s = daFunk::func_fromThreadsafe(BEreq::dNdE.pointer(), 
                              daFunk::var("Ecm"), daFunk::var("E"), 3, outN)/daFunk::var("E");        
        daFunk::Funk dNdE_c = daFunk::func_fromThreadsafe(BEreq::dNdE.pointer(), 
                              daFunk::var("Ecm"), daFunk::var("E"), 4, outN)/daFunk::var("E");
        daFunk::Funk dNdE_b = daFunk::func_fromThreadsafe(BEreq::dNdE.pointer(), 
                              daFunk::var("Ecm"), daFunk::var("E"), 5, outN)/daFunk::var("E");          
        daFunk::Funk dNdE_t = daFunk::func_fromThreadsafe(BEreq::dNdE.pointer(), 
                              daFunk::var("Ecm"), daFunk::var("E"), 6, outN)/daFunk::var("E");
                  
        // FIXME: Update energy validty ranges
        result.addChannel(0.5*(dNdE_u+dNdE_d), str_flav_to_mass("u"), str_flav_to_mass("dbar"), "gamma", 0., 10000.); 
        result.addChannel(0.5*(dNdE_u+dNdE_s), str_flav_to_mass("u"), str_flav_to_mass("sbar"), "gamma", 0., 10000.); 
        result.addChannel(0.5*(dNdE_u+dNdE_b), str_flav_to_mass("u"), str_flav_to_mass("bbar"), "gamma", 0., 10000.); 
        result.addChannel(0.5*(dNdE_u+dNdE_d), str_flav_to_mass("ubar"), str_flav_to_mass("d"), "gamma", 0., 10000.); 
        result.addChannel(0.5*(dNdE_u+dNdE_s), str_flav_to_mass("ubar"), str_flav_to_mass("s"), "gamma", 0., 10000.); 
        result.addChannel(0.5*(dNdE_u+dNdE_b), str_flav_to_mass("ubar"), str_flav_to_mass("b"), "gamma", 0., 10000.); 

        result.addChannel(0.5*(dNdE_c+dNdE_d), str_flav_to_mass("c"), str_flav_to_mass("dbar"), "gamma", 0., 10000.);    
        result.addChannel(0.5*(dNdE_c+dNdE_s), str_flav_to_mass("c"), str_flav_to_mass("sbar"), "gamma", 0., 10000.);   
        result.addChannel(0.5*(dNdE_c+dNdE_b), str_flav_to_mass("c"), str_flav_to_mass("bbar"), "gamma", 0., 10000.);        
        result.addChannel(0.5*(dNdE_c+dNdE_d), str_flav_to_mass("cbar"), str_flav_to_mass("d"), "gamma", 0., 10000.);    
        result.addChannel(0.5*(dNdE_c+dNdE_s), str_flav_to_mass("cbar"), str_flav_to_mass("s"), "gamma", 0., 10000.);   
        result.addChannel(0.5*(dNdE_c+dNdE_b), str_flav_to_mass("cbar"), str_flav_to_mass("b"), "gamma", 0., 10000.);        

        result.addChannel(0.5*(dNdE_t+dNdE_d), str_flav_to_mass("t"), str_flav_to_mass("dbar"), "gamma", 0., 10000.);    
        result.addChannel(0.5*(dNdE_t+dNdE_s), str_flav_to_mass("t"), str_flav_to_mass("sbar"), "gamma", 0., 10000.);            
        result.addChannel(0.5*(dNdE_t+dNdE_b), str_flav_to_mass("t"), str_flav_to_mass("bbar"), "gamma", 0., 10000.);            
        result.addChannel(0.5*(dNdE_t+dNdE_d), str_flav_to_mass("tbar"), str_flav_to_mass("d"), "gamma", 0., 10000.);    
        result.addChannel(0.5*(dNdE_t+dNdE_s), str_flav_to_mass("tbar"), str_flav_to_mass("s"), "gamma", 0., 10000.);            
        result.addChannel(0.5*(dNdE_t+dNdE_b), str_flav_to_mass("tbar"), str_flav_to_mass("b"), "gamma", 0., 10000.);             
            
        initialized = true;
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

        double operator()(std::string channel, double /*m*/, double /*e*/)
        {
          // Not yet implemented
          std::vector<double> y(table[channel].begin(), table[channel].end());
          return 0;
        }

      private:
        std::vector<double> log10x;
        ASCIItableReader table;
    };

    /// SimYieldTable based on PPPC4DMID Cirelli et al. 2010
    void SimYieldTable_PPPC(SimYieldTable& /*result*/)
    {
      using namespace Pipes::SimYieldTable_PPPC;
      static bool initialized = false;
      static PPPC_interpolation PPPC_gam_object;

      if ( not initialized )
      {
        std::string filename = "DarkBit/data/AtProductionNoEW_gammas.dat";
        PPPC_gam_object = PPPC_interpolation(filename);
        initialized = true;
        DarkBit_error().raise(LOCAL_INFO,
            "SimYieldTable_PPPC is not implemented yet.  Use e.g. SimYieldTable_DarkSUSY instead.");
      }
    }

    // Dark matter halo profiles
    double profile_Einasto(double rhos, double rs, double alpha, double r)
    { return rhos*exp(-1/alpha*(pow(r/rs, alpha)-1)); }
    double profile_gNFW(double rhos, double rs, double alpha, double beta, double gamma, double r)
    { return pow(2, (beta-gamma)/alpha)*rhos/pow(r/rs, gamma)/pow(1+pow(r/rs, alpha), (beta-gamma)/alpha); }

    /*! \brief Generates dark matter halo for Milky Way
     *
     * This function returns the radial dark matter profile in units GeV/cm3
     */
    void GalacticHalo(daFunk::Funk & halo)
    {
      using namespace Pipes::GalacticHalo;
      if (ModelInUse("GalacticHalo_Einasto"))
      {
        double rhos  = *Param["rhos"];
        double rs    = *Param["rs"];
        double alpha = *Param["alpha"];
        daFunk::Funk profile = daFunk::func(profile_Einasto, rhos, rs, alpha, daFunk::var("r"));
      }
      if (ModelInUse("GalacticHalo_gNFW"))
      {
        double rhos  = *Param["rhos"];
        double rs    = *Param["rs"];
        double alpha = *Param["alpha"];
        double beta  = *Param["beta"];
        double gamma = *Param["gamma"];
        daFunk::Funk profile = daFunk::func(profile_gNFW, rhos, rs, alpha, beta, gamma, daFunk::var("r"));
      }
    }
  }
}
