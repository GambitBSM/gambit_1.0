#pragma once
#include <string>
#include <sstream>
#include <vector>
#include "gambit/ColliderBit/ColliderBit_macros.hpp"
#include "gambit/ColliderBit/Utils.hpp"
#include "HEPUtils/MathUtils.h"
#include "HEPUtils/Event.h"

using std::vector;

namespace Gambit {
  namespace ColliderBit {

    /// @brief A simple container for the result of one analysis signal region.
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


    /// @brief An abstract base class for collider analyses within ColliderBit.
    template <typename EventT>
    class BaseAnalysis {
      /// @name Member variables
      //@{
      private:
        double _ntot, _xsec, _xsecerr;
        std::vector<SignalRegionData> _results;
        typedef EventT EventType;
      //@}

      /// @name Construction, Destruction, and Recycling
      //@{
      public:
        BaseAnalysis() : _ntot(0), _xsec(-1), _xsecerr(-1) {  }
        virtual ~BaseAnalysis() { }
        /// @brief Reset this instance for reuse, avoiding the need for "new" or "delete".
        virtual void clear() { _ntot = 0; _xsec = -1; _xsecerr = -1; _results.clear(); }
      //@}

      /// @name Event analysis, event number, and cross section functions
      //@{
      public:
        /// @brief Analyze the event (accessed by reference)
        void analyze(const EventT& e) { analyze(&e); }
        /// @brief Analyze the event (accessed by pointer)
        /// @note Needs to be called from Derived::analyze()
        virtual void analyze(const HEPUtils::Event*) { _ntot += 1; }

        /// @brief Return the total number of events seen so far
        double num_events() const { return _ntot; }
        /// @brief Return the cross-section (in pb)
        double xsec() const { return _xsec; }
        /// @brief Return the cross-section error (in pb)
        double xsec_err() const { return _xsecerr; }
        /// @brief Return the cross-section relative error
        double xsec_relerr() const { return xsec() > 0 ? xsec_err()/xsec() : -1; }
        /// @brief Return the cross-section per event seen (in pb)
        double xsec_per_event() const { return (xsec() > 0) ? xsec()/num_events() : -1; }
        /// @brief Set the cross-section and its error
        void set_xsec(double xs, double xserr) { _xsec = xs; _xsecerr = xserr; }

        /// Get the collection of SignalRegionData for likelihood computation
        std::vector<SignalRegionData> get_results() {
          if (_results.empty()) collect_results();
          return _results;
        }
      protected:
        /// Add the given result to the internal results list
        void add_result(const SignalRegionData& res) { _results.push_back(res);}
        /// Gather together the info for likelihood calculation
        virtual void collect_results() = 0;
      //@}

      /// @name (Re-)Initialization functions
      //@{
      public:
        /// @brief General init for any analysis of this type.
        virtual void init(const std::vector<std::string>& externalSettings) { }
        /// @brief General init for any collider of this type - no settings version.
        virtual void init() { }
        /// @brief Finalize: scale by number of input events, etc.
        /// @todo Necessary?
        virtual void finalize() { }
      //@}

      /// @name BaseAnalysis combination operations
      //@{
      public:
        /// @brief An operator to do xsec-weighted combination of analysis runs
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
        /// @brief Add cross-sections and errors for two different process types
        void add_xsec(double xs, double xserr) {
          std::stringstream msg;
          //msg << "Adding xsecs: " << xsec() << " +- " << xsec_err() << " += " << xs << " +- " << xserr;
          if (xs > 0) {
            if (xsec() <= 0) {
              set_xsec(xs, xserr);
            } else {
              _xsec += xs;
              _xsecerr = HEPUtils::add_quad(xsec_err(), xserr);
            }
          }
          msg << " => " << xsec() << " +- " << xsec_err();
          std::cout << msg.str() << std::endl;
        }
        /// @brief Combine the provided cross-section with the existing one of the same type, assuming uncorrelated errors
        void improve_xsec(double xs, double xserr) {
          std::stringstream msg;
          msg << "Improving xsec: " << xsec() << " +- " << xsec_err() << " += " << xs << " +- " << xserr;
          if (xs > 0) {
            if (xsec() <= 0) {
              set_xsec(xs, xserr);
            } else {
              _xsec = _xsec/2.0 + xs/2.0;
              _xsecerr = HEPUtils::add_quad(xsec_err(), xserr) / 2.0;
            }
          }
          msg << " => " << xsec() << " +- " << xsec_err();
          std::cout << msg.str() << std::endl;
        }
      //@}
    };

    typedef BaseAnalysis<HEPUtils::Event> HEPUtilsAnalysis;

  }
}
