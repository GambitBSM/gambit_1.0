#include "mt2w_bisect.h"
#include <vector>
#include "HEPUtils/MathUtils.h"
#include "HEPUtils/Event.h"
using namespace std;


double calculateMT2wHepUtils(vector<HEPUtils::P4>& jets, vector<bool>& btag, HEPUtils::P4& lep, float met, float metphi);

double mt2wWrapperHepUtils(HEPUtils::P4& lep, HEPUtils::P4& jet_o, HEPUtils::P4& jet_b, float met, float metphi);
