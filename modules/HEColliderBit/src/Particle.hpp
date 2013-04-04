#pragma once

#include "Math.hpp"


class Particle {
public:

  Particle()
    : _pdgId(0) {  }

  Particle(double px, double py, double pz, double E, int pdgid)
    : _p4(px, py, pz, E), _pdgId(pdgid) {  }

  Particle(const Particle& p)
    : _p4(p.mom()), _pdgId(p.pid()) {  }

  Particle& operator=(const Particle& p) {
    _p4 = p.mom();
    _pdgId = p.pid();
  }


  int pid() const { return _pdgId; }
  void setPid(int pid) { _pdgId = pid; }

  const P4& mom() const { return _p4; }
  void setMom(const P4& p4) { _p4 = p4; }

private:

  P4 _p4;
  int _pdgId;

};
