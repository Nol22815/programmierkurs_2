#include "Iterator.h"
namespace fhdo_pk2{
class Linked_List {
private:
  struct List_element {
    const char* content;
    List_element *next = nullptr;
  };
  List_element *head = nullptr;
  List_element *tail = nullptr;
 
  class List_Iterator : public Iterator {
    public:
    List_element *current_node;
    List_Iterator(List_element *start_node){
      current_node = start_node;
    };
    bool has_next(){
      return current_node != nullptr;
    }

    const char* next() {
      List_element *tmp = current_node;
      current_node = current_node->next;

      return tmp->content;
    }
  }; 
public:
  Linked_List(){};
  Linked_List(const Linked_List& origin);
  ~Linked_List(){};
  int append(const char* text);
  int insert(const char* text, int p);
  int remove(int p);
  const char *get(int p);
  int index_of(const char *text);
  const char *first(){
    return head ? head->content : nullptr;
  };
  const char *last(){
    return tail ? tail->content : nullptr;
  };
  void visit_all(void (*work)(const char* t));
  
  Iterator* iterator();
};
}
