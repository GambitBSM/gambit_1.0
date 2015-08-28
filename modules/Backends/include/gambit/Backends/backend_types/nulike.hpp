//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Helper types for nulike backend.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///          p.scott@imperial.ac.uk
///  \date 2015 Aug
///
///  *************************

namespace Gambit
{

  // Neutrino yield function signature
  typedef double(*nuyield_function_pointer)(const double&, const int&, void*&);

}
