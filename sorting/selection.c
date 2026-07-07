// #include <stdio.h>
// int main()
// {
//     int arr[] = {5, 3, 2, 4, 1};
//     int n = 5, temp;
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d", arr[i]);
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     printf("\nAfter sorting\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d", arr[i]);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int arr[5] = {4, 3, 5, 2, 1};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf(" Before swapping ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
}