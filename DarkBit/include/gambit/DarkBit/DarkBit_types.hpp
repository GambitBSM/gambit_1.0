//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Type definition header for module DarkBit.
///
///  Compile-time registration of type definitions 
///  required for the rest of the code to
///  communicate with DarkBit.
///
///  Add to this if you want to define a new type
///  for the functions in DarkBit to return, but
///  you don't expect that type to be needed by 
///  any other modules.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2012 Mar, 2014 Jan
///
///  \author Torsten Bringmann
///          (torsten.bringmann@fys.uio.no)
///  \date 2013 Jun
///
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2013 Oct
///  \date 2014 Jan, Apr
///  \date 2015 Mar
///
///  \author Lars A. Dal  
///          (l.a.dal@fys.uio.no)
///  \date 2014 Mar, Jul, Sep, Oct, Dec
///  \date 2015 Jan
///
///  \author Christopher Savage
///          (chris@savage.name)
///  \date 2015 Jan
///
///  \author Jonathan Cornell
///          (jcornell@ucsc.edu)
///  \date 2014
///
///  *********************************************


#ifndef __DarkBit_types_hpp__
#define __DarkBit_types_hpp__

#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <array>
#include <cmath>
#include <sstream>

#include "gambit/DarkBit/decay_chain.hpp"
#include "gambit/DarkBit/SimpleHist.hpp"
#include "gambit/DarkBit/ProcessCatalog.hpp"
#include "gambit/cmake/cmake_variables.hpp"
#include "gambit/Elements/funktions.hpp"

#include <boost/enable_shared_from_this.hpp>
#include <boost/shared_ptr.hpp>
#include <gsl/gsl_integration.h>

namespace Gambit
{

  namespace DarkBit
  {

    // Forward declaration of warnings and errors
    error& DarkBit_error();
    warning& DarkBit_warning();

    // Local preferred sources of tools.
    using boost::weak_ptr;
    using boost::shared_ptr;
    using boost::dynamic_pointer_cast;
    using boost::static_pointer_cast;
    using boost::enable_shared_from_this;

    // A simple example
    struct Wstruct
    {
      double valA;
      double valB;
    };


    struct RD_coannihilating_particle
    {
      RD_coannihilating_particle() {}
      RD_coannihilating_particle(const unsigned int & index, const unsigned int & dof, const double & mass) : index(index), degreesOfFreedom(dof), mass(mass) {}

      unsigned int index;
      unsigned int degreesOfFreedom;
      double mass;
    };

    struct RD_spectrum_type
    {
      RD_spectrum_type() {}
      RD_spectrum_type(const std::vector<RD_coannihilating_particle> & coannPart, const std::vector<TH_Resonance> & resonances, const std::vector<double> & thresholds) : coannihilatingParticles(coannPart), resonances(resonances), threshold_energy(thresholds) {}

      std::vector<RD_coannihilating_particle> coannihilatingParticles;
      std::vector<TH_Resonance> resonances;
      std::vector<double> threshold_energy;
    };


    //////////////////////////////////////////////
    // Neutrino telescope data structures
    //////////////////////////////////////////////

    /// Neutrino telescope yield info container
    struct nuyield_info
    {
      public:
        bool threadsafe;
        nuyield_function_pointer pointer;
    };
    
    /// Neutrino telescope data container
    struct nudata
    {
      public:
        int nobs;
        double signal;
        double bg;
        double loglike;
        double bgloglike;
        double pvalue;
    };

    ////////////////////////////////////////////////////
    // Indirect detection final state yield structures
    ////////////////////////////////////////////////////
         
    /// Channel container
    struct SimYieldChannel
    {
        SimYieldChannel(Funk::Funk dNdE, std::string p1, std::string p2, std::string finalState, double Ecm_min, double Ecm_max):
            dNdE(dNdE), p1(p1), p2(p2), finalState(finalState), Ecm_min(Ecm_min), Ecm_max(Ecm_max) 
        {
          #ifdef DARKBIT_DEBUG
            std::ostringstream msg;
            msg << "SimYieldChannel for " << p1 << " " << p2 << " final state(s): Requested center-of-mass energy out of range (";
            msg << Ecm_min << "-" << Ecm_max << " GeV).";
            auto error = Funk::raiseInvalidPoint(msg.str());
            auto Ecm = Funk::var("Ecm");
            this->dNdE = Funk::ifelse(Ecm - Ecm_min, Funk::ifelse(Ecm_max - Ecm, dNdE, error), error);
          #endif
          dNdE_bound = dNdE->bind("E", "Ecm");
        }
        Funk::Funk dNdE;       
        Funk::BoundFunk dNdE_bound;  // Pre-bound version for use in e.g. cascade decays
        std::string p1;
        std::string p2;
        std::string finalState;
        double Ecm_min;
        double Ecm_max;        
    };

    /// Aggregated yield table (consisting of multiple channels)
    class SimYieldTable
    {
        /* Object containing tabularized yields for particle decay and two-body
         * final states.
         */
        public:
            SimYieldTable() : 
                dummy_channel(Funk::zero("E", "Ecm"), "", "", "", 0.0, 0.0) {}

            void addChannel(Funk::Funk dNdE, std::string p1, std::string p2, std::string finalState, double Ecm_min, double Ecm_max)
            {
                if ( hasChannel(p1, p2) )
                {
                    DarkBit_warning().raise(LOCAL_INFO, "addChanel: Channel already exists --> ignoring new one.");
                    return;
                }
                channel_list.push_back(SimYieldChannel(dNdE, p1, p2, finalState, Ecm_min, Ecm_max));
            }
            
            void addChannel(Funk::Funk dNdE, std::string p1, std::string finalState, double Ecm_min, double Ecm_max)
            {
                addChannel(dNdE, p1, "", finalState, Ecm_min, Ecm_max);
            }

            bool hasChannel(std::string p1, std::string p2, std::string finalState) const
            {
                return ( findChannel(p1, p2, finalState) != -1 );
            }

            bool hasChannel(std::string p1, std::string finalState) const
            {
                return hasChannel(p1, "", finalState);
            }
            
            bool hasAnyChannel(std::string p1) const
            {
                return hasAnyChannel(p1, "");
            }         
            
            bool hasAnyChannel(std::string p1, std::string p2) const
            {
                const std::vector<SimYieldChannel> &cl = channel_list;
                for ( unsigned int i = 0; i < channel_list.size(); i++ )
                {
                    if ((p1==cl[i].p1 and p2==cl[i].p2) or (p1==cl[i].p2 and p2==cl[i].p1) )
                    {
                        return true;
                    }
                }
                return false;
            }
            
            const SimYieldChannel& getChannel(std::string p1, std::string p2, std::string finalState) const
            {
                int index = findChannel(p1, p2, finalState);
                if ( index == -1 )
                {
                    DarkBit_warning().raise(LOCAL_INFO, "getChannel: Channel unknown, returning dummy.");
                    return dummy_channel;
                }
                return channel_list[index];
            }

            Funk::Funk operator()(std::string p1, std::string p2, std::string finalState, double Ecm) const
            {
                return this->operator()(p1, p2, finalState)->set("Ecm", Ecm);
            }

            Funk::Funk operator()(std::string p1, std::string finalState, double Ecm) const
            {
                return this->operator()(p1,finalState)->set("Ecm", Ecm);
            }

            Funk::Funk operator()(std::string p1, std::string p2, std::string finalState) const
            {
                int index = findChannel(p1, p2, finalState);
                if ( index == -1 )
                {
                    DarkBit_warning().raise(LOCAL_INFO, "SimYieldTable(): Channel not known, returning zero spectrum.");
                    return Funk::zero("E", "Ecm");
                }
                return channel_list[index].dNdE;
            }

            Funk::Funk operator()(std::string p1, std::string finalState) const
            {
                return this->operator()(p1, "", finalState);
            }

        private:
            SimYieldChannel dummy_channel;
            std::vector<SimYieldChannel> channel_list;

            int findChannel(std::string p1, std::string p2, std::string finalState) const
            {
                const std::vector<SimYieldChannel> &cl = channel_list;
                for ( unsigned int i = 0; i < channel_list.size(); i++ )
                {
                    if ((p1==cl[i].p1 and p2==cl[i].p2 and finalState==cl[i].finalState) or (p1==cl[i].p2 and p2==cl[i].p1 and finalState==cl[i].finalState) )
                    {
                        return i;
                    }
                }
                return -1;
            }
    };

    //////////////////////////////////////////////
    // Direct detection data structures
    //////////////////////////////////////////////
    
    // NOTE:
    // The structures here are
    // preliminary ideas for generic, robust means of
    // specifying the DM particle(s), interactions, and
    // distributions in the local halo.  These structures
    // cannot get too fancy as everything here gets off-
    // loaded to DDCalc, where all the calculations are
    // performed.

    // Velocities are specified in Galactic coordinates UVW:
    //   U is towards Galactic center
    //   V is in direction if disk rotation
    //   W is perpendicular to disk plane
    // Velocities are typically specified in the Galactic
    // rest frame, i.e. the frame with no rotation.

    /*

    //------------------------------------------------------
    // Structure to contain the Sun & Earth's motion relative
    // to the Galactic rest frame in Galactic coordinates.
    struct DDEarthMotionS
    {
      // To ensure consistency, elements can only be accessed
      // via an appropriate function.
      private:
        // Sun's motion ---------------
        // These quantities are not all independent, but are maintained
        // separately to allow for different means of specifying the
        // motion.
        double vrot;     // Disk rotation speed [km/s]
        double vLSR[3];  // Local Standard of Rest [km/s]; usually (0,vrot,0)
        double vpec[3];  // Sun's peculiar velocity
        double vsun[3];  // Sun's total velocity: vsun = vLSR + vpec
        // Earth's motion -------------
        // At some point in the future, this structure may 
        // contain parameterizations of the Earth's motion
        // relative to the Sun.
    };

    //------------------------------------------------------
    // Halo component type.
    // Only Maxwell-Boltzmann (MB) implemented at the moment.
    enum class HCType {None,File,MaxwellBoltzmann};

    // Structure to describe the local density and velocity
    //  distribution of a single population of DM particles.
    struct DDHaloComponentS
    {
      std::string label; // Population label (optional)
      // To ensure consistency, these elements can only be
      //  accessed via an appropriate function.
      private:
        HCType type;
        bool   enabled;  // Can disable
        double rho;      // Local DM density [GeV/cm^3]
        // Maxwell-Boltzmann (MB) -----
        // Each "component" is the weighted sum over MB
        // distributed populations.  Use vectors to store
        // list of these sub-components.
        // Mean population motion [km/s] (Galactic rest frame)
        std::vector<std::array<double,3>> v;
        // MB dispersion [km/s]; technically most probable MB speed
        std::vector<double> v0;
        // Cutoff velocity at which MB distribution will be truncated
        std::vector<double> vesc;
        // Relative weight of each MB population
        std::vector<double> w;
    };

    // Structure containing (keyed?) set of halo components,
    // where the key can be used to associate a DM particle
    // with a halo component.
    // TODO: DDHaloS structure udpate
    //  * How to handle keys? Actually associations must be
    //    made within DDCalc, where the calculations are
    //    done.
    //  * Use array of smart pointers instead?
    struct DDHaloS
    {
      // To ensure consistency, these elements can only be
      //  accessed via an appropriate function.
      private:
        // Use index as key.  A map would be preferable if
        // only used here, but this is meant to mirror the
        // distributions in external DDCalc package.
        std::vector<DDHaloComponentS> C;
        // A key-value array 
        //std::map<int,DDHaloComponentS> C;
    };

    //------------------------------------------------------
    // Spin interaction type: spin-independent (SI) or spin-
    // dependent (SD).
    enum class SpinType {SI,SD};

    // Structure to describe a DM particle + interaction
    // combination.  The neutralino requires two of these:
    // one each for spin-independent and spin-dependent
    // interactions.
    struct DDParticleS
    {
      std::string label; // Particle+interaction label (optional)
      // To ensure consistency, these elements can only be
      //  accessed via an appropriate function.
      private:
        bool   enabled;  // Can disable
        int    halo_key; // Key for particle's halo component (0 to sum over all components)
        double m;        // DM mass [GeV]
        double Gp,Gn;    // DM-nucleon couplings [GeV^-2]
        SpinType spin;   // Spin dependence of interaction
        // Additional parameters for velocity and momentum
        // -dependent interactions.  How to generically
        // parameterize this is far from certain.
        //int nv;          // dsigma/dq^2 ~ v^{nv-2}
        //int nq;          // extra (q/q0)^nq factor
        //double q0;       // extra (q/q0)^nq factor
        //...
    };

    // Structure containing set of DM particle + interaction
    // combinations.
    struct DDParticlesS  // DDDarkMatterS?
    {
      // To ensure consistency, these elements can only be
      //  accessed via an appropriate function.
      private:
        std::vector<DDParticleS> P;
    };
    */


  }
}



#endif // defined __DarkBit_types_hpp__
