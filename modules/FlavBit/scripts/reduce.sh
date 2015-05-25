#!/bin/bash

cat obslist.txt | awk '{print "names_obs[" $1 "]=\"" $2 "\""}' >names.txt
