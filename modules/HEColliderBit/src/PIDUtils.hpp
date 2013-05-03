#pragma once

/// @file Utility functions for querying PDG ID codes, including HepPID wrapping
/// @author Andy Buckley <andy.buckley@cern.ch>

#include "PIDCodes.hpp"
#include "MathUtils.hpp"
#include "HepPID_ParticleIDMethods.hpp"

namespace GAMBIT {
  namespace PID {


    /// @name General PID-based classifier functions
    //@{

    /// Determine if the particle is electrically charged
    inline bool isCharged(int pid) {
      return threeCharge(pid) != 0;
    }

    /// Determine if the particle is electrically neutral
    inline bool isNeutral(int pid) {
      return threeCharge(pid) == 0;
    }


    /// @name Fundamental particles
    //@{

    /// Determine if the PID is that of a quark
    inline bool isQuark(int pid) {
      return inRange(abs(pid), 1, 7);
    }

    /// Determine if the PID is that of a parton (quark or gluon)
    inline bool isParton(int pid) {
      return pid == GLUON || isQuark(pid);
    }

    /// Determine if the PID is that of a photon
    inline bool isPhoton(int pid) {
      return pid == PHOTON;
    }

    /// @todo Add isElectron, Muon, Tau (and +- specific versions?)... and is(Anti)Proton?

    /// Determine if the PID is that of a W+
    inline bool isWplus(int pid) {
      return pid == WPLUSBOSON;
    }

    /// Determine if the PID is that of a W-
    inline bool isWminus(int pid) {
      return pid == WMINUSBOSON;
    }

    /// Determine if the PID is that of a W+-
    inline bool isW(int pid) {
      return abs(pid) == WPLUSBOSON;
    }

    /// Determine if the PID is that of a Z0
    inline bool isZ(int pid) {
      return pid == Z0BOSON;
    }

    /// Determine if the PID is that of an SM/lightest SUSY Higgs
    inline bool isHiggs(int pid) {
      return pid == HIGGSBOSON || pid == 26; //< @todo Check on 26 still needed? (used in HERWIG SUSY, for example)
    }

    /// Determine if the PID is that of a t/tbar
    inline bool isTop(int pid) {
      return abs(pid) == 6;
    }

    //@}


    /// @name Hadrons
    //@{

    /// Determine if the PID is that of a heavy flavour (b or c) hadron
    inline bool isHeavyHadron(int pid) {
      return PID::isHadron(pid) && (PID::hasCharm(pid) || PID::hasBottom(pid));
    }

    /// Determine if the PID is that of a strange hadron
    inline bool isStrangeHadron(int pid) {
      return PID::isHadron(pid) && PID::hasStrange(pid);
    }

    /// Determine if the PID is that of a light flavour (not b or c) hadron
    inline bool isLightHadron(int pid) {
      return PID::isHadron(pid) && !(PID::hasCharm(pid) || PID::hasBottom(pid));
    }

    /// Determine if the PID is that of a b-meson.
	inline bool isBMeson(int pid) {
	  return hasBottom(pid) && isMeson(pid);
	}

    /// Determine if the PID is that of a b-baryon.
	inline bool isBBaryon(int pid) {
	  return hasBottom(pid) && isBaryon(pid);
	}

    /// Determine if the PID is that of a b-hadron.
	inline bool isBHadron(int pid) {
	  return hasBottom(pid) && isHadron(pid);
	}

    /// @brief Determine if the PID is that of a c-meson.
    ///
    /// Specifically, the _heaviest_ quark is a c: a B_c is a b-meson and NOT a c-meson.
    /// Charmonia (closed charm) are counted as c-mesons here.
	inline bool isCMeson(int pid) {
	  return isMeson(pid) && (digit(nq2,pid) == 4);
	}

    /// @brief Determine if the PID is that of a c-baryon.
    ///
    /// Specifically, the _heaviest_ quark is a c: a baryon containing a b & c
    /// is a b-baryon and NOT a c-baryon. To test for the simpler case, just use
    /// a combination of hasCharm() and isBaryon().
	inline bool isCBaryon(int pid) {
	  return isBaryon(pid) && (digit(nq1,pid) == 4);
	}

    /// Determine if the PID is that of a c-hadron.
	inline bool isCHadron(int pid) {
	  return isCMeson(pid) || isCBaryon(pid);
	}

    //@}


    /// Determine if the PID is in the generator-specific range
    inline bool isGenSpecific(int pid) {
      return inRange(pid, 80, 101);
    }

    /// Determine if the PID is that of an EW scale resonance
    ///
    /// @todo Also include SUSY, technicolor, etc. etc.? Maybe via a isStandardModel(pid) function, but there are stable BSM particles (in principle)
    inline bool isResonance(int pid) {
      return isW(pid) || isZ(pid) || isHiggs(pid) || isTop(pid);
    }

    /// Check the PID for usability in transport codes like Geant4
    ///
    /// @todo Should exclude neutrinos/LSP, since the ATLAS G4 interface deletes them immediately?
    inline bool isTransportable(int pid) {
      // return !isResonance(pid) && !isParton(pid) && !isGenSpecific(pid);
      return isPhoton(pid) || isHadron(pid) || isLepton(pid);
    }

    //@}


  }
}
