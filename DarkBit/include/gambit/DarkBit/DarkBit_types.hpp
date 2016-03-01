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

#include "gambit/DarkBit/decay_chain.hpp"
#include "gambit/DarkBit/SimpleHist.hpp"
#include "gambit/DarkBit/ProcessCatalog.hpp"
#include "gambit/Elements/funktions.hpp"

#include <boost/enable_shared_from_this.hpp>
#include <boost/shared_ptr.hpp>
#include <gsl/gsl_integration.h>

namespace Gambit
{

  namespace DarkBit
  {

    //Local preferred sources of tools.
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


//    struct RD_Boltzmann_type
//    {
//      RD_Boltzmann_type() {}
//      RD_Boltzmann_type(const RD_coannihilating_particle & DMPart, const std::vector<TH_Resonance> & res, const std::vector<double> & thresholds) : DMParticle(DMPart), resonances(res), threshold_energy(thresholds) {}

//      RD_coannihilating_particle DMParticle;
//      std::vector<TH_Resonance> resonances;
//      std::vector<double> threshold_energy;
//    };
    

    // A double in, double out function pointer.  FIXME Probably actually better if this goes in
    // shared_types.hpp eventually, as it will likely be needed by other modules too at some stage. 
    typedef double(*fptr_dd)(double&);


    //////////////////////////////////////////////
    // General Dark Matter Halos and Halo Catalog
    //////////////////////////////////////////////

    struct MWhalo
    {
        MWhalo(Funk::Funk rho, Funk::Funk drho2dv) : rho(rho), drho2dv(drho2dv)
        {
            rho->assert_args(Funk::vec<std::string>("r"), Funk::vec<std::string>("x", "y", "z"));
            drho2dv->assert_args(Funk::vec<std::string>("r", "v"), Funk::vec<std::string>("x", "y", "z", "v"));
        };
        MWhalo(Funk::Funk rho) : rho(rho)
        {
            rho->assert_args(Funk::vec<std::string>("r"), Funk::vec<std::string>("x", "y", "z"));
            auto delta_v = Funk::delta("v", 1e-3, 1e-5);  // Add some fake velocity dependence
            drho2dv = rho*rho * delta_v;
        };
        Funk::Funk rho;
        Funk::Funk drho2dv;
    };

    /*
    // This catalog is supposed to contain all DM halos that are relevant for a
    // given analysis (Milky way halo, satellites, galaxy clusters, their
    // memeber galaxies, etc).  However, unobserved subhalos are *not* included
    // here, but part of DMhalo
    struct DMhaloCatalog
    {
      public:
        DMhaloCatalog() {}  // Dummy constructor

        void addDMhalo(shared_ptr<DMhalo> newHalo)
        {
          this->myHalos.push_back(newHalo);
        }

        std::vector<shared_ptr<DMhalo> > getHaloList() {return myHalos;}

        void show()
        {
            std::cout << "List of registered halos:" << std::endl;
            for(std::vector<shared_ptr<DMhalo> >::iterator it = myHalos.begin(); it != myHalos.end(); ++it)
            {
                std::cout << (*it)->getName() << std::endl;
            }
        }

      private:
        std::vector<shared_ptr<DMhalo> > myHalos;
    };
    */


    /////////////////////
    // Sky maps and sums
    /////////////////////

    struct SuperHealpix
    {
        // TODO: Implement normal healpix for now
    };

    struct Jlayer
    {
        Jlayer() {}  // Dummy constructor

        Jlayer(shared_ptr<SuperHealpix> map, double redshift)
        {
            this->myHealpix = map;
            this->redshift = redshift;
        }

        shared_ptr<SuperHealpix> getMap() {return myHealpix;}

        double getRedshift() {return redshift;}

        private:
            shared_ptr<SuperHealpix> myHealpix;
            double redshift;  // redshift z
    };

    // J-value catalog
    struct JlayerCatalog
    {
        public:
            void addJlayer(shared_ptr<Jlayer> J)
            {
                this->myJlayers.push_back(J);
            }

            void setJfunc(shared_ptr<double> func)
            {
                this->Jfunc = func;
            }

        private:
            std::vector<shared_ptr<Jlayer> > myJlayers;
            shared_ptr<double> Jfunc;
    };


    //////////////////////////
    // Physics implementation 
    //////////////////////////

    /*
    class BFdmradialProfile: public BF::BaseFunction
    {
        public:
            BFdmradialProfile(std::string type, int ndim, BF::BFargVec pars) : BF::BaseFunction("DMradialProfile", ndim), ndim(ndim)
            {
                if (ndim != 1 and ndim != 3) failHard("ERROR: DM profile can be only generated as 1-dim radial profile or 3-dim density function.");

                if (type == "NFW")
                {
                    if (pars.size() != 2) failHard("NFW profile requires two parameters (scale radius and scale density).");
                    this->rs = pars[0];
                    this->rhos = pars[1];
                    this->ptrF = &BFdmradialProfile::NFW;
                }
                // TODO: Implement 
                // - Einasto profile
                // - cored isothermal profile
                // - alpha-beta-gamma profile
            }

        private:
            // Redirection to profiles
            double value(const BF::BFargVec &vec)
            {
                if (ndim == 1)
                {
                    return (this->*ptrF)(vec[0]);
                }
                else
                {
                    double r = 0;
                    for (int i = 0; i < ndim; i++)
                    {
                        r += vec[i] * vec[i];
                    }
                    r = sqrt(r);
                    return (this->*ptrF)(r);
                }
            }

            // Dark matter profile parameters
            double rs;  // Scale radius [kpc]
            double rhos;  // Scale density [GeV/cm^3]

            // Dimensionality (either 1 or 3)
            int ndim;

            // Pointer to member function that implements DM profile
            double (BFdmradialProfile::*ptrF)(double);  

            // The profiles
            double NFW(double r)
            {
            return rhos / (r/rs) / (1+r/rs) / (1+r/rs);
            }
    };
    */


    //////////////////////////////////////////////
    // Neutrino telescope data structures
    //////////////////////////////////////////////

    // Neutrino telescope yield info container
    struct nuyield_info
    {
      public:
        bool threadsafe;
        nuyield_function_pointer pointer;
    };
    
    // Neutrino telescope data container
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


    //////////////////////////////////////////////
    // Direct detection data structures
    //////////////////////////////////////////////
    
    // NOTE:
    // Except for DD_couplings, the structures here are
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

    //------------------------------------------------------
    // Initial DM coupling structure definition used for early
    // GAMBIT development; to be superceded by structures below.
    struct DD_couplings
    {
      double gps;
      double gns;
      double gpa;
      double gna;
    };

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
    // TODO:
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

    // FIXME: Ecm_min and _max do not appear to be used.
    struct SimYieldChannel
    {
        SimYieldChannel(Funk::Funk dNdE, std::string p1, std::string p2, std::string finalState, double Ecm_min, double Ecm_max):
            dNdE(dNdE), p1(p1), p2(p2), finalState(finalState), Ecm_min(Ecm_min), Ecm_max(Ecm_max) 
        {
           dNdE_bound = dNdE->bind("E", "Ecm");
        }
        Funk::Funk dNdE;       
        Funk::BoundFunk dNdE_bound; // Pre-bound version for use in cascade decays
        std::string p1;
        std::string p2;
        std::string finalState;
        double Ecm_min;
        double Ecm_max;        
    };

    // Channel container
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
                    // FIXMEW
                    std::cout << "WARNING: Channel already exists.  Ignoring." << std::endl;
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
                    // FIXMEW
                    std::cout << "WARNING: Channel not known.  Returning dummy." << std::endl;
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
                    // FIXMEW
                    std::cout << "WARNING: Channel not known.  Returning zero." << std::endl;
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
  }
}

#endif // defined __DarkBit_types_hpp__
