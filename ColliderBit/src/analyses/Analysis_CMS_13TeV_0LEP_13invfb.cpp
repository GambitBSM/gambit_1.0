// -*- C++ -*-
#include "gambit/ColliderBit/analyses/BaseAnalysis.hpp"
#include "gambit/ColliderBit/analyses/Cutflow.hpp"
#include "gambit/ColliderBit/CMSEfficiencies.hpp"
#include "Eigen/Eigen"

namespace Gambit {
  namespace ColliderBit {

    using namespace std;
    using namespace HEPUtils;


    /// @brief CMS Run 2 0-lepton jet+MET SUSY analysis, with 13/fb of data
    ///
    /// Based on:
    ///
    class Analysis_CMS_13TeV_0LEP_13invfb : public HEPUtilsAnalysis {
    public:

      // Numbers passing cuts
      static const size_t NUMSR = 160;
      double _srnums[NUMSR];
      Cutflow _cutflow;

      Analysis_CMS_13TeV_0LEP_13invfb() :
              _cutflow("CMS 0-lep 13 TeV", {"Njet >= 3", "HT > 300", "HTmiss > 300", "Nmuon = 0", "Nelectron = 0", "Nhadron = 0 (no-op)", "Dphi_htmiss_j1", "Dphi_htmiss_j2", "Dphi_htmiss_j3", "Dphi_htmiss_j4"})
      {
        set_luminosity(12.9);
      }


      void analyze(const Event* event) {

        HEPUtilsAnalysis::analyze(event);
        _cutflow.fillinit();

        // FinalState isofs(Cuts::abseta < 3.0 && Cuts::abspid != PID::ELECTRON && Cuts::abspid != PID::MUON);
        // FinalState cfs(Cuts::abseta < 2.5 && Cuts::abscharge != 0);

        // Get baseline jets
        vector<const Jet*> jets24, jets50;
        for (const Jet* jet : event->jets()) {
          if (jet->pT() < 30) continue;
          if (jet->abseta() < 2.4) jets24.push_back(jet);
          if (jet->abseta() < 5.0) jets50.push_back(jet);
        }
        if (jets24.size() < 3) return;
        _cutflow.fill(1);

        // HT cut
        double sumptj = 0;
        for (const Jet* j : jets24) sumptj += j->pT();
        const double ht = sumptj;
        if (ht < 300) return;
        _cutflow.fill(2);

        // HTmiss cut, from full set of jets
        P4 htvec;
        for (const Jet* jet : jets50) htvec += jet->mom();
        const double htmiss = htvec.pT();
        if (htmiss < 300) return;
        _cutflow.fill(3);


        // Get baseline electrons
        vector<const Particle*> baseelecs;
        for (const Particle* electron : event->electrons())
          if (electron->pT() > 10. && electron->abseta() < 2.5)
            baseelecs.push_back(electron);

        // Get baseline muons
        vector<const Particle*> basemuons;
        for (const Particle* muon : event->muons())
          if (muon->pT() > 10. && muon->abseta() < 2.4)
            basemuons.push_back(muon);

        // Electron isolation
        /// @todo Sum should actually be over all non-e/mu calo particles
        vector<const Particle*> elecs;
        for (const Particle* e : baseelecs) {
          const double R = max(0.05, min(0.2, 10/e->pT()));
          double sumpt = -e->pT();
          for (const Jet* j : jets50)
            if (e->mom().deltaR_eta(j->mom()) < R) sumpt += j->pT();
          if (sumpt/e->pT() < 0.1) elecs.push_back(e);
        }

        // Muon isolation
        /// @todo Sum should actually be over all non-e/mu calo particles
        vector<const Particle*> muons;
        for (const Particle* m : basemuons) {
          const double R = max(0.05, min(0.2, 10/m->pT()));
          double sumpt = -m->pT();
          for (const Jet* j : jets50)
            if (m->mom().deltaR_eta(j->mom()) < R) sumpt += j->pT();
          if (sumpt/m->pT() < 0.2) muons.push_back(m);
        }

        // Veto the event if there are any remaining baseline leptons
        if (!muons.empty()) return;
        _cutflow.fill(4);
        if (!elecs.empty()) return;
        _cutflow.fill(5);


        /// @todo Need access to charged hadrons to do this isolation
        // // Get isolated tracks
        // Particles trks25 = apply<ParticleFinder>(event, "Tracks").particles();
        // ifilter_discard(trks25, [&](const Particle& t) {
        //     double ptsum = -t->pT();
        //     for (const Particle& p : trks25)
        //       if (deltaR(p,t) < 0.3) ptsum += p->pT();
        //     return ptsum/t->pT() > ((t.abspid() == PID::ELECTRON || t.abspid() == PID::MUON) ? 0.2 : 0.1);
        //   });
        // const Particles trks = filter_select(trks25, Cuts::abseta < 2.4);
        //
        // // Isolated track pT, pTmiss and mT cut
        // // mT^2 = m1^2 + m2^2 + 2(ET1 ET2 - pT1 . pT2))
        // // => mT0^2 = 2(ET1 |pT2| - pT1 . pT2)) for m1, m2 -> 0
        // FourMomentum ptmissvec = htmissvec; ///< @todo Can we do better? No e,mu left...
        // const double ptmiss = ptmissvec->pT();
        // for (const Particle& t : trks) {
        //   const double ptcut = (t.abspid() == PID::ELECTRON || t.abspid() == PID::MUON) ? 5 : 10;
        //   const double mT = sqrt( t.mass2() + 2*(t.Et()*ptmiss - t->pT()*ptmiss*cos(deltaPhi(t,ptmissvec))) );
        //   if (mT < 100 && t->pT() < ptcut) vetoEvent;
        // }
        _cutflow.fill(6);


        // Lead jets isolation from Htmiss
        if (deltaPhi(-htvec, jets24[0]->mom()) < 0.5) return;
        _cutflow.fill(7);
        if (deltaPhi(-htvec, jets24[1]->mom()) < 0.5) return;
        _cutflow.fill(8);
        if (deltaPhi(-htvec, jets24[2]->mom()) < 0.3) return;
        _cutflow.fill(9);
        if (jets24.size() >= 4 && deltaPhi(-htvec, jets24[3]->mom()) < 0.3) return;
        _cutflow.fill(10);


        ////////


        // Calculate a bin index for this event
        // Nj bin
        static const vector<double> njedges = {3., 5., 7., 9.};
        const size_t nj = jets24.size();
        // Nbj bin
        static const vector<double> njbedges = {0., 1., 2., 3.};
        const size_t inj = binIndex(nj, njedges, true);
        size_t nbj = 0;
        for (const Jet* j : jets24)
          /// @note b-tag effs: b: 0.55, c: 0.12, l: 0.016
          if (j->btag() && j->pT() > 50 && j->abseta() < 2.5 && rand01() < 0.55) nbj += 1;
        const size_t inbj = binIndex(nbj, njbedges, true);
        // HTmiss vs HT 2D bin
        int iht = 0;
        if (htmiss < 350) {
          iht = ht < 500 ? 1 : ht < 1000 ? 2 : 3;
        } if (htmiss < 500 && ht > 350) {
          iht = ht < 500 ? 4 : ht < 1000 ? 5 : 6;
        } if (htmiss < 750 && ht > 500) {
          iht = ht < 1000 ? 7 : 8;
        } if (ht > 750) {
          iht = ht < 1500 ? 9 : 10;
        }

        // Calc total bin number and fill SR counter (NB. no overlaps)
        if (iht == 0) return;
        iht -= 1; //< change from the paper's indexing scheme to C++ zero-indexed
        const size_t ibin = 40*inj + 10*inbj + (size_t)iht;
        _srnums[ibin] += 1;

      }


      void add(BaseAnalysis* other) {
        // The base class add function handles the signal region vector and total # events.
        HEPUtilsAnalysis::add(other);

        Analysis_CMS_13TeV_0LEP_13invfb* specificOther = dynamic_cast<Analysis_CMS_13TeV_0LEP_13invfb*>(other);

        for (size_t i = 0; i < NUMSR; ++i)
          _srnums[i] += specificOther->_srnums[i];
      }


      /// Register results objects with the results for each SR; obs & bkg numbers from the CONF note
      void collect_results() {
        cout << _cutflow << endl;

        static const string ANAME = "Analysis_CMS_13TeV_0LEP_13invfb";
        static const double OBSNUM[NUMSR] = {};
        static const double BKGNUM[NUMSR] = {};
        static const double BKGERR[NUMSR] = {};
        for (size_t ibin = 0; ibin < NUMSR; ++ibin) {
          stringstream ss; ss << "sr-" << ibin;
          add_result(SignalRegionData(ANAME, ss.str(), OBSNUM[ibin], {_srnums[ibin],  0.}, {BKGNUM[ibin], BKGERR[ibin]}));
        }
      }

    };


    // Factory fn
    DEFINE_ANALYSIS_FACTORY(CMS_13TeV_0LEP_13invfb)


  }
}
