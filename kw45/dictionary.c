#include "list.h"
#include <stdlib.h>
#define LENGTH 2

// Dictionary ist ein Array von Listenelementen, NICHT von Zeigern!
static List_element *dictionary[LENGTH] = {NULL};

static int hash(int a) {
    return a % LENGTH;  
}

int insert(int a) {
    int h = hash(a);
    // Übergabeadresse des Listenelements, nicht des Zeigers!
    int help = push(a, &dictionary[h]);
    return help;
}

int delete(int a) {
    for (int i = 0; i < LENGTH; i++) {
        if (delete_element(a, &dictionary[i]) == 1) {
            return 1; // konnte gelöscht werden
        }
    }
    return 0; // konnte nicht gelöscht werden
}
  
int member(int a) {
    for (int i = 0; i < LENGTH; i++) {
        if (element_exists(a, dictionary[i]) == 1) {
            return 1; // gefunden
        }
    }
    return 0; // nicht gefunden
}

