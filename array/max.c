#include <stdio.h>
int main()
{
    int arr[5] = {6, 8, 5, 45, 13};
    int max = 1;   //arr[0] for minimum value
    for (int i = 0; i <= 4; i++)
    {
        if (max < arr[i])     //  change the condition >
        {
            max = arr[i];
        }
    }
    printf("%d", max);
}