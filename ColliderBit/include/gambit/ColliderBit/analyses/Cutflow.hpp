#pragma once
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  The Cutflow and Cutflows classes

#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <iomanip>
// #include <cmath>
// #include <cfloat>
// #include <limits>
// #include <algorithm>

namespace Gambit {
  namespace ColliderBit {

    using namespace std;


    /// A tracker of numbers & fractions of events passing sequential cuts
    struct Cutflow {

      /// @brief Default constructor
      ///
      /// Does nothing! Just to allow storage in STL containers and use as a member variable without using the init list
      Cutflow() {}

      /// Proper constructor
      Cutflow(const string& cfname, const vector<string>& cutnames)
        : name(cfname), ncuts(cutnames.size()), cuts(cutnames), counts(ncuts+1, 0)
      {  }

      /// @brief Fill the pre-cut counter
      void fillinit() {
        counts[0] += 1;
      }

      /// @brief Fill the @a {icut}'th post-cut counter, starting at icut=1 for first cut
      ///
      /// @note Returns the cut result to allow 'side-effect' cut-flow filling in an if-statement
      bool fill(size_t icut, bool cutresult=true) {
        if (cutresult) counts[icut] += 1;
        return cutresult;
      }

      /// @brief Fill all cut-state counters from an Ncut-element results vector
      ///
      /// This function is to be used to fill all of an event's pre- and post-cut
      /// state counters at once, including the incoming event counter. It must not be
      /// mixed with calls to the @c fill(size_t, bool) and @c fillinit() methods,
      /// or double-counting will occur.
      ///
      /// @note Returns the overall cut result to allow 'side-effect' cut-flow filling in an if-statement
      bool fill(const vector<bool>& cutresults) {
        if (cutresults.size() != ncuts)
          throw runtime_error("Number of filled cut results needs to match the Cutflow construction");
        counts[0] += 1;
        for (size_t i = 0; i < ncuts; ++i) {
          if (cutresults[i]) counts[i+1] += 1; else break;
        }
        for (bool x : cutresults)
          if (!x) return false;
        return true;
      }

      /// @brief Fill the N trailing post-cut counters, when supplied with an N-element results vector
      ///
      /// The @a cutresults vector represents the boolean results of the last N cuts. This function
      /// allows mixing of cut-flow filling with higher-level analyze() function escapes such as
      /// the vetoEvent directive. The initial state (state 0) is not incremented.
      ///
      /// @note Returns the overall cut result to allow 'side-effect' cut-flow filling in an if-statement
      bool filltail(const vector<bool>& cutresults) {
        if (cutresults.size() > ncuts)
          throw runtime_error("Number of filled cut results needs to match the Cutflow construction");
        const size_t offset = counts.size() - cutresults.size();
        for (size_t i = 0; i < cutresults.size(); ++i) {
          if (cutresults[i]) counts[offset+i] += 1; else break;
        }
        for (bool x : cutresults)
          if (!x) return false;
        return true;
      }

      /// Create a string representation
      string str() const {
        stringstream ss;
        ss << name << " cut-flow:";
        size_t maxlen = 0;
        for (const string& t : cuts) maxlen = max(t.length(), maxlen);
        for (size_t i = 0; i <= ncuts; ++i) {
          const int pcttot = (counts[0] == 0) ? -1 : round(100*counts[i]/double(counts[0]));
          const int pctinc = (i == 0 || counts[i-1] == 0) ? -1 : round(100*counts[i]/double(counts[i-1]));
          ss << "\n" << setw(maxlen+5) << left
             << (i == 0 ? "" : "Pass "+cuts[i-1]) << "   " << right
             << setw(floor(log10(counts[0]))+1) << counts[i] << "    "
             << setw(4) << (pcttot < 0 ? "- " : to_string(pcttot)+"%") << "    "
             << setw(4) << (pctinc < 0 ? "- " : to_string(pctinc)+"%");
        }
        return ss.str();
      }

      /// Print string representation to a stream
      void print(ostream& os) const {
        os << str() << flush;
      }

      string name;
      size_t ncuts;
      vector<string> cuts;
      vector<int> counts;

    };

    /// Print a Cutflow to a stream
    inline ostream& operator << (ostream& os, const Cutflow& cf) {
      return os << cf.str();
    }



    /// A container for several Cutflow objects, with some convenient batch access
    struct Cutflows {

      /// Do-nothing default constructor
      Cutflows() {  }

      /// Populating constructor
      Cutflows(const vector<Cutflow>& cutflows) : cfs(cutflows) {  }

      /// Append a provided Cutflow to the list
      void addCutflow(const Cutflow& cf) {
        cfs.push_back(cf);
      }

      /// Append a newly constructed Cutflow to the list
      void addCutflow(const string& cfname, const vector<string>& cutnames) {
        cfs.push_back(Cutflow(cfname, cutnames));
      }

      /// Access the @a i'th Cutflow
      Cutflow& operator [] (size_t i) { return cfs[i]; }
      /// Access the @a i'th Cutflow (const)
      const Cutflow& operator [] (size_t i) const { return cfs[i]; }

      /// Access the Cutflow whose name is @a name
      Cutflow& operator [] (const string& name) {
        for (Cutflow& cf : cfs)
          if (cf.name == name) return cf;
        throw runtime_error("Requested cut-flow name '" + name + "' does not exist");
      }
      /// Access the @a i'th Cutflow (const)
      const Cutflow& operator [] (const string& name) const {
        for (const Cutflow& cf : cfs)
          if (cf.name == name) return cf;
        throw runtime_error("Requested cut-flow name '" + name + "' does not exist");
      }

      /// Fill the pre-cuts state counter for all contained Cutflows
      void fillinit() {
        for (Cutflow& cf : cfs) cf.fillinit();
      }

      /// @brief Fill the @a {icut}'th post-cut counter for all contained Cutflows, starting at icut=1 for first cut
      ///
      /// @note Returns the cut result to allow 'side-effect' cut-flow filling in an if-statement
      bool fill(size_t icut, bool cutresult=true) {
        for (Cutflow& cf : cfs) cf.fill(icut, cutresult);
        return cutresult;
      }

      /// Create a string representation
      string str() const {
        stringstream ss;
        for (const Cutflow& cf : cfs)
          ss << cf << "\n\n";
        return ss.str();
      }

      /// Print string representation to a stream
      void print(ostream& os) const {
        os << str() << flush;
      }

      vector<Cutflow> cfs;

    };

    /// Print a Cutflows to a stream
    inline ostream& operator << (ostream& os, const Cutflows& cfs) {
      return os << cfs.str();
    }


  }
}
