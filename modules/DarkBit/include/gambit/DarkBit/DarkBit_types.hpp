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
///  \date 2014 Mar, Jul, Sep, Oct, Dec
///  \date 2015 Jan
///
///  \author Christopher Savage
///          (chris@savage.name)
///  \date 2015 Jan
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
#include "gambit/Utils/base_functions.hpp"
#include "gambit/Utils/funktions.hpp"

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
    //using Gambit::BF::intLimitFunc;
    //using Gambit::BF::BFargVec;

    // Histogram class for cascade decays
    struct SimpleHist
    {
        SimpleHist(){}
        SimpleHist(int nBins, double Emin, double Emax, bool logscale): nBins(nBins)
        {
            if(logscale)
            {
                if(Emin<=0)
                {
                    std::cout << "Error: Lower histogram bin limit must be greater than 0 when using logarithmic binning." << endl;
                    exit(1);
                }
                double factor = pow(Emax/Emin,(1.0/nBins));
                double binL=Emin;
                for(int i=0; i<nBins; i++)
                {
                    binLower.push_back(binL);
                    binVals.push_back(0.0);
                    wtSq.push_back(0.0);
                    binL*=factor;
                }
                binLower.push_back(binL);
            }
            else
            {
                double dE = (Emax-Emin)/nBins;
                for(int i=0; i<nBins; i++)
                {
                    double binL = Emin+i*dE; 
                    binLower.push_back(binL);
                    binVals.push_back(0.0);
                    wtSq.push_back(0.0);                
                }
                binLower.push_back(Emin+nBins*dE);
            }
        }
        // Constructor taking lower bins edges as input.
        // Last element will be used as upper bin edge for upper bin (Vector with N elements will give N-1 bins).
        SimpleHist(std::vector<double> binLower) : binLower(binLower)
        {
            nBins=int(binLower.size())-1;  // FIXME: Lars, I added "-1", is this correct?
            binVals=std::vector<double>(nBins,0.0);
            wtSq   =std::vector<double>(nBins,0.0);
        }
        // Add an entry to histogram
        void addEvent(double E, double weight=1.0)
        {
            int bin = findIndex(E);
            if(bin>=0 and bin<nBins )
            {
                binVals[bin]+=weight;
                wtSq[bin]+=weight*weight;
            }
        }
        // Add an entry to a specified bin
        void addToBin(int bin, double weight=1.0)
        {
            binVals[bin]+=weight;
            wtSq[bin]+=weight*weight;
        }
        // Add a box spectrum to the histogram
        void addBox(double Emin, double Emax, double weight=1.0)
        {
            int imin = findIndex(Emin);
            int imax = findIndex(Emax);
            if(imax<0 or imin>nBins) 
            {
                // Do nothing
            }
            else if(imin==imax)
            {
                addToBin(imin,weight);
            }            
            else
            {
                double binSize_low = 1;
                double binSize_high = 1;
                double dE = Emax-Emin;
                double norm = weight/dE;            
                double tmp;
                // Calculate part of lower bin covered by box
                if(imin>=0)
                    binSize_low = binLower[imin+1]-Emin;
                // Calculate part of upper bin covered by box
                if(imax<nBins) 
                    binSize_high = Emax-binLower[imax];
                // Add contribution to lower bin
                addToBin(imin,binSize_low*norm);
                // Add contribution to upper bin
                addToBin(imax,binSize_high*norm);                    
                // Add contributions to remaining bins
                for(int i=imin+1;i<imax;i++)
                {
                    addToBin(i,binSize(i)*norm);
                }
            }
        }
        // Add content of input histogram as weights.
        // Important: Input histogram MUST have identical binning for this to give correct results.
        void addHistAsWeights_sameBin(SimpleHist &in)
        {
            // Check that the number of bins is equal to avoid segfaults. 
            // It is up to the user to make sure the actual binning is identical.
            if(in.nBins != nBins)
            {
                std::cout << "Error: SimpleHist::addHistAsWeights_sameBin requires identically binned histograms." << endl;
                exit(1);     
            }
            for(int i=0; i<nBins;i++)
            {
                addToBin(i,in.binVals[i]);
            }
        }
        // Get error for a specified bin
        double getError(int bin) const
        {
            return sqrt(wtSq[bin]);
        }
        // Get relative error for a specified bin
        double getRelError(int bin) const
        {
            return ((binVals[bin]!=0) ? sqrt(wtSq[bin])/binVals[bin] : 0);
        }
        // Divide all histogram bins by the respective bin size
        void divideByBinSize()
        {
            for(int i=0;i<nBins;i++)
            {
                binVals[i]/=binSize(i);
                wtSq[i]   /=(binSize(i)*binSize(i));
            }
        }
        // Multiply all bin contents by x
        void multiply(double x)
        {
            for(int i=0;i<nBins;i++)
            {
                binVals[i]*=x;
                wtSq[i]   *=x*x;
            } 
        }       
        // Find bin index for given value
        int findIndex(double val) const
        {
            if(val < binLower[0]) return -1;
            std::vector<double>::const_iterator pos = upper_bound(binLower.begin(),binLower.end(),val);   
            return pos - binLower.begin() -1;       
        }
        // Retrieve size of given bins
        double binSize(int bin) const
        {
            return binLower[bin+1]-binLower[bin];
        }  
        // Get central value of bin
        double binCenter(int bin) const
        {
            return 0.5*(binLower[bin+1]+binLower[bin]);
        }
        // Double get central values of all bins
        std::vector<double> getBinCenters() const
        {
            std::vector<double> centers;
            for(int i=0;i<nBins;i++)
            {
                centers.push_back(binCenter(i));
            }
            return centers;
        }
        const std::vector<double>& getBinValues() const
        {
            return binVals;
        }
        void getEdges(double& lower, double& upper) const
        {
            // FIXME: Lars, I replaced binVales --> binLower, correct?
            lower=binLower[0];
            upper=binLower[nBins];
        }
        std::vector<double> binLower;
        std::vector<double> binVals;
        std::vector<double> wtSq; // Sum of the squares of all weights
        int nBins;
    };

    typedef std::map<std::string, std::map<std::string, Gambit::DarkBit::SimpleHist> > simpleHistContainter;
    typedef std::map<std::string, int> stringIntMap;
    typedef std::map<std::string, Funk::Funk> stringFunkMap;

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


    // Obsolete structure; replaced with RD_spectrum_type
    struct RDspectype
    {
    //coannihilating particles
      int n_co;
      int part_co[1000],dof_co[1000];
      double mass_co[1000];
    //location and type of resonances
      int n_res;
      int part_res[10]; // never used. Do we need this?
      double mass_res[10], width_res[10];
    //location of thresholds
      int n_thr;
      double E_thr[100];
    };

    struct TH_Resonance
    {
      TH_Resonance() : energy(0.), width (0.) {}
      TH_Resonance(const double & energy, const double & width) : energy(energy), width(width) {}
      double energy;
      double width;
    };

    struct TH_resonances_thresholds
    {
      //location of resonances and thresholds in energy [GeV]
      TH_resonances_thresholds() {}
      TH_resonances_thresholds(const TH_resonances_thresholds & copy) : resonances(copy.resonances), threshold_energy(copy.threshold_energy) {}
      TH_resonances_thresholds(const std::vector<TH_Resonance> & resonances, const std::vector<double> & thresholds) : resonances(resonances), threshold_energy(thresholds) {}

      std::vector<TH_Resonance> resonances;
      std::vector<double> threshold_energy;
    };

    struct RD_coannihilating_particle
    {
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
        TH_Channel(std::vector<std::string> finalStateIDs, Funk::Funk genRate) :
            finalStateIDs(finalStateIDs), nFinalStates(finalStateIDs.size()),
            genRate(genRate)
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
        Funk::Funk genRate;

        // Compare final states
        bool isChannel(std::string p0, std::string p1, std::string p2 ="", std::string p3 = "") const
        {
            if ( nFinalStates == 2 and p0 == finalStateIDs[0] and p1 == finalStateIDs[1] ) return true;
            if ( nFinalStates == 3 and p0 == finalStateIDs[0] and p1 == finalStateIDs[1] and p2 == finalStateIDs[2] ) return true;
            if ( nFinalStates == 4 and p0 == finalStateIDs[0] and p1 == finalStateIDs[1] and p2 == finalStateIDs[2] and p3 == finalStateIDs[3] ) return true;
            return false;
        }

        bool channelContains(std::string p) const
        {
            return std::find(finalStateIDs.begin(), finalStateIDs.end(), p) != finalStateIDs.end();
        }

        void printChannel() const
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

        //List of resonances and thresholds => rename TH_resonances_thresholds
        TH_resonances_thresholds thresholdResonances;

        // Total decay rate or sigma v
        Funk::Funk genRateTotal; // was a double, but needs to be a Funk of velocity
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
    typedef double(*nuyield_functype)(const double&, const int&, void*&);
    
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
      double M_DM;
      double gps;
      double gns;
      double gpa;
      double gna;
    };

    //------------------------------------------------------
    // Structures containing the hadronic matrix elements
    // (fn=<n|qq|n>) and nucleon spin content (delta q)
    struct fp
    {
      double u;
      double d;
      double c;
      double s;
      double t;
      double b;
    };

    struct fn
    {
      double u;
      double d;
      double c;
      double s;
      double t;
      double b;
    };

    struct deltaq
    {
      double u;
      double d;
      double s;
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

    struct SimYieldChannel
    {
        SimYieldChannel(Funk::Funk dNdE, std::string p1, std::string p2, std::string finalState, double Ecm_min, double Ecm_max):
            dNdE(dNdE), p1(p1), p2(p2), finalState(finalState), Ecm_min(Ecm_min), Ecm_max(Ecm_max) {}
        Funk::Funk dNdE;            
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
