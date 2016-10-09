#ifndef EnergyScale_h
#define EnergyScale_h

/** \class EnergyScale
 *
 *  Applies energy scale.
 *
 *  $Date: 2013-11-21 11:38:22 +0100 (Thu, 21 Nov 2013) $
 *  $Revision: 1338 $
 *
 *
 *  \author P. Demin - UCL, Louvain-la-Neuve
 *
 */

#include "classes/DelphesModule.h"

class TIterator;
class TObjArray;
class DelphesFormula;

class EnergyScale: public DelphesModule
{
public:

  EnergyScale();
  ~EnergyScale();

  void Init();
  void Process();
  void Finish();

private:

  DelphesFormula *fFormula; //!

  TIterator *fItInputArray; //!

  const TObjArray *fInputArray; //!
  
  TObjArray *fOutputArray; //!

  ClassDef(EnergyScale, 1)
};

#endif
