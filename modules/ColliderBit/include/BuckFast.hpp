// Functions that do super fast detector simulation based on four vector smearing
// Note that the Delphes efficiency functions will eventually be replaced by paramterisations of the ATLAS reconstruction efficiencies
// Written by Martin White, January 2015, martin.white@adelaide.edu.au

#include <random>
#include "HEPUtils/MathUtils.h"
#include "HEPUtils/BinnedFn.h"
#include "HEPUtils/Event.h"
#include "Utils.hpp"

namespace Gambit {
  namespace ColliderBit {


    /// @todo Make binned fns static to avoid re-creating


    void applyDelphesElectronTrackingEff(std::vector<Particle*>& electrons) {
      // Function that mimics the DELPHES electron tracking efficiency

      HEPUtils::BinnedFn2D<double> _elTrackEff2d({{0,1.5,2.5,10.}}, {{0,0.1,1.0,100,10000}},
                                                 {{0., 0.73, 0.95, 0.99,
                                                   0., 0.5,  0.83, 0.90,
                                                   0., 0.,   0.,   0.}});

      // Loop over the electrons and only keep those that pass the random efficiency cut
      /// @todo Replace by filter_if + lambda
      std::vector<Particle*> survivors;
      for (Particle* e : electrons) {
        // std::cout << e->abseta() << " " << e->pT() << std::endl;
        if (random_bool(_elTrackEff2d, e->abseta(), e->pT()))
          survivors.push_back(e);
      }
      electrons = survivors;
    }


    void applyDelphesElectronEff(std::vector<Particle*>& electrons) {
      // Function that mimics the DELPHES electron efficiency
      // Should be applied after the electron energy smearing

      HEPUtils::BinnedFn2D<double> _elEff2d({{0,1.5,2.5,10.}}, {{0,10.,10000.}},
                                            {{0., 0.95, 0., 0.85, 0.,0.}});

      // Now loop over the electrons and only keep those that pass the random efficiency cut
      /// @todo Replace by filter_if + lambda
      std::vector<Particle*> survivors;
      for (Particle* e : electrons) {
        if (random_bool(_elEff2d, e->abseta(), e->pT()))
          survivors.push_back(e);
      }
      electrons = survivors;
    }


    void applyDelphesMuonTrackEff(std::vector<Particle*>& muons) {

      HEPUtils::BinnedFn2D<double> _muTrackEff2d({{0,1.5,2.5,10.}}, {{0,0.1,1.0,10000.}},
                                                 {{0., 0.75, 0.99,
                                                       0.,0.70,0.98,
                                                       0.,0.,0.}});

      // Now loop over the muons and only keep those that pass the random efficiency cut
      /// @todo Replace by filter_if + lambda
      std::vector<Particle*> survivors;
      for (Particle* mu : muons) {
        // std::cout << "MUON PT " << mu_pt << " ETA " << mu_eta << " trackeff " << _muTrackEff2d.get_at(fabs(mu_eta), fabs(mu_pt)) << std::endl;
        if (random_bool(_muTrackEff2d, mu->abseta(), mu->pT()))
          survivors.push_back(mu);
      }
      muons = survivors;
    }


    void applyDelphesMuonEff(std::vector<Particle*>& muons) {

      HEPUtils::BinnedFn2D<double> _muEff2d({{0,1.5,2.7,10.}}, {{0,10.0,10000.}},
                                            {{0., 0.95, 0.,0.85,0.,0.}});

      // Now loop over the muons and only keep those that pass the random efficiency cut
      /// @todo Replace by filter_if + lambda
      std::vector<Particle*> survivors;
      for (Particle* mu : muons) {
        //std::cout << "MUON PT " << mu_pt << " ETA " << mu_eta << " eff " << _muEff2d.get_at(fabs(mu_eta), fabs(mu_pt)) << std::endl;
        if (random_bool(_muEff2d, mu->abseta(), mu->pT()))
          survivors.push_back(mu);
      }
      muons = survivors;
    }


    void applyTauEfficiency(std::vector<Particle*>& taus) {

      HEPUtils::BinnedFn2D<double> _tauEff2d({{0,10.}}, {{0,10000.}},
                                             {{0.4}});

      /// @todo Replace by filter_if + lambda
      std::vector<Particle*> survivors;
      for (Particle* tau : taus) {
        if (random_bool(_tauEff2d, tau->abseta(), tau->pT()))
          survivors.push_back(tau);
      }
      taus = survivors;
    }


    void smearElectronEnergy(std::vector<Particle*>& electrons) {
      // Function that mimics the DELPHES electron energy resolution
      // We need to smear E, then recalculate pT, then reset 4 vector

      std::random_device rd;
      std::mt19937 gen(rd());

      HEPUtils::BinnedFn2D<float> coeffE2({{0,2.5,3.,5.}}, {{0,0.1,25.,10000.}},
                                           {{0.,0.015*0.015,0.005*0.005,
                                             0.005*0.005,0.005*0.005,0.005*0.005,
                                             0.107*0.107,0.107*0.107,0.107*0.107}});

      HEPUtils::BinnedFn2D<float> coeffE({{0,2.5,3.,5.}}, {{0,0.1,25.,10000.}},
                                          {{0.,0.,0.05*0.05,
                                            0.05*0.05,0.05*0.05,0.05*0.05,
                                            2.08*2.08,2.08*2.08,2.08*2.08}});

      HEPUtils::BinnedFn2D<float> coeffC({{0,2.5,3.,5.}}, {{0,0.1,25.,10000.}},
                                          {{0.,0.,0.25*0.25,
                                            0.25*0.25,0.25*0.25,0.25*0.25,
                                            0.,0.,0.}});

      // Now loop over the electrons and smear the 4-vectors
      for (Particle* e : electrons) {

        // Look up / calculate resolution
        const float c1 = coeffE2.get_at(e->abseta(), e->pT());
        const float c2 = coeffE.get_at(e->abseta(), e->pT());
        const float c3 = coeffC.get_at(e->abseta(), e->pT());
        const double resolution = sqrt(c1*sqr(e->E()) + c2*e->E() + c3);

        // Smear by a Gaussian centered on the current energy, with width given by the resolution
        std::normal_distribution<> d(e->E(), resolution);
        float smeared_E = d(gen);
        if (smeared_E < 0) smeared_E = 0;
        // float smeared_pt = smeared_E/cosh(e->eta()); ///< @todo Should be cosh(|eta|)?
        // std::cout << "BEFORE eta " << electron->eta() << std::endl;
        e->set_mom(P4::mkEtaPhiME(e->eta(), e->phi(), e->mass(), smeared_E));
        // std::cout << "AFTER eta " << electron->eta() << std::endl;
      }
    }


    void smearMuonMomentum(std::vector<Particle*>& muons) {
      // Function that mimics the DELPHES muon momentum resolution
      // We need to smear pT, then recalculate E, then reset 4 vector

      std::random_device rd;
      std::mt19937 gen(rd());

      HEPUtils::BinnedFn2D<float> _muEff({{0,1.5,2.5}}, {{0,0.1,1.,10.,200.,10000.}},
                                         {{0.,0.03,0.02,0.03,0.05,
                                               0.,0.04,0.03,0.04,0.05}});

      // Now loop over the muons and smear the 4-vectors
      for (Particle* mu : muons) {
        // Look up resolution
        const double resolution = _muEff.get_at(mu->abseta(), mu->pT());

        // Smear by a Gaussian centered on the current energy, with width given by the resolution
        std::normal_distribution<> d(mu->pT(), resolution*mu->pT());
        double smeared_pt = d(gen);
        if (smeared_pt < 0) smeared_pt = 0;
        // const double smeared_E = smeared_pt*cosh(mu->eta()); ///< @todo Should be cosh(|eta|)?
        // std::cout << "Muon pt " << mu_pt << " smeared " << smeared_pt << endl;
        mu->set_mom(P4::mkEtaPhiMPt(mu->eta(), mu->phi(), mu->mass(), smeared_pt));
      }
    }


    void smearJets(std::vector<HEPUtils::Jet*>& jets) {
      // Function that mimics the DELPHES muon momentum resolution
      // We need to smear pT, then recalculate E, then reset 4 vector

      std::random_device rd;
      std::mt19937 gen(rd());

      HEPUtils::BinnedFn2D<float> _jetRes({{0,10.}}, {{0,10000.}},
                                          {{0.03}});

      // Now loop over the jets and smear the 4-vectors
      for (HEPUtils::Jet* jet : jets) {
        // Look up resolution
        double resolution = _jetRes.get_at(jet->abseta(), jet->pT());

        // Smear by a Gaussian centered on 1 with width given by the (fractional) resolution
        std::normal_distribution<> d(1.,resolution);
        double smear_factor = d(gen);
        jet->set_mom(P4::mkXYZM(jet->mom().px()*smear_factor, jet->mom().py()*smear_factor, jet->mom().pz()*smear_factor, jet->mass()));
      }
    }

    void smearTaus(std::vector<HEPUtils::Particle*>& taus) {
      // Function that applies jet energy scale to hadronic taus
      // We need to smear pT, then recalculate E, then reset 4 vector
      // Basically the same function as above, except it takes a vector of particles

      std::random_device rd;
      std::mt19937 gen(rd());

      HEPUtils::BinnedFn2D<float> _jetRes({{0,10.}}, {{0,10000.}},
                                          {{0.03}});

      // Now loop over the taus and smear the 4-vectors
      for (HEPUtils::Particle* tau : taus) {
        // Look up resolution
        double resolution = _jetRes.get_at(tau->abseta(), tau->pT());

        // Smear by a Gaussian centered on 1 with width given by the (fractional) resolution
        std::normal_distribution<> d(1.,resolution);
        double smear_factor = d(gen);
        tau->set_mom(P4::mkXYZM(tau->mom().px()*smear_factor, tau->mom().py()*smear_factor, tau->mom().pz()*smear_factor, tau->mass()));
      }
    }


  }
}
