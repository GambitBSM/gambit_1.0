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
///          (FIXME @blah.edu)
///  \date 2012 Mar
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

}

#endif // defined __DarkBit_types_hpp__
