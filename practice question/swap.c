#include <stdio.h>
int main()
{
   int a, b, swap;
   printf("enter the number of a:");
   scanf("%d", &a);
   printf("enter the number of b:");
   scanf("%d", &b);
   
   a = a + b;
   b = a - b;
   a = a - b;
   printf("the swaping a=%d and b=%d", a, b);
}