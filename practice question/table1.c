#include <stdio.h>
int main()
{
    int n, a = 1;
    printf("Enter the number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", a);
        a = a * 2;
    }
}