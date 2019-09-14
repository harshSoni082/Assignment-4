// program which will print those numbers whose last digit is multiple of 3.
#include <stdio.h>

int main()
{
  for(int i=0; i<101; i++)
  {
    if(!((i%10) % 3))
    {
      printf("%d, ", i);
    }
  }
  printf("\n");
  return 0;
}
