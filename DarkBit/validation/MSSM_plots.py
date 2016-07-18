#!/usr/bin/env python

# Runs the DarkBit MSSM standalone for test slha files and plots results
# Christoph Weniger <c.weniger@uva.nl> 11 Mar 2016

from __future__ import division
from numpy import *
import pylab as plt
import subprocess
import yaml

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
        'results1_gambit': SLHAPATH+"results1_gambit_"+tag+".yaml", 
        'results2_gambit': SLHAPATH+"results2_gambit_"+tag+".yaml", 
        'tag': tag,
        'dNdE_orig': SLHAPATH+tag+".gaspec", 'results_orig': SLHAPATH+tag+'.dat'}

def rungambit(tags):
  slhafile = tags['slha']
  outfile1 = tags['dNdE_gambit']
  outfile2 = tags['results1_gambit']
  outfile3 = tags['results2_gambit']
  print "Running SLHA file", slhafile
  process = subprocess.Popen(
      ('./DarkBit_standalone_MSSM ' + slhafile + ' ' + outfile1 + ' ' + outfile2 + ' ' + outfile3).split(), stdout = subprocess.PIPE)
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

def getRES1infos(filename):
  with open(filename) as f:
    data = yaml.load(f)
  return {
      'oh2_DS': data['oh2']['DS'],
      'oh2_MO': data['oh2']['MO'],
      'gps_DS': data['DD_couplings']['gps']['DS'],
      'gpa_DS': data['DD_couplings']['gpa']['DS'],
      'gns_DS': data['DD_couplings']['gns']['DS'],
      'gna_DS': data['DD_couplings']['gna']['DS'],
      'gps_MO': data['DD_couplings']['gps']['MO'],
      'gpa_MO': data['DD_couplings']['gpa']['MO'],
      'gns_MO': data['DD_couplings']['gns']['MO'],
      'gna_MO': data['DD_couplings']['gna']['MO'],}

def getRES2infos(filename):
  with open(filename) as f:
    data = yaml.load(f)
  return data

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
  plt.savefig("DarkBit/validation/dNdE_MSSM.eps")

def showRelic():
  plt.clf()
  tags = getTags()
  colors = iter(colors_list)
  def plotPoint(t):
    info_orig = getDATinfos(t['results_orig'])
    info_gambit = getRES1infos(t['results1_gambit'])
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
  plt.savefig("DarkBit/validation/oh2_MSSM.eps")

def showBR():
  plt.clf()
  plt.figure(figsize=(15,6))
  tags = getTags()
  colors = iter(colors_list)

  def printBR(t, offset):
    col = colors.next()
    infos = getRES2infos(t['results2_gambit'])
    rates = infos['AnnihilationRates']
    l = []
    for key, value in rates.iteritems():
      l.append([key, value])
    l.sort(key=lambda x: -x[1])
    sv = array([x[1] for x in l])
    channel = array([x[0] for x in l])
    sv_tot = sum(sv)
    br = sv/sv_tot
    btlast = 10
    for b, c in zip(br, channel):
      if b < 1e-5: continue
      plt.plot([offset, offset+1], [b, b], ls='-', lw=2, color=col)
      bt = min(btlast*0.55, b*1.2)
      plt.text(offset+1.4, bt, c, va='center')
      plt.plot([offset+1.1, offset+1.35], [b, bt], 'k', dashes=[1,1])
      btlast = bt
    plt.plot([0, 0], [0, 0], ls='-', color=col, label=t['tag'])

  offset = 1
  for t in tags:
    printBR(t, offset)
    offset += 5.

  plt.gca().set_yscale('log')
  plt.ylim([1e-6, 2])
  plt.xlim([0, 30])
  plt.ylabel("BR")
  plt.tight_layout(pad=0.3)
  plt.legend(frameon=False, loc=3, ncol=5)
  plt.savefig("DarkBit/validation/BR_MSSM.eps")


def showDD():
  plt.clf()
  tags = getTags()
  colors = iter(colors_list)
  def plotPoint(t):
    info_orig = getDATinfos(t['results_orig'])
    info_gambit = getRES1infos(t['results1_gambit'])
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
  plt.savefig("DarkBit/validation/DD_MSSM.eps")

if __name__ == '__main__':
  runtests()  # This can take *very* long thanks to DS relic density routines
  showSpec()
  showRelic()
  showDD()
  showBR()
