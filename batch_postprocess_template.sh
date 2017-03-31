#!/bin/bash
#
#SBATCH -N 1                               # Number of nodes
#SBATCH --ntasks-per-node 1                # Number of MPI processes per node.
#SBATCH -c 1                               # Number of cores per MPI process.
#SBATCH -t 0-00:10                         # Runtime in D-HH:MM
#SBATCH -p exclusive                       # Partition to submit to
#SBATCH -A gambitv4                        # Account to charge
####SBATCH --signal=SIGUSR1@600               # Signal and time before walltime to send
#SBATCH -o stdout/postprocess_job_<RANK>.out # File to which STDOUT will be written
#SBATCH -e stderr/postprocess_job_<RANK>.err # File to which STDERR will be written
###SBATCH --mail-type=ALL                    # Type of email notification- BEGIN,END,FAIL,ALL
###SBATCH --mail-user=ben.farmer@gmail.com # Email to which notifications will be sent

module load plgrid/tools/python/2.7.9 plgrid/tools/cmake/3.3.2 plgrid/libs/boost/1.58.0 plgrid/libs/gsl/1.16 plgrid/libs/hdf5/1.8.16 plgrid/tools/intel/16.0.1 plgrid/libs/mkl/11.3.3
export OMP_NUM_THREADS=$SLURM_CPUS_PER_TASK

cd /net/archive/groups/plgggambit/ben/repos/gambit
ulimit -s unlimited

# NormalDist test
#RANK=<RANK> SIZE=<SIZE> mpiexec -outfile-pattern=stdout/gambit_postprocess_<RANK>.out -errfile-pattern=stderr/gambit_postprocess_<RANK>.err ./gambit -f scratch/postprocessor_test_<RANK>.yaml

# CMSSM test
RANK=<RANK> SIZE=<SIZE> mpiexec -outfile-pattern=stdout/gambit_postprocess_<RANK>.out -errfile-pattern=stderr/gambit_postprocess_<RANK>.err ./gambit -f scratch/postprocessor_test_CMSSM_<RANK>.yaml

