#include "list.h"

#define LENGTH 2

static List_element dictionary[LENGTH];

static int hash(int a){
  return a % LENGTH;  
}

int insert(int a){
  int h = hash(a);

  return push(a, &dictionary[h]);
}

int delete(int a){
  for(int i = 0; i < LENGTH; i++){
    if(delete_element(a, &dictionary[i])== 1){
      return 1;//konnte gelöscht werden
    }
  }
  return 0;//konnte nicht gelöscht werden
}
  
int member(int a){
  for(int i = 0; i < LENGTH; i++){
    if(element_exists(a, &dictionary[i]) == 1){
      return 1;//konnte gefunden werden
    }
    return 0;//konnte nicht gefunden werden
  }
}
