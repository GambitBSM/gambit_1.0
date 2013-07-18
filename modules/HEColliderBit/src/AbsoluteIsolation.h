#ifndef AbsoluteIsolation_h
#define AbsoluteIsolation_h

/** \class AbsoluteIsolation
 *
 *  Sums transverse momenta of isolation objects (tracks, calorimeter towers, etc)
 *  within a DeltaR cone around a candidate and calculates fraction of this sum
 *  to the candidate's transverse momentum. outputs candidates that have
 *  the transverse momenta fraction within (PTRatioMin, PTRatioMax].
 *
 *  $Date: 2013-03-06 17:53:27 +0100 (Wed, 06 Mar 2013) $
 *  $Revision: 1028 $
 *
 *
 *  \author P. Demin - UCL, Louvain-la-Neuve
 *
 */

#include "classes/DelphesModule.h"

class TObjArray;

class ExRootFilter;
class AbsoluteIsolationClassifier;

class AbsoluteIsolation: public DelphesModule
{
public:

  AbsoluteIsolation();
  ~AbsoluteIsolation();

  void Init();
  void Process();
  void Finish();

private:

  Double_t fDeltaRMax;

  Double_t fPTRatioMax;

  AbsoluteIsolationClassifier *fClassifier; //!

  ExRootFilter *fFilter;

  TIterator *fItIsolationInputArray; //!

  TIterator *fItCandidateInputArray; //!

  const TObjArray *fIsolationInputArray; //!

  const TObjArray *fCandidateInputArray; //!

  const TObjArray *fRhoInputArray; //!

  TObjArray *fOutputArray; //!

  ClassDef(AbsoluteIsolation, 1)
};

#ifdef __CINT__
#pragma link C++ class AbsoluteIsolation+;
#endif // __CINT__

#endif
