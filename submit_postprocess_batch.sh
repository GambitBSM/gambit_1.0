# Replace <RANK> and <SIZE> in the yaml and job submission files with the appropriate variable,
# then submit all jobs in batch

size=10
N=$((size-1))
for i in $(seq 0 $N)
do
   #sed -e "s/<RANK>/${i}/g" postprocessor_test_template.yaml > scratch/postprocessor_test_${i}.yaml
   sed -e "s/<RANK>/${i}/g" postprocessor_test_CMSSM_template.yaml > scratch/postprocessor_test_CMSSM_${i}.yaml
   sed -e "s/<RANK>/${i}/g" -e "s/<SIZE>/${size}/g" batch_postprocess_template.sh > scratch/batch_postprocess_${i}.sh
   sbatch scratch/batch_postprocess_${i}.sh
done

echo "Jobs submitted! To stop them all gracefully, run"
echo "for i in {0..$N}; do scancel -n batch_postprocess_$i.sh -s USR1; done"
