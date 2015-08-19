#!/usr/bin/env python

from __future__ import division
from numpy import *
import pylab as plt
from scipy.interpolate import griddata

def plot():
  # Load data
  data = genfromtxt('runs/singletDM_multinest_MO/samples/gambit_output.data')

  # Remove 'none' (or 'nan') entries
  data = data[logical_not(isnan(data.sum(axis=1)))]

  # Main Coordinates
  lam = log10(data[:,39])
  mS = log10(data[:,40])
  points = array(zip(mS, lam))

  # Parameter range of interest
  y0, y1 = lam.min(), lam.max()
  x0, x1 = mS.min(), mS.max()
  x = linspace(x0, x1, 200)
  y = linspace(y0, y1, 200)
  x_grid, y_grid = meshgrid(x, y)

  def plotcontours(i, levels = None, showImage = False, **kwargs):
    values = -data[:,i]
    z_grid = griddata(points, values, (x_grid, y_grid), method='linear')
    z_grid = z_grid-values.min()
    if showImage:
      plt.imshow(z_grid, extent=(x0, x1, y0, y1), aspect='auto', origin='lower')
      plt.colorbar()
    else:
      plt.contour(x, y, z_grid, levels = levels, linewidths=2, zorder=10,
          **kwargs)
  plotcontours(42, levels=[2], colors='y')  # Fermi likelihood
  plotcontours(43, levels=[0.1], colors='b')  # WMAP likelihood
  plotcontours(44, levels=[2], colors='k')  # XENON100
  plotcontours(45, levels=[2], colors='r')  # LUX
  plt.plot(mS, lam, 'k.', alpha=0.1)
  plt.xlabel("mS [GeV]")
  plt.ylabel("log10(lambda)")
  plt.savefig('output.pdf')

if __name__ == '__main__':
  plot()
