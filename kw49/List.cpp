#include "List.h"
#include <cstring>
namespace fhdo_pk2{
int Linked_List::append(const char* text){
  List_element *element = new struct List_element;
  element->content = text;
  if(head == nullptr){
    head = element;
    tail = element;
    return 1;
  }else {
    tail->next=element;
    tail = tail->next;
    return 1;
  }
  return 0;
}

int Linked_List::insert(const char* text, int p){
  //falls Liste leer ist;
  if(!head){
    return append(text);
  }
  List_element *element = new struct List_element;
  element->content = text;

  //falls element an erste stelle muss;
  if(p == 0){
    element->next = head;
    head = element;
    return 1;
  }else{
    //suche nach stelle p-1
    List_element *ptr = head;
    for (int i = 0; ptr->next != nullptr && i < p; i++){
      ptr = ptr->next;
    }
    element->next = ptr->next;
    ptr->next = element;
    return 1;
  }

  return 0;
}

int Linked_List::remove(int p){
  //falls liste leer
  if(!head){
    return 0;
  }else if(p == 0){
    List_element *help = head;
    if(head == tail){
      tail = nullptr;
    }
    head = head->next;
    delete help;
    return 1;
  }else {
    List_element *ptr = head;

    for (int i = 0;ptr->next->next != nullptr && i < p; i++){
      ptr = ptr->next;
    }
    if(ptr->next == tail){
      tail = nullptr;
    }
    delete ptr->next;
    ptr->next = nullptr;
    return 1;
  }
  return 0;

}

const char* Linked_List::get (int p){
  if(!head){
    return nullptr;
  }

  int i = 0;
  List_element *ptr = head;

  for (i; ptr->next != nullptr && i <= p; i++){
    ptr = ptr->next;
  }

  if(i != p){
      return nullptr;
  }else{
      return ptr->content;
    }
}

int Linked_List::index_of(const char *text){
  if(!head){
    return -1;
  }

  int counter = 0;
  List_element *ptr = head;

  while(ptr->next != nullptr){
    if(strcmp(ptr->content, text)==0){
      return counter;
    }
    counter++;
    ptr = ptr->next;
  }
  return -1;
}

void Linked_List::visit_all(void (*work)(const char* t)){
  Iterator *it = iterator();

  while(it->has_next()){
    work(it->next());
  }

  delete it;
}

Iterator* Linked_List::iterator(){
  return new List_Iterator(head);
}

Linked_List::Linked_List(const Linked_List& origin){
  List_element *tmp = origin.head;

  while(tmp != nullptr){
    append(tmp->content);
    tmp = tmp->next;
  }
}
}
