#include<stdio.h>
#include<math.h>

void intToBinary(unsigned short a)
{
  int bits = 16;
  for(int i = bits-1; i >= 0; i--){
    int bit = (a / (int)pow(2, i))%2;
    printf("%d", bit);
  }
  printf("\n");
}
