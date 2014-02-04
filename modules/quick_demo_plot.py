"""Plotting output of Gaussian shell can"""

import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D


# Data:
data = np.loadtxt("gambit_output.txt")

fig = plt.figure(figsize=(16,10))

# Specify which columns the stuff you want to plot are in
logl = data[:,0]     # log likelihood
x = data[:,1]        # parameter column 1
y = data[:,2]        #  "           "   2

# plot log likelihoods
ax = fig.add_subplot(1,1,1, projection='3d')
ax.scatter(x,y,logl,s=2,lw=0,c=logl,cmap=plt.get_cmap('coolwarm'))

plt.show()
#fig.savefig('samples.png')
   
