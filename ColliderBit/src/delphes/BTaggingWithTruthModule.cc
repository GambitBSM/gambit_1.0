/** \class BTaggingWithTruth
 *
 *  Determines origin of jet,
 *  applies b-tagging efficiency (miss identification rate) formulas
 *  and sets b-tagging flags
 *
 *  $Date: 2013-04-26 12:39:14 +0200 (Fri, 26 Apr 2013) $
 *  $Revision: 1099 $
 *
 *
 *  \author P. Demin - UCL, Louvain-la-Neuve
 *
 */

#include "gambit/cmake/cmake_variables.hpp"
#ifndef EXCLUDE_DELPHES

#include "BTaggingWithTruthModule.h"
ClassImp(BTaggingWithTruth)

#include "classes/DelphesClasses.h"
#include "classes/DelphesFactory.h"
#include "classes/DelphesFormula.h"

#include "ExRootAnalysis/ExRootResult.h"
#include "ExRootAnalysis/ExRootFilter.h"
#include "ExRootAnalysis/ExRootClassifier.h"

#include "TMath.h"
#include "TString.h"
#include "TFormula.h"
#include "TRandom3.h"
#include "TObjArray.h"
#include "TDatabasePDG.h"
#include "TLorentzVector.h"

#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <sstream>

using namespace std;

//------------------------------------------------------------------------------

class BTaggingWithTruthPartonClassifier : public ExRootClassifier
{
public:

  BTaggingWithTruthPartonClassifier() {}

  Int_t GetCategory(TObject *object);

  Double_t fEtaMax, fPTMin;
};

//------------------------------------------------------------------------------

Int_t BTaggingWithTruthPartonClassifier::GetCategory(TObject *object)
{
  Candidate *parton = static_cast<Candidate*>(object);
  const TLorentzVector &momentum = parton->Momentum;
  if (momentum.Pt() <= fPTMin || fabs(momentum.Eta()) > fEtaMax) return -1;

  Int_t pdgCode = abs(parton->PID);
  if (pdgCode != 21 && pdgCode > 5) return -1;

  return 0;
}

//------------------------------------------------------------------------------

BTaggingWithTruth::BTaggingWithTruth() :
  fClassifier(0), fFilter(0),
  fItPartonInputArray(0), fItJetInputArray(0)
{
  fClassifier = new BTaggingWithTruthPartonClassifier;
}

//------------------------------------------------------------------------------

BTaggingWithTruth::~BTaggingWithTruth()
{
  if(fClassifier) delete fClassifier;
}

//------------------------------------------------------------------------------

void BTaggingWithTruth::Init()
{
  map< Int_t, DelphesFormula * >::iterator itEfficiencyMap;
  ExRootConfParam param;
  DelphesFormula *formula;
  Int_t i, size;

  fBitNumber = GetInt("BitNumber", 0);

  fDeltaR = GetDouble("DeltaR", 0.5);

  fClassifier->fPTMin = GetDouble("PartonPTMin", 1.0);
  fClassifier->fEtaMax = GetDouble("PartonEtaMax", 2.5);

  // read efficiency formulas
  param = GetParam("EfficiencyFormula");
  size = param.GetSize();

  fEfficiencyMap.clear();
  for(i = 0; i < size/2; ++i)
    {
      formula = new DelphesFormula;
      formula->Compile(param[i*2 + 1].GetString());

      fEfficiencyMap[param[i*2].GetInt()] = formula;
    }

  // set default efficiency formula
  itEfficiencyMap = fEfficiencyMap.find(0);
  if(itEfficiencyMap == fEfficiencyMap.end())
    {
      formula = new DelphesFormula;
      formula->Compile("0.0");

      fEfficiencyMap[0] = formula;
    }

  // import input array(s)

  fPartonInputArray = ImportArray(GetString("PartonInputArray", "Delphes/partons"));
  fItPartonInputArray = fPartonInputArray->MakeIterator();

  fFilter = new ExRootFilter(fPartonInputArray);

  fJetInputArray = ImportArray(GetString("JetInputArray", "FastJetFinder/jets"));
  fItJetInputArray = fJetInputArray->MakeIterator();
}

//------------------------------------------------------------------------------

void BTaggingWithTruth::Finish()
{
  map< Int_t, DelphesFormula * >::iterator itEfficiencyMap;
  DelphesFormula *formula;

  if(fFilter) delete fFilter;
  if(fItJetInputArray) delete fItJetInputArray;
  if(fItPartonInputArray) delete fItPartonInputArray;

  for(itEfficiencyMap = fEfficiencyMap.begin(); itEfficiencyMap != fEfficiencyMap.end(); ++itEfficiencyMap)
    {
      formula = itEfficiencyMap->second;
      if(formula) delete formula;
    }
}

//------------------------------------------------------------------------------

void BTaggingWithTruth::Process()
{
  Candidate *jet, *parton;
  Double_t pt, eta;// UNUSED:, phi;
  TObjArray *partonArray;
  map< Int_t, DelphesFormula * >::iterator itEfficiencyMap;
  DelphesFormula *formula;
  Int_t pdgCode, pdgCodeMax;

  // select quark and gluons
  fFilter->Reset();
  partonArray = fFilter->GetSubArray(fClassifier, 0);

  if(partonArray == 0) return;

  TIter itPartonArray(partonArray);

  // loop over all input jets
  fItJetInputArray->Reset();
  while((jet = static_cast<Candidate*>(fItJetInputArray->Next()))) {
    const TLorentzVector &jetMomentum = jet->Momentum;
    pdgCodeMax = -1;
    eta = jetMomentum.Eta();
    // UNUSED: phi = jetMomentum.Phi();
    pt = jetMomentum.Pt();

    // loop over all input partons
    itPartonArray.Reset();
    //UNUSED: bool foundB = false;
    while ((parton = static_cast<Candidate*>(itPartonArray.Next()))) {
      pdgCode = abs(parton->PID);
      if (pdgCode == 21) pdgCode = 0;
      if (jetMomentum.DeltaR(parton->Momentum) <= fDeltaR) {
        if (pdgCodeMax < pdgCode) pdgCodeMax = pdgCode;
        //UNUSED: if (abs(pdgCode) == 5) foundB = true;
      }
    }
    if (pdgCodeMax == 0) pdgCodeMax = 21;
    if (pdgCodeMax == -1) pdgCodeMax = 0;
    // debugging:
    //if(foundB)cout << "FOUNDB" << endl;
    // find an efficency formula
    itEfficiencyMap = fEfficiencyMap.find(pdgCodeMax);
    if (itEfficiencyMap == fEfficiencyMap.end()) {
      itEfficiencyMap = fEfficiencyMap.find(0);
    }
    formula = itEfficiencyMap->second;
    //cout << "pdg id code max" << pdgCodeMax << endl;
    // apply an efficency formula
    jet->BTag |= (gRandom->Uniform() <= formula->Eval(pt, eta)) << fBitNumber;
    // remember the PID of "pdgCodeMax" used to choose the efficiency formula
    jet->PID = pdgCodeMax;
  }
}
#endif //EXCLUDE_DELPHES
