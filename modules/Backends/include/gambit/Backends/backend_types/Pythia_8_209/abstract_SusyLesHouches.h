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
                // IGNORED: Field  -- Name: modsel  -- XML id: _25657
                // IGNORED: Field  -- Name: modsel21  -- XML id: _25658
                // IGNORED: Field  -- Name: modsel12  -- XML id: _25659
                // IGNORED: Field  -- Name: minpar  -- XML id: _25660
                // IGNORED: Field  -- Name: extpar  -- XML id: _25661
                // IGNORED: Field  -- Name: sminputs  -- XML id: _25662
                // IGNORED: Field  -- Name: spinfo  -- XML id: _25663
                // IGNORED: Field  -- Name: spinfo3  -- XML id: _25664
                // IGNORED: Field  -- Name: spinfo4  -- XML id: _25665
                // IGNORED: Field  -- Name: dcinfo  -- XML id: _25666
                // IGNORED: Field  -- Name: dcinfo3  -- XML id: _25667
                // IGNORED: Field  -- Name: dcinfo4  -- XML id: _25668
                // IGNORED: Field  -- Name: mass  -- XML id: _25669
                // IGNORED: Field  -- Name: nmix  -- XML id: _25670
                // IGNORED: Field  -- Name: umix  -- XML id: _25671
                // IGNORED: Field  -- Name: vmix  -- XML id: _25672
                // IGNORED: Field  -- Name: stopmix  -- XML id: _25673
                // IGNORED: Field  -- Name: sbotmix  -- XML id: _25674
                // IGNORED: Field  -- Name: staumix  -- XML id: _25675
                // IGNORED: Field  -- Name: alpha  -- XML id: _25676
                // IGNORED: Field  -- Name: hmix  -- XML id: _25677
                // IGNORED: Field  -- Name: gauge  -- XML id: _25678
                // IGNORED: Field  -- Name: msoft  -- XML id: _25679
                // IGNORED: Field  -- Name: au  -- XML id: _25680
                // IGNORED: Field  -- Name: ad  -- XML id: _25681
                // IGNORED: Field  -- Name: ae  -- XML id: _25682
                // IGNORED: Field  -- Name: yu  -- XML id: _25683
                // IGNORED: Field  -- Name: yd  -- XML id: _25684
                // IGNORED: Field  -- Name: ye  -- XML id: _25685
                // IGNORED: Field  -- Name: decays  -- XML id: _25686
    
                virtual std::map<int,int,std::less<int>,std::allocator<std::pair<const int, int> > >& decayIndices_ref__BOSS() =0;
                // IGNORED: Field  -- Name: qnumbers  -- XML id: _25688
    
                virtual std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >& qnumbersName_ref__BOSS() =0;
    
                virtual std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >& qnumbersAntiName_ref__BOSS() =0;
                // IGNORED: Field  -- Name: qextpar  -- XML id: _25691
                // IGNORED: Field  -- Name: vckmin  -- XML id: _25692
                // IGNORED: Field  -- Name: upmnsin  -- XML id: _25693
                // IGNORED: Field  -- Name: msq2in  -- XML id: _25694
                // IGNORED: Field  -- Name: msu2in  -- XML id: _25695
                // IGNORED: Field  -- Name: msd2in  -- XML id: _25696
                // IGNORED: Field  -- Name: msl2in  -- XML id: _25697
                // IGNORED: Field  -- Name: mse2in  -- XML id: _25698
                // IGNORED: Field  -- Name: tuin  -- XML id: _25699
                // IGNORED: Field  -- Name: tdin  -- XML id: _25700
                // IGNORED: Field  -- Name: tein  -- XML id: _25701
                // IGNORED: Field  -- Name: vckm  -- XML id: _25702
                // IGNORED: Field  -- Name: upmns  -- XML id: _25703
                // IGNORED: Field  -- Name: msq2  -- XML id: _25704
                // IGNORED: Field  -- Name: msu2  -- XML id: _25705
                // IGNORED: Field  -- Name: msd2  -- XML id: _25706
                // IGNORED: Field  -- Name: msl2  -- XML id: _25707
                // IGNORED: Field  -- Name: mse2  -- XML id: _25708
                // IGNORED: Field  -- Name: tu  -- XML id: _25709
                // IGNORED: Field  -- Name: td  -- XML id: _25710
                // IGNORED: Field  -- Name: te  -- XML id: _25711
                // IGNORED: Field  -- Name: usqmix  -- XML id: _25712
                // IGNORED: Field  -- Name: dsqmix  -- XML id: _25713
                // IGNORED: Field  -- Name: selmix  -- XML id: _25714
                // IGNORED: Field  -- Name: snumix  -- XML id: _25715
                // IGNORED: Field  -- Name: snsmix  -- XML id: _25716
                // IGNORED: Field  -- Name: snamix  -- XML id: _25717
                // IGNORED: Field  -- Name: rvlamllein  -- XML id: _25718
                // IGNORED: Field  -- Name: rvlamlqdin  -- XML id: _25719
                // IGNORED: Field  -- Name: rvlamuddin  -- XML id: _25720
                // IGNORED: Field  -- Name: rvtllein  -- XML id: _25721
                // IGNORED: Field  -- Name: rvtlqdin  -- XML id: _25722
                // IGNORED: Field  -- Name: rvtuddin  -- XML id: _25723
                // IGNORED: Field  -- Name: rvkappain  -- XML id: _25724
                // IGNORED: Field  -- Name: rvdin  -- XML id: _25725
                // IGNORED: Field  -- Name: rvm2lh1in  -- XML id: _25726
                // IGNORED: Field  -- Name: rvsnvevin  -- XML id: _25727
                // IGNORED: Field  -- Name: rvlamlle  -- XML id: _25728
                // IGNORED: Field  -- Name: rvlamlqd  -- XML id: _25729
                // IGNORED: Field  -- Name: rvlamudd  -- XML id: _25730
                // IGNORED: Field  -- Name: rvtlle  -- XML id: _25731
                // IGNORED: Field  -- Name: rvtlqd  -- XML id: _25732
                // IGNORED: Field  -- Name: rvtudd  -- XML id: _25733
                // IGNORED: Field  -- Name: rvkappa  -- XML id: _25734
                // IGNORED: Field  -- Name: rvd  -- XML id: _25735
                // IGNORED: Field  -- Name: rvm2lh1  -- XML id: _25736
                // IGNORED: Field  -- Name: rvsnvev  -- XML id: _25737
                // IGNORED: Field  -- Name: rvnmix  -- XML id: _25738
                // IGNORED: Field  -- Name: rvumix  -- XML id: _25739
                // IGNORED: Field  -- Name: rvvmix  -- XML id: _25740
                // IGNORED: Field  -- Name: rvhmix  -- XML id: _25741
                // IGNORED: Field  -- Name: rvamix  -- XML id: _25742
                // IGNORED: Field  -- Name: rvlmix  -- XML id: _25743
                // IGNORED: Field  -- Name: imminpar  -- XML id: _25744
                // IGNORED: Field  -- Name: imextpar  -- XML id: _25745
                // IGNORED: Field  -- Name: cvhmix  -- XML id: _25746
                // IGNORED: Field  -- Name: imcvhmix  -- XML id: _25747
                // IGNORED: Field  -- Name: imau  -- XML id: _25748
                // IGNORED: Field  -- Name: imad  -- XML id: _25749
                // IGNORED: Field  -- Name: imae  -- XML id: _25750
                // IGNORED: Field  -- Name: imhmix  -- XML id: _25751
                // IGNORED: Field  -- Name: immsoft  -- XML id: _25752
                // IGNORED: Field  -- Name: immsq2in  -- XML id: _25753
                // IGNORED: Field  -- Name: immsu2in  -- XML id: _25754
                // IGNORED: Field  -- Name: immsd2in  -- XML id: _25755
                // IGNORED: Field  -- Name: immsl2in  -- XML id: _25756
                // IGNORED: Field  -- Name: immse2in  -- XML id: _25757
                // IGNORED: Field  -- Name: imtuin  -- XML id: _25758
                // IGNORED: Field  -- Name: imtdin  -- XML id: _25759
                // IGNORED: Field  -- Name: imtein  -- XML id: _25760
                // IGNORED: Field  -- Name: imvckm  -- XML id: _25761
                // IGNORED: Field  -- Name: imupmns  -- XML id: _25762
                // IGNORED: Field  -- Name: immsq2  -- XML id: _25763
                // IGNORED: Field  -- Name: immsu2  -- XML id: _25764
                // IGNORED: Field  -- Name: immsd2  -- XML id: _25765
                // IGNORED: Field  -- Name: immsl2  -- XML id: _25766
                // IGNORED: Field  -- Name: immse2  -- XML id: _25767
                // IGNORED: Field  -- Name: imtu  -- XML id: _25768
                // IGNORED: Field  -- Name: imtd  -- XML id: _25769
                // IGNORED: Field  -- Name: imte  -- XML id: _25770
                // IGNORED: Field  -- Name: imusqmix  -- XML id: _25771
                // IGNORED: Field  -- Name: imdsqmix  -- XML id: _25772
                // IGNORED: Field  -- Name: imselmix  -- XML id: _25773
                // IGNORED: Field  -- Name: imsnumix  -- XML id: _25774
                // IGNORED: Field  -- Name: imnmix  -- XML id: _25775
                // IGNORED: Field  -- Name: imumix  -- XML id: _25776
                // IGNORED: Field  -- Name: imvmix  -- XML id: _25777
                // IGNORED: Field  -- Name: nmssmrun  -- XML id: _25778
                // IGNORED: Field  -- Name: nmhmix  -- XML id: _25779
                // IGNORED: Field  -- Name: nmamix  -- XML id: _25780
                // IGNORED: Field  -- Name: nmnmix  -- XML id: _25781
                // IGNORED: Field  -- Name: imnmnmix  -- XML id: _25782
                // IGNORED: Field  -- Name: genericBlocks  -- XML id: _25783
            private:
                // IGNORED: Field  -- Name: verboseSav  -- XML id: _25784
                // IGNORED: Field  -- Name: headerPrinted  -- XML id: _25785
                // IGNORED: Field  -- Name: footerPrinted  -- XML id: _25786
                // IGNORED: Field  -- Name: filePrinted  -- XML id: _25787
                // IGNORED: Field  -- Name: slhaRead  -- XML id: _25788
                // IGNORED: Field  -- Name: lhefRead  -- XML id: _25789
                // IGNORED: Field  -- Name: lhefSlha  -- XML id: _25790
                // IGNORED: Field  -- Name: useDecay  -- XML id: _25791
                // IGNORED: Field  -- Name: slhaeaCollPtr  -- XML id: _25792
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
