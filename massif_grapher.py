#!/usr/bin/env python

"""Displays graph of memory allocated by a function, as recorded by 'valgrind --tool=massif' and pre-processed by 'ms_print'"""

import sys
import matplotlib.pyplot as plt

def usage():
   print ("\nusage: python massif_grapher.py <path-to-ms_print-output> <target-function>\n"
          "\n"
          "Displays graph of memory allocated by a function, as recorded by 'valgrind --tool=massif' and pre-processed by 'ms_print'\n")
   quit()  

def parse_snapshot(f,func):
   """Parse file looking for next memory allocation tree. Looking for a block that starts like this:
--------------------------------------------------------------------------------
  n        time(i)         total(B)   useful-heap(B) extra-heap(B)    stacks(B)
--------------------------------------------------------------------------------
 92 33,047,823,612       73,744,592       60,614,464    13,130,128            0
 93 33,087,025,207       73,836,920       60,690,507    13,146,413            0
82.20% (60,690,507B) (heap allocation functions) malloc/new/new[], --alloc-fns, etc.
->22.28% (16,448,520B) 0x257D211: YAML::detail::node_ref::node_ref() (in /home/farmer/repos/gambit/gambit)
| ->22.28% (16,448,520B) 0x257D296: YAML::detail::node::node() (in /home/farmer/repos/gambit/gambit)
   ...and so on
   """
   # Search through full snapshot for desired function
   # e.g. looking for something like this, want to grab heap allocation:
#|       |     | |                 ->11.12% (8,208,120B) 0x1A222EF: Gambit::Scanner::Scan_Manager::Run() (scan.cpp:216)
   # Will demand perfect function match; should be copy-pasted from the data file
   found_function = False
   heap_alloc = None
   while not found_function:
      line = f.readline()
      if not line: 
         print "Reached end of file while searching for target function within full snapshot"
         return None
      words = line.split()
      if func in words:
         found_function = True
         index,tmp = next(tup for tup in enumerate(words) if tup[1]==func)
         heap_alloc = float(words[index-2].strip(")").strip("(").strip("B").replace(",",""))
         print "Found function {0} in snapshot".format(func)
   # Success!
   return heap_alloc 

def goto_next_full_snapshop():
   found_block = False
   found_snapshot = False
   # Search for next snapshot block
   while not found_block:
      line = f.readline()
      if not line: 
         print "Reached end of file while searching for next block of snapshots"
         return None
      if line.startswith("------------"): 
         line2 = f.readline()
         if line2.startswith("  n"):
            line3 = f.readline()
            if line3.startswith("------------"): 
               found_block=True
               print "Found next block of snapshots"
   snapshot_n = None
   total_B = None # can easily harvest other columns if desired. Note: options might change columns around?
   # Search for full snapshot within block
   while not found_snapshot:
      line = f.readline()
      if not line: 
         print "Reached end of file while searching for next full snapshot"
         return None
      words = line.split()
      if not words[0].endswith("%"):
         snapshot_n = words[0]
         total_B = float(words[2].replace(",",""))
         print "Parsing snapshot {0}".format(snapshot_n)
         continue 
      else:
         found_snapshot = True
         print "Found next full snapshot ({0})".format(snapshot_n)
   return snapshot_n, total_B

def parse_snapshot_top_level():
   """Similar to next_snapshot, but harvested data for all bottom-level allocations,
      i.e. first entries in the snapshot tree
->10.19% (7,596,260B) 0x656B088: H5FL_blk_malloc (in /usr/lib/x86_64-linux-gnu/libhdf5_serial.so.8.0.2)
   """


#==== begin main program =====
 
if(len(sys.argv)!=3): usage()

filename = sys.argv[1]  #choose data file to use via command line
funcname = sys.argv[2]  #choose function to profile via command line

# Gather data
snap_index = []
total_alloc = []
func_alloc = []
with open(filename, 'r') as f:
   finished = False
   while not finished: 
      print "Searching for next snapshot"
      data1 = goto_next_full_snapshop()
      data2 = parse_snapshot(f,funcname)
      if not data1 or not data2: 
         finished = True
      else:
         n, total = data1
         alloc = data2
         snap_index  += [n]
         total_alloc += [total]
         func_alloc  += [alloc]
print snap_index
print total_alloc
print func_alloc
# Plot
fig = plt.figure(figsize=(12,4))
ax = fig.add_subplot(111)
ax.plot(snap_index, total_alloc, label="Total", lw=2) 
ax.plot(snap_index, func_alloc, label=funcname, lw=2) 
ax.set_xlabel("Snapshot number")
ax.set_ylabel("Heap allocation (B)")
plt.legend(frameon=False)
plt.tight_layout()

fname = "{0}_{1}_heapusage.png".format(filename,funcname)
fig.savefig(fname)

print "Created {0}".format(fname)

