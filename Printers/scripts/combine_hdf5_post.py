#!/usr/bin/env python

"""Combine data from several hdf5 files created by HDF5Printer into a single file
   This version is modified to combine data from totally separate scans.
   Therefore, it assumes that there are NO common points, so no point-level combination
   will occur. Each entry will be considered to be independent model points.
"""


import signal
#def sigint_handler(signum, frame):
#    print 'CTRL+C is blocked while the HDF5Printer combine script runs! Signal received, but ignored.'
#signal.signal(signal.SIGINT, sigint_handler)  # disabled for now

import math
import numpy as np
import h5py
import os
import sys
from hdf5tools import *

def usage():
   print ("\n  Usage: python combine_hdf5.py <output file-group> <input file-group 1> <input file-group 2> ...\n"
          "  Attempts to combine the data in a group of hdf5 files produced by HDF5Printer in separate processes during a GAMBIT run.\n"
          "  Each <file-group i> string must have the following format:\n"
          "    /path/to/hdf5/file:/path/to/group\n")
   exit(1) 

class GambitH5group:
   """Helper class to keep track of data in a group in a file"""

   def __init__(self,filegroup):
      """Extract filename and group"""
      self.filename, self.groupname = filegroup.split(":")

   def open(self,access='r'):
      """Open the HDF5 file handle"""
      print " Opening file {0}".format(self.filename)
      self.f = h5py.File(self.filename,access,libver='latest')
      if self.groupname in self.f:
         print "  Opening group {0}".format(self.groupname)
         self.g = self.f[self.groupname]
         # Get lengths of any datasets in the group
         # First get total lengths of the sync datasets
         self.dset_metadata = {}
         self.datasets = set([])
         get_dset_lengths(self.dset_metadata,self.g,self.datasets)
         # Will throw an error if any datasets are found to have an inconsistent length
         self.lengths = check_lengths(self.dset_metadata)
         print "  Dataset lengths: {0}".format(self.lengths)
         print "  Number of datasets: {0}".format(len(self.datasets))
      elif access=='w' or access=='r+':
         # Create group
         print "  Creating group {0}".format(self.groupname)
         self.f.create_group(self.groupname)
         self.g = self.f[self.groupname]
      else:
         raise IOError("Group '{0}' does not exist in file '{1}', and the access modifier is '{2}', meaning we cannot create it".format(self.groupname,self.filename,access))


#====Begin "main"=================================

if len(sys.argv)<3:
      usage()

outfile = GambitH5group(sys.argv[1])
infiles = [GambitH5group(i) for i in sys.argv[2:]]
N = len(infiles)

print " Working directory: ", (os.getcwd())
print " Target (combined output):"
print "   {0}:{1}".format(outfile.filename,outfile.groupname)
print " Data to combine: "
for d in infiles:
   print "   {0}:{1}".format(d.filename,d.groupname)
print " Number of files to combine: {0}".format(N)
print " "
print " Analysing input files..."

# Open all the HDF5 files and check their contents
for f in infiles:
  f.open()

# Open output file for adding combined data
# Throw error if output file already exists
if os.path.isfile(outfile.filename):
   raise IOError("Target output file '{0}' already exists! Please manually delete it before running this script again, if you are sure you don't want it.".format(outfile.filename))
outfile.open("w")

# Get combinated set of all the output datasets, and total output length required
all_datasets = set([])
total_length = 0
for f in infiles:
   all_datasets = all_datasets.union(f.datasets)
   total_length += f.lengths

# Give summary of datasets to be copied
print " Preparing to copy {0} unique datasets from {1} files.".format(len(all_datasets),N)
print " Total length of output datasets will be {0}".format(total_length)
message = False
for f in infiles:
   if len(f.datasets) < len(all_datasets):
      if not message:
         print " The following files contain only a subset of the total datasets:"
         message = True
      print "  {0}".format(f.filename)
      missing = all_datasets - f.datasets
      print "   missing {0} datasets:".format(len(missing))
      for m,dt in missing:
         print "    {0} ({1})".format(m,dt)  
   
# Create all the output datasets in the output file
for dname,dt in all_datasets:
   outfile.g.create_dataset(dname, (total_length,), chunks=(chunksize,), dtype=dt, maxshape=(None,))


# Copy all the datasets into the output file
nextempty = 0 # output datasets all empty to begin
for f in infiles:
   print " Copying data from {0}:{1} to offset {2}".format(f.filename,f.groupname,nextempty)
   N = len(f.datasets)
   for i,(dname,dt) in enumerate(f.datasets):
       basemsg = '  Copied {0} of {1} datasets'.format(i,N)
       #copy_dset(f.g[dname],outfile.g[dname],nextempty,basemsg)
       copy_dset_whole(f.g[dname],outfile.g[dname],nextempty,basemsg)
       #sys.stdout.flush()
   sys.stdout.write('  Done!                              \n'.format(dname))
   nextempty += f.lengths # next copy should happen at this position 

print " Finished!"
