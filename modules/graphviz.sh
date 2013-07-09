#!/usr/bin/env bash
# Christoph Weniger, 9 July 2013
# (requires graphviz)

# Hack to remove disconnected vertices (on debian based machines "delete"
# seems to break gvpr)
for i in {1..200}
do
  gvpr -c 'N[$.degree==0]{delete(0,$);}' graph.gv > graph.gv.temp
  mv graph.gv.temp graph.gv
done

# Make plot
dot graph.gv -Tps > graph.ps
