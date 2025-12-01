#include "risiko.h"
#include <iostream>

class Akzeptables_Risiko : Risiko{
};

void Risiko::drucke_daten(){
  cout<< "Id" << get_id() << "Akzeptables Risiko \" " << get_bezeichnung() << "\" aus " << get_erstellungs_datum() << "\n" << " Risikowert " << berechne_risikowert() << "; Rückstellung " << berechne_rückstellung() << endl;
}
