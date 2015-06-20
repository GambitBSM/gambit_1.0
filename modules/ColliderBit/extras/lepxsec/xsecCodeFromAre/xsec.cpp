// Results are taken from
// A. Bartl, H. Fraas, W. Majerotto, Z. Phys. C30 (1986) 441
// A. Bartl, H. Fraas, W. Majerotto, Nucl. Phys. B278 (1986) 1
// S. Dawson, E. Eichten and C. Quigg, Phys. Rev. D31 (1985) 1581
// A. Bartl, H. Fraas, W. Majerotto, Z. Phys. C34 (1987) 411
//
// The Bartl, Fraas and Majerotto (BFM) papers are based on a convention for the neutralino decomposed
// into photino, zino and two higgsinos a and b:
// \tilde\chi_i^0 = N_{i1} \tilde\gamma + N_{i2} \tilde Z + N_{i3} \tilde H_a + N_{i4} \tilde H_b
// where \tilde H_a = \tilde H_1^0 \sin\beta - \tilde H_2^0 \cos\beta
// and \tilde H_b = \tilde H_1^0 \cos\beta + \tilde H_2^0 \sin\beta
//
// This corresponds to the conventions for N' in Haber & Kane (HK). Haber & Kane in turn have similar
// conventions to Gunion & Haber which is used in SLHA, however, \tan\beta is upside down in HK.
// A conversion routine SLHA2BFM_NN from SLHA to these conventions is included.
//
// For the charginos a convention similar to HK is followed, which has almost the same mixing matrices
// V and U as in SLHA, however, BFM uses \sigma_3 V as the mixing matrix for negative charged states.
// HK refines this to be dependent on the mass matrix determinant so as to always get positive masses.
// For conversion from SLHA to BFM use SLHA2BFM_VV.
//
// For sleptons the SLHA convention is followed. Thus F_{11}=\cos\phi, F_{12}=\sin\phi, etc.
// For \phi = 0 we have ~l_1 = ~l_L and ~l_2 = ~l_R.


#define pow2(a) ((a)*(a))   // WTF! I thought this existed in C++?

#include <iostream>
#include <fstream>
#include <vector>
#include <math.h>

// Pick up from model instead?
static const double pi = 3.1;
static const double G_F = 1.1663787e-5;
static const double alpha = 1./1.277E2;        // Set at mZ-scale. Is that the best scale? Take from model?
static const double mZ = 91.1876;
static const double gZ =  2.4952;
static const double sin2thetaW = 0.23126;    // MSbar at mZ
/*
static const double sin2thetaW = 0.225; // Value for testing used in BFM
static const double mZ = 93.0;          // Value for testing used in BFM
static const double gZ = 3.0;           // Value for testing used in BFM
*/

using namespace std;

typedef vector< vector<double> > MixMatrix;

// Cross section routines. NB! Call with BFM-conventions! tanb = 1 / tanb !
double xsec_chaichaj(int pid1, int pid2, double sqrts, double m1, double m2, MixMatrix V, MixMatrix U, double msn);
double xsec_neuineuj(int pid1, int pid2, double sqrts, double m1, double m2, MixMatrix N, double mS[2], double tanb);
double xsec_sleislej(int pid1, int pid2, double sqrts, double m1, double m2, MixMatrix F, MixMatrix N, double mN[4]);

// Conversion between SLHA and BFM conventions
void SLHA2BFM_NN(MixMatrix &NN, double tanb);
void SLHA2BFM_VV(MixMatrix &VV);
void BFM2SLHA_NN(MixMatrix &NN, double tanb);
void BFM2SLHA_VV(MixMatrix &VV);
MixMatrix multiply(MixMatrix A, MixMatrix B);
MixMatrix transpose(MixMatrix A);
void print(MixMatrix A);

// Integral expressions
double I1(double s, double m1, double m2, double mk, double ml);
double I2(double s, double m1, double m2, double mk, double ml);
double I3(double s, double m1, double m2, double mk);



//////////////////////////////////////////////////////////////////////////
// Main program for testing cross section functions
//////////////////////////////////////////////////////////////////////////

int main(){
  
  // File object for storing
  ofstream out;
  
  /////////////////////////////
  // Chargino pair production
  /////////////////////////////
  // This corresponds to Model i) in Fig. 3a of Z. Phys. C30 (1986) 441.
  MixMatrix VV(2,vector<double>(2));
  MixMatrix UU(2,vector<double>(2));
  VV[0][0] = 0.36; VV[0][1] = 0.93; VV[1][0] =  0.93; VV[1][1] = -0.36;
  UU[0][0] = 0.41; UU[0][1] = 0.91; UU[1][0] = -0.91; UU[1][1] =  0.41;
  // Open file for writing
  out.open("chargino_i.txt");
  for(int i = 0; i < 100; i ++){
    out << 80+i << " " << 1.0e-3*xsec_chaichaj(1000024, -1000024, 80+i, 29.9, 29.9, VV, UU, 25.) << endl;
  }
  // Change to SLHA conventions (prints out matrices as a check)
  // BFM2SLHA_VV(VV);
  // Close file
  out.close();
  // This corresponds to Model ii) in Fig. 3b of Z. Phys. C30 (1986) 441.
  VV[0][0] = 0.91; VV[0][1] = 0.41; VV[1][0] =  0.41; VV[1][1] = -0.91;
  UU[0][0] = 0.93; UU[0][1] = 0.37; UU[1][0] = -0.37; UU[1][1] =  0.93;
  // Open file for writing
  out.open("chargino_ii.txt");
  for(int i = 0; i < 100; i ++){
    out << 80+i << " " << 1.0e-3*xsec_chaichaj(1000024, -1000024, 80+i, 29.9, 29.9, VV, UU, 25.) << endl;
  }
  // Close file
  out.close();

  /////////////////////////////
  // Neutralino pair production
  /////////////////////////////
  // Scenario (i) in A. Bartl, H. Fraas, W. Majerotto, Nucl. Phys. B278 (1986) 1
  double mS[2];
  mS[0] = 40.0; mS[1] = 40.0;
  // Photino, zino, H_a, H_b basis
  MixMatrix NN(4,vector<double>(4));
  NN[0][0] = 1.00; NN[0][1] = 0.03; NN[0][2] = -0.04; NN[0][3] = 0.00;
  NN[1][0] = -0.05; NN[1][1] = 0.81; NN[1][2] = -0.56; NN[1][3] = -0.15;
  NN[2][0] = 0.00; NN[2][1] = 0.11; NN[2][2] = -0.11; NN[2][3] = 0.99;
  NN[3][0] = -0.02; NN[3][1] = -0.57; NN[3][2] = -0.81; NN[3][3] = -0.03;
  // Open file for writing
  out.open("neutralino_i.txt");
  for(int i = 0; i < 100; i ++){
    out << 80+i << " " << xsec_neuineuj(1000022, 1000023, 80+i, 9.7, -49.5, NN, mS, 0.9) <<  " ";
    out << xsec_neuineuj(1000023, 1000023,  80+i, -49.5, -49.5, NN, mS, 0.9) << endl;
  }
  // Close file
  out.close();
  // Scenario (ii) in A. Bartl, H. Fraas, W. Majerotto, Nucl. Phys. B278 (1986) 1
  NN[0][0] = 0.00; NN[0][1] = -0.02; NN[0][2] = 0.02; NN[0][3] = 1.00;
  NN[1][0] = 0.98; NN[1][1] = -0.06; NN[1][2] = -0.17; NN[1][3] = 0.00;
  NN[2][0] = -0.10; NN[2][1] = 0.59; NN[2][2] = -0.80; NN[2][3] = 0.02;
  NN[3][0] = -0.15; NN[3][1] = -0.80; NN[3][2] = -0.57; NN[3][3] = 0.00;
  // Open file for writing
  out.open("neutralino_ii.txt");
  for(int i = 0; i < 100; i ++){
    out << 80+i << " " << xsec_neuineuj(1000022, 1000023, 80+i, -12.1, 46.6, NN, mS, 0.9) <<  " ";
    out << xsec_neuineuj(1000023, 1000023,  80+i, 46.6, 46.6, NN, mS, 0.9) << endl;
  }
  // Close file
  out.close();
  // Scenario (iii) in A. Bartl, H. Fraas, W. Majerotto, Nucl. Phys. B278 (1986) 1
  NN[0][0] = 1.00; NN[0][1] = -0.04; NN[0][2] = -0.05; NN[0][3] = -0.02;
  NN[1][0] = 0.03; NN[1][1] = 0.16; NN[1][2] = 0.04; NN[1][3] = 0.99;
  NN[2][0] = -0.06; NN[2][1] = -0.81; NN[2][2] = -0.57; NN[2][3] = 0.16;
  NN[3][0] = -0.02; NN[3][1] = 0.57; NN[3][2] = -0.82; NN[3][3] = -0.06;
  // Open file for writing
  out.open("neutralino_iii.txt");
  for(int i = 0; i < 100; i ++){
    out << 80+i << " " << xsec_neuineuj(1000022, 1000023, 80+i, 14.1, 46.9, NN, mS, 0.8) <<  " ";
    out << xsec_neuineuj(1000023, 1000023,  80+i, 46.9, 46.9, NN, mS, 0.8) << endl;
  }
  // Close file
  out.close();
  // Scenario (iv) in A. Bartl, H. Fraas, W. Majerotto, Nucl. Phys. B278 (1986) 1
  NN[0][0] = -0.37; NN[0][1] = 0.77; NN[0][2] = -0.53; NN[0][3] = -0.05;
  NN[1][0] = 0.93; NN[1][1] = 0.25; NN[1][2] = -0.28; NN[1][3] = -0.02;
  NN[2][0] = 0.00; NN[2][1] = 0.02; NN[2][2] = -0.06; NN[2][3] = 1.00;
  NN[3][0] = -0.08; NN[3][1] = -0.59; NN[3][2] = -0.80; NN[3][3] = -0.03;
  // Open file for writing
  out.open("neutralino_iv.txt");
  for(int i = 0; i < 100; i ++){
    out << 80+i << " " << xsec_neuineuj(1000022, 1000023, 80+i, 12.7, 63.0, NN, mS, 0.9) <<  " ";
    out << xsec_neuineuj(1000023, 1000023,  80+i, 63.0, 63.0, NN, mS, 0.9) << endl;
  }
  // Close file
  out.close();
  
  /////////////////////////////
  // Selectron pair production
  /////////////////////////////
  // Parameters chosen to match scenario A in A. Bartl, H. Fraas, W. Majerotto, Z. Phys. C34 (1987) 411
  double mN[4];
  mN[0] = 9.7; mN[1] = -49.5; mN[2] = -81.5; mN[3] = 145.2;
  NN[0][0] = 1.00; NN[0][1] = 0.03; NN[0][2] = -0.04; NN[0][3] = 0.00;
  NN[1][0] = -0.05; NN[1][1] = 0.81; NN[1][2] = -0.56; NN[1][3] = -0.15;
  NN[2][0] = 0.00; NN[2][1] = 0.11; NN[2][2] = -0.11; NN[2][3] = 0.99;
  NN[3][0] = -0.02; NN[3][1] = -0.57; NN[3][2] = -0.81; NN[3][3] = -0.03;
  // Selectron mixing matrix
  MixMatrix FF(2,vector<double>(2));
  FF[0][0] = 1.00; FF[0][1] = 0.00; FF[1][0] =  0.00; FF[1][1] = 1.00;
  // Open file for writing
  out.open("slepton_a.txt");
  for(int i = 1; i < 120; i++){
    out << 71+i << " " << xsec_sleislej(1000011, -1000011, 71+i, 35., 35., FF, NN, mN) << " ";
    out << xsec_sleislej(2000011, -2000011, 71+i, 35., 35., FF, NN, mN) << " ";
    out << xsec_sleislej(1000011, -2000011, 71+i, 35., 35., FF, NN, mN) << endl;
  }
  // Change to SLHA conventions (prints out matrices as a check)
  //BFM2SLHA_NN(NN, 1./0.9);
  // Close file
  out.close();
  // Parameters chosen to match scenario B in A. Bartl, H. Fraas, W. Majerotto, Z. Phys. C34 (1987) 411
  mN[0] = -12.1; mN[1] = 46.6; mN[2] = -55.7; mN[3] = 140.5;
  NN[0][0] = 0.00; NN[0][1] = -0.02; NN[0][2] = 0.02; NN[0][3] = 1.00;
  NN[1][0] = 0.98; NN[1][1] = -0.06; NN[1][2] = -0.17; NN[1][3] = 0.00;
  NN[2][0] = -0.10; NN[2][1] = 0.59; NN[2][2] = -0.80; NN[2][3] = 0.02;
  NN[3][0] = -0.15; NN[3][1] = -0.80; NN[3][2] = -0.57; NN[3][3] = 0.00;
  // Open file for writing
  out.open("slepton_b.txt");
  for(int i = 1; i < 120; i++){
    out << 71+i << " " << xsec_sleislej(1000011, -1000011, 71+i, 35., 35., FF, NN, mN) << " ";
    out << xsec_sleislej(2000011, -2000011, 71+i, 35., 35., FF, NN, mN) << " ";
    out << xsec_sleislej(1000011, -2000011, 71+i, 35., 35., FF, NN, mN) << endl;
  }
  // Close file
  out.close();
  // Parameters chosen to match scenario C in A. Bartl, H. Fraas, W. Majerotto, Z. Phys. C34 (1987) 411
  mN[0] = 12.7; mN[1] = 63.0; mN[2] = -145.9; mN[3] = 213.3;
  NN[0][0] = -0.37; NN[0][1] = 0.77; NN[0][2] = -0.53; NN[0][3] = -0.05;
  NN[1][0] = 0.93; NN[1][1] = 0.25; NN[1][2] = -0.28; NN[1][3] = -0.02;
  NN[2][0] = 0.00; NN[2][1] = 0.02; NN[2][2] = -0.06; NN[2][3] = 1.00;
  NN[3][0] = -0.08; NN[3][1] = -0.59; NN[3][2] = -0.80; NN[3][3] = -0.03;
  // Open file for writing
  out.open("slepton_c.txt");
  for(int i = 1; i < 120; i++){
    out << 71+i << " " << xsec_sleislej(1000011, -1000011, 71+i, 35., 35., FF, NN, mN) << " ";
    out << xsec_sleislej(2000011, -2000011, 71+i, 35., 35., FF, NN, mN) << " ";
    out << xsec_sleislej(1000011, -2000011, 71+i, 35., 35., FF, NN, mN) << endl;
  }
  // Close file
  out.close();
  // Test integral functions
  // Open file for writing
  out.open("integrals.txt");
  for(int i = 1; i < 120; i++){
    out << 70+i << " " << I1(pow2(70.+i), 35., 35., 9.7, -49.5) << " ";
    out << I2(pow2(70.+i), 35., 35., 9.7, -49.5) << " ";
    out << I3(pow2(70.+i), 35., 35., 9.7) << endl;
  }
  // Close file
  out.close();

}

////////////////////////////////////////////////////////////////////////
// Cross section [pb] for e^+e^- -> \tilde l_i \tilde l_j^*
////////////////////////////////////////////////////////////////////////
// To use, call SLHA2BFM first on SLHA mixing matrices constructed as a vector of vectors
////////////////////////////////////////////////////////////////////////
double xsec_sleislej(int pid1, int pid2, double sqrts, double m1, double m2, MixMatrix F, MixMatrix N, double mN[4]){

  // Slepton mixing (fix to actually use matrices?)
  double cosphi = F[0][0];
  double sinphi = F[0][1];
  
  // Figure out what we are calculating
  double tempphi;
  bool bMixed = false;
  bool bSelectron = false;
  // ~e_L ~e_L^*
  if((pid1 == 1000011 && pid2 == -1000011) || (pid1 == -1000011 && pid2 == 1000011)){
    bSelectron = true;
    if(m1 != m2) {cout << "Warning! You are using a different mass for antiparticle!" << endl;}
  }
  // ~e_L ~e_R^*
  else if((pid1 == 1000011 && pid2 == -2000011) || (pid1 == -2000011 && pid2 == 1000011)){
    bSelectron = true;
    bMixed = true;
  }
  // ~e_R ~e_L^*
  else if((pid1 == 2000011 && pid2 == -1000011) || (pid1 == -1000011 && pid2 == 2000011)){
    bSelectron = true;
    bMixed = true;
  }
  // ~e_R ~e_R^*
  else if((pid1 == 2000011 && pid2 == -2000011) || (pid1 == -2000011 && pid2 == 2000011)){
    bSelectron = true;
    tempphi = cosphi; cosphi = sinphi; sinphi = tempphi;
    if(m1 != m2) {cout << "Warning! You are using a different mass for antiparticle!" << endl;}
  }
  // ~mu_L ~mu_L^*
  else if((pid1 == 1000013 && pid2 == -1000013) || (pid1 == -1000013 && pid2 == 1000013)){
    if(m1 != m2) {cout << "Warning! You are using a different mass for antiparticle!" << endl;}
  }
  // ~mu_L ~mu_R^*
  else if((pid1 == 1000013 && pid2 == -2000013) || (pid1 == -2000013 && pid2 == 1000013)){
    bMixed = true;
    cout << "Warning! Will give zero cross section unless there is left-right smuon mixing!" << endl;
  }
  // ~mu_R ~mu_L^*
  else if((pid1 == 2000013 && pid2 == -1000013) || (pid1 == -1000013 && pid2 == 2000013)){
    bMixed = true;
    cout << "Warning! Will give zero cross section unless there is left-right smuon mixing!" << endl;
  }
  // ~mu_R ~mu_R^*
  else if((pid1 == 2000013 && pid2 == -2000013) || (pid1 == -2000013 && pid2 == 2000013)){
    tempphi = cosphi; cosphi = sinphi; sinphi = tempphi;
    if(m1 != m2) {cout << "Warning! You are using a different mass for antiparticle!" << endl;}
  }
  // ~tau_1 ~tau_1^*
  else if((pid1 == 1000015 && pid2 == -1000015) || (pid1 == -1000015 && pid2 == 1000015)){
    if(m1 != m2) {cout << "Warning! You are using a different mass for antiparticle!" << endl;}
  }
  // ~tau_1 ~tau_2^*
  else if((pid1 == 1000015 && pid2 == -2000015) || (pid1 == -2000015 && pid2 == 1000015)){
    bMixed = true;
  }
  // ~tau_2 ~tau_1^*
  else if((pid1 == 2000015 && pid2 == -1000015) || (pid1 == -1000015 && pid2 == 2000015)){
    bMixed = true;
  }
  // ~tau_2 ~tau_2^*
  else if((pid1 == 2000015 && pid2 == -2000015) || (pid1 == -2000015 && pid2 == 2000015)){
    tempphi = cosphi; cosphi = sinphi; sinphi = tempphi;
    if(m1 != m2) {cout << "Warning! You are using a different mass for antiparticle!" << endl;}
  }
  else{
    cout << "I don't know that process!" << endl;
    cout << "You asked me to calculate slepton cross section with final states";
    cout << "PID1 " << pid1 << " PID2 " << pid2 << endl;
    return -1;
  }
  
  // Couplings
  double T3l = -0.5;
  double Le = T3l+sin2thetaW;
  double Re = sin2thetaW;
  // Left-right mixing
  double cos2phi = pow(cosphi,2);
  double sin2phi = pow(sinphi,2);

  double fL[4], fR[4];
  for(int k = 0; k < 4; k++){
    fL[k] = -sqrt(2.) * (1./sqrt(1.-sin2thetaW)*(T3l+sin2thetaW)*N[k][1]-sqrt(sin2thetaW)*N[k][0]);
    fR[k] = sqrt(2.) * sqrt(sin2thetaW) * (sqrt(sin2thetaW/(1.-sin2thetaW))*N[k][1]-N[k][0]);
  }

  // Kinematics
  double s, S, DZ2, ReDZ;
  s = pow(sqrts,2);
  S = sqrt(s-pow(m1+m2,2))*sqrt(s-pow(m1-m2,2));
  DZ2 = 1./(pow(s-pow(mZ,2),2)+pow(mZ*gZ,2)); // Breit-Wigner for Z
  ReDZ = (s-pow(mZ,2))*DZ2;

  // Cross sections per diagram and interference terms
  double sigma, sigma_Z, sigma_Z_mix, sigma_g, sigma_gZ, sigma_N, sigma_N_mix, sigma_gN, sigma_ZN, sigma_ZN_mix;
  // gamma
  sigma_g = 2.*pi*pow(alpha,2)/pow(s,4) * pow(S,3)/6.;
  // Z
  sigma_Z = pi*pow(alpha,2)/pow(s,2)/pow(sin2thetaW,2)/pow(1.-sin2thetaW,2) *  DZ2 * pow(S,3)/6.;
  sigma_Z *= (pow2(Le)+pow2(Re))*pow2(Le*cos2phi+Re*sin2phi);
  sigma_Z_mix = sigma_Z/pow(Le*cos2phi+Re*sin2phi,2)*pow(Le-Re,2)*cos2phi*sin2phi;
  // Interference
  sigma_gZ = 2*pi*pow(alpha,2)/pow(s,3)/sin2thetaW/(1.-sin2thetaW) * ReDZ;
  sigma_gZ *= (Le+Re)*(Le*cos2phi+Re*sin2phi) * pow(S,3)/6.;
  // Neutralino
  // Loop over neutralinos
  sigma_N = 0;
  for(int k = 0; k < 4; k++){
    for(int l = 0; l < 4; l++){
      sigma_N += pow2(cos2phi)*I1(s,m1,m2,mN[k],mN[l])*pow2(fL[k]*fL[l]);
      sigma_N += pow2(sin2phi)*I1(s,m1,m2,mN[k],mN[l])*pow2(fR[k]*fR[l]);
      sigma_N += 2.*cos2phi*sin2phi*s*mN[k]*mN[l]*I2(s,m1,m2,mN[k],mN[l])*fL[k]*fL[l]*fR[k]*fR[l];
    }
  }
  sigma_N *= pi*pow(alpha,2)/4./pow(sin2thetaW,2)/pow(s,2);
  sigma_N_mix = 0;
  for(int k = 0; k < 4; k++){
    for(int l = 0; l < 4; l++){
      sigma_N_mix += cos2phi*sin2phi*I1(s,m1,m2,mN[k],mN[l])*pow2(fL[k]*fL[l]);
      sigma_N_mix += cos2phi*sin2phi*I1(s,m1,m2,mN[k],mN[l])*pow2(fR[k]*fR[l]);
      sigma_N_mix += (pow2(cos2phi)+pow2(sin2phi))*s*mN[k]*mN[l]*I2(s,m1,m2,mN[k],mN[l])*fL[k]*fL[l]*fR[k]*fR[l];
      if(mN[0] == 9.7){
      //cout << k << " " << mN[k] << " " << fR[k] << " " << l << " " << mN[l] << " " << fR[l] << " " << (pow2(cos2phi)+pow2(sin2phi))*s*mN[k]*mN[l]*I2(s,m1,m2,mN[k],mN[l])*fL[k]*fL[l]*fR[k]*fR[l] << endl;
      }
    }
  }
  sigma_N_mix *= pi*pow(alpha,2)/4./pow(sin2thetaW,2)/pow(s,2);
  // Neutralino interference terms
  sigma_gN = 0;
  for(int k = 0; k < 4; k++){
    sigma_gN += I3(s,m1,m2,mN[k])*(cos2phi*pow(fL[k],2)+sin2phi*pow(fR[k],2));
  }
  sigma_gN *= pi*pow(alpha,2)/sin2thetaW/pow(s,3);
  sigma_ZN = 0;
  for(int k = 0; k < 4; k++){
    sigma_ZN += I3(s,m1,m2,mN[k])*(Le*cos2phi*pow(fL[k],2)+Re*sin2phi*pow(fR[k],2));
  }
  sigma_ZN *= pi*pow(alpha,2)/pow(sin2thetaW,2)/(1.-sin2thetaW)/pow(s,2)*(Le*cos2phi+Re*sin2phi)*ReDZ;
  sigma_ZN_mix = 0;
  for(int k = 0; k < 4; k++){
    sigma_ZN_mix += I3(s,m1,m2,mN[k])*(Le*pow(fL[k],2)-Re*pow(fR[k],2));
  }
  sigma_ZN_mix *= pi*pow(alpha,2)/pow(sin2thetaW,2)/(1.-sin2thetaW)/pow(s,2)*sin2phi*cos2phi*(Le-Re)*ReDZ;
  
  // Total cross section
  if( bMixed ) { sigma = sigma_Z_mix; }
  else { sigma = sigma_g + sigma_Z + sigma_gZ; }
  if( bSelectron && !bMixed ) { sigma += sigma_N + sigma_gN + sigma_ZN; }
  else if( bSelectron && bMixed ) { sigma += sigma_N_mix + sigma_ZN_mix; }
  
  // Fix units
  sigma *= 0.389379338*1.0e9;  // Cross section in pb, (\hbar c)^2 = 0.389379338 GeV^2 mb

  return sigma;
}


// Integrals for t-channel neutralino diagrams
// m1 and m2 are masses of final state sleptons
// mk and ml are neutralino masses
double I1(double s, double m1, double m2, double mk, double ml){
  double S = sqrt(s-pow(m1+m2,2))*sqrt(s-pow(m1-m2,2));
  double m1sq = pow(m1,2);
  double m2sq = pow(m2,2);
  double mksq = pow(mk,2);
  double mlsq = pow(ml,2);
  
  double I1 = 0;
  // Careful with degenerate masses!
  if( fabs(mksq-mlsq) < 0.1 ){
    I1 = (m1sq+m2sq-2.*mksq-s)*log((m1sq+m2sq-2.*mksq-s+S)/(m1sq+m2sq-2.*mksq-s-S))-4*S*((m1sq-mksq)*(m2sq-mksq)+mksq*s)/(m1sq+m2sq-2.*mksq-s-S)/(m1sq+m2sq-2.*mksq-s+S)-S;
  }
  else{
    I1 = (m1sq*(m2sq-mksq)+mksq*(mksq-m2sq+s))/(mksq-mlsq)*log((m1sq+m2sq-2.*mksq-s-S)/(m1sq+m2sq-2.*mksq-s+S));
    I1 += (m1sq*(m2sq-mlsq)+mlsq*(mlsq-m2sq+s))/(mlsq-mksq)*log((m1sq+m2sq-2.*mlsq-s-S)/(m1sq+m2sq-2.*mlsq-s+S));
    I1 -= S;
  }
  return I1;
}
double I2(double s, double m1, double m2, double mk, double ml){
  double S = sqrt(s-pow(m1+m2,2))*sqrt(s-pow(m1-m2,2));
  double m1sq = pow(m1,2);
  double m2sq = pow(m2,2);
  double mksq = pow(mk,2);
  double mlsq = pow(ml,2);

  double I2 = 0;
  // Careful with degenerate masses!
  if( fabs(mksq-mlsq) < 0.1 ){
    I2 = S/(m1sq*(m2sq-mksq)+mksq*(-m2sq+mksq+s));
    //cout << s << " " << S << " " << m1 << " " << m2 << " " << mk << " " << ml << " I2 (degenerate masses) " << I2 << endl;
  }
  else{
    I2 = log((m1sq+m2sq-2.*mksq-(s-S))/(m1sq+m2sq-2.*mksq-(s+S)));
    I2 += log((m1sq+m2sq-2.*mlsq-(s+S))/(m1sq+m2sq-2.*mlsq-(s-S)));
    I2 *= 1./(mksq-mlsq);
    //cout << mk << " " << ml << " I2 " << I2 << endl;
  }
  return I2;
}
double I3(double s, double m1, double m2, double mk){
  double S = sqrt(s-pow(m1+m2,2))*sqrt(s-pow(m1-m2,2));
  double m1sq = pow(m1,2);
  double m2sq = pow(m2,2);
  double mksq = pow(mk,2);
  
  double I3 = 0;
  I3 = log((m1sq+m2sq-2.*mksq-(s+S))/(m1sq+m2sq-2.*mksq-(s-S)));
  I3 *= m1sq*(m2sq-mksq)+mksq*(-m2sq+mksq+s);
  I3 += (m1sq+m2sq-2.*mksq-s)*S/2.;
  return I3;
}


////////////////////////////////////////////////////////////////////////
// Cross section [pb] for e^+e^- -> \tilde\chi^0_i \tilde\chi^0_j
////////////////////////////////////////////////////////////////////////
// Masses mi and mj for the neutralinos are signed. mS are the selectron masses (left = 0, right = 1).
// Warning! BFM uses inverted \tan\beta! Use tanb = 1 / tanb in converting from SLHA.
////////////////////////////////////////////////////////////////////////
double xsec_neuineuj(int pid1, int pid2, double sqrts, double mi, double mj, MixMatrix N, double mS[2], double tanb){
  
  // Translate from PDG codes to neutralino indices (starting at zero)
  int i, j;
  if(pid1 == 1000022) i = 0;
  else if(pid1 == 1000023) i = 1;
  else if(pid1 == 1000025) i = 2;
  else if(pid1 == 1000035) i = 3;
  else{ cout << "Invalid final state neutralino PDG code " << pid1 << endl; return -1; }
  if(pid2 == 1000022) j = 0;
  else if(pid2 == 1000023) j = 1;
  else if(pid2 == 1000025) j = 2;
  else if(pid2 == 1000035) j = 3;
  else{ cout << "Invalid final state neutralino PDG code " << pid2 << endl; return -1; }
  
  // Set slepton masses
  double msL = mS[0];
  double msR = mS[1];
  
  // Couplings
  // e = g \sin\theta_W = g' \cos\theta_W
  // alpha = e^2 / 4\pi
  int deltaij = 0;
  if (i == j) deltaij = 1;
  double cos2b = (1.-pow2(tanb))/(1.+pow2(tanb));
  double sin2b = 2.*tanb/(1.+pow2(tanb));
  double T3l = -0.5;
  double Le = T3l+sin2thetaW;
  double Re = sin2thetaW;
  double OL[4][4], OR[4][4];
  for(int k = 0; k < 4; k++){
    for(int l = 0; l < 4; l++){
      OL[k][l] = 0.5*(N[k][2]*N[l][2]-N[k][3]*N[l][3])*cos2b-0.5*(N[k][2]*N[l][3]+N[k][3]*N[l][2])*sin2b;
      OR[k][l] = -OL[k][l];
    }
  }
  double fL[4], fR[4];
  for(int k = 0; k < 4; k++){
    fL[k] = -sqrt(2.) * (Le*N[k][1]/sqrt(1.-sin2thetaW)+sqrt(sin2thetaW)*N[k][0]);
    fR[k] = sqrt(2.) * sqrt(sin2thetaW) * (sqrt(sin2thetaW/(1.-sin2thetaW))*N[k][1]-N[k][0]);
  }
  
  // Kinematics
  double s, q, Ei, Ej, DZ2, ReDZ;
  s = pow(sqrts,2);
  DZ2 = 1./(pow2(s-pow2(mZ))+pow2(mZ*gZ)); // Breit-Wigner for Z
  ReDZ = (s-pow2(mZ))*DZ2;
  Ei = (s+pow(mi,2)-pow(mj,2))/2./sqrts;  // Energy of \tilde\chi^0_i in e+e- CoM system
  q = sqrt(pow(Ei,2)-pow(mi,2));          // Momentum of \tilde\chi^0_i in e+e- CoM system
  Ej = sqrt(pow(q,2)+pow(mj,2));

  double dL, dR;
  dL = 0.5/s * (s + 2*pow2(msL) - pow2(mi) - pow2(mj));
  dR = 0.5/s * (s + 2*pow2(msR) - pow2(mi) - pow2(mj));

  // Cross sections per diagram and interference terms
  double sigma, sigma_Z, sigma_s, sigma_Zs;
  // Z
  sigma_Z = 4.*pi*pow2(alpha)/pow2(sin2thetaW)/pow2(1.-sin2thetaW) * DZ2 * q/sqrts * pow2(OL[i][j]) * (pow2(Le)+pow2(Re));
  sigma_Z *=  Ei*Ej + 1/3.*pow(q,2)-mi*mj;
  // selectrons
  sigma_s  = pow2(fL[i]*fL[j]) * ((Ei*Ej-s*dL+pow2(q))/(s*pow2(dL)-pow2(q)) + 2. + 0.5*sqrts/q*(1.-2.*dL-mi*mj/s/dL)*log(fabs((dL+q/sqrts)/(dL-q/sqrts))));
  sigma_s += pow2(fR[i]*fR[j]) * ((Ei*Ej-s*dR+pow2(q))/(s*pow2(dR)-pow2(q)) + 2. + 0.5*sqrts/q*(1.-2.*dR-mi*mj/s/dR)*log(fabs((dR+q/sqrts)/(dR-q/sqrts))));
  sigma_s *= pi*pow2(alpha)/pow2(sin2thetaW) * q/s/sqrts;
  // Interference
  sigma_Zs  =  Le*fL[i]*fL[j] * (1./q/sqrts*(Ei*Ej-s*dL*(1.-dL)-mi*mj)*log(fabs((dL+q/sqrts)/(dL-q/sqrts)))+2.*(1-dL));
  sigma_Zs += -Re*fR[i]*fR[j] * (1./q/sqrts*(Ei*Ej-s*dR*(1.-dR)-mi*mj)*log(fabs((dR+q/sqrts)/(dR-q/sqrts)))+2.*(1-dR));
  sigma_Zs *= -2.*pi*pow2(alpha)/pow2(sin2thetaW)/(1.-sin2thetaW) * q/sqrts * ReDZ * OL[i][j];
  
  // Total cross section
  sigma = 0.5*(sigma_Z + sigma_s + sigma_Zs)*(2.-deltaij);
  
  // Fix units
  sigma *= 0.389379338*1.0e9;   // Cross section in pb, (\hbar c)^2 = 0.389379338 GeV^2 mb

  return sigma;
}


////////////////////////////////////////////////////////////////////////
// Cross section [pb] for e^+e^- -> \tilde\chi^+_i \tilde\chi^-_j
////////////////////////////////////////////////////////////////////////
// Masses mi and mj for the charginos are signed. ms is electron sneutrino mass.
////////////////////////////////////////////////////////////////////////
double xsec_chaichaj(int pid1, int pid2, double sqrts, double mi, double mj, MixMatrix V, MixMatrix U, double ms){
  
  // Translate from PDG codes to chargino indices (silly paper convention that i=2 lighter than i=1!)
  int i, j;
  pid1 = abs(pid1); pid2 = abs(pid2);
  if(pid1 == 1000024) i = 1;
  else if(pid1 == 1000037) i = 0;
  else{ cout << "Invalid final state chargino PDG code " << pid1 << endl; return -1; }
  if(pid2 == 1000024) j = 1;
  else if(pid2 == 1000037) j = 0;
  else{ cout << "Invalid final state chargino PDG code " << pid2 << endl; return -1; }
  
  // Couplings
  int deltaij = 0;
  if (i == j) deltaij = 1;
  // e = g \sin\theta_W = g' \cos\theta_W
  double T3l = -0.5;
  double Le = T3l+sin2thetaW;
  double Re = sin2thetaW;
  double OL[2][2], OR[2][2];
  for(int k = 0; k < 2; k++){
    for(int l = 0; l < 2; l++){
      OL[k][l] = -V[k][0]*V[l][0]-0.5*V[k][1]*V[l][1]+deltaij*sin2thetaW;
      OR[k][l] = -U[k][0]*U[l][0]-0.5*U[k][1]*U[l][1]+deltaij*sin2thetaW;
    }
  }
  
  // Kinematics
  double s, q, Ei, Ej, DZ2, ReDZ;
  s = pow2(sqrts);
  Ei = (s+pow2(mi)-pow2(mj))/2./sqrts;  // Energy of \tilde\chi^+_i in e+e- CoM system
  q = sqrt(pow2(Ei)-pow2(mi));          // Momentum of \tilde\chi^+_i in e+e- CoM system
  Ej = sqrt(pow2(q)+pow2(mj));
  DZ2 = 1./(pow2(s-pow2(mZ))+pow2(mZ*gZ)); // Breit-Wigner for Z
  ReDZ = (s-pow2(mZ))*DZ2;
  
  double aL, bL, h;
  aL = 0.5/pow2(ms)*(2*pow2(ms)+s-pow2(mi)-pow2(mj));
  bL = q*sqrts/pow2(ms);
  h = 2.*q*sqrts-2.*pow2(q)*aL/bL+(Ei*Ej+pow2(q*aL/bL)-q*sqrts*aL/bL)*log(fabs((aL+bL)/(aL-bL)));
  //cout << aL << " " << bL << endl;
  
  // Cross sections per diagram and interference terms
  double sigma, sigma_g, sigma_Z, sigma_s, sigma_gZ, sigma_gs, sigma_Zs;
  // Gamma
  sigma_g = 8*pi*pow2(alpha) * q*sqrts/pow(s,3) * deltaij * (Ei*Ej+pow2(q)/3.+fabs(mi*mj));
  // Z
  sigma_Z = 2.*pi*pow2(alpha)/pow2(sin2thetaW)/pow2(1.-sin2thetaW) * q/sqrts * DZ2;
  sigma_Z *= (pow2(OL[i][j])+pow2(OR[i][j]))*(pow2(Le)+pow2(Re))*(Ei*Ej+pow2(q)/3.)+2.*(pow2(Le)+pow2(Re))*OL[i][j]*OR[i][j]*mi*mj;
  // Sneutrino
  sigma_s = pi*pow2(alpha)/2./pow2(sin2thetaW)*pow2(V[i][0]*V[j][0])/pow(ms,4) * q/sqrts;
  sigma_s *= (Ei*Ej+pow2(q)-q*sqrts*aL/bL)/(pow2(aL)-pow2(bL)) + 2.*pow2(q/bL) + 0.5/pow2(bL)*(q*sqrts-2.*pow2(q)*aL/bL)*log(fabs((aL+bL)/(aL-bL)));
  // Interference
  sigma_gZ = 4*pi*pow2(alpha)/(1.-sin2thetaW)/sin2thetaW * q*sqrts/pow2(s)*ReDZ*deltaij*(Le+Re);
  sigma_gZ *= (OL[i][j]+OR[i][j])*(Ei*Ej+pow2(q)/3.+fabs(mi*mj));
  sigma_gs = -pi*pow2(alpha)/sin2thetaW*pow2(V[i][0]) * deltaij/pow2(s);
  sigma_gs *= h + fabs(mi*mj)*log(fabs((aL+bL)/(aL-bL)));
  sigma_Zs = -pi*pow2(alpha)/pow2(sin2thetaW)/(1.-sin2thetaW)*V[i][0]*V[j][0] * ReDZ/s * Le;
  sigma_Zs *= OL[i][j]*h + OR[i][j]*mi*mj*log(fabs((aL+bL)/(aL-bL)));
  
  // Total cross section with interference terms
  sigma = sigma_g + sigma_Z + sigma_s+ sigma_gZ + sigma_gs + sigma_Zs;
  
  // Units
  sigma *= 0.389379338*1.0e9;   // Cross section in pb, (\hbar c)^2 = 0.389379338 GeV^2 mb
  
  return sigma;
  
}


////////////////////////////////////////////////////////////////////////
// Functions to convert mass matrices between SLHA and BFM conventions
////////////////////////////////////////////////////////////////////////

// Converts a neutralino mixing matrix in SLHA conventions to BFM conventions, \tan\beta is as defined in SLHA
void SLHA2BFM_NN(MixMatrix &NN, double tanb){
  // Print matrix
  print(NN);
  // Test unitarity
  print(multiply(transpose(NN),NN));
  
  // Define conversion matrix
  double sin2thetaW = 0.23126;    // MSbar at mZ
  double sinthetaW = sqrt(sin2thetaW);
  double costhetaW = sqrt(1.-sin2thetaW);
  double tanv = 1./tanb;       // Needed because of convention difference
  double sinv = sin(atan(tanv));
  double cosv = cos(atan(tanv));
  MixMatrix T(4,vector<double>(4));
  T[0][0] = costhetaW; T[0][1] = -sinthetaW;
  T[1][0] = sinthetaW; T[1][1] = costhetaW;
  T[2][2] = sinv;   T[2][3] = cosv;
  T[3][2] = -cosv;  T[3][3] = sinv;
  
  // Multiply N_{BFM} = N_{SLHA} T
  NN = multiply(NN,T);
  
  // Print matrix
  print(NN);
  // Test unitarity
  print(multiply(transpose(NN),NN));
}

// Converts the chargino mixing matrix V in SLHA conventions to BFM conventions
void SLHA2BFM_VV(MixMatrix &VV){
  // Print matrix
  print(VV);
  // Test unitarity
  print(multiply(transpose(VV),VV));
  
  // Define conversion matrix (\sigma_3)
  MixMatrix T(2,vector<double>(2));
  T[0][0] = 1; T[0][1] =  0;
  T[1][0] = 0; T[1][1] = -1;
  
  // Multiply V_{BFM} = \sigma_3 V_{SLHA}
  VV = multiply(T,VV);
  
  // Print matrix
  print(VV);
  // Test unitarity
  print(multiply(transpose(VV),VV));
}

// Converts a neutralino mixing matrix in BFM conventions to SLHA conventions, tanbeta is as defined in SLHA
void BFM2SLHA_NN(MixMatrix &NN, double tanb){
  // Print matrix
  print(NN);
  // Test unitarity
  print(multiply(transpose(NN),NN));
  
  // Define conversion matrix
  double sin2thetaW = 0.23126;    // MSbar at mZ
  double sinthetaW = sqrt(sin2thetaW);
  double costhetaW = sqrt(1.-sin2thetaW);
  double tanv = 1./tanb;       // Needed because of convention difference
  double sinv = sin(atan(tanv));
  double cosv = cos(atan(tanv));
  MixMatrix T(4,vector<double>(4));
  T[0][0] = costhetaW; T[0][1] = -sinthetaW;
  T[1][0] = sinthetaW; T[1][1] = costhetaW;
  T[2][2] = sinv;   T[2][3] = cosv;
  T[3][2] = -cosv;  T[3][3] = sinv;
  
  // Multiply N_{SLHA} = N_{BFM} T^T
  NN = multiply(NN,transpose(T));
  
  // Print matrix
  print(NN);
  // Test unitarity
  print(multiply(transpose(NN),NN));
}

// Converts the chargino mixing matrix V in BFM conventions to SLHA conventions
void BFM2SLHA_VV(MixMatrix &VV){
  SLHA2BFM_VV(VV);
}

// Helper function to multiply matrices
MixMatrix multiply(MixMatrix A, MixMatrix B){
  int dim = A.size();
  MixMatrix C(dim,vector<double>(dim));
  for(int i = 0; i < dim; i++){
    for(int j = 0; j < dim; j++){
      for(int k = 0; k < dim; k++){
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
  return C;
}

// Helper function to find matrix transpose
MixMatrix transpose(MixMatrix A){
  double temp;
  int dim = A.size();
  for(int i = 0; i < dim; i++){
    for(int j = i+1; j < dim; j++){
      temp = A[i][j];
      A[i][j] = A[j][i];
      A[j][i] = temp;
    }
  }
  return A;
}

// Helper function to print a matrix
void print(MixMatrix A){
  int dim = A.size();
  cout << "Matrix dimension: " << dim << endl;
  for(int i = 0; i < dim; i++){
    for(int j = 0; j < dim; j++){
      cout << A[i][j] << " ";
      if(j == dim-1) cout << endl;
    }
  }
}