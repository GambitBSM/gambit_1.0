#ifndef __abstract_SlowJet_Pythia_8_186_h__
#define __abstract_SlowJet_Pythia_8_186_h__

#include "gambit/Backends/abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include <vector>
#include "wrapper_Event_decl.h"
#include "wrapper_Vec4_decl.h"
#include <ostream>
#include <cstddef>

#ifndef ENUMS_DECLARED
#define ENUMS_DECLARED
#include "enum_decl_copies.h"
#endif

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
                // IGNORED: Variable  -- Name: TIMESTOPRINT  -- XML id: _21383
                // IGNORED: Variable  -- Name: PIMASS  -- XML id: _21384
                // IGNORED: Variable  -- Name: TINY  -- XML id: _21385
                // IGNORED: Field  -- Name: power  -- XML id: _21386
                // IGNORED: Field  -- Name: R  -- XML id: _21387
                // IGNORED: Field  -- Name: pTjetMin  -- XML id: _21388
                // IGNORED: Field  -- Name: etaMax  -- XML id: _21389
                // IGNORED: Field  -- Name: R2  -- XML id: _21390
                // IGNORED: Field  -- Name: pT2jetMin  -- XML id: _21391
                // IGNORED: Field  -- Name: select  -- XML id: _21392
                // IGNORED: Field  -- Name: massSet  -- XML id: _21393
                // IGNORED: Field  -- Name: sjHookPtr  -- XML id: _21394
                // IGNORED: Field  -- Name: useFJcore  -- XML id: _21395
                // IGNORED: Field  -- Name: useStandardR  -- XML id: _21396
                // IGNORED: Field  -- Name: isAnti  -- XML id: _21397
                // IGNORED: Field  -- Name: isKT  -- XML id: _21398
                // IGNORED: Field  -- Name: cutInEta  -- XML id: _21399
                // IGNORED: Field  -- Name: chargedOnly  -- XML id: _21400
                // IGNORED: Field  -- Name: visibleOnly  -- XML id: _21401
                // IGNORED: Field  -- Name: modifyMass  -- XML id: _21402
                // IGNORED: Field  -- Name: noHook  -- XML id: _21403
                // IGNORED: Field  -- Name: clusters  -- XML id: _21404
                // IGNORED: Field  -- Name: jets  -- XML id: _21405
                // IGNORED: Field  -- Name: diB  -- XML id: _21406
                // IGNORED: Field  -- Name: dij  -- XML id: _21407
                // IGNORED: Field  -- Name: origSize  -- XML id: _21408
                // IGNORED: Field  -- Name: clSize  -- XML id: _21409
                // IGNORED: Field  -- Name: clLast  -- XML id: _21410
                // IGNORED: Field  -- Name: jtSize  -- XML id: _21411
                // IGNORED: Field  -- Name: iMin  -- XML id: _21412
                // IGNORED: Field  -- Name: jMin  -- XML id: _21413
                // IGNORED: Field  -- Name: dPhi  -- XML id: _21414
                // IGNORED: Field  -- Name: dijTemp  -- XML id: _21415
                // IGNORED: Field  -- Name: dMin  -- XML id: _21416
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


#endif /* __abstract_SlowJet_Pythia_8_186_h__ */
