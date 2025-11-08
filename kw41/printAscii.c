#include <stdio.h>

void printAscii(int s)
{
  int char_per_row = (127-32)/s;
  int help = 0;
  for(int i = 32; i < 127; i++)
  {
    char c = i;
    if(help <= char_per_row)
    {
      printf("%d %c\t", i, c);
      help++;
    }else{
      help = 0;
      printf("\n");
      printf("%d %c\t", i, c);
      help++;
    }
  }
  printf("\n");
}


