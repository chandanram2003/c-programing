#include <stdio.h>
void main()
{
  int number, i, table;
  printf("enter any number:");
  scanf("%d", &number);
  for (i = 1; i <= 10; i++)
  {
    table = number * i;

    printf("%d*%d=%d\n", i, number, table);
  }
}