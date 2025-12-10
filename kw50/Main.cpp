#include "List.h"
#include "../p08/Risiko.h"
#include "../p08/AkzeptablesRisiko.h"
#include "../p08/ExtremesRisiko.h"
#include "../p08/InakzeptablesRisiko.h"
#include <iostream>
using namespace std;
using namespace fhdo_pk2;

void ausgabe(const char* text){
std::cout << text << std::endl;
}
// Test der LinkedList-Klasse
int main(){
  Linked_List<Risiko *> liste;
  liste.append(new AkzeptablesRisiko("AkzeptablesRisiko", 0.1f, 0.2f));
  liste.append(new ExtremesRisiko("ExtremesRisiko", 0.3f, 0.4f, "Nachricht", 0.44f));
  liste.append(new InakzeptablesRisiko("InakzeptablesRisiko", 0.5f, 0.6f, "Nachricht"));
  return 0;
}
