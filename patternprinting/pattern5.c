#include <stdio.h>
int main()
{
    int row;
    printf("enter the row: ");
    scanf("%d", &row);
    int column;
    printf("enter the column: ");
    scanf("%d", &column);
    for (int i = 1; i <= column; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (i == 1 || i == row || j == 1 || j == column)
                printf("*");
            else
                printf(" ");

            printf(" ");
        }
        printf("\n");
    }
}