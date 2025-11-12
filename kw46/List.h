class Linked_List {
private:
  struct List_element {
    const char* content;
    List_element *next = nullptr;
  };
  List_element *head = nullptr;
  List_element *tail = nullptr;
public:
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
};
