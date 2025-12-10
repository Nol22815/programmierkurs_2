#include "Risiko.h"

int Risiko::idCounter = 0;

Risiko::Risiko(std::string bez, float ew, float kosten) 
    : id(idCounter++),
      bezeichnung(bez), 
      eintrittswahrscheinlichkeit(ew), 
      kosten_im_schadensfall(kosten), 
      erstellungsdatum("11/2024") {} 

Risiko::~Risiko() {}

float Risiko::berechneRisikowert() const {
    return eintrittswahrscheinlichkeit * kosten_im_schadensfall;
}