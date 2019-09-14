// program which will print all numbers which are multiple of either 3 or 7.
#include <stdio.h>

int main()
{
  for(int i=0; i<101; i+=2)
  {
    if(!(i%3) && !(i%7))
    {
      printf("%d, ", i);
    }
  }
  printf("\n");
  return 0;
}
