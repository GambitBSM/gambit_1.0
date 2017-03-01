#!/bin/bash 
# 
#SBATCH -a 0-99                            # Array job range
#SBATCH -t 0-05:00                         # Runtime in D-HH:MM 
#SBATCH -p plgrid                          # Partition to submit to 
#SBATCH -A gambitv4                        # Account to charge
#SBATCH -o combine.out_%a                  # File to which STDOUT will be written 
#SBATCH -e combine.err_%a                  # File to which STDERR will be written 
#SBATCH --mem 120000                       # Amount of memory required
#SBATCH --mail-type=ALL                    # Type of email notification- BEGIN,END,FAIL,ALL 
#SBATCH --mail-user=anders.kvellestad@nordita.org # Email to which notifications will be sent

module load plgrid/tools/python/2.7.9 plgrid/tools/cmake/3.3.2 plgrid/libs/boost/1.58.0 plgrid/libs/gsl/1.16 plgrid/libs/hdf5/1.8.16 plgrid/tools/intel/16.0.1 plgrid/libs/mkl/11.3.3


model=MSSM7
path_to_combine_hdf5=../../Printers/scripts/combine_hdf5.py

# Combination step 1
in_name_base=./samples/MSSM7.hdf5_temp
out_name_base=./samples/MSSM7.hdf5_temp_step1
file_n_min=0
file_n_max=2399
./run_array_combine.sh ${path_to_combine_hdf5} ${out_name_base} ${model} ${in_name_base} ${file_n_min} ${file_n_max}


# Combination step 2
# in_name_base=./samples/MSSM7.hdf5_temp_step1
# out_name_base=./samples/MSSM7.hdf5_temp_step2
# file_n_min=0
# file_n_max=99
# ./run_array_combine.sh ${path_to_combine_hdf5} ${out_name_base} ${model} ${in_name_base} ${file_n_min} ${file_n_max}


# ...Add more steps as needed. Remeber to update input/output file names, min/max file numbers and the array job range at the top. 
# Also, comment out previous combination steps!


