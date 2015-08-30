#!/usr/bin/env python

from __future__ import division
from numpy import *
import pylab as plt
from scipy.interpolate import griddata

def plot():
  # Load data
  data = genfromtxt('gambit_output.data', invalid_raise = False)

  # Remove 'none' (or 'nan') entries
  data = data[logical_not(isnan(data.sum(axis=1)))]

  # Main Coordinates
  X = log10(data[:,3])  # m0
  Y = log10(data[:,4])  # m12
  points = array(zip(X, Y))

  # Parameter range of interest
  y0, y1 = Y.min(), Y.max()
  x0, x1 = X.min(), X.max()
  x = linspace(x0, x1, 200)
  y = linspace(y0, y1, 200)
  x_grid, y_grid = meshgrid(x, y)

  def plotcontours(i, levels = None, showImage = False, likelihood = True,
      **kwargs):
    if likelihood: values = -data[:,i]
    z_grid = griddata(points, values, (x_grid, y_grid), method='linear')
    if likelihood: z_grid = z_grid-values.min()
    if showImage:
      plt.imshow(z_grid, extent=(x0, x1, y0, y1), aspect='auto', origin='lower')
      plt.colorbar()
    else:
      plt.contour(x, y, z_grid, levels = levels, linewidths=2, zorder=10,
          **kwargs)
  plotcontours(42, levels=[1.0, 2.0, 4.0, 8.0], color='b')  # WMAP oh2
  #plotcontours(43, levels=[0.1], color='b')  # WMAP likelihood
  plotcontours(44, levels=[2], colors='k')  # XENON100
  plotcontours(45, levels=[2], colors='r')  # LUX
  plt.plot(X, Y, 'k.', alpha=0.1)
  plt.xlabel("log10 m0 [GeV]")
  plt.ylabel("log10 m12 [GeV]")
  plt.savefig('CMSSM.pdf')

if __name__ == '__main__':
  plot()
