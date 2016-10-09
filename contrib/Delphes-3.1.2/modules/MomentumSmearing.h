#ifndef MomentumSmearing_h
#define MomentumSmearing_h

/** \class MomentumSmearing
 *
 *  Performs transverse momentum resolution smearing.
 *
 *  $Date: 2013-02-12 14:57:44 +0100 (Tue, 12 Feb 2013) $
 *  $Revision: 905 $
 *
 *
 *  \author P. Demin - UCL, Louvain-la-Neuve
 *
 */

#include "classes/DelphesModule.h"

class TIterator;
class TObjArray;
class DelphesFormula;

class MomentumSmearing: public DelphesModule
{
public:

  MomentumSmearing();
  ~MomentumSmearing();

  void Init();
  void Process();
  void Finish();

private:

  DelphesFormula *fFormula; //!

  TIterator *fItInputArray; //!

  const TObjArray *fInputArray; //!
  
  TObjArray *fOutputArray; //!

  ClassDef(MomentumSmearing, 1)
};

#endif
