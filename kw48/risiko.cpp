#include "risiko.h"
int Risiko::id = 0;

Risiko::Risiko(){
  erstellungs_datum = "11/11/2011";
  id++;
}

float Risiko::berechne_risikowert(){
  return kosten_im_schadensfall * eintrittswahrscheinlichkeit;
}
