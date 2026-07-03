#include <stdio.h>
int main()
{
    int a, b, choice;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);

    printf("\n1.Adddition ");
    printf("\n2.substration ");
    printf("\n3.multiplication ");
    printf("\n4.division ");
    printf("\nEnter your choice ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("addition is %d", a + b);
        break;
    case 2:
        printf("substration is %d ", a - b);
        break;
    case 3:
        printf("multiply is %d", a * b);
        break;
    case 4:
        if (b != 0)
        {
            printf("devide is %d ", a / b);
        }
        else
        {
            printf("Error! division by zero.");
        }
        break;

    default:
        printf("invalid choice");
        break;
    }
}