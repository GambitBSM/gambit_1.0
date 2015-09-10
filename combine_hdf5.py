#!/usr/bin/env python

"""Combine data from several hdf5 files created by HDF5Printer into a single file"""

import math
import numpy as np
import h5py
import sys

chunksize = 1000

def usage():
   print ("\nusage: python combine_hdf5.py <path-to-hdf5-file-root-name> <root group in hdf5 files> <Number of files> [--runchecks]"
          "\n"
          "Attempts to combine the data in a group of hdf5 files produced by HDF5Printer but by separate processes during a GAMBIT run.\n"
          "Use --runchecks flag to run some extra validity checks on the input and output data (warning: may be slow for large datasets)")
   quit()  
 
def get_dset_lengths(d,group,dsets):
   for itemname in group: 
      item = group[itemname]
      if isinstance(item,h5py.Dataset):
         #print itemname,"is a Dataset"
         dsets.add((itemname,item.dtype))
         if itemname in d:
            d[itemname] += item.shape[0]
         else:
            d[itemname] = item.shape[0]
      if isinstance(item,h5py.Group):
         #print itemname,"is a Group"
         pass

def check_lengths(d):
   length = None
   for key,value in d.items():
      if length==None: 
         length=value
      elif length!=value:
         ValueError("Length of dataset '{0}' is inconsistent with the others in the target group! (length was {1}; previous dataset had length={2})".format(key,value,length)) 
   return length 

def copy_dset(indset,outdset,nextempty):
   lengthtocopy = indset.shape[0]
   chunksleft = math.ceil(lengthtocopy/float(chunksize))
   remainder = lengthtocopy % chunksize
   start = 0
   stride = chunksize
   while(chunksleft!=0):
      if(remainder!=0 and chunksleft==1):
         stride=remainder
      outdset[nextempty+start:nextempty+start+stride] = indset[start:start+stride]
      start+=stride
      chunksleft-=1

# Combine two integers into one integer with unique mapping
def cantor_pairing(x,y):
   return (x+y)*(x+y+1)/2 + y

#====Begin "main"=================================

if len(sys.argv)!=4 and len(sys.argv)!=5: usage()

runchecks=False
if len(sys.argv)==5:
   if sys.argv[4]=="--runchecks": 
      runchecks=True
   else:
      usage()

rootfname = sys.argv[1]
outfname = rootfname
group = sys.argv[2]
RA_group = group + "/RA"
N = int(sys.argv[3])

print "Root filename:", rootfname
print "Root group: ", group
print "Number of files to combine: ", N
print ""
print "Analysing input files..."

files = {}

sync_dsets = set([])
RA_dsets = set([])
total_sync_length = 0

for i in range(N):
   fname = "{0}_temp_{1}".format(rootfname,i)
   print "Analysing {0}...".format(fname)
   f = h5py.File(fname,'r')
   files[fname] = f
   
   datasets = []
   tmp_dset_metadata = {}
   tmp_RA_dset_metadata = {}
   # First get total lengths of the sync datasets
   if group in f:
      get_dset_lengths(tmp_dset_metadata,f[group],sync_dsets)
      total_sync_length += check_lengths(tmp_dset_metadata)
   else:
      raise ValueError("File '{0}' does not contain the group '{1}!'".format(fname,group))
   # Next get total lengths of the RA datasets
   if RA_group in f:
      get_dset_lengths(tmp_RA_dset_metadata,f[RA_group],RA_dsets)
      check_lengths(tmp_RA_dset_metadata)
   else:
      raise ValueError("File '{0}' does not contain the group '{1}!'".format(fname,RA_group))

# Make sure all sync dsets have the same length
 
print "Sync dsets:"
print "RA dsets:"
for item in RA_dsets:
   print item
print "total sync length =",total_sync_length


print "Creating output file"
fout = h5py.File(outfname,'w')
gout = fout.create_group(group)

# Create dataset to match every sync and RA dataset
alldsets = {}
for dsetname,dt in sorted(sync_dsets):   
   print "Creating empty dset:", dsetname
   alldsets[dsetname] = gout.create_dataset(dsetname, (total_sync_length,), chunks=(chunksize,), dtype=dt)
for dsetname,dt in sorted(RA_dsets):
   print "Creating empty dset:", dsetname
   alldsets[dsetname] = gout.create_dataset(dsetname, (total_sync_length,), chunks=(chunksize,), dtype=dt)

# Copy data from separate sync datasets into combined datasets
nextempty=0
for i in range(N):
   fname = "{0}_temp_{1}".format(rootfname,i)
   print "Copying sync data from file {0} to file {1}...".format(fname,outfname)
   fin = files[fname]

   dset_length=None
   for itemname in fin[group]: 
      item = fin[group][itemname]
      if isinstance(item,h5py.Dataset):
        #print itemname,"is a Dataset"
         if dset_length==None:
            dset_length=item.shape[0]        
         #Do the copy
         copy_dset(item,gout[itemname],nextempty)
   if(dset_length==None):
      print "No sync dsets found! Nothing copied!"
   else: 
      nextempty+=dset_length

# Copy data from RA datasets into combined dataset
for i in range(N):
   fname = "{0}_temp_{1}".format(rootfname,i)
   fin = files[fname]
   if "RA_MPIrank" in fin[RA_group]:
      print "RA data detected in file {0}; copying it to file {1}...".format(fname,outfname)

      # Get write targets
      dset_length=fin[RA_group]["RA_MPIrank"].shape[0]        
      pointIDs_in         = fin[RA_group]["RA_pointID"]
      mpiranks_in         = fin[RA_group]["RA_MPIrank"]
      pointIDs_isvalid_in = np.array(fin[RA_group]["RA_pointID_isvalid"][:],dtype=np.bool)
      mpiranks_isvalid_in = np.array(fin[RA_group]["RA_MPIrank_isvalid"][:],dtype=np.bool)

      mask_in = (pointIDs_isvalid_in & mpiranks_isvalid_in) 

      # convert entries to single values to facilitate fast comparison
      IDs_in = cantor_pairing(pointIDs_in[mask_in],mpiranks_in[mask_in])

      if runchecks:
         print "checking input selection for duplicate keys..."
         seen = []
         allid = []       
         for ID,p,r in zip(IDs_in,pointIDs_in[mask_in],mpiranks_in[mask_in]):
            if ID in seen:
               print "Warning!", ID, "is duplicated!"
               x=(ID,p,r)
               if x in allid:
                 print "...and so are the pointID and MPIrank:", x
            seen+=[ID]
            allid+=[(ID,p,r)]

      # Find them in the target output file
      pointIDs_out         = fout[group]["pointID"]
      mpiranks_out         = fout[group]["MPIrank"]
      pointIDs_isvalid_out = np.array(fout[group]["pointID_isvalid"][:],dtype=np.bool)
      mpiranks_isvalid_out = np.array(fout[group]["MPIrank_isvalid"][:],dtype=np.bool)
 
      mask_out = (pointIDs_isvalid_out & mpiranks_isvalid_out) 

      # convert entries to single values to facilitate fast comparison
      IDs_out = cantor_pairing(pointIDs_out[mask_out],mpiranks_out[mask_out])

      if runchecks:
         print "checking output selection for duplicate keys..."
         seen = []
         allid = []       
         for ID,p,r in zip(IDs_out,pointIDs_in[mask_out],mpiranks_out[mask_out]):
            if ID in seen:
               print "Warning!", ID, "is duplicated!"
               x=(ID,p,r)
               if x in allid:
                 print "...and so are the pointID and MPIrank:", x
            seen+=[ID]
            allid+=[(ID,p,r)]

      # Find which IDs in the output dataset are write targets
      target_mask_small = np.in1d(IDs_out,IDs_in)

      # Cast the mask back so that it works on the original dataset
      # (TODO: is there a more efficient way to do this? "target_mask[mask_out][target_mask_small] = True" does not work.)
      target_length = fout[group]["pointID"].shape[0]
      alltargetindices = np.arange(target_length)
      maskindices = alltargetindices[mask_out][target_mask_small]

      target_mask = np.zeros(target_length, dtype=bool)
      target_mask[maskindices] = True

      # TODO: I think this is screwing up; after masking, I think there are still output dset IDs left that are not targets (i.e. not in the IDs_in list) check:
      if runchecks:
         print "Double-checking that all selected input dset entries have matching targets in the output dsets..." 
         for ID in IDs_in:
            if ID not in IDs_out[target_mask_small]:
               print "Warning! No target for ID {0} found in output selection!".format(ID)

      # Number of "true" elements in target mask should match number of elements in 'in' arrays (after masking)
      # Check this
      ntargets = np.sum(target_mask)
      nsources = np.sum(mask_in)
      if ntargets!=nsources:
         raise ValueError("Error while computing targets for RA writes! Number of targets for writes in the output dataset ({0}) does not match the number of elements scheduled for copying {1}!".format(ntargets,nsources))

      ## Just some test code which I decided to keep around since it is helpful
      ## for understand how the rearrangment of the input data to match the output
      ## selection works.
      ##
      ## # Compute sorting index array for rearranging the source entries to match the target locations
      ## # The way this works is a bit trippy, but it is fast.
      ## #y = target (IDs_out)
      ## #x = sources (IDs_in)
      ## #result = array of length(y), containing positions of 

      ## #e.g. 
      ## #x = np.array([3,5,7,1 ,9  ,8,6,6])
      ## #y = np.array([2,1,5,10,100,6])
      ## # out = [ - 3 1 - - 6 ] 
      ## # i.e. "1" in y, is in position index 3 of x.
      ## x1 = np.array([0,1,2,3,4,5,6,7,8])
      ## y1 = np.array([4,3,5,0,1,2,6,8,7])
      ## # where in x is each element of y?
      ## # should give back y, since e.g. 4 is at index 4 in x  
      ## # then using ypos as indices on x[sort1], should again return y.
      ## xsort1 = np.argsort(x1)
      ## ypos1 = np.searchsorted(x1[xsort1], y1)
      ## print "verifying..."
      ## print y1
      ## print ypos1
      ## print xsort1[ypos1]

      ## # less trivial test:
      ## x2 = np.array([0,1,7,2,7,8,6,4])
      ## y2 = np.array([4,0,1,2,6,8,7])
      ## # indices array should be:
      ## #            [8,1,2,3,7,5,2]   
      ## # (but in our case we don't want duplicates in either the target or input arrays!)
      ## xsort2 = np.argsort(x2)
      ## ypos2 = np.searchsorted(x2[xsort2], y2)
      ## indices = xsort2[ypos2]
      ## print "verifying..."
      ## print x2
      ## print xsort2
      ## print x2[xsort2]
      ## print "y2"
      ## print y2
      ## print ypos2
      ## print indices 
      ## print x2[indices]

      print "Sorting input data to match order in output selection..."
      xsort = np.argsort(IDs_in)
      yindex = np.searchsorted(IDs_in[xsort], IDs_out[target_mask_small])
      fancyindices = xsort[yindex]

      if runchecks:
         print "Checking that matching of input data to output selection has succeeded..."
         print yindex[:10]
         for k,(i,j) in enumerate(zip(IDs_out[target_mask_small][:100],IDs_in[fancyindices[:100]])):
           if i!=j:
             print "Warning! Mismatch found. At position {0}, input ID ({1}) != output ID ({2})".format(k,i,j)
             #print i,j
             #print IDs_out[k-1:k+2]
             #print IDs_in[fancyindices[k-1:k+2]]
             #print "pids and ranks:"
             #print pointIDs_in[mask_in][fancyindices[k-1:k+2]]
             #print mpiranks_in[mask_in][fancyindices[k-1:k+2]]

      # Copy the data from the source to the target, after first
      # rearraging the source according to the index array we just created
      for itemname in fin[RA_group]: 
         item = fin[RA_group][itemname]
         if isinstance(item,h5py.Dataset) and \
              itemname!="RA_pointID" and \
              itemname!="RA_MPIrank":
            #Do the copy
            #(TODO: figure out how to chunk this...)
            indset = item
            outdset = fout[group][itemname]
            #Check that types match
            if indset.dtype!=outdset.dtype:
               ValueError("Type mismatch detected between dataset {0} in file {1} (dtype={2}), and matching dataset in output file {3} (dtype={3})".format(itemname,fname,indset.dtype,outfname,outdset.dtype)) 
            #can't do the fancy list-indexing directly on the hdf5 dataset (the boolean assignment should be ok though) 
            print "Copying RA data for dataset", itemname
            outdset[target_mask] = indset[mask_in][fancyindices]  

print "Data combination completed"
