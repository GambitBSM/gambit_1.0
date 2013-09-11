//  GAMBIT: Global and Modular BSM Inference Tool
//  //  ********************************************
//  //
//  //  Class Definition for FastSim
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

#include "Particle.hpp"
#include "Event.hpp"                 // Gambit's event interface
#include "DetectorResponse.hpp"
#include <vector>

/// @todo Actually this whole file should be *in* namespace Gambit
using namespace Gambit;


enum DetectorType { NOMINAL,ACERDET,FASTATLAS, FASTCMS, ATLAS2011, CMS2011};
// NOMINAL the energy response is smeared and the calorimeter parameters are the same as the ACERDET
// ACERDET the energy of the different particles is smeared by the respective functions as used in the ACERDET paper and the calorimeter parameters are
//         the same as the ACERDET paper
// the values below are not implemented yet
// FASTATLAS  will be defined with a simple smear functions but the calorimeter parameters will reflect the ATLAS detector
// FASTCMS    will be defined with a simple smear functions but the calorimeter parameters will reflect the CMS detector
// ATLAS2011  will try to reproduce the performance of the ATLAS detector
// CMS2011    will try to reproduce the performance of the CMS detector

using namespace std;

typedef struct {

 vector<Particle*> _jets;
 vector<Particle*> _bjets;

 vector<Particle*> _iso_electrons;
 vector<Particle*> _iso_muons;
 vector<Particle*> _iso_photons;
 vector<Particle*> _noniso_electrons;
 vector<Particle*> _noniso_muons;
 vector<Particle*> _noniso_photons;

 double _MET;
 double _METPhi;

} FastSimEvent;




class FastSim {
public:
  FastSim();
  ~FastSim();

 void init(DetectorType which);

 void doDetectorResponse();
 void FindCells();

// this functions set the particle list for each type
 void setParticles(vector<Particle*> electrons, vector<Particle*> muons,
                           vector<Particle*> photons,vector<Particle*>charged_hadrons,
                           vector<Particle*> bjets, vector<Particle*> tauhads, vector<Particle*> weaklyint );
 void setBQuarks(vector<Particle*> particles);
 void setElectrons(vector<Particle*> particles);
 void setMuons(vector<Particle*> particles);
 void setPhotons(vector<Particle*> particles);
 void setTauHads(vector<Particle*> particles);
 void setChargedHadrons(vector<Particle*> particles);
 void setWeaklyInteracting(vector<Particle*> particles);

 void clear();

 void Clustering();

 void ElectronResponse();
 void MuonResponse();
 void PhotonResponse();
 void JetResponse();
 void FindBJets();
 void AppliedIsolation();

 double calcIsoEt(double or_eta, double or_phi);

 bool CheckOverlap(Particle *p1, Particle *p2);

 void calcMET();
 double MET();
 double METx();
 double METy();
 double METphi();


 void printMuons();
 void printElectrons();
 void printPhotons();
 void printSummary();
 void printParticles();

 void fillcellvector(double pt, double eta, double phi);
 int NElectrons(){ return _stable_electrons.size(); }
 int NMuons(){ return _stable_muons.size(); }
  

 void getRecoEvent(Event &event);

private:

 // calorimeter range and granularity
 double _calo_dphi;  // the delta phi of the calorimeter in the barrel region
 double _calo_deta; // the delta eta of the calorimeter in the barrel region
 double _calo_transition;  // the eta position of the transition region
 double _calo_etthresh; // the energy threshold of a calorimeter cell
 double _calo_bfield_ptmin; // the minimum pt that the b field
 double _calo_etamax; // the total coverage of the calorimeter
 int    _calo_neta; // number of eta channels in the calorimeter
 int    _calo_nphi; // number of phi channels in the calorimeter

 double _et_seedmin; // the minimum transverse energy a cell can have to be a seed for a cluster
 double _cluster_rcone;
 double _cluster_etmin; // the minimum energy that a cluster can have otherwise discarded

 // the particles
 //
 double _min_muon_pt;
 double _min_ele_pt;
 double _min_photon_pt;
 double _min_bjet_pt;
 double _min_jet_pt;
 double _min_tauhad_pt;
 double _min_dr;

 double _max_lep_eta;

 // the isolation
 double _minEt_isol_muon; 
 double _minEt_isol_electron; 
 double _minEt_isol_photon;



 // the particles
 vector<Particle*> _chargedhads;
 vector<Particle*> _stable_interacting_particles;
 vector<Particle*> _stable_electrons;
 vector<Particle*> _stable_muons;
 vector<Particle*> _stable_photons;
 vector<Particle*> _iso_electrons;
 vector<Particle*> _iso_muons;
 vector<Particle*> _iso_photons;
 vector<Particle*> _noniso_electrons;
 vector<Particle*> _noniso_muons;
 vector<Particle*> _noniso_photons;

 vector<Particle*> _weakly_interacting;
 vector<Particle*> _bquarks;
 vector<Particle*> _tauhads;
 vector<Particle*> _jets;
 vector<Particle*> _bjets;

 // measurements
 double _metx;
 double _mety;


 DetectorType _simtype;
 DetectorResponse _nodetector;
 ATLAS_Simple_Response _atlas_simple_response;


/*
     double etacel = 5.0; //rapidity coverage
	double ptmin = 0.5; // min pt for b field
	double etthr = 0.0; //ein et for cell
	double caloth = 3.2; // eta transition in cells granularity
	double dbeta = 0.01; // granularity of eta,  twice outside
	double dbphi = 0.01; // granulrity of phi, twice outside
*/

// list of the cells hit
//  vector<double> cellietph(0), cellmom(0), cellhits(0), celleta(0), cellphi(0), cellswitch(0);
  vector<double> _cellietph,_cellmom,_cellhits,_celleta,_cellphi,_cellswitch;
  vector<double> _clusncell,_clusnhits,_clusswitch,_cluseta,_clusphi,_clusweta,_cluswphi,_clusmom;


};



