#!/usr/bin/env python

"""Test plotting of the spartan_multinest_hdf5.yaml results"""

#import numpy as np
import h5py
import numpy as np
import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt

f = h5py.File("runs/spartan_multinest_hdf5/samples/gambit_output.hdf5",'r')
group = f["/test/test2"]

mu = group["#NormalDist_parameters @NormalDist::primary_parameters::mu"]
mu_isvalid = np.array(group["#NormalDist_parameters @NormalDist::primary_parameters::mu_isvalid"],dtype=np.bool)

sigma = group["#NormalDist_parameters @NormalDist::primary_parameters::sigma"]
sigma_isvalid = np.array(group["#NormalDist_parameters @NormalDist::primary_parameters::sigma_isvalid"],dtype=np.bool)

print group["pointID"][:]
print group["pointID_isvalid"][:]
print group["MPIrank"][:]
print group["MPIrank_isvalid"][:]
quit()

print mu[-100:]
print mu_isvalid[-100:]
print sigma[-100:]
print sigma_isvalid[-100:]

P = group["Posterior"]
P_isvalid = np.array(group["Posterior_isvalid"],dtype=np.bool)

# Compare to hypercube parameters to check dataset alignment
hc0 = group["Parameters[0]"]
hc0_isvalid = np.array(group["Parameters[0]_isvalid"],dtype=np.bool)
hc1 = group["Parameters[1]"]
hc1_isvalid = np.array(group["Parameters[1]_isvalid"],dtype=np.bool)

# Uncomment to use hypercube parameters
#mu         = hc0
#mu_isvalid = hc0_isvalid
#sigma         = hc1
#sigma_isvalid = hc1_isvalid

#hack to fix up non-matching array sizes... shouldn't happen though I think, might need to fix
#UPDATE: fixed, shouldn't need this anymore
def stretch(array,size):
   blank  = np.zeros(size,dtype=array.dtype)
   blank[:array.shape[0]] = array
   return blank

#maxlen = np.max([mu.size, sigma.size, P.size])
#mu            = stretch(mu,maxlen)
#mu_isvalid    = stretch(mu_isvalid,maxlen)
#sigma         = stretch(sigma,maxlen)
#sigma_isvalid = stretch(sigma_isvalid,maxlen)
#P             = stretch(P,maxlen)
#P_isvalid     = stretch(P_isvalid,maxlen)

print "Total number of 'mu' entries    : ", mu.shape[0]
print "Number of valid 'mu' entries    : ", np.sum(mu_isvalid), "(of ", mu_isvalid.shape[0], ")"
print "Index of last valid 'mu' entry (1-indexed) : ", np.max(np.arange(1,mu.shape[0]+1)[mu_isvalid])
print "Total number of 'sigma' entries : ", sigma.shape[0]
print "Number of valid 'sigma' entries : ", np.sum(sigma_isvalid), "(of ", sigma_isvalid.shape[0], ")"
print "Index of last valid 'sigma' entry (1-indexed) : ", np.max(np.arange(1,sigma.shape[0]+1)[sigma_isvalid])
print "Total number of 'P' entries     : ", P.shape[0]
print "Number of valid 'P' entries     : ", np.sum(P_isvalid), "(of ", P_isvalid.shape[0], ")"
print "Total probability in all 'P' entries  : ", np.sum(P)
print "Total probability in valid 'P' entries: ", np.sum(P[P_isvalid])
print "Index of last valid 'P' entry (1-indexed) : ", np.max(np.arange(1,P.shape[0]+1)[P_isvalid])
mask = mu_isvalid & sigma_isvalid & P_isvalid
print "Number of valid combined entries: ", np.sum(mask)

# Grab only the points for which all required data entries are marked as valid
# (with some extra cutting to help draw a nice plot in the right place)
cuts = (15<mu[mask]) & (mu[mask]<25) & (sigma[mask]<6)
x = mu[mask][cuts]
y = sigma[mask][cuts]
pmass = P[mask][cuts]

print "x:", x
print "y:", y
print "P:", pmass
print "x range: ", np.min(x), np.max(x)
print "y range: ", np.min(y), np.max(y)
print "P range: ", np.min(pmass), np.max(pmass)

# Binning up the posterior
H, xedges, yedges = np.histogram2d(x, y, bins=50, weights=pmass)
H = H.T # For some reason I seem to have to do this to get correct alignment
X, Y = np.meshgrid(xedges, yedges)

print "X range: ", np.min(X), np.max(X)
print "Y range: ", np.min(Y), np.max(Y)

fig = plt.figure(figsize=(8,6))
ax = fig.add_subplot(111)

# density plot
#im = ax.imshow(H, origin='lower', interpolation='none', vmin=0., vmax=np.max(H),
#                extent=(np.min(X),np.max(X),np.min(Y),np.max(Y)),
#                cmap=plt.get_cmap('coolwarm'), aspect='auto')
#ax.pcolormesh(X,Y,H,cmap=plt.get_cmap('coolwarm'))

# colorbar
#cbar = fig.colorbar(im)
#cbar.ax.set_ylabel("Post. density")

# Plain scatter plot
ax.scatter(x,y,facecolor='k',edgecolor='',alpha=0.5,s=2)

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

fig.savefig('spartan_multinest_hdf5_posterior.png')


