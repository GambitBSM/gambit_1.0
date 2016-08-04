#!/usr/bin/env python

import h5py
import numpy as np
import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt
import matplotlib.colorbar as colorbar
import plottools

f = h5py.File("runs/SPheno/samples/SPheno.hdf5",'r')
group = f["/SPheno"]

m0 = group["#CMSSM_parameters @CMSSM::primary_parameters::M0"]
m0_isvalid = np.array(group["#CMSSM_parameters @CMSSM::primary_parameters::M0_isvalid"], dtype=np.bool)

m12 = group["#CMSSM_parameters @CMSSM::primary_parameters::M12"]
m12_isvalid = np.array(group["#CMSSM_parameters @CMSSM::primary_parameters::M12_isvalid"], dtype=np.bool)

mh0 = group["#MSSM_spectrum @SpecBit::get_MSSM_spectrum_as_map::h0_1 Pole_Mass"]
mh0_isvalid = np.array(group["#MSSM_spectrum @SpecBit::get_MSSM_spectrum_as_map::h0_1 Pole_Mass_isvalid"], dtype=np.bool)

print "Total number of m0 entries: ", m0.shape[0]
print "Number of valid m0 entries: ", np.sum(m0_isvalid)
print "Total number of m12 entries: ", m12.shape[0]
print "Number of valid m12 entries: ", np.sum(m12_isvalid)
print "Total number of mh0 entries: ", mh0.shape[0]
print "Number of valid mh0 entries: ", np.sum(mh0_isvalid)

mask = m0_isvalid & m12_isvalid & mh0_isvalid

cuts = (110 < mh0[mask]) & (mh0[mask] < 130)
x = m0[mask][cuts]
y = m12[mask][cuts]
z = mh0[mask][cuts]

data = np.vstack((x,y,z)).T

print "Plotting figure..."
fig = plt.figure(figsize=(12,8))
ax = fig.add_subplot(111)
plot = plottools.chi2scatplot(ax,data,labels=["m0","m12"],s=200)
fig.subplots_adjust(bottom=0.15)
fig.subplots_adjust(left=0.15)
fig.subplots_adjust(right=.99)
cax,kw = colorbar.make_axes(ax, orientation='vertical', shrink=0.7, pad=0.04)
#cbar = fig.colorbar(plot, ax=ax, cax=cax, ticks=[0, 1, 2, 3,4,5], **kw)
#cbar.ax.set_yticklabels(['0','1','4','9','16',r'$\geq25'])
#cbar.ax.set_title("$\Delta\chi^25")
fig.savefig("SPheno.png")
print "Done"
