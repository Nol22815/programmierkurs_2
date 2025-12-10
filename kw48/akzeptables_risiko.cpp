#include "akzeptables_risiko.h"
#include "risiko.h"
#include <iostream>

Akzeptables_Risiko::Akzeptables_Risiko(std:: string bez, float ew, float kosten) : Risiko(bez, ew, kosten){}

float Akzeptables_Risiko::ermittleRueckstellung() const {
  return 0.0f;
}

void Risiko::drucke_daten(){
  cout<< "Id" << get_id()
      << "Akzeptables Risiko \" " 
      << get_bezeichnung() 
      << "\" aus " 
      << get_erstellungs_datum() 
      << "\n" 
      << " Risikowert " 
      << berechne_risikowert() 
      << "; Rückstellung " 
      << berechne_rückstellung() 
      << endl;
}
