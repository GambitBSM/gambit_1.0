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
///
///  \author Lars A. Dal  
///          (l.a.dal@fys.uio.no)
///  \date 2014 Mar, Jul, Sep, Oct
///  *********************************************


#ifndef __DarkBit_types_hpp__
#define __DarkBit_types_hpp__

#include <cmath>
#include <algorithm>

#include <boost/enable_shared_from_this.hpp>
#include <boost/shared_ptr.hpp>
#include <gsl/gsl_integration.h>
#include "base_functions.hpp"
#include "funktions.hpp"
#include "decay_chain.hpp"

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
    //using Gambit::BF::intLimitFunc;
    //using Gambit::BF::BFargVec;

    // Temporary minimal histogram class for cascade decay testing
    struct SimpleHist
    {
        SimpleHist(){}
        SimpleHist(unsigned nBins, double Emin, double dE): nBins(nBins), Emin(Emin), dE(dE)
        {
            for(unsigned i=0; i<nBins; i++)
            {
                vals.push_back(0.0);
            }
        }
        void addEvent(double E)
        {
            long int bin = (E-Emin)/dE;
            if(bin>=0 and unsigned(abs(bin))<nBins )
            {
                vals[bin]+=1.0;
            }
        }
        void addEvent(double E, double weight)
        {
            long int bin = (E-Emin)/dE;
            if(bin>0 and unsigned(abs(bin))<nBins )
            {
                vals[bin]+=weight;
            }
        }
        std::vector<double> vals;
        unsigned nBins;
        double Emin;
        double dE;
    };
    typedef std::map<std::string, std::map<std::string, Gambit::DarkBit::SimpleHist> > simpleHistContainter;
    typedef std::map<std::string, unsigned> stringUnsignedMap;

    struct DD_couplings
    {
      double M_DM;
      double gps;
      double gns;
      double gpa;
      double gna;
    };

    /*
    // Integration limits for E1 for the DS gamma 3-body decays.
    class DSg3_IntLims_E1 : public intLimitFunc
    {
        public:
            // Constructor
            DSg3_IntLims_E1(double M_DM,double m1,double m2) : M_DM(M_DM), m1(m1), m2(m2){}
            void operator ()(double &x0, double &x1, bool &allowed, std::map<unsigned int,double> args)
            {
                // First, check if the argument list contains argument 0
                // Argument indices correspond to the indices you would use if passing the arguments to the function (to be integrated) without any integrals.
                if (!argInList(args,0))
                {
                    std::cout << "Error: Argument 0 not found in argument list" << std::endl;
                }
                // Calculate the integration limits on the DS kinematic variable y (see dsIBf_intdy)
                double Eg = args[0];
                double x = Eg/M_DM;
                // Check if kinematic constraints are satisfied
                if((1.-pow(m1+m2,2)/(4*M_DM*M_DM))<=x)
                {
                    allowed = false;
                    return;
                }
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
                allowed = true;
            }
        private:
            double M_DM, m1, m2;
    };
    */

    /*
    class DSgamma3bdyKinFunc : public BF::BaseFunction
    {
      typedef double(*BEptr)(int&, double&, double&);
      public:
        DSgamma3bdyKinFunc(int IBch, double M_DM, double m_1, double m_2, BEptr IBfunc, double sigmav_norm)
        : BaseFunction("DSgamma3bdyKinFunc", 2), IBfunc(IBfunc), sigmav_norm(sigmav_norm), M_DM(M_DM), m_1(m_1), m_2(m_2), IBch(IBch)
        {
            if(IBfunc == NULL)
            {
                std::cout << "Error: No function pointer passed to DSgamma3bdyKinFunc" << std::endl;
                exit(1);
                // TODO: Throw error
            }
        }
        double value(const BFargVec &args)
        {
            double Eg = args[0]; // Photon energy
            double E1 = args[1];
            double E2 = 2*M_DM - Eg - E1;  
            double p12 = E1*E1-m_1*m_1;
            double p22 = E2*E2-m_2*m_2;
            double p22min = Eg*Eg+p12-2*Eg*sqrt(p12);
            double p22max = Eg*Eg+p12+2*Eg*sqrt(p12);
            // Check if the process is kinematically allowed
            if((E1 < m_1) || (E2 < m_2) || (p22<p22min) || (p22>p22max))
            {
                return 0;
            }
            double x = Eg/M_DM;
            double y = (m_2*m_2 + 4*M_DM * (M_DM - E2) ) / (4*M_DM*M_DM);        
            double result = IBfunc(IBch,x,y);          
            return sigmav_norm * result / (M_DM*M_DM); // M_DM^-2 is from the Jacobi determinant
        }
      private:
        BEptr IBfunc;
        double sigmav_norm;
        double M_DM;
        double m_1;        
        double m_2;
        int IBch;
    };
    */

    // A simple example
    struct Wstruct
    {
      double valA;
      double valB;
    };

    struct RDspectype
    {
    //coannihilating particles
      int n_co;
      int part_co[1000],dof_co[1000];
      double mass_co[1000];
    //location and type of resonances
      int n_res;
      int part_res[10];
      double mass_res[10], width_res[10];
    //location of thresholds
      int n_thr;
      double E_thr[100];
    };

    struct RDrestype
    {
    //location of resonances and thresholds
      int n_res, n_thr;
      double E_res[10], dE_res[10], E_thr[100];
    };

    // A double in, double out function pointer.  FIXME Probably actually better if this goes in 
    // shared_types.hpp eventually, as it will likely be needed by other modules too at some stage. 
    typedef double(*fptr_dd)(double&);


    /////////////////////////////////////////////////
    // General DarkBit annihilation/decay descriptor
    /////////////////////////////////////////////////
    
    // TH_Channel describes a annihilation/decay channels, e.g. 
    // chi --> gamma gamma, chi chi --> mu+ mu-
    //
    // TH_Process groupes channels together according to initial states,
    // e.g. chi --> everything, chi chi --> everything
    //
    // TH_ProcessCatalog describes all initial states relevant for DarkBit
    

    struct TH_ParticleProperty
    {
        TH_ParticleProperty(double mass, unsigned int spin2) : mass(mass), spin2(spin2) {};

        double mass;
        unsigned int spin2;  // Spin times two
    };

    struct TH_Channel
    {
        // Constructor
        TH_Channel(std::vector<std::string> finalStateIDs, Funk::Funk dSigmadE) :
            finalStateIDs(finalStateIDs), nFinalStates(finalStateIDs.size()),
            dSigmadE(dSigmadE)
        {
            if ( nFinalStates < 2 )
            {
                std::cout << "ERROR: Need at least two final state particles. " << std::endl;
                exit(1);
            }
        }

        // Final state identifiers
        std::vector<std::string> finalStateIDs;

        // Number of final state particles in this channel
        int nFinalStates;

        // Energy dependence of final state particles
        // Includes v_rel as last argument in case of annihilation
        // TODO: Implement checks
        Funk::Funk dSigmadE;  

        // Compare final states
        bool isChannel(std::string p0, std::string p1, std::string p2 ="", std::string p3 = "")
        {
            if ( nFinalStates == 2 and p0 == finalStateIDs[0] and p1 == finalStateIDs[1] ) return true;
            if ( nFinalStates == 3 and p0 == finalStateIDs[0] and p1 == finalStateIDs[1] and p2 == finalStateIDs[2] ) return true;
            if ( nFinalStates == 4 and p0 == finalStateIDs[0] and p1 == finalStateIDs[1] and p2 == finalStateIDs[2] and p3 == finalStateIDs[3] ) return true;
            return false;
        }

        void printChannel()
        {
            std::cout << "Channel: ";
            for ( auto it = finalStateIDs.begin(); it != finalStateIDs.end(); it++ )
            {
                std::cout << *it << " ";
            }
            std::cout << std::endl;
        }

        // New version that allows permutations of the final states
        //bool isChannel(std::string p0, std::string p1, std::string p2 = "", std::string p3 = "")
        //{
        //    std::vector<std::string> inIDs;
        //    if      (p2=="") inIDs = {p0,p1};
        //    else if (p3=="") inIDs = {p0,p1,p2};
        //    else             inIDs = {p0,p1,p2,p3};
        //    return std::is_permutation(finalStateIDs.begin(), finalStateIDs.end(), inIDs.begin());
        //}
        // CW: std::vector initializatino with lists, as well as
        // is_permutatino, is not yet supported by g++ 4.5.4, so I am going
        // back to the original version of isChannel().

        // Generic flags
        std::map<std::string, bool> flags;
    };

    struct TH_Process
    {
        // Constructor for decay process
        TH_Process(std::string particle1ID) : isAnnihilation(false), particle1ID(particle1ID), particle2ID("") {}

        // Constructor for annihilation process
        TH_Process(std::string particle1ID, std::string particle2ID) :
            isAnnihilation(true), particle1ID(particle1ID),
            particle2ID(particle2ID)
        {
            if (particle1ID.compare(particle2ID) > 0)
            {
                std::cout << "ERROR: particle identifiers should be in alphabetical order." << std::endl;
                exit(1);
            }
        }

        // Compare initial states
        bool isProcess(std::string p1, std::string p2 = "") const
        {
            return (p1 == this->particle1ID and p2 == this->particle2ID);
        }

        // Annihilation or decay?
        bool isAnnihilation;

        // Decaying particle or particle pair
        std::string particle1ID;
        std::string particle2ID;

        // Generic flags
        std::map<std::string, bool> flags;

        // List of channels
        std::vector<TH_Channel> channelList;

        // Total decay rate or sigma v
        double genRateTotal;
    };

    struct TH_ProcessCatalog
    {
        std::vector<TH_Process> processList;
        std::map<std::string, TH_ParticleProperty> particleProperties;

        TH_Process getProcess(std::string id1, std::string id2 = "") const
        {
            for (std::vector<TH_Process>::const_iterator it = processList.begin(); it != processList.end(); ++it)
                if ( it -> isProcess(id1, id2) ) return processList[0];
            std::cout << "Process with initial states " << id1 << " " << id2 << " missing." << std::endl;
            exit(1);
        }

        TH_ParticleProperty getParticleProperty(std::string id) const
        {
            return particleProperties.at(id);
        }

    };


    //////////////////////////////////////////////
    // General Dark Matter Halos and Halo Catalog
    //////////////////////////////////////////////

    /*
    struct DMhalo
    {
        public:
            // Dummy constructor doing nothing
            DMhalo() {}

            DMhalo(std::string name, double r0, BF::BFptr rho, BF::BFptr drho2dv)
            {
                this->name = name;
                this->r0 = r0;
                this->rho = rho;
                this->drho2dv= drho2dv;
                // TODO: Add smoothing scale
            }

            std::string getName() {return name;}
            BF::BFptr getDensity() {return rho;}
            BF::BFptr getDensitySquared() {return drho2dv;}

        private:
            std::string name;  // Name of this halo (Milky Way, M31, ...)
            double r0;  // Position in comoving Galactic coordinates (l [-180...180 deg], b [deg], R [kpc])
            BF::BFptr rho;
            BF::BFptr drho2dv;
    };

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

    // Neutrino yield function signature
    typedef double(*nuyield_functype)(double&, int&);
    
    // Neutrino telescope data container
    struct nudata
    {
      public:
        int nobs;
        double signal;
        double bg;
        double loglike;
        double pvalue;
    };

  }
}

#endif // defined __DarkBit_types_hpp__



// Old code

    // TODO:
    // - add access functions
    // - add ini functions
    // TODO later:
    // - select convention for energy dependence
    // - select relevant particle properties

//    struct Decay
//    {
//      public:
//        // Renormalize branching fractions to sum up to one
//        void normalize()
//        {
//          double sum = 0;
//          for (std::map<std::string, double>::iterator it = BRmap.begin(); it
//              != BRmap.end(); it++)
//          {
//            sum += it->second;
//          }
//          for (std::map<std::string, double>::iterator it = BRmap.begin(); it
//              != BRmap.end(); it++)
//          {
//            it->second = it->second/sum;
//          }
//        }
//
//        // Set branching fraction
//        void set(std::string key, double BR)
//        {
//          if (BR >= 0)
//          {
//            BRmap[key] = BR;
//          }
//          else
//          {
//            std::cout << "DarkBit WARNING: I am ignoring a negative value for BR " 
//            << key << " :" << BR << " !" << std::endl;
//          }
//        }
//
//        // Get list of non-zero branching fraction keys
//        std::vector<std::string> getBRlist() const
//        {
//          std::vector<std::string> list;
//          for (std::map<std::string, double>::const_iterator it = BRmap.begin(); it
//              != BRmap.end(); it++)
//          {
//            list.push_back(it->first);
//          }
//          return list;
//        }
//
//        // Read branching fraction
//        double get(std::string key) const
//        {
//          std::map<std::string, double>::const_iterator it = BRmap.find(key);
//          if (it != BRmap.end())
//          {
//            return it->second;
//          }
//          else
//          {
//            return 0;  // Returns zero by default
//          }
//        }
//
//        // Check whether normalized
//        bool isNormalized() 
//        {
//          double sum = 0;
//          for (std::map<std::string, double>::iterator it = BRmap.begin(); it
//              != BRmap.end(); it++)
//          {
//            sum += it->second;
//          }
//          return (abs(sum-1) < 1e-6);
//        }
//
//        // DM mass
//        double DMmass;
//
//        // Annihilation cross-section averaged over relative velocity
//        double sigmaV;
//
//      private:
//        // Map with branching ratios
//        std::map<std::string, double> BRmap;
//    };
