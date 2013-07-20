#ifndef BTaggingWithTruth_h
#define BTaggingWithTruth_h

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

#include "classes/DelphesModule.h"

#include <map>

class TObjArray;
class DelphesFormula;

class ExRootFilter;
class BTaggingWithTruthPartonClassifier;

class BTaggingWithTruth: public DelphesModule
{
public:

  BTaggingWithTruth();
  ~BTaggingWithTruth();

  void Init();
  void Process();
  void Finish();

private:

  Int_t fBitNumber;

  Double_t fDeltaR;

  std::map< Int_t, DelphesFormula * > fEfficiencyMap; //!
  
  BTaggingWithTruthPartonClassifier *fClassifier; //!
  
  ExRootFilter *fFilter;

  TIterator *fItPartonInputArray; //!
  
  TIterator *fItJetInputArray; //!

  const TObjArray *fPartonInputArray; //!
  
  const TObjArray *fJetInputArray; //!

  ClassDef(BTaggingWithTruth, 1)
};

#endif
