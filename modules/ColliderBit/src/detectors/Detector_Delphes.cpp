#include "Detector.hpp"


namespace Gambit {
  namespace ColliderBit {

    DECLARE_DETECTOR_FACTORY(DelphesVanilla, DelphesBase)

    class DelphesVanilla : public DelphesBase {};

    DelphesBase* mkDelphes(const std::string& name, 
                                      const std::vector<std::string>& settings) {
      #define IF_X_RTN_CREATEX(A) if (name == #A) \
              return create_ ## A(settings)
      IF_X_RTN_CREATEX(DelphesVanilla);
      throw std::runtime_error(name + " isn't a known Delphes configuration, you empty-headed animal food trough wiper!");
      return nullptr;
      #undef IF_X_RTN_CREATEX
    }

    DEFINE_DETECTOR_FACTORY(DelphesVanilla, DelphesBase)
  }
}
