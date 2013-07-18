#pragma once

#include "Event.hpp"
#include <cmath>


namespace GAMBIT {


  class Analysis {
  public:

    /// Virtual destructor (needed for correct deletion of inherited classes)
    virtual ~Analysis() {  }

    /// Initialize counters etc.
    virtual void init() {  }

    /// Analyze the event (accessed by reference)
    virtual void analyze(const Event& e) { analyze(&e); }

    /// Analyze the event (accessed by pointer)
    /// @todo Make this the convenience method and the ref version the one to be overridden
    virtual void analyze(const Event* e) = 0;

    /// Finalize: scale by number of input events, etc.
    virtual void finalize() {  }

    /// Return the log likelihood (at the end of the run)
    virtual double logLikelihood() = 0;

    /// Return the likelihood (at the end of the run, via logLikelihood)
    virtual double likelihood() { return std::exp(logLikelihood()); }

  };


  /// @brief Create a new analysis based on a name string
  ///
  /// The caller is responsible for deleting the returned analysis object.
  Analysis* mkAnalysis(const std::string& name);


}
