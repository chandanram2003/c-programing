#include <stdio.h>
int main()
{
    int n;
    printf("emter the no: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int i = 1; i <= n; i++)
        {
            printf("%d", a);
            a = a + 2;
        }
        printf("\n");
    }
}
