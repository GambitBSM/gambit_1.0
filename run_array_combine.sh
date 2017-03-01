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

# Construct list of input files
STEP=$(( (${MAX}+1-${MIN})/${NJOBS} ))
START=$(( ${MIN} + ${ID}*${STEP} ))
END=$(( ${START} + ${STEP} - 1 ))
FILES=$(echo $(for (( i=${START} ; i<=${END} ; i++ )); do echo "${IN_NAME_BASE}_${i}"; done))

echo
echo "${PREFIX} : Will combine the following files: ${FILES}"
echo

# Run combine_hdf5.py
python ${COMBINE_HDF5_PATH} ${OUT_NAME_BASE}_${ID} /${MODEL} ${FILES}

echo 
echo "${PREFIX} : Done"
echo

