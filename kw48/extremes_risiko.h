#ifndef EXTREMES_RISIKO_H_
#define EXTREMES_RISIKO_H_

#include "inakzeptables_risiko.h"

class Extremes_Risiko: Inakzeptables_Risiko {
private:
  float versicherungsbeitrag;
public:
  Extremes_Risiko();
  virtual ~Extremes_Risiko();
  virtual float berechne_rückstellung() override;
  void drucke_daten() override;
};

#endif
