#ifndef __abstract_SusyLesHouches_Pythia_8_209_h__
#define __abstract_SusyLesHouches_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include <string>
#include <map>
#include <vector>
#include "SLHAea/slhaea.h"
#include <istream>
#include <cstddef>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::SusyLesHouches*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_SusyLesHouches : virtual public AbstractBase
        {
            public:
    
                virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> >& slhaFile_ref__BOSS() =0;
                // IGNORED: Field  -- Name: modsel  -- XML id: _25293
                // IGNORED: Field  -- Name: modsel21  -- XML id: _25294
                // IGNORED: Field  -- Name: modsel12  -- XML id: _25295
                // IGNORED: Field  -- Name: minpar  -- XML id: _25296
                // IGNORED: Field  -- Name: extpar  -- XML id: _25297
                // IGNORED: Field  -- Name: sminputs  -- XML id: _25298
                // IGNORED: Field  -- Name: spinfo  -- XML id: _25299
                // IGNORED: Field  -- Name: spinfo3  -- XML id: _25300
                // IGNORED: Field  -- Name: spinfo4  -- XML id: _25301
                // IGNORED: Field  -- Name: dcinfo  -- XML id: _25302
                // IGNORED: Field  -- Name: dcinfo3  -- XML id: _25303
                // IGNORED: Field  -- Name: dcinfo4  -- XML id: _25304
                // IGNORED: Field  -- Name: mass  -- XML id: _25305
                // IGNORED: Field  -- Name: nmix  -- XML id: _25306
                // IGNORED: Field  -- Name: umix  -- XML id: _25307
                // IGNORED: Field  -- Name: vmix  -- XML id: _25308
                // IGNORED: Field  -- Name: stopmix  -- XML id: _25309
                // IGNORED: Field  -- Name: sbotmix  -- XML id: _25310
                // IGNORED: Field  -- Name: staumix  -- XML id: _25311
                // IGNORED: Field  -- Name: alpha  -- XML id: _25312
                // IGNORED: Field  -- Name: hmix  -- XML id: _25313
                // IGNORED: Field  -- Name: gauge  -- XML id: _25314
                // IGNORED: Field  -- Name: msoft  -- XML id: _25315
                // IGNORED: Field  -- Name: au  -- XML id: _25316
                // IGNORED: Field  -- Name: ad  -- XML id: _25317
                // IGNORED: Field  -- Name: ae  -- XML id: _25318
                // IGNORED: Field  -- Name: yu  -- XML id: _25319
                // IGNORED: Field  -- Name: yd  -- XML id: _25320
                // IGNORED: Field  -- Name: ye  -- XML id: _25321
                // IGNORED: Field  -- Name: decays  -- XML id: _25322
    
                virtual std::map<int,int,std::less<int>,std::allocator<std::pair<const int, int> > >& decayIndices_ref__BOSS() =0;
                // IGNORED: Field  -- Name: qnumbers  -- XML id: _25324
    
                virtual std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >& qnumbersName_ref__BOSS() =0;
    
                virtual std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >& qnumbersAntiName_ref__BOSS() =0;
                // IGNORED: Field  -- Name: qextpar  -- XML id: _25327
                // IGNORED: Field  -- Name: vckmin  -- XML id: _25328
                // IGNORED: Field  -- Name: upmnsin  -- XML id: _25329
                // IGNORED: Field  -- Name: msq2in  -- XML id: _25330
                // IGNORED: Field  -- Name: msu2in  -- XML id: _25331
                // IGNORED: Field  -- Name: msd2in  -- XML id: _25332
                // IGNORED: Field  -- Name: msl2in  -- XML id: _25333
                // IGNORED: Field  -- Name: mse2in  -- XML id: _25334
                // IGNORED: Field  -- Name: tuin  -- XML id: _25335
                // IGNORED: Field  -- Name: tdin  -- XML id: _25336
                // IGNORED: Field  -- Name: tein  -- XML id: _25337
                // IGNORED: Field  -- Name: vckm  -- XML id: _25338
                // IGNORED: Field  -- Name: upmns  -- XML id: _25339
                // IGNORED: Field  -- Name: msq2  -- XML id: _25340
                // IGNORED: Field  -- Name: msu2  -- XML id: _25341
                // IGNORED: Field  -- Name: msd2  -- XML id: _25342
                // IGNORED: Field  -- Name: msl2  -- XML id: _25343
                // IGNORED: Field  -- Name: mse2  -- XML id: _25344
                // IGNORED: Field  -- Name: tu  -- XML id: _25345
                // IGNORED: Field  -- Name: td  -- XML id: _25346
                // IGNORED: Field  -- Name: te  -- XML id: _25347
                // IGNORED: Field  -- Name: usqmix  -- XML id: _25348
                // IGNORED: Field  -- Name: dsqmix  -- XML id: _25349
                // IGNORED: Field  -- Name: selmix  -- XML id: _25350
                // IGNORED: Field  -- Name: snumix  -- XML id: _25351
                // IGNORED: Field  -- Name: snsmix  -- XML id: _25352
                // IGNORED: Field  -- Name: snamix  -- XML id: _25353
                // IGNORED: Field  -- Name: rvlamllein  -- XML id: _25354
                // IGNORED: Field  -- Name: rvlamlqdin  -- XML id: _25355
                // IGNORED: Field  -- Name: rvlamuddin  -- XML id: _25356
                // IGNORED: Field  -- Name: rvtllein  -- XML id: _25357
                // IGNORED: Field  -- Name: rvtlqdin  -- XML id: _25358
                // IGNORED: Field  -- Name: rvtuddin  -- XML id: _25359
                // IGNORED: Field  -- Name: rvkappain  -- XML id: _25360
                // IGNORED: Field  -- Name: rvdin  -- XML id: _25361
                // IGNORED: Field  -- Name: rvm2lh1in  -- XML id: _25362
                // IGNORED: Field  -- Name: rvsnvevin  -- XML id: _25363
                // IGNORED: Field  -- Name: rvlamlle  -- XML id: _25364
                // IGNORED: Field  -- Name: rvlamlqd  -- XML id: _25365
                // IGNORED: Field  -- Name: rvlamudd  -- XML id: _25366
                // IGNORED: Field  -- Name: rvtlle  -- XML id: _25367
                // IGNORED: Field  -- Name: rvtlqd  -- XML id: _25368
                // IGNORED: Field  -- Name: rvtudd  -- XML id: _25369
                // IGNORED: Field  -- Name: rvkappa  -- XML id: _25370
                // IGNORED: Field  -- Name: rvd  -- XML id: _25371
                // IGNORED: Field  -- Name: rvm2lh1  -- XML id: _25372
                // IGNORED: Field  -- Name: rvsnvev  -- XML id: _25373
                // IGNORED: Field  -- Name: rvnmix  -- XML id: _25374
                // IGNORED: Field  -- Name: rvumix  -- XML id: _25375
                // IGNORED: Field  -- Name: rvvmix  -- XML id: _25376
                // IGNORED: Field  -- Name: rvhmix  -- XML id: _25377
                // IGNORED: Field  -- Name: rvamix  -- XML id: _25378
                // IGNORED: Field  -- Name: rvlmix  -- XML id: _25379
                // IGNORED: Field  -- Name: imminpar  -- XML id: _25380
                // IGNORED: Field  -- Name: imextpar  -- XML id: _25381
                // IGNORED: Field  -- Name: cvhmix  -- XML id: _25382
                // IGNORED: Field  -- Name: imcvhmix  -- XML id: _25383
                // IGNORED: Field  -- Name: imau  -- XML id: _25384
                // IGNORED: Field  -- Name: imad  -- XML id: _25385
                // IGNORED: Field  -- Name: imae  -- XML id: _25386
                // IGNORED: Field  -- Name: imhmix  -- XML id: _25387
                // IGNORED: Field  -- Name: immsoft  -- XML id: _25388
                // IGNORED: Field  -- Name: immsq2in  -- XML id: _25389
                // IGNORED: Field  -- Name: immsu2in  -- XML id: _25390
                // IGNORED: Field  -- Name: immsd2in  -- XML id: _25391
                // IGNORED: Field  -- Name: immsl2in  -- XML id: _25392
                // IGNORED: Field  -- Name: immse2in  -- XML id: _25393
                // IGNORED: Field  -- Name: imtuin  -- XML id: _25394
                // IGNORED: Field  -- Name: imtdin  -- XML id: _25395
                // IGNORED: Field  -- Name: imtein  -- XML id: _25396
                // IGNORED: Field  -- Name: imvckm  -- XML id: _25397
                // IGNORED: Field  -- Name: imupmns  -- XML id: _25398
                // IGNORED: Field  -- Name: immsq2  -- XML id: _25399
                // IGNORED: Field  -- Name: immsu2  -- XML id: _25400
                // IGNORED: Field  -- Name: immsd2  -- XML id: _25401
                // IGNORED: Field  -- Name: immsl2  -- XML id: _25402
                // IGNORED: Field  -- Name: immse2  -- XML id: _25403
                // IGNORED: Field  -- Name: imtu  -- XML id: _25404
                // IGNORED: Field  -- Name: imtd  -- XML id: _25405
                // IGNORED: Field  -- Name: imte  -- XML id: _25406
                // IGNORED: Field  -- Name: imusqmix  -- XML id: _25407
                // IGNORED: Field  -- Name: imdsqmix  -- XML id: _25408
                // IGNORED: Field  -- Name: imselmix  -- XML id: _25409
                // IGNORED: Field  -- Name: imsnumix  -- XML id: _25410
                // IGNORED: Field  -- Name: imnmix  -- XML id: _25411
                // IGNORED: Field  -- Name: imumix  -- XML id: _25412
                // IGNORED: Field  -- Name: imvmix  -- XML id: _25413
                // IGNORED: Field  -- Name: nmssmrun  -- XML id: _25414
                // IGNORED: Field  -- Name: nmhmix  -- XML id: _25415
                // IGNORED: Field  -- Name: nmamix  -- XML id: _25416
                // IGNORED: Field  -- Name: nmnmix  -- XML id: _25417
                // IGNORED: Field  -- Name: imnmnmix  -- XML id: _25418
                // IGNORED: Field  -- Name: genericBlocks  -- XML id: _25419
            private:
                // IGNORED: Field  -- Name: verboseSav  -- XML id: _25420
                // IGNORED: Field  -- Name: headerPrinted  -- XML id: _25421
                // IGNORED: Field  -- Name: footerPrinted  -- XML id: _25422
                // IGNORED: Field  -- Name: filePrinted  -- XML id: _25423
                // IGNORED: Field  -- Name: slhaRead  -- XML id: _25424
                // IGNORED: Field  -- Name: lhefRead  -- XML id: _25425
                // IGNORED: Field  -- Name: lhefSlha  -- XML id: _25426
                // IGNORED: Field  -- Name: useDecay  -- XML id: _25427
                // IGNORED: Field  -- Name: slhaeaCollPtr  -- XML id: _25428
            public:
    
                virtual int readFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, bool) =0;
    
                virtual int readFile__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int) =0;
    
                virtual int readFile__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual int readFile__BOSS() =0;
    
                virtual int readFile(std::basic_istream<char,std::char_traits<char> >&, int, bool) =0;
    
                virtual int readFile__BOSS(std::basic_istream<char,std::char_traits<char> >&, int) =0;
    
                virtual int readFile__BOSS(std::basic_istream<char,std::char_traits<char> >&) =0;
    
                virtual int readSLHAea(int, bool) =0;
    
                virtual int readSLHAea__BOSS(int) =0;
    
                virtual int readSLHAea__BOSS() =0;
    
                virtual void setSLHAea(const ::SLHAea::Coll*) =0;
    
                virtual void printHeader() =0;
    
                virtual void printFooter() =0;
    
                virtual void printSpectrum(int) =0;
    
                virtual void printSpectrum__BOSS() =0;
    
                virtual int checkSpectrum() =0;
    
                virtual int verbose() =0;
    
                virtual void verbose(int) =0;
    
                virtual void message(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int) =0;
    
                virtual void message__BOSS(int, std::basic_string<char,std::char_traits<char>,std::allocator<char> >, std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual void toLower(std::basic_string<char,std::char_traits<char>,std::allocator<char> >&) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_SusyLesHouches*) =0;
                virtual Abstract_SusyLesHouches* pointerCopy__BOSS() =0;
    
            private:
                mutable SusyLesHouches* wptr;
    
            public:
                Abstract_SusyLesHouches()
                {
                }
    
                void wrapper__BOSS(SusyLesHouches* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                SusyLesHouches* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_SusyLesHouches()
                {
                    if (can_delete_wrapper())
                    {
                        can_delete_me(false);
                        wrapper_deleter(wptr);
                    }
                }
        };
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"


#endif /* __abstract_SusyLesHouches_Pythia_8_209_h__ */
