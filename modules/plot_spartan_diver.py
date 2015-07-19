#!/usr/bin/env python

"""Test plotting of the spartan_multinest_hdf5.yaml results"""

#import numpy as np
import h5py
import numpy as np
import matplotlib 
matplotlib.use('Agg')
import matplotlib.pyplot as plt
import matplotlib.colorbar as colorbar
import plottools #Some handy bits and pieces I wrote for plotting stuff

f = h5py.File("runs/spartan_diver/samples/gambit_output.hdf5",'r')
group = f["/"]

mu = group["#NormalDist_parameters @NormalDist::primary_parameters::mu"]
mu_isvalid = np.array(group["#NormalDist_parameters @NormalDist::primary_parameters::mu_isvalid"],dtype=np.bool)

sigma = group["#NormalDist_parameters @NormalDist::primary_parameters::sigma"]
sigma_isvalid = np.array(group["#NormalDist_parameters @NormalDist::primary_parameters::sigma_isvalid"],dtype=np.bool)

LnL = group["Ln(likelihood)"]
LnL_isvalid = np.array(group["Ln(likelihood)_isvalid"],dtype=np.bool)

print "Total number of 'mu' entries    : ", mu.shape[0]
print "Number of valid 'mu' entries    : ", np.sum(mu_isvalid), "(of ", mu_isvalid.shape[0], ")"
print "Index of last valid 'mu' entry (1-indexed) : ", np.max(np.arange(1,mu.shape[0]+1)[mu_isvalid])
print "Total number of 'sigma' entries : ", sigma.shape[0]
print "Number of valid 'sigma' entries : ", np.sum(sigma_isvalid), "(of ", sigma_isvalid.shape[0], ")"
print "Index of last valid 'sigma' entry (1-indexed) : ", np.max(np.arange(1,sigma.shape[0]+1)[sigma_isvalid])
print "Total number of 'Ln(likelihood)' entries : ", LnL.shape[0]
print "Number of valid 'Ln(likelihood)' entries : ", np.sum(LnL_isvalid), "(of ", LnL_isvalid.shape[0], ")"
print "Index of last valid 'Ln(likelihood)' entry (1-indexed) : ", np.max(np.arange(1,LnL.shape[0]+1)[LnL_isvalid])
mask = mu_isvalid & sigma_isvalid & LnL_isvalid
print "Number of valid combined entries: ", np.sum(mask)

# Grab only the points for which all required data entries are marked as valid
# (with some extra cutting to help draw a nice plot in the right place)
cuts = (15<mu[mask]) & (mu[mask]<25) & (sigma[mask]<6)
x = mu[mask][cuts]
y = sigma[mask][cuts]
chi2 = -2*LnL[mask][cuts]

data = np.vstack((x,y,chi2)).T

print "Plotting figure..."
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
fig.savefig("diver_LnL_scat.png")
print "Done."
