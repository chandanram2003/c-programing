#include <stdio.h>
int main()
{
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int diagonalsum = 0;
    int Rdiagonalsum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", arr1[i][j]);
            if (i == j)
            {
                diagonalsum += arr1[i][j];
            }
            if (i + j == 2)
            {
                Rdiagonalsum += arr1[i][j];
            }
        }
        printf("\n");
    }
    printf("the sum of diagonal sum: %d\n", diagonalsum);
    printf("the sum of rdiagonal sum: %d", Rdiagonalsum);
}
