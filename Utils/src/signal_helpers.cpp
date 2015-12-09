//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Function definitions for signal helper 
///  functions.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Ben Farmer
///          (benjamin.farmer@fysik.su.se)
///  \date 2015 Oct
///
///  *********************************************

#include "gambit/Utils/signal_helpers.hpp"
#include <cstddef> // for NULL

namespace Gambit
{
   /// Getter for global signal set
   sigset_t* signal_mask()
   {
      static sigset_t mask;
      return &mask;
   }

   /// @{ Signal blocking/unblocking
   void block_signals()
   {
      sigprocmask(SIG_BLOCK, signal_mask(), NULL);
   }

   void unblock_signals()
   {
      sigprocmask(SIG_UNBLOCK, signal_mask(), NULL);
   }
   /// @}
   
}
