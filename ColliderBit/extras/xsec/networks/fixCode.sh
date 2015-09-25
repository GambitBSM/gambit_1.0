#! /usr/bin/env bash

for file in NNfunction-*.{cxx,h}; do
    newfile=${file/NNfunction-/NNfunction_}
    echo "$file -> $newfile"
    cat $file | sed -e 's/NNfunction-/NNfunction_/g' > $newfile
done
