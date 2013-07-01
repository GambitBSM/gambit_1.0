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

  struct DS_MSSMPAR
  {
    double tanbe, mu, m2, m1, m3, ma;
    double mass2u[3], mass2q[3], mass2d[3],  mass2l[3], mass2e[3];
    double asoftu[3], asoftd[3], asofte[3];
  };

  struct DS_MSPCTM
  {
    double mass[51];
    double runmass[51];
    double mu2gev,md2gev,ms2gev,mcmc,mbmb,mtmt;
  };
  
}

#endif //ifndef __MSSM_classes_hpp__

