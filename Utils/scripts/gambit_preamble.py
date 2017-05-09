
#############################################################
# pippi: parse it, plot it
# ------------------------
# GAMBIT preamble module for pippi.  You can import whatever
# you want to pippi using this, and it will be available for
# you to do inline postprocessing with the key
# assign_to_pippi_datastream.
#
# Authors:
#  Pat Scott (p.scott@imperial.ac.uk)
#  Jan 2017
#
#  Anders Kvellestad (anders.kvellestad@nordita.org)
#  May 2017
#  
#############################################################

import numpy as np
import copy

# Computes the elementwise minimum of the input arrays
def bulk_min(x, limit):
  indices = np.where(x > limit)
  z = copy.deepcopy(x)
  z[indices] = limit
  return z

# 'Safe' elementwise ratio calculation, in that it never causes divide by zero,
# instead returning zero for all entries where the denominator was zero.
def safe_ratio(x, y):
  indices = np.where(y == 0)
  z = copy.deepcopy(y)
  z[indices] = 1
  z = x/z
  z[indices] = 0
  return z

# Returns an array with each element given by the nearer of the corresponding
# element in x and y to val.
def closest_to(val, x, y):
  indices = np.where(abs(x - val) < abs(y - val))
  z = copy.deepcopy(y)
  z[indices] = x[indices]
  return z

# Elementwise calculation that returns a "signed" square root, sgn(x)*sqrt(x).
def signed_sqrt(x):
  indices = np.where(x == 0)
  z = copy.deepcopy(x)
  z[indices] = 1
  z = z/np.fabs(z) * np.sqrt(np.fabs(z))
  z[indices] = 0
  return z

