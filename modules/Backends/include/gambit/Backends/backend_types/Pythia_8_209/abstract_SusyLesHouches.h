#ifndef __abstract_SusyLesHouches_Pythia_8_209_h__
#define __abstract_SusyLesHouches_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include <string>
#include <map>
#include <vector>
#include <istream>
#include <cstddef>

#ifndef ENUMS_DECLARED
#define ENUMS_DECLARED
#include "enum_decl_copies.h"
#endif

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
                // IGNORED: Field  -- Name: modsel  -- XML id: _27424
                // IGNORED: Field  -- Name: modsel21  -- XML id: _27425
                // IGNORED: Field  -- Name: modsel12  -- XML id: _27426
                // IGNORED: Field  -- Name: minpar  -- XML id: _27427
                // IGNORED: Field  -- Name: extpar  -- XML id: _27428
                // IGNORED: Field  -- Name: sminputs  -- XML id: _27429
                // IGNORED: Field  -- Name: spinfo  -- XML id: _27430
                // IGNORED: Field  -- Name: spinfo3  -- XML id: _27431
                // IGNORED: Field  -- Name: spinfo4  -- XML id: _27432
                // IGNORED: Field  -- Name: dcinfo  -- XML id: _27433
                // IGNORED: Field  -- Name: dcinfo3  -- XML id: _27434
                // IGNORED: Field  -- Name: dcinfo4  -- XML id: _27435
                // IGNORED: Field  -- Name: mass  -- XML id: _27436
                // IGNORED: Field  -- Name: nmix  -- XML id: _27437
                // IGNORED: Field  -- Name: umix  -- XML id: _27438
                // IGNORED: Field  -- Name: vmix  -- XML id: _27439
                // IGNORED: Field  -- Name: stopmix  -- XML id: _27440
                // IGNORED: Field  -- Name: sbotmix  -- XML id: _27441
                // IGNORED: Field  -- Name: staumix  -- XML id: _27442
                // IGNORED: Field  -- Name: alpha  -- XML id: _27443
                // IGNORED: Field  -- Name: hmix  -- XML id: _27444
                // IGNORED: Field  -- Name: gauge  -- XML id: _27445
                // IGNORED: Field  -- Name: msoft  -- XML id: _27446
                // IGNORED: Field  -- Name: au  -- XML id: _27447
                // IGNORED: Field  -- Name: ad  -- XML id: _27448
                // IGNORED: Field  -- Name: ae  -- XML id: _27449
                // IGNORED: Field  -- Name: yu  -- XML id: _27450
                // IGNORED: Field  -- Name: yd  -- XML id: _27451
                // IGNORED: Field  -- Name: ye  -- XML id: _27452
                // IGNORED: Field  -- Name: decays  -- XML id: _27453
    
                virtual std::map<int,int,std::less<int>,std::allocator<std::pair<const int, int> > >& decayIndices_ref__BOSS() =0;
                // IGNORED: Field  -- Name: qnumbers  -- XML id: _27455
    
                virtual std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >& qnumbersName_ref__BOSS() =0;
    
                virtual std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >& qnumbersAntiName_ref__BOSS() =0;
                // IGNORED: Field  -- Name: qextpar  -- XML id: _27458
                // IGNORED: Field  -- Name: vckmin  -- XML id: _27459
                // IGNORED: Field  -- Name: upmnsin  -- XML id: _27460
                // IGNORED: Field  -- Name: msq2in  -- XML id: _27461
                // IGNORED: Field  -- Name: msu2in  -- XML id: _27462
                // IGNORED: Field  -- Name: msd2in  -- XML id: _27463
                // IGNORED: Field  -- Name: msl2in  -- XML id: _27464
                // IGNORED: Field  -- Name: mse2in  -- XML id: _27465
                // IGNORED: Field  -- Name: tuin  -- XML id: _27466
                // IGNORED: Field  -- Name: tdin  -- XML id: _27467
                // IGNORED: Field  -- Name: tein  -- XML id: _27468
                // IGNORED: Field  -- Name: vckm  -- XML id: _27469
                // IGNORED: Field  -- Name: upmns  -- XML id: _27470
                // IGNORED: Field  -- Name: msq2  -- XML id: _27471
                // IGNORED: Field  -- Name: msu2  -- XML id: _27472
                // IGNORED: Field  -- Name: msd2  -- XML id: _27473
                // IGNORED: Field  -- Name: msl2  -- XML id: _27474
                // IGNORED: Field  -- Name: mse2  -- XML id: _27475
                // IGNORED: Field  -- Name: tu  -- XML id: _27476
                // IGNORED: Field  -- Name: td  -- XML id: _27477
                // IGNORED: Field  -- Name: te  -- XML id: _27478
                // IGNORED: Field  -- Name: usqmix  -- XML id: _27479
                // IGNORED: Field  -- Name: dsqmix  -- XML id: _27480
                // IGNORED: Field  -- Name: selmix  -- XML id: _27481
                // IGNORED: Field  -- Name: snumix  -- XML id: _27482
                // IGNORED: Field  -- Name: snsmix  -- XML id: _27483
                // IGNORED: Field  -- Name: snamix  -- XML id: _27484
                // IGNORED: Field  -- Name: rvlamllein  -- XML id: _27485
                // IGNORED: Field  -- Name: rvlamlqdin  -- XML id: _27486
                // IGNORED: Field  -- Name: rvlamuddin  -- XML id: _27487
                // IGNORED: Field  -- Name: rvtllein  -- XML id: _27488
                // IGNORED: Field  -- Name: rvtlqdin  -- XML id: _27489
                // IGNORED: Field  -- Name: rvtuddin  -- XML id: _27490
                // IGNORED: Field  -- Name: rvkappain  -- XML id: _27491
                // IGNORED: Field  -- Name: rvdin  -- XML id: _27492
                // IGNORED: Field  -- Name: rvm2lh1in  -- XML id: _27493
                // IGNORED: Field  -- Name: rvsnvevin  -- XML id: _27494
                // IGNORED: Field  -- Name: rvlamlle  -- XML id: _27495
                // IGNORED: Field  -- Name: rvlamlqd  -- XML id: _27496
                // IGNORED: Field  -- Name: rvlamudd  -- XML id: _27497
                // IGNORED: Field  -- Name: rvtlle  -- XML id: _27498
                // IGNORED: Field  -- Name: rvtlqd  -- XML id: _27499
                // IGNORED: Field  -- Name: rvtudd  -- XML id: _27500
                // IGNORED: Field  -- Name: rvkappa  -- XML id: _27501
                // IGNORED: Field  -- Name: rvd  -- XML id: _27502
                // IGNORED: Field  -- Name: rvm2lh1  -- XML id: _27503
                // IGNORED: Field  -- Name: rvsnvev  -- XML id: _27504
                // IGNORED: Field  -- Name: rvnmix  -- XML id: _27505
                // IGNORED: Field  -- Name: rvumix  -- XML id: _27506
                // IGNORED: Field  -- Name: rvvmix  -- XML id: _27507
                // IGNORED: Field  -- Name: rvhmix  -- XML id: _27508
                // IGNORED: Field  -- Name: rvamix  -- XML id: _27509
                // IGNORED: Field  -- Name: rvlmix  -- XML id: _27510
                // IGNORED: Field  -- Name: imminpar  -- XML id: _27511
                // IGNORED: Field  -- Name: imextpar  -- XML id: _27512
                // IGNORED: Field  -- Name: cvhmix  -- XML id: _27513
                // IGNORED: Field  -- Name: imcvhmix  -- XML id: _27514
                // IGNORED: Field  -- Name: imau  -- XML id: _27515
                // IGNORED: Field  -- Name: imad  -- XML id: _27516
                // IGNORED: Field  -- Name: imae  -- XML id: _27517
                // IGNORED: Field  -- Name: imhmix  -- XML id: _27518
                // IGNORED: Field  -- Name: immsoft  -- XML id: _27519
                // IGNORED: Field  -- Name: immsq2in  -- XML id: _27520
                // IGNORED: Field  -- Name: immsu2in  -- XML id: _27521
                // IGNORED: Field  -- Name: immsd2in  -- XML id: _27522
                // IGNORED: Field  -- Name: immsl2in  -- XML id: _27523
                // IGNORED: Field  -- Name: immse2in  -- XML id: _27524
                // IGNORED: Field  -- Name: imtuin  -- XML id: _27525
                // IGNORED: Field  -- Name: imtdin  -- XML id: _27526
                // IGNORED: Field  -- Name: imtein  -- XML id: _27527
                // IGNORED: Field  -- Name: imvckm  -- XML id: _27528
                // IGNORED: Field  -- Name: imupmns  -- XML id: _27529
                // IGNORED: Field  -- Name: immsq2  -- XML id: _27530
                // IGNORED: Field  -- Name: immsu2  -- XML id: _27531
                // IGNORED: Field  -- Name: immsd2  -- XML id: _27532
                // IGNORED: Field  -- Name: immsl2  -- XML id: _27533
                // IGNORED: Field  -- Name: immse2  -- XML id: _27534
                // IGNORED: Field  -- Name: imtu  -- XML id: _27535
                // IGNORED: Field  -- Name: imtd  -- XML id: _27536
                // IGNORED: Field  -- Name: imte  -- XML id: _27537
                // IGNORED: Field  -- Name: imusqmix  -- XML id: _27538
                // IGNORED: Field  -- Name: imdsqmix  -- XML id: _27539
                // IGNORED: Field  -- Name: imselmix  -- XML id: _27540
                // IGNORED: Field  -- Name: imsnumix  -- XML id: _27541
                // IGNORED: Field  -- Name: imnmix  -- XML id: _27542
                // IGNORED: Field  -- Name: imumix  -- XML id: _27543
                // IGNORED: Field  -- Name: imvmix  -- XML id: _27544
                // IGNORED: Field  -- Name: nmssmrun  -- XML id: _27545
                // IGNORED: Field  -- Name: nmhmix  -- XML id: _27546
                // IGNORED: Field  -- Name: nmamix  -- XML id: _27547
                // IGNORED: Field  -- Name: nmnmix  -- XML id: _27548
                // IGNORED: Field  -- Name: imnmnmix  -- XML id: _27549
                // IGNORED: Field  -- Name: genericBlocks  -- XML id: _27550
            private:
                // IGNORED: Field  -- Name: verboseSav  -- XML id: _27551
                // IGNORED: Field  -- Name: headerPrinted  -- XML id: _27552
                // IGNORED: Field  -- Name: footerPrinted  -- XML id: _27553
                // IGNORED: Field  -- Name: filePrinted  -- XML id: _27554
                // IGNORED: Field  -- Name: slhaRead  -- XML id: _27555
                // IGNORED: Field  -- Name: lhefRead  -- XML id: _27556
                // IGNORED: Field  -- Name: lhefSlha  -- XML id: _27557
                // IGNORED: Field  -- Name: useDecay  -- XML id: _27558
            public:
    
                virtual int readFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int, bool) =0;
    
                virtual int readFile__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >, int) =0;
    
                virtual int readFile__BOSS(std::basic_string<char,std::char_traits<char>,std::allocator<char> >) =0;
    
                virtual int readFile__BOSS() =0;
    
                virtual int readFile(std::basic_istream<char,std::char_traits<char> >&, int, bool) =0;
    
                virtual int readFile__BOSS(std::basic_istream<char,std::char_traits<char> >&, int) =0;
    
                virtual int readFile__BOSS(std::basic_istream<char,std::char_traits<char> >&) =0;
    
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
