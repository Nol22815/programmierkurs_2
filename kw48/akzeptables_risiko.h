#ifndef AKZEPTABLES_RISIKO_H_
#define AKZEPTABLES_RISIKO_H_

#include "risiko.h"

class Akzeptables_Risiko: public Risiko {
public:
  Akzeptables_Risiko(std::string bez, float ew, float kosten);
  float ermittleRueckstellung() const override;
  void druckeDaten() const override;
  virtual ~Akzeptables_Risiko();
};

#endif
