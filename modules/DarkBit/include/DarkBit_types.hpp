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
///          (FIXME @blah.edu)
///  \date 2013 Jun
///
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2013 Oct
///  \date 2014 Jan
///
///  \author Lars A. Dal  
///          (l.a.dal@fys.uio.no)
///  \date 2014 Mar
///  *********************************************


#ifndef __DarkBit_types_hpp__
#define __DarkBit_types_hpp__

#include "BaseFunctions.hpp"

#include <cmath>
#include <algorithm>
#include <gsl/gsl_integration.h>

using namespace Gambit::BF;

namespace Gambit
{

  namespace DarkBit
  {    
    class DSgamma3bdyKinFunc : public BaseFunction
    {
      typedef double(*BEptr)(int&, double&, double&);
      typedef std::vector<double> BFargVec;
      public:
        DSgamma3bdyKinFunc(int& chn, double& M, double& m2, BEptr ib, BEptr fsr, bool *doFSR, bool *doIB)
        : BaseFunction("DSgamma3bdyKinFunc", 2)
        {
          M_DM = M;
          IBch = chn;
          IBfunc = ib;
          FSRfunc = fsr;
          m_2 = m2;
          calculateFSR = doFSR;
          calculateIB = doIB;
        }
        double value(const BFargVec &args)
        {
          double E_gamma = args[0];
          double E1 = args[1];
          double x = E_gamma/M_DM;
          double y = (m_2*m_2+4*M_DM*(E_gamma+E1-M_DM))/(4*M_DM*M_DM);
          // TODO: Check if IB and ISR are summed correctly
          double result = 0;
          if(calculateFSR && (FSRfunc != NULL)) 
            result += FSRfunc(IBch,x,y);
          if(calculateIB) 
            result += IBfunc(IBch,x,y);
          return result;
        }
      private:
        bool *calculateIB;
        bool *calculateFSR;
        BEptr IBfunc;
        BEptr FSRfunc;
        double M_DM;
        double m_2;
        int IBch;
    };

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
        TH_Channel(std::vector<std::string> finalStateIDs, BFptr dSigmadE) :
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
        BFptr dSigmadE;  

        // Compare final states
        bool isChannel(std::string p0, std::string p1, std::string p2 =
                "", std::string p3 = "")
        {
            if ( nFinalStates == 2 and p0 == finalStateIDs[0] and p1 == finalStateIDs[1] ) return true;
            if ( nFinalStates == 3 and p0 == finalStateIDs[0] and p1 == finalStateIDs[1] and p2 == finalStateIDs[2] ) return true;
            if ( nFinalStates == 4 and p0 == finalStateIDs[0] and p1 == finalStateIDs[1] and p2 == finalStateIDs[2] and p3 == finalStateIDs[3] ) return true;
            return false;
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

    struct DMhalo
    {
        public:
            // Dummy constructor doing nothing
            DMhalo() {}

            DMhalo(std::string name, double r0, BFptr rho, BFptr drho2dv)
            {
                this->name = name;
                this->r0 = r0;
                this->rho = rho;
                this->drho2dv= drho2dv;
                // TODO: Add smoothing scale
            }

            std::string getName() {return name;}
            BFptr getDensity() {return rho;}
            BFptr getDensitySquared() {return drho2dv;}

        private:
            std::string name;  // Name of this halo (Milky Way, M31, ...)
            double r0;  // Position in comoving Galactic coordinates (l [-180...180 deg], b [deg], R [kpc])
            BFptr rho;
            BFptr drho2dv;
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

    class BFdmradialProfile: public BaseFunction
    {
        public:
            BFdmradialProfile(std::string type, int ndim, BFargVec pars) : BaseFunction("DMradialProfile", ndim), ndim(ndim)
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
            double value(const BFargVec &vec)
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
