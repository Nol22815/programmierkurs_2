#include "Iterator.h"
namespace fhdo_pk2{
template <typename T>
class Linked_List {
private:
  struct List_element {
    const char* content;
    List_element *next = nullptr;
  };
  List_element *head = nullptr;
  List_element *tail = nullptr;
 
  class List_Iterator : public Iterator<T> {
    public:
    List_element *current_node;
    List_Iterator(List_element *start_node){
      current_node = start_node;
    };
    bool has_next(){
      return current_node != nullptr;
    }

    const T* next() {
      List_element *tmp = current_node;
      current_node = current_node->next;

      return tmp->content;
    }
  }; 
public:
  Linked_List(){};
  Linked_List(const Linked_List& origin);
  ~Linked_List(){};
  int append(const T t);
  int insert(const T t, int p);
  int remove(int p);
  const T get(int p);
  void visit_all(void (*work)(const T t));
  
  Iterator<T>* iterator();
};
template <typename T> int Linked_List<T>::append(const T t){
  List_element *element = new struct List_element;
  element->content = t;
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

template <typename T> int Linked_List<T>::insert(const T t, int p){
  //falls Liste leer ist;
  if(!head){
    return append(t);
  }
  List_element *element = new struct List_element;
  element->content = t;

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

template <typename T> int Linked_List<T>::remove(int p){
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

template <typename T> const T Linked_List<T>::get (int p){
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

template <typename T> void Linked_List<T>::visit_all(void (*work)(const T t)){
  Iterator<T> *it = iterator();

  while(it->has_next()){
    work(it->next());
  }

  delete it;
}

template <typename T> Iterator<T>* Linked_List<T>::iterator(){
  return new List_Iterator(head);
}

template <typename T> Linked_List<T>::Linked_List(const Linked_List<T>& origin){
  List_element *tmp = origin.head;

  while(tmp != nullptr){
    append(tmp->content);
    tmp = tmp->next;
  }
}

}
