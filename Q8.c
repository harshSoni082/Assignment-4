// program which will print all numbers, which are either a multiple of 3 or 5 but not both
#include <stdio.h>

int main()
{
  for(int i=0; i<101; i++)
  {
    if((i % 3) && (i % 5))
    {
      printf("%d, ", i);
    }
  }
  printf("\n");
  return 0;
}
