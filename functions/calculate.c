#include <stdio.h>
int add(int n, int n1)
{
    return n + n1;
}
int sub(int n, int n1)
{
    return n - n1;
}
int mul(int n, int n1)
{
    return n * n1;
}
int dev(int n, int n1)
{
    return n / n1;
}
int main()
{
    int n, n1;
    printf("Enter two number:");
    scanf("%d%d", &n, &n1);
    int ans = add(n, n1);
    int ans1 = sub(n, n1);
    int ans2 = mul(n, n1);
    int ans3 = dev(n, n1);
    printf("the addition of two numberis=%d\n", ans);
    printf("the substration of two numberis=%d\n", ans1);
    printf("the multiply of two numberis=%d\n", ans2);
    printf("the devide of two numberis=%d\n", ans3);
}