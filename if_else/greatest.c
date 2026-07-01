#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the 1st number: ");
    scanf("%d", &a);
    printf("enter the 2st number: ");
    scanf("%d", &b);
    printf("enter the 3st number: ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is greast number", a);
    }
    if (b > a && b > c)
    {
        printf("%d is greast number", b);
    }
    if (c > a && c > b)
    {
        printf("%d is greast number", c);
    }
}