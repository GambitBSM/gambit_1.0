//  GAMBIT: Global and Modular BSM Inference Tool
//  *********************************************
///  \file
///
///  ScannerBit interface to Multinest 3.9
///
///  This interface is based on crapsample.cpp,
///  including random comments from Greg.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
//
///  \author Ben Farmer
///          (ben.farmer@gmail.com)
///  \date 2013 October 2013
///
///  *********************************************

#include <vector>
#include <string>
#include <cmath>
#include <iostream>
#include <fstream>
#include <map>
#include <sstream>

#include "gambit/ScannerBit/scanner_plugin.hpp"
#include "gambit/ScannerBit/scanners/multinest/multinest.hpp"
#include "gambit/Utils/yaml_options.hpp"
//#include "gambit/Printers/basebaseprinter.hpp"

#include <iomanip>  // For debugging only

namespace Gambit {   
   namespace MultiNest {
      /// Global pointer to loglikelihood wrapper object, for use in the MultiNest callback functions
      LogLikeWrapper *global_loglike_object;
   }
}

/// Typedef for the ScannerBit pointer to the external loglikelihood function
typedef Gambit::Scanner::scan_ptr<double (const std::vector<double>&)> scanPtr;


/// =================================================
/// Interface to ScannerBit
/// =================================================

scanner_plugin(MultiNest, version(0, 0, 0, bens_version))
{
   reqd_libraries();
   plugin_constructor
   {
      std::cout << "Firing up MultiNest scanner plugin..." << std::endl;
   }


   int plugin_main (void)
   {
      //std::string output_file = get_inifile_value<std::string>("output_file", "default_output");

      // Retrieve the external likelihood calculator
      scanPtr LogLike = get_purpose(get_inifile_value<std::string>("like"));

      int ma = get_dimension();

      // set the MultiNest sampling parameters 
      // NOTE! There is now a flag (called 'outfile') to prevent MultiNest from writing any output files, so once the printer system is working we can safely turn this output off and not be left with all that junk floating around. UPDATE: Now done.
      
      int IS (	        get_inifile_value<int>("IS", 1) );		// do Nested Importance Sampling?
      int mmodal ( 	get_inifile_value<int>("mmodal", 0) );		// do mode separation?
      int ceff ( 	get_inifile_value<int>("ceff", 0) );		// run in constant efficiency mode?
      int nlive ( 	get_inifile_value<int>("nlive", 1000) );	// number of live points
      double efr ( 	get_inifile_value<double>("efr", 0.8) );	// set the required efficiency
      double tol ( 	get_inifile_value<double>("tol", 0.5) );	// tol, defines the stopping criteria
      int ndims ( 	get_inifile_value<int>("ndims", ma) );		// dimensionality (no. of free parameters)
      int nPar ( 	get_inifile_value<int>("nPar", ma+2) );		// total no. of parameters including free & derived parameters. The "plus 2" is for the only "derived" parameters we deal with in this interface, namely the ID code for each point and the thread number
      int nClsPar ( 	get_inifile_value<int>("nClsPar", ma) );	// no. of parameters to do mode separation on
      int updInt ( 	get_inifile_value<int>("updInt", 1000) );	// after how many iterations feedback is required & the output files should be updated
      								// note:ated & dumper routine is called after every updInt*10 iterations
      double Ztol (	get_inifile_value<double>("Ztol", -1E90) );	// all the modes with logZ < Ztol are ignored
      int maxModes (	get_inifile_value<int>("maxModes", 100) );	// expected max no. of modes (used only for memory allocation)

      // Need to do more work if we want to enable the periodic boundary conditions.
      //int pWrap[ndims]; //cannot declare VLA				// which parameters to have periodic boundary conditions?
      int* pWrap = new int[ndims]; //remember to delete!
      for(int i = 0; i < ndims; i++) pWrap[i] = 0;
         
      std::string root_str ( get_inifile_value<std::string>("root", "chains/") ); // root for output files
      char root[100];
      root_str.copy(root,100,0);  // copy std::string into char array for transport to fortran/

      int seed (	get_inifile_value<int>("seed", -1) );		// random no. generator seed, if < 0 then take the seed from system clock
      int fb (		get_inifile_value<int>("fb", 1) );		// need feedback on standard output?
      int resume (	get_inifile_value<int>("resume", 1) );		// resume from a previous job?
      int outfile (	get_inifile_value<int>("outfile", 0) );		// write output files?
      int initMPI (	get_inifile_value<int>("initMPI", 1) );		// initialize MPI routines?, relevant only if compiling with MPI
      									// set it to F if you want your main program to handle MPI initialization
      double logZero (	get_inifile_value<double>("logZero", -1E90) );	// points with loglike < logZero will be ignored by MultiNest
      int maxiter (	get_inifile_value<int>("maxiter", 0) );		// max no. of iterations, a non-positive value means infinity. MultiNest will terminate if either it 
      									// has done max no. of iterations or convergence criterion (defined through tol) has been satisfied
      void *context = 0;	// not required by MultiNest, any additional information user wants to pass
         
      // Get inifile options for each print stream
      Gambit::Options txt_options   = get_inifile_node("aux_printer_txt_options");
      Gambit::Options stats_options = get_inifile_node("aux_printer_stats_options");
      Gambit::Options live_options  = get_inifile_node("aux_printer_live_options");

      stats_options.setValue("global",1); // Option to set this stream to "global" mode, i.e. it does not operated on a point-by-point basis. Therefore no thread or point number is needed when printing.

      // Initialise auxiliary print streams
      get_printer().new_stream("txt",txt_options);
      get_printer().new_stream("stats",stats_options);            
      get_printer().new_stream("live",live_options);

      // Create the object which interfaces to the MultiNest LogLike callback function
      // Need to give it the loglikelihood function to evaluate, and the function to perform the prior transformation
      // NOTE TO SELF: Can't pull function pointer out of object like that, since it has a 'this' argument so the call signatures won't match. Just pass in wrapping oject instead.
      // NOTE 2: Prior creation now shifted into Models code! Pointer to a prior object must wind up here somehow!
      // WANT TO DO THIS:
      ::Gambit::MultiNest::LogLikeWrapper loglwrapper(LogLike, get_printer(), ndims); //, keys);
      // // BUT FOR NOW CREATE A PLACEHOLDER PRIOR
      // std::vector< ::Gambit::Priors::BasePrior* > subpriors;
      // std::pair<double,double> unit_range(0,1);
      // for( std::vector<std::string>::iterator it=keys.begin(); it!=keys.end(); it++)
      // {
      //   subpriors.push_back( new ::Gambit::Priors::RangePrior1D< ::Gambit::Priors::flatprior >(*it, unit_range) );
      // }
      // ::Gambit::Priors::CompositePrior prior(subpriors);
      // // REPLACE THE ABOVE BY PRIOR CREATED BY PRIOR FACTORY USING INIFILE
      //::Gambit::MultiNest::LogLikeWrapper loglwrapper(LogLike, prior, ndims, keys);

      // Stick a pointer to the wrapper object into "context" so it can be retrieved by the callback functions
      //context = &loglwrapper;
      
      // using global pointer instead: 	
      ::Gambit::MultiNest::global_loglike_object = &loglwrapper;


      //Run MultiNest (supplying callback functions which hook into the interface object, which they know about via the 'context' void pointer)
      std::cout << "Starting MultiNest run..." << std::endl;
      run(IS, mmodal, ceff, nlive, tol, efr, ndims, nPar, nClsPar, maxModes, updInt, Ztol, root, seed, pWrap, fb, resume, outfile, initMPI, logZero, maxiter, ::Gambit::MultiNest::callback_loglike, ::Gambit::MultiNest::callback_dumper, context);
      std::cout << "Multinest run finished!" << std::endl;

      // Do some cleanup or something.
      delete [] pWrap;

      return 0;

   }  // end module_main
} // end plugin


/// =================================================
/// Function definitions
/// =================================================

namespace Gambit {
   
   namespace MultiNest {

      ///@{ Plain-vanilla functions to pass to Multinest for the callback
      // Note: we are using the c interface from cwrapper.f90, so the function
      // signature is a little different than in the multinest examples.
      double callback_loglike(double *Cube, int ndim, int npars, void *context)
      {
         // Call global interface to ScannerBit loglikelihood function
         // Could also pass this object in via context pointer, but that
         // involves some casting and could risk a segfault. 
         return global_loglike_object->LogLike(Cube, ndim, npars);
      }

      void callback_dumper(int nSamples, int nlive, int nPar, double *physLive,
                           double *posterior, double *paramConstr, 
                           double maxLogLike, double logZ, double logZerr, 
                           void *context)
      {
         global_loglike_object->
            dumper(nSamples, nlive, nPar, physLive, posterior, paramConstr, 
                   maxLogLike, logZ, logZerr);
      }
      ///@}      


      /// LogLikeWrapper Constructor
      LogLikeWrapper::LogLikeWrapper(scanPtr loglike, printer_interface& printer, int ndim)
        : boundLogLike(loglike), boundPrinter(printer), my_ndim(ndim)
      { }
   
      /// Main interface function from MultiNest to ScannerBit-supplied loglikelihood function 
      // This is the function that will be passed (inside to Multinest as the 
      // loglike callback routine
      //      
      // Input arguments
      // ndim 		= dimensionality (total number of free parameters) of the problem
      // npars 		= total number of free plus derived parameters
      // context	= void pointer, any additional information
      //
      // Input/Output arguments
      // Cube[npars] 	= on entry has the ndim parameters in unit-hypercube
      //	 	  on exit, the physical parameters plus copy any derived parameters 
      //                  you want to store with the free parameters
      //	 
      // Output arguments
      // lnew 		= loglikelihood
      //
      double LogLikeWrapper::LogLike(double *Cube, int ndim, int npars)
      {
         //convert C style array to C++ vector class
         std::vector<double> unitpars(Cube, Cube + ndim); 
         //std::map<std::string,double> physicalpars;
         double lnew;
         //int i;

         ///TODO: Something broke with these; fix later 
         //if (ndim!=my_ndim) {scan_error().raise(LOCAL_INFO,"ndim!=my_ndim in multinest LogLike function!");}
         //if (ndim!=parameter_keys.size()) {scan_error().raise(LOCAL_INFO,"ndim!=parameter_keys.size() in multinest LogLike function!");}
         
         lnew = (*boundLogLike)(unitpars); 
         //get transformed parameters.
         //physicalpars = boundLogLike->getParameters();
         
         // Write the physical parameters back into Cube for multinest to write to output file (no other purpose)
         // (at this point any extra observables that have been computed could also be added to Cube for transfer to the multinest-controlled output files. Must be sufficiently many slots reserved in Cube for this.
         // Update: Not writing output, so don't bother doing this.

         //for(i = 0; i < ndim; i++)
         //{
         //   Cube[i] = physicalpars[i];
         //}

         Cube[ndim+0] = 0;   // thread ID number ///TODO: need to implement parallel running for printers to do this.
         Cube[ndim+1] = boundLogLike->getPtID(); // point ID number

         // If we want the printer to record anything extra, can send 
         // the data to the usual print function by calling, e.g.:
         //    boundLogLike.printer.print(lnew, "extra_logl", -1)
         // (need to make sure the IDcode doesn't clash with anything coming from the functors)
         // Can also send data to auxiliary printers rather than the main printer. See dumper
         // function for usage of this.

         // Done! (lnew will be used by MultiNest to guide the search)
         return lnew;                  
      }
   
      /// Main interface to MultiNest dumper routine   

      // (Ben: this is just lifted straight from eggbox.cc with no modification. It doesn't actually do anything really.)         
   
      // The dumper routine will be called every updInt*10 iterations
      // MultiNest doesn not need to the user to do anything. User can use the arguments in whichever way he/she wants
      //
      //
      // Arguments:
      //
      // nSamples 						= total number of samples in posterior distribution
      // nlive 						= total number of live points
      // nPar 						= total number of parameters (free + derived)
      // physLive[1][nlive * (nPar + 1)] 			= 2D array containing the last set of live points (physical parameters plus derived parameters) along with their loglikelihood values
      // posterior[1][nSamples * (nPar + 2)] 			= posterior distribution containing nSamples points. Each sample has nPar parameters (physical + derived) along with the their loglike value & posterior probability
      // paramConstr[1][4*nPar]:
      // paramConstr[0][0] to paramConstr[0][nPar - 1] 	= mean values of the parameters
      // paramConstr[0][nPar] to paramConstr[0][2*nPar - 1] 	= standard deviation of the parameters
      // paramConstr[0][nPar*2] to paramConstr[0][3*nPar - 1] = best-fit (maxlike) parameters
      // paramConstr[0][nPar*4] to paramConstr[0][4*nPar - 1] = MAP (maximum-a-posteriori) parameters
      // maxLogLike						= maximum loglikelihood value
      // logZ							= log evidence value
      // logZerr						= error on log evidence value
      // context						void pointer, any additional information
      
      void LogLikeWrapper::dumper(int nSamples, int nlive, int nPar, double *physLive, double *posterior, double *paramConstr, double maxLogLike, double logZ, double logZerr)
      {
          // Should now be able to send things from here to the Gambit printer system

          //boundLogLike.print(*posterior, "posterior");  // Currently accepts a double, and a labelling string
          // Gah, can't do that, that is the full posterior, which multinest recomputes constantly!
          // I just wanted the prior weights, but they don't seem to be here. I guess we will have to recompute them ourselves, it is easy enough I guess.

          // Bah! dumper only runs every updint*10 iterations! No good for printing info about points, need some different system if we want this stuff.
          //boundLogLike.print(maxLogLike, "maxLogLike",-1);
          //boundLogLike.print(logZ, "logZ",-2);
          //boundLogLike.print(logZerr, "logZerr",-3);

          // Access the interface to the printer to send dumper information to auxilliary print stream
          // Might need a flag to specify whether (e.g. for "stats") information is global to scan, i.e. not
          // related to any given model point.
          // Aux stream setup done at beginning of scan

          // Get printers for each auxiliary stream
          printer* stats_stream( boundPrinter.get_stream("stats") );
          printer* txt_stream(   boundPrinter.get_stream("txt")   );
          printer* live_stream(  boundPrinter.get_stream("live")  );

          stats_stream->reset(); // WARNING! (potentially) Deletes the old data
          txt_stream->reset();   // WARNING! (potentially) Deletes the old data
          live_stream->reset();  // WARNING! (potentially) Deletes the old data

          // Ensure the "quantity" IDcode is UNIQUE across all printers! This way fancy printers
          // have the option of ignoring duplicate writes and doing things like combine all the
          // auxiliary streams into a single database. But must be able to assume IDcodes are
          // unique for a given quanity to do this.
          // Negative numbers not used by functors, so those are 'safe' to use here

          //                  Quantity    Label         IDcode	thread	pointID
          // stats file stuff
          // For now, thread set to 0 and pointID set to -1, as not needed. Might change how this works later.
          stats_stream->print(maxLogLike, "maxLogLike", -1,	0,	-1);
          stats_stream->print(logZ,       "logZ",       -2,	0,	-1);
          stats_stream->print(logZerr,    "logZerr",    -3,	0,	-1);
          stats_stream->flush(); // Empty printer buffer

          // txt file stuff
          // Send info for each point to printer one command at a time
          int pointID; // ID number for each point 
          int thread;  // thread number which wrote each point

          // The posterior distribution
          // Note that while this is a 2D fortran array, we will only see it as a 1D array here, so we have to 
          // correctly translate the 2D indices into a single index.
          // Translation is: array[i*n+j]  (i,j)  with n the length of the j dimension.
          // e.g.: postdist[j][i] = (*posterior)[i * nSamples + j]

          //DEBUG: try to read out entire posterior array, see if it makes sense
          //for( int i = 0; i < nSamples; i++ )
          //{
          //  for( int j = 0; j < nPar+2; j++ )
          //  {
          //    std::cout<<std::setw(14)<<std::scientific << posterior[j*nSamples + i];
          //  }
          //  std::cout << std::endl;
          //}
              
          for( int i = 0; i < nSamples; i++ )
          {
             thread  = posterior[(nPar-2)*nSamples + i]; //thread number stored in second last entry of cube
             pointID = posterior[(nPar-1)*nSamples + i]; //pointID stored in last entry of cube
              
             txt_stream->print( posterior[(nPar+0)*nSamples + i], "LogLike",   -4, thread, pointID);
             txt_stream->print( posterior[(nPar+1)*nSamples + i], "Posterior", -5, thread, pointID);
             // Put rest of parameters into a vector for printing all together
             std::vector<double> parameters;
             for( int j = 0; j < nPar-1; j++ )
             {
                 parameters.push_back( posterior[j*nSamples + i] );
             }
             txt_stream->print(parameters, "Parameters", -6, thread, pointID);
          }
          txt_stream->flush(); // Empty the printer buffer

          /// Therefore stick thread/point numbers into print function directly                  
 
          // The last set of live points
          for( int i = 0; i < nlive; i++ )
          {
             thread  = physLive[(nPar-2)*nlive + i]; //thread number stored in second last entry of cube
             pointID = physLive[(nPar-1)*nlive + i]; //pointID stored in last entry of cube
             live_stream->print( physLive[(nPar+0)*nlive + i], "LogLike", -4, thread, pointID);
             // Put rest of parameters into a vector for printing all together
             std::vector<double> parameters;
             for( int j = 0; j < nPar-1; j++ )
             {
                 parameters.push_back( physLive[j*nlive + i] );
             }
             live_stream->print(parameters, "Parameters", -6, thread, pointID);
          }
          live_stream->flush(); 

          // ------Old default stuff below---------
          
      	// convert the 2D Fortran arrays to C++ arrays
      	
      	
      	// the posterior distribution
      	// postdist will have nPar parameters in the first nPar columns & loglike value & the posterior probability in the last two columns
          // Ben: This no longer works since the input types are different from eggbox.cc due to our use of the wrapper in cwrapper.f90. Probably could fix it easily if we really want this stuff for some reason.	
      	//int i, j;
      	
      	//double postdist[nSamples][nPar + 2];
      	//for( i = 0; i < nPar + 2; i++ )
      	//	for( j = 0; j < nSamples; j++ )
      	//		postdist[j][i] = (*posterior)[0][i * nSamples + j];
      		
      	// last set of live points
      	// pLivePts will have nPar parameters in the first nPar columns & loglike value in the last column
      	
      	//double pLivePts[nlive][nPar + 1];
      	//for( i = 0; i < nPar + 1; i++ )
      	//	for( j = 0; j < nlive; j++ )
      	//		pLivePts[j][i] = (*physLive)[0][i * nlive + j];
      }

   } // End Multinest namespace
} // End Gambit namespace


