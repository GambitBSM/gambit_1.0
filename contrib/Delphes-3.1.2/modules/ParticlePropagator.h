#ifndef ParticlePropagator_h
#define ParticlePropagator_h

/** \class ParticlePropagator
 *
 *  Propagates charged and neutral particles
 *  from a given vertex to a cylinder defined by its radius, 
 *  its half-length, centered at (0,0,0) and with its axis
 *  oriented along the z-axis.
 *
 *  $Date: 2013-02-12 14:57:44 +0100 (Tue, 12 Feb 2013) $
 *  $Revision: 905 $
 *
 *
 *  \author P. Demin - UCL, Louvain-la-Neuve
 *
 */

#include "classes/DelphesModule.h"

class TClonesArray;
class TIterator;

class ParticlePropagator: public DelphesModule
{
public:

  ParticlePropagator();
  ~ParticlePropagator();

  void Init();
  void Process();
  void Finish();

private:

  Double_t fRadius, fRadius2, fHalfLength;
  Double_t fBz;

  TIterator *fItInputArray; //!

  const TObjArray *fInputArray; //!

  TObjArray *fOutputArray; //!
  TObjArray *fChargedHadronOutputArray; //!
  TObjArray *fElectronOutputArray; //!
  TObjArray *fMuonOutputArray; //!

  ClassDef(ParticlePropagator, 1)
};

#endif
