//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Function definitions of DecayBit.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott
///          (p.scott@imperial.ac.uk)
///  \date 2014 Aug
///  \author Csaba Balazs
///  \date 2015 Jan
///
///  *********************************************

#include "gambit_module_headers.hpp"
#include "DecayBit_rollcall.hpp"

namespace Gambit
{

  namespace DecayBit
  {

    using namespace LogTags;

    /// \name DecayBit module functions
    /// @{

    void decayTest (double &result) 
	  {
	    using namespace Pipes::decayTest;
/// CsB result = BEreq::top2body->brtopbw; 
     	result = *BEreq::top2body->brtopbw; 
	    cout << "top 2 body Br's: " << BEreq::top2body->brtopbw << endl;
      }

    //void deleteme(int &result) { using namespace Pipes::deleteme; result = 1; }   

    /// @}

  }

}
