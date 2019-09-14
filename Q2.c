// program which prints all numbers between 20 and 40, and all even numbers between 50 and 80
#include <stdio.h>

int main()
{
  int j = 1;
  for(int i=20; i<81; i+=j)
  {
    if(i < 50)
    {
      printf("%d, ", i);
    }
    else
    {
      j = 2;
      printf("%d, ", i);
    }
  }
  printf("\n");
  return 0;
}
