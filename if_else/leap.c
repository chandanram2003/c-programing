#include <stdio.h>
int main()
{
    int num;
    printf("enter the year:");
    scanf("%d", &num);
    if (num % 4 == 0)
    {
        printf("leap year");
    }
    else
    {
        printf("not leap year");
    }
}