//  *********************************************
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Common class definitions for MSSM related
///  observables, part. the (roughly SLHA format)
///  low energy spectrum.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer  
///          (benjamin.farmer@monash.edu)
///  \date 2013 Jul
///
///  *********************************************

#ifndef __MSSM_classes_hpp__
#define __MSSM_classes_hpp__

namespace GAMBIT
{
  /* Moved to common_return_types
  /// A placeholder "MSSM" low-energy spectrum object. Defined at scale Q.
  struct MSSMspecQ
  {
    // Probably this will follow the SLHA format, so we'll have the "blocks"
    // stashed in sub-structs
    double Q; // Scale at which masses are defined. Might not apply to all 
              // structs, or all elements within them.
    // struct SMINPUTS {};  // In theory these are unnecessary but might be nice for debugging
    // struct MINPAR {};
    // struct EXTPAR {};
    struct BLOCK_MASS {
      double stop1;
      double neut1;
      //...etc...
    } MASS;
    // ...etc...
    struct BLOCK_STOPMIX {} STOPMIX;
    // ...etc...
  };
  */
  
  // Placeholder type for SM parameters. Will be used all over GAMBIT so will
  // need to think hard about how this works (different energy scales,
  // renormalisation schemese etc, automatic conversion?)
  struct SMpars
  {
    double alphaem;
    double alphas;
    double mZ;
    double mtop;
    // ...etc...
  };
  
  // Placeholder for CMSSM parameters object
  struct CMSSMpars
  {
    double m0;
    double m12;
    // ...etc...
  };
  
  
  // Placeholder type for MSSM soft SUSY breaking parameters. Will be used a 
  // lot by models which simply specify these directly, e.g. pMSSM style.
  struct MSSMsoftmassesQ
  {
    // Probably this will follow the SLHA format, so we'll have the "blocks"
    // stashed in sub-structs
    double Q; // Scale at which masses are defined. Might not apply to all 
              // structs, or all elements within them.
    struct SMINPUTSbox {} SMINPUTS;
    //struct MINPAR {}; // In theory this is unnecessary but might be nice for debugging
    //struct EXTPAR {};
    struct softmassesbox {
      // Gaugino masses
          double M1;
          double M2;
          double M3;
      // Trilinear couplings
          double AU3;
          double AD3;
          double AE3;
      // etc...
    } softmasses;
    // ...etc...
  
  //MSSMsoftmassesQ() {};
  };

}

#endif //ifndef __MSSM_classes_hpp__

