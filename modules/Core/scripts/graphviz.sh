#!/usr/bin/env bash
# Christoph Weniger, 9 July 2013
# Pat Scott, Aug 8 2014
# (requires graphviz)

# Remove disconnected vertices from active functor graph.
if [ $2 = "no-loners" ]; then
  for i in {1..200}
  do
    gvpr -c 'N[$.degree==0]{delete(0,$);}' $1 > $1.temp
    mv $1.temp $1
  done
fi

# Make plot
filename_in=${1##*/}
filename_out=${filename_in%.*}.ps
dot $1 -Tps > $filename_out
echo "Created "$filename_out" in current directory."

