typedef struct List_element{
  int value;
  struct List_element *next;
}List_element;

int push(int value, List_element *head);
int delete_element(int value, List_element *head);
int element_exists(int value, List_element *head);
