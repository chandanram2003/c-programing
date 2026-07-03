#include <stdio.h>
int a, b;
int main()
{
    printf("Enter the value of A:");
    scanf("%d", &a);
    printf("Enter the value of B:");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf(" after swapping a=%d and b=%d", a, b);
}