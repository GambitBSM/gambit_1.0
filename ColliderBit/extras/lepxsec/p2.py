# -*- python -*-

from __future__ import division
import numpy as np
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

    def __abs__(self):
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


class LineSegment(object):
    def __init__(self, pt1, pt2, tolerance=0):
        if any([not type(pt1) == P2, not type(pt2) == P2]):
            raise TypeError("Please use Andy's nifty P2 class for the endpoints")
        tolerance = abs(tolerance)
        if pt1.x > pt2.x or (pt1.x == pt2.x and pt1.y > pt2.y):
            rawpt2 = pt1
            rawpt1 = pt2
        else:
            rawpt1 = pt1
            rawpt2 = pt2
        adjustEnds = (rawpt2 - rawpt1) * tolerance
        self.pt2 = rawpt2 + adjustEnds
        self.pt1 = rawpt1 - adjustEnds

    def __abs__(self):
        return abs(self.pt2 - self.pt1)

    def __repr__(self):
        return repr(self.pt1) + " - " + repr(self.pt2)

    def endpoints(self):
        return self.pt1, self.pt2
    def midpoint(self):
        return (self.pt1 + self.pt2)/2.0
    def allpoints(self, nsteps):
        xList = []
        yList = []
        for t in np.linspace(0., 1., nsteps):
            xList.append(self.pt1.x * t + self.pt2.x * (1. - t))
            yList.append(self.pt1.y * t + self.pt2.y * (1. - t))
        return np.array(xList), np.array(yList)

    def b(self):
        return self.intercept()
    def intercept(self):
        if self.pt1.x == self.pt2.x:
            return np.inf
        else:
            return self.pt1.y - self.m() * self.pt1.x

    def m(self):
        return self.slope()
    def slope(self):
        if self.pt1.x == self.pt2.x:
            return np.inf
        else:
            return (self.pt2.y - self.pt1.y) / (self.pt2.x - self.pt1.x)

    def intersectsAt(self, other):
        if not type(other) == LineSegment:
            raise ValueError("Not sure how to determine intersection with " + str(args))

        # If the slopes are equal, they will never intersect
        if self.slope() == other.slope():
            return P2(np.inf, np.inf)

        # If self or other has an infinite slope, change the intercept calculation
        if self.slope() == np.inf:
            assert self.pt2.y >= self.pt1.y
            assert other.pt2.x > other.pt1.x
            xintersect = self.pt1.x
            yintersect = other.m() * xintersect + other.b()
            if all([xintersect >= other.pt1.x, xintersect <= other.pt2.x,
                    yintersect >= self.pt1.y, yintersect <= self.pt2.y]):
                return P2(xintersect, yintersect)
            else:
                return P2(np.inf, np.inf)
        elif other.slope() == np.inf:
            assert other.pt2.y >= other.pt1.y
            assert self.pt2.x > self.pt1.x
            xintersect = other.pt1.x
            yintersect = self.m() * xintersect + self.b()
            if all([xintersect >= self.pt1.x, xintersect <= self.pt2.x,
                    yintersect >= other.pt1.y, yintersect <= other.pt2.y]):
                return P2(xintersect, yintersect)
            else:
                return P2(np.inf, np.inf)
        else:   # Regular intercept calculation
            assert self.pt2.x > self.pt1.x
            assert other.pt2.x > other.pt1.x
            xintersect = (other.b() - self.b()) / (self.m() - other.m())
            yintersect = self.m() * xintersect + self.b()
            if all([xintersect >= self.pt1.x, xintersect <= self.pt2.x,
                    xintersect >= other.pt1.x, xintersect <= other.pt2.x]):
                return P2(xintersect, yintersect)
            else:
                return P2(np.inf, np.inf)
