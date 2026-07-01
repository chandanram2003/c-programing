#include <stdio.h>
int main()
{
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int squremat = 1;
    int primarydiagonal = 0;
    int secondarydiagonal = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            squremat = arr1[i][j] * 2;
            printf(" %d ", squremat);

            if (i == j)
            {
                primarydiagonal += squremat;
            }

            if (i + j == 2)
            {
                secondarydiagonal += squremat;
            }
        }
        printf("\n");
    }
    printf("primary diagonal= %d\n ", primarydiagonal);
    printf("primary diagonal= %d ",secondarydiagonal);
}