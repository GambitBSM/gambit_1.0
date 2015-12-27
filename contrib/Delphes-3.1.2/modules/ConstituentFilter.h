#ifndef ConstituentFilter_h
#define ConstituentFilter_h

/** \class ConstituentFilter
 *
 *  Drops all input objects that are not constituents of any jet.
 *
 *  $Date: 2013-04-05 10:19:17 +0200 (Fri, 05 Apr 2013) $
 *  $Revision: 1075 $
 *
 *
 *  \author P. Demin - UCL, Louvain-la-Neuve
 *
 */

#include "classes/DelphesModule.h"

#include <vector>
#include <map>

class TIterator;
class TObjArray;

class ConstituentFilter: public DelphesModule
{
public:

  ConstituentFilter();
  ~ConstituentFilter();

  void Init();
  void Process();
  void Finish();

private:

  Double_t fJetPTMin;

  std::vector< TIterator * > fInputList; //!

  std::map< TIterator *, TObjArray * > fInputMap; //!

  TObjArray *fOutputArray; //!

  ClassDef(ConstituentFilter, 1)
};

#endif
