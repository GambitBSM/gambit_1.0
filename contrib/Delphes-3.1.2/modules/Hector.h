#ifndef Hector_h
#define Hector_h

/** \class Hector
 *
 *  Propagates candidates using Hector library.
 *
 *  $Date: 2014-04-08 18:43:52 +0200 (Tue, 08 Apr 2014) $
 *  $Revision: 1361 $
 *
 *
 *  \author P. Demin - UCL, Louvain-la-Neuve
 *
 */

#include "classes/DelphesModule.h"

class TIterator;
class TObjArray;
class H_BeamLine;

class Hector: public DelphesModule
{
public:

  Hector();
  ~Hector();

  void Init();
  void Process();
  void Finish();

private:

  Int_t fDirection;

  Double_t fBeamLineLength, fDistance;
  Double_t fOffsetX, fOffsetS;
  Double_t fSigmaE, fSigmaX, fSigmaY, fSigmaT;
  Double_t fEtaMin;

  H_BeamLine *fBeamLine;

  TIterator *fItInputArray; //!

  const TObjArray *fInputArray; //!

  TObjArray *fOutputArray; //!

  ClassDef(Hector, 1)
};

#endif
