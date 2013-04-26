#pragma once

#include "Analysis.hpp"
#include "Analysis_ATLAS_0LEP.hpp"
#include <string>


namespace GAMBIT {


  Analysis* mkAnalysis(const std::string& name) {
    if (name == "ATLAS_0LEP") {
      return new Analysis_ATLAS_0LEP();
    } else {
      throw std::exception(name + " isn't a known collider analysis, you idiot");
    }
  };


}
