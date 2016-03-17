//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Stringification macro. Separated from other
///  util_macros to facilicate code factorisation.
///
///  *********************************************
///
///  Authors: 
///  <!-- add name and date if you modify -->
///   
///  \author Pat Scott
///          (patscott@physics.mcgill.ca)
///  \date 2013 Apr, Oct
///  \date 2014 Mar
///
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2016 Jan
///
///  *********************************************

#ifndef __stringify_hpp__
#define __stringify_hpp__

/// \name Stringification macros
/// @{
#define STRINGIFY(X) STRINGIFY2(X)
#define STRINGIFY2(X) #X
/// Stringification macros that can stringify arguments with commas
#define SAFE_STRINGIFY(...) SAFE_STRINGIFY2(__VA_ARGS__)
#define SAFE_STRINGIFY2(...) #__VA_ARGS__
/// @}

#endif //defined __util_macros_hpp__
