#ifndef __ABSTRACT_EVENT_Pythia_8_186_H__
#define __ABSTRACT_EVENT_Pythia_8_186_H__

#include "abstractbase.hpp"
#include "forward_decls_abstract_classes.h"
#include "forward_decls_wrapper_classes.h"
#include <vector>
#include <string>
#include "abstract_Particle.h"
#include "abstract_Vec4.h"
#include <ostream>

#include "identification.hpp"

// Forward declaration needed by the destructor pattern.
void wrapper_deleter(CAT_3(BACKENDNAME,_,SAFE_VERSION)::Pythia8::Event*);


namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    
    namespace Pythia8
    {
        class Abstract_Event : virtual public AbstractBase
        {
            private:
                // IGNORED: Variable  -- Name: IPERLINE  -- XML id: _24568
                // IGNORED: Field  -- Name: startColTag  -- XML id: _24569
                // IGNORED: Field  -- Name: entry  -- XML id: _24570
                // IGNORED: Field  -- Name: junction  -- XML id: _24571
                // IGNORED: Field  -- Name: maxColTag  -- XML id: _24572
                // IGNORED: Field  -- Name: savedSize  -- XML id: _24573
                // IGNORED: Field  -- Name: savedJunctionSize  -- XML id: _24574
                // IGNORED: Field  -- Name: scaleSave  -- XML id: _24575
                // IGNORED: Field  -- Name: scaleSecondSave  -- XML id: _24576
                // IGNORED: Field  -- Name: headerList  -- XML id: _24577
                // IGNORED: Field  -- Name: particleDataPtr  -- XML id: _24578
            public:
    
                virtual Pythia8::Abstract_Event* operator_equal__BOSS(const Pythia8::Abstract_Event&) =0;
    
                virtual void clear() =0;
    
                virtual void reset() =0;
    
                virtual Pythia8::Abstract_Particle* operator_square_bracket_pair__BOSS(int) =0;
    
                virtual const Pythia8::Abstract_Particle* operator_square_bracket_pair__BOSS(int) const =0;
    
                virtual Pythia8::Abstract_Particle* front__BOSS() =0;
    
                virtual Pythia8::Abstract_Particle* at__BOSS(int) =0;
    
                virtual Pythia8::Abstract_Particle* back__BOSS() =0;
    
                virtual int size() const =0;
    
                virtual int append__BOSS(Pythia8::Abstract_Particle&) =0;
    
                virtual int append(int, int, int, int, int, int, int, int, double, double, double, double, double, double, double) =0;
    
                virtual int append__BOSS(int, int, int, int, int, int, int, int, double, double, double, double, double, double) =0;
    
                virtual int append__BOSS(int, int, int, int, int, int, int, int, double, double, double, double, double) =0;
    
                virtual int append__BOSS(int, int, int, int, int, int, int, int, double, double, double, double) =0;
    
                virtual int append__BOSS(int, int, int, int, int, int, int, int, Pythia8::Abstract_Vec4&, double, double, double) =0;
    
                virtual int append__BOSS(int, int, int, int, int, int, int, int, Pythia8::Abstract_Vec4&, double, double) =0;
    
                virtual int append__BOSS(int, int, int, int, int, int, int, int, Pythia8::Abstract_Vec4&, double) =0;
    
                virtual int append__BOSS(int, int, int, int, int, int, int, int, Pythia8::Abstract_Vec4&) =0;
    
                virtual int append(int, int, int, int, double, double, double, double, double, double, double) =0;
    
                virtual int append__BOSS(int, int, int, int, double, double, double, double, double, double) =0;
    
                virtual int append__BOSS(int, int, int, int, double, double, double, double, double) =0;
    
                virtual int append__BOSS(int, int, int, int, double, double, double, double) =0;
    
                virtual int append__BOSS(int, int, int, int, Pythia8::Abstract_Vec4&, double, double, double) =0;
    
                virtual int append__BOSS(int, int, int, int, Pythia8::Abstract_Vec4&, double, double) =0;
    
                virtual int append__BOSS(int, int, int, int, Pythia8::Abstract_Vec4&, double) =0;
    
                virtual int append__BOSS(int, int, int, int, Pythia8::Abstract_Vec4&) =0;
    
                virtual void setEvtPtr(int) =0;
    
                virtual void setEvtPtr__BOSS() =0;
    
                virtual int copy(int, int) =0;
    
                virtual int copy__BOSS(int) =0;
    
                virtual void list() const =0;
    
                virtual void list(std::ostream&) const =0;
    
                virtual void list(bool, bool) const =0;
    
                virtual void list__BOSS(bool) const =0;
    
                virtual void list(bool, bool, std::ostream&) const =0;
    
                virtual void popBack(int) =0;
    
                virtual void popBack__BOSS() =0;
    
                virtual void remove(int, int) =0;
    
                virtual bool undoDecay(int) =0;
    
                virtual void restorePtrs() =0;
    
                virtual void saveSize() =0;
    
                virtual void restoreSize() =0;
    
                virtual int savedSizeValue() =0;
    
                virtual void initColTag(int) =0;
    
                virtual void initColTag__BOSS() =0;
    
                virtual int lastColTag() const =0;
    
                virtual int nextColTag() =0;
    
                virtual void scale(double) =0;
    
                virtual double scale() const =0;
    
                virtual void scaleSecond(double) =0;
    
                virtual double scaleSecond() const =0;
    
                virtual std::vector<int, std::allocator<int> > motherList(int) const =0;
    
                virtual std::vector<int, std::allocator<int> > daughterList(int) const =0;
    
                virtual int statusHepMC(int) const =0;
    
                virtual int iTopCopy(int) const =0;
    
                virtual int iBotCopy(int) const =0;
    
                virtual int iTopCopyId(int) const =0;
    
                virtual int iBotCopyId(int) const =0;
    
                virtual std::vector<int, std::allocator<int> > sisterList(int) const =0;
    
                virtual std::vector<int, std::allocator<int> > sisterListTopBot(int, bool) const =0;
    
                virtual std::vector<int, std::allocator<int> > sisterListTopBot__BOSS(int) const =0;
    
                virtual bool isAncestor(int, int) const =0;
    
                virtual void rot(double, double) =0;
    
                virtual void bst(double, double, double) =0;
    
                virtual void bst(double, double, double, double) =0;
    
                virtual void bst__BOSS(const Pythia8::Abstract_Vec4&) =0;
    
                virtual void clearJunctions() =0;
    
                virtual int appendJunction(int, int, int, int) =0;
    
                virtual int sizeJunction() const =0;
    
                virtual bool remainsJunction(int) const =0;
    
                virtual void remainsJunction(int, bool) =0;
    
                virtual int kindJunction(int) const =0;
    
                virtual int colJunction(int, int) const =0;
    
                virtual void colJunction(int, int, int) =0;
    
                virtual int endColJunction(int, int) const =0;
    
                virtual void endColJunction(int, int, int) =0;
    
                virtual int statusJunction(int, int) const =0;
    
                virtual void statusJunction(int, int, int) =0;
    
                virtual void eraseJunction(int) =0;
    
                virtual void saveJunctionSize() =0;
    
                virtual void restoreJunctionSize() =0;
    
                virtual void listJunctions(std::ostream&) const =0;
    
                virtual void listJunctions__BOSS() const =0;
    
                virtual Pythia8::Abstract_Event* operator_plus_equal__BOSS(const Pythia8::Abstract_Event&) =0;
    
            public:
                virtual void pointerAssign__BOSS(Abstract_Event*) =0;
                virtual Abstract_Event* pointerCopy__BOSS() =0;
    
            private:
                Event* wptr;
    
            public:
                void wrapper__BOSS(Event* wptr_in)
                {
                    wptr = wptr_in;
                    is_wrapped(true);
                }
    
                Event* wrapper__BOSS()
                {
                    return wptr;
                }
    
                virtual ~Abstract_Event()
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


#include "backend_undefs.hpp"


#endif /* __ABSTRACT_EVENT_Pythia_8_186_H__ */
