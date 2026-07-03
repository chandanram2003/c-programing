// #include <stdio.h>
// int main()
// {
//     int n, sum = 0, x;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     x = n;
//     while (n > 0)
//     {
//         sum = sum + (n % 10) * (n % 10) * (n % 10);
//         n = n / 10;
//     }
//     if (sum == x)
//     {
//         printf("%d is the armstrong number",x);
//     }
//     else
//     {
//         printf("%d is not armstrong number",x);
//     }
// }

#include <stdio.h>
int main()
{
    int n, x, sum = 0;
    printf("enter the number:");
    scanf("%d", &n);
    x = n;
    while (n > 0)
    {
        sum = sum + (n % 10) * (n % 10) * (n % 10);
        n = n / 10;
    }
    if (sum == x)
    {
        printf("armstrong number:");
    }
    else
    {
        printf("not armstrong");
    }
}