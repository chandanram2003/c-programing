#include <stdio.h>
int arm(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        int digit = n % 10;
        return digit * digit * digit + arm(n / 10);
    }
}
int main()
{
    int n, digit;
    printf("Enter the number:");
    scanf("%d", &n);
    int ans = arm(n);
    if (ans == n)
    {
        printf("The snumber is armstrong :");
    }
    else
    {
        printf("The snumber is not armstrong :");
    }
}