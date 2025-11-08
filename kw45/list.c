#include <stdlib.h>
#include <stdio.h>

typedef struct List_element {
  int value;
  struct List_element *next;
} List_element;

int push(int value, List_element **head) {        // <-- Übergabe als Pointer auf Pointer nötig!
  List_element *element = malloc(sizeof(List_element));
  if (element != NULL) {
    element->value = value;
    element->next = NULL;

    if (*head == NULL) {
      *head = element;
    } else {
      // ans Ende der Liste anhängen (wie dein Code implizieren würde)
      List_element *current = *head;
      while (current->next != NULL) {
        current = current->next;
      }
      current->next = element;
    }
    return 1;
  }
  return 0;
}

int delete_element(int value, List_element **head) {   // <-- auch hier Pointer auf Pointer
  if (*head == NULL) {
    return 0;
  }

  List_element *current = *head;
  List_element *prev = NULL;

  // Suchen, bis das Element gefunden ist
  while (current != NULL && current->value != value) {
    prev = current;
    current = current->next;
  }

  if (current == NULL) {
    return 0; // Wert nicht gefunden
  }

  // Wenn das zu löschende Element der Kopf ist
  if (prev == NULL) {
    *head = current->next;
  } else {
    prev->next = current->next;
  }

  free(current);
  return 1;
}

int element_exists(int value, List_element *head) {
  for (List_element *current = head; current != NULL; current = current->next) {
        if (current->value == value)
            return 1;
    }
  return 0;
}

