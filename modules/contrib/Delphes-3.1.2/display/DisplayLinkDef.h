
/** ExRootAnalysisLinkDef
 *
 *  Lists classes to be included in cint dicitonary
 *
 *  $Date: 2013-04-22 22:00:46 +0200 (Mon, 22 Apr 2013) $
 *  $Revision: 1097 $
 *
 *  
 *  \author P. Demin - UCL, Louvain-la-Neuve
 *
 */

#include "display/DelphesDisplay.h"
#include "display/DelphesCaloData.h"

#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ class DelphesDisplay+;
#pragma link C++ class DelphesCaloData+;

#endif

