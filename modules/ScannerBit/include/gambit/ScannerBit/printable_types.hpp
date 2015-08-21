//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file                                       
///                                               
///  Preprocessor sequence of functor types that
///  should be allowed to print when using 
///  ScannerBit in standalone mode.  Add to 
///  this as necessary.                          
///                                               
///  *********************************************
///                                               
///  Authors:                                     
///                                               
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)    
///  \date 2015 Jun
///                                               
///  *********************************************

#ifndef __scannerbit_printable_types_hpp__                 
#define __scannerbit_printable_types_hpp__                 

#define PRINTABLE_TYPES        \
 (bool)                        \
 (int)                         \
 (double)                      \
 (std::vector<bool>)           \
 (std::vector<int>)            \
 (std::vector<double>)         \
 (ModelParameters)
 // Add more as needed

#endif
