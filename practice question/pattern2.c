// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the row:");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", j);    // if we print i then the output will be 1223334444....
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
