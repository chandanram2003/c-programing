#include <stdio.h>
int main()
{
    int n;
    printf("enter the marks: ");
    scanf("%d", &n);
    if (n > 80)
    {
        printf("grade A ");
    }
    else if (n > 60)
    {
        printf("grade B");
    }
    else if (n > 40)
    {
        printf("grade c");
    }
    else
    {
        printf("grade d :");
    }
}