#include "extremes_risiko.h"
#include <iostream>

using namespace std;

float Extremes_Risiko::berechne_rückstellung(){
  return versicherungsbeitrag;
}

void Extremes_Risiko::drucke_daten(){
  cout<< "Id" << get_id() << "Extremes Risiko \" " << get_bezeichnung() << "\" aus " << get_erstellungs_datum() << "\n" << " Risikowert " << berechne_risikowert() << "; Massname " << get_massname() << endl;
}
