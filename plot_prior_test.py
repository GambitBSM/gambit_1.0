#!/usr/bin/env python

"""Test plotting of the spartan_great_hdf5.yaml results"""

import numpy as np
import h5py
import numpy as np
import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt
import matplotlib.colorbar as colorbar
import plottools #Some handy bits and pieces I wrote for plotting stuff

f = h5py.File("runs/prior_test/samples/results.hdf5",'r')
group = f["/"]

# Helper class to manage data/is_valid HDF5 dataset pairs 
class DataPair:
  def __init__(self,dset,dset_isvalid):
     self._data  = dset
     self._valid = dset_isvalid
  
  def data(self):
     return self._data

  def valid(self):
     return np.array(self._valid, dtype=np.bool)

  def validdata(self):
     return self.data()[self.valid()]


def get_data(in_group, hdf5_dataset_names):
  output = []
  for name in hdf5_dataset_names:
    output += [ DataPair(in_group[name], in_group[name+"_isvalid"]) ]   
  return output

dataset_names = [
  "#TestModel1D_parameters @TestModel1D::primary_parameters::x",
]

x = get_data(group, dataset_names)[0]

# the histogram of the data
fig = plt.figure(figsize=(8,6))
ax = fig.add_subplot(111)

n, bins, patches = ax.hist(x.data(), 50, normed=1, facecolor='green', alpha=0.75)

# the density
#x = np.arange(-1200,2200,10)
#y = np.array([p(i,-1000.,-100.,200.,2000.) for i in x])
#ax.plot(x,y)

fig.savefig('test_hist.png')

