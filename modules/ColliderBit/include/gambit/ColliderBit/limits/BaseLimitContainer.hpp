#pragma once

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <fstream>
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
    inline LineSegment makeLine(const P2& pt1, const P2& pt2) { return LineSegment(pt1, pt2, 0.01); }

    /// @brief Base class for experimental limit curve interpolation
    class BaseLimitContainer {
      /// @name Types and Storage
      //@{
      protected:
        typedef std::vector<P2> Corners;
        typedef std::vector<LineSegment> Contours;
        typedef std::vector<LineSegment>* ContoursPointer;
        typedef std::map<double, std::vector<LineSegment>*> LimitContours;
        typedef std::pair<double, std::vector<LineSegment>*> LimitContourEntry;
        /// @note Inherited classes must fill their own _limitContours
        LimitContours _limitContours;
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
        virtual double specialLimit(double x, double y) {
          return std::numeric_limits<double>::infinity();
        }
        /// @brief Two-pi averaging interpolator to find limits between limit curves
        double limitAverage(double x, double y) {
          if (!isWithinExclusionRegion(x, y)) return specialLimit(x, y);
          const P2& point = P2(x, y);
          double average = 0.;
          double totalWeight = 0.;
          P2 rayMaker;
          LineSegment ray, intersectRay;
          double raydius, rmin, limitAtRmin;

          for (double angle = 0.; angle < 2.*acos(-1); angle += acos(-1)/21.) {
            rayMaker.setxy(1000. * cos(angle), 1000. * sin(angle));
            ray.init(point, point + rayMaker);
            rmin = std::numeric_limits<double>::infinity();
            limitAtRmin = 0.;

            for (auto limitIter = _limitContours.begin(); limitIter != _limitContours.end(); ++limitIter) {
              for (auto segmentIter = (*limitIter).second->begin();
                        segmentIter != (*limitIter).second->end(); ++segmentIter) {
                intersectRay.init(point, ray.intersectsAt(*segmentIter));
                raydius = intersectRay.r();
                if (raydius < rmin or (raydius == rmin and (*limitIter).first < limitAtRmin)) {
                  rmin = raydius;
                  limitAtRmin = (*limitIter).first;
                }
              }
            }

            if (rmin == 0.) {
              totalWeight = 0.;
              average = limitAtRmin;
              break;
            } else if (rmin == std::numeric_limits<double>::infinity()) {
              totalWeight = 0.;
              average = std::numeric_limits<double>::infinity();
              break;
            } else {
              totalWeight += sqrt(1./rmin);
              average += sqrt(1./rmin) * limitAtRmin;
            }
          }

          if (totalWeight > 0)
            return average / totalWeight;
          else
            return average;
        }
        /// @brief Dump limit average data into a file for limit debugging
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
