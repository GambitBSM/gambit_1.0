#pragma once

#include "gambit/ColliderBit/detectors/BaseDetector.hpp"

namespace Gambit {
  namespace ColliderBit {

    /// @brief Simple ATLAS smearing functions as a detector pseudo-simulation.
    struct BuckFastSmearATLAS : BaseDetector<HEPUtils::Event, HEPUtils::Event> {
      /// @name Event detection simulation.
      //@{
        void processEvent(const HEPUtils::Event&, HEPUtils::Event&) const;
      //@}

      /// @name Construction, Destruction, and Recycling
      //@{
        BuckFastSmearATLAS() { }
        ~BuckFastSmearATLAS() { }
      //@}
    };

/** @TODO:
    /// @brief Simple CMS smearing functions as a detector pseudo-simulation.
    struct BuckFastSmearCMS : BaseDetector<HEPUtils::Event, HEPUtils::Event> {
      /// @name Event detection simulation.
      //@{
        void processEvent(const HEPUtils::Event&, HEPUtils::Event&) const;
      //@}

      /// @name Construction, Destruction, and Recycling
      //@{
        BuckFastSmearCMS() { }
        ~BuckFastSmearCMS() { }
      //@}
    };
    **/

    /// @brief Simple smearing functions as a detector pseudo-simulation.
    struct BuckFastIdentity : BaseDetector<HEPUtils::Event, HEPUtils::Event> {
      /// @name Event detection simulation.
      //@{
        void processEvent(const HEPUtils::Event&, HEPUtils::Event&) const;
      //@}

      /// @name Construction, Destruction, and Recycling
      //@{
        BuckFastIdentity() { }
        ~BuckFastIdentity() { }
      //@}
    };

  }
}
