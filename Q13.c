// program which will print those numbers whose first digit leaves remainder 1 when divided by 3
#include <stdio.h>

int main()
{
  for(int i=0; i<101; i++)
  {
    if((i/10) % 3 == 1)
    {
      printf("%d, ", i);
    }
  }
  printf("\n");
  return 0;
}
