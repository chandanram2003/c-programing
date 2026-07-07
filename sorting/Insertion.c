// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int arr[7] = {7, 4, 5, 9, 8, 2, 1};
//     int n = 7;
//     printf("Unsorted array:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d", arr[i]);
//     }

//     // insertion sort
//     for (int i = 0; i < n - 1; i++)
//     {
//         int min = INT_MAX;
//         int mindex = -1;
//         for (int j = i; j <= n - 1; j++)
//         {
//             if (min > arr[j])
//             {
//                 min = arr[j];
//                 mindex = j;
//             }
//         }

//         int temp = arr[mindex];
//         arr[mindex] = arr[i];
//         arr[i] = temp;
//     }

//     printf("\n");
//     printf("sorted array \n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d", arr[i]);
//     }
// }

#include <stdio.h>

int main()
{
    int arr[] = {5, 3, 4, 1};
    int n = 4;

    int i, j, key;

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    printf("Sorted array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}