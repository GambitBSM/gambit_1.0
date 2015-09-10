#ifndef Clone_h
#define Clone_h

/** \class Clone
 *
 *  Clone candidate array
 *
 *  $Date: 2013-04-26 12:42:11 +0200 (Fri, 26 Apr 2013) $
 *  $Revision: 1100 $
 *
 *  \author M. Selvaggi - UCL, Louvain-la-Neuve
 *
 */

#include "classes/DelphesModule.h"

#include <deque>

class TObjArray;
class DelphesFormula;

class Cloner: public DelphesModule
{
public:

  Cloner();
  ~Cloner();

  void Init();
  void Process();
  void Finish();

private:

  TIterator *fItInputArray; //!

  const TObjArray *fInputArray; //!
  TObjArray *fOutputArray; //!

  ClassDef(Cloner, 1)
};

#endif
