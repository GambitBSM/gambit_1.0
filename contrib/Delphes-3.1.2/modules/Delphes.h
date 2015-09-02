#ifndef Delphes_h
#define Delphes_h

/** \class Delphes
 *
 *  Main Delphes module.
 *  Controls execution of all other modules.
 *
 *  $Date: 2012-11-18 13:59:48 +0100 (Sun, 18 Nov 2012) $
 *  $Revision: 813 $
 *
 *
 *  \author P. Demin - UCL, Louvain-la-Neuve
 *
 */

#include "classes/DelphesModule.h"

class TFolder;
class TObjArray;

class ExRootTreeWriter;

class DelphesFactory;

class Delphes: public DelphesModule
{
public:

  Delphes(const char *name = "Delphes");
  ~Delphes();

  void SetTreeWriter(ExRootTreeWriter *treeWriter);
  
  DelphesFactory *GetFactory() const { return fFactory; }

  void Clear();

  virtual void Init();
  virtual void Process();
  virtual void Finish();

private:

  DelphesFactory *fFactory;

  ClassDef(Delphes, 1)
};

#endif /* Delphes_h */

