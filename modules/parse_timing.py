#!/usr/bin/env python
"""
Simple script for extracting and sorting timing information from dependency
resolver log files.  Requires that the log_runtime = true in the yaml file.

Christoph Weniger <c.weniger@uva.nl> Jul 2015
"""

import sys

try:
    filename = sys.argv[1]
except IndexError:
    print "Usage: parse_timing.py LOGFILE [croptime]"
    quit()

try:
    ct = float(sys.argv[2])
except IndexError:
    ct = 0.001

def getTimes(log):
    d = {}
    capability = ''
    time = 0
    for line in log:
        if line[:7] == "Runtime":
            time = float(line[43:])
        if line[:7] == "Calling":
            capability = line.split()[1]
            if capability not in d.keys():
                d[capability] = []
            d[capability].append(time)
    return d

# Import times
with open('depres.log', 'r') as log:
    d = getTimes(log)

# Only last times

d = [[key, d[key][-1]] for key in d.keys()]
d.sort(key=lambda x: -x[1])
for e in d:
    if e[1] > ct:
        print e
print "(cropping list at %.1f ms)"%(ct*1000)
