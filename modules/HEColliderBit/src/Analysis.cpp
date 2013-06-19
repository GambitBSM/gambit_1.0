#include "Analysis.hpp"
#include "Analysis_ATLAS0LEP.hpp"
#include "Analysis_Perf.hpp"
#include <string>
#include <stdexcept>


namespace GAMBIT {


  Analysis* mkAnalysis(const std::string& name) {
    if (name == "ATLAS_0LEP") {
      return new Analysis_ATLAS0LEP();
    } else if (name == "PERF") {
      return new Analysis_Perf();
    }
    else {
      throw std::runtime_error(name + " isn't a known collider analysis, you fool of a Took!");
    }
  }


}
