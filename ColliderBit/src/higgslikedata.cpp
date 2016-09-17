//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///
///  Simple internal LHC Higgs likelihood calculator
///  This file contains some functions for reading data
///  and setting up the classes to hold this data
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///
///  \author James McKay
///          (j.mckay14@imperial.ac.uk)
///  Sep 2016
///
///  *********************************************
#include <vector>
#include <cmath>
#include <sstream>
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>


#include "gambit/ColliderBit/higgslike.hpp"

//#define DEBUG

using namespace std;

namespace Gambit {

namespace ColliderBit{

void get_data(vector<std::string> &A,int &n,const char *filename)
{
#ifdef DEBUG
cout << "reading file = " << filename << endl;
#endif
n=0;
std::ifstream input(filename);
std::string line;
while(getline(input, line)) {
      if (!line.length() || line[0] == '#')
         continue;
      std::istringstream iss(line);
      n=n+1;
   }
  
A.resize(n);

 input.close();

n=0;
std::ifstream input2(filename);
std::string line2;
while(getline(input2, line2)) {
    if (!line2.length() || line2[0] == '#')
       continue;
    std::istringstream iss2(line2);
  
  
  iss2>> A[n];
    n=n+1;
 }

 input2.close();


}




std::map <int, Signal_strength> read_expt_data(std::string path)
{

std::map <int, Signal_strength> input_data;


std::vector <std::string> filenames;
int nd = 0; // number of signal strengths to import


string c_file_names = path + "list.txt";//"../data/expt_data_list.txt";
const char *file_names_list = c_file_names.c_str();

get_data(filenames,nd,file_names_list);


for ( int i = 0; i<nd ; i++)
{
// read from some file line i
Signal_strength ss1(filenames[i],path);
input_data[i] = ss1;
}



return input_data;
}



void Signal_strength::set_data_from_file(std::string file,std::string path)
{

// need to extract Higgs mass, sig_mh, mu, ub, lb at least
// can add more quantites later
const char *ext = ""; // removed extension
const char* file_tmp = path.c_str(); // vector containing file names
string c_file =  file_tmp + file + ext;
const char *filename = c_file.c_str();

#ifdef DEBUG
cout << "reading file = " << filename << endl;
#endif

int n=0;
std::vector <std::string> col1, col2, col3, col4, col5;
std::ifstream input(filename);
std::string line;
while(getline(input, line)) {
      if (!line.length() || line[0] == '#')
         continue;
      std::istringstream iss(line);
      n=n+1;
   }
  
col1.resize(n);
col2.resize(n);
col3.resize(n);
col4.resize(n);
col5.resize(n);
input.close();

n=0;
std::ifstream input2(filename);
std::string line2;
while(getline(input2, line2)) {
    if (!line2.length() || line2[0] == '#')
       continue;
    std::istringstream iss2(line2);
  
  
  iss2>> col1[n] >> col2[n] >> col3[n] >> col4[n] >> col5[n];
    n=n+1;
 }

 input2.close();
int use_line = 11;
if (col2[8] == "-1"){ use_line = 10;}

mh =  std::stod(col1[use_line]);
lb = std::stod(col2[use_line]);
mu = std::stod(col3[use_line]);
ub = std::stod(col4[use_line]);

sig_mh = std::stod(col1[6]);

std::string channel_1 = col1[9];
std::string channel_2 = col2[9];
std::string channel_3 = col3[9];
std::string channel_4 = col4[9];
std::string channel_5 = col5[9];

prod.push_back("all");
// not currently considering production channels, need theory input for this from somewhere
if (channel_1!=""){ std::string c; c.push_back(channel_1[1]); set_decay(c);}
if (channel_2!=""){ std::string c; c.push_back(channel_2[1]); set_decay(c);}
if (channel_3!=""){ std::string c; c.push_back(channel_3[1]); set_decay(c);}
if (channel_4!=""){ std::string c; c.push_back(channel_4[1]); set_decay(c);}
if (channel_5!=""){ std::string c; c.push_back(channel_5[1]); set_decay(c);}




  sort(decay.begin(),decay.end());
  decay.erase( unique( decay.begin(), decay.end() ), decay.end() );






}

void gambit_Higgs_ModelParameters::set_sm(double mh)
{
      
      _mh = mh;
  
      width_in_GeV = virtual_SMHiggs_widths("Gamma",mh);
      BR_hjbb= virtual_SMHiggs_widths("bb",mh);
  
      BR_hjtautau = virtual_SMHiggs_widths("tautau",mh);


      BR_hjmumu = virtual_SMHiggs_widths("mumu",mh);
  
      BR_hjss = virtual_SMHiggs_widths("ss",mh);

      BR_hjcc = virtual_SMHiggs_widths("cc",mh);
  
      BR_hjtt = virtual_SMHiggs_widths("tt",mh);
  
      //cout << "BR_hjtt = " << BR_hjtt << endl;
  
      BR_hjgg = virtual_SMHiggs_widths("gg",mh);
  
      BR_hjgaga = virtual_SMHiggs_widths("gammagamma",mh);
  
      BR_hjZga = virtual_SMHiggs_widths("Zgamma",mh);
  
      BR_hjWW = virtual_SMHiggs_widths("WW",mh);
  
      BR_hjZZ = virtual_SMHiggs_widths("ZZ",mh);
  
  
  
      #ifdef DEBUG
      cout << "BR_hjbb = " << BR_hjbb << endl;
      cout << "BR_hjtautau = " << BR_hjtautau << endl;
      cout << "BR_hjmumu = " << BR_hjmumu << endl;
      cout << "BR_hjss = " << BR_hjss << endl;
      cout << "BR_hjcc = " << BR_hjcc << endl;
      cout << "BR_hjtt = " << BR_hjtt << endl;
      cout << "BR_hjgg = " << BR_hjgg << endl;
      cout << "BR_hjgaga = " << BR_hjgaga << endl;
      cout << "BR_hjZga = " << BR_hjZga << endl;
      cout << "BR_hjWW = " << BR_hjWW << endl;
      cout << "BR_hjZZ = " << BR_hjZZ << endl;
      #endif
  
      map_set = 0; // since values have changed need to reset map if called again
  
  
}



void gambit_Higgs_ModelParameters::add_SS_decay(double ms, double lambda_hs)
{

// add invisible width from H -> SS decay channel and rescale
// other branching ratios and total width, slightly adapted from gambit DecayBit.cpp

double v0 = 246.0;
double mh = _mh;
double pi = 3.14159;
double gamma=0;
double massratio2 = pow(ms/mh,2);

if (2*ms <= mh)
{
gamma = pow(lambda_hs*v0,2)/(32.0*pi*mh) * pow(1.0 - 4.0*massratio2,0.5);
}


double new_width_in_GeV = width_in_GeV + gamma;
// Rescale the SM decay branching fractions.
double wscaling = width_in_GeV/new_width_in_GeV;
BR_hjss =  BR_hjss * wscaling;
BR_hjcc = BR_hjcc * wscaling;
BR_hjbb = BR_hjbb * wscaling;
BR_hjmumu = BR_hjmumu * wscaling;
BR_hjtautau = BR_hjtautau * wscaling;
BR_hjWW = BR_hjWW * wscaling;
BR_hjZZ = BR_hjZZ * wscaling;
BR_hjZga = BR_hjZga * wscaling;
BR_hjgaga = BR_hjgaga * wscaling;
BR_hjgg = BR_hjgg * wscaling;
  
BR_invisible = gamma/new_width_in_GeV;  // set invisible width from H-> SS




width_in_GeV = new_width_in_GeV; // update the total width

#ifdef DEBUG
cout << "--- after rescaling ---" << endl;
cout << "BR_hjbb = " << BR_hjbb << endl;
cout << "BR_hjtautau = " << BR_hjtautau << endl;
cout << "BR_hjmumu = " << BR_hjmumu << endl;
cout << "BR_hjss = " << BR_hjss << endl;
cout << "BR_hjcc = " << BR_hjcc << endl;
cout << "BR_hjtt = " << BR_hjtt << endl;
cout << "BR_hjgg = " << BR_hjgg << endl;
cout << "BR_hjgaga = " << BR_hjgaga << endl;
cout << "BR_hjZga = " << BR_hjZga << endl;
cout << "BR_hjWW = " << BR_hjWW << endl;
cout << "BR_hjZZ = " << BR_hjZZ << endl;
#endif

map_set = 0; // since values have changed need to reset map if called again

}




void Effective_couplings::compute_scaling_factors(gambit_Higgs_ModelParameters data,
 lilith_ModelParameters &result)
{
// set up object with SM branching ratios and width
if (!SM_decays_set)
{
gambit_Higgs_ModelParameters sm;
sm.set_sm(data._mh);
SM_decays = sm;
SM_decays_set = 1;
}

// set total width for new model

double Gamma = data.width_in_GeV;
double ratio = Gamma/SM_decays.width_in_GeV;
C_WW2 = ratio * data.BR_hjWW / SM_decays.BR_hjWW;
C_ZZ2 = ratio * data.BR_hjZZ / SM_decays.BR_hjZZ;
C_tt2 = 1;//ratio * data.BR_hjtt / SM_decays.BR_hjtt;
C_bb2 = ratio * data.BR_hjbb / SM_decays.BR_hjbb;
C_cc2 = ratio * data.BR_hjcc / SM_decays.BR_hjcc;
C_ss2 = ratio * data.BR_hjss / SM_decays.BR_hjss;
C_tautau2 = ratio * data.BR_hjtautau / SM_decays.BR_hjtautau;

C_mumu2 = ratio * data.BR_hjmumu/ SM_decays.BR_hjmumu;


// following equation (10) of Lilith manual we can, at tree-level, set the following
result.C_tt = pow(C_tt2,0.5);
result.C_cc = pow(C_cc2,0.5);
result.C_bb = pow(C_bb2,0.5);
result.C_tautau = pow(C_tautau2,0.5);
result.C_ZZ = pow(C_ZZ2,0.5);
result.C_WW= pow(C_WW2,0.5);
 

// these should be corrected for loop contributions

C_gg2 = ratio * data.BR_hjgg/ SM_decays.BR_hjgg;

C_gaga2 = ratio * data.BR_hjgaga/ SM_decays.BR_hjgaga;

C_Zga2 = ratio * data.BR_hjZga/ SM_decays.BR_hjZga;

//C_hiZ2 = Gamma * data.BR_hjhiZ/ SM_decays.BR_hjhiZ;
result.C_gammagamma = pow(C_gaga2,0.5);
result.C_gg = pow(C_gg2,0.5);
result.C_Zgamma = pow(C_Zga2,0.5);



}




void Effective_couplings::compute_scaling_factors(gambit_Higgs_ModelParameters data,
 hb_ModelParameters_effC &result)
{
// set up object with SM branching ratios and width
if (!SM_decays_set)
{
gambit_Higgs_ModelParameters sm;
sm.set_sm(data._mh);
SM_decays = sm;
SM_decays_set = 1;
}

// set total width for new model

double Gamma = data.width_in_GeV;
double ratio = Gamma/SM_decays.width_in_GeV;
C_WW2 = ratio * data.BR_hjWW / SM_decays.BR_hjWW;
C_ZZ2 = ratio * data.BR_hjZZ / SM_decays.BR_hjZZ;
C_tt2 = 1;//ratio * data.BR_hjtt / SM_decays.BR_hjtt;
C_bb2 = ratio * data.BR_hjbb / SM_decays.BR_hjbb;
C_cc2 = ratio * data.BR_hjcc / SM_decays.BR_hjcc;
C_ss2 = ratio * data.BR_hjss / SM_decays.BR_hjss;
C_tautau2 = ratio * data.BR_hjtautau / SM_decays.BR_hjtautau;

C_mumu2 = ratio * data.BR_hjmumu/ SM_decays.BR_hjmumu;


// these should be corrected for loop contributions

C_gg2 = ratio * data.BR_hjgg/ SM_decays.BR_hjgg;

C_gaga2 = ratio * data.BR_hjgaga/ SM_decays.BR_hjgaga;

C_Zga2 = ratio * data.BR_hjZga/ SM_decays.BR_hjZga;

//C_hiZ2 = Gamma * data.BR_hjhiZ/ SM_decays.BR_hjhiZ;




for(int i = 0; i < 3; i++)
{
result.hGammaTot[i] = 0.0;
//result.SMGammaTotal[i] = 0.0;
result.g2hjss_s[i] = 0.0;
result.g2hjcc_s[i] = 0.0;
result.g2hjbb_s[i] = 0.0;
result.g2hjtt_s[i] = 0.0;
result.g2hjmumu_s[i] = 0.0;
result.g2hjtautau_s[i] = 0.0;
result.g2hjWW[i] = 0.0;
result.g2hjZZ[i] =  0.0;
result.g2hjZga[i] = 0.0;
result.g2hjgg[i] = 0.0;
result.g2hjgaga[i] = 0.0;
result.BR_hjinvisible[i] = 0.0;
result.g2hjss_p[i]=0.0;
result.g2hjcc_p[i]=0.0;
result.g2hjbb_p[i]=0.0;
result.g2hjtt_p[i]=0.0;
result.g2hjmumu_p[i]=0.0;
result.g2hjtautau_p[i]=0.0;
result.g2hjggZ[i]=0.0;
result.g2hjhiZ[i]=0.0;
for(int j = 0; j < 3; j++) result.BR_hjhihi[i][j] = 0.0;
}
result.hGammaTot[0] = data.width_in_GeV;

//result.SMGammaTotal[0] = SM_decays.width_in_GeV;

result.g2hjss_s[0] = C_ss2;
result.g2hjcc_s[0] = C_cc2;
result.g2hjbb_s[0] = C_bb2;
result.g2hjtt_s[0] = 1.0;  // fix later, gives nan since tt channel zero at 125 GeV
result.g2hjmumu_s[0] = C_mumu2;
result.g2hjtautau_s[0] = C_tautau2;

result.g2hjWW[0] = C_WW2;
result.g2hjZZ[0] =  C_ZZ2;

result.g2hjZga[0] = C_Zga2;
result.g2hjgg[0] = C_gg2;

result.g2hjgaga[0] = C_gaga2;
result.BR_hjinvisible[0] = data.BR_invisible;
result.g2hjss_p[0]=0.0;
result.g2hjcc_p[0]=0.0;
result.g2hjbb_p[0]=0.0;
result.g2hjtt_p[0]=0.0;
result.g2hjmumu_p[0]=0.0;
result.g2hjtautau_p[0]=0.0;
result.g2hjggZ[0]=1.0;
result.g2hjhiZ[0]=0.0; // needs to be matrix
result.BR_hjhihi[0][0]=0.0;

}



}

}