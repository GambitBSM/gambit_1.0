//  GAMBIT: Global and Modular BSM Inference Tool
//  //  ********************************************
//  //
//  //  Functions for FastSim
//  //
//  //  ********************************************
//  //
//  //  Authors
//  //  =======
//  //
//  //  (add name and date if you modify)
//  //
//  //  Aldo Saavedra
//  //  2013 March
//  //  2013 June 13,20
//  //
//  //  ********************************************
//
//

#include "FastSim.hpp"
#include <iostream>
using namespace std;


FastSim::FastSim() {
  _metx = -1.0;
  _mety = -1.0;
}


FastSim::~FastSim() {
  // for (size_t i = 0; i < _stable_electrons.size();i++) delete _stable_electrons[i];
  // _stable_electrons.clear();
  #define DELETE_PTRVEC(vec) for (size_t i = 0; i < _stable_electrons.size();i++) delete _stable_electrons[i]; _stable_electrons.clear()
  DELETE_PTRVEC(_stable_electrons);
  DELETE_PTRVEC(_stable_muons);
  DELETE_PTRVEC(_stable_photons);
  DELETE_PTRVEC(_bquarks);
  DELETE_PTRVEC(_bjets);
  DELETE_PTRVEC(_jets);
  DELETE_PTRVEC(_tauhads);
  DELETE_PTRVEC(_chargedhads);
  DELETE_PTRVEC(_weakly_interacting);

  DELETE_PTRVEC(_iso_electrons);
  DELETE_PTRVEC(_iso_muons);
  DELETE_PTRVEC(_iso_photons);

  DELETE_PTRVEC(_noniso_electrons);
  DELETE_PTRVEC(_noniso_muons);
  DELETE_PTRVEC(_noniso_photons);



  #undef DELETE_PTRVEC
}


void FastSim::init(DetectorType which) {
  _simtype = which;
  switch(which) {
  case ACERDET:
  case NOMINAL:
    // initialise the cuts and calorimeter limits and granularity for  the NOMINAL and ACERDET
    cout << "AcerDET sim" << endl;

    _min_muon_pt = 6.0;  // GeV
    _min_ele_pt  = 5.0;  // GeV
    _min_jet_pt  = 10.0;  //GeV
    _min_bjet_pt  = 10.0;  //GeV
    _min_photon_pt = 0.2; //GeV

    _minEt_isol_muon = 4.0; 
    _minEt_isol_electron = 4.0; 
    _minEt_isol_photon = 4.0; // GeV

    
    _max_lep_eta = 2.5; // the eta acceptance of the leptons

    _calo_etamax = 5.0;  //GeV
    _calo_dphi =  0.01;
    _calo_deta = 0.01;
    _calo_transition = 3.2;
    _calo_etthresh = 0.0;

    _calo_neta = int(2*_calo_etamax/_calo_deta);
    _calo_nphi = int(2*3.2/_calo_dphi);

    _et_seedmin = 1.5;// GeV
    _cluster_rcone = 0.4;
    _cluster_etmin = 5.0;
    break;

  default:
    /// @todo Throw exception here?
    ;
  }
}

void FastSim::clear() {

 _chargedhads.clear();
 _stable_interacting_particles.clear();
 _stable_electrons.clear();
 _stable_muons.clear();
 _stable_photons.clear();
 _iso_electrons.clear();
 _iso_muons.clear();
 _iso_photons.clear();
 _noniso_electrons.clear();
 _noniso_muons.clear();
 _noniso_photons.clear();

 _weakly_interacting.clear();
 _bquarks.clear();
 _tauhads.clear();
 _jets.clear();
 _bjets.clear();

 _cellietph.clear();
 _cellmom.clear();
 _cellhits.clear();
 _celleta.clear();
 _cellphi.clear();
 _cellswitch.clear();
 _clusncell.clear();
 _clusnhits.clear();
 _clusswitch.clear();
 _cluseta.clear();
 _clusphi.clear();
 _clusweta.clear();
 _cluswphi.clear();
 _clusmom.clear();

}



void FastSim::setParticles(vector<Particle*> electrons, vector<Particle*> muons,
                           vector<Particle*> photons,vector<Particle*>charged_hadrons,
                           vector<Particle*> bquarks, vector<Particle*> tauhads, vector<Particle*> weaklyint ) {

  setElectrons(electrons);
  setMuons(muons);
  setPhotons(photons);
  setBQuarks(bquarks);
  setChargedHadrons(charged_hadrons);
  setTauHads(tauhads);
  setWeaklyInteracting(weaklyint);

}


void FastSim::setElectrons(vector<Particle*> particles) {
  for (size_t i = 0; i < particles.size(); ++i) {
    if (abs(particles[i]->pid()) != 11) {
      cerr << "Warning: PID " << particles[i]->pid() << " found in the electron particle list" << endl;
      continue;
    }
    if (fabs(particles[i]->eta()) > _max_lep_eta) continue;
    if (particles[i]->pT() < _min_ele_pt) continue;
    Particle* chosen = new Particle(particles[i]);
    _stable_electrons.push_back(chosen);
    _stable_interacting_particles.push_back(chosen);
  }
}


void FastSim::setMuons(vector<Particle*> particles) {
  for (size_t i = 0; i < particles.size(); ++i) {
    if (abs(particles[i]->pid()) != 13) {
      cerr << "Warning: PID " << particles[i]->pid() << " found in the muon particle list" << endl;
      continue;
    }
    if (fabs(particles[i]->eta()) > _max_lep_eta) continue; //< @todo Should be muon etamax?
    if (particles[i]->pT() < _min_muon_pt) continue;
    Particle* chosen = new Particle(particles[i]);
    _stable_muons.push_back(chosen);
    _stable_interacting_particles.push_back(chosen);
  }
}


void FastSim::setPhotons(vector<Particle*> particles) {
  for (size_t i = 0; i < particles.size(); ++i) {
    if (abs(particles[i]->pid()) != 22) {
      cerr << "Warning: PID " << particles[i]->pid() << " found in the photon particle list" << endl;
      continue;
    }
    if (fabs(particles[i]->eta()) > _calo_etamax) continue;
    if (particles[i]->pT() < _min_photon_pt) continue;
    Particle* chosen = new Particle(particles[i]);
    _stable_photons.push_back(chosen);
    _stable_interacting_particles.push_back(chosen); //< @todo Build later?
  }

//  printPhotons();
}


void FastSim::setBQuarks(vector<Particle*> particles) {
  for (size_t i = 0; i < particles.size(); ++i) {
    if (abs(particles[i]->pid()) != 5) {
      cerr << "Warning: PID " << particles[i]->pid() << " found in the b-quark particle list" << endl;
      continue;
    }
    if (fabs(particles[i]->eta()) > _calo_etamax) continue; //< @todo Or ~ tracker eta for tagging?
    if (particles[i]->pT() < _min_bjet_pt) continue;
    Particle* chosen = new Particle(particles[i]);
    _bquarks.push_back(chosen);
  }
}


void FastSim::setTauHads(vector<Particle*> particles) {
  for (size_t i = 0; i < particles.size(); ++i) {
    if (abs(particles[i]->pid()) != 15) {
      cerr << "Warning: PID " << particles[i]->pid() << " found in the tau particle list" << endl;
      continue;
    }
    if (fabs(particles[i]->eta()) > _max_lep_eta) continue;
    if (particles[i]->pT() < _min_tauhad_pt) continue;
    Particle* chosen = new Particle(particles[i]);
    _tauhads.push_back(chosen);
  }
}


void FastSim::setChargedHadrons(vector<Particle*> particles) {
  for (size_t i = 0; i < particles.size(); ++i) {
    if (abs(particles[i]->pid()) == 11 || abs(particles[i]->pid()) == 13) {
      cerr << "Warning: PID " << particles[i]->pid() << " found in the charged hadron particle list" << endl;
      continue;
    }
    if (fabs(particles[i]->eta()) > _calo_etamax) continue;
    Particle* chosen = new Particle(particles[i]);
    _chargedhads.push_back(chosen);
    _stable_interacting_particles.push_back(chosen);
  }
}


void FastSim::setWeaklyInteracting(vector<Particle*> particles) {
  for (size_t i = 0; i < particles.size(); ++i) {
    /// @todo Use HepPID to check for weak interactions
    if (fabs(particles[i]->eta()) > _calo_etamax) continue;
    Particle* chosen = new Particle(particles[i]);
    _weakly_interacting.push_back(chosen);
  }
}


/// @brief CalculateMET determines the transerve missing energy associated with the event
///
/// It just adds the x and y components of the weakly interacting particles
/// @todo Rename to calcMET()
void FastSim::calcMET() {
  double totalx = 0.0;
  double totaly = 0.0;
  for (size_t i = 0; i <_weakly_interacting.size();i++) {
    totalx += _weakly_interacting[i]->mom().px();
    totaly += _weakly_interacting[i]->mom().py();
  }
  /// @todo Need to apply the detector resolution to this value
  _metx = totalx;
  _mety = totaly;
}


// Return the missing ET associated with the event
double FastSim::MET() {
  if (_metx < 0) // the MET has not been calculated for the event
    calcMET();
  /// @todo Use add_quad
  return sqrt(_metx*_metx + _mety*_mety);
}


// Return the y-component of the event's missing ET
double FastSim::METx() {
  if (_metx < 0) // the MET has not been calculated for the event
    calcMET();
  return _metx;
}


// Return the x-component of the event's missing ET
double FastSim::METy() {
  if (_metx < 0) // the MET has not been calculated for the event
    calcMET();
  return _mety;
}


// Return the phi-component of the event's MET vector
double FastSim::METphi() {
  if (_metx < 0) // the MET has not been calculated for the event
    calcMET();
  return atan2(_metx,_mety);
}


/*
  void FastSim::SelectParticles(vector<Particle*> particles) {
  // this function selects the stable particles within

  Particle *chosen;
  for (size_t i = 0; i <particles.size();i++) {
  if  (fabs(particles[i]->mom().eta()) > _calo_etamax)
  continue;

  chosen = new Particle(particles[i]->mom().px(),particles[i]->mom().py(),particles[i]->mom().pz(),
  particles[i]->mom().E(),particles[i]->pid());

  _stable_particles.push_back(chosen);

  if ((fabs(chosen->pid()) != 12) || (fabs(chosen->pid()) != 14) || (fabs(chosen->pid()) != 16))
  _stable_interacting_particles.push_back(chosen);

  if ((fabs(chosen->pid()) == 11) && (chosen->mom().rho() > _min_ele_pt))
  _stable_electrons.push_back(chosen);

  if ((fabs(chosen->pid()) == 13) && (chosen->mom().rho() > _min_muon_pt))
  _stable_muons.push_back(chosen);
  }
  }
*/


/// @todo Rename
void FastSim::doDetectorResponse() {
  // this function runs the fast simulation for the particles list provided
  //

  // determine which cells which have been traversed by the interacting particles
  FindCells();

  
//  cout << "electron response " << endl;
  // for the individual particles determine the response of detector on their momentum
  ElectronResponse();
  PhotonResponse();
  MuonResponse();

  // add all the neutrinos and determine the maginute of the
  // missing momentum and phi
  calcMET();

  
  // now for the jets, only clustering for now, fast jet will be incorporated soon
  switch(_simtype)
    {
    case ACERDET:
    case NOMINAL:
      Clustering();
      break;
    default:;
    }

  
  JetResponse();

  // determine which leptons and photons are isolated
  // so far it only checks whether they overlap which jets
  // need to check consitency, the jets are electrons
  //
  //cout << "isolation " << endl;
  AppliedIsolation();
  // find bjets
  FindBJets();
  
  // the taus to be implemented

//  printParticles();
//  printSummary(); 
  
}

void FastSim::getRecoEvent(Event &event) {
  // this function fills the gambit event interface with the reconstructed particles

  // we will copy the prompt particles only - the isolated ones

  for (size_t i=0;i<_iso_electrons.size();i++) 
    event.addParticle(_iso_electrons[i]);

  for (size_t i=0;i<_iso_muons.size();i++) 
    event.addParticle(_iso_muons[i]);

  for (size_t i=0;i<_iso_photons.size();i++) 
    event.addParticle(_iso_photons[i]);

// the MET
  event.setMissingMom(P4::mkXYZM(METx(), METy(), 0., 0.));

  /* still need to add the jets, bjets and the taus
  if(candidate->BTag)
    recoJet = new Jet(momentum.Px(), momentum.Py(), momentum.Pz(), 
        momentum.E(), true);
  else
    recoJet = new Jet(momentum.Px(), momentum.Py(), momentum.Pz(), 
        momentum.E(), false);
  event.addJet(recoJet);
  */


}

/// @todo Rename
void FastSim::MuonResponse() {
  for (size_t j = 0; j < _stable_muons.size(); j++) {
    switch(_simtype) {
    case NOMINAL:
      _nodetector.MuonResponse(*_stable_muons[j]);
      // Clustering();
      break;

    case ACERDET:
      _atlas_simple_response.MuonResponse(*_stable_muons[j]);
      break;

    default:
      /// @todo Exception
      ;
    }
  }

}

void FastSim::ElectronResponse() {


  for (size_t j = 0; j <_stable_electrons.size(); j++) {

    switch(_simtype)
      {
      case NOMINAL:
        _nodetector.ElectronResponse(*_stable_electrons[j]);
        // Clustering();
        break;

      case ACERDET:
        _atlas_simple_response.ElectronResponse(*_stable_electrons[j]);
        break;

      default:
        /// @todo Exception
        ;
      }
  }

}


/// @todo Rename
void FastSim::PhotonResponse() {

  for (size_t j = 0; j < _stable_photons.size(); j++) {
    switch(_simtype) {
    case NOMINAL:
      _nodetector.PhotonResponse(*_stable_photons[j]);
      // Clustering();
      break;

    case ACERDET:
      _atlas_simple_response.PhotonResponse(*_stable_photons[j]);
      break;

    default:
      /// @todo Exception
      ;
    }
  }

}


/// @todo Rename
void FastSim::JetResponse() {
  // this functions needs implementing
}


/// @todo Rename
void FastSim::FindBJets() {
  // this function will find the overlap between the jets and b quarks
  // jets which overlap will be categorised as b-jets
}


/// @todo Rename
void FastSim::FindCells() {
  // find the cells hit
  //

  /* for checking momentum conservation
     float sumx=0.0;
     float sumy=0.0;

     float sumz=0.0;
     float sume=0.0;
  */


  double eta,phi,pt;
  for (size_t i = 0; i < _stable_interacting_particles.size();i++) {

    if (_stable_interacting_particles[i]->pid() == 13)
      continue;   // we are not including them

    eta = _stable_interacting_particles[i]->mom().eta();// can modify particles eta position (move the jet)
    phi = _stable_interacting_particles[i]->mom().phi();
    pt = _stable_interacting_particles[i]->mom().rho();

    fillcellvector(pt,eta,phi);

    // sumx += pt*cos(phi);
    // sumy += pt*sin(phi);

    // sumz += _stable_interacting_particles[i]->mom.pz();
    // sume += _stable_interacting_particles[i]->mom.E();
  }

  // for debugging
  // printf("Direct from event list:            px %10.2f  py %10.2f pz %10.2f E %10.2f\n", sumx, sumy, sumz, sume);

  // sumx = 0;
  // sumy = 0;
  // int ncell = cellswitch.size();

  // // check with the cells
  // printf("Cells Formed { \n");

  // for (int i = 0; i<ncell; i++) {

  // sumx += cellmom[i]*cos(cellphi[i]);
  // sumy += cellmom[i]*sin(cellphi[i]);

  // //printf("Cell %4d pt %10.2f %10.2f %10.2f %5d \n",i,cellmom[i],celleta[i],cellphi[i],(int)cellswitch[i]);
  // }
}


/// @todo Rename
bool FastSim::CheckOverlap(Particle *p1, Particle *p2) {
  // determine if the particles overlap
  double dr = p1->mom().deltaR_eta(p2->mom());
  return (dr < _min_dr);
}


/// @todo Rename
void FastSim::AppliedIsolation() {
  // this function will determine which are muons, electron and photons are isolated
  // this function should be called last once jets, and cells are populated
  // At the moment it should check how energy is in the cells surrounding
  // the particles.
  // What is below should be changed

  double ConeEt;
  bool isolated;
  // electrons
  for (size_t ee=0;ee<_stable_electrons.size();ee++) {

    isolated = true;
//    cout << "Electron eta " << _stable_electrons[ee]->mom().eta() << " phi " <<_stable_electrons[ee]->mom().phi() << endl;
    ConeEt = calcIsoEt(_stable_electrons[ee]->mom().eta() ,_stable_electrons[ee]->mom().phi());
//    cout << "E coneEt " << ConeEt << endl;
    if (ConeEt > _minEt_isol_electron) {
      _stable_electrons[ee]->setPrompt(false);
      Particle *temp_p = new Particle(_stable_electrons[ee]);
      _noniso_electrons.push_back(temp_p);
      isolated = false;
    }
    if (isolated) {
//       cout << "Isolated Electron eta " << _stable_electrons[ee]->mom().eta() << " phi " <<_stable_electrons[ee]->mom().phi() << endl;
      _stable_electrons[ee]->setPrompt(true);
      Particle *temp_p = new Particle(_stable_electrons[ee]);
      _iso_electrons.push_back(temp_p);
    }
  }

  // muon 
  for (size_t mu=0;mu<_stable_muons.size();mu++) {

    isolated = true;
//    cout << "Muon eta " << _stable_muons[mu]->mom().eta() << " phi " <<_stable_muons[mu]->mom().phi() << endl;
    ConeEt = calcIsoEt(_stable_muons[mu]->mom().eta() ,_stable_muons[mu]->mom().phi());
    if (ConeEt > _minEt_isol_muon) {
      _stable_muons[mu]->setPrompt(false);
      Particle *temp_p = new Particle(_stable_muons[mu]);
      _noniso_muons.push_back(temp_p);
      isolated = false;
    }
    if (isolated) {
      _stable_muons[mu]->setPrompt(true);
      Particle *temp_p = new Particle(_stable_muons[mu]);
      _iso_muons.push_back(temp_p);
    }
  }

  // photon
  for (size_t ph=0;ph<_stable_photons.size();ph++) {
    isolated = true;
//    cout << "photon eta " << _stable_photons[ph]->mom().eta() << " phi " <<_stable_photons[ph]->mom().phi() << endl;
    ConeEt = calcIsoEt(_stable_photons[ph]->mom().eta() ,_stable_photons[ph]->mom().phi());
//    cout << "photon coneEt " << ConeEt << endl;
    if (ConeEt > _minEt_isol_photon) {

      _stable_photons[ph]->setPrompt(false);
      Particle *temp_p = new Particle(_stable_photons[ph]);
      _noniso_photons.push_back(temp_p);
      isolated = false;
    }
    if (isolated) { 

//       cout << "Isolated photon eta " << _stable_photons[ph]->mom().eta() << " phi " <<_stable_photons[ph]->mom().phi() << endl;
//
      _stable_photons[ph]->setPrompt(true);
      Particle *temp_p = new Particle(_stable_photons[ph]);
      _iso_photons.push_back(temp_p);
    }
  }

  // electrons and jets
  /*
    bool isolated;
    for (int ee=0;ee<_stable_electrons.size();ee++) {

    isolated = true;
    for (int jj=0;jj<_jets.size();jj++) {

    if (CheckOverlap(_stable_electrons[ee],_jets[jj])) {
    _noniso_electrons.push_back(_stable_electrons[ee]);
    isolated = false;
    continue;
    }
    }
    if (isolated)
    _iso_electrons.push_back(_stable_electrons[ee]);
    }

    // muon and jets
    for (int mu=0;mu<_stable_muons.size();mu++) {

    isolated = true;
    for (int jj=0;jj<_jets.size();jj++) {

    if (CheckOverlap(_stable_muons[mu],_jets[jj])) {
    _noniso_muons.push_back(_stable_muons[mu]);
    isolated = false;
    continue;
    }
    }
    if (isolated)
    _iso_muons.push_back(_stable_muons[mu]);
    }

    // photon and jets
    for (int ph=0;ph<_stable_photons.size();ph++) {

    isolated = true;
    for (int jj=0;jj<_jets.size();jj++) {

    if (CheckOverlap(_stable_photons[ph],_jets[jj])) {
    _noniso_photons.push_back(_stable_photons[ph]);
    isolated = false;
    continue;
    }
    }
    if (isolated)
    _iso_photons.push_back(_stable_photons[ph]);
    }
  */

  // now lets check against the cells of the calorimeter
}


/// @todo Rename
void FastSim::fillcellvector(double pt, double parteta, double partphi) {
  // this method digitises the position of the particle within
  // the calorimeter
  // a number of vectors are filled
  //

  int ieta, iphi;
  double eta,phi;

//  cout << " phi " << phi << endl;
  // calculate the corresponding cell index of the particle using its eta and phi
  if (abs(eta) < _calo_transition) {
    ieta = int((parteta + _calo_etamax) /(2 * _calo_etamax) * _calo_neta) + 1;
    iphi = int((partphi + M_PI)/(2 * M_PI) * _calo_nphi) + 1;
  }else{ // in the barrel region the granularity is twice the barrel region granularity
    ieta = 2*int((parteta + _calo_etamax)/(4 * _calo_etamax) * _calo_neta) + 1;
    iphi = 2*int((partphi + M_PI)/(4 * M_PI) * _calo_nphi) + 1;
  }

  // calculate the corresponding index of the cell using their eta and phi position and the number phi
  // channels, it is a cell id
  int   ietph = _calo_nphi * ieta + iphi;

  // check if the cell already exists
  bool exists = false;
  for (int i=0; i<(int)_cellietph.size(); i++) {
    if (_cellietph[i] == ietph) {  // it exists add the momentum and increment the hit on the cell
      _cellmom[i] += pt;
      _cellhits[i] += 1;
      exists = true;
    }
  }

  //printf("%5d %6.3f %6.3f ", ietph,  eta, phi);

  // calculate the digitized position (eta,phi) of the particle
  if (abs(eta) < _calo_transition) {
    eta = 2.0 * _calo_etamax * ((ieta) - 1.0 + 0.5)/_calo_neta  - _calo_etamax;
    phi = 2.0 * M_PI * ((iphi)-1.0 + 0.5)/_calo_nphi - M_PI;
  }
  else{
    eta = 2.0 * _calo_etamax * ((ieta) - 1.0 + 1.0)/_calo_neta  - _calo_etamax;
    phi = 2.0 * M_PI * ((iphi)-1.0 + 1.0)/_calo_nphi - M_PI;
  }

//  printf("particle %6.3f %6.3f  calo %6.3f %6.2f\n", parteta, partphi,eta,phi);

  // first time cell has been hit
  if (exists == 0) {
    _cellietph.push_back(ietph); // the cell id
    _cellmom.push_back(pt);      // transverse momentum
    _cellhits.push_back(1);      // number of hits
    _celleta.push_back(eta);     // digitized eta
    _cellphi.push_back(phi);     // digitized phi
    _cellswitch.push_back(2);    // for tracking purposes
  }
}


/// @todo Rename
void FastSim::Clustering() {
  // this function takes the cells, creates clusters from seed cells

  int ndum, ncell, imax;
  double etmax, phi, eta, etac, phic, dr, etad, phid; //dphia

  /*
    vector< vector< double > > clustercells_mom;
    vector< vector< double > > clustercells_eta;
    vector< vector< double > > clustercells_phi;
  */

  _clusncell.clear();
  _clusnhits.clear();
  _clusswitch.clear();
  _cluseta.clear();
  _clusphi.clear();
  _clusweta.clear();
  _cluswphi.clear();
  _clusmom.clear();

  int done = 0;
  ncell = _cellswitch.size();
  while(done == 0) {


    ndum = 0;
    imax=-1;
    etmax = 0;
    eta=-999;
    phi=-999;
    //find unused cell with highest energy
    //seed for the cluster
    for (int i = 0; i < ncell; i++) {
      if ((_cellswitch[i]==2)&&(_cellmom[i]>etmax)) {
        if (imax != -1) _cellswitch[imax] =2;
        imax = i;
        eta = _celleta[i];
        phi = _cellphi[i];
        etmax = _cellmom[i];
        _cellswitch[i] = 1;
        //printf(" seed cells %5d %6.2f %6.2f %6.2f\n",i,etmax,eta,phi);
      }
    }
    //printf("etmax %.2f  etini %.2f %d %d %d\n",etmax,etini,imax,ncell,cellswitch.size());
    //printf("cell switch size %d\n", cellswitch.size());
    //  if chosen cell does meet the ET requirement use as SEED
    if (etmax >= _et_seedmin) {

      if (((int)_cellswitch.size() > imax) && (imax >= 0)) {

        /*
          vector<double> cells_mom;
          vector<double> cells_eta;
          vector<double> cells_phi;
        */

        // initialize the cluster
        int  temp_clusncell = 1;
        int  temp_clusnhits = 0;
        double  temp_clusweta  = 0.0;
        double  temp_cluswphip  = 0.0;
        double  temp_cluswphin  = 0.0;
        double  temp_cluseta = eta;
        double  temp_clusphi = phi;
        double  temp_clusmomp   = 0.0;
        double  temp_clusmomn   = 0.0;


        // Add unused cells within distance of SEED
        for (int i = 0; i < ncell; i++) {
          if (_cellswitch[i]!=0) {
            phic  = _cellphi[i];
            etac  = _celleta[i];
            etad = etac-temp_cluseta;
            phid = deltaPhi(phic, temp_clusphi);

            dr = sqrt(pow(etad,2)+ pow(phid,2));

            if (dr < _cluster_rcone) {
              _cellswitch[i]   = -_cellswitch[i];
              temp_clusncell += 1;
              temp_clusnhits += _cellhits[i];
              temp_clusweta  += (etac) * _cellmom[i]; //
              if (phic>0) {
                temp_cluswphip  += (phic+10.0) * _cellmom[i];
                temp_clusmomp   += _cellmom[i];

              }
              if (phic<0) {
                temp_cluswphin  += (phic+10.0) * _cellmom[i];
                temp_clusmomn   += _cellmom[i];
              }

              /*
              //added for checking
              cells_mom.push_back(_cellmom[i]);
              cells_eta.push_back(etac);
              cells_phi.push_back(phic);
              */

            }
          }
        }
        //printf("cluster momentum %6.2f\n",temp_clusmom);
        // does the cluster have the minimum energy required
        if (temp_clusmomp + temp_clusmomn>_cluster_etmin) {
          // save the cluster
          ndum = ndum + 1;
          _clusncell.push_back(temp_clusncell);
          _clusnhits.push_back(temp_clusnhits);
          _clusswitch.push_back(1);
          _cluseta.push_back(temp_cluseta);
          _clusphi.push_back(temp_clusphi);
          if (temp_clusmomp + temp_clusmomn > 0) {
            _clusweta.push_back(temp_clusweta/(temp_clusmomp + temp_clusmomn));

            double smartp = temp_cluswphip/temp_clusmomp;
            double smartn = temp_cluswphin/temp_clusmomn;

            double smart = smartp + (smartp+ smartn)*temp_clusmomp/(temp_clusmomp+temp_clusmomn);
            // if (smart>pi) smart += -2* pi;

            _cluswphi.push_back(smart);
          }
          else {
            _clusweta.push_back(-99.0);
            _cluswphi.push_back(-99.0);
          }


          _clusmom.push_back(temp_clusmomp+temp_clusmomn);

          /*
          //added for checking
          _clustercells_mom.push_back(cells_mom);
          _clustercells_eta.push_back(cells_eta);
          _clustercells_phi.push_back(cells_phi);
          */
          for (int i = 0; i < ncell; i++) {
            if (_cellswitch[i]<0) _cellswitch[i] = 0;
          }
        }
        else {
          for (int i = 0; i < ncell; i++) {
            if (_cellswitch[i]<0) _cellswitch[i] = -_cellswitch[i];
          }
        }
      }
      else {
        printf("imax %d size of cellswitch %d %d\n", imax, (int)_cellswitch.size(), ncell);
        return;
      }
    }
    else
      {
        done = 1;
      }
  }

  // now that we have a list of the clusters, they will be our jets

  Particle *chosen;
  double px,py,pz;
  for (size_t i = 0; i <_clusmom.size();i++) {

    // if the jet pt is less than the minimum discarded
    if  (_clusmom[i] <= _min_jet_pt)
      continue;


    px = _clusmom[i]*cos(_cluswphi[i]);
    py = _clusmom[i]*sin(_cluswphi[i]);
    pz = _clusmom[i]*sinh(_clusweta[i]);

    chosen = new Particle(px,py,pz,sqrt(px*px+py*py+pz*pz),0);

    _jets.push_back(chosen);
  }


  /*
  // iterate through the cluster and calculate the MET
  int nsize = clusweta.size();
  float px=0;
  float py=0;

  for (int ii=0;ii<nsize;ii++)
  {
  px += clusmom[ii]*cos(cluswphi[ii]);
  py += clusmom[ii]*sin(cluswphi[ii]);

  }

  printf("Cluster Sum (GeV) px %10.2f py %10.2f\n",px,py);

  printf("{Clusters:\n");
  int nc = clustercells_mom.size();

  float sumcellx = 0.0;
  float sumcelly = 0.0;
  float sumcell2x = 0.0;
  float sumcell2y = 0.0;
  float sumdiffx = 0.0;
  float sumdiffy = 0.0;
  for (int jj=0;jj<nc;jj++)
  {
  sumcellx = 0.0;
  sumcelly = 0.0;
  int tncell = clustercells_mom[jj].size();
  for (int kk=0;kk<tncell;kk++) {
  printf("Cluster %3d cell %3d %10.2f %5.3f %5.3f\n",jj,kk,clustercells_mom[jj][kk],clustercells_eta[jj][kk],clustercells_phi[jj][kk]);
  sumcellx += clustercells_mom[jj][kk]*cos(clustercells_phi[jj][kk]);
  sumcelly += clustercells_mom[jj][kk]*sin(clustercells_phi[jj][kk]);

  sumcell2x += clustercells_mom[jj][kk]*cos(clustercells_phi[jj][kk]);
  sumcell2y += clustercells_mom[jj][kk]*sin(clustercells_phi[jj][kk]);

  }
  px = clusmom[jj]*cos(cluswphi[jj]);
  py = clusmom[jj]*sin(cluswphi[jj]);
  printf("Cluster cells sum %10.2f %10.2f  weighted average cluster %10.2f %10.2f (%5.3f %5.3f) Diff %10.2f %10.2f\n",
  sumcellx,sumcelly,px,py,clusweta[jj],cluswphi[jj],
  sumcellx-px,sumcelly-py);
  sumdiffx += sumcellx-px;
  sumdiffy += sumcelly-py;

  double etruth = sqrt(pow(sumcellx,2) + pow(sumcelly,2));
  double erecon = sqrt(pow(px,2) + pow(py,2));

  printf("Eclus(recon)/Ecell(truth): %f \n", erecon/etruth);
  }

  printf("} \n");

  float sumx=0.0;
  float sumy=0.0;

  printf("Cluster and Cell mom difference: %10.3lf  %10.3lf \n", sumdiffx,sumdiffy);
  //printf("Cluster Sum (GeV) px %10.2f py %10.2f\n",px,py); need to move it here and fix the notation
  printf("Used Cells Sum    px %10.2f py %10.2f\n", sumcell2x, sumcell2y);



  printf("At cluster Cell status{:\n");
  for (int i = 0; i<ncell; i++) {
  if (cellswitch[i] != 0) {

  sumx += cellmom[i]*cos(cellphi[i]);
  sumy += cellmom[i]*sin(cellphi[i]);

  printf("Cell %5d %10.2f %10.2f %10.2f %5d\n",i,cellmom[i],celleta[i],cellphi[i],(int)cellswitch[i]);
  }
  }
  printf("}\n");

  printf("Unused Cells Sum (GeV) px %10.2f py %10.2f\n",sumx,sumy);

  sumx = 0;
  sumy = 0;
  for (int i = 0; i<ncell; i++) {
  if (cellswitch[i] == 0) {

  sumx += cellmom[i]*cos(cellphi[i]);
  sumy += cellmom[i]*sin(cellphi[i]);

  // printf("Cell %5d %10.2f %10.2f %10.2f %5d\n",i,cellmom[i],celleta[i],cellphi[i],(int)cellswitch[i]);
  }
  }
  printf("Used Cells Sum (GeV)   px %10.2f py %10.2f\n",sumx,sumy);

  sumx = 0;
  sumy = 0;
  for (int i = 0; i<ncell; i++) {

  sumx += cellmom[i]*cos(cellphi[i]);
  sumy += cellmom[i]*sin(cellphi[i]);

  // printf("Cell %5d %10.2f %10.2f %10.2f %5d\n",i,cellmom[i],celleta[i],cellphi[i],(int)cellswitch[i]);
  }
  printf("All Cells Sum (GeV)    px %10.2f py %10.2f\n",sumx,sumy);
  */

}

double FastSim::calcIsoEt(double or_eta, double or_phi) {
  /* add the transverse energy on the cells within a deltaR of eta and phi of the particle
   * and return the value
   */

  int ncell;
  double dphi,deta,dR,SumEt,eta,phi;
  SumEt = 0;
  ncell = _cellswitch.size();
  for(int i = 0; i<ncell; i++){
    eta = _celleta[i];
    phi = _cellphi[i];

    
    dphi = deltaPhi(or_phi,phi);
    deta = fabs(or_eta - eta);
    dR = sqrt(dphi*dphi + deta*deta);

    if ((dR > 0.05) && (dR < 0.2))
      SumEt += _cellmom[i];
  }

  return SumEt;
}


void FastSim::printParticles() {

  printMuons();
  printElectrons();
  printPhotons();
}


/// @todo Rename
void FastSim::printMuons() {
  cout << "Number of muons is " << _stable_muons.size() << endl;
  for (int j=0;j<(int)_stable_muons.size();j++) {
    cout << "Muon " << j << " "<< _stable_muons[j]->pid() << " P: "<< _stable_muons[j]->mom().px() << " " << _stable_muons[j]->mom().py() << " " << _stable_muons[j]->mom().pz() << " " << _stable_muons[j]->mom().E() << " Eta: " << 
      _stable_muons[j]->mom().eta() << " Phi: " << _stable_muons[j]->mom().phi()  << endl;
  }
}


/// @todo Rename
void FastSim::printElectrons() {
  cout << "Number of electrons is " << _stable_electrons.size() << endl;
  for (int j=0;j<(int)_stable_electrons.size();j++) {
    cout << "Electron " << j << " "<< _stable_electrons[j]->pid() << " P: "<< _stable_electrons[j]->mom().px() << " " << _stable_electrons[j]->mom().py() << " " << _stable_electrons[j]->mom().pz() << " " << _stable_electrons[j]->mom().E() 
     << " Eta: " << _stable_electrons[j]->mom().eta() << " Phi: " << _stable_electrons[j]->mom().phi()  << endl;
  }
}


/// @todo Rename
void FastSim::printPhotons() {
  cout << "Number of photons is " << _stable_photons.size() << endl;
  for (int j=0;j<(int)_stable_photons.size();j++) {
    cout << "Photon " << j <<" "<< _stable_photons[j]->pid() << " P: "<< _stable_photons[j]->mom().px() << " " << _stable_photons[j]->mom().py() << " " << _stable_photons[j]->mom().pz() << " " << _stable_photons[j]->mom().E() 
      << " Eta: " << _stable_photons[j]->mom().eta() << " Phi: " << _stable_photons[j]->mom().phi()  
      << endl;
  }
}

void FastSim::printSummary() {

  cout << "Number of electrons         : " << _stable_electrons.size() << endl;
  cout << "Number of isolated electrons: " << _iso_electrons.size() << endl;
  cout << "Number of muons             : " << _stable_muons.size() << endl;
  cout << "Number of isolated muons    : " << _iso_muons.size() << endl;
  cout << "Number of photons           : " << _stable_photons.size() << endl;
  cout << "Number of isolated photons  : " << _iso_photons.size() << endl;

}
  
