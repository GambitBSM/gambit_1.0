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
        std::vector<double> getPoles()
        {
          return this->polePositions;
        }

        // dNdE [1/GeV] as function of E [GeV]
        double operator()(double energy)
        {
          if (not this->fromTable)
          {
            return (*(this->ptrdNdE))(energy);
          }
          else
          {
            // TODO: Implement interpolation (linear in log-log space, to start
            // with)
            return 0;
          }
        };  

      private:
        // The boundaries of the valid region
        double Emin;  // Minimum energy [GeV]
        double Emax;  // Maximum energy [GeV]

        // A proposal grid for fast integration with trapez methods.  It should
        // be denser around poles.
        std::vector<double> Xgrid;  // Proposal energy grid [GeV] 
        std::vector<double> Ygrid;  // dNdE values at grid points [GeV]

        // Position of poles and breaks in the spectrum to guide integration
        // routines.
        std::vector<double> polePositions;

        // Pointer to external dNdE function
        double (*ptrdNdE)(double);

        // Constructed from table or function?
        const bool fromTable;
    };
  }
}

#endif // defined __DarkBit_types_hpp__
