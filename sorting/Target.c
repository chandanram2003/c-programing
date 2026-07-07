#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 8, 9, 10};
    int target = 12;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("Pair: %d + %d = %d\n", arr[i], arr[j], target);
            }
        }
    }

    return 0;
}