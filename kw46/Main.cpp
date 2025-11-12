#include "List.h"
#include <iostream>
using namespace std;

void work(const char* c){
  std::cout<<c<<std::endl;
}
int main(){
  Linked_List *list = new Linked_List;
  const char *c = "first";
  const char *cc = "secod";
  const char *ccc = "third";
  const char *cccc = "fourth";
  cout<<"append"<<endl;
  list->append(c);
  list->append(cc);
  list->append(ccc);
  list->visit_all(work);
  cout<<"insert"<<endl;
  list->insert(cccc, 2);
  list->visit_all(work);
}
