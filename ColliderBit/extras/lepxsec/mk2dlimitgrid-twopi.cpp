#include "Utils.hpp"
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <limits>
#include <map>
#include <utility>
#include <vector>

using Gambit::ColliderBit::P2;
using Gambit::ColliderBit::LineSegment;
typedef std::map<double, std::vector<LineSegment>*> Contours;

// This function goes in ColliderBit:
double xsecAverage(double x, double y, const Contours& limitContours) {
  const P2& point = P2(x, y);
  double average = 0.;
  double totalWeight = 0.;
  P2 rayMaker;
  LineSegment ray, intersectRay;
  double raydius, rmin, xsec_at_rmin;

  for (double angle = 0.; angle < 2.*pi(); angle += pi()/21.) {
    rayMaker.setxy(1000. * cos(angle), 1000. * sin(angle));
    ray.init(point, point + rayMaker);
    rmin = std::numeric_limits<double>::infinity();
    xsec_at_rmin = 0.;

    for (auto limitIter = limitContours.begin(); limitIter != limitContours.end(); ++limitIter) {
      for (auto segmentIter = (*limitIter).second->begin();
                segmentIter != (*limitIter).second->end(); ++segmentIter) {
        intersectRay.init(point, ray.intersectsAt(*segmentIter));
        raydius = intersectRay.r();
        if (raydius < rmin or (raydius == rmin and (*limitIter).first < xsec_at_rmin)) {
          rmin = raydius;
          xsec_at_rmin = (*limitIter).first;
        }
      }
    }

    if (rmin == 0.) {
      totalWeight = 0.;
      average = xsec_at_rmin;
      break;
    } else if (rmin == std::numeric_limits<double>::infinity()) {
      totalWeight = 0.;
      average = std::numeric_limits<double>::infinity();
      break;
    } else {
      totalWeight += sqrt(1./rmin);
      average += sqrt(1./rmin) * xsec_at_rmin;
    }
  }

  if (totalWeight > 0)
    return average / totalWeight;
  else
    return average;
}


LineSegment makeLine(const P2& pt1, const P2& pt2) { return LineSegment(pt1, pt2, 0.01); }


int main(int argc, char *argv[]) {
  if (argc != 4) {
    std::cout<<"\n\nUsage: "<<argv[0]<<" <xmass> <ymass> <filename>\n\n";
    return 1;
  }

  Contours limitContours;
  std::vector<P2> corners;
  std::vector<LineSegment>* contours;


  ///// 0.1 pb /////
  corners.clear();
  corners.push_back(P2(69.8856, 49.8349));
  corners.push_back(P2(69.9824, 51.8415));
  corners.push_back(P2(79.1813, 61.9995));
  corners.push_back(P2(87.7025, 68.5123));
  corners.push_back(P2(90.4137, 72.1439));
  corners.push_back(P2(94.4806, 74.8541));
  corners.push_back(P2(94.4806, 47.1169));
  corners.push_back(P2(92.8345, 47.1278));
  corners.push_back(P2(90.7042, 42.5799));
  corners.push_back(P2(89.0581, 42.0434));
  corners.push_back(P2(87.0246, 41.327));
  corners.push_back(P2(86.6373, 53.7383));
  corners.push_back(P2(85.7658, 53.5616));
  corners.push_back(P2(85.669, 51.9199));
  corners.push_back(P2(85.1849, 50.8282));
  corners.push_back(P2(82.6673, 50.8449));
  corners.push_back(P2(81.2148, 48.8473));
  corners.push_back(P2(79.956, 47.9432));
  corners.push_back(P2(76.8574, 45.774));
  corners.push_back(P2(76.2764, 40.6684));
  corners.push_back(P2(75.8891, 40.6709));
  corners.push_back(P2(74.1461, 44.3321));
  corners.push_back(P2(71.6285, 46.7211));
  corners.push_back(P2(69.8856, 49.8349));

  contours = new std::vector<LineSegment>();
  contours->resize(corners.size() - 1);
  std::transform(corners.begin(), --corners.end(), ++corners.begin(),
                 contours->begin(), makeLine);
  limitContours.insert(std::pair<double, std::vector<LineSegment>*>(0.1, contours));


  ///// 0.2 pb /////
  corners.clear();
  corners.push_back(P2(45., 29.1971));
  corners.push_back(P2(47.8081, 29.3609));
  corners.push_back(P2(48.0018, 36.6589));
  corners.push_back(P2(50.9067, 37.0046));
  corners.push_back(P2(51.7782, 41.1959));
  corners.push_back(P2(60.2993, 49.1686));
  corners.push_back(P2(64.2694, 54.4342));
  corners.push_back(P2(78.794, 66.929));
  corners.push_back(P2(89.1549, 76.1669));
  corners.push_back(P2(94.5, 79.9643));
  corners.push_back(P2(94.5, 33.2477));
  corners.push_back(P2(92.6408, 33.078));
  corners.push_back(P2(92.6408, 33.078));
  corners.push_back(P2(92.9313, 19.39));
  corners.push_back(P2(92.9313, 19.39));
  corners.push_back(P2(90.5106, 18.3111));
  corners.push_back(P2(89.2518, 18.3195));
  corners.push_back(P2(87.0246, 19.9766));
  corners.push_back(P2(86.5405, 24.9068));
  corners.push_back(P2(83.8292, 24.0124));
  corners.push_back(P2(78.9877, 19.4825));
  corners.push_back(P2(75.9859, 18.4075));
  corners.push_back(P2(69.3046, 16.627));
  corners.push_back(P2(62.9137, 15.3921));
  corners.push_back(P2(60.0088, 17.2362));
  corners.push_back(P2(54.8768, 18.3651));
  corners.push_back(P2(53.7148, 13.0809));
  corners.push_back(P2(53.4243, 12.9003));
  corners.push_back(P2(52.1655, 19.843));
  corners.push_back(P2(51.0035, 27.3324));
  corners.push_back(P2(49.9384, 18.5804));
  corners.push_back(P2(48.0986, 18.4101));
  corners.push_back(P2(45., 16.4227));
  corners.push_back(P2(45., 29.1971));

  contours = new std::vector<LineSegment>();
  contours->resize(corners.size() - 1);
  std::transform(corners.begin(), --corners.end(), ++corners.begin(),
                 contours->begin(), makeLine);
  limitContours.insert(std::pair<double, std::vector<LineSegment>*>(0.2, contours));


  ///// 0.3 pb /////
  corners.clear();
  corners.push_back(P2(44.9, 35.219));
  corners.push_back(P2(48.4859, 40.3053));
  corners.push_back(P2(52.456, 43.9286));
  corners.push_back(P2(55.5546, 46.8278));
  corners.push_back(P2(60.8803, 52.9968));
  corners.push_back(P2(65.9155, 57.343));
  corners.push_back(P2(72.7905, 63.1368));
  corners.push_back(P2(79.2782, 68.5682));
  corners.push_back(P2(85.9595, 74.1808));
  corners.push_back(P2(91.0915, 79.4387));
  corners.push_back(P2(93.8996, 82.3398));
  corners.push_back(P2(94.6, 82.3365));
  corners.push_back(P2(94.6, 22.1163));
  corners.push_back(P2(93.125, 21.031));
  corners.push_back(P2(93.0282, 19.2068));
  corners.push_back(P2(92.7377, 18.8438));
  corners.push_back(P2(92.6408, 14.0999));
  corners.push_back(P2(88.6708, 13.0314));
  corners.push_back(P2(85.8627, 13.5975));
  corners.push_back(P2(80.3433, 9.07204));
  corners.push_back(P2(76.5669, 10.9219));
  corners.push_back(P2(74.7271, 9.10931));
  corners.push_back(P2(68.1426, 7.1457));
  corners.push_back(P2(62.8169, 0.));
  corners.push_back(P2(51.9718, 0.136219));
  corners.push_back(P2(51.5845, 15.6497));
  corners.push_back(P2(49.5511, 7.63403));
  corners.push_back(P2(47.9049, 0.));
  corners.push_back(P2(44.9, 0.));
  corners.push_back(P2(44.9, 35.219));

  contours = new std::vector<LineSegment>();
  contours->resize(corners.size() - 1);
  std::transform(corners.begin(), --corners.end(), ++corners.begin(),
                 contours->begin(), makeLine);
  limitContours.insert(std::pair<double, std::vector<LineSegment>*>(0.3, contours));


  ///// 0.5 pb /////
  corners.clear();
  corners.push_back(P2(44.8, 37.0438));
  corners.push_back(P2(49.7447, 43.0342));
  corners.push_back(P2(53.3275, 47.2075));
  corners.push_back(P2(60.3961, 53));
  corners.push_back(P2(63.4947, 55.7167));
  corners.push_back(P2(74.1461, 66.0475));
  corners.push_back(P2(84.507, 76.7451));
  corners.push_back(P2(94.7, 86.1687));
  corners.push_back(P2(94.7, 9.52503));
  corners.push_back(P2(93.0282, 6.43312));
  corners.push_back(P2(91.963, 5.52778));
  corners.push_back(P2(88.9613, 2.81048));
  corners.push_back(P2(85.9595, 2.46543));
  corners.push_back(P2(85.8627, -0.1));
  corners.push_back(P2(44.8, -0.1));
  corners.push_back(P2(44.8, 37.0438));

  contours = new std::vector<LineSegment>();
  contours->resize(corners.size() - 1);
  std::transform(corners.begin(), --corners.end(), ++corners.begin(),
                 contours->begin(), makeLine);
  limitContours.insert(std::pair<double, std::vector<LineSegment>*>(0.5, contours));


  ///// 2.0 pb /////
  corners.clear();
  corners.push_back(P2(44.7, 41.9708));
  corners.push_back(P2(52.2623, 50.1343));
  corners.push_back(P2(62.5264, 58.6428));
  corners.push_back(P2(73.081, 68.2443));
  corners.push_back(P2(87.8961, 82.3796));
  corners.push_back(P2(94.8, 89.2702));
  corners.push_back(P2(94.8, -0.2));
  corners.push_back(P2(44.7, -0.2));
  corners.push_back(P2(44.7, 41.9708));

  contours = new std::vector<LineSegment>();
  contours->resize(corners.size() - 1);
  std::transform(corners.begin(), --corners.end(), ++corners.begin(),
                 contours->begin(), makeLine);
  limitContours.insert(std::pair<double, std::vector<LineSegment>*>(2.0, contours));


  std::ifstream inxFile(argv[1]);
  std::ifstream inyFile(argv[2]);
  std::ofstream outFile(argv[3]);
  double x, y;
  if (!outFile.is_open())
    std::cout<<"\n\nCould not open file named: "<<argv[3]<<"\n\n";
  else if (!inxFile.is_open())
    std::cout<<"\n\nCould not open file named: "<<argv[1]<<"\n\n";
  else if (!inyFile.is_open())
    std::cout<<"\n\nCould not open file named: "<<argv[2]<<"\n\n";
  else while (inxFile.good() and inyFile.good()) {
    inxFile>>x;
    inyFile>>y;
    outFile<<xsecAverage(x, y, limitContours)<<"\n";
  }
  outFile.close();

  return 0;
}
