# -*- python -*-

from __future__ import division
import math


class P2(object):
    def __init__(self, x=0.0, y=0.0):
        self.x = float(x)
        self.y = float(y)

    def xy(self):
        return self.x, self.y

    def __getitem__(self, i):
        if i == 0: return self.x
        if i == 1: return self.y

    def __setitem__(self, i, v):
        if i == 0: self.x = v
        if i == 1: self.y = v

    def __len__(self):
        return math.sqrt(self.x**2 + self.y**2)

    def __add__(self, other):
        return P2(self.x+other.x, self.y+other.y)

    def __sub__(self, other):
        return P2(self.x-other.x, self.y-other.y)

    def __mul__(self, f):
        # print "MUL"
        return P2(float(f)*self.x, float(f)*self.y)

    def __rmul__(self, f):
        # print "RMUL"
        # if type(f) not in (float, int):
        #     raise NotImplemented()
        return self*f #P2(float(f)*self.x, float(f)*self.y)

    def __div__(self, f):
        return self.__truediv__(f)

    def __truediv__(self, f):
        return P2(self.x/float(f), self.y/float(f))

    def __repr__(self):
        return "(%0.2g, %0.2g)" % (self.x, self.y)


def midpoint(pt1, pt2):
    return (pt1 + pt2)/2.0

def unitnormal(pt1, pt2):
    dx, dy = (pt2 - pt1).xy()
    if dx == 0:
        return P2(dy/abs(dy), 0)
    elif dy == 0:
        return P2(0, dx/abs(dx))
    else:
        dxdy = dx / dy
        sgn = dxdy / abs(dxdy)
        norm = 1.0 / np.sqrt(1 + dxdy**2)
        return -sgn * P2(norm, -norm*dxdy) #< TODO: signs and orientability
