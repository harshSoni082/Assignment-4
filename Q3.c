// program which will print all even numbers less than 50 and all odd numbers more than 50
#include <stdio.h>

int main()
{
  for(int i=1; i<101; i+=2)
  {
    if(i < 50)
    {
      printf("%d, ", i);
    }
    else
    {
      printf("%d, ", i+1);
    }
  }
  printf("\n");
  return 0;
}
