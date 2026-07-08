#include <stdio.h>
#include <string.h>
int main()
{
    struct book
    {
        char name[50];
        int numberofpages;
        float price;
    } a, b, c;
    a.numberofpages = 100;
    a.price = 411.5;
    strcpy(a.name, "Secret seven");

    printf("%d\n", a.numberofpages);
    printf("%f\n", a.price);
    printf("%s\n", a.name);

    return 0;
}