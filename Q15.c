// program which will print all even numbers between 10 and 29, 40 and 59, 70 and 89
#include <stdio.h>

int main()
{
  for(int i=0; i<100; i++)
  {
    if(((i/10) % 3 != 0)&&(i % 2 == 0))
    {
      printf("%d, ", i);
    }
  }
  printf("\n");
  return 0;
}
