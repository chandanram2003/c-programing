#include <stdio.h>
int main()
{
    int table, i, number;
    printf("enter the number:");
    scanf("%d", &table);
    for (i = 1; i <= 10; i++)
    {
        number = table * i;
    }
    printf("table is %d", number);
}