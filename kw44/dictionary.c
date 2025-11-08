#include <stdbool.h>

#define LENGTH 2

enum{
  FREI, 
  GELOESCHT,
  BELEGT
} typedef flag;

typedef struct{
  int value;
  flag flag;
} Kontainer;

static Kontainer dictionary[LENGTH];

static int hash(int a){
  return a % LENGTH;
}

int insert(int a){
  int start_hash = hash(a);
  int hash = start_hash;

  Kontainer *kontainer_ptr = &dictionary[start_hash];
  
  while(kontainer_ptr->flag==BELEGT){
    hash = (hash + 1) % LENGTH;
    kontainer_ptr = &dictionary[hash];
    if(hash == start_hash){
      return 0;
    }
  }
  
  kontainer_ptr->flag = BELEGT;
  kontainer_ptr->value = a;
  return 1;
}

int delete(int a){
  int start_hash = hash(a);
  int hash = start_hash;

  Kontainer *kontainer_ptr = &dictionary[start_hash];
  while(kontainer_ptr->value != a || kontainer_ptr->flag == GELOESCHT){
    hash = (hash + 1) % LENGTH;
    kontainer_ptr = &dictionary[hash];
    if(hash == start_hash){
      return 0;
    }
  }

  kontainer_ptr->flag = GELOESCHT;
  return 1;
}

bool member(int a){
  int start_hash = hash(a);
  int hash = start_hash;

  Kontainer *kontainer_ptr = &dictionary[start_hash];
  while(kontainer_ptr->value != a){
    hash = (hash +1) % LENGTH;
    kontainer_ptr = &dictionary[hash];
    if(hash==start_hash){
      return false;
    }
  }
  return true;
}
