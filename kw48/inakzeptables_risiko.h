#ifndef INAKZEPTABLES_RISIKO_H_
#define INAKZEPTABLES_RISIKO_H_

#include <string>
#include "risiko.h"

class Inakzeptables_Risiko : Risiko {
private:
  string massnahme;
public:
  Inakzeptables_Risiko();
  virtual ~Inakzeptables_Risiko();
  virtual float berechne_rückstellung() override;
  void drucke_daten() override;
  string get_massname(){
    return massnahme;
  }
};

#endif
