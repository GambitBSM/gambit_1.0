#!/usr/bin/env python

"""Test plotting of the scan.yaml results"""

#import numpy as np
import h5py
import numpy as np
import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt
import plottools

f = h5py.File("runs/test_hdf5/samples/gambit_output.hdf5",'r')
group = f["/test/test2"]

p0 = group["EggBox::param_0"]
p0_isvalid = np.array(group["EggBox::param_0_isvalid"],dtype=np.bool)

p1 = group["EggBox::param_1"]
p1_isvalid = np.array(group["EggBox::param_1_isvalid"],dtype=np.bool)

L = group["Likelihood"]
L_isvalid = np.array(group["Likelihood_isvalid"],dtype=np.bool)

# Compare to hypercube parameters to check dataset alignment
hc0 = group["unitCubeParameters[0]"]
hc0_isvalid = np.array(group["unitCubeParameters[0]_isvalid"],dtype=np.bool)
hc1 = group["unitCubeParameters[1]"]
hc1_isvalid = np.array(group["unitCubeParameters[1]_isvalid"],dtype=np.bool)

mask = p0_isvalid & p1_isvalid & L_isvalid
print "Number of valid combined entries: ", np.sum(mask)

# Grab only the points for which all required data entries are marked as valid
# (with some extra cutting to help draw a nice plot in the right place)
#cuts = (15<p0[mask]) & (p0[mask]<25) & (p1[mask]<6)
x = p0[mask]#[cuts]
y = p1[mask]#[cuts]
logL = L[mask]#[cuts]

fig = plt.figure(figsize=(8,6))
ax = fig.add_subplot(111)

# scatter plot colored by chi2
plottools.chi2scatplot(ax,np.vstack([x,y,logL]).T,s=2)

ax.set_xlabel("p0")
ax.set_ylabel("p1")

#ax.set_xlim(np.min(X),np.max(X))
#ax.set_ylim(np.min(Y),np.max(Y))

fig.savefig('scanyaml_eggbox_chi2.png')


