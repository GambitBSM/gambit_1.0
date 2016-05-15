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

f = h5py.File("runs/spartan_great/samples/gambit_great_output.hdf5",'r')
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
  "#NormalDist_parameters @NormalDist::primary_parameters::mu",
  "#NormalDist_parameters @NormalDist::primary_parameters::sigma",
  "Likelihood",
  "multiplicity"
]

mu, sigma, LnL, multi = get_data(group, dataset_names)

#rawdata = np.genfromtxt('runs/spartan_great/samples/gambit_great_output.txt')
#pID = rawdata[:,3]
#x = rawdata[:,5]
#y = rawdata[:,6]
#chi2 = -2*rawdata[:,7]
#independent = np.genfromtxt('runs/spartan_great/samples/gambit_great_output.txt_ind_samples')
#id_pID = independent[:,0]
#id_multi = independent[:,1]
#
#mask = np.in1d(np.array(pID).astype(int), np.array(id_pID).astype(int))
#data = np.vstack((x[mask],y[mask],chi2[mask])).T

mask = mu.valid() & sigma.valid() & LnL.valid()
data = np.vstack((mu.data()[mask],
                  sigma.data()[mask],
                  -2*LnL.data()[mask])).T

## Multinest comparison plot
#rawdata = np.genfromtxt('runs/spartan_multinest/samples/gambit_output.data')
#x = rawdata[:,5]
#y = rawdata[:,6]
#chi2 = -2*rawdata[:,7]

#data = np.vstack((x,y,chi2)).T

print "Plotting chi^2 figure..."
print "Number of samples: ", np.sum(mask)

fig= plt.figure(figsize=(12,8))
ax = fig.add_subplot(111)
plot = plottools.chi2scatplot(ax,data,labels=["mu","sigma"],s=20)
fig.subplots_adjust(bottom=0.15)
fig.subplots_adjust(left=0.15)
fig.subplots_adjust(right=.99)
cax,kw = colorbar.make_axes(ax, orientation='vertical', shrink=0.7, pad=0.04)
cbar = fig.colorbar(plot, ax=ax, cax=cax, ticks=[0, 1, 2, 3, 4, 5], **kw)
cbar.ax.set_yticklabels(['0','1','4','9','16',r'$\geq$25'])# vertically oriented colorbar
cbar.ax.set_title("$\Delta\chi^2$")
ax.set_xlim(15,30) #manually tuned
ax.set_ylim(-8,8)
fig.savefig("great_LnL_scat_hdf5.png", bbox_inches='tight')
print "Done."

print "Plotting posterior..."
# Ben: I'm not 100% sure how Antje is using the multiplicity, but I think we will get
# the GreAT-selected independent chain points if we just plot the points with valid
# multiplicity entries (i.e. I think the multiplicities are all 1, or 0 if not in the 
# independent sample chain)

mask = multi.valid() & mu.valid() & sigma.valid() & LnL.valid()

print "valid independent samples: ", np.sum(multi.valid())

# Binning up the posterior
H, xedges, yedges = np.histogram2d(mu.data()[mask], sigma.data()[mask], bins=30, 
                        range=[[5, 35], [-8, 8]], normed=True, weights=multi.data()[mask])
H = H.T # For some reason I seem to have to do this to get correct alignment
X, Y = np.meshgrid(xedges, yedges)

# normed=True includes normalising to bin area, which we don't want. So multiply the
# bin area back in to the plot
dA = (xedges[1] - xedges[0]) * (yedges[1] - yedges[0])
H = H*dA

print H
print xedges
print yedges

print "X range: ", np.min(X), np.max(X)
print "Y range: ", np.min(Y), np.max(Y)

fig = plt.figure(figsize=(8,6))
ax = fig.add_subplot(111)

# density plot
im = ax.imshow(H, origin='lower', interpolation='none', vmin=0., vmax=np.max(H),
                extent=(np.min(X),np.max(X),np.min(Y),np.max(Y)),
                cmap=plt.get_cmap('coolwarm'), aspect='auto')
ax.pcolormesh(X,Y,H,cmap=plt.get_cmap('coolwarm'))

# colorbar
cbar = fig.colorbar(im)
cbar.ax.set_ylabel("Post. density")

# contour plot
xC = ( X[1:,1:] + X[1:,:-1] )/2.  # get bin centres
yC = ( Y[1:,1:] + Y[:-1,1:] )/2.

# some voodoo to compute smallest credible intervals
H2 = H.copy() #copy H so we can modify the new version in-place
indices = np.argsort(H2.flatten())[::-1]
flatHcum = np.cumsum(H2.flatten()[indices]) 
H2.flat[indices] = flatHcum

CS = ax.contourf(xC,yC,H2, levels=[0,0.68,0.95,0.997], lw=2, colors=[(0,1,0,0.5),(1,1,0,0.5),(1,0,0,0.5)])    #(r,g,b,a)

ax.set_xlabel("mu")
ax.set_ylabel("sigma")

#ax.set_xlim(np.min(X),np.max(X))
#ax.set_ylim(np.min(Y),np.max(Y))

fig.savefig('spartan_great_hdf5_posterior.png')




