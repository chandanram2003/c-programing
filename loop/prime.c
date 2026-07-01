#include <stdio.h>
int main()
{
    int n, a = 0;
    printf("Enter the number:");
    scanf("%d", &n);
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (n == 1)
        printf("1 is nighter prime nor composite");
    else if (a == 0)
        printf("The given number is prime\n");
    else
        printf("The number is compoite\n");
    return 0;
}
