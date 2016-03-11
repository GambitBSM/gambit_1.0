#!/usr/bin/env python

# Runs the DarkBit MSSM standalone for test slha files and plots results
# Christoph Weniger <c.weniger@uva.nl> 11 Mar 2016

from __future__ import division
from numpy import *
import pylab as plt
import subprocess

colors_list = ['Chocolate', 'k', 'r', 'g', 'y', 'b']

def getTags():
  for tag in [
      'FMCp03000765',
      'JE56C_003717',
      'JE58D_007879',
      'JE67B_006998',
      'JE67D_001840',
      'JE87O_006600'
      ]:
    SLHAPATH = 'DarkBit/slha-benchmarks/14-12-2014_joakim/'
    yield {'slha':SLHAPATH+tag+".slha", 'dNdE_gambit': SLHAPATH+"dNdE_gambit_"+tag+".dat",
        'results_gambit': SLHAPATH+"results_gambit_"+tag+".dat", 'tag': tag,
        'dNdE_orig': SLHAPATH+tag+".gaspec", 'results_orig': SLHAPATH+tag+'.dat'}

def rungambit(tags):
  slhafile = tags['slha']
  outfile1 = tags['dNdE_gambit']
  outfile2 = tags['results_gambit']
  print "Running SLHA file", slhafile
  process = subprocess.Popen(
      ('./DarkBit_standalone_MSSM ' + slhafile + ' ' + outfile1 + ' ' +
        outfile2).split(), stdout = subprocess.PIPE)
  output = process.communicate()[0]
  print output

def runtests():
  tags = getTags()
  for t in tags:
    rungambit(t)

def getSLHAinfos(filename):
  with open(filename) as f:
    for line in f:
      if "MNeu(1)" in line: 
        DMmass = abs(float(line.split()[1]))
  return {"DMmass": DMmass}

def getDATinfos(filename):
  with open(filename) as f:
    for line in f:
      if "Oh2" in line: oh2 = float(line.split()[0])
      if "gps" in line: gps = float(line.split()[0])
      if "gns" in line: gns = float(line.split()[0])
      if "gpa" in line: gpa = float(line.split()[0])
      if "gna" in line: gna = float(line.split()[0])
  return {'oh2': oh2, 'gps': gps, 'gns': gns, 'gpa': gpa, 'gna': gna}

def getRESinfos(filename):
  with open(filename) as f:
    for line in f:
      if "oh2" in line and "darksusy" in line:
        oh2_DS = float(line.split()[0])
      if "oh2" in line and "micromegas" in line:
        oh2_MO= float(line.split()[0])
      if "gps" in line and 'darksusy' in line: gps_DS = float(line.split()[0])
      if "gns" in line and 'darksusy' in line: gns_DS = float(line.split()[0])
      if "gpa" in line and 'darksusy' in line: gpa_DS = float(line.split()[0])
      if "gna" in line and 'darksusy' in line: gna_DS = float(line.split()[0])
      if "gps" in line and 'micromegas' in line: gps_MO = float(line.split()[0])
      if "gns" in line and 'micromegas' in line: gns_MO = float(line.split()[0])
      if "gpa" in line and 'micromegas' in line: gpa_MO = float(line.split()[0])
      if "gna" in line and 'micromegas' in line: gna_MO = float(line.split()[0])
  return {'oh2_DS': oh2_DS, 'oh2_MO': oh2_MO, 
      'gps_DS': gps_DS,
      'gpa_DS': gpa_DS,
      'gns_DS': gns_DS,
      'gna_DS': gna_DS,
      'gps_MO': gps_MO,
      'gpa_MO': gpa_MO,
      'gns_MO': gns_MO,
      'gna_MO': gna_MO,}

def getdNdE(filename):
  x, y = loadtxt(filename).T
  return x, y

def showSpec():
  plt.clf()
  tags = getTags()
  colors = iter(colors_list)

  def makeplot(t):
    SLHAinfos = getSLHAinfos(t['slha'])
    DMmass = SLHAinfos['DMmass']
    dNdE_DS = getdNdE(t['dNdE_gambit'])
    dNdE_gaspec = getdNdE(t['dNdE_orig'])
    color = colors.next()
    plt.loglog(dNdE_DS[0], dNdE_DS[1]*dNdE_DS[0]**2, label=t['tag'], ls='-', color=color)
    plt.loglog(dNdE_gaspec[0], dNdE_gaspec[1]*dNdE_gaspec[0]**2/DMmass**2, ls='--', color=color)
    plt.ylim([1e-36, 1e-28])

  for t in tags:
    try:
      makeplot(t)
    except IOError:
      pass

  plt.legend(frameon=False, loc=2)
  plt.xlabel("Energy [GeV]")
  plt.ylabel("dN/dE * E^2 <sigma v> / mass**2")
  plt.savefig("DarkBit/dNdE_MSSM.eps")

def showRelic():
  plt.clf()
  tags = getTags()
  colors = iter(colors_list)
  def plotPoint(t):
    info_orig = getDATinfos(t['results_orig'])
    info_gambit = getRESinfos(t['results_gambit'])
    c = colors.next()
    plt.plot( info_orig['oh2'], info_gambit['oh2_DS'], marker='o', color=c, label=t['tag'])
    plt.plot( info_orig['oh2'], info_gambit['oh2_MO'], marker='*', color=c)
  for t in tags:
    try: plotPoint(t)
    except IOError: pass
  plt.plot([0e-2, 2e-1], [0e-2, 2e-1])
  plt.grid()
  plt.legend(frameon=False, loc=2)
  plt.xlabel("Original oh2")
  plt.ylabel("Gambit oh2 (DS (o) & MO (*))")
  plt.savefig("DarkBit/oh2_MSSM.eps")

def showDD():
  plt.clf()
  tags = getTags()
  colors = iter(colors_list)
  def plotPoint(t):
    info_orig = getDATinfos(t['results_orig'])
    info_gambit = getRESinfos(t['results_gambit'])
    c = colors.next()
    plt.loglog( abs(info_orig['gps']), abs(info_gambit['gps_DS']), marker='v', color=c, label=t['tag'])
    plt.loglog( abs(info_orig['gns']), abs(info_gambit['gns_DS']), marker='^', color=c)
    plt.loglog( abs(info_orig['gpa']), abs(info_gambit['gpa_DS']), marker='<', color=c)
    plt.loglog( abs(info_orig['gna']), abs(info_gambit['gna_DS']), marker='>', color=c)
    plt.loglog( abs(info_orig['gps']), abs(info_gambit['gps_MO']), marker='1', color=c)
    plt.loglog( abs(info_orig['gns']), abs(info_gambit['gns_MO']), marker='2', color=c)
    plt.loglog( abs(info_orig['gpa']), abs(info_gambit['gpa_MO']), marker='3', color=c)
    plt.loglog( abs(info_orig['gna']), abs(info_gambit['gna_MO']), marker='4', color=c)
  for t in tags:
    try: plotPoint(t)
    except IOError: pass
  plt.plot([1e-12, 1e-5], [1e-12, 1e-5], zorder=-10)
  plt.grid()
  plt.legend(frameon=False, loc=2)
  plt.xlabel("Couplings original, gps (down), gns (up), gpa (left), gna (right)")
  plt.ylabel("Couplings Gambit, DS (filled) & MO (empty)")
  plt.savefig("DarkBit/DD_MSSM.eps")

if __name__ == '__main__':
  #runtests()  # This can take *very* long thanks to DS relic density routines
  showSpec()
  showRelic()
  showDD()
