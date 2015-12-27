#ifndef ExampleModule_h
#define ExampleModule_h

/** \class ExampleModule
 *
 *  Selects candidates from the InputArray according to the efficiency formula.
 *
 *  $Date: 2012-11-18 15:57:08 +0100 (Sun, 18 Nov 2012) $
 *  $Revision: 814 $
 *
 *
 *  \author P. Demin - UCL, Louvain-la-Neuve
 *
 */

#include "classes/DelphesModule.h"

#include <deque>

class TObjArray;
class DelphesFormula;

class ExampleModule: public DelphesModule
{
public:

  ExampleModule();
  ~ExampleModule();

  void Init();
  void Process();
  void Finish();

private:

  Int_t fIntParam;
  Double_t fDoubleParam;
  
  std::deque <Double_t> fArrayParam;
  
  DelphesFormula *fFormula; //!

  TIterator *fItInputArray; //!

  const TObjArray *fInputArray; //!

  TObjArray *fOutputArray; //!

  ClassDef(ExampleModule, 1)
};

#endif
