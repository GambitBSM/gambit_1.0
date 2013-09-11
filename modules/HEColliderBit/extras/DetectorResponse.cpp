#include "DetectorResponse.hpp"

DetectorResponse::DetectorResponse() {

  _muon_resolution = 1.0;
  _electron_resolution = 1.0;
  _photon_resolution = 1.0;
  _jet_resolution = 1.0;

}


ATLAS_Simple_Response::ATLAS_Simple_Response(){

  _muon_resolution = 0.0005;
  _electron_resolution = 0.12;
  _photon_resolution = 0.1;
  _jet_resolution = 0.5;

}


void ATLAS_Simple_Response::MuonResponse(Particle& muon){
  // smears the momemtum of a muon

  double newpx,newpy,newpz,newe; //,newpt;

  double distr = _rndm.Gaus(0,1);
  double sigma = distr*_muon_resolution*muon.mom().rho();

  newpx = muon.mom().px()/(1+sigma);
  newpy = muon.mom().py()/(1+sigma);
  newpz = muon.mom().pz()/(1+sigma);
  newe = muon.mom().E()/(1+sigma);

  P4 newp(newpx,newpy,newpz,newe);

  muon.setMom(newp);
//  muon.mom().setPM(newpx,newpy,newpz,0.1057);


//  Particle newmuon(newpx,newpy,newpz,0.0,muon.pid());

//  return newmuon;
}

void ATLAS_Simple_Response::PhotonResponse(Particle& photon){
  // smears the momemtum of a photon

  double newpx,newpy,newpz; //,newe; //,newpt;

  if (photon.mom().E() <= 0)
    return ;

  double distr = _rndm.Gaus(0,1);
  double sigma = distr*_photon_resolution/sqrt(photon.mom().E());

  newpx = photon.mom().px()/(1+sigma);
  newpy = photon.mom().py()/(1+sigma);
  newpz = photon.mom().pz()/(1+sigma);
  //newe = photon.mom().E()/(1+sigma);

//  float oldeta = photon.mom().eta();
//  float oldphi = photon.mom().phi();

//  printf("old Photon px = %f py = %f pz = %f e %f\n",
//      photon.mom().px(),photon.mom().py(),photon.mom().pz(),photon.mom().E());
//  printf(" oldeta %.2f old phi %.2f\n",oldeta,oldphi);

  P4 newp = P4::mkXYZM(newpx,newpy,newpz,0);
  photon.setMom(newp);

//  printf("new Photon px = %f  py = %f pz = %f newe %f\n",
//      photon.mom().px(),photon.mom().py(),photon.mom().pz(),photon.mom().E());
//  printf("Photons Smeared %.2f %.2f\n",(float)photon.mom().eta(),(float)photon.mom().phi());

//  photon.mom().setPM(newpx,newpy,newpz,0.0);
//  Particle newphoton(newpx,newpy,newpz,0.0,photon.pid());
//  return newphoton;
}

void ATLAS_Simple_Response::ElectronResponse(Particle& electron){
  // smears the momemtum of a electron

  double newpx,newpy,newpz,newe; //,newpt;

  if (electron.mom().E() <= 0)
    return;

  double distr = _rndm.Gaus(0,1);
  double sigma = distr*_electron_resolution*1.0/sqrt(electron.mom().E());

  newpx = electron.mom().px()/(1+sigma);
  newpy = electron.mom().py()/(1+sigma);
  newpz = electron.mom().pz()/(1+sigma);
  newe = electron.mom().E()/(1+sigma);

  P4 newp(newpx,newpy,newpz,newe);
  electron.setMom(newp);

//  electron.mom().setPM(newpx,newpy,newpz,0.0);
//  Particle newelectron(newpx,newpy,newpz,0.0,electron.pid());
//  return newelectron;
}


void ATLAS_Simple_Response::JetResponse(Particle& jet){


}

/*

//RESELE============================================

double RESELE(double e){

  if(SMEAR == 1){
  double res = 0.2;
  double distr = rndm.Gaus(0,1);
  double sig = distr * res * 1/sqrt(e);

  return sig;
  }
  else  return 0;
}

//RESHAD============================================

double RESHAD(double e, double eta, double Caloth){

  if(SMEAR ==1){
  double distr = rndm.Gaus(0,1);

  double res = -999.99;

  //Check which region of the detector.
  if(eta < Caloth){
    res = 0.5;
  }else if(eta > Caloth){
    res = 1.0;
  }

  double sig = distr * res *1/sqrt(e);

  return sig;
  }
  else return 0;
}

//}
*/

