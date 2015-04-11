//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Implementation file for DarkBit SimpleHist 
///  types.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Lars A. Dal  
///          (l.a.dal@fys.uio.no)
///  \date 2015 Feb
///  
///  *********************************************

#include "gambit/Utils/gambit_module_headers.hpp"
#include "gambit/DarkBit/DarkBit_rollcall.hpp"

#include "gambit/DarkBit/SimpleHist.hpp"

namespace Gambit {
  namespace DarkBit {

    SimpleHist::SimpleHist(int nBins, double Emin, double Emax, bool logscale):
      nBins(nBins)
    {
      if(logscale)
      {
        if(Emin<=0)
        {
          DarkBit_error().raise(LOCAL_INFO,
              "Lower histogram bin limit must be greater than 0 when using\n"
              "logarithmic binning.");
        }
        double factor = pow(Emax/Emin,(1.0/nBins));
        double binL=Emin;
        for(int i=0; i<nBins; i++)
        {
          binLower.push_back(binL);
          binVals.push_back(0.0);
          wtSq.push_back(0.0);
          binL*=factor;
        }
        binLower.push_back(binL);
      }
      else
      {
        double dE = (Emax-Emin)/nBins;
        for(int i=0; i<nBins; i++)
        {
          double binL = Emin+i*dE; 
          binLower.push_back(binL);
          binVals.push_back(0.0);
          wtSq.push_back(0.0);                
        }
        binLower.push_back(Emin+nBins*dE);
      }
    }

    SimpleHist::SimpleHist(std::vector<double> binLower) : binLower(binLower)
    {
      nBins=int(binLower.size())-1;
      binVals=std::vector<double>(nBins,0.0);
      wtSq   =std::vector<double>(nBins,0.0);
    }

    void SimpleHist::addEvent(double E, double weight)
    {
      int bin = findIndex(E);
      if(bin>=0 and bin<nBins )
      {
        binVals[bin]+=weight;
        wtSq[bin]+=weight*weight;
      }
    }

    void SimpleHist::addToBin(int bin, double weight)
    {
      binVals[bin]+=weight;
      wtSq[bin]+=weight*weight;
    }

    void SimpleHist::addBox(double Emin, double Emax, double weight)
    {
      int imin = findIndex(Emin);
      int imax = findIndex(Emax);
      double dE = Emax-Emin;
      double norm = weight/dE;       
      if(imax<0 or imin>=nBins) 
      {
        // Do nothing
      }
      else if(imin==imax)
      {
        addToBin(imin,weight);
      }            
      else if(imin<0 and imax==0)
      {
        addToBin(0,(Emax-binLower[0])*norm);
      }
      else if(imin==(nBins-1) and imax>=nBins)
      {
        addToBin(nBins-1,(binLower[nBins]-Emin)*norm);
      }
      else
      {
        double binSize_low,binSize_high;         
        // Calculate part of lower bin covered by box
        if(imin>=0)
          binSize_low = binLower[imin+1]-Emin;
        else
        {
          imin = 0;
          binSize_low=binSize(imin);
        }
        // Calculate part of upper bin covered by box
        if(imax<nBins) 
          binSize_high = Emax-binLower[imax];
        else
        {
          imax = nBins-1;
          binSize_high=binSize(imax);
        }
        // Add contribution to lower bin
        addToBin(imin,binSize_low*norm);
        // Add contribution to upper bin
        addToBin(imax,binSize_high*norm);                    
        // Add contributions to remaining bins
        for(int i=imin+1;i<imax;i++)
        {
          addToBin(i,binSize(i)*norm);
        }
      }
    }

    void SimpleHist::addHistAsWeights_sameBin(SimpleHist &in)
    {
      // Check that the number of bins is equal to avoid segfaults. 
      // It is up to the user to make sure the actual binning is identical.
      if(in.nBins != nBins)
      {
        DarkBit_error().raise(LOCAL_INFO,
            "SimpleHist::addHistAsWeights_sameBin requires identically binned\n"
            "histograms.");
      }
      for(int i=0; i<nBins;i++)
      {
        addToBin(i,in.binVals[i]);
      }
    }

    double SimpleHist::getError(int bin) const
    {
      return sqrt(wtSq[bin]);
    }

    double SimpleHist::getRelError(int bin) const
    {
      return ((binVals[bin]!=0) ? sqrt(wtSq[bin])/binVals[bin] : 0);
    }

    void SimpleHist::divideByBinSize()
    {
      for(int i=0;i<nBins;i++)
      {
        binVals[i]/=binSize(i);
        wtSq[i]   /=(binSize(i)*binSize(i));
      }
    }

    void SimpleHist::multiply(double x)
    {
      for(int i=0;i<nBins;i++)
      {
        binVals[i]*=x;
        wtSq[i]   *=x*x;
      } 
    }       

    int SimpleHist::findIndex(double val) const
    {
      if(val < binLower[0]) return -1;
      std::vector<double>::const_iterator pos = 
        upper_bound(binLower.begin(),binLower.end(),val);   
      return pos - binLower.begin() -1;       
    }

    double SimpleHist::binSize(int bin) const
    {
      return binLower[bin+1]-binLower[bin];
    }  

    double SimpleHist::binCenter(int bin) const
    {
      return 0.5*(binLower[bin+1]+binLower[bin]);
    }

    std::vector<double> SimpleHist::getBinCenters() const
    {
      std::vector<double> centers;
      for(int i=0;i<nBins;i++)
      {
        centers.push_back(binCenter(i));
      }
      return centers;
    }

    const std::vector<double>& SimpleHist::getBinValues() const
    {
      return binVals;
    }

    void SimpleHist::getEdges(double& lower, double& upper) const
    {
      lower=binLower[0];
      upper=binLower[nBins];
    }

  } // namespace DarkBit

} // namespace Gambit
