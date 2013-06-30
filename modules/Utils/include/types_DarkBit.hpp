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

namespace GAMBIT{
  namespace types{
    // A simple example
    struct Wstruct
    {
      double valA;
      double valB;
    };

    struct RDrestype
    {
      double mass_res[1000];
      double width_res[1000];
      int part_res[1000];
      int copart_res[1000];
      double E_thr[1000];
      int n_res;
      int n_thr;
    };

  }
}

#endif /* defined(DARKBIT_TYPES) */
