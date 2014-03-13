//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
/// \file
///  Simple struct for triggering initialisation
///  code.
///
///  *********************************************
///
///  Authors
///  =======
///
///  (add name and date if you modify)
///
///  \author Gregory Martinez
///          (gregory.david.martinez@gmail.com)
///  \date 2013 July
///  \date 2014 Feb
///
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2014 Mar
///
///  *********************************************


#ifndef __ini_code_struct_hpp__
#define __ini_code_struct_hpp__

namespace Gambit
{

  /// A container for a function that needs to be constructed at compile
  /// and executed as initialisation code at startup.
  struct ini_code
  {
    ini_code(void (*unroll)()) { (*unroll)(); }
  };
  
}

#endif //#ifndef__ini_code_struct_hpp__
