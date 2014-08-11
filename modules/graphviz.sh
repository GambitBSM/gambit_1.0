#!/usr/bin/env bash
# Christoph Weniger, 9 July 2013
# Pat Scott, Aug 8 2014
# (requires graphviz)

# Hack to remove disconnected vertices (on debian based machines "delete"
# seems to break gvpr)
for i in {1..200}
do
  gvpr -c 'N[$.degree==0]{delete(0,$);}' $1 > $1.temp
  mv $1.temp $1
done

# Make plot
dot $1 -Tps > ${1%.*}.ps
