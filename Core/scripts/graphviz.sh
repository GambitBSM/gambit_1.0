#!/usr/bin/env bash
# Christoph Weniger, 9 July 2013
# Pat Scott, Aug 8 2014
# (requires graphviz)

# Remove disconnected vertices from active functor graph.
if [ "$2" = "no-loners" ]; then
  for i in {1..200}
  do
    gvpr -c 'N[$.degree==0]{delete(0,$);}' $1 > $1.temp
    mv $1.temp $1
  done
fi

# Make plot
filename_in=${1##*/}
filename_out1=${filename_in%.*}.ps
filename_out2=${filename_in%.*}.svg
dot $1 -Tps > $filename_out1
dot $1 -Tsvg > $filename_out2
echo "Created "$filename_out1" and "$filename_out2" in current directory."

