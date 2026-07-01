// #include <stdio.h>
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int arr1[5];
//     for (int i = 4; i >= 0; i--)
//     {
//         printf("%d", arr[i]);
//     }
//
// }

// #include <stdio.h>
// int main()
// {
//     int arr[5];
//     printf("enter the element:");
//     for (int i = 0; i <= 4; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("\n reversed array:");
//     for (int i = 4; i >= 0; i--)
//     {
//         printf("%d", arr[i]);
//     }
//     return 0;
// }


#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter the elements: ");
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array: ");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
