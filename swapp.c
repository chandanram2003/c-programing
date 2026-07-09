#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter two number");
    scanf("%d%d", &a, &b);
    printf("without swapping %d and %d", a, b);
    c = a;
    a = b;
    b = c;
    printf(" after awapping of %d and %d", a, b);
}
