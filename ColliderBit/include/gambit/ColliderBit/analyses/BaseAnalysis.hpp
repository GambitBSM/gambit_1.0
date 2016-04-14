#pragma once
#include <string>
#include <sstream>
#include <vector>
#include "gambit/ColliderBit/ColliderBit_macros.hpp"
#include "gambit/ColliderBit/Utils.hpp"
#include "HEPUtils/MathUtils.h"
#include "HEPUtils/Event.h"
#include "omp.h"

using std::vector;

namespace Gambit {
  namespace ColliderBit {

    /// A simple container for the result of one signal region from one analysis.
    struct SignalRegionData {
      /// @name Analysis and signal region specification:
      //@{
        std::string analysis_name; ///< The name of the analysis common to all signal regions.
        std::string sr_label; ///< A label for the particular signal region of the analysis.
      //@}

      /// @name Signal region data:
      //@{
        double n_observed; ///< The number of events passing selection for this signal region,
                           ///< as reported by the experiment.
        double n_signal; ///< The number of simulated model events passing selection for this signal region.
        double n_signal_at_lumi; ///< n_signal, scaled to the experimental luminosity.
        double n_background; ///< The number of standard model events expected to pass the selection for this signal
                             ///< region, as reported by the experiment.
        double signal_sys; ///< The absolute systematic error of n_signal.
        double background_sys; ///< The absolute systematic error of n_background.
      //@}
    };


    /// An abstract base class for collider analyses within ColliderBit.
    template <typename EventT>
    class BaseAnalysis {
      private:
        double _ntot, _xsec, _xsecerr, _luminosity;
        std::vector<SignalRegionData> _results;
        typedef EventT EventType;

      public:
      /// @name Construction, Destruction, and Recycling:
      //@{
        BaseAnalysis() : _ntot(0), _xsec(-1), _xsecerr(-1), _luminosity(-1) {  }
        virtual ~BaseAnalysis() { }
        /// Reset this instance for reuse, avoiding the need for "new" or "delete".
        virtual void clear() {
          _ntot = 0; _xsec = -1; _xsecerr = -1; _luminosity = -1;
          _results.clear();
        }
      //@}

      public:
      /// @name Event analysis, event number, and cross section functions:
      //@{
        /// Analyze the event (accessed by reference).
        void analyze(const EventT& e) { analyze(&e); }
        /// Analyze the event (accessed by pointer).
        /// @note Needs to be called from Derived::analyze().
        virtual void analyze(const EventT*) { _ntot += 1; }

        /// Return the total number of events seen so far.
        double num_events() const { return _ntot; }
        /// Return the cross-section (in pb).
        double xsec() const { return _xsec; }
        /// Return the cross-section error (in pb).
        double xsec_err() const { return _xsecerr; }
        /// Return the cross-section relative error.
        double xsec_relerr() const { return xsec() > 0 ? xsec_err()/xsec() : -1; }
        /// Return the cross-section per event seen (in pb).
        double xsec_per_event() const { return (xsec() > 0) ? xsec()/num_events() : -1; }
        /// Return the integrated luminosity (in inverse pb).
        double luminosity() const { return _luminosity; }
        /// Set the cross-section and its error (in pb).
        void set_xsec(double xs, double xserr) { _xsec = xs; _xsecerr = xserr; }
        /// Set the integrated luminosity (in inverse pb).
        void set_luminosity(double lumi) { _luminosity = lumi; }

        /// Get the collection of SignalRegionData for likelihood computation.
        std::vector<SignalRegionData> get_results() {
          if (_results.empty()) collect_results();
          return _results;
        }
      //@}

      protected:
      /// @name Protected collection functions:
      //@{
        /// Add the given result to the internal results list.
        void add_result(const SignalRegionData& res) { _results.push_back(res);}
        /// Gather together the info for likelihood calculation.
        virtual void collect_results() = 0;
      //@}

      public:
      /// @name (Re-)Initialization functions:
      //@{
        /// General init for any analysis of this type.
        virtual void init(const std::vector<std::string>&) {}
        /// General init for any collider of this type - no settings version.
        virtual void init() { }
        /// Scale by number of input events and xsec.
        virtual void scale(double factor=-1) {
          if (factor < 0)
            factor = _luminosity * _xsec / _ntot;
          auto myIter = _results.begin();
          while (myIter != _results.end()) {
            (*myIter).n_signal_at_lumi = factor * (*myIter).n_signal;
            myIter++;
          }
        }
      //@}

      public:
      /// @name BaseAnalysis combination operations:
      //@{
        /// An operator to do xsec-weighted combination of analysis runs.
        virtual void add(BaseAnalysis* other) {
          if (_results.empty()) collect_results();
          std::vector<SignalRegionData> otherResults = other->get_results();
          assert(otherResults.size() == _results.size());
          auto myIter = _results.begin();
          auto otherIter = otherResults.begin();
          while (myIter != _results.end()) {
            (*myIter++).n_signal += (*otherIter++).n_signal;
          }
          _ntot += other->num_events();
        }
        /// Add cross-sections and errors for two different process types.
        void add_xsec(double xs, double xserr) {
          if (xs > 0) {
            if (xsec() <= 0) {
              set_xsec(xs, xserr);
            } else {
              _xsec += xs;
              _xsecerr = HEPUtils::add_quad(xsec_err(), xserr);
            }
          }
        }
        /// Combine cross-sections and errors for the same process type, assuming uncorrelated errors.
        void improve_xsec(double xs, double xserr) {
          if (xs > 0) {
            if (xsec() <= 0) {
              set_xsec(xs, xserr);
            } else {
              _xsec = _xsec/2.0 + xs/2.0;
              _xsecerr = HEPUtils::add_quad(xsec_err(), xserr) / 2.0;
            }
          }
        }
      //@}
    };

    /// A BaseAnalysis template specialization for our preferred event type.
    typedef BaseAnalysis<HEPUtils::Event> HEPUtilsAnalysis;

  }
}
