#include<stdio.h>

void printEinMalEins()
{
  int i = 0;
  int j = 0;

  printf("Einmaleins: \n");
  printf("Erste Zahl: ");
  scanf("%d", &i);

  printf("Zweite Zahl: ");
  scanf("%d", &j);

  for(int k = 1; k < 11; k++){
    for(int l = i; l <= j; l++){
      printf("%d \t", k*l);
    }
    printf("\n");
  }
}
