#pragma once

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <limits>
#include <map>
#include <string>
#include <utility>
#include <vector>

#include "gambit/Elements/shared_types.hpp"
#include "gambit/ColliderBit/limits/PointsAndLines.hpp"

namespace Gambit {
  namespace ColliderBit {

    /// @brief Factory function for lines
    inline LineSegment makeLine(const P2& pt1, const P2& pt2) { return LineSegment(pt1, pt2); }

    /// @brief Base class for experimental limit curve interpolation
    class BaseLimitContainer {
      /// @name Types and Storage
      //@{
      protected:
        typedef std::vector<P2> Corners;
        typedef std::vector<LineSegment> Contours;
        typedef std::vector<LineSegment>* ContoursPointer;
        typedef std::map<unsigned, std::vector<LineSegment>*> LimitContours;
        typedef std::pair<unsigned, std::vector<LineSegment>*> LimitContourEntry;
        /// @note Inherited classes must fill the following members:
        // The collection of all limit values, sorted from min limit to max limit
        std::vector<double> _limitValuesSorted;
        // The collection of all limit contours
        LimitContours _limitContours;
        // Some point external to all limit contours
        P2 _externalPoint;
      //@}

      /// @name Construction and Destruction
      //@{
      public:
        BaseLimitContainer() { }
        virtual ~BaseLimitContainer() { }
      //@}
      
      /// @name Point interpolation, conversion, and region checks
      //@{
      public:
        /// @brief Convert a point from pixel units to axis units, creating a P2
        virtual P2 convertPt(double x, double y) = 0;
        /// @brief Check to see if the point is within the exclusion region
        virtual bool isWithinExclusionRegion(double x, double y) = 0;
        /// @brief Return the limit value outside of the exclusion region
        virtual double specialLimit(double, double)
        {
          return std::numeric_limits<double>::infinity();
        }
        /// @brief Two-pi averaging interpolator to find limits between limit curves
        double limitAverage(double x, double y) {
          if (!isWithinExclusionRegion(x, y)) return specialLimit(x, y);
          const P2& point = P2(x, y);
          const LineSegment& externalLine = LineSegment(point, _externalPoint);
          P2 rayMaker;
          LineSegment ray, intersectLine;
          double r, rmin;
          double average, totalWeight, thisLimit, nextBestLimit;
          unsigned intersectCounter, index;

          // First, find the inner-most contour in which lies point.
          for (index=0; index<_limitValuesSorted.size(); index++) {
            intersectCounter = 0; 
            thisLimit = _limitValuesSorted[index];
            for (auto segmentIter = _limitContours.at(index)->begin();
                      segmentIter != _limitContours.at(index)->end(); ++segmentIter)
              if (externalLine.intersectsAt(*segmentIter).r() < std::numeric_limits<double>::infinity())
                intersectCounter++;
            if (intersectCounter % 2) break;
            thisLimit = -1.;
          }

          if (thisLimit <= 0.)
            // If no such contour is found, return infinity.
            return std::numeric_limits<double>::infinity();
          else if (index == 0)
            // If the inner most contour is found, return that limit.
            return thisLimit;
          else
            // Otherwise, store the next best limit for the average.
            nextBestLimit = _limitValuesSorted[index-1];

          // Scan over all the angles around the current point to perform the average.
          average = 0.;
          totalWeight = 0.;
          for (double angle = 0.; angle < 2.*acos(-1); angle += acos(-1)/41.) {
            // Make a ray for each angle.
            rayMaker.setxy(1000. * cos(angle), 1000. * sin(angle));
            ray.init(point, point + rayMaker);

            // For each ray, look for intersections with the next best limit.
            rmin = std::numeric_limits<double>::infinity();
            for (auto segmentIter = _limitContours.at(index-1)->begin();
                      segmentIter != _limitContours.at(index-1)->end(); ++segmentIter) {
              intersectLine.init(point, ray.intersectsAt(*segmentIter));
              r = intersectLine.r();
              if (r <= rmin) rmin = r;
            }
            if (rmin == 0.) {
              totalWeight = -1.;
              average = nextBestLimit;
              break;
            } else {
              totalWeight += sqrt(1./rmin);
              average += sqrt(1./rmin) * nextBestLimit;
            }

            // For each ray, also look for intersections with the current limit.
            rmin = std::numeric_limits<double>::infinity();
            for (auto segmentIter = _limitContours.at(index)->begin();
                      segmentIter != _limitContours.at(index)->end(); ++segmentIter) {
              intersectLine.init(point, ray.intersectsAt(*segmentIter));
              r = intersectLine.r();
              if (r <= rmin) rmin = r;
            }
            if (rmin == 0.) {
              totalWeight = -1.;
              average = thisLimit;
              break;
            } else {
              totalWeight += sqrt(1./rmin);
              average += sqrt(1./rmin) * thisLimit;
            }
          }

          if (totalWeight > 0)
            return average / totalWeight;
          else
            return average;
        }
        /// @brief Dump limit average data into a file for average debugging
        void dumpPlotData(double xlow, double xhigh, double ylow, double yhigh,
                          std::string filename, int ngrid=1000) {
          double x,y;
          std::ofstream outFile(filename.c_str(), std::ofstream::trunc);
          for (int xi=0; xi<=ngrid; xi++) {
            x = xlow + (xhigh - xlow) * xi / ngrid;
            for (int yi=0; yi<=ngrid; yi++) {
              y = ylow + (yhigh - ylow) * yi / ngrid;
              outFile << x << " " << y << " " << limitAverage(x,y) << "\n";
            }
          }
          outFile.close();
        }
        /// @brief Dump input limit contour data into a file for limit debugging
        void dumpLightPlotData(std::string filename, int nperLine=20) {
          P2 point;
          std::ofstream outFile(filename.c_str(), std::ofstream::trunc);
          for (auto limitIter = _limitContours.begin(); limitIter != _limitContours.end(); ++limitIter) {
            for (auto segmentIter = (*limitIter).second->begin();
                      segmentIter != (*limitIter).second->end(); ++segmentIter) {
              for (double t=0.; t<=1.; t+=1./nperLine) {
                point = (*segmentIter).getp1() * t + (*segmentIter).getp2() * (1. - t);
                outFile << point.getx() << " " << point.gety() << " "
                        << (*limitIter).first << "\n";
              }
            }
          }
          outFile.close();
        }
      //@}
    };


  }
}
