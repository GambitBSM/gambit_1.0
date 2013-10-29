#include "Analysis.hpp"
#include <string>
#include <stdexcept>

namespace Gambit {

  // Fwd declarations
  DECLARE_ANAFACTORY(Perf);
  DECLARE_ANAFACTORY(ATLAS_0LEP);
  DECLARE_ANAFACTORY(ATLAS_0LEPStop_20invfb);
  DECLARE_ANAFACTORY(ATLAS_1LEPStop_20invfb);
  DECLARE_ANAFACTORY(ATLAS_2bStop_20invfb);
  DECLARE_ANAFACTORY(ATLAS_2LEPStop_20invfb);


  Analysis* mkAnalysis(const std::string& name) {
    // TODO: stringify
    #define IF_X_RTN_CREATEX(A) if (name == "ATLAS_0LEP") return create_Analysis_ ## A();

    if (name == "ATLAS_0LEP") {
      return create_Analysis_ATLAS_0LEP();
    } else if (name == "ATLAS_0LEPStop_20invfb") {
      return create_Analysis_ATLAS_0LEPStop_20invfb();
    } else if (name == "ATLAS_1LEPStop_20invfb") {
      return create_Analysis_ATLAS_1LEPStop_20invfb();
    } else if (name == "ATLAS_2bStop_20invfb") {
      return create_Analysis_ATLAS_2bStop_20invfb();
    } else if (name == "ATLAS_2LEPStop_20invfb") {
      return create_Analysis_ATLAS_2LEPStop_20invfb();
    } else if (name == "Perf") {
      return create_Analysis_Perf();
    } else {
      throw std::runtime_error(name + " isn't a known collider analysis, you fool of a Took!");
    }
    return 0;
  }


  void Analysis::add_xsec(double xs, double xserr) {
    assert(xs > 0 && xserr > 0);
    if (xsec() <= 0) {
      set_xsec(xs, xserr);
    } else {
      _xsec += xs;
      _xsecerr = sqrt(sqr(xsec_err()) + sqr(xserr));
    }
  }

  /// Combine the provided cross-section with the existing one, assuming uncorrelated errors
  /// @todo Assumes equal stats at the moment: that breaks immediately. Include some 1/(rel)error weighting?
  void Analysis::improve_xsec(double xs, double xserr) {
    assert(xs > 0 && xserr > 0);
    if (xsec() <= 0) {
      set_xsec(xs, xserr);
    } else {
      _xsec = _xsec/2.0 + xs/2.0;
      _xsecerr = sqrt(sqr(xsec_err()) + sqr(xserr)) / 2.0;
    }
  }


}
