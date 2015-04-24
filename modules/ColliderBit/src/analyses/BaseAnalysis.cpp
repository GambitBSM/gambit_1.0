#include <string>
#include <stdexcept>
#include "gambit/ColliderBit/analyses/BaseAnalysis.hpp"
#include "HEPUtils/MathUtils.h"

using namespace std;

namespace Gambit {
  namespace ColliderBit {

    // Fwd declarations
    DECLARE_ANALYSIS_FACTORY(Perf);
    DECLARE_ANALYSIS_FACTORY(ATLAS_0LEP);
    DECLARE_ANALYSIS_FACTORY(ATLAS_0LEP_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_0LEPStop_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_1LEPStop_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_2bStop_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_2LEPStop_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_3LEPEW_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_2LEPEW_20invfb);
    DECLARE_ANALYSIS_FACTORY(CMS_3LEPEW_20invfb);

    HEPUtilsAnalysis* mkAnalysis(const std::string& name) {
      #define IF_X_RTN_CREATEX(A) if (name == #A) return create_Analysis_ ## A()
      IF_X_RTN_CREATEX(ATLAS_0LEP);
      IF_X_RTN_CREATEX(ATLAS_0LEP_20invfb);
      IF_X_RTN_CREATEX(ATLAS_0LEPStop_20invfb);
      IF_X_RTN_CREATEX(ATLAS_1LEPStop_20invfb);
      IF_X_RTN_CREATEX(ATLAS_2bStop_20invfb);
      IF_X_RTN_CREATEX(ATLAS_2LEPStop_20invfb);
      IF_X_RTN_CREATEX(ATLAS_3LEPEW_20invfb);
      IF_X_RTN_CREATEX(ATLAS_2LEPEW_20invfb);
      IF_X_RTN_CREATEX(CMS_3LEPEW_20invfb);
      IF_X_RTN_CREATEX(Perf);
      throw std::runtime_error(name + " isn't a known collider analysis, you fool of a Took!");
      return nullptr;
      #undef IF_X_RTN_CREATEX
    }

  }
}
