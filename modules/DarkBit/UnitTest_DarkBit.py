#!/usr/bin/env python

from __future__ import division
from numpy import *
import pylab as plt
import yaml
from kitbag import DSspectra

Colors = iter(['k', 'b', 'g', 'y', 'm', 'r'])

for i in range(4, 10):
    with open('../UnitTest_MSSMbenchmarks_DarkSUSY_%s.yml'%i) as f:
        data = yaml.load(f)

    mass = data['ParticleMasses']['Mchi']

    x = array(data['GammaRaySpectrum']['E'], dtype='float')
    y = array(data['GammaRaySpectrum']['dNdE'], dtype='float')
    color = Colors.next()
    plt.loglog(x, y*x**2*mass**2, marker='.', color=color)

#    if i == 6:
#        try:
#            sv = data['AnnihilationRates']['gg']
#            s = DSspectra.spec(channel='gg', mass = mass, type='gam'); y = s(x)
#            plt.loglog(x, y*x**2*sv, lw=2, color=color)
#        except:
#            pass


Colors = iter(['k', 'b', 'g', 'y', 'm', 'r'])

for name in ['FMCp03000765', 'JE56C_003717', 'JE58D_007879', 'JE67B_006998',
             'JE67D_001840', 'JE87O_006600'][:]:
    x, y = loadtxt('slha-benchmarks/14-12-2014_joakim/'+name+'.gaspec').T
    plt.loglog(x, y*x**2, ls='--', label=name, color=Colors.next())



plt.legend(frameon=False, loc=4)
plt.ylim([1e-32, 1e-23])
plt.xlim([1e-1, 1e4])
plt.xlabel("Photon energy [GeV]")
plt.ylabel("E2 dN/dE <sigma v> [GeV*cm3/s]")
plt.savefig('UnitTest_MSSMbenchmarks_DarkSUSY.eps')
