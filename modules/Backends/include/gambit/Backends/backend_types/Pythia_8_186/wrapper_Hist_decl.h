#ifndef __wrapper_Hist_decl_Pythia_8_186_h__
#define __wrapper_Hist_decl_Pythia_8_186_h__

#include <cstddef>
#include "forward_decls_wrapper_classes.h"
#include "gambit/Backends/wrapperbase.hpp"
#include "abstract_Hist.h"
#include <string>
#include <vector>
#include <ostream>

#include "identification.hpp"

namespace CAT_3(BACKENDNAME,_,SAFE_VERSION)
{
    
    namespace Pythia8
    {
        
        class Hist : public WrapperBase<Pythia8::Abstract_Hist>
        {
            public:
                // Member variables: 
                // -- Static factory pointers: 
                static Pythia8::Abstract_Hist* (*__factory0)();
                static Pythia8::Abstract_Hist* (*__factory1)(std::string, int, double, double);
                static Pythia8::Abstract_Hist* (*__factory2)(std::string, int, double);
                static Pythia8::Abstract_Hist* (*__factory3)(std::string, int);
                static Pythia8::Abstract_Hist* (*__factory4)(std::string);
                static Pythia8::Abstract_Hist* (*__factory5)(std::string, const Pythia8::Hist&);
                // -- Other member variables: 
        
                // Member functions: 
                void book(std::string titleIn, int nBinIn, double xMinIn, double xMaxIn);
        
                void book(std::string titleIn, int nBinIn, double xMinIn);
        
                void book(std::string titleIn, int nBinIn);
        
                void book(std::string titleIn);
        
                void book();
        
                void name(std::string titleIn);
        
                void name();
        
                void null();
        
                void fill(double x, double w);
        
                void fill(double x);
        
                void table(std::ostream& os, bool printOverUnder, bool xMidBin) const;
        
                void table(std::ostream& os, bool printOverUnder) const;
        
                void table(std::ostream& os) const;
        
                void table() const;
        
                void table(std::string fileName, bool printOverUnder, bool xMidBin) const;
        
                void table(std::string fileName, bool printOverUnder) const;
        
                void table(std::string fileName) const;
        
                double getBinContent(int iBin) const;
        
                int getEntries() const;
        
                bool sameSize(const WrapperBase< Pythia8::Abstract_Hist >& h) const;
        
                void takeLog(bool tenLog);
        
                void takeLog();
        
                void takeSqrt();
        
                Pythia8::Hist& operator+=(const Pythia8::Hist& h);
        
                Pythia8::Hist& operator-=(const Pythia8::Hist& h);
        
                Pythia8::Hist& operator*=(const Pythia8::Hist& h);
        
                Pythia8::Hist& operator/=(const Pythia8::Hist& h);
        
                Pythia8::Hist& operator+=(double f);
        
                Pythia8::Hist& operator-=(double f);
        
                Pythia8::Hist& operator*=(double f);
        
                Pythia8::Hist& operator/=(double f);
        
        
                // Wrappers for original constructors: 
                Hist();
                Hist(std::string titleIn, int nBinIn, double xMinIn, double xMaxIn);
                Hist(std::string titleIn, int nBinIn, double xMinIn);
                Hist(std::string titleIn, int nBinIn);
                Hist(std::string titleIn);
                Hist(std::string titleIn, const Pythia8::Hist& h);
        
                // Special pointer-based constructor: 
                Hist(Pythia8::Abstract_Hist* in, bool memvar_in=false);
        
                // Copy constructor: 
                Hist(const Hist& in);
        
                // Assignment operator: 
                Hist& operator=(const Hist& in);
        
        };
    }
    
}


#include "gambit/Backends/backend_undefs.hpp"

#endif /* __wrapper_Hist_decl_Pythia_8_186_h__ */
