// program which will print all numbers which are either between 50 and 70, or less than 20, or more than 90.
#include <stdio.h>

int main()
{
  for(int i=0; i<101; i++)
  {
    if((i < 20)||((i > 50) && (i < 70))||(i > 90))
    {
      printf("%d, ", i);
    }
  }
  printf("\n");
  return 0;
}
