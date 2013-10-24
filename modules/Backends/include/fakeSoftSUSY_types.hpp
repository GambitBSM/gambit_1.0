//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Definitions of container classes
///  for the fakeSoftSUSY backend.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///  
///  \author Ben Farmer  
///          (benjamin.farmer@monash.edu)
///  \date 2013 Jun
///
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2013 Oct
///
///  *********************************************


#ifndef __fakeSoftSUSY_types_hpp__
#define __fakeSoftSUSY_types_hpp__

namespace Gambit
{

  /// SLHA format placeholder "MSSM" low-energy spectrum object. 
  /// Defined at scale Q.
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

#endif // defined __fakeSoftSUSY_types_hpp__
