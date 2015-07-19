#pragma once

#include "gambit/ColliderBit/detectors/BaseDetector.hpp"

namespace Gambit {
  namespace ColliderBit {

    /// @brief Simple smearing functions as a detector pseudo-simulation.
    struct BuckFastSmear : BaseDetector<HEPUtils::Event, HEPUtils::Event> {
      /// @name Event detection simulation.
      //@{
        void processEvent(const HEPUtils::Event&, HEPUtils::Event&) const;
      //@}

      /// @name Construction, Destruction, and Recycling
      //@{
        BuckFastSmear() { }
        ~BuckFastSmear() { }
      //@}
    };

  }
}
