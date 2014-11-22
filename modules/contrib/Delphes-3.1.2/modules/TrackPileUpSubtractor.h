#ifndef TrackPileUpSubtractor_h
#define TrackPileUpSubtractor_h

/** \class TrackPileUpSubtractor
 *
 *  Subtract pile-up contribution from tracks.
 *
 *  $Date: 2013-12-21 15:00:11 +0100 (Sat, 21 Dec 2013) $
 *  $Revision: 1345 $
 *
 *
 *  \author P. Demin - UCL, Louvain-la-Neuve
 *
 */

#include "classes/DelphesModule.h"

#include <map>

class TIterator;
class TObjArray;

class TrackPileUpSubtractor: public DelphesModule
{
public:

  TrackPileUpSubtractor();
  ~TrackPileUpSubtractor();

  void Init();
  void Process();
  void Finish();

private:

  Double_t fZVertexResolution;

  std::map< TIterator *, TObjArray * > fInputMap; //!

  ClassDef(TrackPileUpSubtractor, 1)

  TIterator *fItVertexInputArray; //!

  const TObjArray *fVertexInputArray; //!

};

#endif
