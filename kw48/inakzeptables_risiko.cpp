#include "inakzeptables_risiko.h"
#include <iostream>

using namespace std;

float Inakzeptables_Risiko::berechne_rückstellung() {
  return berechne_risikowert();
}

void Inakzeptables_Risiko::drucke_daten(){
  cout<< "Id" << get_id() << "Akzeptables Risiko \" " << get_bezeichnung() << "\" aus " << get_erstellungs_datum() << "\n" << " Risikowert " << berechne_risikowert() << "; Rückstellung " << berechne_rückstellung() << endl;
}
