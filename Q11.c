// program which will print those numbers whose sum of both digits is multiple of 7
#include <stdio.h>

int main()
{
  for(int i=0; i<101; i++)
  {
    if(!(((i%10)+(i/10)) % 7))
    {
      printf("%d, ", i);
    }
  }
  printf("\n");
  return 0;
}
