// Functions that do super fast detector simulation based on four vector smearing
// Note that the Delphes efficiency functions will eventually be replaced by paramterisations of the ATLAS reconstruction efficiencies
// Written by Martin White, January 2015, martin.white@adelaide.edu.au


#include <random>
#include "HEPUtils/MathUtils.h"
#include "HEPUtils/BinnedFn.h"
#include "HEPUtils/Event.h"
#include "Utils.hpp"

namespace Gambit{
  namespace ColliderBit{
    
    void ApplyDelphesElectronTrackingEff(std::vector<Particle*> &electrons){
      
      //Function that mimics the DELPHES electron tracking efficiency
      
      HEPUtils::BinnedFn2D<double> _elTrackEff2d({{0,1.5,2.5,10.}}, {{0,0.1,1.0,100,10000}},
						 {{0., 0.73, 0.95, 0.99,
						       0.,0.5,0.83,0.90,
						       0.,0.,0.,0.}});
      
      std::cout << "About to loop" << std::endl;
      //Now loop over the electrons and only keep those that pass the random efficiency cut
      std::vector<Particle*> Survivors;
      
      for(Particle* electron : electrons ) {
	double e_pt=electron->pT();
	double e_eta=electron->eta();
	
	bool hasTag = false;
	
	std::cout << "Getting random bool " << fabs(e_eta) << " " << e_pt << std::endl;
	hasTag = random_bool(_elTrackEff2d, fabs(e_eta),e_pt);
	
	if(hasTag)Survivors.push_back(electron);
      }
      electrons=Survivors;
    }
    
    void ApplyDelphesElectronEff(std::vector<Particle*> &electrons){
      //Function that mimics the DELPHES electron efficiency
      //Should be applied after the electron energy smearing
      
      HEPUtils::BinnedFn2D<double> _elEff2d({{0,1.5,2.5,10.}}, {{0,10.,1000.}},
					    {{0., 0.95, 0., 0.85,
						  0.,0.}});
      
      //Now loop over the electrons and only keep those that pass the random efficiency cut
      std::vector<Particle*> Survivors;
      
      for(Particle* electron : electrons ) {
	double e_pt=electron->pT();
	double e_eta=electron->eta();
	
	bool hasTag = false;
	
	hasTag = random_bool(_elEff2d, fabs(e_eta),e_pt);
	
	if(hasTag)Survivors.push_back(electron);
      }
      electrons=Survivors;
    }
    
    void ApplyDelphesMuonTrackEff(std::vector<Particle*> &muons){
      
      HEPUtils::BinnedFn2D<double> _muTrackEff2d({{0,1.5,2.5,10.}}, {{0,0.1,1.0,10000.}},
						{{0., 0.75, 0.99, 
						      0.,0.70,0.98,
						      0.,0.,0.}});
      
      //Now loop over the muons and only keep those that pass the random efficiency cut
      std::vector<Particle*> Survivors;
      
      for(Particle* muon : muons ) {
	double mu_pt=muon->pT();
	double mu_eta=muon->eta();

	std::cout << "MUON PT " << mu_pt << " ETA " << mu_eta << " trackeff " << _muTrackEff2d.get_at(fabs(mu_eta), fabs(mu_pt)) << std::endl;
	
	bool hasTag = false;
	
	hasTag = random_bool(_muTrackEff2d, fabs(mu_eta),mu_pt);
	
	if(hasTag)Survivors.push_back(muon);
      }
      muons=Survivors;
    }
    
    void ApplyDelphesMuonEff(std::vector<Particle*> &muons){
      
      HEPUtils::BinnedFn2D<double> _muEff2d({{0,1.5,2.7,10.}}, {{0,10.0,10000.}},
					    {{0., 0.95, 0.,0.85,0.,0.}});
      
      //Now loop over the muons and only keep those that pass the random efficiency cut
      std::vector<Particle*> Survivors;
      
      for(Particle* muon : muons ) {
	double mu_pt=muon->pT();
	double mu_eta=muon->eta();
	
	bool hasTag = false;

	std::cout << "MUON PT " << mu_pt << " ETA " << mu_eta << " eff " << _muEff2d.get_at(fabs(mu_eta), fabs(mu_pt)) << std::endl;
	
	hasTag = random_bool(_muEff2d, fabs(mu_eta),mu_pt);
	
	if(hasTag)Survivors.push_back(muon);
      }
      muons=Survivors;
    }
    
    void ApplyTauEfficiency(std::vector<Particle*> &taus){
      
      HEPUtils::BinnedFn2D<double> _tauEff2d({{0,10.}}, {{0,10000.}},
					     {{0.4}});
      
      std::vector<Particle*> Survivors;
      
      for(Particle* tau : taus ) {
	double tau_pt=tau->pT();
	double tau_eta=tau->eta();
	
	bool hasTag = false;
	
	hasTag = random_bool(_tauEff2d, fabs(tau_eta),tau_pt);
	
	if(hasTag)Survivors.push_back(tau);
      }
      taus=Survivors;
    }
    
    void SmearElectronEnergy(std::vector<Particle*> &electrons){
      
      //Function that mimics the DELPHES electron energy resolution
      //We need to smear E, then recalculate pT, then reset 4 vector
      
      std::random_device rd;
      std::mt19937 gen(rd());

      HEPUtils::BinnedFn2D<float> _E2Coeff({{0,2.5,3.,5.}}, {{0,0.1,25.,10000.}},
					   {{0.,0.015*0.015,0.005*0.005,
						 0.005*0.005,0.005*0.005,0.005*0.005,
						 0.107*0.107,0.107*0.107,0.107*0.107}});

      HEPUtils::BinnedFn2D<float> _ECoeff({{0,2.5,3.,5.}}, {{0,0.1,25.,10000.}},
					  {{0.,0.,0.05*0.05,
						0.05*0.05,0.05*0.05,0.05*0.05,
						2.08*2.08,2.08*2.08,2.08*2.08}});
      
      HEPUtils::BinnedFn2D<float> _cCoeff({{0,2.5,3.,5.}}, {{0,0.1,25.,10000.}},
					  {{0.,0.,0.25*0.25,
						0.25*0.25,0.25*0.25,0.25*0.25,
						0.,0.,0.}});
      
      std::vector<Particle*> SmearedElectrons;
      
      //Now loop over the electrons and smear the 4-vectors
      for(Particle* electron : electrons ) {
	float el_pt=electron->pT();
	float el_eta=electron->eta();
	float el_E=electron->E();
	float el_m=electron->mom().m();
	float el_phi=electron->phi();

	//Look up resolution
	float e2=_E2Coeff.get_at(fabs(el_eta), fabs(el_pt));
	float e=_ECoeff.get_at(fabs(el_eta), fabs(el_pt));
	float c=_cCoeff.get_at(fabs(el_eta), fabs(el_pt));
	
	double resolution = sqrt(e2*el_E*el_E
				 +e*el_E
				 +c);
	

	//Now define a Gaussian centered on the current energy
	//Width is given by the resolution
	
	std::normal_distribution<> d(el_E,resolution);
	
	//@todo need to protect against negative energies?
	
	float smeared_E=d(gen);
	if(smeared_E<0)smeared_E=0;
	float smeared_pt=smeared_E/cosh(el_eta);
	std::cout << "BEFORE eta " << electron->eta() << std::endl;
	electron->set_mom(P4::mkEtaPhiME(el_eta,el_phi,el_m,smeared_E));
	std::cout << "AFTER eta " << electron->eta() << std::endl;

	SmearedElectrons.push_back(electron);
	
	
      }
      
      electrons=SmearedElectrons;
    }
    
    void SmearMuonMomentum(std::vector<Particle*> &muons){
      
      //Function that mimics the DELPHES muon momentum resolution
      //We need to smear pT, then recalculate E, then reset 4 vector
      
      std::random_device rd;
      std::mt19937 gen(rd());
      
      HEPUtils::BinnedFn2D<float> _muEff({{0,1.5,2.5}}, {{0,0.1,1.,10.,200.,10000.}},
					 {{0.,0.03,0.02,0.03,0.05,
					       0.,0.04,0.03,0.04,0.05}});
      
      std::vector<Particle*> SmearedMuons;
      
      //Now loop over the muons and smear the 4-vectors
      for(Particle* muon : muons ) {
	float mu_pt=muon->pT();
	float mu_eta=muon->eta();
	float mu_E=muon->E();
	float mu_m=muon->mom().m();
	float mu_phi=muon->phi();

	//Look up resolution
	float resolution=_muEff.get_at(fabs(mu_eta), fabs(mu_pt));
	
	//Now define a Gaussian centered on the current energy
	//Width is given by the resolution

	std::normal_distribution<> d(mu_pt,resolution*mu_pt);
	
	//@todo need to protect against negative energies?
	
	float smeared_pt=d(gen);
	if(smeared_pt<0)smeared_pt=0;
	float smeared_E=smeared_pt*cosh(mu_eta);
	
	std::cout << "Muon pt " << mu_pt << " smeared " << smeared_pt << endl;
	
	muon->set_mom(P4::mkEtaPhiMPt(mu_eta,mu_phi,mu_m,smeared_pt));
	
	SmearedMuons.push_back(muon);
	
	
      }
      muons=SmearedMuons;
    }
    
    void SmearJets(std::vector<HEPUtils::Jet*> &jets){
      
      //Function that mimics the DELPHES muon momentum resolution
      //We need to smear pT, then recalculate E, then reset 4 vector
      
      std::random_device rd;
      std::mt19937 gen(rd());
      
      HEPUtils::BinnedFn2D<float> _jetRes({{0,10.}}, {{0,10000.}},
					  {{0.03}});
      
      std::vector<HEPUtils::Jet*> SmearedJets;
      
      //Now loop over the jets and smear the 4-vectors
      for(HEPUtils::Jet* jet : jets ) {

	double jet_eta=jet->eta();
	double jet_pt=jet->pT();
	
	//Look up resolution
	float resolution=_jetRes.get_at(fabs(jet_eta), jet_pt);
	
	//Now define a Gaussian centered on 1
	//Width is given by the resolution
	
	std::normal_distribution<> d(1.,resolution);
	double smear_factor=d(gen);
	
	//@todo need to protect against negative energies?

	jet->set_mom(P4::mkXYZM(jet->mom().px()*smear_factor, jet->mom().py()*smear_factor, jet->mom().pz()*smear_factor, jet->mom().m()));

	
	SmearedJets.push_back(jet);
	
      }
      
      jets=SmearedJets;
      
    }
    
  }
}
