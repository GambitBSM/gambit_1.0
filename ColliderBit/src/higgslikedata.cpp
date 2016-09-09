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

#define DEBUG

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

cout << "here " << endl;

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
const char *ext = ".txt";
const char* file_tmp = path.c_str(); // vector containing file names
string c_file =  file_tmp + file + ext;
const char *filename = c_file.c_str();

#ifdef DEBUG
cout << "reading file = " << filename << endl;
#endif

int n=0;
std::vector <std::string> col1, col2, col3, col4;
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
input.close();

n=0;
std::ifstream input2(filename);
std::string line2;
while(getline(input2, line2)) {
    if (!line2.length() || line2[0] == '#')
       continue;
    std::istringstream iss2(line2);
  
  
  iss2>> col1[n] >> col2[n] >> col3[n] >> col4[n];
    n=n+1;
 }

 input2.close();



mh =  std::stod(col1[11]);
lb = std::stod(col2[11]);
mu = std::stod(col3[11]);
ub = std::stod(col4[11]);

sig_mh = std::stod(col1[6]);





}

void Decays::set_BF(double mh)
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



void Decays::add_SS_decay(double ms, double lambda_hs)
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




void Effective_couplings::compute_scaling_factors(Decays data)
{
// set up object with SM branching ratios and width
if (!SM_decays_set)
{
Decays sm;
sm.set_BF(data._mh);
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
/*double C_t = pow(C_tt2,0.5);
double C_b = pow(C_bb2,0.5);
double C_c = pow(C_cc2,0.5);
double C_W = pow(C_WW2,0.5);
double C_tau = pow(C_tautau2,0.5);*/

//double sum_a = C_t*C_t

// these should be corrected for loop contributions

C_gg2 = ratio * data.BR_hjgg/ SM_decays.BR_hjgg;// sum_a / sum_b;

C_gaga2 = ratio * data.BR_hjgaga/ SM_decays.BR_hjgaga;

C_Zga2 = ratio * data.BR_hjZga/ SM_decays.BR_hjZga;

//C_hiZ2 = Gamma * data.BR_hjhiZ/ SM_decays.BR_hjhiZ;




//C_W =

ofstream myfile;
myfile.open ("../data/temp/model_data_effC.txt");

myfile<< data._mh << endl;

myfile << data.width_in_GeV << endl;

myfile << SM_decays.width_in_GeV << endl;

myfile << C_ss2 << endl;
myfile << C_cc2 << endl;
myfile << C_bb2 << endl;
myfile << 1 << endl; // fix later, gives nan since tt channel zero at 125 GeV
myfile << C_mumu2 << endl;
myfile << C_tautau2 << endl;

myfile << C_WW2 << endl;
myfile <<  C_ZZ2 << endl;

myfile << C_Zga2 << endl;
myfile << C_gg2 << endl;

myfile << C_gaga2 << endl;

//myfile << C_hiZ2 << endl;

myfile << data.BR_invisible << endl;

myfile.close();



}



}

}