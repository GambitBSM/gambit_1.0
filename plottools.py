
import numpy as np
import h5py
import time
import csv
import os
import subprocess as sp
import array
import re
import unicodedata
import operator
import shlex

from StringIO import StringIO

import matplotlib.pyplot as plt
import matplotlib.axes as axes
import matplotlib.cm as cm
import matplotlib.colors as colors
import matplotlib.colorbar as colorbar
import matplotlib as mpl

import scipy.stats as sps

from itertools import groupby
from operator import itemgetter

#global options that may be desired to be tweaked
font = {'family' : 'serif',
        'weight' : 'normal',  #'bold'
        'size'   : 16,
        }
mpl.rc('font', **font)
#mpl.rc('text', usetex=True)

#========Side tools===============================
#mangle unicode strings into ascii strings
def unicode2ascii(string):
    try:
        outstr = unicodedata.normalize('NFKD', string).encode('ascii','ignore')
    except TypeError:
        #If not a unicode string, do nothing.
        outstr = string       
    return outstr
 
#extract column from 2D nested list/array
def column(matrix, i):
    return [row[i] for row in matrix]
    
# uncertainty to string
from math import floor, log10
def un2str(x, xe, precision=2):
    """pretty print nominal value and uncertainty

    x  - nominal value
    xe - uncertainty
    precision - number of significant digits in uncertainty

    returns shortest string representation of `x +- xe` either as
        x.xx(ee)e+xx
    or as
        xxx.xx(ee)"""
    # base 10 exponents
    #print x, xe
    try:
        x_exp = int(floor(log10(x)))
    except ValueError:  #we get this if x is negative
        x_exp = -int(floor(log10(-x)))  #MIGHT NEED TO CHANGE THIS TO CEIL? HAVE NOT CHECKED THOROUGHLY
    try:
        xe_exp = int(floor(log10(xe)))
    except ValueError:
        xe_exp = -int(floor(log10(-xe)))

    # uncertainty
    un_exp = xe_exp-precision+1
    un_int = round(xe*10**(-un_exp))

    # nominal value
    no_exp = un_exp
    no_int = round(x*10**(-no_exp))

    # format - nom(unc)exp
    fieldw = x_exp - no_exp
    fmt = '%%.%df' % fieldw
    result1 = (fmt + '(%.0f)e%d') % (no_int*10**(-fieldw), un_int, x_exp)

    # format - nom(unc)
    fieldw = max(0, -no_exp)
    fmt = '%%.%df' % fieldw
    result2 = (fmt + '(%.0f)') % (no_int*10**no_exp, un_int*10**max(0, un_exp))

    # return shortest representation
    if len(result2) <= len(result1):
        return result2
    else:
        return result1
        
        
       
#==============ANALYSIS FUNCTIONS=======================================

#custom colormap for Delta chi^2 plots

#Define contours of likelihood function to plot (in sigma units)
#contsigmas = [0.5,1,2,3,4,5,6,7]
#contsigmas = [1,2]    #reduced set to remove clutter
#rellevels = np.array(contsigmas)**2 #square every element to get them into chi^2 units

#compute delta chi^2 for 68 and 95% 2D confidence regions 
CLs = [0.68,0.95]
df = 2  #two degrees of freedom in 2D profile likelihood plot
rellevels = [sps.chi2.isf(1-CL,df) for CL in CLs]   #isf = inverse survival function (inverse of 1-cdf). returns chi2 value at boundary of specified confidence region

#Define colormap for chi^2 plots
#scaled colors go from 0 to 1, so we need to set a max value (chi^2=25 sounds good)
#actually plot "sigmas", i.e. sqrt(chi^2), so max is then 5.
mn=0
mx=5
s0=0./(mx-mn)
s1=1./(mx-mn)
s2=2./(mx-mn)
s3=3./(mx-mn)
s4=4./(mx-mn)
s5=5./(mx-mn)

#colors are in order ('green':(0., 1., 0.), 'yellow': (1., 1., 0.), 'orange' : (0., 0.5, 1.)
# 'red' : (0., 0., 1.), 'darkred' : (0., 0., 0.5), 'darkerred' : (0., 0., 0.2) (names just made up)
#note, the rgb values are a bit screwed up in the previous list, but they are correct in the cdict
cdict = {
'red'  :  ((s0, 0., 0.), (s1, 1., 1.), (s2, 1., 1.), (s3, 1., 1.), (s4, .5, .5), (s5, .2, .2)),
'green':  ((s0, 1., 1.), (s1, 1., 1.), (s2, .5, .5), (s3, 0., 0.), (s4, 0., 0.), (s5, 0., 0.)),
'blue' :  ((s0, 0., 0.), (s1, 0., 0.), (s2, 0., 0.), (s3, 0., 0.), (s4, 0., 0.), (s5, 0., 0.))
}

#generate the colormap with 1024 interpolated values
chi2cmap = colors.LinearSegmentedColormap('chi2_colormap', cdict, 1024)
chi2cmap.set_bad('w',1.)    #set color (and alpha) for bad ('masked') values

#cutsom colormap for marginalised posterior plots

cdict2 = {
'red'  :  ((0., 1., 1.), (1., 0., 0.)),
'green':  ((0., 1., 1.), (1., 0., 0.)),
'blue' :  ((0., 1., 1.), (1., 0., 0.))
}

cdict3 = {
'red'  :  ((0., 0., 0.), (1., 1., 1.)),
'green':  ((0., 0., 0.), (1., 1., 1.)),
'blue' :  ((0., 0., 0.), (1., 1., 1.))
}

cdict4 = {
'red'  :  ((0., 1., 1.), (.01, 0., 0.), (.05, .1, .1), (1., .9, .9)),
'green':  ((0., 1., 1.), (.01, .3, .3), (.05, .1, .1), (1., .9, .9)),
'blue' :  ((0., 1., 1.), (.01, .3, .3), (.05, .1, .1), (1., 1., 1.))
}

#generate the colormap with 1024 interpolated values
margcmap = colors.LinearSegmentedColormap('marg_colormap', cdict4, 1024)
margconts = [0.68,0.95]

def getcols(structarr,colnames):
    """"helper function to retrieve a normal, unstructured numpy array from the
    structured array that the dataset returns
    Args
    structarr - result of dset[:], or dset[0:1000] if a subset of rows is desired
    colnames  - list of field names to retrieve from array
    """
    """ This way may get the columns switched around!
    #As a bonus, remove NaN's from data
    
    data = structarr[:][colnames].view(dtype='<f4').reshape(-1,len(colnames))
    dataout = data[~np.isnan(data).any(1)]  #deletes rows containing nans
    print 'NaN count: ',len(data) - len(dataout)
    """
    #Pull columns out one at a time to ensure we get the correct order
    data = np.array([structarr[col] for col in colnames]).transpose()
    print data.shape, type(data)
    try:
        dataout = data[~np.isnan(data).any(1)]  #deletes rows containing nans
    except TypeError as err:
        print 'TypeError encountered, dumping extra data...'
        for i,row in enumerate(data):
            try:
                ~np.isnan(row).any(1)
            except (TypeError,NotImplementedError) as err2:
                print 'TypeError or NotImplementedError occurred running isnan \
function on row {0}, dumping row...'.format(i)
                print row, type(row)
                raise err2
            
    print dataout.shape
    print 'NaN count: ',len(data) - len(dataout)
    return dataout

def bin2d(data,nxbins,nybins,binop='min',doconts=False):
    """2d binning algorithm
    Args
    data - n rows * 3 column dataset, columns in order x,y,z. Binning done
    by x,y
    binop - Operation to perform on bins. Available options:
        'min' - Returns the minimum z value for each bin
        'max' - Returns the maximum z value for each bin
    nxbins - Number of bins to use in x direction
    nybins -    "      "              y   "
    """
    x = data[:,0]
    y = data[:,1]
    #xbins = np.arange(min(x),
    zvals = data[:,2]
    eps = 1e-10     #shift for bin edge computation

    xindexes = np.floor((1-eps)*(nxbins-1)*(x-min(x))/(max(x)-min(x)))
    yindexes = np.floor((1-eps)*(nybins-1)*(y-min(y))/(max(y)-min(y)))
    #print xindexes
    #print yindexes
    
    outarray = np.zeros((nxbins,nybins))
    #print outarray
    
    #grouped=[list(value) for key, value in groupby(sorted(zip(xindexes,yindexes,zvals)), key=itemgetter(0,1))]
    grouped=[list(value) for key, value in groupby(sorted(zip(xindexes,yindexes,zvals)), key=itemgetter(0,1))]
    bininds=[nybins*bin[0][0] + bin[0][1] for bin in grouped]  #these are the FLAT indices in the target array

    if binop=='min':
        binvals=[min([el[2] for el in bin]) for bin in grouped]
        #outarray[:,:] = 1e300
        outarray[:,:] = np.nan
    elif binop=='max':
        binvals=[max([el[2] for el in bin]) for bin in grouped]
        outarray[:,:] = 0
    elif binop=='sum':
        binvals=[sum([el[2] for el in bin]) for bin in grouped]
        outarray[:,:] = 0
    else:
        raise ValueError('Invalid binop value ({0}) supplied to bin2d'.format(binop))

    #print bininds
    try:
        outarray.flat[bininds] = binvals
    except ValueError:
        print "WARNING: nan's present in bin index lists, input data may\
be degenerate in one or more dimensions."
        raise  
    #Recompute the bins so that each one contains the total probability enclosed by the
    #iso-probability-density contour on which it sits (use this to compute smallest 68%, 95% 
    #Bayesian credible regions) (DESIGNED FOR USE WHEN BIN VALUE IS A PROBABILITY MASS)
    if binop=='sum' and doconts==True:
        outarray2 = np.zeros((nxbins,nybins))
        outarray2[:,:] = 1.
        sb = np.array(sorted(zip(bininds,binvals), key=itemgetter(1), reverse=True)) #sort bins by probability
        #print zip(sb[:,1],np.cumsum(sb[:,1]))[0:20]
        #print zip(sb[:,1],np.cumsum(sb[:,1]))[-20:-1]
        outarray2.flat[list(sb[:,0])] = list(np.cumsum(sb[:,1]))         #cumulative sum of probabilities
        return outarray.transpose(), outarray2.transpose()
        
    return outarray.transpose()
    
def bin1d(data,nbins,binop='min'):
    """1d version of bin2d (in fact uses bin2d directly)
    Args:
    data - n rows * 2 column dataset, columns in order x,z. Binning done
    in x, z being the "height" or "density" to be binned.
    binop - Operation to perform on bins. Available options:
        'min' - Returns the minimum z value for each bin
        'max' - Returns the maximum z value for each bin
    nbins - Number of bins to use 
    """
    x = data[:,0]
    y = np.zeros(x.shape[0]) #"fake" y values to emulate the 2D binning
    y[:x.shape[0]/2] = 1  #need at least two different y values so ymax - ymin != 0.
    z = data[:,1]
    return bin2d(np.array(zip(x,y,z)),nbins,1,binop,doconts=False)[0]      #return 1d array of x vs binned values

def forceAspect(ax,aspect=1):
    extent = ax.get_window_extent().get_points()
    print extent
    ax.set_aspect(abs((extent[0,1]-extent[0,0])/(extent[1,1]-extent[1,0]))/aspect)
    
    """
    print ax
    print ax.get_images()
    if isinstance(ax, axes.Axes):
        extent =  ax.get_extent()
    elif isinstance(ax.get_images()[0], plt.axes.Axes):
        im = ax.get_images()
        extent =  im[0].get_extent()
    else:
        raise TypeError("Supplied 'ax' was not an Axes object or list of Axes objects!")
    ax.set_aspect(abs((extent[1]-extent[0])/(extent[3]-extent[2]))/aspect)
    """
    
#--------------main plotting routines-----------------------------------

def chi2scatplot(ax,data,title=None,labels=None,s=1):
    """Creates a scatter plot of the data, colored by Delta chi^2 value
    Args:
    ax - Axis object on which to create plot
    data - 3 column numpy array with
        data[:,0] - x data
        data[:,1] - y data
        data[:,2] - chi^2 data
    """
    data = data[data[:,2].argsort()[::-1]] #sort points by chi2 (want to plot lowest chi2 points last, achieved by reversing sorted indices via '::-1')
    plot = ax.scatter(data[:,0],data[:,1],c=np.sqrt(data[:,2]-min(data[:,2])),s=s,lw=0,cmap=chi2cmap, norm=colors.Normalize(vmin=mn,vmax=mx,clip=True))
    if title: ax.set_title(title)
    if labels: ax.set_xlabel(labels[0])
    if labels: ax.set_ylabel(labels[1])
    ax.set_xlim(min(data[:,0]),max(data[:,0]))
    ax.set_ylim(min(data[:,1]),max(data[:,1]))
    ax.grid(True)
    return plot

def chi2logscatplot(ax,data,title=None,labels=None):
    """Creates a scatter plot of the data, colored by Delta chi^2 value
    """
    data = data[data[:,2].argsort()[::-1]] #sort points by chi2 (want to plot lowest chi2 points last, achieved by reversing sorted indices via '::-1')
    plot = ax.scatter(data[:,0],data[:,1],c=np.sqrt(data[:,2]-min(data[:,2])),s=1,lw=0,cmap=chi2cmap, norm=colors.Normalize(vmin=mn,vmax=mx,clip=True))
    ax.set_yscale('log')
    if title: ax.set_title(title)
    if labels: ax.set_xlabel(labels[0])
    if labels: ax.set_ylabel(labels[1])
    ax.set_xlim(min(data[:,0]),max(data[:,0]))
    ax.set_ylim(min(data[:,1]),max(data[:,1]))
    ax.grid(True)
    return plot
    
def profplot(ax,data,title=None,labels=None):
    """Creates a binned, profiled plot of the data, colored by Delta chi^2 value,
    i.e. profile likelihood.
    """
    nxbins=np.floor(1.618*100)
    nybins=100

    x = data[:,0]
    y = data[:,1]
    wx= (max(x)-min(x))/nxbins
    wy= (max(y)-min(y))/nybins
    print min(x),max(x),wx
    print min(y),max(y),wy
    xlist = np.arange(min(x),max(x)-wx*10e-3,wx)   #tiny shift to prevent nbins+1 bins in X and Y arrays
    ylist = np.arange(min(y),max(y)-wy*10e-3,wy)
    print len(xlist), len(ylist)
    
    outarray = bin2d(data,nxbins,nybins,binop='min')
    #print outarray[0:20,0:20]
    X, Y = np.meshgrid(xlist,ylist)
    minchi2 = np.nanmin(outarray)  #get min ignoring nans
    #print X.shape, Y.shape, outarray.shape, minchi2
    
    #Set special color for NaN values (see definition of colormap also)
    Dchi2 = np.sqrt(outarray - minchi2)
    #print Dchi2[0:20,0:20]

    masked_array = np.ma.array(Dchi2, mask=np.isnan(Dchi2)) #mask out the nan's; the masked values will be given a special color in the output plot
    
    #print masked_array[0:20,0:20]
    
    im = ax.imshow(masked_array, origin='lower', interpolation='nearest',
                    extent=(min(xlist),max(xlist)+wx,min(ylist),max(ylist)+wy),
                    cmap=chi2cmap, norm=colors.Normalize(vmin=mn,vmax=mx,clip=True), aspect='auto')
    
    CS = ax.contour(X+wx/2, Y+wy/2, outarray - minchi2, levels=rellevels, lw=3) #colors=['g','y','r']
    bfidx=np.where(outarray.flat==minchi2) #get flat index of best fit point
    ax.plot([X.flat[bfidx]], [Y.flat[bfidx]], "ko")
    #ax.clabel(CS, inline=1, fontsize=10)
    
    if labels: ax.set_xlabel(labels[0])
    if labels: ax.set_ylabel(labels[1])
    ax.set_xlim(min(data[:,0]),max(data[:,0]))
    ax.set_ylim(min(data[:,1]),max(data[:,1]))
    ax.grid(True)
    
    return im
    
def margplot(ax,data,title=None,labels=None):
    """Creates a binned marginalised plot of the data, colored by marginalised posterior
    density.
    """
    nxbins=np.floor(1.618*100)
    nybins=100

    x = data[:,0]
    y = data[:,1]
    wx= (max(x)-min(x))/nxbins
    wy= (max(y)-min(y))/nybins
    xlist = np.arange(min(x),max(x)-wx*10e-3,wx)    #tiny shift to prevent nbins+1 bins in X and Y arrays
    ylist = np.arange(min(y),max(y)-wy*10e-3,wy)
    
    outarraydens, outarrayconts = bin2d(data,nxbins,nybins,binop='sum',doconts=True)
    X, Y = np.meshgrid(xlist,ylist)
    maxpoint = max(outarraydens.flat)

    print X.shape, Y.shape, outarraydens.shape, outarrayconts.shape, max(outarrayconts.flat)
    
    im = ax.imshow(outarraydens, origin='lower', interpolation='nearest',
                    extent=(min(xlist),max(xlist)+wx,min(ylist),max(ylist)+wy),
                    cmap=margcmap, aspect='auto')
    
    CS = ax.contour(X+wx/2, Y+wy/2, outarrayconts, levels=margconts, lw=3, colors=[(0,1,0),(1,1,0)])    #(r,g,b)
    bfidx=np.where(outarraydens.flatten()==maxpoint) #get flat index of best fit point
    ax.plot([X.flat[bfidx]], [Y.flat[bfidx]], "ko")
    #ax.clabel(CS, inline=1, fontsize=10)
    
    if labels: ax.set_xlabel(labels[0])
    if labels: ax.set_ylabel(labels[1])
    ax.set_xlim(min(data[:,0]),max(data[:,0]))
    ax.set_ylim(min(data[:,1]),max(data[:,1]))
    ax.grid(True)
    
    return im

def margplot1D(ax,data,title=None,labels=None,trim=True):
    """Creates a 1D binned marginalised plot of the data
    Args:
    data[:,0] - x data
    data[:,1] - corresponding posterior masses 
    trim - Cut off outer bins containing less than 0.01% probability mass
    """
    nxbins=200

    x = data[:,0]
    wx= (max(x)-min(x))/nxbins
    xlist = np.arange(min(x),max(x)-wx*10e-3,wx)    #tiny shift to prevent nbins+1 bins in X and Y arrays
    
    outarraydens = bin1d(data,nxbins,binop='sum')
    
    # Perform trimming:
    # Do binning with all the data, cut off bins that contain almost no 
    # probability, then repeat binning over reduced range (iterate)
    if trim:
        while True:
            # from low
            posl = 0
            pmass = outarraydens[posl]
            while pmass<0.001:
                posl += 1
                pmass = outarraydens[posl]
            # from high
            posh = len(outarraydens)-1
            pmass = outarraydens[posh]
            while pmass<0.001:
                posh -= 1
                pmass = outarraydens[posh]
            # compute new range and repeat binning
            data = data[ np.logical_and(data[:,0]>xlist[posl], data[:,0]<xlist[posh+1]) ] 
            x = data[:,0]
            wx= (max(x)-min(x))/nxbins
            xlist = np.arange(min(x),max(x)-wx*10e-3,wx)    # tiny shift to prevent nbins+1 bins in X and Y arrays
            if posh-posl > 80:  # if we aren't cutting off many bins don't bother to optimise further
                break
            # repeat binning
            outarraydens = bin1d(data,nxbins,binop='sum')

    #im = ax.plot(xlist,outarraydens)   
    im = ax.bar(xlist,outarraydens,wx,linewidth=0,color='b',alpha=0.4)
      
    if labels: ax.set_xlabel(labels)
    ax.set_ylabel("Binned posterior mass")
    ax.set_xlim(min(data[:,0]),max(data[:,0]))
    
    return im

