#pragma once

#include "gambit/ColliderBit/detectors/BaseDetector.hpp"

namespace Gambit {
  namespace ColliderBit {

    /// @note Abstract base class BuckFastBase
    class BuckFastBase : public BaseDetector<HEPUtils::Event, HEPUtils::Event> {
    public:

      /// @name Initialization functions
      //@{
      virtual void defaults() {}
      virtual void init(const std::vector<std::string>&) {} // arg is a list of "settings"
      virtual void init() {}
      //@}

      /// @name Event detection simulation.
      //@{
      virtual void processEvent(const HEPUtils::Event&, HEPUtils::Event&) = 0; //< @note Pure virtual.
      //@}
    };

    BuckFastBase* mkBuckFast(const std::string&);

  }
}
