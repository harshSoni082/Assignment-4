// program which will print all numbers between 10 and 19, 30 and 39, 50 and 59 ...... 90 and 99
#include <stdio.h>

int main()
{
  for(int i=0; i<101; i++)
  {
    if((i/10) % 2)
    {
      printf("%d, ", i);
    }
  }
  printf("\n");
  return 0;
}
