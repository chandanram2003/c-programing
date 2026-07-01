#include <stdio.h>
int main()
{
    int marks[10] = {66, 78, 89, 98, 76, 34, 25, 56, 23, 75};
    for (int i = 0; i < 10; i++)
    {
        if (marks[i] < 35)
        {
            printf("%d \n", i); //marks[i] print the value of less than 35 
        }
    }
    return 0;
}