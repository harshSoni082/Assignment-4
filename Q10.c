// program, which will print those numbers whose last digit is between 5 and 8.
#include <stdio.h>

int main()
{
  for(int i=0; i<101; i++)
  {
    if(((i%10) > 5) && ((i%10) < 8))
    {
      printf("%d, ", i);
    }
  }
  printf("\n");
  return 0;
}
