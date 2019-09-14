 // program which prints all even numbers between 20 and 70
 #include <stdio.h>

 int main()
 {
   printf("All even numbers between 20 and 70: ");
   for(int i=20; i<=70; i+=2)
   {
     printf("%d, ", i);
   }
   printf("\n");
   return 0;
 }
