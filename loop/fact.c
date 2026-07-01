#include <stdio.h>
int main()
{
   int fact = 1, number, i;
   printf("enter any number:");
   scanf("%d", &number);
   for (i = 1; i <= number; i++)
   {
      fact *= i;
   }
   printf("factorial is %d", fact);
}
