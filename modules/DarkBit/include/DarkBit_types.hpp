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
///
///  *********************************************


#ifndef __DarkBit_types_hpp__
#define __DarkBit_types_hpp__

namespace Gambit
{

  namespace DarkBit
  {

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


    // A general DarkBit energy spectrum.  It can be either constructed from a
    // table or from a function.
    class dNdE
    {
      public:
        // Dummy constructor that does nothing
        dNdE() : fromTable(false) {}

        // Construction from table
        dNdE(std::vector<double> Xgrid, std::vector<double> Ygrid) : fromTable(true)
        {
          this->Xgrid = Xgrid;
          this->Ygrid = Ygrid;
          this->Emin = Xgrid.front();
          this->Emax = Xgrid.back();
        };

        // Construction from external function
        dNdE(double (*ptrdNdE)(double), double Emin, double Emax) : fromTable(false)
        {
          this->ptrdNdE = ptrdNdE;
          this->Emin = Emin;
          this->Emax = Emax;
          // TODO: Define Xgrid + Ygrid and poles
        };

        // Returns energy boundaries
        std::pair<double, double> getBounds()
        {
          //std::pair<double, double> bounds (this->Emin, this->Emax);
          //return bounds;
        }

        // Returns proposal x grid
        std::vector<double> getXgrid()
        {
          return this->Xgrid;
        }; 

        // Returns corresponding y values
        std::vector<double> getYgrid()
        {
          return this->Ygrid;
        }

        // Returns poles critical for integration
        std::vector<std::pair<double, double> > getPoles()
        {
          return this->polePositions;
        }

        // dNdE [1/GeV] as function of E [GeV]
        double operator()(double energy) const
        {
          if (not this->fromTable)
          {
            return (*(this->ptrdNdE))(energy);
          }
          else
          {
            if (energy<Xgrid.front() or energy>Xgrid.back()) return 0;
            int i = 0; for (; Xgrid[i] > energy; i++) {};  // Find index
            // Linear interpolation in log-log space
            double x0 = Xgrid[i];
            double x1 = Xgrid[i+1];
            double y0 = Ygrid[i];
            double y1 = Ygrid[i+1];
            return y0 * exp(log(y1/y0) * log(energy/x0) / log(x1/x0));
          }
        };  

        // dNdE integrated over interval E0, E1 [GeV]
        double integrate(double E0, double E1) const
        {
          if (fromTable)
          {
            // Simple trapezoidal integration (in log-log space)
            double sum = 0;
            if (E1<Xgrid.front() or E0>Xgrid.back()) return 0;
            int i0 = 0; for (; Xgrid[i0] > E0; i0++) {};  // E[i0] > E0
            int i1 = 0; for (; Xgrid[i1] > E1; i1++) {};  // E[i1] > E1
            double x0 = E0;
            double y0 = this->operator()(E0);  // Get interpolated value
            for (int i = i0; i < i1; i++)
            {
              double x1 = Xgrid[i];
              double y1 = Ygrid[i];
              sum += (x1-x0)*(y0+y1)/2;
              double x0 = x1;
              double y0 = y1;
            }
            double x1 = E1;
            double y1 = this->operator()(E1);
            //sum += (x1-x0)*(y0+y1)/2;  // Linear interpolation
            double gamma = log(y1/y0)/log(x1/x0);  // Logarithmic interpolation
            sum += y0/(gamma+1) * (pow(x1/x0, gamma+1)-1) * x0;
            return sum;
          }
          else
          {
            return 0;  // TODO: Implement integration of spectrum
          }
        }

      private:
        // The boundaries of the valid region
        double Emin;  // Minimum energy [GeV]
        double Emax;  // Maximum energy [GeV]

        // A proposal grid for fast integration with trapez methods.  It should
        // be denser around poles.
        std::vector<double> Xgrid;  // Proposal energy grid [GeV] 
        std::vector<double> Ygrid;  // dNdE values at grid points [GeV]

        // Position (first) and width (second) of poles and breaks in the
        // spectrum to guide integration routines [GeV].
        std::vector<std::pair<double,double> > polePositions;

        // Pointer to external dNdE function
        double (*ptrdNdE)(double);

        // Constructed from table or function?
        bool fromTable;
    };


    // A general DarkBit annihilation/decay descriptor.
    struct BRs
    {
      public:
        // Renormalize branching fractions to sum up to one
        void normalize()
        {
          double sum = 0;
          for (std::map<std::string, double>::iterator it = BRmap.begin(); it
              != BRmap.end(); it++)
          {
            sum += it->second;
          }
          for (std::map<std::string, double>::iterator it = BRmap.begin(); it
              != BRmap.end(); it++)
          {
            it->second = it->second/sum;
          }
        }

        // Set branching fraction
        void set(std::string key, double BR)
        {
          if (BR >= 0)
          {
            BRmap[key] = BR;
          }
          else
          {
            std::cout << 
              "DarkBit WARNING: I am ignoring a negative value for BR " << key 
              << " :" << BR << " !" << std::endl;
          }
        }

        // Get list of non-zero branching fraction keys
        std::vector<std::string> getBRlist() const
        {
          std::vector<std::string> list;
          for (std::map<std::string, double>::const_iterator it = BRmap.begin(); it
              != BRmap.end(); it++)
          {
            list.push_back(it->first);
          }
          return list;
        }

        // Read branching fraction
        double get(std::string key) const
        {
          std::map<std::string, double>::const_iterator it = BRmap.find(key);
          if (it != BRmap.end())
          {
            return it->second;
          }
          else
          {
            return 0;  // Returns zero by default
          }
        }

        // Check whether normalized
        bool isNormalized() 
        {
          double sum = 0;
          for (std::map<std::string, double>::iterator it = BRmap.begin(); it
              != BRmap.end(); it++)
          {
            sum += it->second;
          }
          return (abs(sum-1) < 1e-6);
        }

        // DM mass
        double DMmass;

        // Annihilation cross-section averaged over relative velocity
        double sigmaV;

      private:
        // Map with branching ratios
        std::map<std::string, double> BRmap;
    };

    struct Triple
    {
      double x, y, z;
    };

    struct DMhalo
    {
      // Dummy constructor doing nothing
      DMhalo() {}

      DMhalo(std::string name, Triple r0)
      {
        this->name = name;
        this->r0 = r0;
      }

      std::string getName() {return name;}

      // without velocity dependence
      double rho(Triple r)
      {
        return 0;
      }

      // including velocity dependence
      double rho(Triple r, Triple v)
      {
        return 0;
      }

      int getSymmetryFlag()
      {
        return symmetryFlag;
      }

      private:
        std::string name;  // Name of this halo (Milky Way, M31, ...)
        Triple r0;  // Position in comoving Galactic coordinates (l [-180...180 deg], b [deg], R [kpc])
        int symmetryFlag;  // Bit 0: spherically symmetric, bit 1: velocity isotropic
        std::vector<double> Rgrid;
        std::vector<double> Rhogrid;
        bool fromTable;  // Constructed by table or function?
    };

    // This catalog is supposed to contain all DM halos that are relevant for a
    // given analysis (Milky way halo, satellites, galaxy clusters, their
    // memeber galaxies, etc).  However, unobserved subhalos are *not* included
    // here, but part of DMhalo
    struct DMhaloCatalog
    {
      public:
        DMhaloCatalog() {}  // Dummy constructor

        bool addDMhalo(DMhalo newHalo)
        {
          this->myHalos.push_back(newHalo);
        }

      private:
        std::vector<DMhalo> myHalos;
    };

    // Gamma-ray maps
    struct GammaMaps
    {
      // General 2d gamma-ray maps with arbitrary projection and dynamical
      // resolution
    };

    // Gamma-ray map catalog
    struct GammaMapsCatalog
    {
      // List of gamma-ray maps
    };

    // J-values
    struct JvalueMaps
    {
      // Same structure as gamma-ray maps - including z-dependence?
    };

    // J-value catalog
    struct JvalueCatalog
    {
      // Catalog of JvalueMaps
    };
  }
}

#endif // defined __DarkBit_types_hpp__
