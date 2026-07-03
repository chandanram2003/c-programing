// #include <stdio.h>
// int main()
// {
//     int arr[5];
//     printf("Emter the value:");
//     scanf("%d", &arr);
//     for (int i = 0; i <= arr; i++)
//     {
//         printf("The value of array is%d", arr[i]);
//     }
// }

#include <stdio.h>

int main()
{
    int arr[5];

    printf("Enter 5 values:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The values of the array are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
