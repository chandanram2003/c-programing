#include <stdio.h>
int fun(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += a[i];
    }
    return sum;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = fun(arr, n);
    printf("the sum of %d", ans);
}