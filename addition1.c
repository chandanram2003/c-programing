#include <stdio.h>
int main()
{
  int a, b, c;
  printf("enter two number:");
  scanf("%d%d", &a, &b);
  c = a + b;
  printf("addition of %d and %d is %d\n", a, b, c);
  c = a - b;
  printf("substraction of %d and %d is %d\n", a, b, c);
  c = a * b;
  printf("multiplection of %d and %d is %d\n", a, b, c);
  c = a / b;
  printf("division of %d and %d is %d\n", a, b, c);
}