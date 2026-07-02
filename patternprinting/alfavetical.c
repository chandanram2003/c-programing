// #include <stdio.h>
// int main()
// {
//     for (int i = 0; i < 4; i++)
//     {
//         int a = 1;
//         for (int j = 0; j < 4; j++)
//         {
//             int d = a + 64;
//             char ch = (char)d;
//             printf("%c", ch);
//             a++;
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>
int main()
{
    for (int i = 4; i <= 0; i++)
    {
        int a = 1;
        for (int j = 0; j <= i; j++)
        {
            int d = a + 64;
            char ch = (char)d;
            printf("%c", ch);
            a++;
        }
        printf("\n");
    }
}