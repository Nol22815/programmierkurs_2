#ifndef INAKZEPTABLES_RISIKO_H_
#define INAKZEPTABLES_RISIKO_H_

#include <string>
#include "risiko.h"

#endif // !INAKZEPTABLES_RISIKO_H_

class Inakzeptables_Risiko : Risiko {
private:
  string maßnahme;
public:
  Inakzeptables_Risiko();
  virtual ~Inakzeptables_Risiko();
  virtual float berechne_rückstellung() override;
  void drucke_daten() override;
};
