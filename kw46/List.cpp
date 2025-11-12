#include "List.h"
#include <cstring>

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
    head = head->next;
    delete help;
  }else {
    List_element *ptr = head;

    for (int i = 0;ptr->next->next != nullptr && i < p; i++){
      ptr = ptr->next;
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
  List_element *ptr = head;
  while(ptr != nullptr){
    work(ptr->content);
    ptr = ptr->next;
  }
}
