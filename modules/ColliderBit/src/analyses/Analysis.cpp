#include "Analysis.hpp"
#include "MCUtils/MathUtils.h"
#include <string>
#include <stdexcept>
using namespace std;

namespace Gambit {
  namespace ColliderBit {

    // Fwd declarations
    DECLARE_ANALYSIS_FACTORY(Perf);
    DECLARE_ANALYSIS_FACTORY(ATLAS_0LEP);
    DECLARE_ANALYSIS_FACTORY(ATLAS_0LEPStop_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_1LEPStop_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_2bStop_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_2LEPStop_20invfb);
    DECLARE_ANALYSIS_FACTORY(ATLAS_3LEPEW_20invfb);

    Analysis* mkAnalysis(const std::string& name) {
      #define IF_X_RTN_CREATEX(A) if (name == #A) return create_Analysis_ ## A()
      IF_X_RTN_CREATEX(ATLAS_0LEP);
      IF_X_RTN_CREATEX(ATLAS_0LEPStop_20invfb);
      IF_X_RTN_CREATEX(ATLAS_1LEPStop_20invfb);
      IF_X_RTN_CREATEX(ATLAS_2bStop_20invfb);
      IF_X_RTN_CREATEX(ATLAS_2LEPStop_20invfb);
      IF_X_RTN_CREATEX(ATLAS_3LEPEW_20invfb);
      IF_X_RTN_CREATEX(Perf);
      throw std::runtime_error(name + " isn't a known collider analysis, you fool of a Took!");
      return nullptr;
      #undef IF_X_RTN_CREATEX
    }


    /// Add the provided other-process cross-section to the existing one, assuming uncorrelated errors
    void Analysis::add_xsec(double xs, double xserr) {
      stringstream msg;
      msg << "Adding xsecs: " << xsec() << " +- " << xsec_err() << " += " << xs << " +- " << xserr;
      if (xs > 0) {
        if (xsec() <= 0) {
          set_xsec(xs, xserr);
        } else {
          _xsec += xs;
          _xsecerr = MCUtils::add_quad(xsec_err(), xserr);
        }
      }
      msg << " => " << xsec() << " +- " << xsec_err();
      cout << msg.str() << endl;
    }


    /// Combine the provided same-process cross-section with the existing one, assuming uncorrelated errors
    /// @todo Assumes equal stats at the moment: that breaks in >2 instance aggregation. Include some 1/(rel)error weighting?
    void Analysis::improve_xsec(double xs, double xserr) {
      stringstream msg;
      msg << "Improving xsec: " << xsec() << " +- " << xsec_err() << " += " << xs << " +- " << xserr;
      if (xs > 0) {
        if (xsec() <= 0) {
          set_xsec(xs, xserr);
        } else {
          _xsec = _xsec/2.0 + xs/2.0;
          _xsecerr = MCUtils::add_quad(xsec_err(), xserr) / 2.0;
        }
      }
      msg << " => " << xsec() << " +- " << xsec_err();
      cout << msg.str() << endl;
    }


  }
}
