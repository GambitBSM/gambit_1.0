#ifndef __wrapper_Hist_def_Pythia_8_209_h__
#define __wrapper_Hist_def_Pythia_8_209_h__

#include <string>
#include <vector>
#include <ostream>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void Hist::book(std::basic_string<char,std::char_traits<char>,std::allocator<char> > titleIn, int nBinIn, double xMinIn, double xMaxIn)
        {
            wrapperbase::BEptr->book(titleIn, nBinIn, xMinIn, xMaxIn);
        }
        
        inline void Hist::book(std::basic_string<char,std::char_traits<char>,std::allocator<char> > titleIn, int nBinIn, double xMinIn)
        {
            wrapperbase::BEptr->book__BOSS(titleIn, nBinIn, xMinIn);
        }
        
        inline void Hist::book(std::basic_string<char,std::char_traits<char>,std::allocator<char> > titleIn, int nBinIn)
        {
            wrapperbase::BEptr->book__BOSS(titleIn, nBinIn);
        }
        
        inline void Hist::book(std::basic_string<char,std::char_traits<char>,std::allocator<char> > titleIn)
        {
            wrapperbase::BEptr->book__BOSS(titleIn);
        }
        
        inline void Hist::book()
        {
            wrapperbase::BEptr->book__BOSS();
        }
        
        inline void Hist::name(std::basic_string<char,std::char_traits<char>,std::allocator<char> > titleIn)
        {
            wrapperbase::BEptr->name(titleIn);
        }
        
        inline void Hist::name()
        {
            wrapperbase::BEptr->name__BOSS();
        }
        
        inline void Hist::null()
        {
            wrapperbase::BEptr->null();
        }
        
        inline void Hist::fill(double x, double w)
        {
            wrapperbase::BEptr->fill(x, w);
        }
        
        inline void Hist::fill(double x)
        {
            wrapperbase::BEptr->fill__BOSS(x);
        }
        
        inline void Hist::table(std::basic_ostream<char,std::char_traits<char> >& os, bool printOverUnder, bool xMidBin) const
        {
            wrapperbase::BEptr->table(os, printOverUnder, xMidBin);
        }
        
        inline void Hist::table(std::basic_ostream<char,std::char_traits<char> >& os, bool printOverUnder) const
        {
            wrapperbase::BEptr->table__BOSS(os, printOverUnder);
        }
        
        inline void Hist::table(std::basic_ostream<char,std::char_traits<char> >& os) const
        {
            wrapperbase::BEptr->table__BOSS(os);
        }
        
        inline void Hist::table() const
        {
            wrapperbase::BEptr->table__BOSS();
        }
        
        inline void Hist::table(std::basic_string<char,std::char_traits<char>,std::allocator<char> > fileName, bool printOverUnder, bool xMidBin) const
        {
            wrapperbase::BEptr->table(fileName, printOverUnder, xMidBin);
        }
        
        inline void Hist::table(std::basic_string<char,std::char_traits<char>,std::allocator<char> > fileName, bool printOverUnder) const
        {
            wrapperbase::BEptr->table__BOSS(fileName, printOverUnder);
        }
        
        inline void Hist::table(std::basic_string<char,std::char_traits<char>,std::allocator<char> > fileName) const
        {
            wrapperbase::BEptr->table__BOSS(fileName);
        }
        
        inline double Hist::getBinContent(int iBin) const
        {
            return wrapperbase::BEptr->getBinContent(iBin);
        }
        
        inline int Hist::getEntries() const
        {
            return wrapperbase::BEptr->getEntries();
        }
        
        inline bool Hist::sameSize(const WrapperBase< Pythia8::Abstract_Hist >& h) const
        {
            return wrapperbase::BEptr->sameSize__BOSS(*h.BEptr);
        }
        
        inline void Hist::takeLog(bool tenLog)
        {
            wrapperbase::BEptr->takeLog(tenLog);
        }
        
        inline void Hist::takeLog()
        {
            wrapperbase::BEptr->takeLog__BOSS();
        }
        
        inline void Hist::takeSqrt()
        {
            wrapperbase::BEptr->takeSqrt();
        }
        
        inline Pythia8::Hist& Hist::operator+=(const Pythia8::Hist& h)
        {
            return wrapperbase::reference_returner< Pythia8::Hist, Pythia8::Abstract_Hist >( wrapperbase::BEptr->operator_plus_equal__BOSS(*h.BEptr) );
        }
        
        inline Pythia8::Hist& Hist::operator-=(const Pythia8::Hist& h)
        {
            return wrapperbase::reference_returner< Pythia8::Hist, Pythia8::Abstract_Hist >( wrapperbase::BEptr->operator_minus_equal__BOSS(*h.BEptr) );
        }
        
        inline Pythia8::Hist& Hist::operator*=(const Pythia8::Hist& h)
        {
            return wrapperbase::reference_returner< Pythia8::Hist, Pythia8::Abstract_Hist >( wrapperbase::BEptr->operator_asterix_equal__BOSS(*h.BEptr) );
        }
        
        inline Pythia8::Hist& Hist::operator/=(const Pythia8::Hist& h)
        {
            return wrapperbase::reference_returner< Pythia8::Hist, Pythia8::Abstract_Hist >( wrapperbase::BEptr->operator_slash_equal__BOSS(*h.BEptr) );
        }
        
        inline Pythia8::Hist& Hist::operator+=(double f)
        {
            return wrapperbase::reference_returner< Pythia8::Hist, Pythia8::Abstract_Hist >( wrapperbase::BEptr->operator_plus_equal__BOSS(f) );
        }
        
        inline Pythia8::Hist& Hist::operator-=(double f)
        {
            return wrapperbase::reference_returner< Pythia8::Hist, Pythia8::Abstract_Hist >( wrapperbase::BEptr->operator_minus_equal__BOSS(f) );
        }
        
        inline Pythia8::Hist& Hist::operator*=(double f)
        {
            return wrapperbase::reference_returner< Pythia8::Hist, Pythia8::Abstract_Hist >( wrapperbase::BEptr->operator_asterix_equal__BOSS(f) );
        }
        
        inline Pythia8::Hist& Hist::operator/=(double f)
        {
            return wrapperbase::reference_returner< Pythia8::Hist, Pythia8::Abstract_Hist >( wrapperbase::BEptr->operator_slash_equal__BOSS(f) );
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::Hist::Hist() :
            WrapperBase<Pythia8::Abstract_Hist>(__factory0())
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Hist::Hist(std::basic_string<char,std::char_traits<char>,std::allocator<char> > titleIn, int nBinIn, double xMinIn, double xMaxIn) :
            WrapperBase<Pythia8::Abstract_Hist>(__factory1(titleIn, nBinIn, xMinIn, xMaxIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Hist::Hist(std::basic_string<char,std::char_traits<char>,std::allocator<char> > titleIn, int nBinIn, double xMinIn) :
            WrapperBase<Pythia8::Abstract_Hist>(__factory2(titleIn, nBinIn, xMinIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Hist::Hist(std::basic_string<char,std::char_traits<char>,std::allocator<char> > titleIn, int nBinIn) :
            WrapperBase<Pythia8::Abstract_Hist>(__factory3(titleIn, nBinIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Hist::Hist(std::basic_string<char,std::char_traits<char>,std::allocator<char> > titleIn) :
            WrapperBase<Pythia8::Abstract_Hist>(__factory4(titleIn))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Hist::Hist(std::basic_string<char,std::char_traits<char>,std::allocator<char> > titleIn, const Pythia8::Hist& h) :
            WrapperBase<Pythia8::Abstract_Hist>(__factory5(titleIn, h))
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::Hist::Hist(Pythia8::Abstract_Hist* in) :
            WrapperBase<Pythia8::Abstract_Hist>(in)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        inline Pythia8::Hist::Hist(Pythia8::Abstract_Hist* const & in, bool) :
            WrapperBase<Pythia8::Abstract_Hist>(in, true)
        {
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Copy constructor: 
        inline Pythia8::Hist::Hist(const Hist& in) :
            WrapperBase<Pythia8::Abstract_Hist>(in)
        {
            wrapperbase::BEptr->can_delete_me(true);
            wrapperbase::BEptr->wrapper__BOSS(this);
            wrapperbase::BEptr->can_delete_wrapper(false);  // Override setting in wrapper__BOSS
        }
        
        // Assignment operator: 
        inline Pythia8::Hist& Hist::operator=(const Hist& in)
        {
            WrapperBase<Pythia8::Abstract_Hist>::operator=(in);
            return *this;
        }
        
        
        // Destructor: 
        inline Pythia8::Hist::~Hist()
        {
        }
        
        
        // Member variable initialiser: 
        inline void Pythia8::Hist::_memberVariablesInit()
        {
        }
        
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_Hist_def_Pythia_8_209_h__ */
