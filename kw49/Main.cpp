#include "List.h"
#include <iostream>
using namespace std;
using namespace fhdo_pk2;

void ausgabe(const char* text){
std::cout << text << std::endl;
}
// Test der LinkedList-Klasse
int main(){
  Linked_List liste;
  liste.append("Element 1");
  liste.insert("Element 2", 2);
  Linked_List liste2 = liste;
  cout << "Liste:" << endl;
  liste.visit_all(ausgabe);
  liste.remove(2);
  cout << "Liste:" << endl;
  liste.visit_all(ausgabe);
  cout << "Liste2:" << endl;
  liste2.visit_all(ausgabe);
  return 0;
}
