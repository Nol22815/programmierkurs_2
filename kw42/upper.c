#include <stdio.h>

char to_upper_case(char c)
{
  return c -= 32;
}

void upper (char text[])
{
  int count = 0;
  while(text[count] != '\0'){
    if(text[count] >= 97 && text[count] <=122){
      text[count] = to_upper_case(text[count]);
    }
    count++;
  }

  printf("Ergebnis: %s \n", text);
}

