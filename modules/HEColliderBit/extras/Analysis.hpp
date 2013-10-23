#pragma once

#include "Event.hpp"
#include "MathUtils.hpp"

namespace Gambit {


  class Analysis {
  public:

    /// Constructor
    Analysis() : _ntot(0), _xsec(-1), _xsecErr(-1) { }

    /// Virtual destructor (needed for correct deletion of inherited classes)
    virtual ~Analysis() { init(); }


    /// @name Standard event loop functions
    //@{

    /// Initialize counters etc.
    /// @todo Call this automatically on first call to analyze() -- requires a bit of indirection
    virtual void init() {  }

    /// Analyze the event (accessed by reference)
    virtual void analyze(const Event& e) { analyze(&e); }

    /// Analyze the event (accessed by pointer)
    /// @todo Call init() automatically on first call to analyze()? -- requires a bit of indirection: not worth it?
    /// @todo Needs to be called from Derived::analyze()
    virtual void analyze(const Event* e) {
      _ntot += 1; //< @todo Event weight support needed?
    }

    /// Finalize: scale by number of input events, etc.
    /// @todo Necessary?
    virtual void finalize() {  }

    //@}


    /// Return the total number of events seen so far
    double numEvents() const { return _ntot; }


    /// @name Cross-section operations
    //@{

    /// Return the cross-section (in pb)
    double xsec() const { return _xsec; }
    /// Return the cross-section error (in pb)
    double xsecErr() const { return _xsec; }
    /// Return the cross-section relative error
    double xsecRelErr() const { return xsec() > 0 ? xsecErr()/xsec() : -1; }
    /// Set the cross-section and error
    void setXsec(double xs, double xserr) { _xsec = xs; _xsecErr = xserr; }
    /// Add a cross-section and error
    void addXsec(double xs, double xserr) {
      assert(xs > 0 && xserr > 0);
      if (xsec() <= 0) {
        setXsec(xs, xserr);
      } else {
        _xsec += xs;
        _xsecErr = sqrt(sqr(xsecErr()) + sqr(xserr));
      }
    }
    /// Combine the provided cross-section with the existing one, assuming uncorrelated errors
    /// @todo Assumes equal stats at the moment: that breaks immediately. Include some 1/(rel)error weighting?
    void combineXsec(double xs, double xserr) {
      assert(xs > 0 && xserr > 0);
      if (xsec() <= 0) {
        setXsec(xs, xserr);
      } else {
        _xsec = _xsec/2.0 + xs/2.0;
        _xsecErr = sqrt(sqr(xsecErr()) + sqr(xserr)) / 2.0;
      }
    }
    /// Return the cross-section per event seen (in pb)
    double xsecPerEvent() const { return (xsec() > 0) ? xsec()/numEvents() : -1; }

    //@}


    /// An operator to do (xsec-weighted) combination of analysis runs
    /// @todo Put some implementation in the base class, e.g. checking ana names
    /// @todo Use an explicit name rather than operator +=?
    virtual Analysis& operator += (const Analysis& a) { return *this; } //= 0;


    /// Return the log_e likelihood (at the end of the run)
    virtual double logLikelihood() = 0;
    /// Return the likelihood (at the end of the run, via logLikelihood)
    virtual double likelihood() { return std::exp(logLikelihood()); }


  private:

    /// Number of events and cross-section internal variables
    /// @note C++11 default value syntax
    double _ntot, _xsec, _xsecErr;

  };


  /// @brief Create a new analysis based on a name string
  ///
  /// The caller is responsible for deleting the returned analysis object.
  Analysis* mkAnalysis(const std::string& name);


}
