#!/bin/bash 

# Command line arguments
COMBINE_HDF5_PATH=$1
OUT_NAME_BASE=$2            
MODEL=$3
IN_NAME_BASE=$4
MIN=$5
MAX=$6

# Get array job info
ID=$SLURM_ARRAY_TASK_ID
NJOBS=$(( ${SLURM_ARRAY_TASK_MAX}-${SLURM_ARRAY_TASK_MIN}+1 ))

# Construct prefix for echo statements
PREFIX="run_array_combine ${ID} :"

# Check that the number of hdf5 files is divisble by the number of jobs.
NFILES=$(( ${MAX}-${MIN}+1 ))
if [ $(( ${NFILES}%${NJOBS} )) != 0 ] ;
then
    echo "${PREFIX} Error: The number of hdf5 files (${NFILES}) is not divisible by the number of array jobs (${NJOBS})."
    exit 1
fi

# Construct list of input files
STEP=$(( ${NFILES}/${NJOBS} ))
START=$(( ${MIN} + ${ID}*${STEP} ))
END=$(( ${START} + ${STEP} - 1 ))
FILES=$(echo $(for (( i=${START} ; i<=${END} ; i++ )); do echo "${IN_NAME_BASE}_${i}"; done))

echo
echo "${PREFIX} Will combine the following files: ${FILES}"
echo

# Run combine_hdf5.py
python ${COMBINE_HDF5_PATH} ${OUT_NAME_BASE}_${ID} /${MODEL} ${FILES}

echo 
echo "${PREFIX} Done"
echo

