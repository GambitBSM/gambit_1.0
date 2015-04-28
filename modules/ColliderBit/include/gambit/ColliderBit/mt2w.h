#include "mt2w_bisect.h"
#include <vector>
#include "Math/LorentzVector.h"

using namespace std;

typedef ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > LorentzVector;

double calculateMT2w(vector<LorentzVector>& jets, vector<bool>& btag, LorentzVector& lep, float met, float metphi);
double mt2wWrapper(LorentzVector& lep, LorentzVector& jet_o, LorentzVector& jet_b, float met, float metphi);
