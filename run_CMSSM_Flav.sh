#!/bin/bash
#
#SBATCH -N 50                              # Number of nodes.
#SBATCH --ntasks-per-node 24               # Number of MPI processes per node.
#SBATCH -c 1                               # Number of cores per MPI process.
#SBATCH -t 1-00:00                         # Runtime in D-HH:MM
#SBATCH -p exclusive                       # Partition to submit to
#SBATCH -A gambitv1                        # Account to charge
#SBATCH --signal=SIGUSR1@900               # Signal and time before walltime to send
#SBATCH -o stdout/gambit.out          # File to which STDOUT will be written
#SBATCH -e stderr/gambit.err          # File to which STDERR will be written
#SBATCH --mail-type=ALL                    # Type of email notification- BEGIN,END,FAIL,ALL
#SBATCH --mail-user=mchrzasz@cern.ch

module load plgrid/tools/python/2.7.9 plgrid/tools/cmake/3.3.2 plgrid/libs/boost/1.58.0 plgrid/libs/gsl/1.16 plgrid/libs/hdf5/1.8.16 plgrid/tools/intel/16.0.1 plgrid/libs/mkl/11.3.3
export OMP_NUM_THREADS=$SLURM_CPUS_PER_TASK

mpiexec  ./gambit -f CMSSM_Flav_Only.yaml
