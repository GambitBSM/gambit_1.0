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


class LineSegment(object):
    def __init__(self, pt1, pt2):
        if any([not type(pt1) == P2, not type(pt2) == P2]):
            raise TypeError("Please use Andy's nifty P2 class for the endpoints")
        if pt1.x > pt2.x:
          self.pt2 = pt1
          self.pt1 = pt2
        elif pt1.x == pt2.x:
          if pt1.y > pt2.y:
            self.pt2 = pt1
            self.pt1 = pt2
          else:
            self.pt1 = pt1
            self.pt2 = pt2
        else:
          self.pt1 = pt1
          self.pt2 = pt2

    def __len__(self):
        return len(self.pt2 - self.pt1)

    def endpoints(self):
        return self.pt1, self.pt2

    def midpoint(self):
        return (self.pt1 + self.pt2)/2.0

    def slope(self):
        if pt1.x == pt2.x:
            return np.inf
        else:
            return (pt2.y - pt1.y) / (pt2.x - pt1.x)

    def intersectsAt(self, *args):
        # Ready the other LineSegment
        other = None
        if len(args) == 1:
            other = args[0]
        elif len(args) == 2:
            other = LineSegment(args[0], args[1])
        if not type(other) == LineSegment:
            raise ValueError("Not sure how to determine intersection with " + str(args))

        # If the slopes are equal, they will never intercept
        if self.slope() == other.slope():
            return P2(np.inf, np.inf)

        # If self or other has an infinite slope, change the intercept calculation
        if self.slope() == np.inf:
            xintersect = self.pt1.x
            yintersect = other.slope() * (xintersect - other.pt1.x) + other.pt1.y
            if all([xintersect >= other.pt1.x, xintersect <= other.pt2.x,
                    yintersect >= self.pt1.y, yintersect <= self.pt1.y]):
                return P2(xintersect, yintersect)
            else:
                return P2(np.inf, np.inf)
        elif other.slope() == np.inf:
            xintersect = other.pt1.x
            yintersect = self.slope() * (xintersect - self.pt1.x) + self.pt1.y
            if all([xintersect >= self.pt1.x, xintersect <= self.pt2.x,
                    yintersect >= other.pt1.y, yintersect <= other.pt1.y]):
                return P2(xintersect, yintersect)
            else:
                return P2(np.inf, np.inf)
        else:   # Regular intercept calculation
            xintersect = (other.pt1.y - other.slope()*other.pt1.x - self.pt.y
                        + self.slope()*self.pt1.x) / (self.slope() - other.slope())
            yintersect = self.slope() * (xintersect - self.pt1.x) + self.pt1.y
            if all([xintersect >= self.pt1.x, xintersect <= self.pt2.x,
                    xintersect >= other.pt1.x, xintersect <= other.pt2.x]):
                return P2(xintersect, yintersect)
            else:
                return P2(np.inf, np.inf)
