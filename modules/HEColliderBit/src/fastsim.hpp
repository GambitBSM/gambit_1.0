// written by A. Saavedra - Sydney University March 2013

#include "Particle.hpp"
#include "DetectorResponse.hpp"
#include <vector>

/// @todo Actually this whole file should be *in* namespace GAMBIT
using namespace GAMBIT;


enum SimType { NOMINAL,ACERDET,FASTATLAS, FASTCMS, ATLAS2011, CMS2011};
// NOMINAL the energy response is smeared and the calorimeter parameters are the same as the ACERDET
// ACERDET the energy of the different particles is smeared by the respective functions as used in the ACERDET paper and the calorimeter parameters are
//         the same as the ACERDET paper
// the values below are not implemented yet
// FASTATLAS  will be defined with a simple smear functions but the calorimeter parameters will reflect the ATLAS detector
// FASTCMS    will be defined with a simple smear functions but the calorimeter parameters will reflect the CMS detector
// ATLAS2011  will try to reproduce the performance of the ATLAS detector
// CMS2011    will try to reproduce the performance of the CMS detector

using namespace std;

class FastSim {
public:
  FastSim();
  ~FastSim();

 void InitSimulation(SimType which);

 void DetermineDetectorResponse();
 void FindCells();

// this functions set the particle list for each type
 void SetParticles(vector<Particle*> electrons, vector<Particle*> muons,
                           vector<Particle*> photons,vector<Particle*>charged_hadrons,
                           vector<Particle*> bjets, vector<Particle*> tauhads, vector<Particle*> weaklyint );
 void SetBQuarks(vector<Particle*> particles);
 void SetElectrons(vector<Particle*> particles);
 void SetMuons(vector<Particle*> particles);
 void SetPhotons(vector<Particle*> particles);
 void SetTauHads(vector<Particle*> particles);
 void SetChargedHadrons(vector<Particle*> particles);
 void SetWeaklyInteracting(vector<Particle*> particles);


 void Clustering();

 void ElectronResponse();
 void MuonResponse();
 void PhotonResponse();
 void JetResponse();
 void FindBJets();
 void AppliedIsolation();


 bool CheckOverlap(Particle *p1, Particle *p2);

 void CalculateMET();
 double MET();
 double METx();
 double METy();
 double METphi();


 void PrintMuons();
 void PrintElectrons();
 void PrintPhotons();

 void fillcellvector(double pt, double eta, double phi);
 int NElectrons(){ return _stable_electrons.size(); }
 int NMuons(){ return _stable_muons.size(); }


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

 // the muons
 //
 double _min_muon_pt;
 double _min_ele_pt;
 double _min_photon_pt;
 double _min_bjet_pt;
 double _min_jet_pt;
 double _min_tauhad_pt;
 double _min_dr;


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


 SimType _simtype;
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



