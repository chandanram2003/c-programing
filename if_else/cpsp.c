#include <stdio.h>
int main()
{
    int cp, sp;
    printf("enter cost price : ");
    scanf("%d", &cp);
    printf("enter selling price : ");
    scanf("%d", &sp);
    if (sp > cp)
    {
        printf("profit");
    }
    if (cp > sp)
    {
        printf("loss ");
    }
    if(cp==sp)
    {
        printf("no loss no profit");
    }
}