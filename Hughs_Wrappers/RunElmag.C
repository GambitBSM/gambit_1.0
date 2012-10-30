// Custom Headers
#include <ElMag.h>
//#include <OutputUtils.hpp>

// STL Headers
#include <iostream>
#include <utility>
#include <sstream>

// ROOT Headers
#include <TApplication.h>
#include <TCanvas.h>
#include <TFile.h>

//MPI Headers
#include <mpi.h>

//using namespace Utilities;

int main(int argc, char * argv[]){
	
	//TApplication app("app", &argc, argv);
	
	Elmag elmag(81, 1.e6, 2.e13);
	// variables for MPI execution
	int id(0), numProcs(1);
	elmag.Function<tags::Init>()(id, numProcs);
	
	elmag.SetUserVariable<tags::JetOpeningAngle>(6.0);
	
	int nBFields(10); // For 10 values of the magnetic field strength...
	int nRedshifts(10); // ... and 10 values of the source redshift...
	int nInjected(10000); // ... simulate 10000 cascades...
	int primaryType(0); // ... initiated by a gamma-ray primary.
	
	// Setup limits of resdhift and magnetic field grids.
	std::pair<double, double> redshiftLimits(0.1, 0.6);
	double redshiftRange(redshiftLimits.second - redshiftLimits.first);
	double redshiftStep(redshiftRange/static_cast<double>(nRedshifts-1));
	
	std::pair<double, double> bFieldLimits(1.0e-17, 1e-15);
	double bFieldRange(bFieldLimits.second - bFieldLimits.first);
	double bFieldStep(bFieldRange/static_cast<double>(nBFields - 1));
	
	// working variables for initial particle properties.
	double primaryEnergy;
	double primaryWeight;
	
	
	// Initialize MPI
	MPI::Init(argc, argv);
	
	int mpiSize = MPI::COMM_WORLD.Get_size();
	int mpiRank = MPI::COMM_WORLD.Get_rank();
	
	TFile * outFile(NULL);
	
	if(mpiRank != 0){
		std::stringstream fileName;
		fileName << "/raid/hdick/analysis/Elmag/results/elmagResults_" << mpiRank << ".root";
		
		// Open ROOT File to save output.
		outFile = new TFile(fileName.str().c_str(), "RECREATE");
	}
	
	double parameters[2];
	MPI::Status status;
	
	if(mpiRank == 0){ // MASTER
		
		int slaveRank(1);

		bool full(false);
		bool completed(false);
		
		for(int iBField = 0; iBField < nBFields; iBField++){
			
			parameters[0] = bFieldLimits.first + iBField*bFieldStep;
			
			for(int iRedshift = 0; iRedshift < nRedshifts; iRedshift++){
				
				parameters[1] = redshiftLimits.first + iRedshift*redshiftStep;
				
				// if we have exhausted the processes pool, wait for acknowledgement of job completion
				if(full || slaveRank >= mpiSize){
					MPI::COMM_WORLD.Recv(&completed, 1, MPI::BOOL, MPI::ANY_SOURCE, 2, status);
					std::cout << /*RedText() <<*/ "Master Process " << mpiRank << " recived completion notice from Slave process " << status.Get_source() << /*RestoreText() <<*/ std::endl;
					// send parameter values to slave processes
					MPI::COMM_WORLD.Send(&parameters, 2, MPI::DOUBLE, status.Get_source(), 1);
					std::cout << /*RedText() <<*/ "Master Process " << mpiRank << " sent (" << parameters[0] << "," << parameters[1] << ") to Slave process " << status.Get_source() << /*RestoreText() <<*/ std::endl;
				}
				else{
					// send parameter values to slave processes until we have exhausted the pool
					MPI::COMM_WORLD.Send(&parameters, 2, MPI::DOUBLE, slaveRank++, 1);
					std::cout << /*RedText() <<*/ "Master Process " << mpiRank << " sent (" << parameters[0] << "," << parameters[1] << ") to Slave process " << (slaveRank-1) << /*RestoreText() <<*/ std::endl;
				}
			}
		}
		std::cout << /*CyanText() <<*/ "All Jobs Completed!" << /*RestoreText() <<*/ std::endl;
		// instruct slave processes to stop using negative parameter values
		parameters[0] = -1.0;
		parameters[1] = -1.0;
		while(slaveRank > 1){
			MPI::COMM_WORLD.Recv(&completed, 1, MPI::BOOL, MPI::ANY_SOURCE, 2, status);
			std::cout << /*RedText() <<*/ "Master Process " << mpiRank << " received completion notice from Slave process " << status.Get_source() << /*RestoreText() <<*/ std::endl;
			// send parameter values to slave processes
			MPI::COMM_WORLD.Send(&parameters, 2, MPI::DOUBLE, status.Get_source(), 1);
			std::cout << /*RedText() <<*/ "Master Process " << mpiRank << " sent (" << parameters[0] << "," << parameters[1] << ") to Slave process " << status.Get_source() << /*RestoreText() <<*/ std::endl;
			slaveRank--;
		}
		
	}
	else{ //SLAVE
		
		while(true){
			
			// receive parameters
			MPI::COMM_WORLD.Recv(&parameters, 2, MPI::DOUBLE, 0, 1,status);
			std::cout << /*GreenText() <<*/ "Slave Process " << mpiRank << " received (" << parameters[0] << "," << parameters[1] << ") from Master (" << status.Get_source() << ")" << /*RestoreText() <<*/ std::endl;
			
			if(parameters[0] < 0.0){
				std::cout << /*CyanText() <<*/ "Slave Process " << mpiRank << ". Time to stop then!" << /*RestoreText() <<*/ std::endl;
				break;
			}
			
			// set the source redshift so that results can be labelled.
			elmag.SetRedshift(parameters[1]);
			elmag.SetMagField(parameters[0]);
			
			std::cout << /*YellowText() <<*/ "Process " << mpiRank << "(of " << mpiSize << "): " << /*RestoreText() <<*/ ". Simulating " << /*GreenText() <<*/ nInjected << /*RestoreText() <<*/ " cascades, beginning at redshift " << /*CyanText() <<*/ "z = " << parameters[1] << /*RestoreText() <<*/ " and assuming a constant magnetic field strength "<< /*MagentaText() <<*/ "B = " << parameters[0] << /*RestoreText() <<*/ std::endl;
			
			for(int iCascade = 0; iCascade < nInjected; iCascade++){
			 //PrimaryPhoton(primaryEnergy, primaryWeight);
			 elmag.Function<tags::GenInitialParticle>()(primaryEnergy, primaryWeight);
			 elmag.Function<tags::Cascade>()(primaryType, primaryEnergy, primaryWeight, parameters[1]);
			 if(id == 0 && iCascade%(nInjected/10) == 0) std::cout << /*YellowText() <<*/ "Process " << mpiRank << "(of " << mpiSize << "): " << /*RestoreText() <<*/ iCascade << " cascades processed. " <<  elmag.GetResultsTree().GetEntries() << " photons stored" << std::endl;
			 }

			outFile->cd();
			elmag.GetResultsTree().Write();
			
			std::cout << /*YellowText() <<*/ "Slave Process " << mpiRank << " about to send completed to Master." << /*RestoreText() <<*/ std::endl;
			bool complete(true);
			MPI::COMM_WORLD.Send(&complete, 1, MPI::BOOL, 0, 2);
			std::cout << /*GreenText() <<*/ "Slave Process " << mpiRank << " sent completed to Master." << /*RestoreText() <<*/ std::endl;
		}
	}
	
	if(mpiRank != 0){
		outFile->Close();
		delete outFile;
	}
	
	MPI::Finalize();
	
	std::cout << "Done" << std::endl;
	
	//app.Run();
	
	return 0;
}

/** Generate an input photon to start the cascade.
 */
void PrimaryPhoton(double & energy, double & weight){
	
}