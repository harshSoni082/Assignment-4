// program which prints all even numbers between 20 and 40, and all odd numbers between 50 and 80
#include <stdio.h>

int main()
{
  for(int i=1; i<82; i+=2)
  {
    if(i < 40)
    {
      printf("%d, ", i);
    }
    else
    {
      printf("%d, ", i-1);
    }
  }
  printf("\n");
  return 0;
}
