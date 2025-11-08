#include<stdlib.h>

typedef struct List_element{
  int value;
  struct List_element *next;
} List_element;

int push(int value, List_element *head){
  List_element *element = (List_element *)malloc(sizeof(List_element));
  if(element != NULL){
    if(head == NULL){
      head = element;
    }
    return 1;
  }
  return 0;
}

int delete_element(int value, List_element *head){
  if(head == NULL){
    return 0;
  }
  if(head->value == value){
    if(head->next == NULL){
      free(head);
      return 1;
    }else{
      List_element *help = head;
      head = head->next;
      free(help);
      return 1;
    }
  }else{
      List_element *current = head;
      while(current-> next != NULL && current->value != value){
      current = current->next;
    }
    if(current->next->next != NULL){
      List_element *help = current->next;
      current->next = current->next->next;
      free(help);
      return 1;
    }else{
      free(current->next);
      current->next = NULL;
    }
  }
  return 0;
}

int element_exists(int value, List_element *head){
  if(head == NULL){
    return 0;
  }

  List_element *current = head;
  while(current->next != NULL && current->value != value){
    current = current->next;
  }

  if(current->value == value){
    return 1;
  }else{
    return 0;
  }
}
