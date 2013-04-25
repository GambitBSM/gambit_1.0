#pragma once

#include "Particle.hpp"
#include "Jet.hpp"

namespace GAMBIT {


  /// Simple event class, separating into various classes of particle
  class Event {
  public:

    /// @todo Need separate types of event (subclasses?) for what gets passed to
    /// detsim and to analysis?

    /// @todo This class should be able to do its own MET and SET calculations,
    /// identify photons, electrons, muons, taus, charged and neutral hadrons, B
    /// hadrons/quarks, and construct jets (?)


    /// @name Constructors
    //@{

    /// Default constructor
    Event() { clear(); }

    /// Constructor from a list of Particles
    Event(const vector<Particle*>& ps) {
      clear();
      addParticles(ps);
    }

    /// Destructor (cleans up all passed Particles and calculated Jets)
    ~Event() {
      clear();
    }

    //@}

    /// Empty the event's particle, jet and MET collections
    void clear() {
      foreach (Particle* p, particles()) delete p;
      _photons.clear();
      _electrons.clear();
      _muons.clear();
      _taus.clear();
      _invisibles.clear();

      if (!_jets.empty()) foreach (Jet* j, jets()) delete j;
      _jets.clear();

      _pmiss = P4();
    }


    /// Add a final state particle to the event
    /// @todo Clarify ownership/lifetimes -- owned by outside code, or *to be cleaned up by the event on deletion*? THE LATTER
    /// @todo What about taus and Bs?
    /// @todo "Lock" at some point so that jet finding etc. only get done once
    void addParticle(const Particle* p) {
      if (p.isPrompt()) {
        if (p.pid() == 22) _photons.push_back(p);
        if (abs(p.pid()) == 11) _electrons.push_back(p);
        if (abs(p.pid()) == 13) _muons.push_back(p);
        if (abs(p.pid()) == 15) _taus.push_back(p);
        if (abs(p.pid()) == 12 || abs(p.pid()) == 14 || abs(p.pid()) == 16 || abs(p.pid()) == 1000022) _invisibles.push_back(p);
      }
    }


    /// Add a collection of final state particles to the event
    /// @todo Should be vector<const Particle*>?
    void addParticles(const vector<Particle*>& ps) {
      for (size_t i = 0; i < ps.size(); ++i) addParticle(ps[i]);
    }


    /// Get all final state particles
    /// @todo Note the return by value: it's not efficient yet!
    vector<Particle*> particles() const {
      // Add together all the vectors of the different particle types
      vector<Particle*> rtn;
      rtn.reserve(_photons.size() + _electrons.size() + _muons.size() + _taus.size() + _invisibles.size());
      #define APPEND_VEC(vec) rtn.insert(rtn.end(), vec.begin(), vec.end() )
      APPEND_VEC(visible_particles());
      APPEND_VEC(_invisibles);
      #undef APPEND_VEC
      return rtn;
      /// @todo Or use Boost range join to iterate over separate containers transparently... I like this
      /// @todo Cache, or otherwise think about efficiency since this gets called by the destructor
    }


    /// Get visible state particles
    /// @todo Note the return by value: it's not efficient yet!
    const vector<Particle*> visible_particles() const {
      // Add together all the vectors of the different particle types
      vector<Particle*> rtn;
      rtn.reserve(_photons.size() + _electrons.size() + _muons.size() + _taus.size());
      #define APPEND_VEC(vec) rtn.insert(rtn.end(), vec.begin(), vec.end() )
      APPEND_VEC(_photons);
      APPEND_VEC(_electrons);
      APPEND_VEC(_muons);
      APPEND_VEC(_taus);
      #undef APPEND_VEC
      return rtn;
      /// @todo Add together all the vectors of the different particle types
      /// @todo Or use Boost range join to iterate over separate containers transparently... I like this
    }


    /// Get invisible final state particles
    const vector<Particle*>& invisible_particles() const {
      return _invisibles;
    }


    /// Get prompt electrons
    const vector<Particle*>& electrons() const {
      return _electrons;
    }


    /// Get prompt muons
    const vector<Particle*>& muons() const {
      return _muons;
    }


    /// Get prompt taus
    const vector<Particle*>& taus() const {
      return _taus;
    }


    /// Get prompt photons
    const vector<Particle*>& photons() const {
      return _photons;
    }


    /// @brief Get anti-kT 0.4 jets, with leptons and photons excluded
    ///
    /// If the jets vector is empty, it will be calculated on demand (and auto-cached)
    const vector<Jet*>& jets() const;

    /// Explicitly set the jets collection (will override on-the-fly calculation)
    void setJets(const vector<Jet*>& jets) {
      _jets = jets;
    }

    /// Explicitly add a jet to the jets collection (will override on-the-fly calculation)
    void addJet(const Jet* j) {
      _jets.push_back(j);
    }


    /// @brief Get the missing energy vector
    ///
    /// Not _necessarily_ the sum over momenta of final state invisibles
    const P4& missingMom() const {
      return _pmiss;
    }

    /// @brief Set the missing energy vector
    ///
    /// Not _necessarily_ the sum over momenta of final state invisibles
    void missingMom(const P4& pmiss) {
      _pmiss = pmiss;
    }

    /// Get the missing ET in GeV
    double met() const { return missingMom().pT(); }


  private:

    /// @name Internal particle / vector containers
    //@{

    /// @name Separate particle collections
    //@{
    /// @todo Do we really need to store invisibles, since they aren't
    /// experimentally resolveable, and are covered by the explicitly-set
    /// missing-mom?
    vector<Particle*> _photons, _electrons, _muons, _taus, _invisibles;
    //@}

    /// Jets collection (calculated on the fly, hence mutable to allow laziness)
    mutable vector<Jet*> _jets;

    /// Missing momentum vector
    P4 _pmiss;

    //@}

  };


}
