#ifndef DelphesPileUpWriter_h
#define DelphesPileUpWriter_h

/** \class DelphesPileUpWriter
 *
 *  Writes pile-up binary file
 *
 *
 *  $Date: 2013-03-10 01:53:09 +0100 (Sun, 10 Mar 2013) $
 *  $Revision: 1054 $
 *
 *
 *  \author P. Demin - UCL, Louvain-la-Neuve
 *
 */

#include <stdio.h>
#include <rpc/types.h>
#include <rpc/xdr.h>

class DelphesPileUpWriter
{
public:

  DelphesPileUpWriter(const char *fileName);

  ~DelphesPileUpWriter();

  void WriteParticle(int pid,
    float x, float y, float z, float t,
    float px, float py, float pz, float e);

  void WriteEntry();

  void WriteIndex();

private:

  quad_t fEntries;
  int fEntrySize;
  quad_t fOffset;

  FILE *fPileUpFile;
  char *fIndex;
  char *fBuffer;

  XDR *fOutputXDR;
  XDR *fIndexXDR;
  XDR *fBufferXDR;
};

#endif // DelphesPileUpWriter_h


