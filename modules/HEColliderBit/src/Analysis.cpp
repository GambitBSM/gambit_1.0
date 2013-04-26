#include "Analysis.hpp"
#include "Analysis_ATLAS0LEP.hpp"
#include <string>
#include <stdexcept>


namespace GAMBIT {


  Analysis* mkAnalysis(const std::string& name) {
    if (name == "ATLAS_0LEP") {
      return new Analysis_ATLAS0LEP();
    } else {
      throw std::runtime_error(name + " isn't a known collider analysis, you idiot");
    }
  }


}
