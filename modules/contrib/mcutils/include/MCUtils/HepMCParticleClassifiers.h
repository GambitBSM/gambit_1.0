#pragma once

/// @file Functions for filtering and classifying HepMC record contents
/// @author Andy Buckley <andy.buckley@cern.ch>
/// @author Nataliia Kondrashova <Nataliia.Kondrashova@cern.ch>

#include "HepMC/GenEvent.h"
#include "boost/function.hpp" //< Replace with std::function when possible
#include <vector>

// Provide convenience foreach loop -- particularly nice for HepMC walking combined with the functions below
#include "boost/foreach.hpp"
#ifndef foreach
#define foreach BOOST_FOREACH
#endif

#include "MCUtils/HepMCEventUtils.h"
#include "MCUtils/PIDUtils.h"
#include "MCUtils/Vectors.h"

namespace MCUtils {


  /// @name GenParticle classifier functions
  //@{

  /// Convenient type name for a generic classifier function / function object
  typedef boost::function<bool(const HepMC::GenParticle*)> PClassifier;



  /// Is this particle species charged?
  inline bool isCharged(const HepMC::GenParticle* p) {
    return PID::isCharged(p->pdg_id());
  }

  /// Is this particle species neutral?
  inline bool isNeutral(const HepMC::GenParticle* p) {
    return PID::isNeutral(p->pdg_id());
  }

  /// Is this a neutrino?
  inline bool isNeutrino(const HepMC::GenParticle* p) {
    return PID::isNeutrino(p->pdg_id());
  }

  /// Determine if the PID is that of a charged lepton
  inline bool isChLepton(const HepMC::GenParticle* p) {
    return PID::isChLepton(p->pdg_id());
  }

  /// Determine if the PID is that of a photon
  inline bool isPhoton(const HepMC::GenParticle* p) {
    return PID::isPhoton(p->pdg_id());
  }

  /// Determine if the PID is that of an electron or positron
  inline bool isElectron(const HepMC::GenParticle* p) {
    return PID::isElectron(p->pdg_id());
  }

  /// Determine if the PID is that of an muon or antimuon
  inline bool isMuon(const HepMC::GenParticle* p) {
      return PID::isMuon(p->pdg_id());
  }

  /// Determine if the PID is that of an tau or antitau
  inline bool isTau(const HepMC::GenParticle* p) {
    return PID::isTau(p->pdg_id());
  }

  /// Determine if the PID is that of a hadron
  inline bool isHadron(const HepMC::GenParticle* p) {
    return PID::isHadron(p->pdg_id());
  }

  /// Determine if the PID is that of a meson
  inline bool isMeson(const HepMC::GenParticle* p) {
    return PID::isMeson(p->pdg_id());
  }

  /// Determine if the PID is that of a baryon
  inline bool isBaryon(const HepMC::GenParticle* p) {
    return PID::isBaryon(p->pdg_id());
  }

  /// Determine if the PID is that of a quark
  inline bool isQuark(const HepMC::GenParticle* p) {
    return PID::isQuark(p->pdg_id());
  }

  /// Determine if the PID is that of a parton (quark or gluon)
  inline bool isParton(const HepMC::GenParticle* p) {
    return PID::isParton(p->pdg_id());
  }


  /// Determine if the PID is that of a W+
  inline bool isWplus(const HepMC::GenParticle* p) {
    return PID::isWplus(p->pdg_id());
  }

  /// Determine if the PID is that of a W-
  inline bool isWminus(const HepMC::GenParticle* p) {
    return PID::isWminus(p->pdg_id());
  }

  /// Determine if the PID is that of a W+-
  inline bool isW(const HepMC::GenParticle* p) {
    return PID::isW(p->pdg_id());
  }

  /// Determine if the PID is that of a Z0
  inline bool isZ(const HepMC::GenParticle* p) {
    return PID::isZ(p->pdg_id());
  }

  /// Determine if the PID is that of an SM/lightest SUSY Higgs
  inline bool isHiggs(const HepMC::GenParticle* p) {
    return PID::isHiggs(p->pdg_id());
  }

  /// Determine if the PID is that of a t/tbar
  inline bool isTop(const HepMC::GenParticle* p) {
    return PID::isTop(p->pdg_id());
  }



  /// Determine if the PID is that of a light flavour (not b or c) meson
  inline bool isLightMeson(const HepMC::GenParticle* p) {
    return PID::isLightMeson(p->pdg_id());
  }

  /// Determine if the PID is that of a light flavour (not b or c) baryon
  inline bool isLightBaryon(const HepMC::GenParticle* p) {
    return PID::isLightBaryon(p->pdg_id());
  }

  /// Determine if the PID is that of a light flavour (not b or c) hadron
  inline bool isLightHadron(const HepMC::GenParticle* p) {
    return PID::isLightHadron(p->pdg_id());
  }

  /// Determine if the PID is that of a heavy flavour (b or c) meson
  inline bool isHeavyMeson(const HepMC::GenParticle* p) {
    return PID::isHeavyMeson(p->pdg_id());
  }

  /// Determine if the PID is that of a heavy flavour (b or c) baryon
  inline bool isHeavyBaryon(const HepMC::GenParticle* p) {
    return PID::isHeavyBaryon(p->pdg_id());
  }

  /// Determine if the PID is that of a heavy flavour (b or c) hadron
  inline bool isHeavyHadron(const HepMC::GenParticle* p) {
    return PID::isHeavyHadron(p->pdg_id());
  }

  /// Determine if the PID is that of a b-meson.
  inline bool isBottomMeson(const HepMC::GenParticle* p) {
    return PID::isBottomMeson(p->pdg_id());
  }

  /// Determine if the PID is that of a b-baryon.
  inline bool isBottomBaryon(const HepMC::GenParticle* p) {
    return PID::isBottomBaryon(p->pdg_id());
  }

  /// Determine if the PID is that of a b-hadron.
  inline bool isBottomHadron(const HepMC::GenParticle* p) {
    return PID::isBottomHadron(p->pdg_id());
  }

  /// @brief Determine if the PID is that of a c-meson.
  ///
  /// Specifically, the _heaviest_ quark is a c: a B_c is a b-meson and NOT a c-meson.
  /// Charmonia (closed charm) are counted as c-mesons here.
  inline bool isCharmMeson(const HepMC::GenParticle* p) {
    return PID::isCharmMeson(p->pdg_id());
  }

  /// @brief Determine if the PID is that of a c-baryon.
  ///
  /// Specifically, the _heaviest_ quark is a c: a baryon containing a b & c
  /// is a b-baryon and NOT a c-baryon. To test for the simpler case, just use
  /// a combination of hasCharm() and isBaryon().
  inline bool isCharmBaryon(const HepMC::GenParticle* p) {
    return PID::isCharmBaryon(p->pdg_id());
  }

  /// Determine if the PID is that of a c-hadron.
  inline bool isCharmHadron(const HepMC::GenParticle* p) {
    return PID::isCharmHadron(p->pdg_id());
  }

  /// Determine if the PID is that of a strange meson
  inline bool isStrangeMeson(const HepMC::GenParticle* p) {
    return PID::isStrangeMeson(p->pdg_id());
  }

  /// Determine if the PID is that of a strange baryon
  inline bool isStrangeBaryon(const HepMC::GenParticle* p) {
    return PID::isStrangeBaryon(p->pdg_id());
  }

  /// Determine if the PID is that of a strange hadron
  inline bool isStrangeHadron(const HepMC::GenParticle* p) {
    return PID::isStrangeHadron(p->pdg_id());
  }


  /// Determine if the PID is in the generator-specific range
  inline bool isGenSpecific(const HepMC::GenParticle* p) {
    return PID::isGenSpecific(p->pdg_id());
  }

  /// Determine if the PID is that of an EW scale resonance
  inline bool isResonance(const HepMC::GenParticle* p) {
    return PID::isResonance(p->pdg_id());
  }

  /// Check the PID for usability in transport codes like Geant4
  inline bool isTransportable(const HepMC::GenParticle* p) {
    return PID::isTransportable(p->pdg_id());
  }


  /// @brief Is this particle the first of its type in the 'decay' chain?
  ///
  /// i.e. it has no parents with the same PID
  inline bool isFirstReplica(const HepMC::GenParticle* p) {
    if (!p->production_vertex()) return true;
    bool isfirst = true;
    foreach (const HepMC::GenParticle* m, const_parents(p->production_vertex())) {
      if (m->pdg_id() == p->pdg_id()) {
        isfirst = false;
        break;
      }
    }
    return isfirst;
  }

  /// @brief Is this particle the last of its type in the 'decay' chain?
  ///
  /// i.e. it has no daughters with the same PID
  inline bool isLastReplica(const HepMC::GenParticle* p) {
    if (!p->end_vertex()) return true;
    bool islast = true;
    foreach (const HepMC::GenParticle* d, const_children(p->end_vertex())) {
      if (d->pdg_id() == p->pdg_id()) {
        islast = false;
        break;
      }
    }
    return islast;
  }


  /// @todo Add isPrompt (with what definition?)


  /// A function object with state of the status code to be tested for
  /// @todo Generalise to allow comparison to multiple statuses
  struct HasStatus {
    HasStatus(int status) : status(status) { }
    bool operator()(const HepMC::GenParticle* p) {
      return p->status() == status;
    }
    int status;
  };

  /// A function object with state of the PID codes to be tested for
  struct HasPID {
    HasPID(long pid) { pids.push_back(pid); }
    HasPID(const std::vector<long>& pids) : pids(pids) { }
    bool operator()(const HepMC::GenParticle* p) {
      return std::find(pids.begin(), pids.end(), p->pdg_id()) != pids.end();
    }
    std::vector<long> pids;
  };

  /// A function object with state of the PID codes to be tested for (including antiparticles)
  struct HasAbsPID {
    HasAbsPID(long pid) { pids.push_back(pid); }
    HasAbsPID(const std::vector<long>& pids) : pids(pids) { }
    bool operator()(const HepMC::GenParticle* p) {
      return (std::find(pids.begin(), pids.end(), p->pdg_id()) != pids.end()) ||
        (std::find(pids.begin(), pids.end(), -p->pdg_id()) != pids.end());
    }
    std::vector<long> pids;
  };


  /// @todo Specify and handle units
  inline bool ptLess(const HepMC::GenParticle* p, double ptmax) {
    return p->momentum().perp() < ptmax;
  }
  /// @todo Specify and handle units
  struct PtLess {
    PtLess(double ptmax) : ptmax(ptmax) { }
    bool operator()(const HepMC::GenParticle* p) {
      return ptLess(p, ptmax);
    }
    double ptmax;
  };


  /// @todo Specify and handle units
  inline bool ptGtr(const HepMC::GenParticle* p, double ptmin) {
    return p->momentum().perp() >= ptmin;
  }
  /// @todo Specify and handle units
  struct PtGtr {
    PtGtr(double ptmin) : ptmin(ptmin) { }
    bool operator()(const HepMC::GenParticle* p) {
      return ptGtr(p, ptmin);
    }
    double ptmin;
  };


  inline bool inEtaRange(const HepMC::GenParticle* p, double etamin, double etamax) {
    return inRange(eta(p->momentum()), etamin, etamax);
  }
  struct InEtaRange {
    InEtaRange(double etamin, double etamax) : etamin(etamin), etamax(etamax) { }
    bool operator()(const HepMC::GenParticle* p) {
      return inEtaRange(p, etamin, etamax);
    }
    double etamin, etamax;
  };
  struct NotInEtaRange {
    NotInEtaRange(double etamin, double etamax) : etamin(etamin), etamax(etamax) { }
    bool operator()(const HepMC::GenParticle* p) {
      return !inEtaRange(p, etamin, etamax);
    }
    double etamin, etamax;
  };


  inline bool inRapRange(const HepMC::GenParticle* p, double ymin, double ymax) {
    return inRange(rap(p->momentum()), ymin, ymax);
  }
  struct InRapRange {
    InRapRange(double ymin, double ymax) : ymin(ymin), ymax(ymax) { }
    bool operator()(const HepMC::GenParticle* p) {
      return inRapRange(p, ymin, ymax);
    }
    double ymin, ymax;
  };
  struct NotInRapRange {
    NotInRapRange(double ymin, double ymax) : ymin(ymin), ymax(ymax) { }
    bool operator()(const HepMC::GenParticle* p) {
      return !inRapRange(p, ymin, ymax);
    }
    double ymin, ymax;
  };

  //@}



  /// @name Non-PID-based particle classifiers
  //@{

  /// Determine whether the particle is stable
  inline bool isStable(const HepMC::GenParticle* p) {
    return p->status() == 1;
  }

  /// Determine whether the particle is physical but decayed
  inline bool isDecayed(const HepMC::GenParticle* p) {
    return p->status() == 2;
  }

  /// @brief Determine whether the particle is outside the physical status code range
  ///
  /// If the answer is "true", use with extreme, generator-specific care!
  inline bool hasNonStandardStatus(const HepMC::GenParticle* p) { return !inRange(p->status(), 1, 5); }

  /// Is this a physically reliable final state particle? (as opposed to a debugging entry)
  inline bool isPhysical(const HepMC::GenParticle* p) {
    return isStable(p) || isDecayed(p);
  }

  /// Is this a physically reliable hadron? (as opposed to a debugging entry)
  inline bool isPhysicalHadron(const HepMC::GenParticle* p) {
    return isHadron(p) && isPhysical(p);
  }
  /// Determine if the particle is a decayed hadron
  inline bool isDecayedHadron(const HepMC::GenParticle* p) {
    return isDecayed(p) && isHadron(p);
  }

  /// Determine if the particle is a decayed tau
  inline bool isDecayedTau(const HepMC::GenParticle* p) {
    return isDecayed(p) && isTau(p);
  }

  //@}



  /// @name Classifiers for particles based on their relationships to others
  //@{

  /// @brief Determine whether the given particle has an ancestor that matches the given classifier
  inline bool fromAncestorWith(const HepMC::GenParticle* p, const PClassifier& c) {
    /// @todo *sigh* Missing const methods in HepMC...
    HepMC::GenVertex* gv = const_cast<HepMC::GenVertex*>(p->production_vertex());
    if (gv == NULL) return false;
    /// @todo HepMC needs const versions of these iterator methods :-/
    for (HepMC::GenVertex::particle_iterator pi = gv->particles_begin(HepMC::ancestors); pi != gv->particles_end(HepMC::ancestors); ++pi) {
      if (c(*pi)) return true;
    }
    return false;
  }

  /// @brief Determine whether the given particle has a descendant that matches the given classifier
  inline bool hasDescendantWith(const HepMC::GenParticle* p, const PClassifier& c) {
    /// @todo *sigh* Missing const methods in HepMC...
    HepMC::GenVertex* gv = const_cast<HepMC::GenVertex*>(p->end_vertex());
    if (gv == NULL) return false;
    /// @todo HepMC needs const versions of these iterator methods :-/
    for (HepMC::GenVertex::particle_iterator pi = gv->particles_begin(HepMC::descendants); pi != gv->particles_end(HepMC::descendants); ++pi) {
      if (c(*pi)) return true;
    }
    return false;
  }


  /// Determine if the particle is a hadronically decayed tau
  inline bool isHadronicTau(const HepMC::GenParticle* p) {
    return isDecayedTau(p) && hasDescendantWith(p, isHadron);
  }
  /// Determine if the particle is a leptonically decayed tau
  inline bool isLeptonicTau(const HepMC::GenParticle* p) {
    return isDecayedTau(p) && !hasDescendantWith(p, isHadron);
  }


  /// @brief Helper function used in detecting hadron/tau decay daughters
  ///
  /// @todo Use C++11 lambda when available
  inline bool _isDecayedHadronOrTau(const HepMC::GenParticle* p) {
    return isDecayed(p) && (isTau(p) || isHadron(p));
  }
  /// @brief Determine whether the given particle is from a hadron or tau decay
  ///
  /// Specifically, walk up the ancestor chain until a status 2 hadron or tau is found, if at all.
  inline bool fromDecay(const HepMC::GenParticle* p) {
    return fromAncestorWith(p, _isDecayedHadronOrTau);
  }


  /// @brief Determine whether the given particle is from a hadron decay
  ///
  /// Specifically, walk up the ancestor chain until a status 2 hadron is found, if at all.
  inline bool fromHadronDecay(const HepMC::GenParticle* p) {
    return fromAncestorWith(p, isDecayedHadron);
  }

  /// @brief Determine whether the given particle is from a tau decay
  ///
  /// Specifically, walk up the ancestor chain until a status 2 tau is found, if at all.
  inline bool fromTauDecay(const HepMC::GenParticle* p) {
    return fromAncestorWith(p, isDecayedTau);
  }

  /// @brief Determine whether the given particle is from a hadronic tau decay
  ///
  /// Specifically, walk up the ancestor chain until a status 2 tau is found, if at all.
  inline bool fromHadronicTauDecay(const HepMC::GenParticle* p) {
    return fromAncestorWith(p, isHadronicTau);
  }


  /// Helper function used in detecting HF hadron/tau decay daughters
  /// @todo Use a C++11 inline lambda when available
  inline bool _isDecayedHFHadronOrTau(const HepMC::GenParticle* p) {
    // if (isDecayed(p) && (abs(p->pdg_id()) == PID::TAU || isHeavyHadron(p)))
    //   std::cout << "HFTau: " << p->barcode() << ", " << p->pdg_id() << p->status() << std::endl;
    return isDecayed(p) && (isTau(p) || isHeavyHadron(p));
  }
  /// @brief Determine whether the given particle is from a HF hadron or tau decay
  ///
  /// Specifically, walk up the ancestor chain until a status 2 c/b hadron or tau is found, if at all.
  inline bool fromTauOrHFDecay(const HepMC::GenParticle* p) {
    return fromAncestorWith(p, _isDecayedHFHadronOrTau);
  }


  /// @todo Add more explanatory variants for e.g. isBremPhoton... this one's not obviously of general usefulness
  ///
  // inline bool isBremsstrahlung(const HepMC::GenParticle* p) {
  //   if (abs(p->pdg_id()) != ELECTRON) return false;
  //   if (!p->end_vertex()) return false;
  //   if (p->end_vertex()->particles_out_size() != 2) return isNotBrem;
  //   // Ensure that the children are a corresponding e+/e- and a photon
  //   int mult = 1;
  //   /// @todo Ripe for clean-up with new accessor functions!
  //   HepMC::GenVertex::particle_iterator child = p->end_vertex()->particles_begin(HepMC::children);
  //   HepMC::GenVertex::particle_iterator childE = p->end_vertex()->particles_end(HepMC::children);
  //   for (; child != childE; ++child) {
  //     /// @todo Make sure that the electron/positron child matches p
  //     if (abs((*child)->pdg_id()) != 11 && (*child)->pdg_id() != PHOTON) return false;
  //     mult *= (*child)->pdg_id();
  //   }
  //   if (abs(mult) != 11*22) return false;
  //   return true;
  // }

  /// @todo Also an isConversion()/isConverted() type of function? Should be used on the photon or electrons?

  //@}


}
