//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
//
//  Header for the definition of container 
//  classes for the DarkBit module
//
//  *********************************************
//
//  Authors
//  =======
//
//  (add name and date if you modify)
//
//  Christoph Weniger
//  Mar 24 2012 
//  Torsten Bringmann
//  Jun 2013
//
//  *********************************************

#ifndef DARKBIT_TYPES
#define DARKBIT_TYPES

namespace Gambit{
  namespace types{
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



  }
}

#endif /* defined(DARKBIT_TYPES) */
