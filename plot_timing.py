#!/usr/bin/env python

"""Test plotting of the spartan_multinest_hdf5.yaml results"""

#import numpy as np
import h5py
import numpy as np
from scipy.stats import mode
import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt
import sys

def usage():
   print ("\nusage: python plot_timing.py <path-to-hdf5-file> <group-containing-datasets> [output-filename]\n"
          "\n"
          "Plots basic timing data for a gambit run\n. Note; not optimised for extremely large datasets, could run out of memory.")
   quit()  
 
if(  len(sys.argv)!=3
 and len(sys.argv)!=4 ): usage()

filename = sys.argv[1]
groupname = sys.argv[2]
outname = "timing.png" 
if len(sys.argv)>3: outname = sys.argv[3]

conv = 1e-9 # timing data is in nanoseconds, convert to seconds

print "Opening file {0}...".format(filename)
f = h5py.File(filename,'r')
print "Opening group {0}...".format(groupname)
group = f[groupname]

# Basic timing groups

interloop         =          group["Runtime(ns) interloop"]
interloop_isvalid = np.array(group["Runtime(ns) interloop_isvalid"],dtype=np.bool)
intraloop         =          group["Runtime(ns) intraloop"]
intraloop_isvalid = np.array(group["Runtime(ns) intraloop_isvalid"],dtype=np.bool)
totalloop         =          group["Runtime(ns) totalloop"]
totalloop_isvalid = np.array(group["Runtime(ns) totalloop_isvalid"],dtype=np.bool)
loglike           =          group["LogLike"]
loglike_isvalid   = np.array(group["LogLike_isvalid"],dtype=np.bool)

# Should be timing data for EVERY point, check this.
# Use unitCube parameters to check against, should have these for every point attempted
unitp0           =          group["unitCubeParameters[0]"]
unitp0_isvalid   = np.array(group["unitCubeParameters[0]_isvalid"],dtype=np.bool)

if(np.sum(interloop_isvalid) != np.sum(unitp0_isvalid)):
   print "Warning! Number of timing (interloop) dataset entries ({0}) is inconsistent with number of parameter dataset entries ({1})!".format(np.sum(interloop_isvalid),np.sum(unitp0_isvalid))
if(np.sum(intraloop_isvalid) != np.sum(unitp0_isvalid)):
   print "Warning! Number of timing (intraloop) dataset entries ({0}) is inconsistent with number of parameter dataset entries ({1})!".format(np.sum(intraloop_isvalid),np.sum(unitp0_isvalid))
if(np.sum(totalloop_isvalid) != np.sum(unitp0_isvalid)):
   print "Warning! Number of timing (totalloop) dataset entries ({0}) is inconsistent with number of parameter dataset entries ({1})!".format(np.sum(totalloop_isvalid),np.sum(unitp0_isvalid))

mask = intraloop_isvalid & interloop_isvalid & totalloop_isvalid

# Compute basic stats for these quantites

def getstats(data,name):
   return u"{0:8.2g} ({1:8.2g}) {2} {3:8.2g} s ; [{4:8.2g}, {5:8.2g}] s -- {6}".format(conv*np.mean(data),conv*mode(data)[0][0],pm,conv*np.std(data),conv*np.min(data),conv*np.max(data),name)

# Mean and standard deviation
pm = u"\u00B1"
print
print u"Mean (mode) {0} standard deviation [min,max] of timing variables:".format(pm)
print "------------------------------------------------"
print getstats(interloop[mask], "Inter-loop time")
print getstats(intraloop[mask], "Likelihood evaluation time")
print getstats(totalloop[mask], "Total time per iteration")

# Now do it for all functors
# Compile list:
functor_name = []
functor_timing_data = []
functor_timing_data_isvalid = []
strstart = "Runtime(ns) for #"
for itemname in group: 
   item = group[itemname]
   if isinstance(item,h5py.Dataset):
      if itemname.startswith(strstart) and not itemname.endswith("_isvalid"):
         functor_name += [itemname[len(strstart):]]
         functor_timing_data         += [itemname]
         functor_timing_data_isvalid += [itemname+"_isvalid"]

# Print data
print "Functors:"
for name, dataname, dataname_isvalid in zip(functor_name, functor_timing_data, functor_timing_data_isvalid):
   data =          group[dataname]
   mask = np.array(group[dataname_isvalid],dtype=np.bool)
   print getstats(data[mask], name)

print
quit()

#fig = plt.figure(figsize=(8,6))
#ax = fig.add_subplot(111)
#fig.savefig()


