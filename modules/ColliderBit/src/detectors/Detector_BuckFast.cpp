#include "Detector.hpp"


namespace Gambit {
  namespace ColliderBit {

    DECLARE_DETECTOR_FACTORY_NO_SETTINGS(BuckFastIdentity, BuckFastBase)

    class BuckFastIdentity : public BuckFastBase {
    public:
      /// @name Event detection simulation.
      //@{
      virtual void processEvent(const HEPUtils::Event& eventIn, HEPUtils::Event& eventOut) { 
        convertInput(eventIn);
        ///
        /// Do stuff with _processedEvent...
        ///
        convertOutput(eventOut);
      }
      //@}
    };

    BuckFastBase* mkBuckFast(const std::string& name) {
      #define IF_X_RTN_CREATEX(A) if (name == #A) \
              return create_ ## A()
      IF_X_RTN_CREATEX(BuckFastIdentity);
      throw std::runtime_error(name + " isn't a known Delphes configuration, you empty-headed animal food trough wiper!");
      return nullptr;
      #undef IF_X_RTN_CREATEX
    }

    DEFINE_DETECTOR_FACTORY_NO_SETTINGS(BuckFastIdentity, BuckFastBase)
  }
}
