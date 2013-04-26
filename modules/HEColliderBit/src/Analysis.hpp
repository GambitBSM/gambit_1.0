#pragma once

#include "Event.hpp"


namespace GAMBIT {


  class Analysis {

    virtual void init() {  }

    virtual void analyze(const Event* e) = 0;

    virtual void finalize() {  }

  };


  /// @brief Create a new analysis based on a name string
  ///
  /// The caller is responsible for deleting the returned analysis object.
  Analysis* mkAnalysis(const std::string& name) {


}
