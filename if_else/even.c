#include <stdio.h>
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    //ternary operator
   // num % 2 == 0 ? printf("even number") : printf("odd number");
    if (num % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}