#pragma once

#include "gambit/ColliderBit/detectors/BaseDetector.hpp"

namespace Gambit {
  namespace ColliderBit {

    /// @note Abstract base class BuckFastBase
    struct BuckFastBase : BaseDetector<HEPUtils::Event, HEPUtils::Event> {
      /// @name Event detection simulation.
      //@{
        virtual void processEvent(const HEPUtils::Event&, HEPUtils::Event&) = 0; //< @note Pure virtual.
      //@}

      /// @name Construction, Destruction, and Recycling
      //@{
        BuckFastBase() { }
        virtual ~BuckFastBase() { }
      //@}

    };

    BuckFastBase* mkBuckFast(const std::string&);

  }
}
