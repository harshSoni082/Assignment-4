// program which will print all odd numbers between 0 and 9, 20 and 29, 40 and 49, ... , 80 and 89 and all even numbers between 10 and 19, 30 and 39, ... , 90 and 99
#include <stdio.h>

int main()
{
  for(int i=0; i<101; i++)
  {
    if((i/10) % 2)&&(i % 2 == 0)
    {
      printf("%d, ", i);
    }
    else if(!((i/10) % 2))&&(i % 2)
    {
      printf("%d, ", i);
    }
  }
  printf("\n");
  return 0;
}
