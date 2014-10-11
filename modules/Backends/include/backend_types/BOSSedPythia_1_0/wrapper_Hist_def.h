#ifndef __WRAPPER_HIST_DEF_BOSSedPythia_1_0_H__
#define __WRAPPER_HIST_DEF_BOSSedPythia_1_0_H__

#include <string>
#include <vector>
#include <ostream>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        // Member functions: 
        inline void Hist::book(std::string titleIn, int nBinIn, double xMinIn, double xMaxIn)
        {
            BEptr->book(titleIn, nBinIn, xMinIn, xMaxIn);
        }
        
        inline void Hist::book(std::string titleIn, int nBinIn, double xMinIn)
        {
            BEptr->book_GAMBIT(titleIn, nBinIn, xMinIn);
        }
        
        inline void Hist::book(std::string titleIn, int nBinIn)
        {
            BEptr->book_GAMBIT(titleIn, nBinIn);
        }
        
        inline void Hist::book(std::string titleIn)
        {
            BEptr->book_GAMBIT(titleIn);
        }
        
        inline void Hist::book()
        {
            BEptr->book_GAMBIT();
        }
        
        inline void Hist::name(std::string titleIn)
        {
            BEptr->name(titleIn);
        }
        
        inline void Hist::name()
        {
            BEptr->name_GAMBIT();
        }
        
        inline void Hist::null()
        {
            BEptr->null();
        }
        
        inline void Hist::fill(double x, double w)
        {
            BEptr->fill(x, w);
        }
        
        inline void Hist::fill(double x)
        {
            BEptr->fill_GAMBIT(x);
        }
        
        inline void Hist::table(std::ostream& os, bool printOverUnder, bool xMidBin) const
        {
            BEptr->table(os, printOverUnder, xMidBin);
        }
        
        inline void Hist::table(std::ostream& os, bool printOverUnder) const
        {
            BEptr->table_GAMBIT(os, printOverUnder);
        }
        
        inline void Hist::table(std::ostream& os) const
        {
            BEptr->table_GAMBIT(os);
        }
        
        inline void Hist::table() const
        {
            BEptr->table_GAMBIT();
        }
        
        inline void Hist::table(std::string fileName, bool printOverUnder, bool xMidBin) const
        {
            BEptr->table(fileName, printOverUnder, xMidBin);
        }
        
        inline void Hist::table(std::string fileName, bool printOverUnder) const
        {
            BEptr->table_GAMBIT(fileName, printOverUnder);
        }
        
        inline void Hist::table(std::string fileName) const
        {
            BEptr->table_GAMBIT(fileName);
        }
        
        inline double Hist::getBinContent(int iBin) const
        {
            return BEptr->getBinContent(iBin);
        }
        
        inline int Hist::getEntries() const
        {
            return BEptr->getEntries();
        }
        
        inline bool Hist::sameSize(const WrapperBase< Pythia8::Abstract_Hist >& h) const
        {
            return BEptr->sameSize_GAMBIT(*h.BEptr);
        }
        
        inline void Hist::takeLog(bool tenLog)
        {
            BEptr->takeLog(tenLog);
        }
        
        inline void Hist::takeLog()
        {
            BEptr->takeLog_GAMBIT();
        }
        
        inline void Hist::takeSqrt()
        {
            BEptr->takeSqrt();
        }
        
        inline Pythia8::Hist& Hist::operator+=(const Pythia8::Hist& h)
        {
            return reference_returner< Pythia8::Hist, Pythia8::Abstract_Hist >( BEptr->operator_plus_equal_GAMBIT(*h.BEptr) );
        }
        
        inline Pythia8::Hist& Hist::operator-=(const Pythia8::Hist& h)
        {
            return reference_returner< Pythia8::Hist, Pythia8::Abstract_Hist >( BEptr->operator_minus_equal_GAMBIT(*h.BEptr) );
        }
        
        inline Pythia8::Hist& Hist::operator*=(const Pythia8::Hist& h)
        {
            return reference_returner< Pythia8::Hist, Pythia8::Abstract_Hist >( BEptr->operator_asterix_equal_GAMBIT(*h.BEptr) );
        }
        
        inline Pythia8::Hist& Hist::operator/=(const Pythia8::Hist& h)
        {
            return reference_returner< Pythia8::Hist, Pythia8::Abstract_Hist >( BEptr->operator_slash_equal_GAMBIT(*h.BEptr) );
        }
        
        inline Pythia8::Hist& Hist::operator+=(double f)
        {
            return reference_returner< Pythia8::Hist, Pythia8::Abstract_Hist >( BEptr->operator_plus_equal_GAMBIT(f) );
        }
        
        inline Pythia8::Hist& Hist::operator-=(double f)
        {
            return reference_returner< Pythia8::Hist, Pythia8::Abstract_Hist >( BEptr->operator_minus_equal_GAMBIT(f) );
        }
        
        inline Pythia8::Hist& Hist::operator*=(double f)
        {
            return reference_returner< Pythia8::Hist, Pythia8::Abstract_Hist >( BEptr->operator_asterix_equal_GAMBIT(f) );
        }
        
        inline Pythia8::Hist& Hist::operator/=(double f)
        {
            return reference_returner< Pythia8::Hist, Pythia8::Abstract_Hist >( BEptr->operator_slash_equal_GAMBIT(f) );
        }
        
        
        // Wrappers for original constructors: 
        inline Pythia8::Hist::Hist() :
            WrapperBase<Pythia8::Abstract_Hist>( __factory0(), false )
        {
            BEptr->wrapper_GAMBIT(this);
        }
        
        inline Pythia8::Hist::Hist(std::string titleIn, int nBinIn, double xMinIn, double xMaxIn) :
            WrapperBase<Pythia8::Abstract_Hist>( __factory1(titleIn, nBinIn, xMinIn, xMaxIn), false )
        {
            BEptr->wrapper_GAMBIT(this);
        }
        
        inline Pythia8::Hist::Hist(std::string titleIn, int nBinIn, double xMinIn) :
            WrapperBase<Pythia8::Abstract_Hist>( __factory2(titleIn, nBinIn, xMinIn), false )
        {
            BEptr->wrapper_GAMBIT(this);
        }
        
        inline Pythia8::Hist::Hist(std::string titleIn, int nBinIn) :
            WrapperBase<Pythia8::Abstract_Hist>( __factory3(titleIn, nBinIn), false )
        {
            BEptr->wrapper_GAMBIT(this);
        }
        
        inline Pythia8::Hist::Hist(std::string titleIn) :
            WrapperBase<Pythia8::Abstract_Hist>( __factory4(titleIn), false )
        {
            BEptr->wrapper_GAMBIT(this);
        }
        
        inline Pythia8::Hist::Hist(std::string titleIn, const Pythia8::Hist& h) :
            WrapperBase<Pythia8::Abstract_Hist>( __factory5(titleIn, h), false )
        {
            BEptr->wrapper_GAMBIT(this);
        }
        
        // Special pointer-based constructor: 
        inline Pythia8::Hist::Hist(Pythia8::Abstract_Hist* in, bool memvar_in) :
            WrapperBase<Pythia8::Abstract_Hist>( in, memvar_in )
        {
            BEptr->wrapper_GAMBIT(this);
        }
        
        // Copy constructor: 
        inline Pythia8::Hist::Hist(const Hist& in) :
            WrapperBase<Pythia8::Abstract_Hist>(in)
        {
            BEptr->wrapper_GAMBIT(this);
        }
        
        // Assignment operator: 
        inline Pythia8::Hist& Hist::operator=(const Hist& in)
        {
            WrapperBase<Pythia8::Abstract_Hist>::operator=(in);
            return *this;
        }
        
    }
    
}


#include "backend_undefs.hpp"

#endif /* __WRAPPER_HIST_DEF_BOSSedPythia_1_0_H__ */
