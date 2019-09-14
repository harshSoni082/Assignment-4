// program which will print all numbers, which are even but not a multiple of either 3 or 5
#include <stdio.h>

int main()
{
  for(int i=0; i<101; i++)
  {
    if(!(i & 1) && (i % 3) && (i % 5))
    {
      printf("%d, ", i);
    }
  }
  printf("\n");
  return 0;
}
