#pragma once
#include "ColliderBit_macros.hpp"
#include "HEPUtils/MathUtils.h"
#include "HEPUtils/BinnedFn.h"
#include "HEPUtils/Event.h"
using namespace HEPUtils;



namespace Gambit {
  namespace ColliderBit {

    struct SignalRegionData {

      double n_observed;
      double n_signal;
      double n_background;
      double signal_sys;
      double background_sys;

      SignalRegionData() {}

      void set_observation(double a) {n_observed=a;}
      void set_signal(double a) {n_signal=a;}
      void set_background(double a) {n_background=a;}
      void set_signalsys(double a) {signal_sys=a;}
      void set_backgroundsys(double a) {background_sys=a;}

    };


    class Analysis {
    private:

      /// Number of events and cross-section internal variables
      /// @note C++11 default value syntax
      double _ntot, _xsec, _xsecerr;
      std::vector<SignalRegionData> _results;

    public:

      /// Constructor
      Analysis() : _ntot(0), _xsec(-1), _xsecerr(-1) {  }

      /// Virtual destructor (needed for correct deletion of inherited classes)
      virtual ~Analysis() { init(); }


      /// @name Standard event loop functions
      //@{

      /// Initialize counters etc.
      /// @todo Call this automatically on first call to analyze() -- requires a bit of indirection
      virtual void init() {  }

      /// Analyze the event (accessed by reference)
      void analyze(const HEPUtils::Event& e) { analyze(&e); }

      /// Analyze the event (accessed by pointer)
      /// @note Needs to be called from Derived::analyze()
      virtual void analyze(const HEPUtils::Event*) {
        _ntot += 1; //< @todo Event weight support needed?
      }

      /// Finalize: scale by number of input events, etc.
      /// @todo Necessary?
      virtual void finalize() {  }

      //@}



      /// @name Cross-section and event number info
      //@{

      /// Return the total number of events seen so far
      double num_events() const { return _ntot; }
      /// Return the cross-section (in pb)
      double xsec() const { return _xsec; }
      /// Return the cross-section error (in pb)
      double xsec_err() const { return _xsecerr; }
      /// Return the cross-section relative error
      double xsec_relerr() const { return xsec() > 0 ? xsec_err()/xsec() : -1; }
      /// Return the cross-section per event seen (in pb)
      double xsec_per_event() const { return (xsec() > 0) ? xsec()/num_events() : -1; }
      /// Set the cross-section and its error
      void set_xsec(double xs, double xserr) { _xsec = xs; _xsecerr = xserr; }

      //@}


      /// @name Helper functions for analysis
      //@{

      /// Return a random true/false at a success rate given by a 1D efficiency map
      inline bool random_bool(const HEPUtils::BinnedFn1D<double>& effmap, double x) {
        const double eff = effmap.get_at(x);
        /// @todo Handle out-of-range x and eff values
        return HEPUtils::rand01() < eff;
      }

      /// Return a random true/false at a success rate given by a 2D efficiency map
      inline bool random_bool(const HEPUtils::BinnedFn2D<double>& effmap, double x, double y) {
        const double eff = effmap.get_at(x, y);
        /// @todo Handle out-of-range x,y and eff values
        return HEPUtils::rand01() < eff;
      }

      /// Randomly get a tag result (can be anything) from a 2D |eta|-pT efficiency map
      /// @todo Also need 1D? Sampling in what variable?
      inline bool has_tag(const HEPUtils::BinnedFn2D<double>& effmap, double eta, double pt) {
        try {
          return random_bool(effmap, fabs(eta), pt);
        } catch (...) {
          return false; // No tag if outside lookup range... be careful!
        }
      }

      //@}


      /// @name Analysis combination operations
      //@{

      /// An operator to do xsec-weighted combination of analysis runs
      /// @note We don't use operator += because it's awkward with pointer l/rvalues
      /// @todo Put some real implementation in the base class, e.g. checking
      ///       ana name consistency... or make it pure virtual (once anas are updated).
      virtual void add(const Analysis*) { } //= 0;
      /// Reference-based version of add()
      void add(const Analysis& a) { add(&a); }

      /// Add cross-sections and errors for two different process types
      void add_xsec(double xs, double xserr);

      /// Combine the provided cross-section with the existing one of the same type, assuming uncorrelated errors
      void improve_xsec(double xs, double xserr);

      //@}


      /// @name Likelihood functions
      //@{

      /// Get the collection of SignalRegionData for likelihood computation
      std::vector<SignalRegionData> get_results() {
        if (_results.empty()) collect_results();
        return _results;
      }

      /// Return the log_e likelihood (at the end of the run)
      virtual double loglikelihood() = 0;

      /// Return the likelihood (at the end of the run, via logLikelihood)
      virtual double likelihood() { return std::exp(loglikelihood()); }

      //@}


    protected:

      /// Add the given result to the internal results list
      void add_result(const SignalRegionData& res) { _results.push_back(res);}

      /// Gather together the info for likelihood calculation
      virtual void collect_results() = 0;

    };


    /// @brief Create a new analysis based on a name string
    ///
    /// The caller is responsible for deleting the returned analysis object.
    Analysis* mkAnalysis(const std::string& name);


  }
}
