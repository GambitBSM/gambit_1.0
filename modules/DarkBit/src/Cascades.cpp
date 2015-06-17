//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///   
///  GAMBIT side of Cascade decay codes.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Christoph Weniger
///          (c.weniger@uva.nl)
///  \date 2013 Jul - 2015 May
///
///  \author Lars A. Dal  
///          (l.a.dal@fys.uio.no)
///  \date 2014 Mar, Jul, Sep, Oct
///  
///  *********************************************

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/DarkBit/DarkBit_rollcall.hpp"

namespace Gambit {
  namespace DarkBit {

    //////////////////////////////////////////////////////////////////////////
    //
    //                        Cascade Decays
    //
    //////////////////////////////////////////////////////////////////////////

    // Special events for event loop
    enum cascadeMC_SpecialEvents {MC_INIT=-1, MC_NEXT_STATE=-2, MC_FINALIZE=-3};

    // Function for retrieving list of final states for cascade decays
    void cascadeMC_FinalStates(std::vector<std::string> &list)
    {
      list.clear();
      using namespace Pipes::cascadeMC_FinalStates;  
      list = runOptions->getValueOrDef<std::vector<std::string> >(
          list,"cMC_finalStates");       
    }     

    // Print list of final states for debug purposes
    void cascadeMC_printFinalStates(bool &dummy)
    {
      dummy=true;
      using namespace Pipes::cascadeMC_printFinalStates;     
      const std::vector<std::string> &list = *Dep::cascadeMC_FinalStates;
      logger() << "Cascade decay final state list contains: " << std::endl;
      for(size_t i=0; i<list.size(); i++)
      {
        logger() << i << ": " << list[i] << std::endl;
      }
    }   

    // Function setting up the decay table used in decay chains
    void cascadeMC_DecayTable(DarkBit::DecayChain::DecayTable &table)
    {
      using namespace DecayChain;
      using namespace Pipes::cascadeMC_DecayTable;     
      //std::cout << "cascadeMC_DecayTable" << std::endl;
      std::set<std::string> disabled;
      // Force quarks and gluons to be stable in cascade context.
      // These spectra should be handled using SimYields.
      if(runOptions->getValueOrDef<bool> (true, "cMC_noColoredSMdecays"))
      {
        disabled.insert("u");
        disabled.insert("ubar");     
        disabled.insert("d");
        disabled.insert("dbar");
        disabled.insert("c");
        disabled.insert("cbar");  
        disabled.insert("s");
        disabled.insert("sbar");                 
        disabled.insert("t");
        disabled.insert("tbar");
        disabled.insert("b");
        disabled.insert("bbar");   
        disabled.insert("g");                        
      }
      table = DecayTable(*Dep::TH_ProcessCatalog, *Dep::SimYieldTable, disabled);
      //table.printTable();
    }

    // Loop manager for cascade decays
    void cascadeMC_LoopManager()
    {
      using namespace Pipes::cascadeMC_LoopManager;     
      std::vector<std::string> chainList = *Dep::GA_missingFinalStates;
      // Get YAML options
      int cMC_minEvents = runOptions->getValueOrDef<int>(100, "cMC_minEvents");
      int cMC_maxEvents = 
        runOptions->getValueOrDef<int>(10000, "cMC_maxEvents");

      // Initialization run
      Loop::executeIteration(MC_INIT);

      // Check whether there is anything to do
      if ( chainList.size() == 0 ) 
      {
        //std::cout << "Nothing to do." << std::endl;
        return;
      }

      // Iterate over initial state particles
      for(std::vector<std::string>::const_iterator
          cit =chainList.begin(); cit != chainList.end(); cit++)
      {
        int it;
        int counter = 0;
        bool finished = false;
        // Set next initial state
        Loop::executeIteration(MC_NEXT_STATE);
        // Event generation loop
#pragma omp parallel private(it) shared(counter, finished)
        {
          while (!finished)
          {
#pragma omp critical (cascadeMC_Counter)
            {
              counter++;
              it = counter;
            }
            Loop::executeIteration(it);
#pragma omp critical (cascadeMC_Counter)
            if((*Loop::done and (counter >= cMC_minEvents)) 
                or (counter >= cMC_maxEvents)) finished=true;
          }
        }
        Loop::reset();
      }
      Loop::executeIteration(MC_FINALIZE);
    }

    // Function selecting initial state for decay chain
    void cascadeMC_InitialState(std::string &pID)
    {
      using namespace DecayChain;
      using namespace Pipes::cascadeMC_InitialState;  
      std::vector<std::string> chainList = *Dep::GA_missingFinalStates;
      static int iteration;
      switch(*Loop::iteration)
      {
        case MC_INIT:
          iteration = -1;
          return;
        case MC_NEXT_STATE:
          iteration++;
          break;
        case MC_FINALIZE:
          return;
      }
      if(int(chainList.size()) <= iteration)
      {
        DarkBit_error().raise(LOCAL_INFO, 
            "Desync between cascadeMC_LoopManager and cascadeMC_InitialState");
      }
      else
        pID = chainList[iteration];
      /*
         std::cout << "cascadeMC_InitialState" << std::endl;            
         std::cout << "Iteration: " << *Loop::iteration << std::endl;
         std::cout << "Number of states to simulate: " 
           << chainList.size() << std::endl;
       */
    }

    // Event counter for cascade decays
    void cascadeMC_EventCount(std::map<std::string, int> &counts)
    {
      // std::cout << "cascadeMC_EventCount" << std::endl;           
      using namespace Pipes::cascadeMC_EventCount;     
      static std::map<std::string, int> counters;
      switch(*Loop::iteration)
      {
        case MC_INIT:
          counters.clear();
          break;
        case MC_NEXT_STATE:
          counters[*Dep::cascadeMC_InitialState] = 0;
          break;    
        case MC_FINALIZE:
          // For performance, only return the actual result once finished    
          counts=counters;
          break;
        default:          
#pragma omp atomic
          counters[*Dep::cascadeMC_InitialState]++;
      }
    }    

    // Function for generating decay chains
    void cascadeMC_GenerateChain(
        DarkBit::DecayChain::ChainContainer &chain)
    {
      //std::cout << "cascadeMC_GenerateChain" << std::endl;        
      using namespace DecayChain;
      using namespace Pipes::cascadeMC_GenerateChain;    
      static int    cMC_maxChainLength; 
      static double cMC_Emin;
      switch(*Loop::iteration)
      {
        case MC_INIT:
          cMC_maxChainLength = 
            runOptions->getValueOrDef<int>    (-1, "cMC_maxChainLength");
          cMC_Emin           = 
            runOptions->getValueOrDef<double> (-1, "cMC_Emin"); 
          return;
        case MC_NEXT_STATE:
        case MC_FINALIZE:
          return;
      }
      ChainParticle* chn = new ChainParticle(
          vec3(0), &(*Dep::cascadeMC_DecayTable),
          *Dep::cascadeMC_InitialState); 
      chn->generateDecayChainMC(cMC_maxChainLength,cMC_Emin); 
      chain=ChainContainer(chn);
    }

    // Function for sampling SimYieldTables (tabulated spectra). 
    // This is a convenience function used in cascadeMC_Histograms, and does
    // not have an associated capability.
    void cascadeMC_sampleSimYield( const SimYieldTable &table, 
        const DarkBit::DecayChain::ChainParticle* endpoint, 
        std::string finalState, 
        const TH_ProcessCatalog &catalog, 
        std::map<std::string, std::map<std::string, SimpleHist> > &histList, 
        std::string initialState, 
        double weight, int cMC_minSpecSamples, int cMC_maxSpecSamples, 
        double cMC_specValidThreshold)
    {
      //std::cout << "cascadeMC_sampleSimYield" << std::endl;          
      std::string p1,p2;
      double gamma,beta;
      double M;
      switch(endpoint->getnChildren())
      {
        case 0:
        {
          p1 = endpoint->getpID();
          p2 = "";
          const DarkBit::DecayChain::ChainParticle* parent = endpoint->getParent();
          if(parent == NULL)
          {
            endpoint->getBoost(gamma,beta);   
            M = endpoint->m;
          }
          else
          {
            parent->getBoost(gamma,beta);  
            M = endpoint->E_parentFrame();
          }
          break;
        }
        case 2:
        {
          p1=(*endpoint)[0]->getpID();
          p2=(*endpoint)[1]->getpID();   
          endpoint->getBoost(gamma,beta);  
          M = endpoint->m; 
          break;
        }
        default:
          DarkBit_error().raise(LOCAL_INFO,
              "cascadeMC_sampleSimYield called with invalid endpoint state.");
      }
      const SimYieldChannel &chn = table.getChannel(p1 , p2, finalState);
      // Get Lorentz boost information
  
      const double gammaBeta = gamma*beta;              
      // Mass of final state squared
      const double m = catalog.particleProperties.at(finalState).mass;
      const double msq = m*m;
      // Get histogram edges
      double histEmin, histEmax;
      histList[initialState][finalState].getEdges(histEmin, histEmax);

      // Calculate energies to sample between.  A particle decaying
      // isotropically in its rest frame will give a box spectrum.  This is
      // assumed and used here to add box contributions rather than points to
      // the histograms.  Limits are chosen such that we only sample energies
      // that can contribute to histogram bins.
      const double Ecmin = std::max( gamma*histEmin 
          - gammaBeta*sqrt(histEmin*histEmin-msq) , chn.Ecm_min );
      const double Ecmax = std::min(std::min( 
            // Highest energy that can contribute to the histogram
            gamma*histEmax + gammaBeta*sqrt(histEmax*histEmax-msq),
            // Highest energy in SimYieldChannel
            chn.Ecm_max ),
            // Estimate for highest kinematically allowed CoM energy
          0.5*(M*M + msq)/M );
      if(Ecmin>=Ecmax) return;    
      // TODO: Correct now?
      const double logmin = log(Ecmin);
      const double logmax = log(Ecmax);                  
      const double dlogE=logmax-logmin;       

      // Some debug information
      /*
      if(false)
      {
        std::cout << M << std::endl;
        std::cout << endpoint->E_Lab() << std::endl;
        std::cout << endpoint->p_Lab() << std::endl;
        std::cout << "Lorentz factors gamma, beta: " << gamma << ", " 
          << beta << std::endl;
        std::cout << "Initial state: " << initialState << std::endl;
        std::cout << "Channel: " << p1 << " " << p2 << std::endl;
        std::cout << "Final particles: " << finalState << std::endl;
        std::cout << "Event weight: "    << weight << std::endl;
        std::cout << "cMC_specValidThreshold: "    << cMC_specValidThreshold 
          << std::endl;
        std::cout << "histEmin/histEmax: " << histEmin << " " << histEmax 
          << std::endl;
        std::cout << "chn.Ecm_min/max: " << chn.Ecm_min << " " << chn.Ecm_max 
          << std::endl;
        std::cout << "Ecmin/max: " << Ecmin << " " << Ecmax << std::endl;
        std::cout << "Final state mass^2: " << msq << std::endl;
      }
      */

      double specSum=0;
      int Nsampl=0;
      int samplCounter = 0;
      SimpleHist spectrum(histList[initialState][finalState].binLower);        
      // Dynamic sampling of tabulated spectrum.  specSum/Nsampl gives an
      // estimate for how many particles our sampling so far corresponds to.
      // To reduce noise, keep sampling until Nsampl>=specSum/Nsampl or
      // maxSamples is reached.
      while(((Nsampl<cMC_minSpecSamples) 
            or (Nsampl*Nsampl<specSum)) and (samplCounter<cMC_maxSpecSamples))
      {
        samplCounter++;
        // Draw an energy in the CoM frame of the endpoint. Logarithmic
        // sampling.
        double E_CoM= exp(logmin+(logmax-logmin)*Random::draw());
        double dN_dE = chn.dNdE_bound->eval(E_CoM, M);

        // Only accept point if dN_dE is above threshold value
        if(dN_dE > cMC_specValidThreshold)
        {
          double weight2 = E_CoM*dlogE*dN_dE;
          specSum += weight2;
          weight2 *= weight;
          double tmp1 = gamma*E_CoM;
          double tmp2 = gammaBeta*sqrt(E_CoM*E_CoM-msq);
          // Add box spectrum to histogram
          spectrum.addBox(tmp1-tmp2,tmp1+tmp2,weight2);
          Nsampl++;
        }
      }
      if(Nsampl>0)
      {
        spectrum.multiply(1.0/Nsampl);
        // Add bin contents of spectrum histogram to main histogram as weighted
        // events
        #pragma omp critical (cascadeMC_histList)
          histList[initialState][finalState].addHistAsWeights_sameBin(spectrum);
      }
    }

    // Function responsible for histogramming, and evaluating end conditions
    // for event loop
    void cascadeMC_Histograms(std::map<std::string, std::map<std::string, 
        SimpleHist> > &result)
    {
      //std::cout << "cascadeMC_Histograms" << std::endl; 
      using namespace DecayChain;
      using namespace Pipes::cascadeMC_Histograms; 

      // YAML options
      static int    cMC_minSpecSamples;
      static int    cMC_maxSpecSamples;
      static double cMC_specValidThreshold;
      static int    cMC_endCheckFrequency; 
      static double cMC_gammaBGPower;
      static double cMC_gammaRelError;      
      // Histogram list shared between all threads
      static std::map<std::string, std::map<std::string, SimpleHist> > histList;

      switch(*Loop::iteration)
      {
        case MC_INIT:
          // Initialization
          cMC_minSpecSamples     = 
            runOptions->getValueOrDef<int>   (5,    "cMC_minSpecSamples");    
          cMC_maxSpecSamples     = 
            runOptions->getValueOrDef<int>   (25,   "cMC_maxSpecSamples"); 
          cMC_specValidThreshold = 
            runOptions->getValueOrDef<double>(0.0,  "cMC_specValidThreshold");
          cMC_endCheckFrequency  = 
            runOptions->getValueOrDef<int>   (25,   "cMC_endCheckFrequency");
          cMC_gammaBGPower       = 
            runOptions->getValueOrDef<double>(-2.5, "cMC_gammaBGPower");
          cMC_gammaRelError      = 
            runOptions->getValueOrDef<double>(0.01, "cMC_gammaRelError");     
          histList.clear();
          return;
        case MC_NEXT_STATE:
          // Initialize histograms
          for(std::vector<std::string>::const_iterator it = 
              Dep::cascadeMC_FinalStates->begin();
              it!=Dep::cascadeMC_FinalStates->end(); ++it)
          {
            /*
            if(false)
            {
              std::cout << "Defining new histList entry!!!" << std::endl;
              std::cout << "for: " << *Dep::cascadeMC_InitialState 
                << " " << *it << std::endl;
            }
            */
            // FIXME: This defines 50 bins from 1e-3 to 1e3 GeV.
            // Should not be hardcoded.
            histList[*Dep::cascadeMC_InitialState][*it]=
              SimpleHist(70,0.001,10000.0,true);
          }
          return;
        case MC_FINALIZE:
          // For performance, only return the actual result once finished
          result = histList;
          return;
      }
      // Get list of endpoint states for this chain
      vector<const ChainParticle*> endpoints;
      (*Dep::cascadeMC_ChainEvent).chain->
        collectEndpointStates(endpoints, false);
      // Iterate over final states of interest
      for(std::vector<std::string>::const_iterator pit = 
          Dep::cascadeMC_FinalStates->begin(); 
          pit!=Dep::cascadeMC_FinalStates->end(); ++pit)
      {
        // std::cout << "Deriving histograms for final state " << *pit << std::endl;
        //
        // Iterate over all endpoint states of the decay chain. These can
        // either be final state particles themselves or parents of final state
        // particles.  The reason for not using only final state particles is
        // that certain endpoints (e.g. quark-antiquark pairs) cannot be
        // handled as separate particles.
        for(vector<const ChainParticle*>::const_iterator it =endpoints.begin();
            it != endpoints.end(); it++)
        {
          //std::cout << "  working on endpoint:" << (*it)->getpID() << std::endl;
          //(*it)->printChain();
          //
          // Weighting factor (correction for mismatch between decay width
          // of available decay channels and total decay width)
          double weight;        
          // Analyze single particle endpoints            
          if((*it)->getnChildren() ==0)
          {
            weight = (*it)->getWeight();     
            // Check if the final state itself is the particle we are looking
            // for.
            if((*it)->getpID()==*pit)
            {
              double E = (*it)->E_Lab();
#pragma omp critical (cascadeMC_histList)
              histList[*Dep::cascadeMC_InitialState][*pit].addEvent(E,weight);
            }
            // Check if tabulated spectra exist for this final state
            else if((*Dep::SimYieldTable).hasChannel( (*it)->getpID(), *pit ))
            {
              cascadeMC_sampleSimYield(
                  *Dep::SimYieldTable, *it, *pit, *Dep::TH_ProcessCatalog,
                  histList, *Dep::cascadeMC_InitialState, weight, 
                  cMC_minSpecSamples, cMC_maxSpecSamples,
                  cMC_specValidThreshold);
            }
          }
          // Analyze multiparticle endpoints (the endpoint particle is here the
          // parent of final state particles).
          else
          {
            weight = (*(*it))[0]->getWeight();     
            bool hasTabulated = false;
            if((*it)->getnChildren() == 2)
            {
              // std::cout << "  check whether two-body final state is tabulated: " << (*(*it))[0]->getpID() << " " << (*(*it))[1]->getpID() << std::endl;
              //
              // Check if tabulated spectra exist for this final state
              if((*Dep::SimYieldTable).hasChannel(
                    (*(*it))[0]->getpID() , (*(*it))[1]->getpID(), *pit ))
              {
                // std::cout << "  ...it actually is!" << std::endl;
                hasTabulated = true;                          
                cascadeMC_sampleSimYield(*Dep::SimYieldTable, *it, *pit,
                    *Dep::TH_ProcessCatalog, histList,
                    *Dep::cascadeMC_InitialState, weight, 
                    cMC_minSpecSamples, cMC_maxSpecSamples,
                    cMC_specValidThreshold);
              }
            }
            if(!hasTabulated)
            {
              for(int i=0; i<((*it)->getnChildren()); i++)
              {
                const ChainParticle* child = (*(*it))[i];
                // Check if the child particle is the particle we are looking
                // for.
                if(child->getpID()==*pit)
                {
                  double E = child->E_Lab();
#pragma omp critical (cascadeMC_histList)
                  histList[
                    *Dep::cascadeMC_InitialState][*pit].addEvent(E,weight);
                }
                // Check if tabulated spectra exist for this final state
                else if((*Dep::SimYieldTable).hasChannel( child->getpID(),
                      *pit))
                {
                  cascadeMC_sampleSimYield(*Dep::SimYieldTable, child, *pit,
                      *Dep::TH_ProcessCatalog, histList,
                      *Dep::cascadeMC_InitialState, weight, 
                      cMC_minSpecSamples, cMC_maxSpecSamples,
                      cMC_specValidThreshold);
                }
              }
            }
          }  
        }
      }
      // Check if finished every cMC_endCheckFrequency events
      if((*Loop::iteration % cMC_endCheckFrequency) == 0)
      {   
        enum status{untouched,unfinished,finished};
        status cond = untouched;
        for(std::vector<std::string>::const_iterator it = 
            Dep::cascadeMC_FinalStates->begin();
            it != Dep::cascadeMC_FinalStates->end(); ++it)
        {
          // End conditions currently only implemented for gamma final state
          if(*it=="gamma")
          {                  
            SimpleHist hist;
#pragma omp critical (cascadeMC_histList)
            hist = histList[*Dep::cascadeMC_InitialState][*it];
            double sbRatioMax=-1.0;
            int maxBin=0;
            for(int i=0; i<hist.nBins; i++)
            {
              double E = hist.binCenter(i);
              double background = pow(E,cMC_gammaBGPower);
              double sbRatio = hist.binVals[i]/background;
              if(sbRatio>sbRatioMax)
              {
                sbRatioMax = sbRatio;
                maxBin=i;
              }
            }
            // Check if end condition is fulfilled. If not, set cond to
            // unfinished.
            if(hist.getRelError(maxBin) > cMC_gammaRelError) cond = unfinished;

            // If end condition is fulfilled, set cond to finished, unless
            // already set to unfinished by another condition.
            else if(cond != unfinished) cond = finished;
          }
        }
        // Break Monte Carlo loop if all end conditions are fulfilled.
        if(cond==finished)
        {
          Loop::wrapup();
        }
      }        
    }

    // Convenience function for getting a Funk::Funk object of a given spectrum.
    // This function has no associated capability.
    // Function retrieving specific spectra (like cascadeMC_gammaSpectra)
    // should call this function.
    void cascadeMC_fetchSpectra(std::map<std::string, Funk::Funk> &spectra,
        std::string finalState, 
        const std::vector<std::string> &ini,
        const std::vector<std::string> &fin, 
        const std::map<std::string, std::map<std::string,SimpleHist> > &h,
        const std::map<std::string,int> &eventCounts)
    {
      spectra.clear();
      // Check if final state has been calculated
      bool calculated = (
          std::find(fin.begin(), fin.end(), finalState) != fin.end());
      for(std::vector<std::string>::const_iterator it = ini.begin();
          it != ini.end(); ++it )
      {
        //std::cout << "Trying to get cascade spectra for initial state: " << *it << std::endl;
        if(calculated)
        {
          //std::cout << finalState << "...was calculated!" << std::endl;
          //std::cout << eventCounts.at(*it) << " events generated" << std::endl;
          SimpleHist hist = h.at(*it).at(finalState);
          hist.divideByBinSize();
          std::vector<double> E = hist.getBinCenters();
          std::vector<double> dN_dE = hist.getBinValues();
          // Normalize to per-event spectrum
          //int i = 0;
          for (std::vector<double>::iterator it2=dN_dE.begin();
              it2!=dN_dE.end();++it2)
          {
            *it2 /= eventCounts.at(*it);
            *it2 += 1e-50;  // Quasi zero
            // FIXME: Show spectrum only for debug purposes                 
            //std::cout << E[i] << " " << *it2 << std::endl;    
            //i++;                                       
          }
          spectra[*it] = Funk::Funk(new Funk::FunkInterp("E", E, dN_dE, "log"));
        }
        else
        {
          // std::cout << finalState << "...was not calculated!" << std::endl;
          spectra[*it] = Funk::zero("E");
        }
      }
    }         

    // Function requesting and returning gamma ray spectra from cascade decays.
    void cascadeMC_gammaSpectra(std::map<std::string, Funk::Funk> &spectra)
    {
      // std::cout << "cascadeMC_gammaSpectra" << std::endl;        
      using namespace Pipes::cascadeMC_gammaSpectra;
      cascadeMC_fetchSpectra(spectra, "gamma", *Dep::GA_missingFinalStates,
          *Dep::cascadeMC_FinalStates, *Dep::cascadeMC_Histograms,
          *Dep::cascadeMC_EventCount);
    }    


    void cascadeMC_PrintResult(bool &dummy)
    {
      dummy=true;
      using namespace Pipes::cascadeMC_PrintResult; 
      logger() << "************************" << std::endl;     
      logger() << "Cascade decay results:" << std::endl;  
      logger() << "------------------------" << std::endl;     
      std::map<std::string, std::map<std::string,SimpleHist> >
        cascadeMC_HistList = *Dep::cascadeMC_Histograms;

      for(std::map<std::string, std::map<std::string,SimpleHist> >::iterator 
          it = cascadeMC_HistList.begin();
          it != cascadeMC_HistList.end(); ++it )
      {
        logger() << "Initial state: " << (it->first) << ":" << std::endl;
        int nEvents = (*Dep::cascadeMC_EventCount).at(it->first);
        logger() << "Number of events: " << nEvents << std::endl;
        for(std::map<std::string,SimpleHist>::iterator 
            it2 = (it->second).begin(); it2 != (it->second).end(); ++it2 )
        {
          logger() << (it2->first) << ": ";
          //(it2->second).divideByBinSize();
          (it2->second).multiply(1.0/nEvents);
          for(int i=0;i<50;i++)
          {
            logger() << (it2->second).binVals[i] << "  ";
          }
          logger() << std::endl;
        }
        logger() << "------------------------" << std::endl;    
      }
      logger() << "************************" << std::endl;
    }

    /*
    // Unit test for decay chains
    void cascadeMC_UnitTest(bool &dummy)
    {
      dummy=true;
      using namespace Pipes::cascadeMC_UnitTest;            
      using namespace DecayChain;    
      using std::ios;
      logger() << std::endl << "Running cascadeMC_UnitTest" 
        << std::endl << std::endl;
      DecayTable dt(*Dep::cascadeMC_test_TH_ProcessCatalog,
          *Dep::SimYieldTable);
      dt.printTable();
      ChainParticle testChain(vec3(0), &dt, "test8");
      testChain.generateDecayChainMC(-1,-1);       
      testChain.printChain();
      std::ofstream out;
      out.open("./cascadMC_testOutput.dat", ios::out);
      for(int i=0; i< 100000; i++)
      {
        double m0_11 = sqrt(2*dot((*testChain[0]).p_Lab(),
              (*(*testChain[1])[1]).p_Lab()));               
        double m00_110 = sqrt(2*dot((*(*testChain[0])[0]).p_Lab(),
              (*(*(*testChain[1])[1])[0]).p_Lab()));   
        out << m0_11 << "   " << m00_110 << std::endl;
        testChain.reDrawAngles();
      }
      logger() << std::endl 
        << "Output data written to ./cascadMC_testOutput.dat" 
        << std::endl << std::endl;
      out.close();
    }

    // Process catalog for testing purposes
    void cascadeMC_test_TH_ProcessCatalog(
        DarkBit::TH_ProcessCatalog &result)
    {
      using namespace Pipes::cascadeMC_test_TH_ProcessCatalog;

      // Instantiate new ProcessCatalog
      TH_ProcessCatalog catalog;      

      // Dummy particles for testing the cascade decay code
      TH_ParticleProperty test1Property(10, 0);
      TH_ParticleProperty test2Property(5, 0);
      TH_ParticleProperty test3Property(4, 0);
      TH_ParticleProperty test4Property(1, 0);
      TH_ParticleProperty test5Property(1, 0);
      TH_ParticleProperty test6Property(0, 0);   
      TH_ParticleProperty test7Property(1e-7, 0);           
      TH_ParticleProperty test8Property(10, 0);                 
      TH_ParticleProperty test9Property(7, 0);     

      catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("test1", test1Property));
      catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("test2", test2Property));
      catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("test3", test3Property));
      catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("test4", test4Property));
      catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("test5", test5Property));
      catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("test6", test6Property));
      catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("test7", test7Property));
      catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("test8", test8Property));
      catalog.particleProperties.insert(std::pair<std::string, TH_ParticleProperty> ("test9", test9Property));

      // test1 decays       
      Funk::Funk test1_23width = Funk::one();
      Funk::Funk test1_24width = 2*Funk::one();
      Funk::Funk test1_456width = 3*Funk::one();
      std::vector<std::string> finalStates_1_23;
      std::vector<std::string> finalStates_1_24;
      std::vector<std::string> finalStates_1_456;
      TH_Process test1_decay("test1");             
      finalStates_1_23.push_back("test2");              
      finalStates_1_23.push_back("test3");             
      test1_decay.genRateTotal = (test1_23width->bind()->eval() 
          + test1_24width->bind()->eval() 
          + test1_456width->bind()->eval())*2*Funk::one();
      TH_Channel channel_1_23(finalStates_1_23, test1_23width);   
      test1_decay.channelList.push_back(channel_1_23);
      finalStates_1_24.push_back("test2");              
      finalStates_1_24.push_back("test4");
      TH_Channel channel_1_24(finalStates_1_24, test1_24width);     
      test1_decay.channelList.push_back(channel_1_24);
      finalStates_1_456.push_back("test4");              
      finalStates_1_456.push_back("test5");      
      finalStates_1_456.push_back("test6");            
      TH_Channel channel_1_456(finalStates_1_456, test1_456width); 
      test1_decay.channelList.push_back(channel_1_456);
      catalog.processList.push_back(test1_decay);

      // test2 decays 
      Funk::Funk test2_56width = 0.5*Funk::one();
      std::vector<std::string> finalStates_2_56; 
      TH_Process test2_decay("test2");     
      finalStates_2_56.push_back("test5");              
      finalStates_2_56.push_back("test6");
      test2_decay.genRateTotal = test2_56width->bind()->eval()*Funk::one();
      TH_Channel channel_2_56(finalStates_2_56, test2_56width);
      test2_decay.channelList.push_back(channel_2_56);
      catalog.processList.push_back(test2_decay);        

      // test7 decays 
      Funk::Funk test7_66width = Funk::one();   
      std::vector<std::string> finalStates_7_66;
      TH_Process test7_decay("test7");     
      finalStates_7_66.push_back("test6");              
      finalStates_7_66.push_back("test6");
      test7_decay.genRateTotal = test7_66width->bind()->eval()*Funk::one();
      TH_Channel channel_7_66(finalStates_7_66, test7_66width);
      test7_decay.channelList.push_back(channel_7_66);
      catalog.processList.push_back(test7_decay);        

      // test8 decays 
      Funk::Funk test8_79width = Funk::one();   
      std::vector<std::string> finalStates_8_79;
      TH_Process test8_decay("test8");     
      finalStates_8_79.push_back("test7");              
      finalStates_8_79.push_back("test9");
      test8_decay.genRateTotal = test8_79width->bind()->eval()*Funk::one();
      TH_Channel channel_8_79(finalStates_8_79, test8_79width);
      test8_decay.channelList.push_back(channel_8_79);
      catalog.processList.push_back(test8_decay);        

      // test9 decays      
      Funk::Funk test9_47width = Funk::one();
      std::vector<std::string> finalStates_9_47;           
      TH_Process test9_decay("test9");     
      finalStates_9_47.push_back("test4");              
      finalStates_9_47.push_back("test7");
      test9_decay.genRateTotal = test9_47width->bind()->eval()*Funk::one();
      TH_Channel channel_9_47(finalStates_9_47, test9_47width);
      test9_decay.channelList.push_back(channel_9_47);
      catalog.processList.push_back(test9_decay);

      // Return the finished process catalog
      result = catalog;
    }
    */
  } 
}
