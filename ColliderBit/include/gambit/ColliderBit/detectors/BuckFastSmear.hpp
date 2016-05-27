#pragma once

#include "gambit/ColliderBit/detectors/BaseDetector.hpp"

namespace Gambit {
  namespace ColliderBit {

    struct BuckFastBase : BaseDetector<Pythia8::Event, HEPUtils::Event> {
      /// @name Event detection simulation.
      //@{
        bool partonOnly;
        double antiktR;
        void convertPythia8ParticleEvent(const EventInType&, EventOutType&) const;
        void convertPythia8PartonEvent(const EventInType&, EventOutType&) const;
        virtual void processEvent(const EventInType&, EventOutType&) const = 0;
      //@}

      /// @name Construction, Destruction, and Recycling
      //@{
        BuckFastBase() : partonOnly(false), antiktR(0.4) { }
        virtual ~BuckFastBase() { }
      //@}

      /// @name (Re-)Initialization functions
      //@{
        /// @brief Settings parsing and initialization for any sub-class.
        virtual void init(const std::vector<std::string>&) { };
        /// @brief General init for any collider of this type - no settings version.
        virtual void init() { };
        /// @brief Settings parsing and initialization for sub-classes with parton and jet radius settings only.
        void init(bool parton, double R) { partonOnly=parton; antiktR=R; };
      //@}
    };

    /// @brief Simple ATLAS smearing functions as a detector pseudo-simulation.
    struct BuckFastSmearATLAS : BuckFastBase {
      /// @name Event detection simulation.
      //@{
        void processEvent(const EventInType&, EventOutType&) const;
      //@}

      /// @name Construction, Destruction, and Recycling
      //@{
        BuckFastSmearATLAS() { }
        ~BuckFastSmearATLAS() { }
      //@}
    };

    /// @brief Simple CMS smearing functions as a detector pseudo-simulation.
    struct BuckFastSmearCMS : BuckFastBase {
      /// @name Event detection simulation.
      //@{
        void processEvent(const EventInType&, EventOutType&) const;
      //@}

      /// @name Construction, Destruction, and Recycling
      //@{
        BuckFastSmearCMS() { }
        ~BuckFastSmearCMS() { }
      //@}
    };

    /// @brief Simple smearing functions as a detector pseudo-simulation.
    struct BuckFastIdentity : BuckFastBase {
      /// @name Event detection simulation.
      //@{
        void processEvent(const EventInType&, EventOutType&) const;
      //@}

      /// @name Construction, Destruction, and Recycling
      //@{
        BuckFastIdentity() { }
        ~BuckFastIdentity() { }
      //@}
    };

  }
}
