#include <stdbool.h>
#include <stdio.h>
#include "dictionary.h"

int main(){
  printf("%d\n", insert(1));
  printf("%d\n", insert(3));
  printf("%d\n", delete(3));
  printf("%d\n", insert(5));
  printf("%d\n", member(5));
}
