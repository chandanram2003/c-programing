#include <stdio.h>

void fun(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(p + i) = *(p + i) + 5;
    }
}

int main()
{
    int arr[] = {20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    fun(arr, n);

    printf("Increased values: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
