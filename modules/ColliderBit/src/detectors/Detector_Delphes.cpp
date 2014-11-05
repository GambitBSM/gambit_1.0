#include "Detector.hpp"


namespace Gambit {
  namespace ColliderBit {

    /// @TODO And now, I must have these four lines here??
    DEFINE_COLLIDER_FACTORY(Delphes_PythiaToHEPUtils, Delphes_PythiaToHEPUtils)
    Delphes_PythiaToHEPUtils* mkDelphes(const std::string& name, 
                                        const std::vector<std::string>& settings) {
      return create_Delphes_PythiaToHEPUtils(settings);
    }

  }
}
