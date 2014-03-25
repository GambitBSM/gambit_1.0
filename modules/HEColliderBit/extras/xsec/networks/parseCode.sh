#!/bin/sh
for file in `ls *cxx`
do
    newfilename=`echo $file |  sed 's/NNfunction-/NNfunction_/g'`
    echo $newfilename
    cat $file | sed 's/NNfunction-/NNfunction_/g' > $newfilename
    rm $file
done

for file in `ls *h`
do
    newfilename=`echo $file |  sed 's/NNfunction-/NNfunction_/g'`
    echo $newfilename
    cat $file | sed 's/NNfunction-/NNfunction_/g' > $newfilename
    rm $file
done