#include <stdio.h>
int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int a, b, ans;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("enter the value of b:");
    scanf("%d", &b);
    ans = sum(a, b);
    printf("The sum of a and b=%d", ans);
}