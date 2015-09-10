#! /usr/bin/env python

import numpy as np
from matplotlib import pyplot as plt
from matplotlib.colors import BoundaryNorm

import optparse
op = optparse.OptionParser()
opts, args = op.parse_args()

for filename in args:
  basename, _junk = filename.split('.')
  qin = (np.fromfile(filename, sep=' ')).reshape((1001,1001,3))
  x,y,z = [ np.array([[qin[i,j,coord] for j in np.arange(1001)] for i in np.arange(1001)])
            for coord in np.arange(3) ]

  fmt = np.fromfile(basename + '.fmt', sep=' ')
  xmin, xmax, ymin, ymax = fmt[:4]
  values = fmt[4:]

# Choose to show only the values shown on the original plot
  fig, axes = plt.subplots(figsize=(11,9), facecolor='#ffffff')
  axes.hold(True)
  axes.set_xlim(xmin, xmax)
  axes.set_ylim(ymin, ymax)
  cmap = plt.get_cmap('Dark2')
  cfill = plt.contourf(x, y, z, values, alpha=0.6, cmap=cmap,
                       antialiased=False)
  fig.colorbar(cfill)
  fig.savefig(basename + '.pdf')
  
# Show all interpolated values in some kind of continuum
  moreValues = np.linspace(values[0], values[-1], num=101) 
  fig, axes = plt.subplots(figsize=(11,9), facecolor='#ffffff')
  axes.hold(True)
  axes.set_xlim(xmin, xmax)
  axes.set_ylim(ymin, ymax)
  cmap = plt.get_cmap('Dark2')
  cfill = plt.contourf(x, y, z, moreValues, alpha=0.6, cmap=cmap,
                       antialiased=False)
  fig.colorbar(cfill)
  fig.savefig(basename + '_smooth.pdf')
