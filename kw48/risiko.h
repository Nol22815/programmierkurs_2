#ifndef RISIKO_H_
#define RISIKO_H_

#include <string>

using namespace std;

class Risiko {
private:
  static int id;
  string bezeichnung;
  float eintrittswahrscheinlichkeit;
  float kosten_im_schadensfall;
  string erstellungs_datum;

public:
  Risiko();
  virtual ~Risiko();
  float berechne_risikowert();
  virtual float berechne_rückstellung() = 0;
  virtual void drucke_daten() = 0;
  
  //getter
  int get_id(){
    return id;
  }
  string get_bezeichnung(){
    return bezeichnung;
  }
  float get_eintrittswahrscheinlichkeit(){
    return eintrittswahrscheinlichkeit;
  }
  string get_erstellungs_datum(){
    return erstellungs_datum;
  }
};

#endif
