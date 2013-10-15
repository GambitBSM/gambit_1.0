//  *********************************************
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Types returned from module functions
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott  
///          (patscott@physics.mcgill.ca)
///  \date 2013 Apr
///
///  \author Ben Farmer  
///          (benjamin.farmer@monash.edu)
///  \date 2013 Jun
///
///  \author Torsten Bringmann
///          (torsten.bringmann@desy.de)
///  \date 2013 Jun
///
///  *********************************************

#ifndef __common_return_types_hpp__
#define __common_return_types_hpp__

namespace Gambit
{
  /// Old SUfit types, I think only used in ModelParametersBase. Should clean
  /// these out.
  typedef long long longlong ;
  typedef unsigned long long u_longlong ;
  
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

  // Return type of all loop managers
  typedef int loopInt;
}

#endif //__common_return_types_hpp__


