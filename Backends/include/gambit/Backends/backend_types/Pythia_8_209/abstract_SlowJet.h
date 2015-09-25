#ifndef __abstract_SlowJet_Pythia_8_209_h__
#define __abstract_SlowJet_Pythia_8_209_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include <vector>
#include "wrapper_Event_decl.h"
#include "wrapper_Vec4_decl.h"
#include <ostream>
#include <cstddef>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::SlowJet*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_SlowJet : virtual public AbstractBase
        {
            private:
                // IGNORED: Variable  -- Name: TIMESTOPRINT  -- XML id: _25150
                // IGNORED: Variable  -- Name: PIMASS  -- XML id: _25151
                // IGNORED: Variable  -- Name: TINY  -- XML id: _25152
                // IGNORED: Field  -- Name: power  -- XML id: _25153
                // IGNORED: Field  -- Name: R  -- XML id: _25154
                // IGNORED: Field  -- Name: pTjetMin  -- XML id: _25155
                // IGNORED: Field  -- Name: etaMax  -- XML id: _25156
                // IGNORED: Field  -- Name: R2  -- XML id: _25157
                // IGNORED: Field  -- Name: pT2jetMin  -- XML id: _25158
                // IGNORED: Field  -- Name: select  -- XML id: _25159
                // IGNORED: Field  -- Name: massSet  -- XML id: _25160
                // IGNORED: Field  -- Name: sjHookPtr  -- XML id: _25161
                // IGNORED: Field  -- Name: useFJcore  -- XML id: _25162
                // IGNORED: Field  -- Name: useStandardR  -- XML id: _25163
                // IGNORED: Field  -- Name: isAnti  -- XML id: _25164
                // IGNORED: Field  -- Name: isKT  -- XML id: _25165
                // IGNORED: Field  -- Name: cutInEta  -- XML id: _25166
                // IGNORED: Field  -- Name: chargedOnly  -- XML id: _25167
                // IGNORED: Field  -- Name: visibleOnly  -- XML id: _25168
                // IGNORED: Field  -- Name: modifyMass  -- XML id: _25169
                // IGNORED: Field  -- Name: noHook  -- XML id: _25170
                // IGNORED: Field  -- Name: clusters  -- XML id: _25171
                // IGNORED: Field  -- Name: jets  -- XML id: _25172
                // IGNORED: Field  -- Name: diB  -- XML id: _25173
                // IGNORED: Field  -- Name: dij  -- XML id: _25174
                // IGNORED: Field  -- Name: origSize  -- XML id: _25175
                // IGNORED: Field  -- Name: clSize  -- XML id: _25176
                // IGNORED: Field  -- Name: clLast  -- XML id: _25177
                // IGNORED: Field  -- Name: jtSize  -- XML id: _25178
                // IGNORED: Field  -- Name: iMin  -- XML id: _25179
                // IGNORED: Field  -- Name: jMin  -- XML id: _25180
                // IGNORED: Field  -- Name: dPhi  -- XML id: _25181
                // IGNORED: Field  -- Name: dijTemp  -- XML id: _25182
                // IGNORED: Field  -- Name: dMin  -- XML id: _25183
            public:
    
                virtual bool analyze__BOSS(const Pythia8::Abstract_Event&) =0;
    
                virtual bool setup__BOSS(const Pythia8::Abstract_Event&) =0;
    
                virtual bool doStep() =0;
    
                virtual bool doNSteps(int) =0;
    
                virtual bool stopAtN(int) =0;
    
                virtual int sizeOrig() const =0;
    
                virtual int sizeJet() const =0;
    
                virtual int sizeAll() const =0;
    
                virtual double pT(int) const =0;
    
                virtual double y(int) const =0;
    
                virtual double phi(int) const =0;
    
                virtual Pythia8::Abstract_Vec4* p__BOSS(int) const =0;
    
                virtual double m(int) const =0;
    
                virtual int multiplicity(int) const =0;
    
                virtual int iNext() const =0;
    
                virtual int jNext() const =0;
    
                virtual double dNext() const =0;
    
                virtual void list(bool, std::basic_ostream<char,std::char_traits<char> >&) const =0;
    
                virtual void list__BOSS(bool) const =0;
    
                virtual void list__BOSS() const =0;
    
                virtual std::vector<int,std::allocator<int> > constituents(int) =0;
    
                virtual std::vector<int,std::allocator<int> > clusConstituents(int) =0;
    
                virtual int jetAssignment(int) =0;
    
                virtual void removeJet(int) =0;
            private:
    
                virtual void findNext() =0;
    
                virtual bool clusterFJ() =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_SlowJet*) =0;
                virtual Abstract_SlowJet* pointerCopy__BOSS() =0;
    
            private:
                mutable SlowJet* wptr;
    
            public:
                Abstract_SlowJet()
                {
                }
    
                void wrapper__BOSS(SlowJet* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                    can_delete_wrapper(true);
                }
    
                SlowJet* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_SlowJet()
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


#endif /* __abstract_SlowJet_Pythia_8_209_h__ */
